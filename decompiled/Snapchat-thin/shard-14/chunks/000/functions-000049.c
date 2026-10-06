/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af61970; end: 10af61977; -[SCNotificationOSSettingsInfo scheduledDeliverySetting] */

undefined8 FUN_10af61970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10af61978; end: 10af61983; -[SCNotificationReportingServices .cxx_destruct] */

void FUN_10af61978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af61984; end: 10af619f7; -[SCInternalDistributeService initWithInternalDistributor:] */

undefined1 * FUN_10af61984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702d98;
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



/* Entry: 10af619f8; end: 10af619ff; -[SCInternalDistributeService internalDistributor] */

undefined8 FUN_10af619f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af61a00; end: 10af61a0b; -[SCInternalDistributeService .cxx_destruct] */

void FUN_10af61a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af61a0c; end: 10af61a7f; -[SCInternalDistributeServiceWrapper initWithInternalDistributeService:] */

undefined1 * FUN_10af61a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702da0;
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



/* Entry: 10af61a80; end: 10af61a87; -[SCInternalDistributeServiceWrapper internalDistributeService] */

undefined8 FUN_10af61a80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af61a88; end: 10af61a93; -[SCInternalDistributeServiceWrapper .cxx_destruct] */

void FUN_10af61a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af61a94; end: 10af61b07; -[SCPasswordHashStorageServices initWithPasswordHashRepository:] */

undefined1 * FUN_10af61a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702da8;
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



/* Entry: 10af61b08; end: 10af61b0f; -[SCPasswordHashStorageServices passwordHashRepository] */

undefined8 FUN_10af61b08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af61b10; end: 10af61b1b; -[SCPasswordHashStorageServices .cxx_destruct] */

void FUN_10af61b10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af61b1c; end: 10af61bf3; -[SCPasswordHash initWithCoder:] */

undefined1 * FUN_10af61b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702db0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af61bf4; end: 10af61cb7; -[SCPasswordHash initWithUserId:passwordHash:passwordLength:ASCII:] */

undefined1 *
FUN_10af61bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112702db0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af61cb8; end: 10af61cdb; -[SCPasswordHash copyWithZone:] */

undefined8 FUN_10af61cb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af61cdc; end: 10af61d63; -[SCPasswordHash encodeWithCoder:] */

void FUN_10af61cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110de81d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dd1e18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f3d358);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f3d378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af61d64; end: 10af61de3; -[SCPasswordHash hash] */

undefined8 * FUN_10af61d64(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af61e84:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af61e90;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((puVar3[4] == param_3[4] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10af61e90;
        }
        goto LAB_10af61e84;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af61e90:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af61de4; end: 10af61eab; -[SCPasswordHash isEqual:] */

long FUN_10af61de4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af61e84:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af61e90;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10af61e90;
        }
        goto LAB_10af61e84;
      }
    }
    lVar3 = 0;
  }
LAB_10af61e90:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af61eac; end: 10af61eb3; -[SCPasswordHash userId] */

undefined8 FUN_10af61eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af61eb4; end: 10af61ebb; -[SCPasswordHash passwordHash] */

undefined8 FUN_10af61eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af61ebc; end: 10af61ec3; -[SCPasswordHash passwordLength] */

undefined8 FUN_10af61ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af61ec4; end: 10af61ecb; -[SCPasswordHash ASCII] */

undefined1 FUN_10af61ec4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af61ecc; end: 10af61efb; -[SCPasswordHash .cxx_destruct] */

void FUN_10af61ecc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af61efc; end: 10af61f07; -[SCPagePageViewReporterServices .cxx_destruct] */

void FUN_10af61efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af61f08; end: 10af61f13; -[SCDeferredDeepLinkStorageServices .cxx_destruct] */

void FUN_10af61f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af61f14; end: 10af61fc7; -[SCDeferredDeepLinkData initWithDeepLinkURL:sourceApplication:handlingId:] */

undefined1 *
FUN_10af61f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112702dc8;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af61fc8; end: 10af61feb; -[SCDeferredDeepLinkData copyWithZone:] */

undefined8 FUN_10af61fc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af61fec; end: 10af6206b; -[SCDeferredDeepLinkData hash] */

undefined8 * FUN_10af61fec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af620fc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af62108;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af62108;
        }
        goto LAB_10af620fc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af62108:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af6206c; end: 10af62123; -[SCDeferredDeepLinkData isEqual:] */

long FUN_10af6206c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af620fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af62108;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af62108;
        }
        goto LAB_10af620fc;
      }
    }
    lVar3 = 0;
  }
LAB_10af62108:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af62124; end: 10af6212b; -[SCDeferredDeepLinkData deepLinkURL] */

undefined8 FUN_10af62124(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af6212c; end: 10af62133; -[SCDeferredDeepLinkData sourceApplication] */

undefined8 FUN_10af6212c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af62134; end: 10af6213b; -[SCDeferredDeepLinkData handlingId] */

undefined8 FUN_10af62134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af6213c; end: 10af6216b; -[SCDeferredDeepLinkData .cxx_destruct] */

void FUN_10af6213c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af6216c; end: 10af62177; -[SCLegacyWarmStartupInitiatorServices .cxx_destruct] */

void FUN_10af6216c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af62178; end: 10af62223; -[SCWarmStartupInitiatorImpl beginWarmStartup:] */

void FUN_10af62178(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126deba8;
  _objc_alloc(PTR_PTR_1126deba8);
  func_0x00010c00c640();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10af62224; end: 10af6222b; -[SCWarmStartupInitiatorImpl .cxx_destruct] */

void FUN_10af62224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10af6222c; end: 10af6227b; -[SCLegacyWarmStartupScope initWithDidLaunchWhenProtectedDataUnavailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af6222c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702de0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112787458) = param_3;
  }
  return;
}



/* Entry: 10af6227c; end: 10af6228b; -[SCLegacyWarmStartupScope didLaunchWhenProtectedDataUnavailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10af6227c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112787458);
}



/* Entry: 10af6228c; end: 10af62293; -[SCStoriesMetricServices postingLogger] */

undefined8 FUN_10af6228c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af62294; end: 10af6229b; -[SCStoriesMetricServices upNextGrapheneMetricsEmitter] */

undefined8 FUN_10af62294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af6229c; end: 10af622a3; -[SCStoriesMetricServices syncCacheGrapheneMetricsEmitter] */

undefined8 FUN_10af6229c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af622a4; end: 10af622ab; -[SCStoriesMetricServices feedCardGrapheneMetricsEmitter] */

undefined8 FUN_10af622a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af622ac; end: 10af62317; -[SCStoriesMetricServices .cxx_destruct] */

void FUN_10af622ac(long param_1)

{
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



/* Entry: 10af62318; end: 10af6237f; +[MFCBatchGetFeedCardsByOwnersRequest descriptor] */

void FUN_10af62318(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0c88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c291f0,
                        &PTR____CFConstantStringClassReference_110f3d398,&PTR_DAT_11333d460,
                        &PTR_DAT_11333d4d8,6,0x28,0x1c);
    puRam00000001137f0c88 = puVar1;
  }
  return;
}



/* Entry: 10af62380; end: 10af623e7; +[MFCFeedCardsByOwner descriptor] */

void FUN_10af62380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0c90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29240,
                        &PTR____CFConstantStringClassReference_110f3d3b8,&PTR_DAT_11333d460,
                        &PTR_s_ownerId_11333d498,2,0x18,0x1c);
    puRam00000001137f0c90 = puVar1;
  }
  return;
}



/* Entry: 10af623e8; end: 10af6244f; +[MFCBatchGetFeedCardsByOwnersResponse descriptor] */

void FUN_10af623e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0c98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29290,
                        &PTR____CFConstantStringClassReference_110f3d3d8,&PTR_DAT_11333d460,
                        &PTR_DAT_11333d478,1,0x10,0x1c);
    puRam00000001137f0c98 = puVar1;
  }
  return;
}



/* Entry: 10af62450; end: 10af624b7; +[MFCAdMetadata descriptor] */

void FUN_10af62450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0ca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29330,
                        &PTR____CFConstantStringClassReference_110f3d3f8,&PTR_DAT_11333d598,
                        &PTR_DAT_11333d6f0,0xd,0x50,0x1c);
    puRam00000001137f0ca0 = puVar1;
  }
  return;
}



/* Entry: 10af624b8; end: 10af62533; +[MFCAdMetadata_DebugConfig descriptor] */

undefined * FUN_10af624b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29380,
                        &PTR____CFConstantStringClassReference_110f3d418,&PTR_DAT_11333d598,
                        &PTR_DAT_11333d5b0,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001137f0ca8 = puVar1;
  }
  return puRam00000001137f0ca8;
}



/* Entry: 10af62534; end: 10af6259b; +[MFCUserInfo descriptor] */

void FUN_10af62534(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0cb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c293d0,
                        &PTR____CFConstantStringClassReference_110e00738,&PTR_DAT_11333d598,
                        &PTR_DAT_11333d5d0,2,0x10,0x1c);
    puRam00000001137f0cb0 = puVar1;
  }
  return;
}



/* Entry: 10af6259c; end: 10af62603; +[MFCClientRequestInfo descriptor] */

void FUN_10af6259c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0cb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29420,
                        &PTR____CFConstantStringClassReference_110f3d438,&PTR_DAT_11333d598,
                        &PTR_s_requestId_11333d610,7,0x30,0x1c);
    puRam00000001137f0cb8 = puVar1;
  }
  return;
}



/* Entry: 10af62604; end: 10af6266b; +[MFCGetFeedCardsResponse descriptor] */

void FUN_10af62604(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0cc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c294c0,
                        &PTR____CFConstantStringClassReference_110f3d458,&PTR_DAT_11333d890,
                        &PTR_s_requestId_11333d8a8,3,0x20,0x1c);
    puRam00000001137f0cc0 = puVar1;
  }
  return;
}



/* Entry: 10af6266c; end: 10af626d3; +[MFCFeed descriptor] */

void FUN_10af6266c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29560,
                        &PTR____CFConstantStringClassReference_110dab1b8,&PTR_DAT_11333d908,
                        &PTR_DAT_11333da00,8,0x40,0x1c);
    puRam00000001137f0cc8 = puVar1;
  }
  return;
}



/* Entry: 10af626d4; end: 10af6273b; +[MFCGetFeedsResponse descriptor] */

void FUN_10af626d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c295b0,
                        &PTR____CFConstantStringClassReference_110f3d478,&PTR_DAT_11333d908,
                        &PTR_s_requestId_11333d980,4,0x20,0x1c);
    puRam00000001137f0cd0 = puVar1;
  }
  return;
}



/* Entry: 10af6273c; end: 10af627a3; +[MFCFeedRanking descriptor] */

void FUN_10af6273c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29600,
                        &PTR____CFConstantStringClassReference_110f3d498,&PTR_DAT_11333d908,
                        &PTR_DAT_11333d940,2,0x10,0x1c);
    puRam00000001137f0cd8 = puVar1;
  }
  return;
}



/* Entry: 10af627a4; end: 10af6280b; +[MFCFeedDebugInfo descriptor] */

void FUN_10af627a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29650,
                        &PTR____CFConstantStringClassReference_110f3d4b8,&PTR_DAT_11333d908,
                        &PTR_DAT_11333d920,1,0x10,0x1c);
    puRam00000001137f0ce0 = puVar1;
  }
  return;
}



/* Entry: 10af6280c; end: 10af62873; +[MFCFeedCardEnvelope descriptor] */

void FUN_10af6280c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0ce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c296f0,
                        &PTR____CFConstantStringClassReference_110f3d4d8,&PTR_DAT_11333db00,
                        &PTR_DAT_11333db18,4,0x28,0x1c);
    puRam00000001137f0ce8 = puVar1;
  }
  return;
}



/* Entry: 10af62874; end: 10af628ff; +[MFCDeltaPull descriptor] */

undefined * FUN_10af62874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0cf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29790,
                        &PTR____CFConstantStringClassReference_110f3d4f8,&PTR_DAT_11333dba0,
                        &PTR_DAT_11333dbb8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137f0cf0 = puVar1;
  }
  return puRam00000001137f0cf0;
}



/* Entry: 10af62900; end: 10af629e3; +[MFCLegacyDeltaPullParams descriptor] */

void FUN_10af62900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0cf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c297e0,
                        &PTR____CFConstantStringClassReference_110f3d518,&PTR_DAT_11333dba0,
                        &PTR_DAT_11333dbf8,4,0x28,0x1c);
    puRam00000001137f0cf8 = puVar1;
  }
  return;
}



/* Entry: 10af629e4; end: 10af629ef;  */

bool FUN_10af629e4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af629f0; end: 10af62a6b;  */

undefined * FUN_10af629f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0d08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f3d558,
                        &UNK_10e53ea74,&UNK_10e53ea9c,2,FUN_10af62a6c,0);
    do {
      if (puRam00000001137f0d08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0d08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0d08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0d08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0d08;
}



/* Entry: 10af62a6c; end: 10af62a77;  */

bool FUN_10af62a6c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10af62a78; end: 10af62adf; +[MFCContentTypeSpecifer descriptor] */

void FUN_10af62a78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0d10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29880,
                        &PTR____CFConstantStringClassReference_110f3d578,&PTR_DAT_11333dc78,
                        &PTR_s_contentType_11333dc90,2,0xc,0x1c);
    puRam00000001137f0d10 = puVar1;
  }
  return;
}



/* Entry: 10af62ae0; end: 10af62b47; +[MFCFeedDescriptor descriptor] */

void FUN_10af62ae0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0d18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c298d0,
                        &PTR____CFConstantStringClassReference_110f3d598,&PTR_DAT_11333dc78,
                        &PTR_DAT_11333dcd0,2,0x10,0x1c);
    puRam00000001137f0d18 = puVar1;
  }
  return;
}



/* Entry: 10af62b48; end: 10af62bc3; +[MFCFeedDescriptor_Specifiers descriptor] */

undefined * FUN_10af62b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0d20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29920,
                        &PTR____CFConstantStringClassReference_110f3d5b8,&PTR_DAT_11333dc78,
                        &PTR_DAT_11333dd10,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f0d20 = puVar1;
  }
  return puRam00000001137f0d20;
}



/* Entry: 10af62bc4; end: 10af62c2b; +[MFCFeedSessionRequest descriptor] */

void FUN_10af62bc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0d28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c299c0,
                        &PTR____CFConstantStringClassReference_110f3d5d8,&PTR_DAT_11333dd50,
                        &PTR_DAT_11333ddc8,3,0x18,0x1c);
    puRam00000001137f0d28 = puVar1;
  }
  return;
}



/* Entry: 10af62c2c; end: 10af62c93; +[MFCFeedSessionResponse descriptor] */

void FUN_10af62c2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0d30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29a10,
                        &PTR____CFConstantStringClassReference_110f3d5f8,&PTR_DAT_11333dd50,
                        &PTR_DAT_11333dd88,2,0x10,0x1c);
    puRam00000001137f0d30 = puVar1;
  }
  return;
}



/* Entry: 10af62c94; end: 10af62cfb; +[MFCUserSessionResponse descriptor] */

void FUN_10af62c94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0d38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29a60,
                        &PTR____CFConstantStringClassReference_110f3d618,&PTR_DAT_11333dd50,
                        &PTR_DAT_11333dd68,1,0x10,0x1c);
    puRam00000001137f0d38 = puVar1;
  }
  return;
}



/* Entry: 10af62cfc; end: 10af62d63; +[MFCFeedCardLogging descriptor] */

void FUN_10af62cfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0d40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29b00,
                        &PTR____CFConstantStringClassReference_110f3d638,&PTR_DAT_11333de28,
                        &PTR_DAT_11333dea0,10,0x50,0x1c);
    puRam00000001137f0d40 = puVar1;
  }
  return;
}



/* Entry: 10af62d64; end: 10af62dcb; +[MFCFeedLogging descriptor] */

void FUN_10af62d64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0d48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29b50,
                        &PTR____CFConstantStringClassReference_110f3d658,&PTR_DAT_11333de28,
                        &PTR_DAT_11333de40,1,0x10,0x1c);
    puRam00000001137f0d48 = puVar1;
  }
  return;
}



/* Entry: 10af62dcc; end: 10af62e33; +[MFCSnapLogging descriptor] */

void FUN_10af62dcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0d50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29ba0,
                        &PTR____CFConstantStringClassReference_110f3d678,&PTR_DAT_11333de28,
                        &PTR_DAT_11333de60,2,0x18,0x1c);
    puRam00000001137f0d50 = puVar1;
  }
  return;
}



/* Entry: 10af62e34; end: 10af62ea7; -[SCCremaLegacyBackdoorScope initWithPlugInRegistry:] */

undefined1 * FUN_10af62e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702df0;
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



/* Entry: 10af62ea8; end: 10af62eaf; -[SCCremaLegacyBackdoorScope plugInRegistry] */

undefined8 FUN_10af62ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af62eb0; end: 10af62ebb; -[SCCremaLegacyBackdoorScope .cxx_destruct] */

void FUN_10af62eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af62ebc; end: 10af62f2f; -[SCCremaLegacyBackdoorServices initWithBackdoorDelegate:] */

undefined1 * FUN_10af62ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702df8;
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



/* Entry: 10af62f30; end: 10af62f37; -[SCCremaLegacyBackdoorServices backdoorDelegate] */

undefined8 FUN_10af62f30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af62f38; end: 10af62f43; -[SCCremaLegacyBackdoorServices .cxx_destruct] */

void FUN_10af62f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af62f44; end: 10af62f4b; -[SCInAppSessionJobSchedulerServices inAppSessionJobScheduler] */

undefined8 FUN_10af62f44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af62f4c; end: 10af62f57; -[SCInAppSessionJobSchedulerServices .cxx_destruct] */

void FUN_10af62f4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af62f58; end: 10af62fd3; -[SCRTUSConfigProviderImpl getTeamNameFor:] */

void FUN_10af62f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be21e20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10af62fd4; end: 10af63027; -[SCRTUSConfigProviderImpl _getRTUSProductToTeamNameMap] */

void FUN_10af62fd4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f0d80 != -1) {
    func_0x000107c27d9c(0x1137f0d80,&PTR___NSConcreteGlobalBlock_110c98b08);
  }
  uVar1 = uRam00000001137f0d78;
  _objc_retain(uRam00000001137f0d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af63028; end: 10af6313f;  */

ulong FUN_10af63028(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2640;
  ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2658;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dc7158;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dc7158;
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2670;
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2688;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dc7158;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dc7158;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d26a0;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d26b8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dc7158;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dc7158;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d26d0;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d26e8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e44cb8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dc7158;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2700;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2718;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110dc7158;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f3d7b8;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2730;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e44cb8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_70,&ppuStack_c8,0xb
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar3 = (ulong)puRam00000001137f0d78;
  puRam00000001137f0d78 = puVar2;
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return uVar3;
  }
  ___stack_chk_fail();
  uVar1 = (uint)uVar3;
  func_0x00010c07b380();
  return (ulong)(uVar1 ^ 1);
}



/* Entry: 10af63140; end: 10af63157; -[SCRTUSConfigProviderImpl isProductDisabledForRtusLaunch:] */

uint FUN_10af63140(uint param_1)

{
  func_0x00010c07b380();
  return param_1 ^ 1;
}



/* Entry: 10af63158; end: 10af6320b; -[SCRTUSConfigProviderImpl getProductsFor:] */

void FUN_10af63158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0f6640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10af6320c; end: 10af632eb; -[SCRTUSConfigProviderImpl getFieldsSetFor:eventPayloadId:] */

void FUN_10af6320c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010c0f6640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e00e0(uVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10af632ec; end: 10af633a7; -[SCRTUSConfigProviderImpl shouldAllowEventIntoCache:product:payloadId:] */

undefined8
FUN_10af632ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be1f180(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf51380(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf999a0(uVar2,param_2,param_3,lVar1,param_1,param_5);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10af633a8; end: 10af633b7; -[SCRTUSConfigProviderImpl _logProtoDeserializationErrorWithCofName:version:] */

/* WARNING: Removing unreachable block (ram,0x00010af64eec) */
/* WARNING: Removing unreachable block (ram,0x00010af64bc0) */
/* WARNING: Removing unreachable block (ram,0x00010af651ec) */

void FUN_10af633a8(double param_1,long param_2,undefined8 param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  char *pcVar12;
  char *unaff_x25;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  char acStack_360 [24];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  char acStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  char acStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 8);
  pcVar5 = (char *)0x1;
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar11 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,pcVar2);
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
    pcVar2 = "";
    param_5 = (char *)0x1;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = acStack_80;
    func_0x000107c278ac(&puStack_68);
    pcVar5 = pcVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar5 = pcVar3;
    }
  }
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  pcVar7 = acStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar2;
  pcVar6 = pcVar5;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(auStack_e0,pcVar3);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x000107c27984(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar12 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_e8 = acStack_100;
    func_0x000107c278ac(&puStack_e8);
    pcVar6 = pcVar7;
    param_5 = pcVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar6 = pcVar7;
      param_5 = pcVar5;
    }
  }
  pcVar5 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar12;
  pcVar3 = pcVar6;
  pcVar7 = param_5;
  pcVar10 = param_6;
  pcVar9 = param_7;
  _objc_retain(pcVar6);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (pcVar5 != (char *)0x0) {
    plVar11 = *(long **)(pcVar5 + 8);
    pcVar2 = "true";
    if ((int)pcVar12 == 0) {
      pcVar2 = "false";
    }
    func_0x000107c278b8(acStack_1b8,pcVar2);
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
    func_0x000107c278b8(auStack_1a0,pcVar2);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_188,pcVar2);
    _objc_retain(param_6);
    if (param_6 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_6);
      unaff_x25 = param_6;
      func_0x00010bdc3520();
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_170,unaff_x25);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x000107c27984(acStack_1d8,acStack_1b8,&lStack_158,4);
    pcVar2 = "";
    pcVar3 = acStack_1d8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_1c0 = acStack_1d8;
    func_0x000107c278ac(&pcStack_1c0);
    lVar1 = 0;
    pcVar12 = acStack_1b8;
    pcVar7 = param_7;
    do {
      if ((&cStack_159)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  pcVar5 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    pcVar12 = pcVar12 + -0x18;
  } while (pcVar12 != acStack_1b8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(pcVar6);
  __Unwind_Resume();
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar2;
  pcVar6 = pcVar3;
  pcVar8 = pcVar7;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  if (pcVar5 != (char *)0x0) {
    plVar11 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(acStack_298,pcVar5);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar5 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(auStack_280,pcVar5);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar5 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_268,pcVar5);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar5 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_250,pcVar5);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x000107c27984(acStack_2b8,acStack_298,&lStack_238,4);
    pcVar12 = "";
    unaff_x25 = acStack_2b8;
    pcVar6 = acStack_2b8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_2a0 = unaff_x25;
    func_0x000107c278ac(&pcStack_2a0);
    lVar1 = 0;
    pcVar8 = pcVar9;
    do {
      if ((&cStack_239)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x60);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar3);
  pcVar5 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_298);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  pcVar2 = pcVar5;
  __Unwind_Resume();
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar12);
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar12);
    _objc_retain(pcVar6);
    _objc_retain(pcVar8);
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar12;
      _objc_retainAutorelease(pcVar12);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x000107c278b8(acStack_360,pcVar2);
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
    func_0x000107c278b8(auStack_348,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_330,pcVar2);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x000107c27984(&uStack_380,acStack_360,&lStack_318,3);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c98df8,&uStack_380,(long)(param_1 * 1000.0));
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x000107c278ac(&puStack_368);
    lVar1 = 0;
    pcVar5 = acStack_360;
    do {
      if ((&cStack_319)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x48);
    _objc_release(pcVar8);
    _objc_release(pcVar6);
    _objc_release(pcVar12);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar6;
  _objc_release(pcVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    do {
      pcVar5 = pcVar5 + -0x18;
    } while (pcVar5 != acStack_360);
    _objc_release(pcVar8);
    _objc_release(pcVar6);
    _objc_release(pcVar12);
    _objc_release(pcVar8);
    _objc_release(pcVar6);
    _objc_release(pcVar12);
    __Unwind_Resume(pcVar2);
    if (puRam00000001137f0db0 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126ae978;
      func_0x00010bf00dc0();
      puRam00000001137f0db0 = puVar4;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar12);
  return;
}



/* Entry: 10af633b8; end: 10af634b3; -[SCRTUSConfigProviderImpl _getFilterParseTreeForProduct:eventPayloadId:] */

void FUN_10af633b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c26a300();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar3;
  func_0x00010bf9a120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e00e0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10af634b4; end: 10af634bb; -[SCRTUSConfigProviderImpl circumstanceEngine] */

undefined8 FUN_10af634b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af634bc; end: 10af634eb; -[SCRTUSConfigProviderImpl setCircumstanceEngine:] */

void FUN_10af634bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af634ec; end: 10af634f3; -[SCRTUSConfigProviderImpl appStartExperimentReader] */

undefined8 FUN_10af634ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af634f4; end: 10af63523; -[SCRTUSConfigProviderImpl setAppStartExperimentReader:] */

void FUN_10af634f4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af63524; end: 10af6358f; -[SCRTUSConfigProviderImpl .cxx_destruct] */

void FUN_10af63524(long param_1)

{
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



/* Entry: 10af63590; end: 10af63653; +[SCRTUSStaticConfig getDefaultAllowlistedProductNames] */

void FUN_10af63590(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined8 uVar2;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110df78d8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e9c0b8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f3d6f8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f3d718;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f3d778;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f3d758;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f3d738;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110ee1cb8;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dba418;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f3d798;
  pppuVar1 = &ppuStack_68;
  uVar2 = 10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar1,10);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(uVar2);
  if ((long)pppuVar1 < 7) {
    if ((long)pppuVar1 - 1U < 5) {
LAB_10af636c0:
      func_0x00010be1e040(PTR_PTR_1126debc0,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (pppuVar1 == (undefined ***)0x6) {
      func_0x00010be20260(PTR_PTR_1126debc0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if ((long)pppuVar1 < 10) {
    if (pppuVar1 + -1 < (undefined ***)0x2) goto LAB_10af636c0;
    if (pppuVar1 == (undefined ***)0x7) {
      func_0x00010be1f420(PTR_PTR_1126debc0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (pppuVar1 == (undefined ***)0xa) {
    func_0x00010be22740(PTR_PTR_1126debc0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (pppuVar1 == (undefined ***)0xb) {
    func_0x00010be1ffa0(PTR_PTR_1126debc0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af63654; end: 10af63757; +[SCRTUSStaticConfig getDefaultConfigProtoValueForProduct:productName:] */

void FUN_10af63654(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  puVar1 = (undefined *)0x0;
  if (param_3 < 7) {
    if (4 < param_3 - 1U) {
      if (param_3 == 6) {
        puVar1 = PTR_PTR_1126debc0;
        func_0x00010be20260(PTR_PTR_1126debc0);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_10af636dc;
    }
  }
  else {
    if (9 < param_3) {
      if (param_3 == 10) {
        puVar1 = PTR_PTR_1126debc0;
        func_0x00010be22740(PTR_PTR_1126debc0);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (param_3 == 0xb) {
        puVar1 = PTR_PTR_1126debc0;
        func_0x00010be1ffa0(PTR_PTR_1126debc0);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_10af636dc;
    }
    if (1 < param_3 - 8U) {
      if (param_3 == 7) {
        puVar1 = PTR_PTR_1126debc0;
        func_0x00010be1f420(PTR_PTR_1126debc0);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_10af636dc;
    }
  }
  puVar1 = PTR_PTR_1126debc0;
  func_0x00010be1e040(PTR_PTR_1126debc0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_10af636dc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af63758; end: 10af63833; +[SCRTUSStaticConfig _getContentTeamDefaultConfigProtoValueForProduct:] */

void FUN_10af63758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126debd0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c220e20();
  func_0x00010c1e3a60(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c2129e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc7158);
  func_0x00010c197ce0(puVar1,param_2,600);
  func_0x00010c18f300(puVar1,param_2,1000000);
  func_0x00010c175140(puVar1,param_2,1000000);
  func_0x00010c1750a0(puVar1,param_2,0);
  func_0x00010c1e5da0(puVar1,param_2,0);
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010be1e060(PTR_PTR_1126debc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da560(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af63834; end: 10af639f7; +[SCRTUSStaticConfig _getContentTeamDefaultPerEventConfigs] */

void FUN_10af63834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b7708;
  _objc_opt_new();
  uStack_78 = 0xe0000000c;
  uStack_80 = 0x400000002;
  uStack_68 = 0x1200000011;
  uStack_70 = 0x100000000f;
  uStack_58 = 0x240000001c;
  uStack_60 = 0x1a00000015;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_80,0xc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x909);
  _objc_release(puVar2);
  uStack_a8 = 0x100000000e;
  uStack_b0 = 0x900000003;
  uStack_98 = 0x1400000013;
  uStack_a0 = 0x1200000011;
  uStack_90 = 0x1f00000017;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_b0,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x90d);
  _objc_release(puVar2);
  uStack_e8 = 0x1800000017;
  uStack_f0 = 0x1500000014;
  uStack_d8 = 0x1f0000001c;
  uStack_e0 = 0x1b0000001a;
  uStack_c8 = 0x2f00000027;
  uStack_d0 = 0x2600000024;
  uStack_108 = 0x700000006;
  uStack_110 = 0x500000003;
  uStack_f8 = 0x1300000012;
  uStack_100 = 0x1000000008;
  uStack_c0 = 0x39;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_110,0x15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x910);
  _objc_release(puVar2);
  uStack_148 = 0x1800000017;
  uStack_150 = 0x1500000014;
  uStack_138 = 0x1f0000001c;
  uStack_140 = 0x1b0000001a;
  uStack_128 = 0x310000002f;
  uStack_130 = 0x2700000026;
  uStack_168 = 0x700000006;
  uStack_170 = 0x500000003;
  uStack_158 = 0x1300000012;
  uStack_160 = 0x1000000008;
  uStack_120 = 0x39;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_170,0x15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x911);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126debe0;
    _objc_opt_new(PTR_PTR_1126debe0);
    puVar2 = PTR_PTR_1126b7828;
    _objc_opt_new(PTR_PTR_1126b7828);
    func_0x00010befc840();
    func_0x00010c19b9a0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af639f8; end: 10af63a63; +[SCRTUSStaticConfig _constructEventConfigWithArray:count:] */

void FUN_10af639f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126debe0;
  _objc_opt_new(PTR_PTR_1126debe0);
  puVar2 = PTR_PTR_1126b7828;
  _objc_opt_new(PTR_PTR_1126b7828);
  func_0x00010befc840();
  func_0x00010c19b9a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af63a64; end: 10af63b27; +[SCRTUSStaticConfig _getFriendStoryDefaultConfigProtoValue] */

void FUN_10af63a64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126debd0;
  _objc_opt_new(PTR_PTR_1126debd0);
  func_0x00010c220e20();
  func_0x00010c1e3a60(puVar1,param_2,&PTR____CFConstantStringClassReference_110f3d778);
  func_0x00010c2129e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc7158);
  func_0x00010c197ce0(puVar1,param_2,0x5460);
  func_0x00010c18f300(puVar1,param_2,1000000);
  func_0x00010c175140(puVar1,param_2,200);
  func_0x00010c1750a0(puVar1,param_2,0);
  func_0x00010c1e5da0(puVar1,param_2,0);
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010be1f440(PTR_PTR_1126debc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da560(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af63b28; end: 10af63f9b; +[SCRTUSStaticConfig _getFriendStoryDefaultPerEventConfigs] */

void FUN_10af63b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b7708;
  _objc_opt_new();
  uStack_68 = 0xe00000009;
  uStack_70 = 0x800000003;
  uStack_58 = 0x1300000012;
  uStack_60 = 0x1100000010;
  uStack_50 = 0x2700000014;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_70,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x90d);
  _objc_release(puVar2);
  uStack_88 = 0x1d0000001b;
  uStack_90 = 0xf00000008;
  uStack_78 = 0x2600000025;
  uStack_80 = 0x220000001f;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_90,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x1db);
  _objc_release(puVar2);
  uStack_a8 = 0x800000007;
  uStack_b0 = 0x500000004;
  uStack_a0 = 10;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_b0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x1d9);
  _objc_release(puVar2);
  uStack_c8 = 9;
  uStack_d0 = 0x800000002;
  uStack_bc = 0x100000000e;
  uStack_c4 = 10;
  uStack_c0 = 0xb;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_d0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x1de);
  _objc_release(puVar2);
  uStack_d8 = 0xf0000000b;
  uStack_e0 = 0x400000003;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_e0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x1f6);
  _objc_release(puVar2);
  uStack_e8 = 0x17;
  uStack_f0 = 0x800000007;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_f0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x2dd);
  _objc_release(puVar2);
  uStack_f8 = 0x14;
  uStack_100 = 0x700000006;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_100,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x2e0);
  _objc_release(puVar2);
  uStack_118 = 0x6b00000059;
  uStack_120 = 0x2300000022;
  uStack_110 = 0x74;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_120,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x2e1);
  _objc_release(puVar2);
  uStack_138 = 0x2300000010;
  uStack_140 = 0xf00000002;
  uStack_130 = 0x3f00000036;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_140,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x2e3);
  _objc_release(puVar2);
  uStack_148 = 0x5900000020;
  uStack_150 = 0x1f0000001e;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_150,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x409);
  _objc_release(puVar2);
  uStack_168 = 5;
  uStack_170 = 0x400000002;
  uStack_15c = 0x2600000024;
  uStack_164 = 6;
  uStack_160 = 0x15;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_170,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x909);
  _objc_release(puVar2);
  uStack_198 = 0x1000000007;
  uStack_1a0 = 0x500000003;
  uStack_188 = 0x1b00000018;
  uStack_190 = 0x1300000012;
  uStack_178 = 0x390000002f;
  uStack_180 = 0x2e0000002d;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_1a0,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x911);
  _objc_release(puVar2);
  uStack_1a8 = 0x9500000094;
  uStack_1b0 = 0x5a00000054;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_1b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x931);
  _objc_release(puVar2);
  uStack_1b8 = 0xa00000009;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_1b8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x936);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126debd0;
    _objc_opt_new(PTR_PTR_1126debd0);
    func_0x00010c220e20();
    func_0x00010c1e3a60(puVar1,param_2,&PTR____CFConstantStringClassReference_110f3d758);
    func_0x00010c2129e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e44cb8);
    func_0x00010c197ce0(puVar1,param_2,0x93a80);
    func_0x00010c18f300(puVar1,param_2,1000000);
    func_0x00010c175140(puVar1,param_2,10000);
    func_0x00010c1750a0(puVar1,param_2,0);
    func_0x00010c1e5da0(puVar1,param_2,0);
    puVar2 = PTR_PTR_1126debc0;
    func_0x00010be20280(PTR_PTR_1126debc0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da560(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af63f9c; end: 10af64063; +[SCRTUSStaticConfig _getLensRankingDefaultConfigProtoValue] */

void FUN_10af63f9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126debd0;
  _objc_opt_new(PTR_PTR_1126debd0);
  func_0x00010c220e20();
  func_0x00010c1e3a60(puVar1,param_2,&PTR____CFConstantStringClassReference_110f3d758);
  func_0x00010c2129e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e44cb8);
  func_0x00010c197ce0(puVar1,param_2,0x93a80);
  func_0x00010c18f300(puVar1,param_2,1000000);
  func_0x00010c175140(puVar1,param_2,10000);
  func_0x00010c1750a0(puVar1,param_2,0);
  func_0x00010c1e5da0(puVar1,param_2,0);
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010be20280(PTR_PTR_1126debc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da560(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af64064; end: 10af642b3; +[SCRTUSStaticConfig _getLensRankingDefaultPerEventConfigs] */

void FUN_10af64064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b7708;
  _objc_opt_new();
  uStack_40 = 0x260000000d;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_40,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x396);
  _objc_release(puVar2);
  uStack_48 = 0xe00000004;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0xe51);
  _objc_release(puVar2);
  uStack_4c = 0x2c;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_4c,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x2de);
  _objc_release(puVar2);
  uStack_50 = 0x29;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x43b);
  _objc_release(puVar2);
  uStack_54 = 0x2e;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_54,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x931);
  _objc_release(puVar2);
  uStack_58 = 0x2b;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x459);
  _objc_release(puVar2);
  uStack_5c = 0x33;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_5c,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x2e1);
  _objc_release(puVar2);
  uStack_60 = 0x33;
  puVar2 = PTR_PTR_1126debc0;
  func_0x00010bde6a00(PTR_PTR_1126debc0,param_2,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar1,param_2,puVar2,0x43c);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126debd0;
    _objc_opt_new(PTR_PTR_1126debd0);
    func_0x00010c220e20();
    func_0x00010c1e3a60(puVar1,param_2,&PTR____CFConstantStringClassReference_110dba418);
    func_0x00010c2129e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f3d7b8);
    func_0x00010c197ce0(puVar1,param_2,0xe10);
    func_0x00010c18f300(puVar1,param_2,1000000);
    func_0x00010c175140(puVar1,param_2,0x32);
    func_0x00010c1750a0(puVar1,param_2,0);
    func_0x00010c1e5da0(puVar1,param_2,0);
    puVar2 = PTR_PTR_1126debc0;
    func_0x00010be22760(PTR_PTR_1126debc0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da560(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


