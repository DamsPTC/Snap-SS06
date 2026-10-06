/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059201c4; end: 105920247; -[SCFideliusNotificationProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059201c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272c3f0);
  _objc_destroyWeak(param_1 + _DAT_11272c3e0);
  _objc_destroyWeak(param_1 + _DAT_11272c3dc);
  _objc_destroyWeak(param_1 + _DAT_11272c3ec);
  _objc_destroyWeak(param_1 + _DAT_11272c3e8);
  _objc_destroyWeak(param_1 + _DAT_11272c3f8);
  _objc_destroyWeak(param_1 + _DAT_11272c3e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272c3f4,0);
  return;
}



/* Entry: 105920248; end: 105920343;  */

void FUN_105920248(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126c03a0;
  if (param_1 != 0) {
    func_0x00010c298be0(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ee500(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bec8be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be0e360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7440(puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105920344; end: 10592034b; -[SCFideliusBatchAcknowledgeRecryptExecutor addToQueue:] */

void FUN_105920344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befafb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addRequest__11259c590);
  return;
}



/* Entry: 10592034c; end: 10592039b; -[SCFideliusBatchAcknowledgeRecryptExecutor _successCallback] */

void FUN_10592034c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10592039c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10592039c; end: 1059203a7;  */

void FUN_10592039c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_endBackgroundTask_1125c2a38);
  return;
}



/* Entry: 1059203a8; end: 1059203f7; -[SCFideliusBatchAcknowledgeRecryptExecutor _failureCallback] */

void FUN_1059203a8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1059203f8;
  puStack_20 = &UNK_110849810;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059203f8; end: 105920403;  */

void FUN_1059203f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_endBackgroundTask_1125c2a38);
  return;
}



/* Entry: 105920404; end: 105920457; -[SCFideliusBatchAcknowledgeRecryptExecutor .cxx_destruct] */

void FUN_105920404(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105920458; end: 105920687;  */

void FUN_105920458(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bfc4540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar4 = lVar3;
    func_0x00010bfdebe0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        uVar8 = *(undefined8 *)(lVar10 * 8);
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        uVar5 = uVar8;
        func_0x00010c0cb5a0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        func_0x00010c1e8ce0(uVar8);
        _objc_release(uVar9);
        _objc_release(uVar5);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar1 = PTR_PTR_1126c03a0;
    lVar2 = param_1;
    func_0x00010bec8be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010be0e360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7480(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar2);
    func_0x00010be6b240(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x28),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105920688; end: 10592068f; -[SCFideliusBatchInitiateRecryptExecutor _onRequestMade] */

void FUN_105920688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105920690; end: 10592081b; -[SCFideliusBatchInitiateRecryptExecutor _isDuplicate:] */

bool FUN_105920690(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x28);
  puVar1 = param_3;
  func_0x00010c0cb5a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar4 == 0) {
    puVar6 = param_3;
    func_0x00010c123360(param_3);
    func_0x00010c0df6e0(puVar1,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar6 = param_3;
    func_0x00010c0cb5a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,puVar1,puVar6);
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x28);
    puVar2 = param_3;
    func_0x00010c0cb5a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar6,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar3 = param_3;
      func_0x00010c123360(param_3);
    }
    else {
      puVar3 = (undefined *)0x1;
    }
    func_0x00010c0df760(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = param_3;
    func_0x00010c0cb5a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,puVar1,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = puVar2;
  }
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_3);
  return lVar4 != 0;
}



/* Entry: 10592081c; end: 1059208b7; -[SCFideliusBatchInitiateRecryptExecutor addToQueue:] */

void FUN_10592081c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1059208b8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  func_0x00010befafa0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059208b8; end: 1059208c3;  */

void FUN_1059208b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__isDuplicate__11256d8e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1059208c4; end: 105920913; -[SCFideliusBatchInitiateRecryptExecutor _successCallback] */

void FUN_1059208c4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105920914;
  puStack_20 = &UNK_1108c03d0;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105920914; end: 1059209cb;  */

void FUN_105920914(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c0388;
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  puVar1 = puVar2;
  func_0x00010c08fa60();
  if (puVar1 != (undefined *)0x0) {
    lVar3 = *(long *)(param_1 + 0x20) + 0x20;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c13dca0();
    _objc_release(lVar3);
  }
  func_0x00010bf94240(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1059209cc; end: 105920a1b; -[SCFideliusBatchInitiateRecryptExecutor _failureCallback] */

void FUN_1059209cc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105920a1c;
  puStack_20 = &UNK_110849810;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105920a1c; end: 105920a73;  */

void FUN_105920a1c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf3ec40();
  if (param_2 == 5) {
    lVar1 = *(long *)(param_1 + 0x20) + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c13dca0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf94250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_endBackgroundTask_1125c2a38);
  return;
}



/* Entry: 105920a74; end: 105920ad7; -[SCFideliusBatchInitiateRecryptExecutor .cxx_destruct] */

void FUN_105920a74(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105920ad8; end: 105920beb;  */

void FUN_105920ad8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0d4de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bfdebe0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c03a0;
    lVar4 = param_1;
    func_0x00010bec8be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be0e360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b74a0(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105920bec; end: 105920bf3; -[SCFideliusBatchRecryptAssistantExecutor addToQueue:] */

void FUN_105920bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befafb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addRequest__11259c590);
  return;
}



/* Entry: 105920bf4; end: 105920c43; -[SCFideliusBatchRecryptAssistantExecutor _successCallback] */

void FUN_105920bf4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105920c44;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105920c44; end: 105920c4f;  */

void FUN_105920c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_endBackgroundTask_1125c2a38);
  return;
}



/* Entry: 105920c50; end: 105920c9f; -[SCFideliusBatchRecryptAssistantExecutor _failureCallback] */

void FUN_105920c50(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105920ca0;
  puStack_20 = &UNK_110849810;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105920ca0; end: 105920cf7;  */

void FUN_105920ca0(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf3ec40();
  if (param_2 == 5) {
    lVar1 = *(long *)(param_1 + 0x20) + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c13dca0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf94250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_endBackgroundTask_1125c2a38);
  return;
}



/* Entry: 105920cf8; end: 105920d4f; -[SCFideliusBatchRecryptAssistantExecutor .cxx_destruct] */

void FUN_105920cf8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105920d50; end: 105920ddf; -[SCFideliusBatchRequestScheduler addRequest:] */

void FUN_105920d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105920de0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105920de0; end: 105920e37;  */

void FUN_105920de0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf529e0();
  if (99 < uVar1) {
    func_0x00010bec37a0();
                    /* WARNING: Could not recover jumptable at 0x00010be9e850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__sendAllRequests_1125853b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec1430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startQueueTimer_11258deb0);
  return;
}



/* Entry: 105920e38; end: 105920f07; -[SCFideliusBatchRequestScheduler _startQueueTimer] */

void FUN_105920e38(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if ((uVar1 != 0) && (func_0x00010c082b20(), (uVar1 & 1) != 0)) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf17d00();
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x3fe0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s_sendAllRequests_11252bc08,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105920f08; end: 105920f33; -[SCFideliusBatchRequestScheduler _stopQueueTimer] */

void FUN_105920f08(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105920f34; end: 105920f8b; -[SCFideliusBatchRequestScheduler sendAllRequests] */

void FUN_105920f34(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105920f8c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  return;
}



/* Entry: 105920f8c; end: 105920f93;  */

void FUN_105920f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9e850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendAllRequests_1125853b8);
  return;
}



/* Entry: 105920f94; end: 105921003; -[SCFideliusBatchRequestScheduler _sendAllRequests] */

void FUN_105920f94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94260();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf51e00(uVar2);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar2);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105921004; end: 10592105b; -[SCFideliusBatchRequestScheduler endBackgroundTask] */

void FUN_105921004(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10592105c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  return;
}



/* Entry: 10592105c; end: 10592109f;  */

void FUN_10592105c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059210a0; end: 1059210f3; -[SCFideliusBatchRequestScheduler .cxx_destruct] */

void FUN_1059210a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059210f4; end: 105921193; -[SCFideliusEncryptedDatabaseV2 _removeSharedTransactor] */

void FUN_1059210f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &UNK_10f30c8fd;
  func_0x0001000ba800(&UNK_10f30c8fd);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105921194;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_58);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 105921194; end: 1059211f7;  */

void FUN_105921194(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c03a8;
  func_0x00010c22b980(PTR_PTR_1126c03a8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059211f8; end: 105921273; -[SCFideliusEncryptedDatabaseV2 close] */

void FUN_1059211f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000ba800(&UNK_10f30c933);
  func_0x00010bdf84e0(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010be8d3c0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105921274; end: 1059212ab;  */

void FUN_105921274(long param_1,undefined8 param_2)

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



/* Entry: 1059212ac; end: 10592164b; -[SCFideliusEncryptedDatabaseV2 insertFideliusUserIdentityWithHashedBeta:outBeta:inBeta:version:] */

bool FUN_1059212ac(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = &UNK_10f30ca6f;
  func_0x0001000ba800();
  _CACurrentMediaTime();
  puVar3 = param_2;
  func_0x00010bdfbce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x000100588dc0(uVar4,param_5,0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    func_0x000100588dc0(uVar5,param_6,0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar3 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
    bVar1 = false;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 8);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10592164c;
    puStack_a0 = &UNK_1108c0450;
    _objc_retain(puVar3);
    puStack_98 = puVar3;
    _objc_retain(uVar4);
    uStack_90 = uVar4;
    _objc_retain(uVar5);
    uStack_88 = uVar5;
    _objc_retain(param_7);
    uStack_80 = param_7;
    func_0x00010b5edefc(uVar7,0,&puStack_b8);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    dVar8 = 1.02270250269256e-312;
    uStack_d8 = 0x3032000000;
    puStack_d0 = &UNK_1004547d4;
    puStack_c8 = &UNK_100588750;
    uStack_c0 = 0;
    func_0x00010c0c0800();
    bVar1 = puStack_e0[5] == 0;
    if (puStack_e0[5] == 0) {
      _CACurrentMediaTime();
      puVar6 = *(undefined **)(param_2 + 0x18);
      func_0x00010c269d40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4700(dVar8 - param_1);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be52a60(param_2);
    }
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(uStack_c0);
    _objc_release(uVar7);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    puVar6 = puStack_98;
  }
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10592164c; end: 105921677;  */

undefined * FUN_10592164c(long param_1,undefined8 param_2)

{
  FUN_10595308c(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105921678; end: 10592167b;  */

void FUN_105921678(void)

{
  return;
}



/* Entry: 10592167c; end: 1059216b3;  */

void FUN_10592167c(long param_1,undefined8 param_2)

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



/* Entry: 1059216b4; end: 105921a2b; -[SCFideliusEncryptedDatabaseV2 getFideliusFriendDeviceInfoWithTheirOutBeta:] */

void FUN_1059216b4(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  puVar1 = &UNK_10f30cb84;
  func_0x0001000ba800(&UNK_10f30cb84);
  _CACurrentMediaTime();
  puVar2 = param_2;
  func_0x00010bdfbce0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1059218f8;
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105921a2c;
  puStack_70 = &UNK_1108c0420;
  _objc_retain(puVar2);
  puStack_68 = puVar2;
  func_0x000100589538(uVar6,0,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  dVar7 = 1.02270250269256e-312;
  uStack_a8 = 0x3032000000;
  puStack_a0 = &UNK_1004547d4;
  puStack_98 = &UNK_100588750;
  uStack_90 = 0;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  puStack_d0 = &UNK_1004547d4;
  puStack_c8 = &UNK_100588750;
  uStack_c0 = 0;
  func_0x00010c0c0800();
  if (puStack_e0[5] == 0) {
    lVar4 = puStack_b0[5];
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      if (puStack_e0[5] != 0) goto LAB_105921804;
      puVar3 = param_2;
      func_0x00010becc740(param_2);
      _objc_retainAutoreleasedReturnValue();
      _CACurrentMediaTime();
      puVar5 = *(undefined **)(param_2 + 0x18);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4700(dVar7 - param_1);
      goto LAB_105921864;
    }
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_105921804:
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
    func_0x00010becc740(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
LAB_105921864:
    _objc_release(puVar5);
  }
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar6);
  puVar5 = puStack_68;
LAB_1059218f8:
  _objc_release(puVar5);
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105921a2c; end: 105921a3b;  */

void FUN_105921a2c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x40;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10ddc1d6a,0x42);
      func_0x0001005fcac0();
      func_0x0001005fcb64(lVar1,FUN_1059526c4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105952608;
    }
  }
  lVar1 = 0;
LAB_105952608:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105921a3c; end: 105921aab;  */

void FUN_105921a3c(long param_1,undefined8 param_2)

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



/* Entry: 105921aac; end: 105921e23; -[SCFideliusEncryptedDatabaseV2 getFideliusFriendDeviceInfosForUserIdWithUserId:] */

void FUN_105921aac(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  puVar1 = &UNK_10f30cc78;
  func_0x0001000ba800(&UNK_10f30cc78);
  _CACurrentMediaTime();
  puVar2 = param_2;
  func_0x00010bdfbce0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105921cf0;
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105921e24;
  puStack_70 = &UNK_1108c0420;
  _objc_retain(puVar2);
  puStack_68 = puVar2;
  func_0x000100589538(uVar6,0,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  dVar7 = 1.02270250269256e-312;
  uStack_a8 = 0x3032000000;
  puStack_a0 = &UNK_1004547d4;
  puStack_98 = &UNK_100588750;
  uStack_90 = 0;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  puStack_d0 = &UNK_1004547d4;
  puStack_c8 = &UNK_100588750;
  uStack_c0 = 0;
  func_0x00010c0c0800();
  if (puStack_e0[5] == 0) {
    lVar4 = puStack_b0[5];
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      if (puStack_e0[5] != 0) goto LAB_105921bfc;
      puVar3 = param_2;
      func_0x00010becc740(param_2);
      _objc_retainAutoreleasedReturnValue();
      _CACurrentMediaTime();
      puVar5 = *(undefined **)(param_2 + 0x18);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4700(dVar7 - param_1);
      goto LAB_105921c5c;
    }
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_105921bfc:
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
    func_0x00010becc740(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
LAB_105921c5c:
    _objc_release(puVar5);
  }
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar6);
  puVar5 = puStack_68;
LAB_105921cf0:
  _objc_release(puVar5);
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105921e24; end: 105921e33;  */

void FUN_105921e24(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x48;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10ddc1dad,0x3b);
      func_0x0001005fcac0();
      func_0x0001005fcb64(lVar1,FUN_1059526c4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10595288c;
    }
  }
  lVar1 = 0;
LAB_10595288c:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105921e34; end: 105921ea3;  */

void FUN_105921e34(long param_1,undefined8 param_2)

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



/* Entry: 105921ea4; end: 1059221ff; -[SCFideliusEncryptedDatabaseV2 getFideliusFriendDeviceInfosForUserIds:] */

void FUN_105921ea4(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar1 = &UNK_10f30cd67;
  func_0x0001000ba800(&UNK_10f30cd67);
  puVar2 = param_2;
  func_0x00010be09560();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar2 == (undefined *)0x0) ||
     (puVar3 = puVar2, func_0x00010bf529e0(), puVar3 == (undefined *)0x0)) {
    func_0x00010be52a60(param_2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1059220d8;
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105922200;
  puStack_70 = &UNK_1108c0420;
  _objc_retain(puVar2);
  puStack_68 = puVar2;
  func_0x000100589538(uVar6,0,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  dVar7 = 1.02270250269256e-312;
  uStack_a8 = 0x3032000000;
  puStack_a0 = &UNK_1004547d4;
  puStack_98 = &UNK_100588750;
  uStack_90 = 0;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  puStack_d0 = &UNK_1004547d4;
  puStack_c8 = &UNK_100588750;
  uStack_c0 = 0;
  func_0x00010c0c0800();
  if (puStack_e0[5] == 0) {
    lVar4 = puStack_b0[5];
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      if (puStack_e0[5] != 0) goto LAB_105922000;
      puVar3 = param_2;
      func_0x00010becc760(param_2);
      _objc_retainAutoreleasedReturnValue();
      _CACurrentMediaTime();
      puVar5 = *(undefined **)(param_2 + 0x18);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4700(dVar7 - param_1);
      goto LAB_105922060;
    }
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_105922000:
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
    func_0x00010becc760(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
LAB_105922060:
    _objc_release(puVar5);
  }
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar6);
  _objc_release(puStack_68);
LAB_1059220d8:
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105922200; end: 10592220f;  */

void FUN_105922200(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uStack_3c;
  long *plStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      uVar6 = *(undefined8 *)(param_2 + 8);
      uVar3 = uVar4;
      func_0x00010bf529e0(uVar4);
      FUN_105440200(&plStack_38,uVar6,&UNK_10ddc1de9,0x3f,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,uVar4);
      plVar5 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_1059526c4);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_105952a18;
    }
  }
  plVar5 = (long *)0x0;
LAB_105952a18:
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 105922210; end: 10592227f;  */

void FUN_105922210(long param_1,undefined8 param_2)

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



/* Entry: 105922280; end: 10592251f; -[SCFideliusEncryptedDatabaseV2 getFideliusFriendDeviceInfos] */

void FUN_105922280(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = &UNK_10f30ce36;
  func_0x0001000ba800(&UNK_10f30ce36);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x000100589538(uVar2,0,&PTR___NSConcreteGlobalBlock_1108c04c0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  puStack_68 = &UNK_1004547d4;
  puStack_60 = &UNK_100588750;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  puStack_98 = &UNK_1004547d4;
  puStack_90 = &UNK_100588750;
  uStack_88 = 0;
  dVar6 = 1.60807493534087e-314;
  func_0x00010c0c0800();
  if (puStack_a8[5] == 0) {
    lVar3 = puStack_78[5];
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1059223e0;
    }
    if (puStack_a8[5] != 0) goto LAB_10592237c;
    puVar5 = param_2;
    func_0x00010becc740(param_2);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    puVar4 = *(undefined **)(param_2 + 0x18);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4700(dVar6 - param_1);
  }
  else {
LAB_10592237c:
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
    func_0x00010becc740(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_2;
  }
  _objc_release(puVar4);
LAB_1059223e0:
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar2);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105922520; end: 105922527;  */

void FUN_105922520(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      func_0x0001005fc990(param_2 + 0x50,*(undefined8 *)(param_2 + 8),&UNK_10ddc1e29,0x29);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105922528; end: 105922597;  */

void FUN_105922528(long param_1,undefined8 param_2)

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



/* Entry: 105922598; end: 1059227e7; -[SCFideliusEncryptedDatabaseV2 insertFideliusFriendDeviceInfos:] */

bool FUN_105922598(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  puVar1 = &UNK_10f30ceb7;
  func_0x0001000ba800(&UNK_10f30ceb7);
  _CACurrentMediaTime();
  lVar2 = param_2;
  func_0x00010be09520();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1059227e8;
  puStack_70 = &UNK_1108c04e0;
  _objc_retain();
  lStack_68 = lVar2;
  func_0x00010b5edefc(uVar4,0,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  dVar6 = 1.02270250269256e-312;
  uStack_a8 = 0x3032000000;
  puStack_a0 = &UNK_1004547d4;
  puStack_98 = &UNK_100588750;
  uStack_90 = 0;
  func_0x00010c0c0800();
  lVar5 = puStack_b0[5];
  if (lVar5 == 0) {
    _CACurrentMediaTime();
    puVar3 = *(undefined **)(param_2 + 0x18);
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4700(dVar6 - param_1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
  }
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar4);
  _objc_release(lStack_68);
  _objc_release(lVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  return lVar5 == 0;
}



/* Entry: 1059227e8; end: 10592298b;  */

undefined * FUN_1059227e8(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      uVar3 = uVar8;
      func_0x00010c26cfc0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x00010c2923e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c0d4ee0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c298be0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      FUN_105953250(param_2,uVar3,uVar4,uVar5,uVar8);
      _objc_release(uVar8);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return PTR____kCFBooleanTrue_11034ab68;
  }
  ___stack_chk_fail();
  return param_2;
}



/* Entry: 10592298c; end: 10592298f;  */

void FUN_10592298c(void)

{
  return;
}



/* Entry: 105922990; end: 1059229c7;  */

void FUN_105922990(long param_1,undefined8 param_2)

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



/* Entry: 1059229c8; end: 105922d57; -[SCFideliusEncryptedDatabaseV2 insertFideliusFriendDeviceInfoWithTheirOutBeta:userId:mystique:version:] */

bool FUN_1059229c8(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = &UNK_10f30cf4b;
  func_0x0001000ba800();
  _CACurrentMediaTime();
  puVar3 = param_2;
  func_0x00010bdfbce0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_2;
  func_0x00010bdfbce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    func_0x000100588dc0(uVar5,param_6,0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar3 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
    bVar1 = false;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 8);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105922d58;
    puStack_a0 = &UNK_1108c0450;
    _objc_retain(puVar3);
    puStack_98 = puVar3;
    _objc_retain(puVar4);
    puStack_90 = puVar4;
    _objc_retain(uVar5);
    uStack_88 = uVar5;
    _objc_retain(param_7);
    uStack_80 = param_7;
    func_0x00010b5edefc(uVar7,0,&puStack_b8);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    dVar8 = 1.02270250269256e-312;
    uStack_d8 = 0x3032000000;
    puStack_d0 = &UNK_1004547d4;
    puStack_c8 = &UNK_100588750;
    uStack_c0 = 0;
    func_0x00010c0c0800();
    bVar1 = puStack_e0[5] == 0;
    if (puStack_e0[5] == 0) {
      _CACurrentMediaTime();
      puVar6 = *(undefined **)(param_2 + 0x18);
      func_0x00010c269d40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4700(dVar8 - param_1);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be52a60(param_2);
    }
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(uStack_c0);
    _objc_release(uVar7);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(puStack_90);
    puVar6 = puStack_98;
  }
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 105922d58; end: 105922d83;  */

undefined * FUN_105922d58(long param_1,undefined8 param_2)

{
  FUN_105953250(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105922d84; end: 105922d87;  */

void FUN_105922d84(void)

{
  return;
}



/* Entry: 105922d88; end: 105922dbf;  */

void FUN_105922d88(long param_1,undefined8 param_2)

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



/* Entry: 105922dc0; end: 105923067; -[SCFideliusEncryptedDatabaseV2 deleteFideliusFriendDeviceInfoWithTheirOutBeta:] */

bool FUN_105922dc0(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  puVar2 = &UNK_10f30d049;
  func_0x0001000ba800(&UNK_10f30d049);
  _CACurrentMediaTime();
  puVar3 = param_2;
  func_0x00010bdfbce0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
    bVar1 = false;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 8);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105923068;
    puStack_70 = &UNK_1108c04e0;
    _objc_retain(puVar3);
    puStack_68 = puVar3;
    func_0x00010b5edefc(uVar5,0,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    dVar6 = 1.02270250269256e-312;
    uStack_a8 = 0x3032000000;
    puStack_a0 = &UNK_1004547d4;
    puStack_98 = &UNK_100588750;
    uStack_90 = 0;
    func_0x00010c0c0800();
    bVar1 = puStack_b0[5] == 0;
    if (puStack_b0[5] == 0) {
      _CACurrentMediaTime();
      puVar4 = *(undefined **)(param_2 + 0x18);
      func_0x00010c269d40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4700(dVar6 - param_1);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be52a60(param_2);
    }
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
    _objc_release(uVar5);
    puVar4 = puStack_68;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 105923068; end: 10592308f;  */

undefined * FUN_105923068(long param_1,undefined8 param_2)

{
  FUN_105953414(param_2,*(undefined8 *)(param_1 + 0x20));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105923090; end: 105923093;  */

void FUN_105923090(void)

{
  return;
}



/* Entry: 105923094; end: 1059230cb;  */

void FUN_105923094(long param_1,undefined8 param_2)

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



/* Entry: 1059230cc; end: 10592331b; -[SCFideliusEncryptedDatabaseV2 deleteFideliusFriendDeviceInfosWithTheirOutBeta:] */

bool FUN_1059230cc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  puVar1 = &UNK_10f30d138;
  func_0x0001000ba800(&UNK_10f30d138);
  _CACurrentMediaTime();
  lVar2 = param_2;
  func_0x00010be09540();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10592331c;
  puStack_70 = &UNK_1108c04e0;
  _objc_retain();
  lStack_68 = lVar2;
  func_0x00010b5edefc(uVar4,0,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  dVar6 = 1.02270250269256e-312;
  uStack_a8 = 0x3032000000;
  puStack_a0 = &UNK_1004547d4;
  puStack_98 = &UNK_100588750;
  uStack_90 = 0;
  func_0x00010c0c0800();
  lVar5 = puStack_b0[5];
  if (lVar5 == 0) {
    _CACurrentMediaTime();
    puVar3 = *(undefined **)(param_2 + 0x18);
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4700(dVar6 - param_1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
  }
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar4);
  _objc_release(lStack_68);
  _objc_release(lVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  return lVar5 == 0;
}



/* Entry: 10592331c; end: 105923343;  */

undefined * FUN_10592331c(long param_1,undefined8 param_2)

{
  FUN_105953544(param_2,*(undefined8 *)(param_1 + 0x20));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105923344; end: 105923347;  */

void FUN_105923344(void)

{
  return;
}



/* Entry: 105923348; end: 10592337f;  */

void FUN_105923348(long param_1,undefined8 param_2)

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



/* Entry: 105923380; end: 105923627; -[SCFideliusEncryptedDatabaseV2 deleteFideliusFriendDeviceInfosForUserIdWithUserId:] */

bool FUN_105923380(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  puVar2 = &UNK_10f30d1ec;
  func_0x0001000ba800(&UNK_10f30d1ec);
  _CACurrentMediaTime();
  puVar3 = param_2;
  func_0x00010bdfbce0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
    bVar1 = false;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 8);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105923628;
    puStack_70 = &UNK_1108c04e0;
    _objc_retain(puVar3);
    puStack_68 = puVar3;
    func_0x00010b5edefc(uVar5,0,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    dVar6 = 1.02270250269256e-312;
    uStack_a8 = 0x3032000000;
    puStack_a0 = &UNK_1004547d4;
    puStack_98 = &UNK_100588750;
    uStack_90 = 0;
    func_0x00010c0c0800();
    bVar1 = puStack_b0[5] == 0;
    if (puStack_b0[5] == 0) {
      _CACurrentMediaTime();
      puVar4 = *(undefined **)(param_2 + 0x18);
      func_0x00010c269d40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a4700(dVar6 - param_1);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be52a60(param_2);
    }
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
    _objc_release(uVar5);
    puVar4 = puStack_68;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 105923628; end: 10592364f;  */

undefined * FUN_105923628(long param_1,undefined8 param_2)

{
  FUN_1059536c4(param_2,*(undefined8 *)(param_1 + 0x20));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105923650; end: 105923653;  */

void FUN_105923650(void)

{
  return;
}



/* Entry: 105923654; end: 10592368b;  */

void FUN_105923654(long param_1,undefined8 param_2)

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



/* Entry: 10592368c; end: 105923b53; -[SCFideliusEncryptedDatabaseV2 getArroyoMessageEncryptionKeyWithConversationId:messageId:] */

void FUN_10592368c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  puVar1 = &UNK_10f30d2c8;
  uStack_80 = param_5;
  func_0x0001000ba800();
  _CACurrentMediaTime();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0d3c80(param_4);
  func_0x00010bf06ae0();
  lVar4 = *(long *)(param_2 + 0x10);
  func_0x000100588dc0(lVar4,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    func_0x00010be52a60(param_2);
    param_2 = 0;
    goto LAB_105923a90;
  }
  lVar5 = *(long *)(param_2 + 0x10);
  func_0x000100588dc0(lVar5,puVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    func_0x00010be52a60(param_2);
    param_2 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 8);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105923b54;
    puStack_98 = &UNK_1108c05b0;
    _objc_retain(lVar4);
    lStack_90 = lVar4;
    _objc_retain(lVar5);
    lStack_88 = lVar5;
    func_0x000100589538(uVar9,0,&puStack_b0);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = &uStack_e0;
    uStack_e0 = 0;
    dVar10 = 1.02270250269256e-312;
    uStack_d0 = 0x3032000000;
    puStack_c8 = &UNK_1004547d4;
    puStack_c0 = &UNK_100588750;
    uStack_b8 = 0;
    puStack_108 = &uStack_110;
    uStack_110 = 0;
    uStack_100 = 0x3032000000;
    puStack_f8 = &UNK_1004547d4;
    puStack_f0 = &UNK_100588750;
    uStack_e8 = 0;
    func_0x00010c0c0800();
    if (puStack_108[5] == 0) {
      lVar6 = puStack_d8[5];
      func_0x00010bf529e0();
      if (lVar6 != 0) goto LAB_105923860;
      param_2 = 0;
    }
    else {
LAB_105923860:
      lVar6 = puStack_d8[5];
      func_0x00010bf529e0();
      if (lVar6 == 0) {
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be52a60(param_2);
        param_2 = 0;
      }
      else {
        if (puStack_108[5] == 0) {
          lVar6 = puStack_d8[5];
          func_0x00010bf529e0();
          if (lVar6 == 1) {
            uVar7 = puStack_d8[5];
            func_0x00010bfb1920(uVar7);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = param_2;
            func_0x00010becc780(param_2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            _CACurrentMediaTime();
            puVar8 = *(undefined **)(param_2 + 0x18);
            func_0x00010c269d40(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a4700(dVar10 - param_1);
            param_2 = lVar6;
            goto LAB_105923a3c;
          }
        }
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bf529e0();
        func_0x00010c14de00(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be52a60(param_2);
        uVar7 = puStack_d8[5];
        func_0x00010bfb1920(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010becc780(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
      }
LAB_105923a3c:
      _objc_release(puVar8);
    }
    __Block_object_dispose(&uStack_110,8);
    _objc_release(uStack_e8);
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(uStack_b8);
    _objc_release(uVar9);
    _objc_release(lStack_88);
    _objc_release(lStack_90);
  }
  _objc_release(lVar5);
LAB_105923a90:
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105923b54; end: 105923b63;  */

void FUN_105923b54(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uStack_44;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar3 = param_2 + 0x18;
      func_0x0001005fc990(lVar3,*(undefined8 *)(param_2 + 8),&UNK_10ddc1cb0,0x7e);
      uStack_44 = 1;
      func_0x00010b5eec6c();
      func_0x00010b5eec6c(lVar3,&uStack_44,uVar2);
      func_0x0001005fcb64(lVar3,FUN_1059524ec);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10595241c;
    }
  }
  lVar3 = 0;
LAB_10595241c:
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105923b64; end: 105923bd3;  */

void FUN_105923b64(long param_1,undefined8 param_2)

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



/* Entry: 105923bd4; end: 10592402b; -[SCFideliusEncryptedDatabaseV2 insertArroyoMessageEncryptionKeyWithConversationId:messageId:encryptedKey:timestamp:purgePolicy:] */

bool FUN_105923bd4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  uStack_80 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar2 = &UNK_10f30d435;
  func_0x0001000ba800();
  _CACurrentMediaTime();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0d3c80(param_4);
  func_0x00010bf06ae0();
  lVar5 = *(long *)(param_2 + 0x10);
  func_0x000100588dc0(lVar5,param_4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    func_0x00010be52a60(param_2);
    bVar1 = false;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x10);
    func_0x000100588dc0(lVar6,puVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      func_0x00010be52a60(param_2);
      bVar1 = false;
    }
    else {
      lVar7 = *(long *)(param_2 + 0x10);
      func_0x000100588dc0(lVar7,param_6,uVar4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
        func_0x00010be52a60(param_2);
        bVar1 = false;
      }
      else {
        uVar10 = *(undefined8 *)(param_2 + 8);
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_10592402c;
        puStack_b0 = &UNK_1108c05e0;
        _objc_retain(lVar5);
        lStack_a8 = lVar5;
        _objc_retain(lVar6);
        lStack_a0 = lVar6;
        _objc_retain(lVar7);
        lStack_98 = lVar7;
        uStack_88 = param_7;
        _objc_retain(param_8);
        uStack_90 = param_8;
        func_0x00010b5edefc(uVar10,0,&puStack_c8);
        _objc_retainAutoreleasedReturnValue();
        puStack_f0 = &uStack_f8;
        uStack_f8 = 0;
        dVar11 = 1.02270250269256e-312;
        uStack_e8 = 0x3032000000;
        puStack_e0 = &UNK_1004547d4;
        puStack_d8 = &UNK_100588750;
        uStack_d0 = 0;
        func_0x00010c0c0800();
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        bVar1 = puStack_f0[5] == 0;
        if (puStack_f0[5] == 0) {
          _CACurrentMediaTime();
          puVar9 = *(undefined **)(param_2 + 0x18);
          func_0x00010c269d40(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a4700(dVar11 - param_1);
        }
        else {
          uVar8 = param_4;
          func_0x00010bf15d60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          func_0x00010be52a60(param_2);
        }
        _objc_release(puVar9);
        __Block_object_dispose(&uStack_f8,8);
        _objc_release(uStack_d0);
        _objc_release(uVar10);
        _objc_release(uStack_90);
        _objc_release(lStack_98);
        _objc_release(lStack_a0);
        _objc_release(lStack_a8);
      }
      _objc_release(lVar7);
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10592402c; end: 10592405b;  */

undefined * FUN_10592402c(long param_1,undefined8 param_2)

{
  FUN_105952c04(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x38));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10592405c; end: 10592405f;  */

void FUN_10592405c(void)

{
  return;
}



/* Entry: 105924060; end: 105924097;  */

void FUN_105924060(long param_1,undefined8 param_2)

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



/* Entry: 105924098; end: 10592441f; -[SCFideliusEncryptedDatabaseV2 deleteArroyoMessageEncryptionKeyWithConversationId:messageId:] */

bool FUN_105924098(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  puVar2 = &UNK_10f30d574;
  uStack_80 = param_5;
  func_0x0001000ba800();
  _CACurrentMediaTime();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0d3c80(param_4);
  func_0x00010bf06ae0();
  lVar5 = *(long *)(param_2 + 0x10);
  func_0x000100588dc0(lVar5,param_4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    func_0x00010be52a60(param_2);
    bVar1 = false;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x10);
    func_0x000100588dc0(lVar6,puVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      func_0x00010be52a60(param_2);
      bVar1 = false;
    }
    else {
      uVar9 = *(undefined8 *)(param_2 + 8);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_105924420;
      puStack_98 = &UNK_1108c0630;
      _objc_retain(lVar5);
      lStack_90 = lVar5;
      _objc_retain(lVar6);
      lStack_88 = lVar6;
      func_0x00010b5edefc(uVar9,0,&puStack_b0);
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = &uStack_e0;
      uStack_e0 = 0;
      dVar10 = 1.02270250269256e-312;
      uStack_d0 = 0x3032000000;
      puStack_c8 = &UNK_1004547d4;
      puStack_c0 = &UNK_100588750;
      uStack_b8 = 0;
      func_0x00010c0c0800();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      bVar1 = puStack_d8[5] == 0;
      if (puStack_d8[5] == 0) {
        _CACurrentMediaTime();
        puVar8 = *(undefined **)(param_2 + 0x18);
        func_0x00010c269d40(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a4700(dVar10 - param_1);
      }
      else {
        uVar7 = param_4;
        func_0x00010bf15d60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        func_0x00010be52a60(param_2);
      }
      _objc_release(puVar8);
      __Block_object_dispose(&uStack_e0,8);
      _objc_release(uStack_b8);
      _objc_release(uVar9);
      _objc_release(lStack_88);
      _objc_release(lStack_90);
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 105924420; end: 105924447;  */

undefined * FUN_105924420(long param_1,undefined8 param_2)

{
  FUN_105952de4(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105924448; end: 10592444b;  */

void FUN_105924448(void)

{
  return;
}



/* Entry: 10592444c; end: 105924483;  */

void FUN_10592444c(long param_1,undefined8 param_2)

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



/* Entry: 105924484; end: 1059246b3; -[SCFideliusEncryptedDatabaseV2 deleteExpiredArroyoMessageEncryptionKeysWithTimestamp:purgePolicy:] */

bool FUN_105924484(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  puVar1 = &UNK_10f30d634;
  func_0x0001000ba800(&UNK_10f30d634);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_2 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1059246b4;
  puStack_68 = &UNK_1108c0680;
  uStack_58 = param_4;
  _objc_retain(param_5);
  uStack_60 = param_5;
  func_0x00010b5edefc(uVar3,0,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  dVar5 = 1.02270250269256e-312;
  uStack_a0 = 0x3032000000;
  puStack_98 = &UNK_1004547d4;
  puStack_90 = &UNK_100588750;
  uStack_88 = 0;
  func_0x00010c0c0800();
  lVar4 = puStack_a8[5];
  if (lVar4 == 0) {
    _CACurrentMediaTime();
    puVar2 = *(undefined **)(param_2 + 0x18);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4700(dVar5 - param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52a60(param_2);
  }
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  _objc_release(uVar3);
  _objc_release(uStack_60);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  return lVar4 == 0;
}



/* Entry: 1059246b4; end: 1059246db;  */

undefined * FUN_1059246b4(long param_1,undefined8 param_2)

{
  FUN_105952f48(param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 1059246dc; end: 1059246df;  */

void FUN_1059246dc(void)

{
  return;
}



/* Entry: 1059246e0; end: 105924717;  */

void FUN_1059246e0(long param_1,undefined8 param_2)

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



/* Entry: 105924718; end: 1059247cf; -[SCFideliusEncryptedDatabaseV2 deleteExpiredArroyoMessageEncryptionKeys] */

undefined8 FUN_105924718(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_10f30d6f9;
  func_0x0001000ba800(&UNK_10f30d6f9);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  func_0x00010bf6bc20(param_2,param_3,(long)(param_1 + -2678400.0),
                      &PTR____CFConstantStringClassReference_110e10b58);
  func_0x0001000e2a84(puVar1);
  return param_2;
}



/* Entry: 1059247d0; end: 105924b97; -[SCFideliusEncryptedDatabaseV2 _toDecryptedFriendDeviceInfos:] */

void FUN_1059247d0(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
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
  puVar1 = &UNK_10f30d740;
  func_0x0001000ba800();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar6 = &uStack_130;
  puVar7 = auStack_f0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lStack_128 + lVar13 * 8);
        if (lVar9 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(lVar9 + 8);
        }
        _objc_retain(uVar8);
        puVar3 = param_1;
        func_0x00010bdfbca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (puVar3 == (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be52a60(param_1);
        }
        else {
          if (lVar9 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)(lVar9 + 0x10);
          }
          _objc_retain(uVar8);
          puVar5 = param_1;
          func_0x00010bdfbca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          if (puVar5 == (undefined *)0x0) {
            puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be52a60(param_1);
          }
          else {
            if (lVar9 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = *(long *)(lVar9 + 0x18);
            }
            _objc_retain(lVar10);
            _objc_release(lVar10);
            if (lVar10 != 0) {
              if (lVar9 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)(lVar9 + 0x18);
              }
              puVar12 = *(undefined **)(param_1 + 0x10);
              _objc_retain(uVar8);
              func_0x00010060011c(puVar12,uVar8,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar8);
              if (puVar12 != (undefined *)0x0) {
                puVar4 = PTR_PTR_1126c03c0;
                _objc_alloc();
                if (lVar9 == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(undefined8 *)(lVar9 + 0x20);
                }
                _objc_retain(uVar8);
                func_0x00010c051bc0();
                _objc_release(uVar8);
                func_0x00010befa120(puVar11);
                _objc_release(puVar4);
                goto LAB_105924a7c;
              }
            }
            puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be52a60(param_1);
          }
LAB_105924a7c:
          _objc_release(puVar12);
        }
        _objc_release(puVar5);
        _objc_release(puVar3);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar6 = &uStack_130;
      puVar7 = auStack_f0;
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  func_0x0001000e2a84(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puVar1);
    __Unwind_Resume();
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    puVar1 = &UNK_10f30d93d;
    func_0x0001000ba800(&UNK_10f30d93d);
    puVar11 = *(undefined **)(param_3 + 0x10);
    if (puVar6 == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = puVar6[1];
    }
    _objc_retain(uVar8);
    func_0x00010060011c(puVar11,uVar8,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    if (puVar11 == (undefined *)0x0) {
      func_0x00010be52a60(param_3);
    }
    else {
      _objc_retain(puVar11);
    }
    _objc_release(puVar11);
    func_0x0001000e2a84(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105924b98; end: 105924ca3; -[SCFideliusEncryptedDatabaseV2 _toDecryptedMessageEncryptionKey:additionalData:] */

void FUN_105924b98(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f30d93d;
  func_0x0001000ba800(&UNK_10f30d93d);
  lVar2 = *(long *)(param_1 + 0x10);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 8);
  }
  _objc_retain(uVar3);
  func_0x00010060011c(lVar2,uVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar2 == 0) {
    func_0x00010be52a60(param_1);
  }
  else {
    _objc_retain(lVar2);
  }
  _objc_release(lVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105924ca4; end: 105924d83; -[SCFideliusEncryptedDatabaseV2 _logError:errorMessage:source:] */

void FUN_105924ca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f30da37;
  func_0x0001000ba800(&UNK_10f30da37);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4960();
  _objc_release(uVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105924d84; end: 105925053; -[SCFideliusEncryptedDatabaseV2 _encryptFideliusFriendDeviceInfos:] */

void FUN_105924d84(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *unaff_x21;
  undefined8 unaff_x24;
  long unaff_x25;
  long lVar7;
  undefined *unaff_x26;
  undefined *puVar8;
  undefined8 *puVar9;
  long unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_148 = param_3;
  _objc_retain(param_3);
  puVar1 = &UNK_10f30da5f;
  func_0x0001000ba800();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_150 = puVar1;
  _objc_opt_new();
  puVar1 = puStack_148;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puStack_140 = puVar6;
  _objc_retain(puStack_148);
  puVar4 = &uStack_130;
  puVar6 = puVar1;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lStack_138 = *plStack_120;
    do {
      unaff_x21 = (undefined *)0x0;
      do {
        if (*plStack_120 != lStack_138) {
          _objc_enumerationMutation(puStack_148);
        }
        puVar8 = *(undefined **)(lStack_128 + (long)unaff_x21 * 8);
        unaff_x24 = *(undefined8 *)(param_1 + 0x10);
        puVar1 = puVar8;
        func_0x00010c0d4ee0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100588dc0(unaff_x24,puVar1,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = puVar8;
        func_0x00010c2923e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = param_1;
        func_0x00010bdfbce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = puVar8;
        func_0x00010c26cfc0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = param_1;
        func_0x00010bdfbce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        unaff_x26 = puVar8;
        if (unaff_x27 != 0) {
          puVar1 = PTR_PTR_1126c03c0;
          _objc_alloc();
          unaff_x28 = puVar8;
          func_0x00010c298be0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2709c0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = puVar1;
          func_0x00010c051bc0();
          _objc_release(puVar8);
          _objc_release(unaff_x28);
          func_0x00010befa120(puStack_140);
          _objc_release(unaff_x26);
        }
        _objc_release(unaff_x27);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        unaff_x21 = unaff_x21 + 1;
      } while (puVar6 != unaff_x21);
      puVar4 = &uStack_130;
      puVar6 = puStack_148;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puStack_148);
  func_0x0001000e2a84(puStack_150);
  puVar6 = puStack_148;
  _objc_release();
  puVar8 = puStack_140;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puStack_150);
    puVar2 = puVar6;
    __Unwind_Resume();
    puVar9 = &uStack_280;
    pcStack_158 = FUN_105925054;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1b0 = unaff_x28;
    lStack_1a8 = unaff_x27;
    puStack_1a0 = unaff_x26;
    lStack_198 = unaff_x25;
    uStack_190 = unaff_x24;
    uStack_188 = 0;
    lStack_180 = param_1;
    puStack_178 = unaff_x21;
    puStack_170 = puVar6;
    puStack_168 = puVar1;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    puVar1 = &UNK_10f30da9f;
    func_0x0001000ba800();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    _objc_retain(puVar4);
    puVar3 = puVar4;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      lVar7 = *plStack_270;
      do {
        puVar9 = (undefined8 *)0x0;
        do {
          if (*plStack_270 != lVar7) {
            _objc_enumerationMutation(puVar4);
          }
          puVar6 = puVar2;
          func_0x00010bdfbce0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar8);
          _objc_release(puVar6);
          puVar9 = (undefined8 *)((long)puVar9 + 1);
        } while (puVar3 != puVar9);
        puVar3 = puVar4;
        puVar9 = &uStack_280;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(puVar4);
    func_0x0001000e2a84(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      func_0x0001000e2a84(puVar1);
      __Unwind_Resume();
      _objc_terminate();
      _objc_retain(puVar9);
      puVar1 = &UNK_10f30d9c3;
      func_0x0001000ba800(&UNK_10f30d9c3);
      if (puVar9 == (undefined8 *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar5 = (undefined1 *)puVar9;
        func_0x00010bf64920(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = (undefined *)puVar4[2];
        func_0x00010bcb4714(puVar6,puVar5,0);
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = puVar6;
          func_0x00010bf15da0(puVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      func_0x0001000e2a84(puVar1);
      _objc_release(puVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105925054; end: 1059251fb; -[SCFideliusEncryptedDatabaseV2 _encryptFideliusUserIdsOrBetas:] */

void FUN_105925054(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = &UNK_10f30da9f;
  func_0x0001000ba800();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = param_1;
        func_0x00010bdfbce0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  func_0x0001000e2a84(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puVar1);
    __Unwind_Resume();
    _objc_terminate();
    _objc_retain(puVar6);
    puVar1 = &UNK_10f30d9c3;
    func_0x0001000ba800(&UNK_10f30d9c3);
    if (puVar6 == (undefined8 *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar4 = (undefined1 *)puVar6;
      func_0x00010bf64920(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = *(undefined **)(param_3 + 0x10);
      func_0x00010bcb4714(puVar5,puVar4,0);
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar5;
        func_0x00010bf15da0(puVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    func_0x0001000e2a84(puVar1);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1059251fc; end: 1059252f7; -[SCFideliusEncryptedDatabaseV2 _deterministicEncryptStringCC:] */

void FUN_1059251fc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f30d9c3;
  func_0x0001000ba800(&UNK_10f30d9c3);
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf64920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010bcb4714(lVar3,lVar2,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x00010bf15da0(lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1059252f8; end: 10592541b; -[SCFideliusEncryptedDatabaseV2 _deterministicDecryptStringCC:] */

void FUN_1059252f8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f30d9fd;
  func_0x0001000ba800(&UNK_10f30d9fd);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bff6b20();
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010bcb4d2c(lVar3,puVar2,0);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        func_0x00010c008340();
        if (puVar4 != (undefined *)0x0) {
          _objc_retain(puVar4);
        }
        _objc_release(puVar4);
      }
      _objc_release(lVar3);
    }
    _objc_release(puVar2);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10592541c; end: 1059255c3; -[SCFideliusEncryptedDatabaseV2 _encryptFideliusUserIdsOrBetasCC:] */

void FUN_10592541c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = &UNK_10f30da9f;
  func_0x0001000ba800();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = param_1;
        func_0x00010bdfbd00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar8);
        puVar14 = puVar14 + 1;
      } while (puVar3 != puVar14);
      puVar3 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(param_3);
  func_0x0001000e2a84(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puVar1);
    __Unwind_Resume();
    _objc_terminate();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    puVar1 = &UNK_10f30d740;
    func_0x0001000ba800();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar6);
    puVar4 = (undefined1 *)puVar6;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (puVar4 != (undefined1 *)0x0) {
      puVar13 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar6);
        }
        lVar9 = *(long *)((long)puVar13 * 8);
        if (lVar9 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(lVar9 + 8);
        }
        _objc_retain(uVar8);
        puVar3 = param_3;
        func_0x00010bdfbcc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (puVar3 == (undefined *)0x0) {
          puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be52a60(param_3);
        }
        else {
          if (lVar9 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)(lVar9 + 0x10);
          }
          _objc_retain(uVar8);
          puVar14 = param_3;
          func_0x00010bdfbcc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          if (puVar14 == (undefined *)0x0) {
            puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be52a60(param_3);
          }
          else {
            if (lVar9 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = *(long *)(lVar9 + 0x18);
            }
            _objc_retain(lVar10);
            _objc_release(lVar10);
            if (lVar10 != 0) {
              if (lVar9 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)(lVar9 + 0x18);
              }
              puVar11 = *(undefined **)(param_3 + 0x10);
              _objc_retain(uVar8);
              func_0x00010bcb4d2c(puVar11,uVar8,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar8);
              if (puVar11 != (undefined *)0x0) {
                puVar5 = PTR_PTR_1126c03c0;
                _objc_alloc(PTR_PTR_1126c03c0);
                if (lVar9 == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(undefined8 *)(lVar9 + 0x20);
                }
                _objc_retain(uVar8);
                func_0x00010c051bc0(puVar5);
                _objc_release(uVar8);
                func_0x00010befa120(puVar2);
                _objc_release(puVar5);
                goto LAB_105925870;
              }
            }
            puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be52a60(param_3);
          }
LAB_105925870:
          _objc_release(puVar11);
        }
        _objc_release(puVar14);
        _objc_release(puVar3);
        puVar13 = puVar13 + 1;
      } while (puVar4 != puVar13);
      puVar4 = (undefined1 *)puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    func_0x0001000e2a84(puVar1);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      func_0x0001000e2a84(puVar1);
      __Unwind_Resume(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_getProperty_11034d258)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059255c4; end: 10592598b; -[SCFideliusEncryptedDatabaseV2 _toDecryptedFriendDeviceInfosCC:] */

void FUN_1059255c4(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = &UNK_10f30d740;
  func_0x0001000ba800();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(param_3);
      func_0x0001000e2a84(puVar2);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
        return;
      }
      ___stack_chk_fail();
      func_0x0001000e2a84(puVar2);
      __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_getProperty_11034d258)();
      return;
    }
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar10 = *(long *)(lVar13 * 8);
      if (lVar10 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(lVar10 + 8);
      }
      _objc_retain(uVar9);
      puVar5 = param_1;
      func_0x00010bdfbcc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      if (puVar5 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be52a60(param_1);
      }
      else {
        if (lVar10 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar10 + 0x10);
        }
        _objc_retain(uVar9);
        puVar7 = param_1;
        func_0x00010bdfbcc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        if (puVar7 == (undefined *)0x0) {
          puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be52a60(param_1);
        }
        else {
          if (lVar10 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(long *)(lVar10 + 0x18);
          }
          _objc_retain(lVar11);
          _objc_release(lVar11);
          if (lVar11 != 0) {
            if (lVar10 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined8 *)(lVar10 + 0x18);
            }
            puVar12 = *(undefined **)(param_1 + 0x10);
            _objc_retain(uVar9);
            func_0x00010bcb4d2c(puVar12,uVar9,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            if (puVar12 != (undefined *)0x0) {
              puVar6 = PTR_PTR_1126c03c0;
              _objc_alloc(PTR_PTR_1126c03c0);
              if (lVar10 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = *(undefined8 *)(lVar10 + 0x20);
              }
              _objc_retain(uVar9);
              func_0x00010c051bc0(puVar6);
              _objc_release(uVar9);
              func_0x00010befa120(puVar3);
              _objc_release(puVar6);
              goto LAB_105925870;
            }
          }
          puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be52a60(param_1);
        }
LAB_105925870:
        _objc_release(puVar12);
      }
      _objc_release(puVar7);
      _objc_release(puVar5);
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = param_3;
    func_0x00010bf52a60();
  } while( true );
}


