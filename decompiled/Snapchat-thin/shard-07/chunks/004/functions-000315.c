/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055bfa60; end: 1055bfad3; -[SCDefaultSnapchattersAdder addSnapchatter:addSource:placement:index:] */

void FUN_1055bfa60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010befca80(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055bfad4; end: 1055bfadf; -[SCDefaultSnapchattersAdder .cxx_destruct] */

void FUN_1055bfad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055bfae0; end: 1055bfb53; -[SCDefaultSnapchattersBlocker initWithSnapchattersDataMutator:] */

undefined1 * FUN_1055bfae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9290;
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



/* Entry: 1055bfb54; end: 1055bfc07; -[SCDefaultSnapchattersBlocker blockSnapchatterImmediately:withReason:] */

void FUN_1055bfb54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae5c0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1d620(puVar2,param_2,param_3,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd2960(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1055bfc08; end: 1055bfc0f; -[SCDefaultSnapchattersBlocker blockSnapchatter:withReason:uiContainer:] */

void FUN_1055bfc08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1d4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_blockSnapchatter_withReason_uiCo_1125a4ee0);
  return;
}



/* Entry: 1055bfc10; end: 1055bffb7; -[SCDefaultSnapchattersBlocker blockSnapchatter:withReason:uiContainer:completion:] */

void FUN_1055bfc10(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010901d778();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = param_3;
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_1055c0d38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar4 = auStack_98;
  _objc_initWeak(puVar4,param_1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x0001055c0d50();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_98;
  _objc_copyWeak(auStack_a8,puVar10);
  _objc_retain(param_3);
  uStack_a0 = param_4;
  _objc_retain(param_6);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar5 = PTR_PTR_1126aed70;
  func_0x0001055c0d68();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar3;
  puStack_88 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar7);
  func_0x00010c18b5e0(puVar6);
  uVar8 = param_6;
  _objc_retainBlock();
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  _objc_release(uVar11);
  func_0x00010bf0c980(param_5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  func_0x00010bf84b00(puVar10);
  puVar2 = param_3 + 0x30;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bf1d500();
  _objc_release(puVar2);
  lVar9 = *(long *)(param_3 + 0x28);
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055c0010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x10))(lVar9,1);
    return;
  }
  return;
}



/* Entry: 1055bffb8; end: 1055c0067;  */

void FUN_1055bffb8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf1d500();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055c0010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 1055c0068; end: 1055c009f; -[SCDefaultSnapchattersBlocker dialogDidDismiss:] */

void FUN_1055c0068(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1055c00a0; end: 1055c00cf; -[SCDefaultSnapchattersBlocker .cxx_destruct] */

void FUN_1055c00a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c00d0; end: 1055c0143; -[SCDefaultSnapchattersDeleter initWithSnapchattersDataMutator:] */

undefined1 * FUN_1055c00d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9298;
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



/* Entry: 1055c0144; end: 1055c01db; -[SCDefaultSnapchattersDeleter deleteSnapchatterImmediately:withSource:] */

void FUN_1055c0144(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010bf6ce00(PTR_PTR_1126ae5c0,param_2,param_3,param_4,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd2960(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1055c01dc; end: 1055c0427; -[SCDefaultSnapchattersDeleter deleteSnapchatter:withSource:uiContainer:] */

void FUN_1055c01dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar6 = param_5;
  _objc_retain(param_5);
  func_0x0001055c0db0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126aed70;
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar6 = uVar8;
  _objc_retain(uVar8);
  func_0x0001055c0dc8();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126aed70;
  func_0x0001055c0d68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar5);
  func_0x00010bf0c980(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(uVar8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
  uVar6 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010bf6ce00(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960(uVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1055c0428; end: 1055c04ab;  */

void FUN_1055c0428(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae5c0;
  func_0x00010bf6ce00(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055c04ac; end: 1055c04bb;  */

void FUN_1055c04ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1055c04bc; end: 1055c04c7; -[SCDefaultSnapchattersDeleter .cxx_destruct] */

void FUN_1055c04bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c04c8; end: 1055c053b; -[SCDefaultSnapchattersUnblocker initWithSnapchattersDataMutator:] */

undefined1 * FUN_1055c04c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e92a0;
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



/* Entry: 1055c053c; end: 1055c0737; -[SCDefaultSnapchattersUnblocker unblockSnapchatter:uiContainer:] */

void FUN_1055c053c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain();
  func_0x0001055c0d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed70;
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar6 = uVar8;
  _objc_retain(uVar8);
  func_0x0001055c0d98();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126aed70;
  func_0x0001055c0d68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar5);
  func_0x00010bf0c980(param_4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(uVar8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae5c0;
  func_0x00010c27f540(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960(uVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1055c0738; end: 1055c07ab;  */

void FUN_1055c0738(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae5c0;
  func_0x00010c27f540(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2960(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055c07ac; end: 1055c07bb;  */

void FUN_1055c07ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1055c07bc; end: 1055c07c7; -[SCDefaultSnapchattersUnblocker .cxx_destruct] */

void FUN_1055c07bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c07c8; end: 1055c0a0f; -[SCSnapchattersActionHanderServiceProvider provide] */

void FUN_1055c07c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1055c0a10;
  puStack_88 = &UNK_11089bca0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_c8 = puVar4;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1055c0a50;
  puStack_b0 = &UNK_11089bcd0;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1055c0a90;
  puStack_d8 = &UNK_11089bd00;
  _objc_copyWeak(auStack_d0,auStack_78);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_f8,auStack_78);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bb700;
  _objc_alloc(PTR_PTR_1126bb700);
  func_0x00010c049660();
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055c0a10; end: 1055c0b0f;  */

void FUN_1055c0a10(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055c0b10; end: 1055c0b8b; -[SCSnapchattersActionHanderServiceProvider _createBlocker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c0b10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bb708;
  _objc_alloc(PTR_PTR_1126bb708);
  param_1 = param_1 + _DAT_112726268;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049c20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c0b8c; end: 1055c0c07; -[SCSnapchattersActionHanderServiceProvider _createUnblocker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c0b8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bb710;
  _objc_alloc(PTR_PTR_1126bb710);
  param_1 = param_1 + _DAT_112726268;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049c20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c0c08; end: 1055c0c83; -[SCSnapchattersActionHanderServiceProvider _createDeleter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c0c08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bb718;
  _objc_alloc(PTR_PTR_1126bb718);
  param_1 = param_1 + _DAT_112726268;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049c20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c0c84; end: 1055c0cff; -[SCSnapchattersActionHanderServiceProvider _createAdder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c0c84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bb720;
  _objc_alloc(PTR_PTR_1126bb720);
  param_1 = param_1 + _DAT_112726268;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049c20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c0d00; end: 1055c0d37; -[SCSnapchattersActionHanderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c0d00(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726268);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272626c);
  return;
}



/* Entry: 1055c0d38; end: 1055c0ddf;  */

void FUN_1055c0d38(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ded978;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ded978,
                      &PTR____CFConstantStringClassReference_110ded998,0);
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



/* Entry: 1055c0de0; end: 1055c0ef3; -[SCAddFriendsInviteServiceProvider provide] */

void FUN_1055c0de0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11089bd80);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bb730;
  _objc_alloc(PTR_PTR_1126bb730);
  func_0x00010c01ea60();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055c0ef4; end: 1055c0f0f;  */

void FUN_1055c0ef4(void)

{
  _objc_opt_new(PTR_PTR_1126bb728);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055c0f10; end: 1055c0f7f;  */

void FUN_1055c0f10(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bdeed60(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1055c0f80; end: 1055c1017; -[SCAddFriendsInviteServiceProvider _createInviteFriendDeepLinkCoordinatorWithInviteFriendStateTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c0f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bb738;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_112726270;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c120(puVar1,param_2,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c1018; end: 1055c104f; -[SCAddFriendsInviteServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c1018(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726270);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726274);
  return;
}



/* Entry: 1055c1050; end: 1055c10f3; -[SCInviteFriendDeepLinkDefaultCoordinator initWithStateTracker:offPlatformLinkGenerationService:] */

undefined1 *
FUN_1055c1050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e92a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055c10f4; end: 1055c111b; -[SCInviteFriendDeepLinkDefaultCoordinator inviteFriendStateTracker] */

void FUN_1055c10f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055c111c; end: 1055c1203; -[SCInviteFriendDeepLinkDefaultCoordinator fetchFriendDeeplinkForFriendWithDisplayName:userName:phoneNumber:] */

void FUN_1055c111c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bf94740(*(undefined8 *)(param_1 + 8),param_2,param_5,0,0);
  }
  else {
    func_0x00010c24e8a0();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfbf720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = uVar3;
    func_0x00010beec820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94740(uVar4,param_2,param_5,uVar2,1);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055c1204; end: 1055c123f; -[SCInviteFriendDeepLinkDefaultCoordinator .cxx_destruct] */

void FUN_1055c1204(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c1240; end: 1055c14eb; -[SCInviteFriendStateListenerAnnouncer addListener:] */

undefined8 FUN_1055c1240(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_11089bde0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_1055c14ec(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_1055c162c(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_1055c13f4:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_1055c1414;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_1055c14ec(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_1055c14ec(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_1055c162c(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_1055c13f4;
    }
  }
  uVar9 = 1;
LAB_1055c1414:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 1055c14ec; end: 1055c162b;  */

void FUN_1055c14ec(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_1055c1c38();
LAB_1055c1628:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_1055c1628;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 1055c162c; end: 1055c1673;  */

void FUN_1055c162c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 1055c1674; end: 1055c18a3; -[SCInviteFriendStateListenerAnnouncer removeListener:] */

void FUN_1055c1674(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_1055c1828;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_1055c16dc;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_1055c162c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_1055c1828;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_1055c16dc:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_11089bde0;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_1055c14ec(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_1055c162c(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_1055c1828;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_1055c1828:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c18a4; end: 1055c1987; -[SCInviteFriendStateListenerAnnouncer didStartFetchingFriendDeeplinkForPhoneNumber:] */

void FUN_1055c18a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  FUN_1055c1988(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7bba0();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c1988; end: 1055c19e7;  */

void FUN_1055c1988(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 1055c19e8; end: 1055c1afb; -[SCInviteFriendStateListenerAnnouncer didEndFetchingFriendDeeplinkForPhoneNumber:deeplink:success:] */

void FUN_1055c19e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_1055c1988(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf75a00();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c1afc; end: 1055c1bef; -[SCInviteFriendStateListenerAnnouncer didEndInvitingFriendWithPhoneNumber:success:] */

void FUN_1055c1afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_1055c1988(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf75a40();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c1bf0; end: 1055c1c17; -[SCInviteFriendStateListenerAnnouncer .cxx_destruct] */

void FUN_1055c1bf0(long param_1)

{
  FUN_1055c1ce8(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 1055c1c18; end: 1055c1c37; -[SCInviteFriendStateListenerAnnouncer .cxx_construct] */

void FUN_1055c1c18(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1055c1c38; end: 1055c1c4b;  */

void FUN_1055c1c38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_11089bde0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1055c1c4c; end: 1055c1c5b;  */

void FUN_1055c1c4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11089bde0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1055c1c5c; end: 1055c1c7b;  */

void FUN_1055c1c5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11089bde0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1055c1c7c; end: 1055c1ce3;  */

void FUN_1055c1c7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1055c1ce4; end: 1055c1ce7;  */

void FUN_1055c1ce4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1055c1ce8; end: 1055c1d3f;  */

long FUN_1055c1ce8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1055c1d40; end: 1055c1eab; -[SCInviteFriendStateTracker init] */

undefined1 * FUN_1055c1d40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e92b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126bb740;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1055c1eac; end: 1055c1ed3; -[SCInviteFriendStateTracker invitedNumbersObservable] */

void FUN_1055c1eac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055c1ed4; end: 1055c1efb; -[SCInviteFriendStateTracker invitingNumbersObservable] */

void FUN_1055c1ed4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055c1efc; end: 1055c1f03; -[SCInviteFriendStateTracker invitedNumbers] */

void FUN_1055c1efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_value_112683588);
  return;
}



/* Entry: 1055c1f04; end: 1055c1f0b; -[SCInviteFriendStateTracker invitingNumbers] */

void FUN_1055c1f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_value_112683588);
  return;
}



/* Entry: 1055c1f0c; end: 1055c204f; -[SCInviteFriendStateTracker startDeeplinkRequestForPhoneNumber:] */

void FUN_1055c1f0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bebfec0(param_1);
    _objc_initWeak(auStack_38,param_1);
    puVar2 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1055c2050;
    puStack_50 = &UNK_110896d48;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010007380c(puVar3,&puStack_68);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1055c2050; end: 1055c2097;  */

void FUN_1055c2050(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbd80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055c2098; end: 1055c2223; -[SCInviteFriendStateTracker endDeeplinkRequestForPhoneNumber:deeplink:success:] */

void FUN_1055c2098(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010be099e0(param_1);
    puVar2 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1055c2224;
    puStack_70 = &UNK_11089be20;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    lStack_68 = param_3;
    _objc_retain(param_4);
    uStack_60 = param_4;
    uStack_50 = param_5;
    func_0x00010007380c(puVar3,&puStack_88);
    _objc_release(uStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055c2224; end: 1055c226f;  */

void FUN_1055c2224(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055c2270; end: 1055c23c3; -[SCInviteFriendStateTracker endFriendInviteForPhoneNumber:success:] */

void FUN_1055c2270(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010be09ac0(param_1);
    puVar2 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1055c23c4;
    puStack_58 = &UNK_11089be50;
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    uStack_40 = param_4;
    func_0x00010007380c(puVar3,&puStack_70);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1055c23c4; end: 1055c240f;  */

void FUN_1055c23c4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055c2410; end: 1055c2417; -[SCInviteFriendStateTracker addListener:] */

void FUN_1055c2410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1055c2418; end: 1055c241f; -[SCInviteFriendStateTracker removeListener:] */

void FUN_1055c2418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1055c2420; end: 1055c26e3; -[SCInviteFriendStateTracker _updateInviteSubjects] */

void FUN_1055c2420(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar9 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        lVar4 = *(long *)(param_1 + 0x50);
        func_0x00010c0e00e0(lVar4,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c067fc0();
        _objc_release(lVar4);
        if (lVar5 == 1) {
          func_0x00010bf51e00(uVar10);
          func_0x00010befa120(puVar1,param_2,uVar10);
LAB_1055c2574:
          _objc_release(uVar10);
        }
        else {
          lVar4 = *(long *)(param_1 + 0x50);
          func_0x00010c0e00e0(lVar4,param_2,uVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c067fc0();
          _objc_release(lVar4);
          if (lVar5 == 0) {
            func_0x00010bf51e00(uVar10);
            func_0x00010befa120(puVar2,param_2,uVar10);
            goto LAB_1055c2574;
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c0d9840(uVar10,param_2,puVar6);
  _objc_release(puVar6);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  puVar6 = puVar2;
  func_0x00010bf51e00();
  puVar8 = puVar6;
  func_0x00010c0d9840(uVar10,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar8);
  __ZNSt3__15mutex4lockEv(puVar7 + 8);
  func_0x00010c1d0640(*(undefined8 *)(puVar7 + 0x50),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0cb8,puVar8);
  func_0x00010bed9e40(puVar7);
  __ZNSt3__15mutex6unlockEv(puVar7 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 1055c26e4; end: 1055c2767; -[SCInviteFriendStateTracker _startFetchingDeeplinkForPhoneNumer:] */

void FUN_1055c26e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0cb8,param_3);
  func_0x00010bed9e40(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c2768; end: 1055c27eb; -[SCInviteFriendStateTracker _endFetchingDeeplinkForPhoneNumber:success:] */

void FUN_1055c2768(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  if ((param_4 & 1) == 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
    func_0x00010bed9e40(param_1);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c27ec; end: 1055c2883; -[SCInviteFriendStateTracker _endInvitingForPhoneNumber:success:] */

void FUN_1055c27ec(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  if (param_4 == 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
  }
  else {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0cd0,param_3);
  }
  func_0x00010bed9e40(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c2884; end: 1055c288b; -[SCInviteFriendStateTracker _announceFriendDeeplinkFetchingStartForPhoneNumber:] */

void FUN_1055c2884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_didStartFetchingFriendDeeplinkFo_1125bc890);
  return;
}



/* Entry: 1055c288c; end: 1055c2893; -[SCInviteFriendStateTracker _announceFriendDeeplinkFetchingEndForPhoneNumber:deeplink:success:] */

void FUN_1055c288c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf75a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_didEndFetchingFriendDeeplinkForP_1125bb028);
  return;
}



/* Entry: 1055c2894; end: 1055c289b; -[SCInviteFriendStateTracker _announceFriendInviteEndForPhoneNumber:success:] */

void FUN_1055c2894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf75a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_didEndInvitingFriendWithPhoneNum_1125bb038);
  return;
}



/* Entry: 1055c289c; end: 1055c28eb; -[SCInviteFriendStateTracker .cxx_destruct] */

void FUN_1055c289c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 1055c28ec; end: 1055c290b; -[SCInviteFriendStateTracker .cxx_construct] */

void FUN_1055c28ec(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1055c290c; end: 1055c2993;  */

void FUN_1055c290c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bb748;
  _objc_alloc(PTR_PTR_1126bb748);
  func_0x00010bffe1e0();
  puVar2 = PTR_PTR_1126bb750;
  _objc_alloc(PTR_PTR_1126bb750);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000fe0(puVar2,param_2,puVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055c2994; end: 1055c29b3; -[SCLensMetadataMapperServiceProvider userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c2994(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127262a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055c29b4; end: 1055c29c7; -[SCLensMetadataMapperServiceProvider setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c29b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127262a0,param_3);
  return;
}



/* Entry: 1055c29c8; end: 1055c2a0b; -[SCLensMetadataMapperServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c29c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127262a8);
  _objc_destroyWeak(param_1 + _DAT_1127262a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127262a0);
  return;
}



/* Entry: 1055c2a0c; end: 1055c2aaf; -[SCLPLensSnapchatMapper initWithConfig:sponsoredLensExtensionMapper:] */

undefined1 *
FUN_1055c2a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e92b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055c2ab0; end: 1055c382f; -[SCLPLensSnapchatMapper lensMetadataFromLensSnapchat:lensParams:] */

void FUN_1055c2ab0(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puStack_138;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 auStack_70 [2];
  
  _objc_retain(param_3);
  puVar26 = (undefined *)0x0;
  if ((param_3 != (undefined *)0x0) && (param_4 != 0)) {
    _objc_retain(param_4);
    puVar2 = param_3;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar3 = puVar2;
    func_0x00010bfe5ea0();
    func_0x00010c0df7c0(puVar26,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar26;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    _objc_retain(puVar3);
    puVar26 = param_3;
    func_0x00010bfd6260();
    puVar4 = puVar3;
    if ((int)puVar26 != 0) {
      puVar26 = param_3;
      func_0x00010bf66200();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar26;
      func_0x00010bf66000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar26);
    }
    puVar26 = param_3;
    func_0x00010bfd7c40();
    puStack_90 = PTR_PTR_1126bb760;
    if ((int)puVar26 == 0) {
      puStack_98 = (undefined *)0x0;
      puStack_90 = (undefined *)0x0;
    }
    else {
      puVar26 = param_3;
      func_0x00010bfe36a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe3780(puStack_90,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
      puStack_98 = PTR_PTR_1126bb760;
      puVar26 = param_3;
      func_0x00010bfe36a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe3800(puStack_98,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = param_3;
    func_0x00010bfdc8a0();
    if ((int)puVar26 == 0) {
      puStack_a0 = (undefined *)0x0;
    }
    else {
      puVar26 = param_3;
      func_0x00010c24a280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24a140();
      _objc_release(puVar26);
      puVar26 = PTR_PTR_1126bb768;
      _objc_alloc();
      func_0x00010c000dc0();
      puVar28 = param_3;
      func_0x00010c24a280(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = puVar26;
      func_0x00010c24a640(puVar26,param_2,puVar28);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar28);
      _objc_release(puVar26);
    }
    puVar26 = puVar2;
    func_0x00010bf6d760();
    puVar28 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if (puVar26 == (undefined *)0x0) {
      puVar28 = (undefined *)0x0;
    }
    else {
      puVar26 = puVar2;
      func_0x00010bf6d760(puVar2);
      func_0x00010bf655e0((double)(long)puVar26 / 1000.0);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar26 = param_3;
    func_0x00010bfdd8c0();
    puVar27 = PTR_PTR_1126bb770;
    if ((int)puVar26 == 0) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar26 = param_3;
      func_0x00010c278f20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c095280(puVar27,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = puVar2;
    func_0x00010bf0bb20();
    if (puVar26 == (undefined *)0x0) {
      puStack_a8 = (undefined *)0x0;
    }
    else {
      puVar26 = PTR_PTR_1126bb778;
      _objc_opt_new();
      puVar5 = puVar2;
      func_0x00010bf0bb00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar26;
      func_0x00010c090000(puVar26,param_2,puVar5,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar26);
    }
    puVar26 = puVar2;
    func_0x00010bfd42a0();
    puStack_b0 = PTR_PTR_1126bb780;
    if ((int)puVar26 == 0) {
      puStack_b8 = (undefined *)0x0;
      puStack_b0 = (undefined *)0x0;
    }
    else {
      puVar26 = puVar2;
      func_0x00010bf07500(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf292e0(puStack_b0,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
      puStack_b8 = PTR_PTR_1126bb780;
      puVar26 = puVar2;
      func_0x00010bf07500(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf07560(puStack_b8,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = param_3;
    func_0x00010bfd4380();
    puStack_c0 = PTR_PTR_1126bb788;
    if ((int)puVar26 == 0) {
      puStack_c0 = (undefined *)0x0;
    }
    else {
      puVar26 = param_3;
      func_0x00010bf0cb60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c281540(puStack_c0,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = puVar2;
    func_0x00010bf6e7e0();
    puStack_c8 = PTR_PTR_1126bb790;
    if (puVar26 == (undefined *)0x0) {
      puStack_c8 = (undefined *)0x0;
    }
    else {
      puVar26 = puVar2;
      func_0x00010bf6e7c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c092780(puStack_c8,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = param_3;
    func_0x00010bfd5280();
    puVar5 = PTR_PTR_1126bb798;
    if ((int)puVar26 == 0) {
      puVar5 = PTR_PTR_1126bb750;
      func_0x00010bdf92e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar26 = param_3;
      func_0x00010bf329c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf329e0(puVar5,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = param_3;
    func_0x00010bfd5f00();
    puStack_d0 = PTR_PTR_1126bb7a0;
    if ((int)puVar26 == 0) {
      puStack_d0 = (undefined *)0x0;
    }
    else {
      puVar26 = param_3;
      func_0x00010bf5b080(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43060(puStack_d0,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
      puVar26 = param_3;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf42f20();
      _objc_release(puVar26);
    }
    puVar26 = param_3;
    func_0x00010bfd59c0();
    puStack_d8 = PTR_PTR_1126bb7a8;
    if ((int)puVar26 == 0) {
      puStack_d8 = (undefined *)0x0;
    }
    else {
      puVar26 = param_3;
      func_0x00010bf48840(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf48860(puStack_d8,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = param_3;
    func_0x00010bfdb0a0();
    puStack_e0 = PTR_PTR_1126bb7b0;
    if ((int)puVar26 == 0) {
      puStack_e0 = (undefined *)0x0;
    }
    else {
      puVar26 = param_3;
      func_0x00010c129ce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c129d00(puStack_e0,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = param_3;
    func_0x00010bfd8540();
    puStack_e8 = PTR_PTR_1126bb7b8;
    if ((int)puVar26 == 0) {
      puStack_e8 = (undefined *)0x0;
    }
    else {
      puVar26 = param_3;
      func_0x00010c0922c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf62d60(puStack_e8,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = param_3;
    func_0x00010c0d3ac0();
    puStack_f0 = PTR_PTR_1126bb7c0;
    if (puVar26 == (undefined *)0x0) {
      puStack_f0 = (undefined *)0x0;
    }
    else {
      puVar26 = param_3;
      func_0x00010c0d3aa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d3b20(puStack_f0,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = puVar2;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar26;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      puStack_138 = (undefined *)0x0;
    }
    else {
      puStack_138 = puVar2;
      func_0x00010bfe5b40();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar26);
    puVar26 = puVar2;
    func_0x00010bf1b100();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar26;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      puStack_f8 = (undefined *)0x0;
    }
    else {
      puStack_f8 = puVar2;
      func_0x00010bf1b100();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar26);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar7 = param_3;
    func_0x00010bef4380();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar7;
    func_0x00010c08fa60();
    if (puVar26 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0x10);
      auStack_70[0] = 0;
      func_0x00010c093a20(lVar8,param_2,puVar7,auStack_70);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = auStack_70[0];
      _objc_retain(auStack_70[0]);
      if (lVar8 != 0) {
        lVar9 = *(long *)(param_1 + 0x10);
        func_0x00010bf9dd40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 != 0) {
          func_0x00010c1d0640(puVar6,param_2,lVar8,lVar9);
        }
        _objc_release(lVar9);
      }
      _objc_release(lVar8);
      _objc_release(uVar1);
    }
    puVar26 = param_3;
    func_0x00010bfda8c0();
    puStack_100 = PTR_PTR_1126bb7c8;
    if ((int)puVar26 == 0) {
      puStack_100 = (undefined *)0x0;
    }
    else {
      puVar26 = param_3;
      func_0x00010c110360(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c096040(puStack_100,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = puVar2;
    func_0x00010c112da0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar26;
    func_0x00010c08fa60();
    if (puVar10 == (undefined *)0x0) {
      puStack_108 = (undefined *)0x0;
    }
    else {
      puStack_108 = puVar2;
      func_0x00010c112da0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar26);
    puVar26 = param_3;
    func_0x00010bfd8680();
    puStack_110 = PTR_PTR_1126bb7d0;
    if ((int)puVar26 == 0) {
      puStack_110 = (undefined *)0x0;
    }
    else {
      puVar26 = param_3;
      func_0x00010c095e40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c095e60(puStack_110,param_2,puVar26);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
    }
    puVar26 = PTR_PTR_1126ae6a8;
    _objc_alloc();
    puVar11 = puVar2;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010c13b560();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010be4bb40(param_1,param_2,puVar12,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_4;
    func_0x00010bf69520();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_4;
    func_0x00010c097820();
    puVar14 = param_3;
    func_0x00010c24a280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5ce60(param_1,param_2,puVar14);
    func_0x00010beec6c0();
    puVar15 = puVar27;
    func_0x00010c277f60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010bf04b60(puVar2);
    func_0x00010bdcc900(param_1,param_2,puVar10);
    func_0x00010c25dee0();
    puVar10 = puVar2;
    func_0x00010bef01c0(puVar2);
    func_0x00010bdd93a0(param_1,param_2,puVar10);
    puVar16 = puVar27;
    func_0x00010bf92c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07bb00();
    func_0x00010c113c80();
    func_0x00010c076320();
    lVar17 = param_4;
    func_0x00010bf38a80();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_4;
    func_0x00010c0d53e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar19 = param_3;
    func_0x00010c0915a0(param_3);
    func_0x00010c0df7c0(puVar10,param_2,puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar10;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar5;
    func_0x00010bf32760();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar5;
    func_0x00010bfcd120();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar27;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = param_3;
    func_0x00010c22cfc0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = param_3;
    func_0x00010bef4380();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar27;
    func_0x00010c26a320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c150de0();
    func_0x00010c0247c0(puVar26,param_2,puVar3,puVar11,puVar4,puStack_90,puStack_98,puStack_138,
                        puStack_f8,lVar8,lVar9,lVar13,0,0,0);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar10);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puStack_110);
    _objc_release(puStack_108);
    _objc_release(puStack_100);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puStack_f8);
    _objc_release(puStack_138);
    _objc_release(puStack_f0);
    _objc_release(puStack_e8);
    _objc_release(puStack_e0);
    _objc_release(puStack_d8);
    _objc_release(puStack_d0);
    _objc_release(puVar5);
    _objc_release(puStack_c8);
    _objc_release(puStack_c0);
    _objc_release(puStack_b8);
    _objc_release(puStack_b0);
    _objc_release(puStack_a8);
    _objc_release(puVar27);
    _objc_release(puVar28);
    _objc_release(puStack_a0);
    _objc_release(puStack_98);
    _objc_release(puStack_90);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 1055c3830; end: 1055c383b; -[SCLPLensSnapchatMapper lensMetadataTrackingInfoFromTrackingInfo:] */

void FUN_1055c3830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c095290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bb770,PTR_s_lensMetadataTrackingInfoFromTrac_112602eb0);
  return;
}



/* Entry: 1055c383c; end: 1055c3847; -[SCLPLensSnapchatMapper carouselPositionFromLPCarouselPosition:] */

void FUN_1055c383c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf329f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bb798,PTR_s_carouselPositionFromLPCarouselPo_1125aa420);
  return;
}



/* Entry: 1055c3848; end: 1055c389f; -[SCLPLensSnapchatMapper _lensResourcesContainerFromLensResources:lensId:] */

void FUN_1055c3848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_11089bed0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b62e0;
  _objc_alloc(PTR_PTR_1126b62e0);
  func_0x00010c03faa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c38a0; end: 1055c39e3;  */

void FUN_1055c38a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfb5800();
  if ((int)uVar1 == 1) {
    puVar2 = PTR_PTR_1126b62d8;
    _objc_opt_new(PTR_PTR_1126b62d8);
    uVar1 = param_2;
    func_0x00010bfad160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bbd60(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c2bbd20(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bf38a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf64c80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c271dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa6a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010c072920(param_2);
    func_0x00010c2b0760(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055c39e4; end: 1055c39f3; +[SCLPLensSnapchatMapper _hasLNSNotFallbackResource:] */

void FUN_1055c39e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_any__11259ebf0,&PTR___NSConcreteGlobalBlock_11089bf10);
  return;
}



/* Entry: 1055c39f4; end: 1055c3a0f;  */

uint FUN_1055c39f4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c072920(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 1055c3a10; end: 1055c3a27; -[SCLPLensSnapchatMapper _apiLevelFromLPAPILevel:] */

undefined8 FUN_1055c3a10(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  if (param_3 == 1) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (param_3 != 3) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1055c3a28; end: 1055c3a33; -[SCLPLensSnapchatMapper _cameraPositionFromActivationCamera:] */

bool FUN_1055c3a28(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 2;
}



/* Entry: 1055c3a34; end: 1055c3a83; -[SCLPLensSnapchatMapper _mapSponsoredType:] */

int FUN_1055c3a34(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c24ab20();
    iVar2 = 0;
    if ((uint)lVar1 < 0xb) {
      iVar2 = (uint)lVar1 + 1;
    }
  }
  _objc_release(param_3);
  return iVar2;
}



/* Entry: 1055c3a84; end: 1055c3ab7; +[SCLPLensSnapchatMapper _defaultCarouselPositionInfo] */

void FUN_1055c3a84(void)

{
  _objc_alloc(PTR_PTR_1126bb7d8);
  func_0x00010bfefca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055c3ab8; end: 1055c3ae7; -[SCLPLensSnapchatMapper .cxx_destruct] */

void FUN_1055c3ab8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c3ae8; end: 1055c3b5b; -[SCLPLensSnapchatMapperConfigProvider initWithCircumstanceEngine:] */

undefined1 * FUN_1055c3ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e92c0;
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



/* Entry: 1055c3b5c; end: 1055c3b87; -[SCLPLensSnapchatMapperConfigProvider timeBeforeFadeout] */

long FUN_1055c3b5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110deda18,0xdac,0);
  return (long)(int)uVar1;
}



/* Entry: 1055c3b88; end: 1055c3b93; -[SCLPLensSnapchatMapperConfigProvider .cxx_destruct] */

void FUN_1055c3b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c3b94; end: 1055c3c9b; +[SCLPApplicableContextMapper cameraContextsFromLPApplicableContext:] */

void FUN_1055c3b94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf29220();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf29200(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    lVar2 = param_3;
    func_0x00010bf29220(param_3);
    func_0x00010c225ec0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1055c3c9c;
    puStack_40 = &UNK_110842ff8;
    _objc_retain();
    puStack_38 = puVar3;
    func_0x00010bf980c0(lVar1,param_2,&puStack_58);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar3;
      func_0x00010bf51e00(puVar3);
    }
    _objc_release(puStack_38);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055c3c9c; end: 1055c3ccf;  */

void FUN_1055c3c9c(long param_1,int param_2)

{
  undefined **ppuVar1;
  
  if (param_2 == 1) {
    ppuVar1 = &PTR_PTR_1133c9290;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    ppuVar1 = &PTR_PTR_1133c9298;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,*ppuVar1);
  return;
}



/* Entry: 1055c3cd0; end: 1055c3dd7; +[SCLPApplicableContextMapper applicableContextsFromLPApplicableContext:] */

void FUN_1055c3cd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fe40();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c08fe20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    lVar2 = param_3;
    func_0x00010c08fe40(param_3);
    func_0x00010c225ec0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1055c3dd8;
    puStack_40 = &UNK_110842ff8;
    _objc_retain();
    puStack_38 = puVar3;
    func_0x00010bf980c0(lVar1,param_2,&puStack_58);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar3;
      func_0x00010bf51e00(puVar3);
    }
    _objc_release(puStack_38);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055c3dd8; end: 1055c3e37;  */

void FUN_1055c3dd8(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 - 1U < 0x16) {
    lVar1 = *(long *)(&PTR_PTR_11089bf30)[param_2 - 1U];
    _objc_retain(lVar1);
    if (lVar1 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1055c3e38; end: 1055c4103; +[SCLPAttachmentMapper unlockablesAttachmentFromLPAttachment:] */

void FUN_1055c3e38(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bf0d0a0(), (int)lVar2 == 0)) {
    puVar3 = (undefined *)0x0;
    goto LAB_1055c40d8;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110f77bd8;
  _objc_retain(&PTR____CFConstantStringClassReference_110f77bd8);
  lVar2 = param_3;
  func_0x00010bf0d0a0();
  uVar5 = 0;
  iVar1 = (int)lVar2;
  lVar2 = param_3;
  if (iVar1 < 6) {
    if (iVar1 == 4) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e45438;
      _objc_retain(&PTR____CFConstantStringClassReference_110e45438);
      _objc_release(&PTR____CFConstantStringClassReference_110f77bd8);
      func_0x00010c0b4b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bee8a00(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0;
LAB_1055c3fcc:
      uVar7 = 0;
LAB_1055c4024:
      uVar8 = 0;
      goto LAB_1055c4028;
    }
    if (iVar1 == 5) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e45458;
      _objc_retain(&PTR____CFConstantStringClassReference_110e45458);
      _objc_release(&PTR____CFConstantStringClassReference_110f77bd8);
      func_0x00010c2a3bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010beeab20(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0;
      goto LAB_1055c3fcc;
    }
LAB_1055c3f70:
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    if (iVar1 == 6) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e45478;
      _objc_retain(&PTR____CFConstantStringClassReference_110e45478);
      _objc_release(&PTR____CFConstantStringClassReference_110f77bd8);
      func_0x00010bf054e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_1;
      func_0x00010bdccac0(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0;
      uVar6 = 0;
      goto LAB_1055c4024;
    }
    if (iVar1 != 7) goto LAB_1055c3f70;
    ppuVar4 = &PTR____CFConstantStringClassReference_110e35d58;
    _objc_retain(&PTR____CFConstantStringClassReference_110e35d58);
    _objc_release(&PTR____CFConstantStringClassReference_110f77bd8);
    func_0x00010bf67c00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010bdf8d60(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
LAB_1055c4028:
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126bb7e0;
  _objc_alloc(PTR_PTR_1126bb7e0);
  lVar2 = param_3;
  func_0x00010bf5d560(param_3);
  func_0x00010bebdd00(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c09e4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4cc0(puVar3,param_2,ppuVar4,uVar5,uVar6,param_1,uVar7,uVar8,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(ppuVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
LAB_1055c40d8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


