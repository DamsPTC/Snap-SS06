/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b69f74; end: 106b6a0df; -[SCGrapheneRegistry accountRecoveryGraphene] */

void FUN_106b69f74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106b69ffc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c6a38 != -1) {
    func_0x00010002a2fc(0x1136c6a38,&puStack_48);
  }
  uVar1 = uRam00000001136c6a30;
  _objc_retain(uRam00000001136c6a30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b6a0e0; end: 106b6a153; -[SCAuthenticationFlowLoggerServices initWithAuthenticationFlowLogger:] */

undefined1 * FUN_106b6a0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5220;
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



/* Entry: 106b6a154; end: 106b6a15b; -[SCAuthenticationFlowLoggerServices authenticationFlowLogger] */

undefined8 FUN_106b6a154(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b6a15c; end: 106b6a167; -[SCAuthenticationFlowLoggerServices .cxx_destruct] */

void FUN_106b6a15c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b6a168; end: 106b6a283; -[SCNGOEmailEntryScope initWithUiContainer:email:context:service:delegate:datasource:] */

undefined1 *
FUN_106b6a168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f5228;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b6a284; end: 106b6a28b; -[SCNGOEmailEntryScope uiContainer] */

undefined8 FUN_106b6a284(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b6a28c; end: 106b6a293; -[SCNGOEmailEntryScope email] */

undefined8 FUN_106b6a28c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b6a294; end: 106b6a29b; -[SCNGOEmailEntryScope context] */

undefined8 FUN_106b6a294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b6a29c; end: 106b6a2b3; -[SCNGOEmailEntryScope service] */

void FUN_106b6a29c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6a2b4; end: 106b6a2cb; -[SCNGOEmailEntryScope delegate] */

void FUN_106b6a2b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6a2cc; end: 106b6a2e3; -[SCNGOEmailEntryScope datasource] */

void FUN_106b6a2cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6a2e4; end: 106b6a32b; -[SCNGOEmailEntryScope .cxx_destruct] */

void FUN_106b6a2e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b6a32c; end: 106b6a38f; +[SCNGOEmailEntrySubmitRequestError retryableErrorWithMessage:] */

void FUN_106b6a32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0ba0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6a390; end: 106b6a427; +[SCNGOEmailEntrySubmitRequestError unretryableErrorWithMessage:errorData:] */

void FUN_106b6a390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d0ba0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6a428; end: 106b6a44b; -[SCNGOEmailEntrySubmitRequestError copyWithZone:] */

undefined8 FUN_106b6a428(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b6a44c; end: 106b6a4cf; -[SCNGOEmailEntrySubmitRequestError hash] */

void FUN_106b6a44c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f5230;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6a4d0; end: 106b6a513; -[SCNGOEmailEntrySubmitRequestError internalInit] */

void FUN_106b6a4d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5230;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6a514; end: 106b6a5e3; -[SCNGOEmailEntrySubmitRequestError isEqual:] */

long FUN_106b6a514(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b6a5bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b6a5c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106b6a5c8;
          }
          goto LAB_106b6a5bc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b6a5c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b6a5e4; end: 106b6a66b; -[SCNGOEmailEntrySubmitRequestError matchRetryableError:unretryableError:] */

void FUN_106b6a5e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b6a66c; end: 106b6a6a7; -[SCNGOEmailEntrySubmitRequestError .cxx_destruct] */

void FUN_106b6a66c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b6a6a8; end: 106b6a75b; -[SCNGOEmailEntrySuccess initWithResponse:email:optedIn1TL:] */

undefined1 *
FUN_106b6a6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5238;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b6a75c; end: 106b6a77f; -[SCNGOEmailEntrySuccess copyWithZone:] */

undefined8 FUN_106b6a75c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b6a780; end: 106b6a7f7; -[SCNGOEmailEntrySuccess hash] */

undefined8 * FUN_106b6a780(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106b6a888:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b6a894;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106b6a894;
        }
        goto LAB_106b6a888;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106b6a894:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106b6a7f8; end: 106b6a8af; -[SCNGOEmailEntrySuccess isEqual:] */

long FUN_106b6a7f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b6a888:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b6a894;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106b6a894;
        }
        goto LAB_106b6a888;
      }
    }
    lVar3 = 0;
  }
LAB_106b6a894:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b6a8b0; end: 106b6a8b7; -[SCNGOEmailEntrySuccess response] */

undefined8 FUN_106b6a8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b6a8b8; end: 106b6a8bf; -[SCNGOEmailEntrySuccess email] */

undefined8 FUN_106b6a8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b6a8c0; end: 106b6a8c7; -[SCNGOEmailEntrySuccess optedIn1TL] */

undefined1 FUN_106b6a8c0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106b6a8c8; end: 106b6a8f7; -[SCNGOEmailEntrySuccess .cxx_destruct] */

void FUN_106b6a8c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b6a8f8; end: 106b6a9bb; +[SCNGOEmailEntrySubmitRequestResponse cosChallengeWithAppChallengeData:authSessionPayload:clientNetworkRequestId:] */

void FUN_106b6a8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d0ba8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6a9bc; end: 106b6aa27; +[SCNGOEmailEntrySubmitRequestResponse magicCodeWithMagicCodeAdaptor:] */

void FUN_106b6a9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0ba8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6aa28; end: 106b6aa73; +[SCNGOEmailEntrySubmitRequestResponse none] */

void FUN_106b6aa28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0ba8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6aa74; end: 106b6aabf; +[SCNGOEmailEntrySubmitRequestResponse redirectToReg] */

void FUN_106b6aa74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0ba8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6aac0; end: 106b6ab0b; +[SCNGOEmailEntrySubmitRequestResponse redirectToUsernamePassword] */

void FUN_106b6aac0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0ba8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6ab0c; end: 106b6ab2f; -[SCNGOEmailEntrySubmitRequestResponse copyWithZone:] */

undefined8 FUN_106b6ab0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b6ab30; end: 106b6abbf; -[SCNGOEmailEntrySubmitRequestResponse hash] */

void FUN_106b6ab30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f5240;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6abc0; end: 106b6ac03; -[SCNGOEmailEntrySubmitRequestResponse internalInit] */

void FUN_106b6abc0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5240;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6ac04; end: 106b6aceb; -[SCNGOEmailEntrySubmitRequestResponse isEqual:] */

long FUN_106b6ac04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b6acc4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b6acd0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_106b6acd0;
            }
            goto LAB_106b6acc4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b6acd0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b6acec; end: 106b6ae0b; -[SCNGOEmailEntrySubmitRequestResponse matchCosChallenge:magicCode:redirectToReg:redirectToUsernamePassword:none:] */

void FUN_106b6acec(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20));
      }
    }
    else if ((lVar1 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x28));
    }
  }
  else {
    if (lVar1 == 2) {
      if (param_5 == 0) goto LAB_106b6add4;
      pcVar2 = *(code **)(param_5 + 0x10);
      lVar1 = param_5;
    }
    else if (lVar1 == 3) {
      if (param_6 == 0) goto LAB_106b6add4;
      pcVar2 = *(code **)(param_6 + 0x10);
      lVar1 = param_6;
    }
    else {
      if ((lVar1 != 4) || (param_7 == 0)) goto LAB_106b6add4;
      pcVar2 = *(code **)(param_7 + 0x10);
      lVar1 = param_7;
    }
    (*pcVar2)(lVar1);
  }
LAB_106b6add4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b6ae0c; end: 106b6ae53; -[SCNGOEmailEntrySubmitRequestResponse .cxx_destruct] */

void FUN_106b6ae0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b6ae54; end: 106b6aeab; -[SCLogInLoggerServices initWithLoginLogger:] */

long FUN_106b6ae54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106b6aeac; end: 106b6aeb3; -[SCLogInLoggerServices loginLogger] */

undefined8 FUN_106b6aeac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b6aeb4; end: 106b6aebf; -[SCLogInLoggerServices .cxx_destruct] */

void FUN_106b6aeb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b6aec0; end: 106b6af83; -[SCRecoverPasswordScope initWithDelegate:uiContainer:usernameOrEmail:] */

undefined1 *
FUN_106b6aec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5248;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b6af84; end: 106b6af9b; -[SCRecoverPasswordScope delegate] */

void FUN_106b6af84(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6af9c; end: 106b6afa3; -[SCRecoverPasswordScope uiContainer] */

undefined8 FUN_106b6af9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b6afa4; end: 106b6afab; -[SCRecoverPasswordScope usernameOrEmail] */

undefined8 FUN_106b6afa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b6afac; end: 106b6afe3; -[SCRecoverPasswordScope .cxx_destruct] */

void FUN_106b6afac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b6afe4; end: 106b6b1db; -[SCPhoneEntryBusinessLogic initWithPhoneNumber:phoneNumberFormatter:phoneEntryContext:userInitialInputLogger:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b6afe4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f5250;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112758ee0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112758ee4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112758ee8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112758eec;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    func_0x00010beac340(puVar1);
    lVar4 = param_3;
    func_0x00010c0fafc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
      func_0x00010bfc45a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c184960(puVar1);
      _objc_release(uVar2);
    }
    else {
      func_0x00010c184960(puVar1);
    }
    _objc_release(lVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010bfc42a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758ef4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112758ef4) = uVar2;
    _objc_release(uVar3);
    lVar4 = param_3;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758ef8);
    *(long *)((long)puVar1 + (long)_DAT_112758ef8) = lVar4;
    _objc_release(uVar2);
    func_0x00010be18a00(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b6b1dc; end: 106b6b257; -[SCPhoneEntryBusinessLogic setCountryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6b1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112758ef0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    lVar2 = (long)_DAT_112758efc;
    _objc_retain(uVar4);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar4;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b6b258; end: 106b6b363; -[SCPhoneEntryBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6b258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d0c90;
  _objc_alloc(PTR_PTR_1126d0c90);
  lVar2 = param_1;
  func_0x00010be1f2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be1f2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112758ef8);
  lVar4 = param_1;
  func_0x00010be1f360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013d60(puVar1,param_2,lVar2,lVar3,uVar5,lVar4,
                      *(undefined8 *)(param_1 + _DAT_112758ef0),
                      *(undefined1 *)(param_1 + _DAT_112758f00),
                      *(undefined1 *)(param_1 + _DAT_112758f04));
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b6b364; end: 106b6b4eb; -[SCPhoneEntryBusinessLogic handleAction:] */

void FUN_106b6b364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106b6b4ec;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b6b584;
  puStack_58 = &UNK_1108450c8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106b6b590;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106b6b5e4;
  puStack_a8 = &UNK_110962d78;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x106b6b5fc;
  puStack_d0 = &UNK_110962d78;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_106b6b614;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_106b6b63c;
  puStack_120 = &UNK_110842e18;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x106b6b644;
  puStack_148 = &UNK_110842e18;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_106b6b64c;
  puStack_170 = &UNK_110842e18;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_106b6b6d0;
  puStack_198 = &UNK_110842e18;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_106b6b6f8;
  puStack_1c0 = &UNK_110842e18;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x106b6b700;
  puStack_1e8 = &UNK_110842e18;
  uStack_1e0 = param_1;
  uStack_1b8 = param_1;
  uStack_190 = param_1;
  uStack_168 = param_1;
  uStack_140 = param_1;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c0fe0(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160,&puStack_188,&puStack_1b0,&puStack_1d8,
                      &puStack_200);
  return;
}



/* Entry: 106b6b4ec; end: 106b6b583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6b4ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be22c80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758f14);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758f14) = uVar1;
  _objc_release(uVar3);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112758f18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0fac80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b6b584; end: 106b6b58f;  */

void FUN_106b6b584(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be27a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleCountryCodeUpdated__112567828,param_2);
  return;
}



/* Entry: 106b6b590; end: 106b6b5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6b590(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758f14);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758f14) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b6b5e4; end: 106b6b613;  */

void FUN_106b6b5e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2de90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handlePhoneDidChange_newPhone_r_112569140,
             param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 106b6b614; end: 106b6b63b;  */

void FUN_106b6b614(long param_1)

{
  func_0x00010be328e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be31310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleSubmit_112569e60);
  return;
}



/* Entry: 106b6b63c; end: 106b6b64b;  */

void FUN_106b6b63c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be26e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleCancelUpdateSuggestedPhon_112567528);
  return;
}



/* Entry: 106b6b64c; end: 106b6b6cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6b64c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010be28880(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126af2d8;
  _objc_alloc(PTR_PTR_1126af2d8);
  func_0x00010c02c420();
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112758f18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0facc0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b6b6d0; end: 106b6b6f7;  */

void FUN_106b6b6d0(long param_1)

{
  func_0x00010be28880(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be31310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleSubmit_112569e60);
  return;
}



/* Entry: 106b6b6f8; end: 106b6b71f;  */

void FUN_106b6b6f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be28890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleDismissRerouteToLoginDial_112567bc0);
  return;
}



/* Entry: 106b6b720; end: 106b6b84f; -[SCPhoneEntryBusinessLogic submitPhone] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6b720(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *(undefined1 *)(param_1 + _DAT_112758f04) = 1;
  *(undefined1 *)(param_1 + _DAT_112758f00) = 0;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126af2d8;
  _objc_alloc(PTR_PTR_1126af2d8);
  func_0x00010c02c420();
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + _DAT_112758f18;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0face0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  return;
}



/* Entry: 106b6b850; end: 106b6b8b7;  */

void FUN_106b6b850(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd1e40();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6b8b8; end: 106b6b8eb; -[SCPhoneEntryBusinessLogic countryCodePickerExited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6b8b8(long param_1)

{
  param_1 = param_1 + _DAT_112758f18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fac60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6b8ec; end: 106b6b94b; -[SCPhoneEntryBusinessLogic countryCodePickerCompletedWithCountryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6b8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf536a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be27a20(param_1,param_2,param_3);
  _objc_release(param_3);
  param_1 = param_1 + _DAT_112758f18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fac60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6b94c; end: 106b6baef; -[SCPhoneEntryBusinessLogic handlePhoneEntryDidSubmitCompletedWithErrorMessage:errorAction:] */

void FUN_106b6b94c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_4 == 0) {
    lVar2 = param_3;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x00010be739c0(param_1);
    }
    else {
      func_0x00010be73900(param_1,param_2,param_3);
    }
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106b6baf0;
    puStack_68 = &UNK_110841f80;
    uStack_60 = param_1;
    _objc_retain(param_3);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106b6bafc;
    puStack_a0 = &UNK_110962dd8;
    uStack_98 = param_1;
    lStack_58 = param_3;
    _objc_retain(param_4);
    lStack_90 = param_4;
    _objc_retain(param_3);
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x106b6bb0c;
    puStack_d0 = &UNK_110962e08;
    uStack_c8 = param_1;
    lStack_88 = param_3;
    _objc_retain(param_3);
    puStack_110 = puVar1;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x106b6bb1c;
    puStack_f8 = &UNK_110842e18;
    puStack_138 = puVar1;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x106b6bb24;
    puStack_120 = &UNK_110962e38;
    uStack_118 = param_1;
    uStack_f0 = param_1;
    lStack_c0 = param_3;
    func_0x00010c0bfd00(param_4,param_2,&puStack_80,&puStack_b8,&puStack_e8,&puStack_110,
                        &puStack_138);
    _objc_release(lStack_c0);
    _objc_release(lStack_88);
    _objc_release(lStack_90);
    _objc_release(lStack_58);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b6baf0; end: 106b6bb2b;  */

void FUN_106b6baf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be73910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__phoneSubmitFailed__11257a7e0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106b6bb2c; end: 106b6bb7b; -[SCPhoneEntryBusinessLogic _phoneSubmitSucceeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6bb2c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112758f04) = 0;
  *(undefined1 *)(param_1 + _DAT_112758f00) = 1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6bb7c; end: 106b6bbcb; -[SCPhoneEntryBusinessLogic _phoneSubmitWithVerifiedNumberAndShowRerouteToLoginDiaLog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6bb7c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112758f04) = 0;
  *(undefined1 *)(param_1 + _DAT_112758f08) = 1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6bbcc; end: 106b6bc7b; -[SCPhoneEntryBusinessLogic _phoneSubmitFailedWithPhoneNumberSuggestionInfo:errorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6bbcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + _DAT_112758f00) = 0;
  *(undefined1 *)(param_1 + _DAT_112758f04) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758f0c);
  *(undefined8 *)(param_1 + _DAT_112758f0c) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758f1c);
  *(undefined8 *)(param_1 + _DAT_112758f1c) = param_3;
  _objc_release(uVar1);
  _objc_release(param_4);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6bc7c; end: 106b6bd2b; -[SCPhoneEntryBusinessLogic _phoneSubmitFailedWithErrorAction:errorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6bc7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + _DAT_112758f00) = 0;
  *(undefined1 *)(param_1 + _DAT_112758f04) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758f0c);
  *(undefined8 *)(param_1 + _DAT_112758f0c) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758f10);
  *(undefined8 *)(param_1 + _DAT_112758f10) = param_3;
  _objc_release(uVar1);
  _objc_release(param_4);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6bd2c; end: 106b6bd9b; -[SCPhoneEntryBusinessLogic _phoneSubmitFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6bd2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112758f00) = 0;
  *(undefined1 *)(param_1 + _DAT_112758f04) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758f0c);
  *(undefined8 *)(param_1 + _DAT_112758f0c) = param_3;
  _objc_release(uVar1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6bd9c; end: 106b6bdeb; -[SCPhoneEntryBusinessLogic _phoneSubmitReturnedLoginCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6bd9c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112758f04) = 0;
  *(undefined1 *)(param_1 + _DAT_112758f00) = 1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6bdec; end: 106b6be43; -[SCPhoneEntryBusinessLogic _getSortedPhoneCountryCodes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6bdec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758ee0);
  func_0x00010bfc8c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106b6be44; end: 106b6bec7;  */

undefined8 FUN_106b6be44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf53640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf53640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106b6bec8; end: 106b6bf87; -[SCPhoneEntryBusinessLogic _handlePhoneDidChange:newPhone:range:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6bec8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be57980(param_1,param_2,5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758ee0);
  func_0x00010bfb5d80(uVar1,param_2,param_3,param_4,param_5,param_6,
                      *(undefined8 *)(param_1 + _DAT_112758efc),
                      *(undefined8 *)(param_1 + _DAT_112758f20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010be81ca0(param_1,param_2,uVar1);
  func_0x00010be085c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b6bf88; end: 106b6c02b; -[SCPhoneEntryBusinessLogic _handleCountryCodeUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6bf88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010be57980(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758f14);
  *(undefined8 *)(param_1 + _DAT_112758f14) = 0;
  _objc_release(uVar1);
  func_0x00010c184960(param_1);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758ee0);
  func_0x00010bfc42a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758ef4);
  *(undefined8 *)(param_1 + _DAT_112758ef4) = uVar1;
  _objc_release(uVar2);
  func_0x00010be18a00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be085d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitUpdatesToViewModelAndDelega_11255fb10);
  return;
}



/* Entry: 106b6c02c; end: 106b6c09f; -[SCPhoneEntryBusinessLogic _handleSubmit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c02c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af2d8;
  _objc_alloc(PTR_PTR_1126af2d8);
  func_0x00010c02c420();
  param_1 = param_1 + _DAT_112758f18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0faca0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b6c0a0; end: 106b6c1b7; -[SCPhoneEntryBusinessLogic _handleCountryCodeDidChange:newCountryCode:range:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c0a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be57980(param_1,param_2,4);
  lVar3 = (long)_DAT_112758ee0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = param_3;
  func_0x00010c25cf80(param_3,param_2,param_5,param_6,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bfb5880(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + lVar3);
  func_0x00010bfc4220(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + _DAT_112758f00) = 0;
  }
  func_0x00010c184960(param_1,param_2,lVar3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758ef4);
  *(undefined8 *)(param_1 + _DAT_112758ef4) = uVar2;
  _objc_release(uVar1);
  func_0x00010be18a00(param_1);
  func_0x00010be085c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106b6c1b8; end: 106b6c303; -[SCPhoneEntryBusinessLogic _handleUpdatePhoneNumberWithSuggestedPhoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c1b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112758f1c;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c261f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed98;
  func_0x00010bf9ed60(PTR_PTR_1126aed98,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar2;
    func_0x00010c0cf3c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c0fafc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112758ee0);
  func_0x00010bfb5d60(uVar3,param_2,uVar1,puVar7,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112758f18;
  _objc_loadWeakRetained(lVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c2626e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fae60(lVar4,param_2,uVar5,1);
  _objc_release(uVar5);
  _objc_release(lVar4);
  func_0x00010be81ca0(param_1,param_2,uVar3);
  func_0x00010be085c0(param_1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106b6c304; end: 106b6c3a3; -[SCPhoneEntryBusinessLogic _handleCancelUpdateSuggestedPhoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c304(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_112758f18;
  _objc_loadWeakRetained(lVar1);
  lVar3 = (long)_DAT_112758f1c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c2626e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fae60(lVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6c3a4; end: 106b6c3f3; -[SCPhoneEntryBusinessLogic _handleExitErrorActionDialogToUpdatePhoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c3a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758f10);
  *(undefined8 *)(param_1 + _DAT_112758f10) = 0;
  _objc_release(uVar1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6c3f4; end: 106b6c443; -[SCPhoneEntryBusinessLogic _handleDismissRerouteToLoginDialog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c3f4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112758f08) = 0;
  *(undefined1 *)(param_1 + _DAT_112758f00) = 1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6c444; end: 106b6c483; -[SCPhoneEntryBusinessLogic _getFormattedCountryName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c444(long param_1)

{
  if (*(long *)(param_1 + _DAT_112758ef0) != 0) {
    func_0x00010bfc5c60(*(undefined8 *)(param_1 + _DAT_112758ee0));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6c484; end: 106b6c4db; -[SCPhoneEntryBusinessLogic _getFormattedCountryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c484(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + _DAT_112758ef0) == 0) {
    func_0x00010bfb5880(*(undefined8 *)(param_1 + _DAT_112758ee0),param_2,
                        *(undefined8 *)(param_1 + _DAT_112758ef4));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfc42a0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6c4dc; end: 106b6c547; -[SCPhoneEntryBusinessLogic _getFormattedSuggestedPhoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c4dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126aed98;
  lVar1 = *(long *)(param_1 + _DAT_112758f1c);
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c261f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5b60(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6c548; end: 106b6c5a7; -[SCPhoneEntryBusinessLogic _formatCurrentPhoneNumberWithLastValidCountryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c548(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758ee0);
  func_0x00010bfb5d60(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_112758ef8),
                      *(undefined8 *)(param_1 + _DAT_112758efc),
                      *(undefined8 *)(param_1 + _DAT_112758f20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be81ca0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b6c5a8; end: 106b6c66f; -[SCPhoneEntryBusinessLogic _processPhoneNumberFormatResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c5a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106b6c670;
  puStack_30 = &UNK_1108450c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b6c6dc;
  puStack_58 = &UNK_110848958;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106b6c7b4;
  puStack_80 = &UNK_1108450c8;
  lStack_78 = param_1;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0c13a0(param_3,param_2,&puStack_48,&puStack_70,&puStack_98);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758f0c);
  *(undefined8 *)(param_1 + _DAT_112758f0c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758f1c);
  *(undefined8 *)(param_1 + _DAT_112758f1c) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 106b6c670; end: 106b6c6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c670(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758ef0);
  func_0x00010c08fa60();
  *(bool *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758f00) = lVar1 != 0;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758ef8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758ef8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b6c6dc; end: 106b6c7b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c6dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758f00) = 1;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758ef8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758ef8) = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf536a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184960(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf53380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758ef4);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758ef4) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b6c7b4; end: 106b6c7ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c7b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758f00) = 0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758ef8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758ef8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b6c800; end: 106b6c893; -[SCPhoneEntryBusinessLogic _emitUpdatesToViewModelAndDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c800(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112758f18;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR_PTR_1126af2d8;
  _objc_alloc(PTR_PTR_1126af2d8);
  func_0x00010c02c420();
  func_0x00010c0fad00(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6c894; end: 106b6cac7; -[SCPhoneEntryBusinessLogic _setupDynamicPhoneLengthLimit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6c894(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_112758ee4;
  ppuVar1 = *(undefined ***)(param_1 + lVar9);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e75698;
  func_0x00010bf1f440(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e75698,0,0);
  if ((int)ppuVar1 != 0) {
    ppuVar2 = *(undefined ***)(param_1 + lVar9);
    func_0x00010c1195e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    puVar3 = PTR_PTR_1126d0c98;
    _objc_alloc();
    lStack_f8 = 0;
    ppuVar2 = ppuVar1;
    func_0x00010c008360();
    lVar9 = lStack_f8;
    _objc_retain(lStack_f8);
    if (lVar9 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lVar14 = (long)_DAT_112758f20;
      uVar8 = *(undefined8 *)(param_1 + lVar14);
      *(undefined **)(param_1 + lVar14) = puVar4;
      _objc_release(uVar8);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      puStack_140 = (undefined *)0x0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      puVar4 = puVar3;
      func_0x00010bf464e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &puStack_140;
      puVar5 = puVar4;
      func_0x00010bf52a60();
      if (puVar5 != (undefined *)0x0) {
        lVar12 = *plStack_130;
        do {
          puVar10 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar12) {
              _objc_enumerationMutation(puVar4);
            }
            lVar13 = *(long *)(lStack_138 + (long)puVar10 * 8);
            lVar6 = lVar13;
            func_0x00010bf53220();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c08fa60();
            _objc_release(lVar6);
            if (lVar7 != 0) {
              uVar8 = *(undefined8 *)(param_1 + lVar14);
              func_0x00010bf53220(lVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c220220(uVar8);
              _objc_release(lVar13);
            }
            puVar10 = puVar10 + 1;
          } while (puVar5 != puVar10);
          ppuVar2 = &puStack_140;
          puVar5 = puVar4;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined *)0x0);
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(lVar9);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  iVar11 = (int)*(undefined8 *)((long)ppuVar1 + (long)_DAT_112758ee8);
  puVar3 = PTR_PTR_1126af2e0;
  func_0x00010c2940c0(PTR_PTR_1126af2e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0();
  _objc_release(puVar3);
  if (iVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0b2ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)((long)ppuVar1 + (long)_DAT_112758eec),
               PTR_s_logUserInitialInputIfNeededWithF_11260a4c0,ppuVar2);
    return;
  }
  return;
}



/* Entry: 106b6cac8; end: 106b6cb4f; -[SCPhoneEntryBusinessLogic _logRegistrationUserInitialInputIfNeededWithField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6cac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_112758ee8);
  puVar1 = PTR_PTR_1126af2e0;
  func_0x00010c2940c0(PTR_PTR_1126af2e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0b2ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112758eec),
               PTR_s_logUserInitialInputIfNeededWithF_11260a4c0,param_3);
    return;
  }
  return;
}



/* Entry: 106b6cb50; end: 106b6cb6f; -[SCPhoneEntryBusinessLogic delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6cb50(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112758f18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6cb70; end: 106b6cb83; -[SCPhoneEntryBusinessLogic setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6cb70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112758f18,param_3);
  return;
}



/* Entry: 106b6cb84; end: 106b6cb93; -[SCPhoneEntryBusinessLogic countryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b6cb84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758ef0);
}



/* Entry: 106b6cb94; end: 106b6cc8f; -[SCPhoneEntryBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6cb94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758ef0,0);
  _objc_destroyWeak(param_1 + _DAT_112758f18);
  _objc_storeStrong(param_1 + _DAT_112758f14,0);
  _objc_storeStrong(param_1 + _DAT_112758f0c,0);
  _objc_storeStrong(param_1 + _DAT_112758f10,0);
  _objc_storeStrong(param_1 + _DAT_112758f1c,0);
  _objc_storeStrong(param_1 + _DAT_112758ef8,0);
  _objc_storeStrong(param_1 + _DAT_112758ef4,0);
  _objc_storeStrong(param_1 + _DAT_112758efc,0);
  _objc_storeStrong(param_1 + _DAT_112758f20,0);
  _objc_storeStrong(param_1 + _DAT_112758eec,0);
  _objc_storeStrong(param_1 + _DAT_112758ee8,0);
  _objc_storeStrong(param_1 + _DAT_112758ee4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758ee0,0);
  return;
}



/* Entry: 106b6cc90; end: 106b6ccdb; +[SCPhoneEntryAction cancelUpdateSuggestedPhoneNumber] */

void FUN_106b6cc90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af280;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6ccdc; end: 106b6cd27; +[SCPhoneEntryAction confirmRerouteToLogIn] */

void FUN_106b6ccdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af280;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6cd28; end: 106b6cd73; +[SCPhoneEntryAction confirmToExitDialogAndUpdatePhoneNumber] */

void FUN_106b6cd28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af280;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


