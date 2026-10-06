/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0ac06c; end: 10b0ac07f; -[SCUnusedPlugInScopeContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0ac06c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ca58,0);
  return;
}



/* Entry: 10b0ac080; end: 10b0ac0af; -[SCUnusedScopeContainer exposeScope:] */

void FUN_10b0ac080(void)

{
  _objc_opt_class();
  func_0x00010b0ae544(&PTR____CFConstantStringClassReference_110f5b7f8);
  return;
}



/* Entry: 10b0ac0b0; end: 10b0ac0b7; -[SCUnusedScopeContainer removeScope] */

undefined8 FUN_10b0ac0b0(void)

{
  return 0;
}



/* Entry: 10b0ac0b8; end: 10b0ac0bf; -[SCScopeLifecycleBeginScheduler _assertExpectedQueue:] */

undefined8 FUN_10b0ac0b8(void)

{
  return 1;
}



/* Entry: 10b0ac0c0; end: 10b0ac0fb; -[SCScopeLifecycleBeginScheduler .cxx_destruct] */

void FUN_10b0ac0c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ac0fc; end: 10b0ac1f3; -[SCScopeLifecycleDeferredEntryPoints setServiceContainer:asRequirementOf:] */

void FUN_10b0ac0fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x00010be46740(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + 0x18);
  func_0x00010c0e00e0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,lVar1);
  }
  func_0x00010befa120(puVar2,param_2,param_3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0ac1f4; end: 10b0ac34f; -[SCScopeLifecycleDeferredEntryPoints setServiceAvailableCallback:forServiceContainer:] */

void FUN_10b0ac1f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x00010be46780(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be46740(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0e00e0(puVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar4,lVar3);
  }
  uVar5 = param_3;
  _objc_retainBlock(param_3);
  func_0x00010befa120(puVar4,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0ac350; end: 10b0ac48f; -[SCScopeLifecycleDeferredEntryPoints .cxx_destruct] */

void FUN_10b0ac350(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ac490; end: 10b0ac56f; -[SCScopeLifecycleEntryPoints removeAllOnQueue:] */

void FUN_10b0ac490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    func_0x00010bddf820(param_1,param_2,param_3);
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c117720(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c117720();
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b0ac570; end: 10b0ac6fb; -[SCScopeLifecycleEntryPoints _cleanupMostRecentEntryPointOnQueue:] */

void FUN_10b0ac570(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_copyWeak(auStack_38,param_1 + 0x18);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cd60(*(undefined8 *)(param_1 + 8));
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 == 0) {
    func_0x00010bfaf680(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    _objc_initWeak(auStack_40,param_1);
    _objc_copyWeak(auStack_50,auStack_38);
    _objc_retain(lVar1);
    _objc_copyWeak(auStack_48,auStack_40);
    _objc_retain(param_3);
    func_0x00010befa3a0(param_3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_40);
  }
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0ac6fc; end: 10b0ac80f;  */

void FUN_10b0ac6fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf975c0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf940a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c2a4b00(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b0ac810; end: 10b0ac867;  */

void FUN_10b0ac810(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf975a0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bddf820(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0ac868; end: 10b0ac87f; -[SCScopeLifecycleEntryPoints debugRepresentation] */

void FUN_10b0ac868(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ac880; end: 10b0ac8b7; -[SCScopeLifecycleEntryPoints .cxx_destruct] */

void FUN_10b0ac880(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ac8b8; end: 10b0ac8e7; -[SCScopeLifecycleContext setAvailableScope:] */

void FUN_10b0ac8b8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0ac8e8; end: 10b0ac917; -[SCScopeLifecycleContext setOperationQueue:] */

void FUN_10b0ac8e8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0ac918; end: 10b0ac947; -[SCScopeLifecycleContext setMonitor:] */

void FUN_10b0ac918(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b0ac948; end: 10b0ac977; -[SCScopeLifecycleContext setConfigProvider:] */

void FUN_10b0ac948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0ac978; end: 10b0ac97f; -[SCScopeLifecycleContext eventSignaller] */

undefined8 FUN_10b0ac978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0ac980; end: 10b0ac9af; -[SCScopeLifecycleContext setEventSignaller:] */

void FUN_10b0ac980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0ac9b0; end: 10b0ac9df; -[SCScopeLifecycleContext setDelayedEntryPointsHandler:] */

void FUN_10b0ac9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0ac9e0; end: 10b0aca3f; -[SCScopeLifecycleContext .cxx_destruct] */

void FUN_10b0ac9e0(long param_1)

{
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



/* Entry: 10b0aca40; end: 10b0aca67; -[SCOptionalMultiScopeContainer removeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0aca40(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + _DAT_11278caa4));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0aca68; end: 10b0aca7b; -[SCOptionalMultiScopeContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0aca68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278caa4,0);
  return;
}



/* Entry: 10b0aca7c; end: 10b0aca8b; -[SCOptionalScopeContainer scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0aca7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278caa8),PTR_s_scope_112631b68);
  return;
}



/* Entry: 10b0aca8c; end: 10b0acaeb; -[SCOptionalScopeContainer exposeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0aca8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c071800();
  if ((int)lVar1 != 0) {
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11278caa8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0acaec; end: 10b0acafb; -[SCOptionalScopeContainer removeScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0acaec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278caa8),PTR_s_removeScope_112629290);
  return;
}



/* Entry: 10b0acafc; end: 10b0acb0f; -[SCOptionalScopeContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0acafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278caa8,0);
  return;
}



/* Entry: 10b0acb10; end: 10b0acc1f; -[SCScopeLifecycleSubLifecycles remove:] */

void FUN_10b0acb10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bf940a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c2a4b00(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0acc20; end: 10b0acccb;  */

void FUN_10b0acc20(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(lVar1);
    _objc_sync_enter(lVar1);
    uVar2 = *(ulong *)(lVar1 + 8);
    func_0x00010bf4b900(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    if ((uVar2 & 1) != 0) {
      func_0x00010c12d360(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
      if (*(long *)(lVar1 + 0x10) != 0) {
        lVar3 = *(long *)(lVar1 + 8);
        func_0x00010bf529e0();
        if (lVar3 == 0) {
          func_0x00010bfaf680(*(undefined8 *)(lVar1 + 0x10));
        }
      }
    }
    _objc_sync_exit(lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0acccc; end: 10b0ace8f; -[SCScopeLifecycleSubLifecycles removeAll] */

void FUN_10b0acccc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126afc98;
      func_0x00010c0da5c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar2;
      _objc_release(uVar4);
    }
    else {
      puVar2 = PTR_PTR_1126afc98;
      func_0x00010bf0c040();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar2;
      _objc_release(uVar4);
      unaff_x20 = *(long *)(param_1 + 8);
      func_0x00010bf51e00();
      lVar1 = unaff_x20;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar6 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(unaff_x20);
          }
          func_0x00010c12a920(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = unaff_x20;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x20);
    }
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c117720();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    _objc_release(unaff_x20);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    __Unwind_Resume();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar6 = *(long *)(lVar1 + 8);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar4 = *(undefined8 *)(lVar7 * 8);
        func_0x00010bf663c0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    }
    lVar3 = lVar6;
    _objc_release(lVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      ___stack_chk_fail();
      _objc_release(lVar6);
      _objc_release(puVar2);
      __Unwind_Resume(lVar3);
      _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ace90; end: 10b0acffb; -[SCScopeLifecycleSubLifecycles debugRepresentation] */

void FUN_10b0ace90(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar4 = *(undefined8 *)(lVar7 * 8);
      func_0x00010bf663c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar6;
    func_0x00010bf52a60();
  }
  lVar3 = lVar6;
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  _objc_release(puVar2);
  __Unwind_Resume(lVar3);
  _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 10b0acffc; end: 10b0ad02b; -[SCScopeLifecycleSubLifecycles .cxx_destruct] */

void FUN_10b0acffc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ad02c; end: 10b0ad0a7;  */

void FUN_10b0ad02c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  func_0x000107c2bd60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f5b8b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0ad0a8; end: 10b0ad0df;  */

void FUN_10b0ad0a8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f5b8d8);
  return;
}



/* Entry: 10b0ad0e0; end: 10b0ad0fb; -[SCScopeLifecycle unusedPlugInScopeContainer] */

void FUN_10b0ad0e0(void)

{
  _objc_opt_new(PTR_PTR_1126df8a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ad0fc; end: 10b0ad117; -[SCScopeLifecycle unusedScopeContainer] */

void FUN_10b0ad0fc(void)

{
  _objc_opt_new(PTR_PTR_1126df8b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ad118; end: 10b0ad133; -[SCScopeLifecycle unusedMultiScopeContainer] */

void FUN_10b0ad118(void)

{
  _objc_opt_new(PTR_PTR_1126df8c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ad134; end: 10b0ad187;  */

void FUN_10b0ad134(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0ad188; end: 10b0ad237;  */

void FUN_10b0ad188(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15f6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c150960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f5b8f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0ad238; end: 10b0ad373; -[SCScopeLifecycle debugRepresentation] */

void FUN_10b0ad238(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong unaff_x23;
  long unaff_x24;
  long lVar9;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  long lStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  ulong *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_1e8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f5b918;
  lVar1 = param_1;
  func_0x00010c098dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f5b938;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_50 = lVar1;
  func_0x00010bf663c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f5b958;
  uVar3 = *(ulong *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bf663c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_40 = uVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar6 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    __Unwind_Resume();
    pcStack_78 = FUN_10b0ad374;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar4 = *(long *)(lVar6 + 0x40);
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010bf129c0();
    _objc_retainAutoreleasedReturnValue();
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    func_0x00010bf9e760();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      unaff_x24 = *plStack_180;
      do {
        lVar9 = 0;
        do {
          if (*plStack_180 != unaff_x24) {
            _objc_enumerationMutation(lVar6);
          }
          uVar3 = *(ulong *)(lStack_188 + lVar9 * 8);
          uVar5 = uVar3;
          func_0x00010bfd6ea0();
          if ((uVar5 & 1) != 0) {
            func_0x00010c15f960();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = uVar3;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12a920(lVar4);
            _objc_release(unaff_x23);
            _objc_release(uVar3);
          }
          lVar9 = lVar9 + 1;
        } while (lVar1 != lVar9);
        lVar1 = lVar6;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar6);
    lVar1 = lVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(lVar6);
    _objc_release(lVar4);
    __Unwind_Resume();
    pcStack_198 = FUN_10b0ad52c;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar6 = *(long *)(lVar1 + 0x40);
    ppuStack_1a0 = &puStack_80;
    func_0x00010bf129c0();
    _objc_retainAutoreleasedReturnValue();
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    puStack_2a0 = (ulong *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lVar4 = *(long *)(lVar1 + 0x20);
    _objc_retain(lVar4);
    lVar1 = lVar4;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      unaff_x23 = *puStack_2a0;
      do {
        unaff_x24 = 0;
        do {
          if (*puStack_2a0 != unaff_x23) {
            _objc_enumerationMutation(lVar4);
          }
          uVar3 = *(ulong *)(lStack_2a8 + unaff_x24 * 8);
          func_0x00010c15f6a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12be20(lVar6);
          _objc_release(uVar3);
          unaff_x24 = unaff_x24 + 1;
        } while (lVar1 != unaff_x24);
        lVar1 = lVar4;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar4);
    lVar1 = lVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar9 = lVar1;
    __Unwind_Resume();
    pcStack_2b8 = FUN_10b0ad6a0;
    lStack_2f0 = unaff_x24;
    uStack_2e8 = unaff_x23;
    uStack_2e0 = uVar3;
    lStack_2d8 = lVar1;
    lStack_2d0 = lVar4;
    lStack_2c8 = lVar6;
    ppuStack_2c0 = &ppuStack_1a0;
    _objc_retain();
    _objc_sync_enter(lVar9);
    if (*(long *)(lVar9 + 8) == 0) {
      uVar2 = *(undefined8 *)(lVar9 + 0x40);
      func_0x00010c0ebaa0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x00010bf5fce0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(uVar2);
      _objc_release(puVar7);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(lVar9 + 0x40);
      func_0x00010c0d0bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c098ca0();
      puVar7 = PTR_PTR_1126afc98;
      func_0x00010bf0c040();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(lVar9 + 8);
      *(undefined **)(lVar9 + 8) = puVar7;
      _objc_release(uVar8);
      _objc_initWeak(auStack_2f8,lVar9);
      uVar8 = *(undefined8 *)(lVar9 + 0x28);
      func_0x00010c12aa40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_300,auStack_2f8);
      _objc_retain(uVar2);
      func_0x00010c2a4b00(uVar8);
      _objc_release(uVar8);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_300);
      _objc_destroyWeak(auStack_2f8);
      _objc_release(uVar2);
    }
    _objc_sync_exit(lVar9);
    _objc_release(lVar9);
    func_0x00010c117720(*(undefined8 *)(lVar9 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ad374; end: 10b0ad52b; -[SCScopeLifecycle _removeExternalAccessOfAllExposedServices] */

void FUN_10b0ad374(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long lVar8;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  long lStack_280;
  ulong uStack_278;
  ulong uStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  ulong *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf129c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf9e760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x24 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x22 = *(ulong *)(lStack_118 + lVar8 * 8);
        uVar3 = unaff_x22;
        func_0x00010bfd6ea0();
        if ((uVar3 & 1) != 0) {
          func_0x00010c15f960();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = unaff_x22;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12a920(lVar1);
          _objc_release(unaff_x23);
          _objc_release(unaff_x22);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(lVar1);
  __Unwind_Resume();
  pcStack_128 = FUN_10b0ad52c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(lVar2 + 0x40);
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010bf129c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  puStack_230 = (ulong *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar8 = *(long *)(lVar2 + 0x20);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x23 = *puStack_230;
    do {
      unaff_x24 = 0;
      do {
        if (*puStack_230 != unaff_x23) {
          _objc_enumerationMutation(lVar8);
        }
        unaff_x22 = *(ulong *)(lStack_238 + unaff_x24 * 8);
        func_0x00010c15f6a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12be20(lVar1);
        _objc_release(unaff_x22);
        unaff_x24 = unaff_x24 + 1;
      } while (lVar2 != unaff_x24);
      lVar2 = lVar8;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar8);
  _objc_release(lVar1);
  lVar4 = lVar2;
  __Unwind_Resume();
  pcStack_248 = FUN_10b0ad6a0;
  lStack_280 = unaff_x24;
  uStack_278 = unaff_x23;
  uStack_270 = unaff_x22;
  lStack_268 = lVar2;
  lStack_260 = lVar8;
  lStack_258 = lVar1;
  ppuStack_250 = &puStack_130;
  _objc_retain();
  _objc_sync_enter(lVar4);
  if (*(long *)(lVar4 + 8) == 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    func_0x00010c0ebaa0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010bf5fce0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar5);
    _objc_release(puVar6);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    func_0x00010c0d0bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c098ca0();
    puVar6 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar4 + 8);
    *(undefined **)(lVar4 + 8) = puVar6;
    _objc_release(uVar7);
    _objc_initWeak(auStack_288,lVar4);
    uVar7 = *(undefined8 *)(lVar4 + 0x28);
    func_0x00010c12aa40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_290,auStack_288);
    _objc_retain(uVar5);
    func_0x00010c2a4b00(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_290);
    _objc_destroyWeak(auStack_288);
    _objc_release(uVar5);
  }
  _objc_sync_exit(lVar4);
  _objc_release(lVar4);
  func_0x00010c117720(*(undefined8 *)(lVar4 + 8));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ad52c; end: 10b0ad69f; -[SCScopeLifecycle _removeExternalAccessOfAllPendingDeferredServices] */

void FUN_10b0ad52c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf129c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x23 = *plStack_110;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(lVar7);
        }
        unaff_x22 = *(undefined8 *)(lStack_118 + unaff_x24 * 8);
        func_0x00010c15f6a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12be20(lVar1);
        _objc_release(unaff_x22);
        unaff_x24 = unaff_x24 + 1;
      } while (lVar2 != unaff_x24);
      lVar2 = lVar7;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar7);
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar3 = lVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_10b0ad6a0;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  lStack_148 = lVar2;
  lStack_140 = lVar7;
  lStack_138 = lVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_sync_enter(lVar3);
  if (*(long *)(lVar3 + 8) == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x40);
    func_0x00010c0ebaa0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010bf5fce0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(lVar3 + 0x40);
    func_0x00010c0d0bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c098ca0();
    puVar5 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar3 + 8);
    *(undefined **)(lVar3 + 8) = puVar5;
    _objc_release(uVar6);
    _objc_initWeak(auStack_168,lVar3);
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    func_0x00010c12aa40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_170,auStack_168);
    _objc_retain(uVar4);
    func_0x00010c2a4b00(uVar6);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
    _objc_release(uVar4);
  }
  _objc_sync_exit(lVar3);
  _objc_release(lVar3);
  func_0x00010c117720(*(undefined8 *)(lVar3 + 8));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ad6a0; end: 10b0ad8ab; -[SCScopeLifecycle end] */

void FUN_10b0ad6a0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 8) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0ebaa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010bf5fce0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0d0bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c098ca0();
    puVar2 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c12aa40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar1);
    func_0x00010c2a4b00(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010c117720(*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ad8ac; end: 10b0ad9cb;  */

void FUN_10b0ad8ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be8c000(lVar1);
    func_0x00010be8c020(lVar1);
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c0ebaa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12af00(uVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10b0ad9cc;
    puStack_48 = &UNK_110883780;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_40 = uVar3;
    lStack_38 = lVar1;
    func_0x00010c2a4b00(uVar4,param_2,&puStack_60);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uStack_40);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b0ad9cc; end: 10b0ad9fb;  */

void FUN_10b0ad9cc(long param_1,undefined8 param_2)

{
  func_0x00010c098c80(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 8),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10b0ad9fc; end: 10b0ada7b; -[SCScopeLifecycle scopeContainer:removingScope:] */

void FUN_10b0ad9fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0d0bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1505a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0ada7c; end: 10b0adafb; -[SCScopeLifecycle scopeContainer:overExposedScope:] */

void FUN_10b0ada7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0d0bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150540();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0adafc; end: 10b0adb7b; -[SCScopeLifecycle scopeContainer:overRemovedScope:] */

void FUN_10b0adafc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0d0bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150540();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0adb7c; end: 10b0adbf7; -[SCScopeLifecycle scopeContainer:duplicatedLifecycle:] */

void FUN_10b0adb7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0d0bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c098c60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0adbf8; end: 10b0adcff; -[SCScopeLifecycle entryPointEnding:] */

void FUN_10b0adbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b0add00;
  puStack_40 = &UNK_11087bb90;
  _objc_retain(param_3);
  ppuVar1 = &puStack_58;
  uStack_38 = param_3;
  func_0x000107c31824(ppuVar1);
  _objc_release(uStack_38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0d0bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf974c0();
  _objc_release(uVar2);
  func_0x000107c31828(ppuVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0add00; end: 10b0add7b;  */

void FUN_10b0add00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  func_0x000107c2bd60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f5b978);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0add7c; end: 10b0addfb; -[SCScopeLifecycle entryPointEnded:] */

void FUN_10b0add7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0d0bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf974a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0addfc; end: 10b0ade33;  */

void FUN_10b0addfc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f5b998);
  return;
}



/* Entry: 10b0ade34; end: 10b0ade93;  */

void FUN_10b0ade34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bded5a0(lVar1,param_2,**(undefined2 **)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
    func_0x000107c3181c(*(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0ade94; end: 10b0adeab;  */

void FUN_10b0ade94(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b0adeac; end: 10b0adedb; -[SCScopeLifecycle setContext:] */

void FUN_10b0adeac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0adedc; end: 10b0adf97; -[SCScopeLifecycle .cxx_destruct] */

void FUN_10b0adedc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x118);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
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



/* Entry: 10b0adf98; end: 10b0adfa3;  */

void FUN_10b0adf98(long param_1,undefined8 param_2)

{
  code *pcVar1;
  uint *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_a0 [24];
  uint auStack_88 [6];
  undefined4 auStack_70 [6];
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  __ZSt9terminatev();
  lStack_40 = param_1;
  uStack_38 = param_2;
  _fopen();
  if (param_1 != 0) {
    return;
  }
  func_0x000109d04e34(auStack_a0,&lStack_40);
  func_0x00010928a5e0(auStack_88,&UNK_10f72794e,auStack_a0);
  puVar2 = auStack_88;
  func_0x000109259240(auStack_70,puVar2,&UNK_10f727964);
  ___error();
  uVar3 = (ulong)*puVar2;
  _strerror(uVar3);
  puVar4 = auStack_70;
  func_0x000109259240(auStack_58,puVar4,uVar3);
  ___error();
  FUN_10b0ae0d4(auStack_58,*puVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b0ae04c);
  (*pcVar1)();
}



/* Entry: 10b0adfa4; end: 10b0ae0af;  */

void FUN_10b0adfa4(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  uint *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_90 [24];
  uint auStack_78 [6];
  undefined4 auStack_60 [6];
  undefined1 auStack_48 [24];
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = param_1;
  uStack_28 = param_2;
  _fopen(param_1,*(undefined8 *)
                  ((long)&PTR_DAT_110cb77f8 + ((param_3 << 0x20) + -0x200000000 >> 0x1d)));
  if (param_1 != 0) {
    return;
  }
  func_0x000109d04e34(auStack_90,&lStack_30);
  func_0x00010928a5e0(auStack_78,&UNK_10f72794e,auStack_90);
  puVar2 = auStack_78;
  func_0x000109259240(auStack_60,puVar2,&UNK_10f727964);
  ___error();
  uVar3 = (ulong)*puVar2;
  _strerror(uVar3);
  puVar4 = auStack_60;
  func_0x000109259240(auStack_48,puVar4,uVar3);
  ___error();
  FUN_10b0ae0d4(auStack_48,*puVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b0ae04c);
  (*pcVar1)();
}



/* Entry: 10b0ae0b0; end: 10b0ae0d3;  */

void FUN_10b0ae0b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  _fwrite(param_2,1,param_3,*param_1);
  return;
}



/* Entry: 10b0ae0d4; end: 10b0ae177;  */

void FUN_10b0ae0d4(undefined8 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x18;
  ___cxa_allocate_exception();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *puVar2 = &PTR_FUN_110cb7878;
  *(undefined4 *)(puVar2 + 2) = param_2;
  ___cxa_throw(puVar2,&PTR_DAT_110ba0ff8,FUN_10b0ae178);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b0ae150);
  (*pcVar1)();
}



/* Entry: 10b0ae178; end: 10b0ae17b;  */

void FUN_10b0ae178(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10b0ae17c; end: 10b0ae18f;  */

void FUN_10b0ae17c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0ae190; end: 10b0ae4af;  */

void FUN_10b0ae190(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 ***pppuVar5;
  undefined **ppuVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  code *pcVar9;
  undefined1 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined **appuStack_78 [2];
  undefined8 uStack_68;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuStack_60 = (undefined8 ***)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = param_4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&ppuStack_60,param_3 << 1,0);
  uStack_68 = uStack_48;
  uVar2 = uStack_58;
  pppuVar5 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    uVar2 = uStack_50 >> 0x38;
    pppuVar5 = &ppuStack_60;
  }
  _vsnprintf(pppuVar5,uVar2 + 1,param_2);
  iVar4 = (int)pppuVar5;
  if (-1 < iVar4) {
    uVar1 = (uint)uStack_58;
    if (-1 < (long)uStack_50) {
      uVar1 = (uint)uStack_50._7_1_;
    }
    if ((int)uVar1 < iVar4) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (&ppuStack_60,(ulong)pppuVar5 & 0xffffffff,0);
      uStack_68 = uStack_48;
      pppuVar5 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        pppuVar5 = &ppuStack_60;
      }
      _vsnprintf(pppuVar5,iVar4 + 1,param_2);
      param_1[1] = uStack_58;
      *param_1 = (long)ppuStack_60;
      param_1[2] = uStack_50;
      ppuStack_60 = (undefined8 ***)0x0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (&ppuStack_60,(ulong)pppuVar5 & 0xffffffff,0);
      param_1[1] = uStack_58;
      *param_1 = (long)ppuStack_60;
      param_1[2] = uStack_50;
      uStack_58 = 0;
      uStack_50 = 0;
      ppuStack_60 = (undefined8 ***)0x0;
    }
    goto LAB_10b0ae35c;
  }
  ppuVar6 = &PTR___tlv_bootstrap_11340e098;
  (*(code *)PTR___tlv_bootstrap_11340e098)();
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10b0ae38c);
    (*pcVar9)();
  }
  pcVar9 = (code *)*ppuVar6;
  if (param_3 < 0x17) {
    uStack_80 = CONCAT17((char)param_3,(undefined7)uStack_80);
    if (param_3 != 0) goto LAB_10b0ae300;
  }
  else {
    puVar3 = (undefined1 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar3 = (undefined1 *)((param_3 | 7) + 1);
    }
    ppuVar7 = (undefined1 **)puVar3;
    __Znwm();
    uStack_80 = (ulong)puVar3 | 0x8000000000000000;
    puStack_90 = (undefined1 *)ppuVar7;
    uStack_88 = param_3;
LAB_10b0ae300:
    _memmove(ppuVar7,param_2,param_3);
    ppuVar8 = ppuVar7;
  }
  *(undefined1 *)((long)ppuVar8 + param_3) = 0;
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (appuStack_78,&puStack_90);
  appuStack_78[0] = &PTR_DAT_110cb78e0;
  (*pcVar9)(appuStack_78);
  __ZNSt13runtime_errorD2Ev(appuStack_78);
  if ((long)uStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  func_0x000107c31940(param_1,"");
LAB_10b0ae35c:
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  return;
}



/* Entry: 10b0ae4b0; end: 10b0ae4b7;  */

void FUN_10b0ae4b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10b0ae4b8; end: 10b0ae507;  */

void FUN_10b0ae4b8(undefined8 param_1,undefined8 param_2)

{
  FUN_10b0ae190(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 10b0ae508; end: 10b0ae57b; -[SCLockfreeLazy ifCreated] */

void FUN_10b0ae508(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0ae57c; end: 10b0ae597; +[SCAttributedBlockOperation blockOperationWithCaller:appInsightsMetadataStorage:attributionKey:block:] */

void FUN_10b0ae57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126df8d0,PTR_s_blockOperationWithCaller_extraAt_1125a4ec8,param_3,0,param_4,
             param_5,param_6);
  return;
}



/* Entry: 10b0ae598; end: 10b0ae6eb; +[SCAttributedBlockOperation blockOperationWithCaller:extraAttribution:appInsightsMetadataStorage:attributionKey:block:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0ae598(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126df8d0;
  _objc_retain(param_6);
  func_0x00010bf1d420(puVar1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db9f38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
  }
  uVar5 = *(undefined8 *)(puVar1 + _DAT_11278cb40);
  *(undefined **)(puVar1 + _DAT_11278cb40) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar1 + _DAT_11278cb44);
  *(undefined8 *)(puVar1 + _DAT_11278cb44) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar5);
  uVar5 = param_6;
  func_0x00010bf51e00();
  _objc_release(param_6);
  uVar4 = *(undefined8 *)(puVar1 + _DAT_11278cb48);
  *(undefined8 *)(puVar1 + _DAT_11278cb48) = uVar5;
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0ae6ec; end: 10b0ae783; -[SCAttributedBlockOperation dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0ae6ec(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  if ((*(long *)(param_1 + _DAT_11278cb40) != 0) && (*(long *)(param_1 + _DAT_11278cb48) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278cb44);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d07e0();
    _objc_release(uVar1);
  }
  puStack_38 = PTR_PTR_1127057a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b0ae784; end: 10b0ae7d3; -[SCAttributedBlockOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0ae784(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278cb44,0);
  _objc_storeStrong(param_1 + _DAT_11278cb48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278cb40,0);
  return;
}



/* Entry: 10b0ae7d4; end: 10b0ae803; -[SCAttributedBlockOperationProvider .cxx_destruct] */

void FUN_10b0ae7d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ae804; end: 10b0ae83f; -[SCAppStartupState .cxx_destruct] */

void FUN_10b0ae804(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0ae840; end: 10b0ae84b; -[SCApplicationShortcutItemsEntryPoint begin] */

void FUN_10b0ae840(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf54970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIApplicationShortcutItem_1126df8e0,
             PTR_s_createApplicationShortcutItems_1125b2c00);
  return;
}



/* Entry: 10b0ae84c; end: 10b0ae85b; -[SCApplicationShortcutItemsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0ae84c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11278cb60);
  return;
}



/* Entry: 10b0ae85c; end: 10b0aea2b;  */

void FUN_10b0ae85c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010b0af20c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIApplicationShortcutIcon_1126df8e8;
  func_0x00010bfe5d00(PTR__OBJC_CLASS___UIApplicationShortcutIcon_1126df8e8,param_2,
                      &PTR____CFConstantStringClassReference_110f5ba58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIApplicationShortcutItem_1126df8e0;
  _objc_alloc(PTR__OBJC_CLASS___UIApplicationShortcutItem_1126df8e0);
  func_0x00010c055d00();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0aea2c; end: 10b0afe53;  */

void FUN_10b0aea2c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5ba98;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f5ba98,
                      &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10b0afe54; end: 10b0b0187;  */

/* WARNING: Removing unreachable block (ram,0x00010b0b07b0) */
/* WARNING: Removing unreachable block (ram,0x00010b0b0148) */
/* WARNING: Removing unreachable block (ram,0x00010b0b047c) */
/* WARNING: Removing unreachable block (ram,0x00010b0b0a78) */

char * FUN_10b0afe54(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  char *unaff_x25;
  char *unaff_x26;
  char *pcStack_390;
  undefined *puStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined1 ****ppppuStack_370;
  code *pcStack_368;
  char acStack_360 [24];
  undefined1 *puStack_348;
  char acStack_340 [24];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  char *pcStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  char acStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar10 = param_4;
  pcVar14 = param_5;
  pcVar4 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x000107c27984(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar6 = acStack_d8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_c0 = unaff_x25;
    func_0x000107c278ac(&pcStack_c0);
    lVar17 = 0;
    pcVar10 = param_6;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_10b0b0188;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar9 = pcVar6;
  pcVar11 = pcVar10;
  pcVar15 = pcVar14;
  pcVar13 = pcVar4;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  _objc_retain(pcVar14);
  if (pcVar3 != (char *)0x0) {
    plVar18 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_198,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_180,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_168,pcVar2);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      unaff_x26 = pcVar14;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar14);
    func_0x000107c278b8(auStack_150,unaff_x26);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x000107c27984(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar8 = "\x01";
    unaff_x25 = acStack_1b8;
    pcVar9 = acStack_1b8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_1a0 = unaff_x25;
    func_0x000107c278ac(&pcStack_1a0);
    lVar17 = 0;
    pcVar11 = pcVar4;
    do {
      if ((&cStack_139)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar14);
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(pcVar14);
    pcStack_200 = acStack_198;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcStack_200);
    _objc_release(pcVar14);
    _objc_release(pcVar10);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    pcVar5 = pcVar4;
    __Unwind_Resume();
    pcStack_1c8 = FUN_10b0b04bc;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar8;
    pcVar3 = pcVar9;
    pcVar12 = pcVar11;
    pcVar16 = pcVar15;
    pcStack_210 = unaff_x26;
    pcStack_208 = unaff_x25;
    pcStack_1f8 = pcVar4;
    pcStack_1f0 = pcVar14;
    pcStack_1e8 = pcVar10;
    pcStack_1e0 = pcVar6;
    pcStack_1d8 = pcVar1;
    ppuStack_1d0 = &puStack_f0;
    _objc_retain(pcVar8);
    _objc_retain(pcVar9);
    _objc_retain(pcVar11);
    _objc_retain(pcVar15);
    if (pcVar5 != (char *)0x0) {
      plVar18 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(acStack_278,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(auStack_260,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x000107c278b8(auStack_248,pcVar1);
      _objc_retain(pcVar15);
      if (pcVar15 == (char *)0x0) {
        unaff_x26 = "";
      }
      else {
        _objc_retainAutorelease(pcVar15);
        unaff_x26 = pcVar15;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar15);
      func_0x000107c278b8(auStack_230,unaff_x26);
      acStack_298[0] = '\0';
      acStack_298[1] = '\0';
      acStack_298[2] = '\0';
      acStack_298[3] = '\0';
      acStack_298[4] = '\0';
      acStack_298[5] = '\0';
      acStack_298[6] = '\0';
      acStack_298[7] = '\0';
      acStack_298[8] = '\0';
      acStack_298[9] = '\0';
      acStack_298[10] = '\0';
      acStack_298[0xb] = '\0';
      acStack_298[0xc] = '\0';
      acStack_298[0xd] = '\0';
      acStack_298[0xe] = '\0';
      acStack_298[0xf] = '\0';
      acStack_298[0x10] = '\0';
      acStack_298[0x11] = '\0';
      acStack_298[0x12] = '\0';
      acStack_298[0x13] = '\0';
      acStack_298[0x14] = '\0';
      acStack_298[0x15] = '\0';
      acStack_298[0x16] = '\0';
      acStack_298[0x17] = '\0';
      func_0x000107c27984(acStack_298,acStack_278,&lStack_218,4);
      pcVar2 = "";
      unaff_x25 = acStack_298;
      pcVar3 = acStack_298;
      (**(code **)(*plVar18 + 0x18))(plVar18);
      pcStack_280 = unaff_x25;
      func_0x000107c278ac(&pcStack_280);
      lVar17 = 0;
      pcVar12 = pcVar13;
      do {
        if ((&cStack_219)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x60);
    }
    _objc_release(pcVar15);
    _objc_release(pcVar11);
    _objc_release(pcVar9);
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      _objc_release(pcVar15);
      do {
        unaff_x25 = unaff_x25 + -0x18;
      } while (unaff_x25 != acStack_278);
      _objc_release(pcVar15);
      _objc_release(pcVar11);
      _objc_release(pcVar9);
      _objc_release(pcVar8);
      pcVar6 = pcVar1;
      __Unwind_Resume();
      pcStack_2a8 = FUN_10b0b07f0;
      lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_2f0 = unaff_x26;
      pcStack_2e8 = unaff_x25;
      pcStack_2e0 = acStack_278;
      pcStack_2d8 = pcVar1;
      pcStack_2d0 = pcVar15;
      pcStack_2c8 = pcVar11;
      pcStack_2c0 = pcVar9;
      pcStack_2b8 = pcVar8;
      pppuStack_2b0 = &ppuStack_1d0;
      _objc_retain(pcVar2);
      _objc_retain(pcVar3);
      _objc_retain(pcVar12);
      pcVar1 = acStack_278;
      if (pcVar6 != (char *)0x0) {
        plVar18 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x000107c278b8(acStack_340,pcVar1);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar3);
          pcVar1 = pcVar3;
          func_0x00010bdc3520(pcVar3);
        }
        _objc_release(pcVar3);
        func_0x000107c278b8(auStack_328,pcVar1);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar12);
          pcVar1 = pcVar12;
          func_0x00010bdc3520(pcVar12);
        }
        _objc_release(pcVar12);
        func_0x000107c278b8(auStack_310,pcVar1);
        acStack_360[0] = '\0';
        acStack_360[1] = '\0';
        acStack_360[2] = '\0';
        acStack_360[3] = '\0';
        acStack_360[4] = '\0';
        acStack_360[5] = '\0';
        acStack_360[6] = '\0';
        acStack_360[7] = '\0';
        acStack_360[8] = '\0';
        acStack_360[9] = '\0';
        acStack_360[10] = '\0';
        acStack_360[0xb] = '\0';
        acStack_360[0xc] = '\0';
        acStack_360[0xd] = '\0';
        acStack_360[0xe] = '\0';
        acStack_360[0xf] = '\0';
        acStack_360[0x10] = '\0';
        acStack_360[0x11] = '\0';
        acStack_360[0x12] = '\0';
        acStack_360[0x13] = '\0';
        acStack_360[0x14] = '\0';
        acStack_360[0x15] = '\0';
        acStack_360[0x16] = '\0';
        acStack_360[0x17] = '\0';
        func_0x000107c27984(acStack_360,acStack_340,&lStack_2f8,3);
        (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110cb7ba8,acStack_360,pcVar16);
        puStack_348 = acStack_360;
        func_0x000107c278ac(&puStack_348);
        lVar17 = 0;
        do {
          if ((&cStack_2f9)[lVar17] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar17));
          }
          lVar17 = lVar17 + -0x18;
          pcVar1 = acStack_360;
        } while (lVar17 != -0x48);
      }
      _objc_release(pcVar12);
      _objc_release(pcVar3);
      pcVar6 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
        ___stack_chk_fail();
        _objc_release(pcVar12);
        do {
          pcVar1 = pcVar1 + -0x18;
        } while (pcVar1 != acStack_340);
        _objc_release(pcVar12);
        _objc_release(pcVar3);
        _objc_release(pcVar2);
        __Unwind_Resume();
        ppcVar7 = &pcStack_390;
        pcStack_368 = FUN_10b0b0ab0;
        puStack_388 = PTR_PTR_1127057c0;
        pcStack_390 = pcVar6;
        pcStack_380 = pcVar3;
        pcStack_378 = pcVar2;
        ppppuStack_370 = &pppuStack_2b0;
        _objc_msgSendSuper2(&pcStack_390,PTR_s_init_1125d9248);
        if (ppcVar7 != (char **)0x0) {
          pcVar1 = (char *)ppcVar7;
          (*(code *)PTR_DAT_113403208)();
          *(char **)((long)ppcVar7 + 8) = pcVar1;
        }
        return (char *)ppcVar7;
      }
      return pcVar6;
    }
    return pcVar1;
  }
  return pcVar4;
}



/* Entry: 10b0b0188; end: 10b0b04bb;  */

/* WARNING: Removing unreachable block (ram,0x00010b0b07b0) */
/* WARNING: Removing unreachable block (ram,0x00010b0b047c) */
/* WARNING: Removing unreachable block (ram,0x00010b0b0a78) */

char * FUN_10b0b0188(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  char *unaff_x25;
  char *unaff_x26;
  char *pcStack_2b0;
  undefined *puStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  char acStack_280 [24];
  undefined1 *puStack_268;
  char acStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar9 = param_4;
  pcVar11 = param_5;
  pcVar4 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x000107c27984(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "\x01";
    unaff_x25 = acStack_d8;
    pcVar5 = acStack_d8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_c0 = unaff_x25;
    func_0x000107c278ac(&pcStack_c0);
    lVar13 = 0;
    pcVar9 = param_6;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_10b0b04bc;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar5;
  pcVar10 = pcVar9;
  pcVar12 = pcVar11;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  _objc_retain(pcVar9);
  _objc_retain(pcVar11);
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_198,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_180,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_168,pcVar2);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      unaff_x26 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_150,unaff_x26);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x000107c27984(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar7 = "";
    unaff_x25 = acStack_1b8;
    pcVar8 = acStack_1b8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_1a0 = unaff_x25;
    func_0x000107c278ac(&pcStack_1a0);
    lVar13 = 0;
    pcVar10 = pcVar4;
    do {
      if ((&cStack_139)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x60);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar9);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(pcVar11);
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != acStack_198);
    _objc_release(pcVar11);
    _objc_release(pcVar9);
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    pcVar2 = pcVar4;
    __Unwind_Resume();
    pcStack_1c8 = FUN_10b0b07f0;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcStack_210 = unaff_x26;
    pcStack_208 = unaff_x25;
    pcStack_200 = acStack_198;
    pcStack_1f8 = pcVar4;
    pcStack_1f0 = pcVar11;
    pcStack_1e8 = pcVar9;
    pcStack_1e0 = pcVar5;
    pcStack_1d8 = pcVar1;
    ppuStack_1d0 = &puStack_f0;
    _objc_retain(pcVar7);
    _objc_retain(pcVar8);
    _objc_retain(pcVar10);
    pcVar1 = acStack_198;
    if (pcVar2 != (char *)0x0) {
      plVar14 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x000107c278b8(acStack_260,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(auStack_248,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x000107c278b8(auStack_230,pcVar1);
      acStack_280[0] = '\0';
      acStack_280[1] = '\0';
      acStack_280[2] = '\0';
      acStack_280[3] = '\0';
      acStack_280[4] = '\0';
      acStack_280[5] = '\0';
      acStack_280[6] = '\0';
      acStack_280[7] = '\0';
      acStack_280[8] = '\0';
      acStack_280[9] = '\0';
      acStack_280[10] = '\0';
      acStack_280[0xb] = '\0';
      acStack_280[0xc] = '\0';
      acStack_280[0xd] = '\0';
      acStack_280[0xe] = '\0';
      acStack_280[0xf] = '\0';
      acStack_280[0x10] = '\0';
      acStack_280[0x11] = '\0';
      acStack_280[0x12] = '\0';
      acStack_280[0x13] = '\0';
      acStack_280[0x14] = '\0';
      acStack_280[0x15] = '\0';
      acStack_280[0x16] = '\0';
      acStack_280[0x17] = '\0';
      func_0x000107c27984(acStack_280,acStack_260,&lStack_218,3);
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110cb7ba8,acStack_280,pcVar12);
      puStack_268 = acStack_280;
      func_0x000107c278ac(&puStack_268);
      lVar13 = 0;
      do {
        if ((&cStack_219)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        pcVar1 = acStack_280;
      } while (lVar13 != -0x48);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar8);
    pcVar5 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      _objc_release(pcVar10);
      do {
        pcVar1 = pcVar1 + -0x18;
      } while (pcVar1 != acStack_260);
      _objc_release(pcVar10);
      _objc_release(pcVar8);
      _objc_release(pcVar7);
      __Unwind_Resume();
      ppcVar6 = &pcStack_2b0;
      pcStack_288 = FUN_10b0b0ab0;
      puStack_2a8 = PTR_PTR_1127057c0;
      pcStack_2b0 = pcVar5;
      pcStack_2a0 = pcVar8;
      pcStack_298 = pcVar7;
      pppuStack_290 = &ppuStack_1d0;
      _objc_msgSendSuper2(&pcStack_2b0,PTR_s_init_1125d9248);
      if (ppcVar6 != (char **)0x0) {
        pcVar1 = (char *)ppcVar6;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)ppcVar6 + 8) = pcVar1;
      }
      return (char *)ppcVar6;
    }
    return pcVar5;
  }
  return pcVar4;
}



/* Entry: 10b0b04bc; end: 10b0b07ef;  */

/* WARNING: Removing unreachable block (ram,0x00010b0b07b0) */
/* WARNING: Removing unreachable block (ram,0x00010b0b0a78) */

char * FUN_10b0b04bc(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  char *unaff_x25;
  char *unaff_x26;
  char *pcStack_1d0;
  undefined *puStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  char acStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar7 = param_4;
  pcVar4 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x000107c27984(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "";
    unaff_x25 = acStack_d8;
    pcVar6 = acStack_d8;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pcStack_c0 = unaff_x25;
    func_0x000107c278ac(&pcStack_c0);
    lVar8 = 0;
    pcVar7 = param_6;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_10b0b07f0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_120 = acStack_b8;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  pcVar2 = acStack_b8;
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_180,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_168,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_150,pcVar2);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x000107c27984(acStack_1a0,acStack_180,&lStack_138,3);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110cb7ba8,acStack_1a0,pcVar4);
    puStack_188 = acStack_1a0;
    func_0x000107c278ac(&puStack_188);
    lVar8 = 0;
    do {
      if ((&cStack_139)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
      pcVar2 = acStack_1a0;
    } while (lVar8 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    do {
      pcVar2 = pcVar2 + -0x18;
    } while (pcVar2 != acStack_180);
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    __Unwind_Resume();
    ppcVar5 = &pcStack_1d0;
    pcStack_1a8 = FUN_10b0b0ab0;
    puStack_1c8 = PTR_PTR_1127057c0;
    pcStack_1d0 = pcVar4;
    pcStack_1c0 = pcVar6;
    pcStack_1b8 = pcVar1;
    ppuStack_1b0 = &puStack_f0;
    _objc_msgSendSuper2(&pcStack_1d0,PTR_s_init_1125d9248);
    if (ppcVar5 != (char **)0x0) {
      pcVar1 = (char *)ppcVar5;
      (*(code *)PTR_DAT_113403208)();
      *(char **)((long)ppcVar5 + 8) = pcVar1;
    }
    return (char *)ppcVar5;
  }
  return pcVar4;
}



/* Entry: 10b0b07f0; end: 10b0b0aaf;  */

/* WARNING: Removing unreachable block (ram,0x00010b0b0a78) */

char * FUN_10b0b07f0(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  char *pcStack_f0;
  undefined *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110cb7ba8,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    ppcVar2 = &pcStack_f0;
    pcStack_c8 = FUN_10b0b0ab0;
    puStack_e8 = PTR_PTR_1127057c0;
    pcStack_f0 = pcVar1;
    pcStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&pcStack_f0,PTR_s_init_1125d9248);
    if (ppcVar2 != (char **)0x0) {
      pcVar1 = (char *)ppcVar2;
      (*(code *)PTR_DAT_113403208)();
      *(char **)((long)ppcVar2 + 8) = pcVar1;
    }
    return (char *)ppcVar2;
  }
  return pcVar1;
}



/* Entry: 10b0b0ab0; end: 10b0b0b23; -[SCGrapheneCofStartupViolationMetric2 init] */

undefined1 * FUN_10b0b0ab0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127057c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0b0b24; end: 10b0b0b97; -[SCGrapheneScopegraphStartupMetric2 init] */

undefined1 * FUN_10b0b0b24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127057c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0b0b98; end: 10b0b0ec7;  */

/* WARNING: Removing unreachable block (ram,0x00010b0b14d0) */
/* WARNING: Removing unreachable block (ram,0x00010b0b0e70) */
/* WARNING: Removing unreachable block (ram,0x00010b0b11a0) */
/* WARNING: Removing unreachable block (ram,0x00010b0b1800) */

void FUN_10b0b0b98(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  undefined8 uVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  undefined1 *unaff_x23;
  double dVar11;
  double dVar12;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 *puStack_570;
  undefined8 auStack_568 [2];
  char cStack_551;
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  char acStack_4e0 [24];
  undefined1 *puStack_4c8;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  char acStack_458 [24];
  char *pcStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  char acStack_3a8 [24];
  char *pcStack_390;
  undefined8 auStack_388 [2];
  char cStack_371;
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar4 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_3;
  pcVar5 = param_4;
  pcVar8 = param_5;
  dVar11 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    plVar2 = *(long **)(param_2 + 8);
    pcVar3 = "\x01";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_a0,pcVar3);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_88,pcVar3);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar3 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_70,pcVar3);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
      dVar11 = param_1 * 1000.0;
      pcVar8 = (char *)(long)dVar11;
      pcVar3 = "\x01";
      (**(code **)(*plVar2 + 0x18))(plVar2);
      puStack_a8 = acStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar10 = 0;
      unaff_x23 = auStack_a0;
      pcVar5 = pcVar4;
      do {
        if ((&cStack_59)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x48);
    }
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  pcVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x23 = unaff_x23 + -0x18;
    } while (unaff_x23 != auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = pcVar3;
    __Unwind_Resume();
    pcVar7 = acStack_180;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = param_3;
    pcVar6 = pcVar5;
    pcVar9 = pcVar8;
    dVar12 = dVar11;
    _objc_retain(param_3);
    _objc_retain(pcVar5);
    _objc_retain(pcVar8);
    if (pcVar4 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar5);
      _objc_retain(pcVar8);
      plVar2 = *(long **)(pcVar4 + 8);
      pcVar3 = "\x01";
      (**(code **)(*plVar2 + 0x28))();
      if ((int)plVar2 != 0) {
        plVar2 = *(long **)(pcVar4 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        func_0x000107c278b8(auStack_160,pcVar3);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar3 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x000107c278b8(auStack_148,pcVar3);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar3 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x000107c278b8(auStack_130,pcVar3);
        acStack_180[0] = '\0';
        acStack_180[1] = '\0';
        acStack_180[2] = '\0';
        acStack_180[3] = '\0';
        acStack_180[4] = '\0';
        acStack_180[5] = '\0';
        acStack_180[6] = '\0';
        acStack_180[7] = '\0';
        acStack_180[8] = '\0';
        acStack_180[9] = '\0';
        acStack_180[10] = '\0';
        acStack_180[0xb] = '\0';
        acStack_180[0xc] = '\0';
        acStack_180[0xd] = '\0';
        acStack_180[0xe] = '\0';
        acStack_180[0xf] = '\0';
        acStack_180[0x10] = '\0';
        acStack_180[0x11] = '\0';
        acStack_180[0x12] = '\0';
        acStack_180[0x13] = '\0';
        acStack_180[0x14] = '\0';
        acStack_180[0x15] = '\0';
        acStack_180[0x16] = '\0';
        acStack_180[0x17] = '\0';
        func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
        dVar12 = dVar11 * 1000.0;
        pcVar9 = (char *)(long)dVar12;
        pcVar3 = "\x01";
        (**(code **)(*plVar2 + 0x18))(plVar2);
        puStack_168 = acStack_180;
        func_0x000107c278ac(&puStack_168);
        lVar10 = 0;
        unaff_x23 = auStack_160;
        pcVar6 = pcVar7;
        do {
          if ((&cStack_119)[lVar10] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar10));
          }
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != -0x48);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      _objc_release(param_3);
    }
    _objc_release(pcVar8);
    pcVar4 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      do {
        unaff_x23 = unaff_x23 + -0x18;
      } while (unaff_x23 != auStack_160);
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      _objc_release(param_3);
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      _objc_release(param_3);
      param_3 = pcVar3;
      __Unwind_Resume();
      pcVar7 = acStack_240;
      lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar3 = param_3;
      pcVar5 = pcVar6;
      pcVar8 = pcVar9;
      dVar11 = dVar12;
      _objc_retain(param_3);
      _objc_retain(pcVar6);
      _objc_retain(pcVar9);
      if (pcVar4 != (char *)0x0) {
        _objc_retain(param_3);
        _objc_retain(pcVar6);
        _objc_retain(pcVar9);
        plVar2 = *(long **)(pcVar4 + 8);
        pcVar3 = "\x01";
        (**(code **)(*plVar2 + 0x28))();
        if ((int)plVar2 != 0) {
          plVar2 = *(long **)(pcVar4 + 8);
          _objc_retain(param_3);
          if (param_3 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = param_3;
            _objc_retainAutorelease(param_3);
            func_0x00010bdc3520();
          }
          _objc_release(param_3);
          func_0x000107c278b8(auStack_220,pcVar3);
          _objc_retain(pcVar6);
          if (pcVar6 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            _objc_retainAutorelease(pcVar6);
            pcVar3 = pcVar6;
            func_0x00010bdc3520(pcVar6);
          }
          _objc_release(pcVar6);
          func_0x000107c278b8(auStack_208,pcVar3);
          _objc_retain(pcVar9);
          if (pcVar9 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            _objc_retainAutorelease(pcVar9);
            pcVar3 = pcVar9;
            func_0x00010bdc3520(pcVar9);
          }
          _objc_release(pcVar9);
          func_0x000107c278b8(auStack_1f0,pcVar3);
          acStack_240[0] = '\0';
          acStack_240[1] = '\0';
          acStack_240[2] = '\0';
          acStack_240[3] = '\0';
          acStack_240[4] = '\0';
          acStack_240[5] = '\0';
          acStack_240[6] = '\0';
          acStack_240[7] = '\0';
          acStack_240[8] = '\0';
          acStack_240[9] = '\0';
          acStack_240[10] = '\0';
          acStack_240[0xb] = '\0';
          acStack_240[0xc] = '\0';
          acStack_240[0xd] = '\0';
          acStack_240[0xe] = '\0';
          acStack_240[0xf] = '\0';
          acStack_240[0x10] = '\0';
          acStack_240[0x11] = '\0';
          acStack_240[0x12] = '\0';
          acStack_240[0x13] = '\0';
          acStack_240[0x14] = '\0';
          acStack_240[0x15] = '\0';
          acStack_240[0x16] = '\0';
          acStack_240[0x17] = '\0';
          func_0x000107c27984(acStack_240,auStack_220,&lStack_1d8,3);
          dVar11 = dVar12 * 1000.0;
          pcVar8 = (char *)(long)dVar11;
          pcVar3 = "\x01";
          (**(code **)(*plVar2 + 0x18))(plVar2);
          puStack_228 = acStack_240;
          func_0x000107c278ac(&puStack_228);
          lVar10 = 0;
          unaff_x23 = auStack_220;
          pcVar5 = pcVar7;
          do {
            if ((&cStack_1d9)[lVar10] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar10));
            }
            lVar10 = lVar10 + -0x18;
          } while (lVar10 != -0x48);
        }
        _objc_release(pcVar9);
        _objc_release(pcVar6);
        _objc_release(param_3);
      }
      _objc_release(pcVar9);
      pcVar4 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
        ___stack_chk_fail();
        _objc_release(pcVar9);
        do {
          unaff_x23 = unaff_x23 + -0x18;
        } while (unaff_x23 != auStack_220);
        _objc_release(pcVar9);
        _objc_release(pcVar6);
        _objc_release(param_3);
        _objc_release(pcVar9);
        _objc_release(pcVar6);
        _objc_release(param_3);
        param_3 = pcVar3;
        __Unwind_Resume();
        pcVar9 = acStack_300;
        lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar3 = param_3;
        pcVar6 = pcVar5;
        dVar12 = dVar11;
        _objc_retain(param_3);
        _objc_retain(pcVar5);
        _objc_retain(pcVar8);
        if (pcVar4 != (char *)0x0) {
          _objc_retain(param_3);
          _objc_retain(pcVar5);
          _objc_retain(pcVar8);
          plVar2 = *(long **)(pcVar4 + 8);
          pcVar3 = "\x01";
          (**(code **)(*plVar2 + 0x28))();
          if ((int)plVar2 != 0) {
            plVar2 = *(long **)(pcVar4 + 8);
            _objc_retain(param_3);
            if (param_3 == (char *)0x0) {
              pcVar3 = "";
            }
            else {
              pcVar3 = param_3;
              _objc_retainAutorelease(param_3);
              func_0x00010bdc3520();
            }
            _objc_release(param_3);
            func_0x000107c278b8(auStack_2e0,pcVar3);
            _objc_retain(pcVar5);
            if (pcVar5 == (char *)0x0) {
              pcVar3 = "";
            }
            else {
              _objc_retainAutorelease(pcVar5);
              pcVar3 = pcVar5;
              func_0x00010bdc3520(pcVar5);
            }
            _objc_release(pcVar5);
            func_0x000107c278b8(auStack_2c8,pcVar3);
            _objc_retain(pcVar8);
            if (pcVar8 == (char *)0x0) {
              pcVar3 = "";
            }
            else {
              _objc_retainAutorelease(pcVar8);
              pcVar3 = pcVar8;
              func_0x00010bdc3520(pcVar8);
            }
            _objc_release(pcVar8);
            func_0x000107c278b8(auStack_2b0,pcVar3);
            acStack_300[0] = '\0';
            acStack_300[1] = '\0';
            acStack_300[2] = '\0';
            acStack_300[3] = '\0';
            acStack_300[4] = '\0';
            acStack_300[5] = '\0';
            acStack_300[6] = '\0';
            acStack_300[7] = '\0';
            acStack_300[8] = '\0';
            acStack_300[9] = '\0';
            acStack_300[10] = '\0';
            acStack_300[0xb] = '\0';
            acStack_300[0xc] = '\0';
            acStack_300[0xd] = '\0';
            acStack_300[0xe] = '\0';
            acStack_300[0xf] = '\0';
            acStack_300[0x10] = '\0';
            acStack_300[0x11] = '\0';
            acStack_300[0x12] = '\0';
            acStack_300[0x13] = '\0';
            acStack_300[0x14] = '\0';
            acStack_300[0x15] = '\0';
            acStack_300[0x16] = '\0';
            acStack_300[0x17] = '\0';
            func_0x000107c27984(acStack_300,auStack_2e0,&lStack_298,3);
            dVar12 = dVar11 * 1000.0;
            pcVar3 = "\x01";
            (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7e98,acStack_300,(long)dVar12);
            puStack_2e8 = acStack_300;
            func_0x000107c278ac(&puStack_2e8);
            lVar10 = 0;
            unaff_x23 = auStack_2e0;
            pcVar6 = pcVar9;
            do {
              if ((&cStack_299)[lVar10] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar10));
              }
              lVar10 = lVar10 + -0x18;
            } while (lVar10 != -0x48);
          }
          _objc_release(pcVar8);
          _objc_release(pcVar5);
          _objc_release(param_3);
        }
        _objc_release(pcVar8);
        pcVar4 = pcVar5;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
          ___stack_chk_fail();
          _objc_release(pcVar8);
          do {
            unaff_x23 = unaff_x23 + -0x18;
          } while (unaff_x23 != auStack_2e0);
          _objc_release(pcVar8);
          _objc_release(pcVar5);
          _objc_release(param_3);
          _objc_release(pcVar8);
          _objc_release(pcVar5);
          _objc_release(param_3);
          param_3 = pcVar3;
          __Unwind_Resume();
          lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pcVar3 = param_3;
          pcVar5 = pcVar6;
          dVar11 = dVar12;
          _objc_retain(param_3);
          _objc_retain(pcVar6);
          if (pcVar4 != (char *)0x0) {
            _objc_retain(param_3);
            _objc_retain(pcVar6);
            plVar2 = *(long **)(pcVar4 + 8);
            pcVar3 = "\x01";
            (**(code **)(*plVar2 + 0x28))();
            if ((int)plVar2 != 0) {
              plVar2 = *(long **)(pcVar4 + 8);
              _objc_retain(param_3);
              if (param_3 == (char *)0x0) {
                pcVar3 = "";
              }
              else {
                pcVar3 = param_3;
                _objc_retainAutorelease(param_3);
                func_0x00010bdc3520();
              }
              _objc_release(param_3);
              func_0x000107c278b8(auStack_388,pcVar3);
              _objc_retain(pcVar6);
              if (pcVar6 == (char *)0x0) {
                pcVar3 = "";
              }
              else {
                _objc_retainAutorelease(pcVar6);
                pcVar3 = pcVar6;
                func_0x00010bdc3520(pcVar6);
              }
              _objc_release(pcVar6);
              func_0x000107c278b8(auStack_370,pcVar3);
              acStack_3a8[0] = '\0';
              acStack_3a8[1] = '\0';
              acStack_3a8[2] = '\0';
              acStack_3a8[3] = '\0';
              acStack_3a8[4] = '\0';
              acStack_3a8[5] = '\0';
              acStack_3a8[6] = '\0';
              acStack_3a8[7] = '\0';
              acStack_3a8[8] = '\0';
              acStack_3a8[9] = '\0';
              acStack_3a8[10] = '\0';
              acStack_3a8[0xb] = '\0';
              acStack_3a8[0xc] = '\0';
              acStack_3a8[0xd] = '\0';
              acStack_3a8[0xe] = '\0';
              acStack_3a8[0xf] = '\0';
              acStack_3a8[0x10] = '\0';
              acStack_3a8[0x11] = '\0';
              acStack_3a8[0x12] = '\0';
              acStack_3a8[0x13] = '\0';
              acStack_3a8[0x14] = '\0';
              acStack_3a8[0x15] = '\0';
              acStack_3a8[0x16] = '\0';
              acStack_3a8[0x17] = '\0';
              func_0x000107c27984(acStack_3a8,auStack_388,&lStack_358,2);
              dVar11 = dVar12 * 1000.0;
              pcVar3 = "\x01";
              pcVar5 = acStack_3a8;
              (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7ee8,pcVar5,(long)dVar11);
              pcStack_390 = acStack_3a8;
              func_0x000107c278ac(&pcStack_390);
              lVar10 = 0;
              do {
                if ((&cStack_359)[lVar10] < '\0') {
                  __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar10));
                }
                lVar10 = lVar10 + -0x18;
              } while (lVar10 != -0x30);
            }
            _objc_release(pcVar6);
            _objc_release(param_3);
          }
          pcVar8 = pcVar6;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
            ___stack_chk_fail();
            _objc_release(pcVar6);
            if (cStack_371 < '\0') {
              __ZdlPv(auStack_388[0]);
            }
            _objc_release(pcVar6);
            _objc_release(param_3);
            _objc_release(pcVar6);
            _objc_release(param_3);
            param_3 = pcVar3;
            __Unwind_Resume();
            lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pcVar3 = param_3;
            pcVar4 = pcVar5;
            dVar12 = dVar11;
            _objc_retain(param_3);
            _objc_retain(pcVar5);
            if (pcVar8 != (char *)0x0) {
              _objc_retain(param_3);
              _objc_retain(pcVar5);
              plVar2 = *(long **)(pcVar8 + 8);
              pcVar3 = "\x01";
              (**(code **)(*plVar2 + 0x28))();
              if ((int)plVar2 != 0) {
                plVar2 = *(long **)(pcVar8 + 8);
                _objc_retain(param_3);
                if (param_3 == (char *)0x0) {
                  pcVar3 = "";
                }
                else {
                  pcVar3 = param_3;
                  _objc_retainAutorelease(param_3);
                  func_0x00010bdc3520();
                }
                _objc_release(param_3);
                func_0x000107c278b8(auStack_438,pcVar3);
                _objc_retain(pcVar5);
                if (pcVar5 == (char *)0x0) {
                  pcVar3 = "";
                }
                else {
                  _objc_retainAutorelease(pcVar5);
                  pcVar3 = pcVar5;
                  func_0x00010bdc3520(pcVar5);
                }
                _objc_release(pcVar5);
                func_0x000107c278b8(auStack_420,pcVar3);
                acStack_458[0] = '\0';
                acStack_458[1] = '\0';
                acStack_458[2] = '\0';
                acStack_458[3] = '\0';
                acStack_458[4] = '\0';
                acStack_458[5] = '\0';
                acStack_458[6] = '\0';
                acStack_458[7] = '\0';
                acStack_458[8] = '\0';
                acStack_458[9] = '\0';
                acStack_458[10] = '\0';
                acStack_458[0xb] = '\0';
                acStack_458[0xc] = '\0';
                acStack_458[0xd] = '\0';
                acStack_458[0xe] = '\0';
                acStack_458[0xf] = '\0';
                acStack_458[0x10] = '\0';
                acStack_458[0x11] = '\0';
                acStack_458[0x12] = '\0';
                acStack_458[0x13] = '\0';
                acStack_458[0x14] = '\0';
                acStack_458[0x15] = '\0';
                acStack_458[0x16] = '\0';
                acStack_458[0x17] = '\0';
                func_0x000107c27984(acStack_458,auStack_438,&lStack_408,2);
                dVar12 = dVar11 * 1000.0;
                pcVar3 = "\x01";
                pcVar4 = acStack_458;
                (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f38,pcVar4,(long)dVar12);
                pcStack_440 = acStack_458;
                func_0x000107c278ac(&pcStack_440);
                lVar10 = 0;
                do {
                  if ((&cStack_409)[lVar10] < '\0') {
                    __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar10));
                  }
                  lVar10 = lVar10 + -0x18;
                } while (lVar10 != -0x30);
              }
              _objc_release(pcVar5);
              _objc_release(param_3);
            }
            pcVar8 = pcVar5;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_408) {
              ___stack_chk_fail();
              _objc_release(pcVar5);
              if (cStack_421 < '\0') {
                __ZdlPv(auStack_438[0]);
              }
              _objc_release(pcVar5);
              _objc_release(param_3);
              _objc_release(pcVar5);
              _objc_release(param_3);
              param_3 = pcVar3;
              __Unwind_Resume();
              pcVar6 = acStack_4e0;
              lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              pcVar5 = param_3;
              pcVar3 = param_3;
              dVar11 = dVar12;
              _objc_retain();
              if (pcVar8 != (char *)0x0) {
                _objc_retain(param_3);
                plVar2 = *(long **)(pcVar8 + 8);
                pcVar3 = "\x01";
                (**(code **)(*plVar2 + 0x28))();
                if ((int)plVar2 != 0) {
                  plVar2 = *(long **)(pcVar8 + 8);
                  _objc_retain(param_3);
                  if (param_3 == (char *)0x0) {
                    pcVar3 = "";
                  }
                  else {
                    pcVar3 = param_3;
                    _objc_retainAutorelease(param_3);
                    func_0x00010bdc3520();
                  }
                  _objc_release(param_3);
                  func_0x000107c278b8(auStack_4c0,pcVar3);
                  acStack_4e0[0] = '\0';
                  acStack_4e0[1] = '\0';
                  acStack_4e0[2] = '\0';
                  acStack_4e0[3] = '\0';
                  acStack_4e0[4] = '\0';
                  acStack_4e0[5] = '\0';
                  acStack_4e0[6] = '\0';
                  acStack_4e0[7] = '\0';
                  acStack_4e0[8] = '\0';
                  acStack_4e0[9] = '\0';
                  acStack_4e0[10] = '\0';
                  acStack_4e0[0xb] = '\0';
                  acStack_4e0[0xc] = '\0';
                  acStack_4e0[0xd] = '\0';
                  acStack_4e0[0xe] = '\0';
                  acStack_4e0[0xf] = '\0';
                  acStack_4e0[0x10] = '\0';
                  acStack_4e0[0x11] = '\0';
                  acStack_4e0[0x12] = '\0';
                  acStack_4e0[0x13] = '\0';
                  acStack_4e0[0x14] = '\0';
                  acStack_4e0[0x15] = '\0';
                  acStack_4e0[0x16] = '\0';
                  acStack_4e0[0x17] = '\0';
                  func_0x000107c27984(acStack_4e0,auStack_4c0,&lStack_4a8,1);
                  dVar11 = dVar12 * 1000.0;
                  pcVar3 = "\x01";
                  (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f88,acStack_4e0,(long)dVar11);
                  puStack_4c8 = acStack_4e0;
                  func_0x000107c278ac(&puStack_4c8);
                  pcVar4 = pcVar6;
                  if (cStack_4a9 < '\0') {
                    __ZdlPv(auStack_4c0[0]);
                    pcVar4 = pcVar6;
                  }
                }
                pcVar5 = param_3;
                _objc_release();
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4a8) {
                ___stack_chk_fail();
                _objc_release(param_3);
                _objc_release(param_3);
                _objc_release(param_3);
                param_3 = pcVar3;
                __Unwind_Resume();
                lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
                _objc_retain(param_3);
                _objc_retain(pcVar4);
                if (pcVar5 != (char *)0x0) {
                  _objc_retain(param_3);
                  _objc_retain(pcVar4);
                  plVar2 = *(long **)(pcVar5 + 8);
                  (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110cb7fd8);
                  if ((int)plVar2 != 0) {
                    plVar2 = *(long **)(pcVar5 + 8);
                    _objc_retain(param_3);
                    if (param_3 == (char *)0x0) {
                      pcVar3 = "";
                    }
                    else {
                      pcVar3 = param_3;
                      _objc_retainAutorelease(param_3);
                      func_0x00010bdc3520();
                    }
                    _objc_release(param_3);
                    func_0x000107c278b8(auStack_568,pcVar3);
                    _objc_retain(pcVar4);
                    if (pcVar4 == (char *)0x0) {
                      pcVar3 = "";
                    }
                    else {
                      _objc_retainAutorelease(pcVar4);
                      pcVar3 = pcVar4;
                      func_0x00010bdc3520(pcVar4);
                    }
                    _objc_release(pcVar4);
                    func_0x000107c278b8(auStack_550,pcVar3);
                    uStack_588 = 0;
                    uStack_580 = 0;
                    uStack_578 = 0;
                    func_0x000107c27984(&uStack_588,auStack_568,&lStack_538,2);
                    (**(code **)(*plVar2 + 0x18))
                              (plVar2,&UNK_110cb7fd8,&uStack_588,(long)(dVar11 * 1000.0));
                    puStack_570 = &uStack_588;
                    func_0x000107c278ac(&puStack_570);
                    lVar10 = 0;
                    do {
                      if ((&cStack_539)[lVar10] < '\0') {
                        __ZdlPv(*(undefined8 *)((long)auStack_550 + lVar10));
                      }
                      lVar10 = lVar10 + -0x18;
                    } while (lVar10 != -0x30);
                  }
                  _objc_release(pcVar4);
                  _objc_release(param_3);
                }
                pcVar3 = pcVar4;
                _objc_release(pcVar4);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_538) {
                  ___stack_chk_fail();
                  _objc_release(pcVar4);
                  if (cStack_551 < '\0') {
                    __ZdlPv(auStack_568[0]);
                  }
                  _objc_release(pcVar4);
                  _objc_release(param_3);
                  _objc_release(pcVar4);
                  _objc_release(param_3);
                  __Unwind_Resume(pcVar3);
                  uVar1 = uRam00000001137f4000;
                  _objc_retain(uRam00000001137f4000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b0ec8; end: 10b0b11f7;  */

/* WARNING: Removing unreachable block (ram,0x00010b0b14d0) */
/* WARNING: Removing unreachable block (ram,0x00010b0b11a0) */
/* WARNING: Removing unreachable block (ram,0x00010b0b1800) */

void FUN_10b0b0ec8(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  undefined8 uVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  undefined1 *unaff_x23;
  double dVar11;
  double dVar12;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 auStack_4a8 [2];
  char cStack_491;
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  char acStack_420 [24];
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  char acStack_398 [24];
  char *pcStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  char acStack_2e8 [24];
  char *pcStack_2d0;
  undefined8 auStack_2c8 [2];
  char cStack_2b1;
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar4 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_3;
  pcVar5 = param_4;
  pcVar8 = param_5;
  dVar11 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    plVar2 = *(long **)(param_2 + 8);
    pcVar3 = "\x01";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_a0,pcVar3);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_88,pcVar3);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar3 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_70,pcVar3);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
      dVar11 = param_1 * 1000.0;
      pcVar8 = (char *)(long)dVar11;
      pcVar3 = "\x01";
      (**(code **)(*plVar2 + 0x18))(plVar2);
      puStack_a8 = acStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar10 = 0;
      unaff_x23 = auStack_a0;
      pcVar5 = pcVar4;
      do {
        if ((&cStack_59)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x48);
    }
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  pcVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x23 = unaff_x23 + -0x18;
    } while (unaff_x23 != auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = pcVar3;
    __Unwind_Resume();
    pcVar7 = acStack_180;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = param_3;
    pcVar6 = pcVar5;
    pcVar9 = pcVar8;
    dVar12 = dVar11;
    _objc_retain(param_3);
    _objc_retain(pcVar5);
    _objc_retain(pcVar8);
    if (pcVar4 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar5);
      _objc_retain(pcVar8);
      plVar2 = *(long **)(pcVar4 + 8);
      pcVar3 = "\x01";
      (**(code **)(*plVar2 + 0x28))();
      if ((int)plVar2 != 0) {
        plVar2 = *(long **)(pcVar4 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        func_0x000107c278b8(auStack_160,pcVar3);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar3 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x000107c278b8(auStack_148,pcVar3);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar3 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x000107c278b8(auStack_130,pcVar3);
        acStack_180[0] = '\0';
        acStack_180[1] = '\0';
        acStack_180[2] = '\0';
        acStack_180[3] = '\0';
        acStack_180[4] = '\0';
        acStack_180[5] = '\0';
        acStack_180[6] = '\0';
        acStack_180[7] = '\0';
        acStack_180[8] = '\0';
        acStack_180[9] = '\0';
        acStack_180[10] = '\0';
        acStack_180[0xb] = '\0';
        acStack_180[0xc] = '\0';
        acStack_180[0xd] = '\0';
        acStack_180[0xe] = '\0';
        acStack_180[0xf] = '\0';
        acStack_180[0x10] = '\0';
        acStack_180[0x11] = '\0';
        acStack_180[0x12] = '\0';
        acStack_180[0x13] = '\0';
        acStack_180[0x14] = '\0';
        acStack_180[0x15] = '\0';
        acStack_180[0x16] = '\0';
        acStack_180[0x17] = '\0';
        func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
        dVar12 = dVar11 * 1000.0;
        pcVar9 = (char *)(long)dVar12;
        pcVar3 = "\x01";
        (**(code **)(*plVar2 + 0x18))(plVar2);
        puStack_168 = acStack_180;
        func_0x000107c278ac(&puStack_168);
        lVar10 = 0;
        unaff_x23 = auStack_160;
        pcVar6 = pcVar7;
        do {
          if ((&cStack_119)[lVar10] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar10));
          }
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != -0x48);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      _objc_release(param_3);
    }
    _objc_release(pcVar8);
    pcVar4 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      do {
        unaff_x23 = unaff_x23 + -0x18;
      } while (unaff_x23 != auStack_160);
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      _objc_release(param_3);
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      _objc_release(param_3);
      param_3 = pcVar3;
      __Unwind_Resume();
      pcVar8 = acStack_240;
      lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar3 = param_3;
      pcVar5 = pcVar6;
      dVar11 = dVar12;
      _objc_retain(param_3);
      _objc_retain(pcVar6);
      _objc_retain(pcVar9);
      if (pcVar4 != (char *)0x0) {
        _objc_retain(param_3);
        _objc_retain(pcVar6);
        _objc_retain(pcVar9);
        plVar2 = *(long **)(pcVar4 + 8);
        pcVar3 = "\x01";
        (**(code **)(*plVar2 + 0x28))();
        if ((int)plVar2 != 0) {
          plVar2 = *(long **)(pcVar4 + 8);
          _objc_retain(param_3);
          if (param_3 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = param_3;
            _objc_retainAutorelease(param_3);
            func_0x00010bdc3520();
          }
          _objc_release(param_3);
          func_0x000107c278b8(auStack_220,pcVar3);
          _objc_retain(pcVar6);
          if (pcVar6 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            _objc_retainAutorelease(pcVar6);
            pcVar3 = pcVar6;
            func_0x00010bdc3520(pcVar6);
          }
          _objc_release(pcVar6);
          func_0x000107c278b8(auStack_208,pcVar3);
          _objc_retain(pcVar9);
          if (pcVar9 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            _objc_retainAutorelease(pcVar9);
            pcVar3 = pcVar9;
            func_0x00010bdc3520(pcVar9);
          }
          _objc_release(pcVar9);
          func_0x000107c278b8(auStack_1f0,pcVar3);
          acStack_240[0] = '\0';
          acStack_240[1] = '\0';
          acStack_240[2] = '\0';
          acStack_240[3] = '\0';
          acStack_240[4] = '\0';
          acStack_240[5] = '\0';
          acStack_240[6] = '\0';
          acStack_240[7] = '\0';
          acStack_240[8] = '\0';
          acStack_240[9] = '\0';
          acStack_240[10] = '\0';
          acStack_240[0xb] = '\0';
          acStack_240[0xc] = '\0';
          acStack_240[0xd] = '\0';
          acStack_240[0xe] = '\0';
          acStack_240[0xf] = '\0';
          acStack_240[0x10] = '\0';
          acStack_240[0x11] = '\0';
          acStack_240[0x12] = '\0';
          acStack_240[0x13] = '\0';
          acStack_240[0x14] = '\0';
          acStack_240[0x15] = '\0';
          acStack_240[0x16] = '\0';
          acStack_240[0x17] = '\0';
          func_0x000107c27984(acStack_240,auStack_220,&lStack_1d8,3);
          dVar11 = dVar12 * 1000.0;
          pcVar3 = "\x01";
          (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7e98,acStack_240,(long)dVar11);
          puStack_228 = acStack_240;
          func_0x000107c278ac(&puStack_228);
          lVar10 = 0;
          unaff_x23 = auStack_220;
          pcVar5 = pcVar8;
          do {
            if ((&cStack_1d9)[lVar10] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar10));
            }
            lVar10 = lVar10 + -0x18;
          } while (lVar10 != -0x48);
        }
        _objc_release(pcVar9);
        _objc_release(pcVar6);
        _objc_release(param_3);
      }
      _objc_release(pcVar9);
      pcVar8 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
        ___stack_chk_fail();
        _objc_release(pcVar9);
        do {
          unaff_x23 = unaff_x23 + -0x18;
        } while (unaff_x23 != auStack_220);
        _objc_release(pcVar9);
        _objc_release(pcVar6);
        _objc_release(param_3);
        _objc_release(pcVar9);
        _objc_release(pcVar6);
        _objc_release(param_3);
        param_3 = pcVar3;
        __Unwind_Resume();
        lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar3 = param_3;
        pcVar4 = pcVar5;
        dVar12 = dVar11;
        _objc_retain(param_3);
        _objc_retain(pcVar5);
        if (pcVar8 != (char *)0x0) {
          _objc_retain(param_3);
          _objc_retain(pcVar5);
          plVar2 = *(long **)(pcVar8 + 8);
          pcVar3 = "\x01";
          (**(code **)(*plVar2 + 0x28))();
          if ((int)plVar2 != 0) {
            plVar2 = *(long **)(pcVar8 + 8);
            _objc_retain(param_3);
            if (param_3 == (char *)0x0) {
              pcVar3 = "";
            }
            else {
              pcVar3 = param_3;
              _objc_retainAutorelease(param_3);
              func_0x00010bdc3520();
            }
            _objc_release(param_3);
            func_0x000107c278b8(auStack_2c8,pcVar3);
            _objc_retain(pcVar5);
            if (pcVar5 == (char *)0x0) {
              pcVar3 = "";
            }
            else {
              _objc_retainAutorelease(pcVar5);
              pcVar3 = pcVar5;
              func_0x00010bdc3520(pcVar5);
            }
            _objc_release(pcVar5);
            func_0x000107c278b8(auStack_2b0,pcVar3);
            acStack_2e8[0] = '\0';
            acStack_2e8[1] = '\0';
            acStack_2e8[2] = '\0';
            acStack_2e8[3] = '\0';
            acStack_2e8[4] = '\0';
            acStack_2e8[5] = '\0';
            acStack_2e8[6] = '\0';
            acStack_2e8[7] = '\0';
            acStack_2e8[8] = '\0';
            acStack_2e8[9] = '\0';
            acStack_2e8[10] = '\0';
            acStack_2e8[0xb] = '\0';
            acStack_2e8[0xc] = '\0';
            acStack_2e8[0xd] = '\0';
            acStack_2e8[0xe] = '\0';
            acStack_2e8[0xf] = '\0';
            acStack_2e8[0x10] = '\0';
            acStack_2e8[0x11] = '\0';
            acStack_2e8[0x12] = '\0';
            acStack_2e8[0x13] = '\0';
            acStack_2e8[0x14] = '\0';
            acStack_2e8[0x15] = '\0';
            acStack_2e8[0x16] = '\0';
            acStack_2e8[0x17] = '\0';
            func_0x000107c27984(acStack_2e8,auStack_2c8,&lStack_298,2);
            dVar12 = dVar11 * 1000.0;
            pcVar3 = "\x01";
            pcVar4 = acStack_2e8;
            (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7ee8,pcVar4,(long)dVar12);
            pcStack_2d0 = acStack_2e8;
            func_0x000107c278ac(&pcStack_2d0);
            lVar10 = 0;
            do {
              if ((&cStack_299)[lVar10] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar10));
              }
              lVar10 = lVar10 + -0x18;
            } while (lVar10 != -0x30);
          }
          _objc_release(pcVar5);
          _objc_release(param_3);
        }
        pcVar8 = pcVar5;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
          ___stack_chk_fail();
          _objc_release(pcVar5);
          if (cStack_2b1 < '\0') {
            __ZdlPv(auStack_2c8[0]);
          }
          _objc_release(pcVar5);
          _objc_release(param_3);
          _objc_release(pcVar5);
          _objc_release(param_3);
          param_3 = pcVar3;
          __Unwind_Resume();
          lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pcVar3 = param_3;
          pcVar5 = pcVar4;
          dVar11 = dVar12;
          _objc_retain(param_3);
          _objc_retain(pcVar4);
          if (pcVar8 != (char *)0x0) {
            _objc_retain(param_3);
            _objc_retain(pcVar4);
            plVar2 = *(long **)(pcVar8 + 8);
            pcVar3 = "\x01";
            (**(code **)(*plVar2 + 0x28))();
            if ((int)plVar2 != 0) {
              plVar2 = *(long **)(pcVar8 + 8);
              _objc_retain(param_3);
              if (param_3 == (char *)0x0) {
                pcVar3 = "";
              }
              else {
                pcVar3 = param_3;
                _objc_retainAutorelease(param_3);
                func_0x00010bdc3520();
              }
              _objc_release(param_3);
              func_0x000107c278b8(auStack_378,pcVar3);
              _objc_retain(pcVar4);
              if (pcVar4 == (char *)0x0) {
                pcVar3 = "";
              }
              else {
                _objc_retainAutorelease(pcVar4);
                pcVar3 = pcVar4;
                func_0x00010bdc3520(pcVar4);
              }
              _objc_release(pcVar4);
              func_0x000107c278b8(auStack_360,pcVar3);
              acStack_398[0] = '\0';
              acStack_398[1] = '\0';
              acStack_398[2] = '\0';
              acStack_398[3] = '\0';
              acStack_398[4] = '\0';
              acStack_398[5] = '\0';
              acStack_398[6] = '\0';
              acStack_398[7] = '\0';
              acStack_398[8] = '\0';
              acStack_398[9] = '\0';
              acStack_398[10] = '\0';
              acStack_398[0xb] = '\0';
              acStack_398[0xc] = '\0';
              acStack_398[0xd] = '\0';
              acStack_398[0xe] = '\0';
              acStack_398[0xf] = '\0';
              acStack_398[0x10] = '\0';
              acStack_398[0x11] = '\0';
              acStack_398[0x12] = '\0';
              acStack_398[0x13] = '\0';
              acStack_398[0x14] = '\0';
              acStack_398[0x15] = '\0';
              acStack_398[0x16] = '\0';
              acStack_398[0x17] = '\0';
              func_0x000107c27984(acStack_398,auStack_378,&lStack_348,2);
              dVar11 = dVar12 * 1000.0;
              pcVar3 = "\x01";
              pcVar5 = acStack_398;
              (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f38,pcVar5,(long)dVar11);
              pcStack_380 = acStack_398;
              func_0x000107c278ac(&pcStack_380);
              lVar10 = 0;
              do {
                if ((&cStack_349)[lVar10] < '\0') {
                  __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar10));
                }
                lVar10 = lVar10 + -0x18;
              } while (lVar10 != -0x30);
            }
            _objc_release(pcVar4);
            _objc_release(param_3);
          }
          pcVar8 = pcVar4;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
            ___stack_chk_fail();
            _objc_release(pcVar4);
            if (cStack_361 < '\0') {
              __ZdlPv(auStack_378[0]);
            }
            _objc_release(pcVar4);
            _objc_release(param_3);
            _objc_release(pcVar4);
            _objc_release(param_3);
            param_3 = pcVar3;
            __Unwind_Resume();
            pcVar6 = acStack_420;
            lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pcVar4 = param_3;
            pcVar3 = param_3;
            dVar12 = dVar11;
            _objc_retain();
            if (pcVar8 != (char *)0x0) {
              _objc_retain(param_3);
              plVar2 = *(long **)(pcVar8 + 8);
              pcVar3 = "\x01";
              (**(code **)(*plVar2 + 0x28))();
              if ((int)plVar2 != 0) {
                plVar2 = *(long **)(pcVar8 + 8);
                _objc_retain(param_3);
                if (param_3 == (char *)0x0) {
                  pcVar3 = "";
                }
                else {
                  pcVar3 = param_3;
                  _objc_retainAutorelease(param_3);
                  func_0x00010bdc3520();
                }
                _objc_release(param_3);
                func_0x000107c278b8(auStack_400,pcVar3);
                acStack_420[0] = '\0';
                acStack_420[1] = '\0';
                acStack_420[2] = '\0';
                acStack_420[3] = '\0';
                acStack_420[4] = '\0';
                acStack_420[5] = '\0';
                acStack_420[6] = '\0';
                acStack_420[7] = '\0';
                acStack_420[8] = '\0';
                acStack_420[9] = '\0';
                acStack_420[10] = '\0';
                acStack_420[0xb] = '\0';
                acStack_420[0xc] = '\0';
                acStack_420[0xd] = '\0';
                acStack_420[0xe] = '\0';
                acStack_420[0xf] = '\0';
                acStack_420[0x10] = '\0';
                acStack_420[0x11] = '\0';
                acStack_420[0x12] = '\0';
                acStack_420[0x13] = '\0';
                acStack_420[0x14] = '\0';
                acStack_420[0x15] = '\0';
                acStack_420[0x16] = '\0';
                acStack_420[0x17] = '\0';
                func_0x000107c27984(acStack_420,auStack_400,&lStack_3e8,1);
                dVar12 = dVar11 * 1000.0;
                pcVar3 = "\x01";
                (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f88,acStack_420,(long)dVar12);
                puStack_408 = acStack_420;
                func_0x000107c278ac(&puStack_408);
                pcVar5 = pcVar6;
                if (cStack_3e9 < '\0') {
                  __ZdlPv(auStack_400[0]);
                  pcVar5 = pcVar6;
                }
              }
              pcVar4 = param_3;
              _objc_release();
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3e8) {
              ___stack_chk_fail();
              _objc_release(param_3);
              _objc_release(param_3);
              _objc_release(param_3);
              param_3 = pcVar3;
              __Unwind_Resume();
              lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
              _objc_retain(param_3);
              _objc_retain(pcVar5);
              if (pcVar4 != (char *)0x0) {
                _objc_retain(param_3);
                _objc_retain(pcVar5);
                plVar2 = *(long **)(pcVar4 + 8);
                (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110cb7fd8);
                if ((int)plVar2 != 0) {
                  plVar2 = *(long **)(pcVar4 + 8);
                  _objc_retain(param_3);
                  if (param_3 == (char *)0x0) {
                    pcVar3 = "";
                  }
                  else {
                    pcVar3 = param_3;
                    _objc_retainAutorelease(param_3);
                    func_0x00010bdc3520();
                  }
                  _objc_release(param_3);
                  func_0x000107c278b8(auStack_4a8,pcVar3);
                  _objc_retain(pcVar5);
                  if (pcVar5 == (char *)0x0) {
                    pcVar3 = "";
                  }
                  else {
                    _objc_retainAutorelease(pcVar5);
                    pcVar3 = pcVar5;
                    func_0x00010bdc3520(pcVar5);
                  }
                  _objc_release(pcVar5);
                  func_0x000107c278b8(auStack_490,pcVar3);
                  uStack_4c8 = 0;
                  uStack_4c0 = 0;
                  uStack_4b8 = 0;
                  func_0x000107c27984(&uStack_4c8,auStack_4a8,&lStack_478,2);
                  (**(code **)(*plVar2 + 0x18))
                            (plVar2,&UNK_110cb7fd8,&uStack_4c8,(long)(dVar12 * 1000.0));
                  puStack_4b0 = &uStack_4c8;
                  func_0x000107c278ac(&puStack_4b0);
                  lVar10 = 0;
                  do {
                    if ((&cStack_479)[lVar10] < '\0') {
                      __ZdlPv(*(undefined8 *)((long)auStack_490 + lVar10));
                    }
                    lVar10 = lVar10 + -0x18;
                  } while (lVar10 != -0x30);
                }
                _objc_release(pcVar5);
                _objc_release(param_3);
              }
              pcVar3 = pcVar5;
              _objc_release(pcVar5);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
                ___stack_chk_fail();
                _objc_release(pcVar5);
                if (cStack_491 < '\0') {
                  __ZdlPv(auStack_4a8[0]);
                }
                _objc_release(pcVar5);
                _objc_release(param_3);
                _objc_release(pcVar5);
                _objc_release(param_3);
                __Unwind_Resume(pcVar3);
                uVar1 = uRam00000001137f4000;
                _objc_retain(uRam00000001137f4000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b11f8; end: 10b0b1527;  */

/* WARNING: Removing unreachable block (ram,0x00010b0b14d0) */
/* WARNING: Removing unreachable block (ram,0x00010b0b1800) */

void FUN_10b0b11f8(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  undefined8 uVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined1 *unaff_x23;
  double dVar10;
  double dVar11;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 auStack_3e8 [2];
  char cStack_3d1;
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  char acStack_360 [24];
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  char acStack_2d8 [24];
  char *pcStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  char acStack_228 [24];
  char *pcStack_210;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar4 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_3;
  pcVar5 = param_4;
  pcVar8 = param_5;
  dVar10 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    plVar2 = *(long **)(param_2 + 8);
    pcVar3 = "\x01";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_a0,pcVar3);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_88,pcVar3);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar3 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_70,pcVar3);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
      dVar10 = param_1 * 1000.0;
      pcVar8 = (char *)(long)dVar10;
      pcVar3 = "\x01";
      (**(code **)(*plVar2 + 0x18))(plVar2);
      puStack_a8 = acStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar9 = 0;
      unaff_x23 = auStack_a0;
      pcVar5 = pcVar4;
      do {
        if ((&cStack_59)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x48);
    }
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  pcVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x23 = unaff_x23 + -0x18;
    } while (unaff_x23 != auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = pcVar3;
    __Unwind_Resume();
    pcVar7 = acStack_180;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = param_3;
    pcVar6 = pcVar5;
    dVar11 = dVar10;
    _objc_retain(param_3);
    _objc_retain(pcVar5);
    _objc_retain(pcVar8);
    if (pcVar4 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar5);
      _objc_retain(pcVar8);
      plVar2 = *(long **)(pcVar4 + 8);
      pcVar3 = "\x01";
      (**(code **)(*plVar2 + 0x28))();
      if ((int)plVar2 != 0) {
        plVar2 = *(long **)(pcVar4 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        func_0x000107c278b8(auStack_160,pcVar3);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar3 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x000107c278b8(auStack_148,pcVar3);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar3 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x000107c278b8(auStack_130,pcVar3);
        acStack_180[0] = '\0';
        acStack_180[1] = '\0';
        acStack_180[2] = '\0';
        acStack_180[3] = '\0';
        acStack_180[4] = '\0';
        acStack_180[5] = '\0';
        acStack_180[6] = '\0';
        acStack_180[7] = '\0';
        acStack_180[8] = '\0';
        acStack_180[9] = '\0';
        acStack_180[10] = '\0';
        acStack_180[0xb] = '\0';
        acStack_180[0xc] = '\0';
        acStack_180[0xd] = '\0';
        acStack_180[0xe] = '\0';
        acStack_180[0xf] = '\0';
        acStack_180[0x10] = '\0';
        acStack_180[0x11] = '\0';
        acStack_180[0x12] = '\0';
        acStack_180[0x13] = '\0';
        acStack_180[0x14] = '\0';
        acStack_180[0x15] = '\0';
        acStack_180[0x16] = '\0';
        acStack_180[0x17] = '\0';
        func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
        dVar11 = dVar10 * 1000.0;
        pcVar3 = "\x01";
        (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7e98,acStack_180,(long)dVar11);
        puStack_168 = acStack_180;
        func_0x000107c278ac(&puStack_168);
        lVar9 = 0;
        unaff_x23 = auStack_160;
        pcVar6 = pcVar7;
        do {
          if ((&cStack_119)[lVar9] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar9));
          }
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != -0x48);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      _objc_release(param_3);
    }
    _objc_release(pcVar8);
    pcVar4 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      do {
        unaff_x23 = unaff_x23 + -0x18;
      } while (unaff_x23 != auStack_160);
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      _objc_release(param_3);
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      _objc_release(param_3);
      param_3 = pcVar3;
      __Unwind_Resume();
      lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar3 = param_3;
      pcVar5 = pcVar6;
      dVar10 = dVar11;
      _objc_retain(param_3);
      _objc_retain(pcVar6);
      if (pcVar4 != (char *)0x0) {
        _objc_retain(param_3);
        _objc_retain(pcVar6);
        plVar2 = *(long **)(pcVar4 + 8);
        pcVar3 = "\x01";
        (**(code **)(*plVar2 + 0x28))();
        if ((int)plVar2 != 0) {
          plVar2 = *(long **)(pcVar4 + 8);
          _objc_retain(param_3);
          if (param_3 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = param_3;
            _objc_retainAutorelease(param_3);
            func_0x00010bdc3520();
          }
          _objc_release(param_3);
          func_0x000107c278b8(auStack_208,pcVar3);
          _objc_retain(pcVar6);
          if (pcVar6 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            _objc_retainAutorelease(pcVar6);
            pcVar3 = pcVar6;
            func_0x00010bdc3520(pcVar6);
          }
          _objc_release(pcVar6);
          func_0x000107c278b8(auStack_1f0,pcVar3);
          acStack_228[0] = '\0';
          acStack_228[1] = '\0';
          acStack_228[2] = '\0';
          acStack_228[3] = '\0';
          acStack_228[4] = '\0';
          acStack_228[5] = '\0';
          acStack_228[6] = '\0';
          acStack_228[7] = '\0';
          acStack_228[8] = '\0';
          acStack_228[9] = '\0';
          acStack_228[10] = '\0';
          acStack_228[0xb] = '\0';
          acStack_228[0xc] = '\0';
          acStack_228[0xd] = '\0';
          acStack_228[0xe] = '\0';
          acStack_228[0xf] = '\0';
          acStack_228[0x10] = '\0';
          acStack_228[0x11] = '\0';
          acStack_228[0x12] = '\0';
          acStack_228[0x13] = '\0';
          acStack_228[0x14] = '\0';
          acStack_228[0x15] = '\0';
          acStack_228[0x16] = '\0';
          acStack_228[0x17] = '\0';
          func_0x000107c27984(acStack_228,auStack_208,&lStack_1d8,2);
          dVar10 = dVar11 * 1000.0;
          pcVar3 = "\x01";
          pcVar5 = acStack_228;
          (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7ee8,pcVar5,(long)dVar10);
          pcStack_210 = acStack_228;
          func_0x000107c278ac(&pcStack_210);
          lVar9 = 0;
          do {
            if ((&cStack_1d9)[lVar9] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar9));
            }
            lVar9 = lVar9 + -0x18;
          } while (lVar9 != -0x30);
        }
        _objc_release(pcVar6);
        _objc_release(param_3);
      }
      pcVar8 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
        ___stack_chk_fail();
        _objc_release(pcVar6);
        if (cStack_1f1 < '\0') {
          __ZdlPv(auStack_208[0]);
        }
        _objc_release(pcVar6);
        _objc_release(param_3);
        _objc_release(pcVar6);
        _objc_release(param_3);
        param_3 = pcVar3;
        __Unwind_Resume();
        lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar3 = param_3;
        pcVar4 = pcVar5;
        dVar11 = dVar10;
        _objc_retain(param_3);
        _objc_retain(pcVar5);
        if (pcVar8 != (char *)0x0) {
          _objc_retain(param_3);
          _objc_retain(pcVar5);
          plVar2 = *(long **)(pcVar8 + 8);
          pcVar3 = "\x01";
          (**(code **)(*plVar2 + 0x28))();
          if ((int)plVar2 != 0) {
            plVar2 = *(long **)(pcVar8 + 8);
            _objc_retain(param_3);
            if (param_3 == (char *)0x0) {
              pcVar3 = "";
            }
            else {
              pcVar3 = param_3;
              _objc_retainAutorelease(param_3);
              func_0x00010bdc3520();
            }
            _objc_release(param_3);
            func_0x000107c278b8(auStack_2b8,pcVar3);
            _objc_retain(pcVar5);
            if (pcVar5 == (char *)0x0) {
              pcVar3 = "";
            }
            else {
              _objc_retainAutorelease(pcVar5);
              pcVar3 = pcVar5;
              func_0x00010bdc3520(pcVar5);
            }
            _objc_release(pcVar5);
            func_0x000107c278b8(auStack_2a0,pcVar3);
            acStack_2d8[0] = '\0';
            acStack_2d8[1] = '\0';
            acStack_2d8[2] = '\0';
            acStack_2d8[3] = '\0';
            acStack_2d8[4] = '\0';
            acStack_2d8[5] = '\0';
            acStack_2d8[6] = '\0';
            acStack_2d8[7] = '\0';
            acStack_2d8[8] = '\0';
            acStack_2d8[9] = '\0';
            acStack_2d8[10] = '\0';
            acStack_2d8[0xb] = '\0';
            acStack_2d8[0xc] = '\0';
            acStack_2d8[0xd] = '\0';
            acStack_2d8[0xe] = '\0';
            acStack_2d8[0xf] = '\0';
            acStack_2d8[0x10] = '\0';
            acStack_2d8[0x11] = '\0';
            acStack_2d8[0x12] = '\0';
            acStack_2d8[0x13] = '\0';
            acStack_2d8[0x14] = '\0';
            acStack_2d8[0x15] = '\0';
            acStack_2d8[0x16] = '\0';
            acStack_2d8[0x17] = '\0';
            func_0x000107c27984(acStack_2d8,auStack_2b8,&lStack_288,2);
            dVar11 = dVar10 * 1000.0;
            pcVar3 = "\x01";
            pcVar4 = acStack_2d8;
            (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f38,pcVar4,(long)dVar11);
            pcStack_2c0 = acStack_2d8;
            func_0x000107c278ac(&pcStack_2c0);
            lVar9 = 0;
            do {
              if ((&cStack_289)[lVar9] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar9));
              }
              lVar9 = lVar9 + -0x18;
            } while (lVar9 != -0x30);
          }
          _objc_release(pcVar5);
          _objc_release(param_3);
        }
        pcVar8 = pcVar5;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
          ___stack_chk_fail();
          _objc_release(pcVar5);
          if (cStack_2a1 < '\0') {
            __ZdlPv(auStack_2b8[0]);
          }
          _objc_release(pcVar5);
          _objc_release(param_3);
          _objc_release(pcVar5);
          _objc_release(param_3);
          param_3 = pcVar3;
          __Unwind_Resume();
          pcVar6 = acStack_360;
          lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pcVar5 = param_3;
          pcVar3 = param_3;
          dVar10 = dVar11;
          _objc_retain();
          if (pcVar8 != (char *)0x0) {
            _objc_retain(param_3);
            plVar2 = *(long **)(pcVar8 + 8);
            pcVar3 = "\x01";
            (**(code **)(*plVar2 + 0x28))();
            if ((int)plVar2 != 0) {
              plVar2 = *(long **)(pcVar8 + 8);
              _objc_retain(param_3);
              if (param_3 == (char *)0x0) {
                pcVar3 = "";
              }
              else {
                pcVar3 = param_3;
                _objc_retainAutorelease(param_3);
                func_0x00010bdc3520();
              }
              _objc_release(param_3);
              func_0x000107c278b8(auStack_340,pcVar3);
              acStack_360[0] = '\0';
              acStack_360[1] = '\0';
              acStack_360[2] = '\0';
              acStack_360[3] = '\0';
              acStack_360[4] = '\0';
              acStack_360[5] = '\0';
              acStack_360[6] = '\0';
              acStack_360[7] = '\0';
              acStack_360[8] = '\0';
              acStack_360[9] = '\0';
              acStack_360[10] = '\0';
              acStack_360[0xb] = '\0';
              acStack_360[0xc] = '\0';
              acStack_360[0xd] = '\0';
              acStack_360[0xe] = '\0';
              acStack_360[0xf] = '\0';
              acStack_360[0x10] = '\0';
              acStack_360[0x11] = '\0';
              acStack_360[0x12] = '\0';
              acStack_360[0x13] = '\0';
              acStack_360[0x14] = '\0';
              acStack_360[0x15] = '\0';
              acStack_360[0x16] = '\0';
              acStack_360[0x17] = '\0';
              func_0x000107c27984(acStack_360,auStack_340,&lStack_328,1);
              dVar10 = dVar11 * 1000.0;
              pcVar3 = "\x01";
              (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f88,acStack_360,(long)dVar10);
              puStack_348 = acStack_360;
              func_0x000107c278ac(&puStack_348);
              pcVar4 = pcVar6;
              if (cStack_329 < '\0') {
                __ZdlPv(auStack_340[0]);
                pcVar4 = pcVar6;
              }
            }
            pcVar5 = param_3;
            _objc_release();
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
            ___stack_chk_fail();
            _objc_release(param_3);
            _objc_release(param_3);
            _objc_release(param_3);
            param_3 = pcVar3;
            __Unwind_Resume();
            lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            _objc_retain(param_3);
            _objc_retain(pcVar4);
            if (pcVar5 != (char *)0x0) {
              _objc_retain(param_3);
              _objc_retain(pcVar4);
              plVar2 = *(long **)(pcVar5 + 8);
              (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110cb7fd8);
              if ((int)plVar2 != 0) {
                plVar2 = *(long **)(pcVar5 + 8);
                _objc_retain(param_3);
                if (param_3 == (char *)0x0) {
                  pcVar3 = "";
                }
                else {
                  pcVar3 = param_3;
                  _objc_retainAutorelease(param_3);
                  func_0x00010bdc3520();
                }
                _objc_release(param_3);
                func_0x000107c278b8(auStack_3e8,pcVar3);
                _objc_retain(pcVar4);
                if (pcVar4 == (char *)0x0) {
                  pcVar3 = "";
                }
                else {
                  _objc_retainAutorelease(pcVar4);
                  pcVar3 = pcVar4;
                  func_0x00010bdc3520(pcVar4);
                }
                _objc_release(pcVar4);
                func_0x000107c278b8(auStack_3d0,pcVar3);
                uStack_408 = 0;
                uStack_400 = 0;
                uStack_3f8 = 0;
                func_0x000107c27984(&uStack_408,auStack_3e8,&lStack_3b8,2);
                (**(code **)(*plVar2 + 0x18))
                          (plVar2,&UNK_110cb7fd8,&uStack_408,(long)(dVar10 * 1000.0));
                puStack_3f0 = &uStack_408;
                func_0x000107c278ac(&puStack_3f0);
                lVar9 = 0;
                do {
                  if ((&cStack_3b9)[lVar9] < '\0') {
                    __ZdlPv(*(undefined8 *)((long)auStack_3d0 + lVar9));
                  }
                  lVar9 = lVar9 + -0x18;
                } while (lVar9 != -0x30);
              }
              _objc_release(pcVar4);
              _objc_release(param_3);
            }
            pcVar3 = pcVar4;
            _objc_release(pcVar4);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b8) {
              ___stack_chk_fail();
              _objc_release(pcVar4);
              if (cStack_3d1 < '\0') {
                __ZdlPv(auStack_3e8[0]);
              }
              _objc_release(pcVar4);
              _objc_release(param_3);
              _objc_release(pcVar4);
              _objc_release(param_3);
              __Unwind_Resume(pcVar3);
              uVar1 = uRam00000001137f4000;
              _objc_retain(uRam00000001137f4000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b1528; end: 10b0b1857;  */

/* WARNING: Removing unreachable block (ram,0x00010b0b1800) */

void FUN_10b0b1528(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  undefined8 uVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  undefined1 *unaff_x23;
  double dVar9;
  double dVar10;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 auStack_328 [2];
  char cStack_311;
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  char acStack_168 [24];
  char *pcStack_150;
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar4 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_3;
  pcVar6 = param_4;
  dVar9 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    plVar2 = *(long **)(param_2 + 8);
    pcVar3 = "\x01";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_a0,pcVar3);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_88,pcVar3);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar3 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_70,pcVar3);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
      dVar9 = param_1 * 1000.0;
      pcVar3 = "\x01";
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7e98,acStack_c0,(long)dVar9);
      puStack_a8 = acStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar8 = 0;
      unaff_x23 = auStack_a0;
      pcVar6 = pcVar4;
      do {
        if ((&cStack_59)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x48);
    }
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  pcVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x23 = unaff_x23 + -0x18;
    } while (unaff_x23 != auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = pcVar3;
    __Unwind_Resume();
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = param_3;
    pcVar5 = pcVar6;
    dVar10 = dVar9;
    _objc_retain(param_3);
    _objc_retain(pcVar6);
    if (pcVar4 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar6);
      plVar2 = *(long **)(pcVar4 + 8);
      pcVar3 = "\x01";
      (**(code **)(*plVar2 + 0x28))();
      if ((int)plVar2 != 0) {
        plVar2 = *(long **)(pcVar4 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        func_0x000107c278b8(auStack_148,pcVar3);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar6);
          pcVar3 = pcVar6;
          func_0x00010bdc3520(pcVar6);
        }
        _objc_release(pcVar6);
        func_0x000107c278b8(auStack_130,pcVar3);
        acStack_168[0] = '\0';
        acStack_168[1] = '\0';
        acStack_168[2] = '\0';
        acStack_168[3] = '\0';
        acStack_168[4] = '\0';
        acStack_168[5] = '\0';
        acStack_168[6] = '\0';
        acStack_168[7] = '\0';
        acStack_168[8] = '\0';
        acStack_168[9] = '\0';
        acStack_168[10] = '\0';
        acStack_168[0xb] = '\0';
        acStack_168[0xc] = '\0';
        acStack_168[0xd] = '\0';
        acStack_168[0xe] = '\0';
        acStack_168[0xf] = '\0';
        acStack_168[0x10] = '\0';
        acStack_168[0x11] = '\0';
        acStack_168[0x12] = '\0';
        acStack_168[0x13] = '\0';
        acStack_168[0x14] = '\0';
        acStack_168[0x15] = '\0';
        acStack_168[0x16] = '\0';
        acStack_168[0x17] = '\0';
        func_0x000107c27984(acStack_168,auStack_148,&lStack_118,2);
        dVar10 = dVar9 * 1000.0;
        pcVar3 = "\x01";
        pcVar5 = acStack_168;
        (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7ee8,pcVar5,(long)dVar10);
        pcStack_150 = acStack_168;
        func_0x000107c278ac(&pcStack_150);
        lVar8 = 0;
        do {
          if ((&cStack_119)[lVar8] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar8));
          }
          lVar8 = lVar8 + -0x18;
        } while (lVar8 != -0x30);
      }
      _objc_release(pcVar6);
      _objc_release(param_3);
    }
    pcVar4 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      if (cStack_131 < '\0') {
        __ZdlPv(auStack_148[0]);
      }
      _objc_release(pcVar6);
      _objc_release(param_3);
      _objc_release(pcVar6);
      _objc_release(param_3);
      param_3 = pcVar3;
      __Unwind_Resume();
      lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar3 = param_3;
      pcVar6 = pcVar5;
      dVar9 = dVar10;
      _objc_retain(param_3);
      _objc_retain(pcVar5);
      if (pcVar4 != (char *)0x0) {
        _objc_retain(param_3);
        _objc_retain(pcVar5);
        plVar2 = *(long **)(pcVar4 + 8);
        pcVar3 = "\x01";
        (**(code **)(*plVar2 + 0x28))();
        if ((int)plVar2 != 0) {
          plVar2 = *(long **)(pcVar4 + 8);
          _objc_retain(param_3);
          if (param_3 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = param_3;
            _objc_retainAutorelease(param_3);
            func_0x00010bdc3520();
          }
          _objc_release(param_3);
          func_0x000107c278b8(auStack_1f8,pcVar3);
          _objc_retain(pcVar5);
          if (pcVar5 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            _objc_retainAutorelease(pcVar5);
            pcVar3 = pcVar5;
            func_0x00010bdc3520(pcVar5);
          }
          _objc_release(pcVar5);
          func_0x000107c278b8(auStack_1e0,pcVar3);
          acStack_218[0] = '\0';
          acStack_218[1] = '\0';
          acStack_218[2] = '\0';
          acStack_218[3] = '\0';
          acStack_218[4] = '\0';
          acStack_218[5] = '\0';
          acStack_218[6] = '\0';
          acStack_218[7] = '\0';
          acStack_218[8] = '\0';
          acStack_218[9] = '\0';
          acStack_218[10] = '\0';
          acStack_218[0xb] = '\0';
          acStack_218[0xc] = '\0';
          acStack_218[0xd] = '\0';
          acStack_218[0xe] = '\0';
          acStack_218[0xf] = '\0';
          acStack_218[0x10] = '\0';
          acStack_218[0x11] = '\0';
          acStack_218[0x12] = '\0';
          acStack_218[0x13] = '\0';
          acStack_218[0x14] = '\0';
          acStack_218[0x15] = '\0';
          acStack_218[0x16] = '\0';
          acStack_218[0x17] = '\0';
          func_0x000107c27984(acStack_218,auStack_1f8,&lStack_1c8,2);
          dVar9 = dVar10 * 1000.0;
          pcVar3 = "\x01";
          pcVar6 = acStack_218;
          (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f38,pcVar6,(long)dVar9);
          pcStack_200 = acStack_218;
          func_0x000107c278ac(&pcStack_200);
          lVar8 = 0;
          do {
            if ((&cStack_1c9)[lVar8] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar8));
            }
            lVar8 = lVar8 + -0x18;
          } while (lVar8 != -0x30);
        }
        _objc_release(pcVar5);
        _objc_release(param_3);
      }
      pcVar4 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
        ___stack_chk_fail();
        _objc_release(pcVar5);
        if (cStack_1e1 < '\0') {
          __ZdlPv(auStack_1f8[0]);
        }
        _objc_release(pcVar5);
        _objc_release(param_3);
        _objc_release(pcVar5);
        _objc_release(param_3);
        param_3 = pcVar3;
        __Unwind_Resume();
        pcVar7 = acStack_2a0;
        lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar5 = param_3;
        pcVar3 = param_3;
        dVar10 = dVar9;
        _objc_retain();
        if (pcVar4 != (char *)0x0) {
          _objc_retain(param_3);
          plVar2 = *(long **)(pcVar4 + 8);
          pcVar3 = "\x01";
          (**(code **)(*plVar2 + 0x28))();
          if ((int)plVar2 != 0) {
            plVar2 = *(long **)(pcVar4 + 8);
            _objc_retain(param_3);
            if (param_3 == (char *)0x0) {
              pcVar3 = "";
            }
            else {
              pcVar3 = param_3;
              _objc_retainAutorelease(param_3);
              func_0x00010bdc3520();
            }
            _objc_release(param_3);
            func_0x000107c278b8(auStack_280,pcVar3);
            acStack_2a0[0] = '\0';
            acStack_2a0[1] = '\0';
            acStack_2a0[2] = '\0';
            acStack_2a0[3] = '\0';
            acStack_2a0[4] = '\0';
            acStack_2a0[5] = '\0';
            acStack_2a0[6] = '\0';
            acStack_2a0[7] = '\0';
            acStack_2a0[8] = '\0';
            acStack_2a0[9] = '\0';
            acStack_2a0[10] = '\0';
            acStack_2a0[0xb] = '\0';
            acStack_2a0[0xc] = '\0';
            acStack_2a0[0xd] = '\0';
            acStack_2a0[0xe] = '\0';
            acStack_2a0[0xf] = '\0';
            acStack_2a0[0x10] = '\0';
            acStack_2a0[0x11] = '\0';
            acStack_2a0[0x12] = '\0';
            acStack_2a0[0x13] = '\0';
            acStack_2a0[0x14] = '\0';
            acStack_2a0[0x15] = '\0';
            acStack_2a0[0x16] = '\0';
            acStack_2a0[0x17] = '\0';
            func_0x000107c27984(acStack_2a0,auStack_280,&lStack_268,1);
            dVar10 = dVar9 * 1000.0;
            pcVar3 = "\x01";
            (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f88,acStack_2a0,(long)dVar10);
            puStack_288 = acStack_2a0;
            func_0x000107c278ac(&puStack_288);
            pcVar6 = pcVar7;
            if (cStack_269 < '\0') {
              __ZdlPv(auStack_280[0]);
              pcVar6 = pcVar7;
            }
          }
          pcVar5 = param_3;
          _objc_release();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
          ___stack_chk_fail();
          _objc_release(param_3);
          _objc_release(param_3);
          _objc_release(param_3);
          param_3 = pcVar3;
          __Unwind_Resume();
          lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(param_3);
          _objc_retain(pcVar6);
          if (pcVar5 != (char *)0x0) {
            _objc_retain(param_3);
            _objc_retain(pcVar6);
            plVar2 = *(long **)(pcVar5 + 8);
            (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110cb7fd8);
            if ((int)plVar2 != 0) {
              plVar2 = *(long **)(pcVar5 + 8);
              _objc_retain(param_3);
              if (param_3 == (char *)0x0) {
                pcVar3 = "";
              }
              else {
                pcVar3 = param_3;
                _objc_retainAutorelease(param_3);
                func_0x00010bdc3520();
              }
              _objc_release(param_3);
              func_0x000107c278b8(auStack_328,pcVar3);
              _objc_retain(pcVar6);
              if (pcVar6 == (char *)0x0) {
                pcVar3 = "";
              }
              else {
                _objc_retainAutorelease(pcVar6);
                pcVar3 = pcVar6;
                func_0x00010bdc3520(pcVar6);
              }
              _objc_release(pcVar6);
              func_0x000107c278b8(auStack_310,pcVar3);
              uStack_348 = 0;
              uStack_340 = 0;
              uStack_338 = 0;
              func_0x000107c27984(&uStack_348,auStack_328,&lStack_2f8,2);
              (**(code **)(*plVar2 + 0x18))
                        (plVar2,&UNK_110cb7fd8,&uStack_348,(long)(dVar10 * 1000.0));
              puStack_330 = &uStack_348;
              func_0x000107c278ac(&puStack_330);
              lVar8 = 0;
              do {
                if ((&cStack_2f9)[lVar8] < '\0') {
                  __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar8));
                }
                lVar8 = lVar8 + -0x18;
              } while (lVar8 != -0x30);
            }
            _objc_release(pcVar6);
            _objc_release(param_3);
          }
          pcVar3 = pcVar6;
          _objc_release(pcVar6);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
            ___stack_chk_fail();
            _objc_release(pcVar6);
            if (cStack_311 < '\0') {
              __ZdlPv(auStack_328[0]);
            }
            _objc_release(pcVar6);
            _objc_release(param_3);
            _objc_release(pcVar6);
            _objc_release(param_3);
            __Unwind_Resume(pcVar3);
            uVar1 = uRam00000001137f4000;
            _objc_retain(uRam00000001137f4000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b1858; end: 10b0b1ae7;  */

void FUN_10b0b1858(double param_1,long param_2,char *param_3,char *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 auStack_268 [2];
  char cStack_251;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  char acStack_1e0 [24];
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char acStack_a8 [24];
  char *pcStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_3;
  pcVar5 = param_4;
  dVar9 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar2 = *(long **)(param_2 + 8);
    pcVar3 = "\x01";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_88,pcVar3);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_70,pcVar3);
      acStack_a8[0] = '\0';
      acStack_a8[1] = '\0';
      acStack_a8[2] = '\0';
      acStack_a8[3] = '\0';
      acStack_a8[4] = '\0';
      acStack_a8[5] = '\0';
      acStack_a8[6] = '\0';
      acStack_a8[7] = '\0';
      acStack_a8[8] = '\0';
      acStack_a8[9] = '\0';
      acStack_a8[10] = '\0';
      acStack_a8[0xb] = '\0';
      acStack_a8[0xc] = '\0';
      acStack_a8[0xd] = '\0';
      acStack_a8[0xe] = '\0';
      acStack_a8[0xf] = '\0';
      acStack_a8[0x10] = '\0';
      acStack_a8[0x11] = '\0';
      acStack_a8[0x12] = '\0';
      acStack_a8[0x13] = '\0';
      acStack_a8[0x14] = '\0';
      acStack_a8[0x15] = '\0';
      acStack_a8[0x16] = '\0';
      acStack_a8[0x17] = '\0';
      func_0x000107c27984(acStack_a8,auStack_88,&lStack_58,2);
      dVar9 = param_1 * 1000.0;
      pcVar3 = "\x01";
      pcVar5 = acStack_a8;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7ee8,pcVar5,(long)dVar9);
      pcStack_90 = acStack_a8;
      func_0x000107c278ac(&pcStack_90);
      lVar8 = 0;
      do {
        if ((&cStack_59)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
    }
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = pcVar3;
    __Unwind_Resume();
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = param_3;
    pcVar6 = pcVar5;
    dVar10 = dVar9;
    _objc_retain(param_3);
    _objc_retain(pcVar5);
    if (pcVar4 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar5);
      plVar2 = *(long **)(pcVar4 + 8);
      pcVar3 = "\x01";
      (**(code **)(*plVar2 + 0x28))();
      if ((int)plVar2 != 0) {
        plVar2 = *(long **)(pcVar4 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        func_0x000107c278b8(auStack_138,pcVar3);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar3 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x000107c278b8(auStack_120,pcVar3);
        acStack_158[0] = '\0';
        acStack_158[1] = '\0';
        acStack_158[2] = '\0';
        acStack_158[3] = '\0';
        acStack_158[4] = '\0';
        acStack_158[5] = '\0';
        acStack_158[6] = '\0';
        acStack_158[7] = '\0';
        acStack_158[8] = '\0';
        acStack_158[9] = '\0';
        acStack_158[10] = '\0';
        acStack_158[0xb] = '\0';
        acStack_158[0xc] = '\0';
        acStack_158[0xd] = '\0';
        acStack_158[0xe] = '\0';
        acStack_158[0xf] = '\0';
        acStack_158[0x10] = '\0';
        acStack_158[0x11] = '\0';
        acStack_158[0x12] = '\0';
        acStack_158[0x13] = '\0';
        acStack_158[0x14] = '\0';
        acStack_158[0x15] = '\0';
        acStack_158[0x16] = '\0';
        acStack_158[0x17] = '\0';
        func_0x000107c27984(acStack_158,auStack_138,&lStack_108,2);
        dVar10 = dVar9 * 1000.0;
        pcVar3 = "\x01";
        pcVar6 = acStack_158;
        (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f38,pcVar6,(long)dVar10);
        pcStack_140 = acStack_158;
        func_0x000107c278ac(&pcStack_140);
        lVar8 = 0;
        do {
          if ((&cStack_109)[lVar8] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar8));
          }
          lVar8 = lVar8 + -0x18;
        } while (lVar8 != -0x30);
      }
      _objc_release(pcVar5);
      _objc_release(param_3);
    }
    pcVar4 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      if (cStack_121 < '\0') {
        __ZdlPv(auStack_138[0]);
      }
      _objc_release(pcVar5);
      _objc_release(param_3);
      _objc_release(pcVar5);
      _objc_release(param_3);
      param_3 = pcVar3;
      __Unwind_Resume();
      pcVar7 = acStack_1e0;
      lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar5 = param_3;
      pcVar3 = param_3;
      dVar9 = dVar10;
      _objc_retain();
      if (pcVar4 != (char *)0x0) {
        _objc_retain(param_3);
        plVar2 = *(long **)(pcVar4 + 8);
        pcVar3 = "\x01";
        (**(code **)(*plVar2 + 0x28))();
        if ((int)plVar2 != 0) {
          plVar2 = *(long **)(pcVar4 + 8);
          _objc_retain(param_3);
          if (param_3 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = param_3;
            _objc_retainAutorelease(param_3);
            func_0x00010bdc3520();
          }
          _objc_release(param_3);
          func_0x000107c278b8(auStack_1c0,pcVar3);
          acStack_1e0[0] = '\0';
          acStack_1e0[1] = '\0';
          acStack_1e0[2] = '\0';
          acStack_1e0[3] = '\0';
          acStack_1e0[4] = '\0';
          acStack_1e0[5] = '\0';
          acStack_1e0[6] = '\0';
          acStack_1e0[7] = '\0';
          acStack_1e0[8] = '\0';
          acStack_1e0[9] = '\0';
          acStack_1e0[10] = '\0';
          acStack_1e0[0xb] = '\0';
          acStack_1e0[0xc] = '\0';
          acStack_1e0[0xd] = '\0';
          acStack_1e0[0xe] = '\0';
          acStack_1e0[0xf] = '\0';
          acStack_1e0[0x10] = '\0';
          acStack_1e0[0x11] = '\0';
          acStack_1e0[0x12] = '\0';
          acStack_1e0[0x13] = '\0';
          acStack_1e0[0x14] = '\0';
          acStack_1e0[0x15] = '\0';
          acStack_1e0[0x16] = '\0';
          acStack_1e0[0x17] = '\0';
          func_0x000107c27984(acStack_1e0,auStack_1c0,&lStack_1a8,1);
          dVar9 = dVar10 * 1000.0;
          pcVar3 = "\x01";
          (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f88,acStack_1e0,(long)dVar9);
          puStack_1c8 = acStack_1e0;
          func_0x000107c278ac(&puStack_1c8);
          pcVar6 = pcVar7;
          if (cStack_1a9 < '\0') {
            __ZdlPv(auStack_1c0[0]);
            pcVar6 = pcVar7;
          }
        }
        pcVar5 = param_3;
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
        ___stack_chk_fail();
        _objc_release(param_3);
        _objc_release(param_3);
        _objc_release(param_3);
        param_3 = pcVar3;
        __Unwind_Resume();
        lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(param_3);
        _objc_retain(pcVar6);
        if (pcVar5 != (char *)0x0) {
          _objc_retain(param_3);
          _objc_retain(pcVar6);
          plVar2 = *(long **)(pcVar5 + 8);
          (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110cb7fd8);
          if ((int)plVar2 != 0) {
            plVar2 = *(long **)(pcVar5 + 8);
            _objc_retain(param_3);
            if (param_3 == (char *)0x0) {
              pcVar3 = "";
            }
            else {
              pcVar3 = param_3;
              _objc_retainAutorelease(param_3);
              func_0x00010bdc3520();
            }
            _objc_release(param_3);
            func_0x000107c278b8(auStack_268,pcVar3);
            _objc_retain(pcVar6);
            if (pcVar6 == (char *)0x0) {
              pcVar3 = "";
            }
            else {
              _objc_retainAutorelease(pcVar6);
              pcVar3 = pcVar6;
              func_0x00010bdc3520(pcVar6);
            }
            _objc_release(pcVar6);
            func_0x000107c278b8(auStack_250,pcVar3);
            uStack_288 = 0;
            uStack_280 = 0;
            uStack_278 = 0;
            func_0x000107c27984(&uStack_288,auStack_268,&lStack_238,2);
            (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7fd8,&uStack_288,(long)(dVar9 * 1000.0));
            puStack_270 = &uStack_288;
            func_0x000107c278ac(&puStack_270);
            lVar8 = 0;
            do {
              if ((&cStack_239)[lVar8] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar8));
              }
              lVar8 = lVar8 + -0x18;
            } while (lVar8 != -0x30);
          }
          _objc_release(pcVar6);
          _objc_release(param_3);
        }
        pcVar3 = pcVar6;
        _objc_release(pcVar6);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
          ___stack_chk_fail();
          _objc_release(pcVar6);
          if (cStack_251 < '\0') {
            __ZdlPv(auStack_268[0]);
          }
          _objc_release(pcVar6);
          _objc_release(param_3);
          _objc_release(pcVar6);
          _objc_release(param_3);
          __Unwind_Resume(pcVar3);
          uVar1 = uRam00000001137f4000;
          _objc_retain(uRam00000001137f4000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b1ae8; end: 10b0b1d77;  */

void FUN_10b0b1ae8(double param_1,long param_2,char *param_3,char *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  char acStack_130 [24];
  undefined1 *puStack_118;
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char acStack_a8 [24];
  char *pcStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_3;
  pcVar6 = param_4;
  dVar9 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar2 = *(long **)(param_2 + 8);
    pcVar3 = "\x01";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_88,pcVar3);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_70,pcVar3);
      acStack_a8[0] = '\0';
      acStack_a8[1] = '\0';
      acStack_a8[2] = '\0';
      acStack_a8[3] = '\0';
      acStack_a8[4] = '\0';
      acStack_a8[5] = '\0';
      acStack_a8[6] = '\0';
      acStack_a8[7] = '\0';
      acStack_a8[8] = '\0';
      acStack_a8[9] = '\0';
      acStack_a8[10] = '\0';
      acStack_a8[0xb] = '\0';
      acStack_a8[0xc] = '\0';
      acStack_a8[0xd] = '\0';
      acStack_a8[0xe] = '\0';
      acStack_a8[0xf] = '\0';
      acStack_a8[0x10] = '\0';
      acStack_a8[0x11] = '\0';
      acStack_a8[0x12] = '\0';
      acStack_a8[0x13] = '\0';
      acStack_a8[0x14] = '\0';
      acStack_a8[0x15] = '\0';
      acStack_a8[0x16] = '\0';
      acStack_a8[0x17] = '\0';
      func_0x000107c27984(acStack_a8,auStack_88,&lStack_58,2);
      dVar9 = param_1 * 1000.0;
      pcVar3 = "\x01";
      pcVar6 = acStack_a8;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f38,pcVar6,(long)dVar9);
      pcStack_90 = acStack_a8;
      func_0x000107c278ac(&pcStack_90);
      lVar8 = 0;
      do {
        if ((&cStack_59)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
    }
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = pcVar3;
    __Unwind_Resume();
    pcVar7 = acStack_130;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = param_3;
    pcVar3 = param_3;
    dVar10 = dVar9;
    _objc_retain();
    if (pcVar4 != (char *)0x0) {
      _objc_retain(param_3);
      plVar2 = *(long **)(pcVar4 + 8);
      pcVar3 = "\x01";
      (**(code **)(*plVar2 + 0x28))();
      if ((int)plVar2 != 0) {
        plVar2 = *(long **)(pcVar4 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        func_0x000107c278b8(auStack_110,pcVar3);
        acStack_130[0] = '\0';
        acStack_130[1] = '\0';
        acStack_130[2] = '\0';
        acStack_130[3] = '\0';
        acStack_130[4] = '\0';
        acStack_130[5] = '\0';
        acStack_130[6] = '\0';
        acStack_130[7] = '\0';
        acStack_130[8] = '\0';
        acStack_130[9] = '\0';
        acStack_130[10] = '\0';
        acStack_130[0xb] = '\0';
        acStack_130[0xc] = '\0';
        acStack_130[0xd] = '\0';
        acStack_130[0xe] = '\0';
        acStack_130[0xf] = '\0';
        acStack_130[0x10] = '\0';
        acStack_130[0x11] = '\0';
        acStack_130[0x12] = '\0';
        acStack_130[0x13] = '\0';
        acStack_130[0x14] = '\0';
        acStack_130[0x15] = '\0';
        acStack_130[0x16] = '\0';
        acStack_130[0x17] = '\0';
        func_0x000107c27984(acStack_130,auStack_110,&lStack_f8,1);
        dVar10 = dVar9 * 1000.0;
        pcVar3 = "\x01";
        (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7f88,acStack_130,(long)dVar10);
        puStack_118 = acStack_130;
        func_0x000107c278ac(&puStack_118);
        pcVar6 = pcVar7;
        if (cStack_f9 < '\0') {
          __ZdlPv(auStack_110[0]);
          pcVar6 = pcVar7;
        }
      }
      pcVar5 = param_3;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_3);
      param_3 = pcVar3;
      __Unwind_Resume();
      lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(param_3);
      _objc_retain(pcVar6);
      if (pcVar5 != (char *)0x0) {
        _objc_retain(param_3);
        _objc_retain(pcVar6);
        plVar2 = *(long **)(pcVar5 + 8);
        (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110cb7fd8);
        if ((int)plVar2 != 0) {
          plVar2 = *(long **)(pcVar5 + 8);
          _objc_retain(param_3);
          if (param_3 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = param_3;
            _objc_retainAutorelease(param_3);
            func_0x00010bdc3520();
          }
          _objc_release(param_3);
          func_0x000107c278b8(auStack_1b8,pcVar3);
          _objc_retain(pcVar6);
          if (pcVar6 == (char *)0x0) {
            pcVar3 = "";
          }
          else {
            _objc_retainAutorelease(pcVar6);
            pcVar3 = pcVar6;
            func_0x00010bdc3520(pcVar6);
          }
          _objc_release(pcVar6);
          func_0x000107c278b8(auStack_1a0,pcVar3);
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          func_0x000107c27984(&uStack_1d8,auStack_1b8,&lStack_188,2);
          (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7fd8,&uStack_1d8,(long)(dVar10 * 1000.0));
          puStack_1c0 = &uStack_1d8;
          func_0x000107c278ac(&puStack_1c0);
          lVar8 = 0;
          do {
            if ((&cStack_189)[lVar8] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar8));
            }
            lVar8 = lVar8 + -0x18;
          } while (lVar8 != -0x30);
        }
        _objc_release(pcVar6);
        _objc_release(param_3);
      }
      pcVar3 = pcVar6;
      _objc_release(pcVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
        ___stack_chk_fail();
        _objc_release(pcVar6);
        if (cStack_1a1 < '\0') {
          __ZdlPv(auStack_1b8[0]);
        }
        _objc_release(pcVar6);
        _objc_release(param_3);
        _objc_release(pcVar6);
        _objc_release(param_3);
        __Unwind_Resume(pcVar3);
        uVar1 = uRam00000001137f4000;
        _objc_retain(uRam00000001137f4000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b1d78; end: 10b0b1f2b;  */

void FUN_10b0b1d78(double param_1,long param_2,char *param_3,char *param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  double dVar7;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar5 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar4 = param_3;
  dVar7 = param_1;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar3 = *(long **)(param_2 + 8);
    pcVar4 = "\x01";
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar3 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_60,pcVar4);
      acStack_80[0] = '\0';
      acStack_80[1] = '\0';
      acStack_80[2] = '\0';
      acStack_80[3] = '\0';
      acStack_80[4] = '\0';
      acStack_80[5] = '\0';
      acStack_80[6] = '\0';
      acStack_80[7] = '\0';
      acStack_80[8] = '\0';
      acStack_80[9] = '\0';
      acStack_80[10] = '\0';
      acStack_80[0xb] = '\0';
      acStack_80[0xc] = '\0';
      acStack_80[0xd] = '\0';
      acStack_80[0xe] = '\0';
      acStack_80[0xf] = '\0';
      acStack_80[0x10] = '\0';
      acStack_80[0x11] = '\0';
      acStack_80[0x12] = '\0';
      acStack_80[0x13] = '\0';
      acStack_80[0x14] = '\0';
      acStack_80[0x15] = '\0';
      acStack_80[0x16] = '\0';
      acStack_80[0x17] = '\0';
      func_0x000107c27984(acStack_80,auStack_60,&lStack_48,1);
      dVar7 = param_1 * 1000.0;
      pcVar4 = "\x01";
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110cb7f88,acStack_80,(long)dVar7);
      puStack_68 = acStack_80;
      func_0x000107c278ac(&puStack_68);
      param_4 = pcVar5;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        param_4 = pcVar5;
      }
    }
    pcVar2 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(param_3);
    param_3 = pcVar4;
    __Unwind_Resume();
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_3);
    _objc_retain(param_4);
    if (pcVar2 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(param_4);
      plVar3 = *(long **)(pcVar2 + 8);
      (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_110cb7fd8);
      if ((int)plVar3 != 0) {
        plVar3 = *(long **)(pcVar2 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        func_0x000107c278b8(auStack_108,pcVar4);
        _objc_retain(param_4);
        if (param_4 == (char *)0x0) {
          pcVar4 = "";
        }
        else {
          _objc_retainAutorelease(param_4);
          pcVar4 = param_4;
          func_0x00010bdc3520(param_4);
        }
        _objc_release(param_4);
        func_0x000107c278b8(auStack_f0,pcVar4);
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        func_0x000107c27984(&uStack_128,auStack_108,&lStack_d8,2);
        (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110cb7fd8,&uStack_128,(long)(dVar7 * 1000.0));
        puStack_110 = &uStack_128;
        func_0x000107c278ac(&puStack_110);
        lVar6 = 0;
        do {
          if ((&cStack_d9)[lVar6] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar6));
          }
          lVar6 = lVar6 + -0x18;
        } while (lVar6 != -0x30);
      }
      _objc_release(param_4);
      _objc_release(param_3);
    }
    pcVar4 = param_4;
    _objc_release(param_4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_release(param_4);
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release(param_3);
      __Unwind_Resume(pcVar4);
      uVar1 = uRam00000001137f4000;
      _objc_retain(uRam00000001137f4000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0b1f2c; end: 10b0b21bb;  */

void FUN_10b0b1f2c(double param_1,long param_2,char *param_3,char *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar2 = *(long **)(param_2 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110cb7fd8);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_88,pcVar3);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_70,pcVar3);
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      func_0x000107c27984(&uStack_a8,auStack_88,&lStack_58,2);
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cb7fd8,&uStack_a8,(long)(param_1 * 1000.0));
      puStack_90 = &uStack_a8;
      func_0x000107c278ac(&puStack_90);
      lVar4 = 0;
      do {
        if ((&cStack_59)[lVar4] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar4));
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x30);
    }
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar3 = param_4;
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume(pcVar3);
  uVar1 = uRam00000001137f4000;
  _objc_retain(uRam00000001137f4000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0b21bc; end: 10b0b21e7; +[ObjcInterceptorConfiguration sharedInterceptor] */

void FUN_10b0b21bc(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001137f4000;
  _objc_retain(uRam00000001137f4000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0b21e8; end: 10b0b2217; +[ObjcInterceptorConfiguration setSharedInterceptor:] */

void FUN_10b0b21e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = uRam00000001137f4000;
  uRam00000001137f4000 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0b2218; end: 10b0b2223; -[DefaultObjcInterceptor interceptObjcLazyWithProviderType:closure:] */

void FUN_10b0b2218(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010b0b2220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 0x10))(in_x3);
  return;
}



/* Entry: 10b0b2224; end: 10b0b22d3; -[ObjcLazy initWithInitializer:] */

undefined1 * FUN_10b0b2224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127057d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0b22d4; end: 10b0b2383; -[ObjcLazy initWithValue:] */

undefined1 * FUN_10b0b22d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127057d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x20) = 1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0b2384; end: 10b0b23cb; +[ObjcLazy withValue:] */

void FUN_10b0b2384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c060400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0b23cc; end: 10b0b23d7; -[ObjcLazy isInitialized] */

undefined1 FUN_10b0b23cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10b0b23d8; end: 10b0b24ef; -[ObjcLazy value] */

void FUN_10b0b23d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar4);
  }
  else {
    lVar1 = param_1;
    func_0x00010c119c20();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10b0b24f0;
    puStack_40 = &UNK_110848868;
    ppuVar2 = &puStack_58;
    lStack_38 = param_1;
    _objc_retainBlock();
    puVar3 = PTR_PTR_1126df8f0;
    func_0x00010c22bb40();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 == 0) || (puVar3 == (undefined *)0x0)) {
      (*(code *)ppuVar2[2])(ppuVar2);
    }
    else {
      func_0x00010c068ee0(puVar3,param_2,lVar1,ppuVar2);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}


