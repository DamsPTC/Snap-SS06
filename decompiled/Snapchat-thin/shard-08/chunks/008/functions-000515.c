/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065a3794; end: 1065a3a2f; -[SCConversationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065a3794(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274af00);
  _objc_destroyWeak(param_1 + _DAT_11274ae98);
  _objc_destroyWeak(param_1 + _DAT_11274ae7c);
  _objc_destroyWeak(param_1 + _DAT_11274ae8c);
  _objc_storeStrong(param_1 + _DAT_11274ae68,0);
  _objc_storeStrong(param_1 + _DAT_11274ae64,0);
  _objc_destroyWeak(param_1 + _DAT_11274ae80);
  _objc_destroyWeak(param_1 + _DAT_11274aefc);
  _objc_destroyWeak(param_1 + _DAT_11274aea8);
  _objc_destroyWeak(param_1 + _DAT_11274ae60);
  _objc_destroyWeak(param_1 + _DAT_11274ae94);
  _objc_destroyWeak(param_1 + _DAT_11274ae90);
  _objc_destroyWeak(param_1 + _DAT_11274aef8);
  _objc_destroyWeak(param_1 + _DAT_11274aef4);
  _objc_destroyWeak(param_1 + _DAT_11274aef0);
  _objc_destroyWeak(param_1 + _DAT_11274aeec);
  _objc_destroyWeak(param_1 + _DAT_11274aee8);
  _objc_destroyWeak(param_1 + _DAT_11274aee4);
  _objc_destroyWeak(param_1 + _DAT_11274aee0);
  _objc_destroyWeak(param_1 + _DAT_11274aea4);
  _objc_destroyWeak(param_1 + _DAT_11274aedc);
  _objc_destroyWeak(param_1 + _DAT_11274aed8);
  _objc_destroyWeak(param_1 + _DAT_11274ae9c);
  _objc_destroyWeak(param_1 + _DAT_11274aed4);
  _objc_destroyWeak(param_1 + _DAT_11274aea0);
  _objc_destroyWeak(param_1 + _DAT_11274aed0);
  _objc_destroyWeak(param_1 + _DAT_11274aecc);
  _objc_destroyWeak(param_1 + _DAT_11274aec8);
  _objc_destroyWeak(param_1 + _DAT_11274aec4);
  _objc_destroyWeak(param_1 + _DAT_11274aec0);
  _objc_destroyWeak(param_1 + _DAT_11274aebc);
  _objc_destroyWeak(param_1 + _DAT_11274ae70);
  _objc_destroyWeak(param_1 + _DAT_11274aeb8);
  _objc_destroyWeak(param_1 + _DAT_11274ae74);
  _objc_destroyWeak(param_1 + _DAT_11274ae78);
  _objc_destroyWeak(param_1 + _DAT_11274aeb4);
  _objc_destroyWeak(param_1 + _DAT_11274aeb0);
  _objc_destroyWeak(param_1 + _DAT_11274ae6c);
  _objc_destroyWeak(param_1 + _DAT_11274aeac);
  _objc_storeStrong(param_1 + _DAT_11274af04,0);
  _objc_storeStrong(param_1 + _DAT_11274ae88,0);
  _objc_storeStrong(param_1 + _DAT_11274ae84,0);
  _objc_storeStrong(param_1 + _DAT_11274ae58,0);
  _objc_storeStrong(param_1 + _DAT_11274ae50,0);
  _objc_storeStrong(param_1 + _DAT_11274ae4c,0);
  _objc_storeStrong(param_1 + _DAT_11274ae48,0);
  _objc_storeStrong(param_1 + _DAT_11274ae54,0);
  _objc_storeStrong(param_1 + _DAT_11274ae44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274ae5c,0);
  return;
}



/* Entry: 1065a3a30; end: 1065a3b4b; -[SCClearFeedActionHandler initWithConversationIdResolver:actionHandler:userClearConversationEventPublisher:userId:] */

undefined1 *
FUN_1065a3a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f1dc0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
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



/* Entry: 1065a3b4c; end: 1065a3b9b; -[SCClearFeedActionHandler clearingFeedIds] */

void FUN_1065a3b4c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065a3b9c; end: 1065a3d63; -[SCClearFeedActionHandler clearFeedItemForUserId:source:] */

void FUN_1065a3b9c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bdc6460(param_1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_68;
  _objc_copyWeak(auStack_78);
  _objc_retain(param_3);
  uStack_70 = param_4;
  func_0x00010bf504e0(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar6);
  puVar5 = puVar6;
  func_0x00010bf529e0();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x00010be8baa0(param_3);
  }
  else {
    puVar5 = puVar6;
    func_0x00010bfb1920(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde0520(param_3);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1065a3d64; end: 1065a3dff;  */

void FUN_1065a3d64(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010be8baa0(param_1);
  }
  else {
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde0520(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065a3e00; end: 1065a3fc7; -[SCClearFeedActionHandler clearFeedItemForGroupId:source:] */

void FUN_1065a3e00(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bdc6460(param_1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b01c0;
  func_0x00010bfcf680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_68;
  _objc_copyWeak(auStack_78);
  _objc_retain(param_3);
  uStack_70 = param_4;
  func_0x00010bf504e0(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar6);
  puVar5 = puVar6;
  func_0x00010bf529e0();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x00010be8baa0(param_3);
  }
  else {
    puVar5 = puVar6;
    func_0x00010bfb1920(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde0520(param_3);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1065a3fc8; end: 1065a4063;  */

void FUN_1065a3fc8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010be8baa0(param_1);
  }
  else {
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde0520(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065a4064; end: 1065a422b; -[SCClearFeedActionHandler _clearFeedEntryWithConversationId:userId:groupId:source:] */

void FUN_1065a4064(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [8];
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
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065a422c;
  puStack_90 = &UNK_110850cf8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_b0,auStack_68);
  func_0x00010bf3b000(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
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



/* Entry: 1065a422c; end: 1065a4297;  */

void FUN_1065a422c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065a4298; end: 1065a4363; -[SCClearFeedActionHandler _didClearOneOnOneFeedEntryWithConversationId:userId:groupId:] */

void FUN_1065a4298(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = param_5;
    func_0x00010c08fa60();
    if (lVar1 == 0) goto LAB_1065a4348;
    func_0x00010be8baa0(param_1,param_2,param_5);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = PTR_PTR_1126cbb78;
    func_0x00010bfce8a0(PTR_PTR_1126cbb78,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be8baa0(param_1,param_2,param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = PTR_PTR_1126cbb78;
    func_0x00010c0e8240(PTR_PTR_1126cbb78,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
LAB_1065a4348:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065a4364; end: 1065a43cb; -[SCClearFeedActionHandler _addClearingFeedId:] */

void FUN_1065a4364(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x28);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065a43cc; end: 1065a4433; -[SCClearFeedActionHandler _removeClearingFeedId:] */

void FUN_1065a43cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x28);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065a4434; end: 1065a4487; -[SCClearFeedActionHandler .cxx_destruct] */

void FUN_1065a4434(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065a4488; end: 1065a44b3; +[SCGrapheneArroyoMetric mmMigrationTotalLatency] */

void FUN_1065a4488(void)

{
  _objc_alloc(PTR_PTR_1126cbb80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a44b4; end: 1065a44df; +[SCGrapheneArroyoMetric mmMigrationLatency] */

void FUN_1065a44b4(void)

{
  _objc_alloc(PTR_PTR_1126cbb80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a44e0; end: 1065a450b; +[SCGrapheneArroyoMetric mmMigrationBreakdown] */

void FUN_1065a44e0(void)

{
  _objc_alloc(PTR_PTR_1126cbb80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a450c; end: 1065a4537; +[SCGrapheneArroyoMetric mmMigrationResult] */

void FUN_1065a450c(void)

{
  _objc_alloc(PTR_PTR_1126cbb80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a4538; end: 1065a4563; +[SCGrapheneArroyoMetric mmMissingUserId] */

void FUN_1065a4538(void)

{
  _objc_alloc(PTR_PTR_1126cbb80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a4564; end: 1065a458f; +[SCGrapheneArroyoMetric mmFixedTeamSnapchatMapping] */

void FUN_1065a4564(void)

{
  _objc_alloc(PTR_PTR_1126cbb80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065a4590; end: 1065a462f; -[SCGrapheneArroyoMetric description] */

void FUN_1065a4590(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e54b18;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e54b18,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f1dc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1065a4630; end: 1065a47a3; -[SCGrapheneRegistry arroyoGraphene] */

void FUN_1065a4630(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1065a46b8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c3a40 != -1) {
    func_0x00010002a2fc(0x1136c3a40,&puStack_48);
  }
  uVar1 = uRam00000001136c3a38;
  _objc_retain(uRam00000001136c3a38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065a47a4; end: 1065a490b;  */

void FUN_1065a47a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar5 = *(undefined8 *)(lStack_108 + lVar7 * 8);
        uVar2 = uVar5;
        func_0x00010c07d920();
        if ((int)uVar2 != 0) {
          puVar3 = PTR_PTR_1126cbb88;
          _objc_alloc();
          uVar2 = uVar5;
          func_0x00010bf490e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cb9a0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c02b780(puVar3,param_2,uVar2,uVar5);
          _objc_release(uVar5);
          _objc_release(uVar2);
          goto LAB_1065a48c4;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    puVar3 = (undefined *)0x0;
  }
LAB_1065a48c4:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar4 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065a490c; end: 1065a4953; -[SCChatArroyoConversationDataCoordinator nativeConversationManager] */

void FUN_1065a490c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1065a4954; end: 1065a495f; +[SCChatArroyoConversationDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_1065a4954(void)

{
  return &PTR____CFConstantStringClassReference_110e54c18;
}



/* Entry: 1065a4960; end: 1065a4967; -[SCChatArroyoConversationDataCoordinator removeDataUpdateListener:] */

void FUN_1065a4960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1065a4968; end: 1065a4b2b; -[SCChatArroyoConversationDataCoordinator handleDataRequest:] */

void FUN_1065a4968(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb390;
  _objc_opt_class(PTR_PTR_1126cb390);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR_PTR_1126cb390;
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126cba50;
    _objc_opt_class(PTR_PTR_1126cba50);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    puVar1 = PTR_PTR_1126cba50;
    if ((uVar2 & 1) == 0) goto LAB_1065a4b10;
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    func_0x00010c0bfca0(uVar3);
  }
  _objc_release(uVar3);
LAB_1065a4b10:
  _objc_release(param_3);
  return;
}



/* Entry: 1065a4b2c; end: 1065a4c3b;  */

void FUN_1065a4b2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1065a4c3c; end: 1065a4c4f;  */

void FUN_1065a4c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setActiveConversationId_chatIde_112586008,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1065a4c50; end: 1065a4d2f;  */

void FUN_1065a4c50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1065a4d30; end: 1065a4d3f;  */

void FUN_1065a4d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resumeActiveConversationById_ch_112583068,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1065a4d40; end: 1065a4dcb;  */

void FUN_1065a4d40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1065a4dcc; end: 1065a4dd7;  */

void FUN_1065a4dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed2070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__unsetActiveConversationById__1125921c0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1065a4dd8; end: 1065a4e3f;  */

void FUN_1065a4dd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf50280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c23ca60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6fb20(uVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1065a4e40; end: 1065a4ec3; -[SCChatArroyoConversationDataCoordinator _unsetActiveConversationById:] */

void FUN_1065a4e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x28) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = 1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,0,param_3);
    *(undefined1 *)(param_1 + 0x50) = 0;
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x80));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065a4ec4; end: 1065a521f; -[SCChatArroyoConversationDataCoordinator _resumeActiveConversationById:chatIdentifier:metadata:] */

void FUN_1065a4ec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  ppuVar6 = &puStack_150;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,param_1);
    puVar3 = PTR_PTR_1126b46e0;
    _objc_alloc();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1065a5220;
    puStack_98 = &UNK_11092d3c8;
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_copyWeak(auStack_88,auStack_80);
    puStack_e8 = puVar7;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1065a5308;
    puStack_d0 = &UNK_11085d500;
    _objc_retain(param_3);
    uStack_c8 = param_3;
    _objc_retain(param_4);
    uStack_c0 = param_4;
    _objc_copyWeak(auStack_b8,auStack_80);
    func_0x00010c04f560();
    puVar4 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar7;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x1065a53a8;
    puStack_108 = &UNK_110848218;
    _objc_retain();
    puStack_100 = puVar4;
    _objc_copyWeak(auStack_f0,auStack_80);
    _objc_retain(puVar3);
    ppuVar5 = &puStack_120;
    puStack_f8 = puVar3;
    _objc_retainBlock(ppuVar5);
    puStack_150 = puVar7;
    uStack_148 = 0xc2000000;
    uStack_140 = 0x1065a53fc;
    puStack_138 = &UNK_110864d98;
    _objc_retain(param_4);
    uStack_130 = param_4;
    _objc_copyWeak(auStack_128,auStack_80);
    _objc_retainBlock(&puStack_150);
    puVar7 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    func_0x00010c04f4c0();
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_1065ac178(param_5);
    func_0x00010bf969a0(param_1);
    _objc_release(param_1);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    _objc_destroyWeak(auStack_128);
    _objc_release(uStack_130);
    _objc_release(ppuVar5);
    _objc_release(puStack_f8);
    _objc_destroyWeak(auStack_f0);
    _objc_release(puStack_100);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_destroyWeak(auStack_88);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065a5220; end: 1065a5307;  */

void FUN_1065a5220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00010c246ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cba40;
  _objc_alloc(PTR_PTR_1126cba40);
  func_0x00010c004a40();
  _objc_release(param_2);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be95b00();
  _objc_release(lVar3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  func_0x00010be876e0(param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065a5308; end: 1065a549b;  */

void FUN_1065a5308(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126cb388;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa0180(puVar2,param_2,uVar3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcb7e0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2a00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065a549c; end: 1065a552b; -[SCChatArroyoConversationDataCoordinator _resumeActiveConversation:] */

void FUN_1065a549c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1065a552c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065a552c; end: 1065a553b;  */

void FUN_1065a552c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetInitialStateAndUpdateConve_112582560,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 1065a553c; end: 1065a593b; -[SCChatArroyoConversationDataCoordinator _setActiveConversationId:chatIdentifier:metadata:metricsTracker:] */

void FUN_1065a553c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar3 = PTR_PTR_1126b46e0;
  _objc_alloc();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1065a593c;
  puStack_a8 = &UNK_11092d3f8;
  _objc_retain(puVar2);
  puStack_a0 = puVar2;
  _objc_retain(param_6);
  uStack_98 = param_6;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_100 = puVar6;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1065a5ac0;
  puStack_e8 = &UNK_1108b3f88;
  lStack_90 = param_1;
  _objc_retain(puVar2);
  puStack_e0 = puVar2;
  _objc_retain(param_6);
  uStack_d8 = param_6;
  _objc_copyWeak(auStack_c8,auStack_80);
  _objc_retain(param_4);
  puStack_130 = puVar6;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_1065a5b70;
  puStack_118 = &UNK_110841fb0;
  uStack_d0 = param_4;
  _objc_retain(param_3);
  uStack_110 = param_3;
  _objc_copyWeak(auStack_108,auStack_80);
  func_0x00010c04f560();
  puStack_170 = puVar6;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1065a5b9c;
  puStack_158 = &UNK_110850cf8;
  _objc_retain(puVar2);
  puStack_150 = puVar2;
  _objc_retain(param_6);
  uStack_148 = param_6;
  _objc_copyWeak(auStack_138,auStack_80);
  _objc_retain(puVar3);
  ppuVar4 = &puStack_170;
  puStack_140 = puVar3;
  _objc_retainBlock(ppuVar4);
  puStack_1a8 = puVar6;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x1065a5c00;
  puStack_190 = &UNK_11085d500;
  _objc_retain(param_6);
  uStack_188 = param_6;
  _objc_copyWeak(auStack_178,auStack_80);
  _objc_retain(param_4);
  ppuVar5 = &puStack_1a8;
  uStack_180 = param_4;
  _objc_retainBlock(ppuVar5);
  puVar6 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  func_0x00010c04f4c0();
  func_0x00010c0d58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1065ac178(param_5);
  func_0x00010bf969a0(param_1);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(uStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(uStack_188);
  _objc_release(ppuVar4);
  _objc_release(puStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(uStack_148);
  _objc_release(puStack_150);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_d8);
  _objc_release(puStack_e0);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_98);
  _objc_release(puStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065a593c; end: 1065a5abf;  */

void FUN_1065a593c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00010c246ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cba40;
  _objc_alloc(PTR_PTR_1126cba40);
  func_0x00010c004a40();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c074920();
  func_0x00010c1b18e0(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = param_2;
  func_0x00010c0f4aa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf529e0(uVar5);
  func_0x00010c1d92c0(uVar6);
  _objc_release(uVar5);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bea4aa0();
  _objc_release(lVar3);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  func_0x00010be876e0(lVar3);
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x78);
  puVar4 = puVar2;
  func_0x00010c074920(puVar2);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x98);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  FUN_1065ad160(uVar1,uVar6,puVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065a5ac0; end: 1065a5b6f;  */

void FUN_1065a5ac0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_1065acfd0(param_2);
  func_0x00010bf43820(*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be29340();
  _objc_release(lVar2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2a00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065a5b70; end: 1065a5b9b;  */

void FUN_1065a5b70(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be157a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065a5b9c; end: 1065a5cdf;  */

void FUN_1065a5b9c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c278920(*(undefined8 *)(param_1 + 0x28),param_2,3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d58a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5fe0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065a5ce0; end: 1065a5d63; -[SCChatArroyoConversationDataCoordinator _handleFailedConversationUpdate:failedMessage:] */

void FUN_1065a5ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126cb388;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa0180(puVar2,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010bdcb7e0(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065a5d64; end: 1065a5d9f; -[SCChatArroyoConversationDataCoordinator _completeChatDisplayReadyFlowWithFailure:] */

void FUN_1065a5d64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065a5da0; end: 1065a5ddb; -[SCChatArroyoConversationDataCoordinator _recordFetchedMessagesCount:] */

void FUN_1065a5da0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065a5ddc; end: 1065a5ec7; -[SCChatArroyoConversationDataCoordinator _paginationRequestDidCompleteForConversationId:paginationToken:pageSize:success:] */

void FUN_1065a5ddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1065a5ec8;
  puStack_70 = &UNK_110878f70;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  lStack_50 = param_1;
  uStack_48 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065a5ec8; end: 1065a5ef3;  */

void FUN_1065a5ec8(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x50) = 0;
  if (*(char *)(param_1 + 0x40) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x80),PTR_s_addObject__11259c1f0,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 1065a5ef4; end: 1065a62a7; -[SCChatArroyoConversationDataCoordinator _paginateForConversationId:sinceMessageId:] */

void FUN_1065a5ef4(long param_1,undefined8 param_2,undefined *param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = *(undefined **)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_retain(puVar6);
  if (param_3 == puVar6) {
    _objc_release(puVar6);
    _objc_release(param_3);
LAB_1065a5fa8:
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c64c0;
    if (param_4 != (undefined **)0x0) {
      ppuVar1 = param_4;
    }
    _objc_retain(ppuVar1);
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 0x80);
      func_0x00010bf4b900();
      if ((uVar4 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x50) = 1;
        _objc_initWeak(auStack_80,param_1);
        uVar7 = *(undefined8 *)(param_1 + 0x58);
        puVar5 = PTR_PTR_1126b46e0;
        _objc_alloc(PTR_PTR_1126b46e0);
        puVar6 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0xc2000000;
        pcStack_c0 = FUN_1065a62a8;
        puStack_b8 = &UNK_11092d458;
        _objc_copyWeak(auStack_90,auStack_80);
        uStack_88 = uVar7;
        _objc_retain(puVar2);
        puStack_b0 = puVar2;
        _objc_retain(param_3);
        puStack_a8 = param_3;
        _objc_retain(ppuVar1);
        ppuStack_a0 = ppuVar1;
        _objc_retain(puVar3);
        puStack_120 = puVar6;
        uStack_118 = 0xc2000000;
        pcStack_110 = FUN_1065a64f4;
        puStack_108 = &UNK_11092d488;
        puStack_98 = puVar3;
        _objc_copyWeak(auStack_e0,auStack_80);
        uStack_d8 = uVar7;
        _objc_retain(puVar2);
        puStack_100 = puVar2;
        _objc_retain(param_3);
        puStack_f8 = param_3;
        _objc_retain(ppuVar1);
        ppuStack_f0 = ppuVar1;
        _objc_retain(puVar3);
        puStack_e8 = puVar3;
        _objc_copyWeak(auStack_130,auStack_80);
        uStack_128 = uVar7;
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(puVar3);
        func_0x00010c04f560(puVar5);
        func_0x00010c0d58a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa6000();
        _objc_release(param_1);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(param_4);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_130);
        _objc_release(puStack_e8);
        _objc_release(ppuStack_f0);
        _objc_release(puStack_f8);
        _objc_release(puStack_100);
        _objc_destroyWeak(auStack_e0);
        _objc_release(puStack_98);
        _objc_release(ppuStack_a0);
        _objc_release(puStack_a8);
        _objc_release(puStack_b0);
        _objc_destroyWeak(auStack_90);
        _objc_destroyWeak(auStack_80);
      }
    }
    _objc_release(ppuVar1);
  }
  else {
    puVar3 = param_3;
    if (puVar6 != (undefined *)0x0) {
      func_0x00010c071ae0();
      _objc_release(puVar6);
      _objc_release(param_3);
      if ((int)puVar3 == 0) goto LAB_1065a6230;
      goto LAB_1065a5fa8;
    }
  }
  _objc_release(puVar3);
LAB_1065a6230:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065a62a8; end: 1065a63fb;  */

void FUN_1065a62a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x68);
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_release(uVar4);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1065a63fc; end: 1065a64f3;  */

void FUN_1065a63fc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010beb3200(uVar2,param_2,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x28))
  ;
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010be6fba0(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_retain(lVar3);
  if (lVar1 == lVar3) {
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  else {
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
    lVar4 = lVar1;
    func_0x00010c071ae0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar3);
    if ((int)lVar4 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfeb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didPaginateForConversation_fetc_11255d460,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x60));
  return;
}



/* Entry: 1065a64f4; end: 1065a65ef;  */

void FUN_1065a64f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x68);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1065a65f0; end: 1065a6643;  */

void FUN_1065a65f0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010beb3200(uVar1,param_2,*(undefined8 *)(param_1 + 0x48),0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010be6fba0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be6fbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__paginationRequestDidFail_112579890);
  return;
}



/* Entry: 1065a6644; end: 1065a6717;  */

void FUN_1065a6644(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1065a6718;
    puStack_60 = &UNK_110863fc8;
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lStack_58 = lVar1;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = uVar3;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = uVar4;
    _objc_retain(uVar3);
    uStack_40 = uVar3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_78);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1065a6718; end: 1065a6757;  */

void FUN_1065a6718(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010beb3200(uVar1,param_2,*(undefined8 *)(param_1 + 0x40),0);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be157b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchingOlderMessagesFromServer_112562f88);
  return;
}



/* Entry: 1065a6758; end: 1065a67af; -[SCChatArroyoConversationDataCoordinator _paginationRequestDidFail] */

void FUN_1065a6758(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1065a67b0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x68),param_2,&puStack_38);
  return;
}



/* Entry: 1065a67b0; end: 1065a67d7;  */

void FUN_1065a67b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__conversationDidUpdate_hasMoreMe_112557c70,lVar1,1,3,
               4,0,0);
    return;
  }
  return;
}



/* Entry: 1065a67d8; end: 1065a682f; -[SCChatArroyoConversationDataCoordinator _fetchingOlderMessagesFromServer] */

void FUN_1065a67d8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1065a6830;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x68),param_2,&puStack_38);
  return;
}



/* Entry: 1065a6830; end: 1065a6857;  */

void FUN_1065a6830(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__conversationDidUpdate_hasMoreMe_112557c70,lVar1,1,1,
               4,0,0);
    return;
  }
  return;
}



/* Entry: 1065a6858; end: 1065a68bb; -[SCChatArroyoConversationDataCoordinator _shouldDiscardPaginationResultWithCapturedEpoch:conversation:] */

bool FUN_1065a6858(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (param_3 != lVar1) {
    func_0x00010bf50280(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_4);
  }
  return param_3 != lVar1;
}



/* Entry: 1065a68bc; end: 1065a6983; -[SCChatArroyoConversationDataCoordinator _didPaginateForConversation:fetchedMessages:pageSize:hasMore:] */

void FUN_1065a68bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1065a6984;
  puStack_68 = &UNK_110858b70;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065a6984; end: 1065a6c0f;  */

void FUN_1065a6984(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x18) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
    _objc_retain();
    _objc_retain(uVar8);
    if (uVar7 == uVar8) {
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar7);
      _objc_release(uVar1);
    }
    else {
      uVar3 = uVar7;
      if (uVar8 == 0) goto LAB_1065a6be4;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar7);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        return;
      }
    }
  }
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x20);
  if (uVar1 == 0) {
    return;
  }
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar7 = uVar1;
    FUN_1065ac270(uVar1,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar7;
    func_0x00010c246ca0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
  }
  uVar3 = *(ulong *)(param_1 + 0x30);
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  FUN_1065a47a4();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(ulong *)(*(long *)(param_1 + 0x20) + 0x48) = uVar7;
  _objc_release(uVar6);
  uVar7 = *(ulong *)(param_1 + 0x28);
  if (uVar7 == 0) {
    uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010bf500c0(uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar7);
  }
  puVar4 = PTR_PTR_1126cba40;
  _objc_alloc(PTR_PTR_1126cba40);
  func_0x00010c004a40();
  lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
  puVar5 = puVar4;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c089d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar9);
  _objc_release(puVar5);
  if (lVar2 == 0) {
    func_0x00010be1a9a0(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010bde8b60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar4);
LAB_1065a6be4:
  _objc_release(uVar7);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065a6c10; end: 1065a6c17; -[SCChatArroyoConversationDataCoordinator _generateAndSetSnapshotForConversation:messagesForFirstAboveTheFold:] */

void FUN_1065a6c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__generateAndSetSnapshotForConver_112564410,param_3,param_4,0);
  return;
}



/* Entry: 1065a6c18; end: 1065a6d3f; -[SCChatArroyoConversationDataCoordinator _generateAndSetSnapshotForConversation:messagesForFirstAboveTheFold:overrideTimestamp:] */

void FUN_1065a6c18(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c261400(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e9060();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x0001070b5660(param_4,*(undefined8 *)(param_1 + 0x78),
                      ((uint)(8 < lVar1 - 1U) |
                      0x1e7U >> (ulong)((uint)(lVar1 - 1U) & 0x1f) ^ 0xffffffff) & (uint)uVar4 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar1 = param_3;
  func_0x0001070701e0(param_3,uVar2,*(undefined8 *)(param_1 + 0x78),param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  lVar3 = param_3;
  func_0x00010bfe5d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0640(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1065a6d40; end: 1065a6e53; -[SCChatArroyoConversationDataCoordinator _setInitialActiveConversation:metricsTracker:] */

void FUN_1065a6d40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1065a6df8;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065a6e54; end: 1065a6e5b; -[SCChatArroyoConversationDataCoordinator _resetInitialStateAndUpdateConversation:metricsTracker:] */

void FUN_1065a6e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__resetInitialStateAndUpdateConve_112582568,param_3,param_4,0);
  return;
}



/* Entry: 1065a6e5c; end: 1065a700b; -[SCChatArroyoConversationDataCoordinator _resetInitialStateAndUpdateConversation:metricsTracker:clearSnapshots:] */

void FUN_1065a6e5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined8 *)(param_1 + 0x40) = 1;
  uVar1 = param_3;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1065a47a4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x50) = 0;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x80));
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  if (param_5 != 0) {
    uVar1 = param_3;
    func_0x00010bf500c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c0e00e0(uVar2,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c089d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x70),param_2,uVar4);
    uVar2 = param_3;
    func_0x00010c0cbb20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010be1a9c0(param_1,param_2,param_3,uVar3,uVar1);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  func_0x00010bde8b60(param_1,param_2,param_3,1,0,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065a700c; end: 1065a717b; -[SCChatArroyoConversationDataCoordinator _shouldProcessUpdateForConversationId:conversation:] */

long FUN_1065a700c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if ((param_4 == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar5 = 0;
    goto LAB_1065a715c;
  }
  lVar1 = param_3;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x18);
  _objc_retain();
  _objc_retain(lVar5);
  if (lVar1 == lVar5) {
    _objc_release(lVar5);
    _objc_release(lVar1);
LAB_1065a70ac:
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf500c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    _objc_retain(lVar4);
    if (lVar1 == lVar4) {
      lVar5 = 1;
    }
    else if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar1;
      func_0x00010c071ae0(lVar1,param_2,lVar4);
    }
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
LAB_1065a714c:
    _objc_release(lVar2);
  }
  else {
    if (lVar5 == 0) {
      lVar5 = 0;
      lVar2 = lVar1;
      goto LAB_1065a714c;
    }
    lVar2 = lVar1;
    func_0x00010c071ae0(lVar1,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar1);
    if ((int)lVar2 != 0) goto LAB_1065a70ac;
    lVar5 = 0;
  }
  _objc_release(lVar1);
LAB_1065a715c:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 1065a717c; end: 1065a720b; -[SCChatArroyoConversationDataCoordinator _shouldProcessResetForConversationId:] */

long FUN_1065a717c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x18);
  _objc_retain();
  _objc_retain(lVar1);
  if (param_3 == lVar1) {
    lVar2 = 1;
  }
  else if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c071ae0(param_3,param_2,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 1065a720c; end: 1065a721f; -[SCChatArroyoConversationDataCoordinator _conversationDidUpdate:metricsTracker:] */

void FUN_1065a720c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__conversationDidUpdate_hasMoreMe_112557c70,param_3,
             *(undefined1 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),0,param_4);
  return;
}



/* Entry: 1065a7220; end: 1065a7307; -[SCChatArroyoConversationDataCoordinator _conversationDidUpdate:hasMoreMessages:didPaginate:metricsTracker:] */

void FUN_1065a7220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 0x70);
  uVar1 = param_3;
  func_0x00010bfe5d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_4 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x30);
  }
  else {
    lVar2 = lVar3;
    func_0x00010c089d60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = (ulong)(lVar2 != 0);
    _objc_release();
  }
  func_0x00010bde8b40(param_1,param_2,param_3,param_4,uVar4,4,param_5,param_6);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065a7308; end: 1065a74b7; -[SCChatArroyoConversationDataCoordinator _conversationDidUpdate:hasMoreMessages:conversationHistoryLoadStatus:conversationLoadStatus:didPaginate:metricsTracker:] */

void FUN_1065a7308(long param_1,undefined8 param_2,undefined *param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  puVar4 = *(undefined **)(param_1 + 0x18);
  puVar1 = param_3;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  _objc_retain(puVar1);
  if (puVar4 == puVar1) {
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar1);
LAB_1065a73cc:
    puVar1 = PTR_PTR_1126cba40;
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    puVar1 = param_3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar3);
    *(undefined1 *)(param_1 + 0x28) = param_4;
    *(undefined8 *)(param_1 + 0x30) = param_5;
    *(undefined8 *)(param_1 + 0x38) = param_6;
    if (param_7 != 0) {
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    }
    if (param_3 == (undefined *)0x0) goto LAB_1065a7490;
    func_0x00010c278920(param_8);
    puVar4 = PTR_PTR_1126cba20;
    _objc_alloc(PTR_PTR_1126cba20);
    puVar1 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004a80(puVar4);
    _objc_release(puVar1);
    func_0x00010bdcb7e0(param_1);
  }
  else if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar4;
    func_0x00010c071ae0();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar1);
    if ((int)puVar2 == 0) goto LAB_1065a7490;
    goto LAB_1065a73cc;
  }
  _objc_release(puVar4);
LAB_1065a7490:
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065a74b8; end: 1065a756f; -[SCChatArroyoConversationDataCoordinator activeConversationDataForConversationId:completion:] */

void FUN_1065a74b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1065a7570;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065a7570; end: 1065a767f;  */

void FUN_1065a7570(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
  func_0x00010bfe5d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar3);
  lVar8 = *(long *)(param_1 + 0x30);
  if ((uVar4 & 1) != 0) {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + 0x28);
    uVar2 = *(undefined1 *)(lVar7 + 0x28);
    uVar3 = *(undefined8 *)(lVar7 + 0x30);
    uVar1 = *(undefined8 *)(lVar7 + 0x38);
    uVar6 = *(undefined8 *)(lVar7 + 0x48);
    func_0x00010c0cb5a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar8 + 0x10))(lVar8,uVar9,uVar5,uVar2,uVar3,uVar1,uVar6);
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001065a767c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x10))(lVar8,0,0,0,4,4,0);
  return;
}



/* Entry: 1065a7680; end: 1065a7a23; -[SCChatArroyoConversationDataCoordinator didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:] */

void FUN_1065a7680(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126cb370;
  func_0x00010bf373a0(PTR_PTR_1126cb370,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1065a77c4;
  puStack_88 = &UNK_110868f80;
  lStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_6;
  puStack_58 = puVar1;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_a0);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065a7a24; end: 1065a7a2b;  */

void FUN_1065a7a24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf490f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_consistentId_1125afde0);
  return;
}



/* Entry: 1065a7a2c; end: 1065a7b0b;  */

undefined8 FUN_1065a7a2c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x48) == 0) {
    uVar4 = 1;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0cb9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x00010c2709c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf433a0();
    if (lVar3 == 1) {
      uVar4 = 1;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      lVar3 = param_2;
      func_0x00010bf490e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar4);
      _objc_release(lVar3);
    }
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1065a7b0c; end: 1065a7b0f; -[SCChatArroyoConversationDataCoordinator didCreateConversation:] */

void FUN_1065a7b0c(void)

{
  return;
}



/* Entry: 1065a7b10; end: 1065a7b13; -[SCChatArroyoConversationDataCoordinator didRemoveConversation:] */

void FUN_1065a7b10(void)

{
  return;
}



/* Entry: 1065a7b14; end: 1065a7b17; -[SCChatArroyoConversationDataCoordinator didSendStart:] */

void FUN_1065a7b14(void)

{
  return;
}



/* Entry: 1065a7b18; end: 1065a7b1b; -[SCChatArroyoConversationDataCoordinator didSendComplete:] */

void FUN_1065a7b18(void)

{
  return;
}



/* Entry: 1065a7b1c; end: 1065a7b1f; -[SCChatArroyoConversationDataCoordinator didConfirmConversationServerCreation:] */

void FUN_1065a7b1c(void)

{
  return;
}



/* Entry: 1065a7b20; end: 1065a7d57; -[SCChatArroyoConversationDataCoordinator didConversationReset:messages:] */

void FUN_1065a7b20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cb370;
  func_0x00010bf373a0(PTR_PTR_1126cb370,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1065a7c10;
  puStack_68 = &UNK_11084c4a0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  puStack_48 = puVar1;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065a7d58; end: 1065a7dd3; -[SCChatArroyoConversationDataCoordinator _announceDataCoordinatorUpdateWithDataRequest:] */

void FUN_1065a7d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010bf63720(uVar2,param_2,param_1,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065a7dd4; end: 1065a7e93; -[SCChatArroyoConversationDataCoordinator .cxx_destruct] */

void FUN_1065a7dd4(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065a7e94; end: 1065a7e9f; +[SCChatConversationDataCoordinator dataCoordinatorIdentifier] */

undefined ** FUN_1065a7e94(void)

{
  return &PTR____CFConstantStringClassReference_110e54c78;
}



/* Entry: 1065a7ea0; end: 1065a7ea7; -[SCChatConversationDataCoordinator addDataUpdateListener:] */

void FUN_1065a7ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1065a7ea8; end: 1065a7eaf; -[SCChatConversationDataCoordinator removeDataUpdateListener:] */

void FUN_1065a7ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1065a7eb0; end: 1065a7edf;  */

void FUN_1065a7eb0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065a7ee0; end: 1065a8167; -[SCChatConversationDataCoordinator handleDataRequest:] */

void FUN_1065a7ee0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126cbab0;
  _objc_opt_class(PTR_PTR_1126cbab0);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar8);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126cb390;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar4 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bfca0(uVar4);
  lVar9 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar9);
  lVar6 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar9);
      }
      func_0x00010bfd0a00(*(undefined8 *)(lVar10 * 8));
      lVar10 = lVar10 + 1;
    } while (lVar6 != lVar10);
    lVar6 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bebf530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s__startActiveConversationForIDRes_11258d6f0,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 1065a8168; end: 1065a8173;  */

void FUN_1065a8168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebf530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startActiveConversationForIDRes_11258d6f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1065a8174; end: 1065a82d3;  */

void FUN_1065a8174(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x100);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3280();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_2);
  return;
}



/* Entry: 1065a82d4; end: 1065a840f;  */

void FUN_1065a82d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(lVar4 + 0x60);
  *(undefined8 *)(lVar4 + 0x60) = uVar3;
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(lVar4 + 0x68);
  *(undefined8 *)(lVar4 + 0x68) = uVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(lVar4 + 0x70);
  *(undefined8 *)(lVar4 + 0x70) = uVar3;
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1065a8410;
  puStack_40 = &UNK_110842e18;
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1065a8420;
  puStack_68 = &UNK_110850398;
  uStack_38 = uStack_60;
  func_0x00010c0be1a0(*(undefined8 *)(param_1 + 0x40),param_2,&puStack_58,&puStack_80);
  func_0x00010bdcb7e0(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb6b8;
  func_0x00010bf501e0(PTR_PTR_1126cb6b8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1065a8410; end: 1065a842b;  */

void FUN_1065a8410(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x90) = 1;
  return;
}



/* Entry: 1065a842c; end: 1065a8677;  */

void FUN_1065a842c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1065a8678; end: 1065a8693;  */

void FUN_1065a8678(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x90) = 1;
  return;
}



/* Entry: 1065a8694; end: 1065a884f;  */

void FUN_1065a8694(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1065a8850; end: 1065a88e3; -[SCChatConversationDataCoordinator dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_1065a8850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1065a88e4;
  puStack_50 = &UNK_110844b80;
  uStack_38 = 0;
  uStack_48 = param_4;
  lStack_40 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1065a88e4; end: 1065a8b07;  */

/* WARNING: Possible PIC construction at 0x0001065a8ad8: Changing call to branch */

void FUN_1065a88e4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar6 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126cb388;
  _objc_opt_class(PTR_PTR_1126cb388);
  _objc_opt_isKindOfClass(uVar6,puVar1);
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcb7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__announceDataCoordinatorUpdateWi_112550798,
               *(undefined8 *)(param_1 + 0x20));
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126cbb90;
  _objc_opt_class(PTR_PTR_1126cbb90);
  _objc_opt_isKindOfClass(uVar6,puVar1);
  if ((uVar6 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126cba20;
    _objc_opt_class(PTR_PTR_1126cba20);
    _objc_opt_isKindOfClass(uVar6,puVar1);
    puVar1 = PTR_PTR_1126cba20;
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar8 = *(ulong *)(param_1 + 0x20);
    _objc_retain(uVar8);
    _objc_opt_class(puVar1);
    uVar2 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar1);
    uVar6 = uVar8;
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar8);
    iVar7 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
    uVar2 = uVar6;
    func_0x00010bf500c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bfe5d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    _objc_release(uVar8);
    _objc_release(uVar2);
    if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar6);
      return;
    }
    lVar3 = *(long *)(param_1 + 0x28);
    if ((*(byte *)(lVar3 + 0x90) & 1) == 0) {
      func_0x00010bec8600();
      lVar3 = *(long *)(param_1 + 0x28);
    }
    func_0x00010bec80e0(lVar3);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 200);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf500c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1625a0(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar4);
    func_0x00010bec8240(*(undefined8 *)(param_1 + 0x28));
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf500c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1625a0(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar4);
    func_0x00010bfd0a00(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50));
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be32c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s__handleUpdatesWithDataRequest__11256a4c0,uVar4)
  ;
  return;
}


