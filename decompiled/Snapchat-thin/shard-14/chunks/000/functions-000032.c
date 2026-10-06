/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af39b3c; end: 10af39b5b;  */

void FUN_10af39b3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10af39b5c; end: 10af39bcf; -[SCInAppWarningServices initWithWarningProvider:] */

undefined1 * FUN_10af39b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702950;
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



/* Entry: 10af39bd0; end: 10af39bd7; -[SCInAppWarningServices warningProvider] */

undefined8 FUN_10af39bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af39bd8; end: 10af39be3; -[SCInAppWarningServices .cxx_destruct] */

void FUN_10af39bd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af39be4; end: 10af39beb; -[SCSnapTokenObservableServices refreshTokenUpdates] */

undefined8 FUN_10af39be4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af39bec; end: 10af39bf3; -[SCSnapTokenObservableServices cloud1TLTokenUpdates] */

undefined8 FUN_10af39bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af39bf4; end: 10af39c23; -[SCSnapTokenObservableServices .cxx_destruct] */

void FUN_10af39bf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af39c24; end: 10af39c97; -[SCUserSessionValidationServices initWithValidator:] */

undefined1 * FUN_10af39c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702960;
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



/* Entry: 10af39c98; end: 10af39c9f; -[SCUserSessionValidationServices userSessionValidator] */

undefined8 FUN_10af39c98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af39ca0; end: 10af39cab; -[SCUserSessionValidationServices .cxx_destruct] */

void FUN_10af39ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af39cac; end: 10af39cb7; -[SCContactPhotosServices .cxx_destruct] */

void FUN_10af39cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af39cb8; end: 10af39d2b; -[SCExternalLinkSendingServices initWithExternalLinkSendingService:] */

undefined1 * FUN_10af39cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702970;
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



/* Entry: 10af39d2c; end: 10af39d33; -[SCExternalLinkSendingServices externalLinkSendingService] */

undefined8 FUN_10af39d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af39d34; end: 10af39d63; -[SCExternalLinkSendingServices setExternalLinkSendingService:] */

void FUN_10af39d34(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af39d64; end: 10af39d6b; -[SCExternalLinkSendingServices externalApplicationSendingService] */

undefined8 FUN_10af39d64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af39d6c; end: 10af39d9b; -[SCExternalLinkSendingServices setExternalApplicationSendingService:] */

void FUN_10af39d6c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af39d9c; end: 10af39dcb; -[SCExternalLinkSendingServices .cxx_destruct] */

void FUN_10af39d9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af39dcc; end: 10af39e77; -[SCExternalApplicationPayload initWithTextConfiguration:mediaConfiguration:] */

undefined1 *
FUN_10af39dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702978;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 10af39e78; end: 10af39e9b; -[SCExternalApplicationPayload copyWithZone:] */

undefined8 FUN_10af39e78(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af39e9c; end: 10af39f0f; -[SCExternalApplicationPayload hash] */

undefined8 * FUN_10af39e9c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af39f90:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af39f9c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af39f9c;
        }
        goto LAB_10af39f90;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af39f9c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af39f10; end: 10af39fb7; -[SCExternalApplicationPayload isEqual:] */

long FUN_10af39f10(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af39f90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af39f9c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af39f9c;
        }
        goto LAB_10af39f90;
      }
    }
    lVar3 = 0;
  }
LAB_10af39f9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af39fb8; end: 10af39fbf; -[SCExternalApplicationPayload textConfiguration] */

undefined8 FUN_10af39fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af39fc0; end: 10af39fc7; -[SCExternalApplicationPayload mediaConfiguration] */

undefined8 FUN_10af39fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af39fc8; end: 10af39ff7; -[SCExternalApplicationPayload .cxx_destruct] */

void FUN_10af39fc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af39ff8; end: 10af3a083; -[SCExternalApplicationAttribution initWithUiType:shareSource:sessionId:] */

undefined1 *
FUN_10af39ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112702980;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3a084; end: 10af3a0a7; -[SCExternalApplicationAttribution copyWithZone:] */

undefined8 FUN_10af3a084(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3a0a8; end: 10af3a10b; -[SCExternalApplicationAttribution hash] */

undefined8 * FUN_10af3a0a8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af3a1a0;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10af3a1a0;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10af3a1a0;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10af3a1a0:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10af3a10c; end: 10af3a1bb; -[SCExternalApplicationAttribution isEqual:] */

long FUN_10af3a10c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3a1a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_10af3a1a0;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10af3a1a0;
    }
  }
  lVar3 = 1;
LAB_10af3a1a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3a1bc; end: 10af3a1c3; -[SCExternalApplicationAttribution uiType] */

undefined8 FUN_10af3a1bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3a1c4; end: 10af3a1cb; -[SCExternalApplicationAttribution shareSource] */

undefined8 FUN_10af3a1c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3a1cc; end: 10af3a1d3; -[SCExternalApplicationAttribution sessionId] */

undefined8 FUN_10af3a1cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3a1d4; end: 10af3a1df; -[SCExternalApplicationAttribution .cxx_destruct] */

void FUN_10af3a1d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af3a1e0; end: 10af3a1e7; -[SCExternalMediaLinkSendingServices externalMediaLinkSendingService] */

undefined8 FUN_10af3a1e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3a1e8; end: 10af3a1f3; -[SCExternalMediaLinkSendingServices .cxx_destruct] */

void FUN_10af3a1e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3a1f4; end: 10af3a283; +[SCExternalLinkSendingMedia imageWithImage:lensId:] */

void FUN_10af3a1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c3840;
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
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af3a284; end: 10af3a31b; +[SCExternalLinkSendingMedia videoWithVideo:lensId:] */

void FUN_10af3a284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c3840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af3a31c; end: 10af3a4ff; -[SCExternalLinkSendingMedia initWithCoder:] */

undefined8 * FUN_10af3a31c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_70 = PTR_PTR_112702990;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_10af3a48c;
      uVar5 = 1;
      lVar6 = 0x28;
      lVar7 = 0x20;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x18;
      lVar7 = 0x10;
    }
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(ulong *)((long)puVar1 + lVar7) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10af3a48c:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10af3a500; end: 10af3a523; -[SCExternalLinkSendingMedia copyWithZone:] */

undefined8 FUN_10af3a500(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3a524; end: 10af3a5e3; -[SCExternalLinkSendingMedia encodeWithCoder:] */

void FUN_10af3a524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc6f98;
    ppuVar4 = &PTR____CFConstantStringClassReference_110f390d8;
    lVar5 = 0x18;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e892b8;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_10af3a5cc;
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc6fd8;
    ppuVar4 = &PTR____CFConstantStringClassReference_110f39118;
    lVar5 = 0x28;
    lVar2 = 0x20;
    ppuVar1 = &PTR____CFConstantStringClassReference_110f390f8;
  }
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar5),ppuVar4);
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_10af3a5cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af3a5e4; end: 10af3a673; -[SCExternalLinkSendingMedia hash] */

void FUN_10af3a5e4(long param_1)

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
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112702990;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af3a674; end: 10af3a6b7; -[SCExternalLinkSendingMedia internalInit] */

void FUN_10af3a674(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112702990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af3a6b8; end: 10af3a79f; -[SCExternalLinkSendingMedia isEqual:] */

long FUN_10af3a6b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3a778:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3a784;
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
              goto LAB_10af3a784;
            }
            goto LAB_10af3a778;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af3a784:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3a7a0; end: 10af3a82f; -[SCExternalLinkSendingMedia matchImage:video:] */

void FUN_10af3a7a0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10af3a814;
    lVar2 = 0x28;
    lVar3 = 0x20;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10af3a814;
    lVar2 = 0x18;
    lVar3 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))
            (lVar1,*(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_1 + lVar2));
LAB_10af3a814:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af3a830; end: 10af3a877; -[SCExternalLinkSendingMedia .cxx_destruct] */

void FUN_10af3a830(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af3a878; end: 10af3a94f; -[SCMediaLink initWithLongURL:shortLink:linkId:] */

undefined1 *
FUN_10af3a878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112702998;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3a950; end: 10af3a973; -[SCMediaLink copyWithZone:] */

undefined8 FUN_10af3a950(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3a974; end: 10af3a9f3; -[SCMediaLink hash] */

undefined8 * FUN_10af3a974(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af3aa8c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af3aa98;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10af3aa98;
          }
          goto LAB_10af3aa8c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af3aa98:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af3a9f4; end: 10af3aab3; -[SCMediaLink isEqual:] */

long FUN_10af3a9f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3aa8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3aa98;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10af3aa98;
          }
          goto LAB_10af3aa8c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af3aa98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3aab4; end: 10af3aabb; -[SCMediaLink longURL] */

undefined8 FUN_10af3aab4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3aabc; end: 10af3aac3; -[SCMediaLink shortLink] */

undefined8 FUN_10af3aabc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3aac4; end: 10af3aacb; -[SCMediaLink linkId] */

undefined8 FUN_10af3aac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3aacc; end: 10af3ab07; -[SCMediaLink .cxx_destruct] */

void FUN_10af3aacc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3ab08; end: 10af3ab7b; -[SCInviteContactSectionLoggerServices initWithInviteContactSectionLogger:] */

undefined1 * FUN_10af3ab08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127029a0;
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



/* Entry: 10af3ab7c; end: 10af3ab83; -[SCInviteContactSectionLoggerServices inviteContactSectionLogger] */

undefined8 FUN_10af3ab7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3ab84; end: 10af3ab8f; -[SCInviteContactSectionLoggerServices .cxx_destruct] */

void FUN_10af3ab84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3ab90; end: 10af3ab9b; -[SCInviteServices .cxx_destruct] */

void FUN_10af3ab90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3ab9c; end: 10af3ac6f; -[SCInviteCreateRequest initWithInviteId:resourceId:inviteType:creatorType:payloadType:inviteAction:] */

undefined1 *
FUN_10af3ab9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1127029b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3ac70; end: 10af3ac93; -[SCInviteCreateRequest copyWithZone:] */

undefined8 FUN_10af3ac70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3ac94; end: 10af3ad1f; -[SCInviteCreateRequest hash] */

undefined8 * FUN_10af3ac94(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  puVar3 = &uStack_58;
  uStack_50 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af3ade0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af3adec;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])) && (puVar3[5] == param_3[5])))) &&
       (puVar3[6] == param_3[6])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af3adec;
        }
        goto LAB_10af3ade0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af3adec:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af3ad20; end: 10af3ae07; -[SCInviteCreateRequest isEqual:] */

long FUN_10af3ad20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3ade0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3adec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af3adec;
        }
        goto LAB_10af3ade0;
      }
    }
    lVar3 = 0;
  }
LAB_10af3adec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3ae08; end: 10af3ae0f; -[SCInviteCreateRequest inviteId] */

undefined8 FUN_10af3ae08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3ae10; end: 10af3ae17; -[SCInviteCreateRequest resourceId] */

undefined8 FUN_10af3ae10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3ae18; end: 10af3ae1f; -[SCInviteCreateRequest inviteType] */

undefined8 FUN_10af3ae18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3ae20; end: 10af3ae27; -[SCInviteCreateRequest creatorType] */

undefined8 FUN_10af3ae20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3ae28; end: 10af3ae2f; -[SCInviteCreateRequest payloadType] */

undefined8 FUN_10af3ae28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af3ae30; end: 10af3ae37; -[SCInviteCreateRequest inviteAction] */

undefined8 FUN_10af3ae30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af3ae38; end: 10af3ae67; -[SCInviteCreateRequest .cxx_destruct] */

void FUN_10af3ae38(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3ae68; end: 10af3aedf; -[SCInviteDeleteRequest initWithResourceId:] */

undefined1 * FUN_10af3ae68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127029b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3aee0; end: 10af3af03; -[SCInviteDeleteRequest copyWithZone:] */

undefined8 FUN_10af3aee0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3af04; end: 10af3af0b; -[SCInviteDeleteRequest hash] */

void FUN_10af3af04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af3af0c; end: 10af3af9b; -[SCInviteDeleteRequest isEqual:] */

long FUN_10af3af0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3af80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10af3af80;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af3af80;
    }
  }
  lVar3 = 1;
LAB_10af3af80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3af9c; end: 10af3afa3; -[SCInviteDeleteRequest resourceId] */

undefined8 FUN_10af3af9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3afa4; end: 10af3afaf; -[SCInviteDeleteRequest .cxx_destruct] */

void FUN_10af3afa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3afb0; end: 10af3b063; -[SCInviteFetchResponse initWithInviteUserId:openCount:remoteDeepLinkHash:] */

undefined1 *
FUN_10af3afb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1127029c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3b064; end: 10af3b087; -[SCInviteFetchResponse copyWithZone:] */

undefined8 FUN_10af3b064(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3b088; end: 10af3b0ff; -[SCInviteFetchResponse hash] */

undefined8 * FUN_10af3b088(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af3b190:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af3b19c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af3b19c;
        }
        goto LAB_10af3b190;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af3b19c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af3b100; end: 10af3b1b7; -[SCInviteFetchResponse isEqual:] */

long FUN_10af3b100(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3b190:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3b19c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af3b19c;
        }
        goto LAB_10af3b190;
      }
    }
    lVar3 = 0;
  }
LAB_10af3b19c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3b1b8; end: 10af3b1bf; -[SCInviteFetchResponse inviteUserId] */

undefined8 FUN_10af3b1b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3b1c0; end: 10af3b1c7; -[SCInviteFetchResponse openCount] */

undefined8 FUN_10af3b1c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3b1c8; end: 10af3b1cf; -[SCInviteFetchResponse remoteDeepLinkHash] */

undefined8 FUN_10af3b1c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3b1d0; end: 10af3b1ff; -[SCInviteFetchResponse .cxx_destruct] */

void FUN_10af3b1d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3b200; end: 10af3b277; -[SCInviteCreateResponse initWithInviteId:] */

undefined1 * FUN_10af3b200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127029c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3b278; end: 10af3b29b; -[SCInviteCreateResponse copyWithZone:] */

undefined8 FUN_10af3b278(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3b29c; end: 10af3b2a3; -[SCInviteCreateResponse hash] */

void FUN_10af3b29c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af3b2a4; end: 10af3b333; -[SCInviteCreateResponse isEqual:] */

long FUN_10af3b2a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3b318;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10af3b318;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af3b318;
    }
  }
  lVar3 = 1;
LAB_10af3b318:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3b334; end: 10af3b33b; -[SCInviteCreateResponse inviteId] */

undefined8 FUN_10af3b334(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3b33c; end: 10af3b347; -[SCInviteCreateResponse .cxx_destruct] */

void FUN_10af3b33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3b348; end: 10af3b40f; -[SCInviteJoinRequest initWithInviteId:resourceId:inviteAction:inviteType:payloadType:] */

undefined1 *
FUN_10af3b348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1127029d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3b410; end: 10af3b433; -[SCInviteJoinRequest copyWithZone:] */

undefined8 FUN_10af3b410(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3b434; end: 10af3b4c3; -[SCInviteJoinRequest hash] */

undefined8 * FUN_10af3b434(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_48 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af3b574:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af3b580;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af3b580;
        }
        goto LAB_10af3b574;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af3b580:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af3b4c4; end: 10af3b59b; -[SCInviteJoinRequest isEqual:] */

long FUN_10af3b4c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3b574:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af3b580;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af3b580;
        }
        goto LAB_10af3b574;
      }
    }
    lVar3 = 0;
  }
LAB_10af3b580:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af3b59c; end: 10af3b5a3; -[SCInviteJoinRequest inviteId] */

undefined8 FUN_10af3b59c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3b5a4; end: 10af3b5ab; -[SCInviteJoinRequest resourceId] */

undefined8 FUN_10af3b5a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af3b5ac; end: 10af3b5b3; -[SCInviteJoinRequest inviteAction] */

undefined8 FUN_10af3b5ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af3b5b4; end: 10af3b5bb; -[SCInviteJoinRequest inviteType] */

undefined8 FUN_10af3b5b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af3b5bc; end: 10af3b5c3; -[SCInviteJoinRequest payloadType] */

undefined8 FUN_10af3b5bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af3b5c4; end: 10af3b5f3; -[SCInviteJoinRequest .cxx_destruct] */

void FUN_10af3b5c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3b5f4; end: 10af3b5ff; -[SCOffPlatformLinkGenerationServices .cxx_destruct] */

void FUN_10af3b5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3b600; end: 10af3b70b; -[SCOffPlatformLensLink initWithLensId:lensUrl:lensName:lensData:] */

undefined1 *
FUN_10af3b600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127029e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af3b70c; end: 10af3b72f; -[SCOffPlatformLensLink copyWithZone:] */

undefined8 FUN_10af3b70c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


