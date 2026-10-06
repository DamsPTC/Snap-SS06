/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108de4b98; end: 108de4c03; -[SCKeyServicePassphrasePromptCoordinator cancelPromptWithRequestUUID:] */

void FUN_108de4b98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010bf529e0();
      if (lVar2 == 0) {
        func_0x00010be03060(param_1,param_2,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108de4c04; end: 108de4c63; -[SCKeyServicePassphrasePromptCoordinator dismissPromptWhenMasterKeyIsAvailable:] */

void FUN_108de4c04(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010be03060(param_1,param_2,param_3);
  }
  else if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108de4c64; end: 108de4ca3; -[SCKeyServicePassphrasePromptCoordinator allowedFutureAuthorizationDate] */

void FUN_108de4c64(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf01800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108de4ca4; end: 108de4d33; -[SCKeyServicePassphrasePromptCoordinator requestAuthorizationWithPassphrase:completionHandler:] */

void FUN_108de4ca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c134aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108de4d34; end: 108de4d37; -[SCKeyServicePassphrasePromptCoordinator enterPasscodeViewControllerDidPressBack:] */

void FUN_108de4d34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddabd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelPendingRequestsOnMainThre_112554490);
  return;
}



/* Entry: 108de4d38; end: 108de4d3b; -[SCKeyServicePassphrasePromptCoordinator enterPassphraseViewControllerDidPressBack:] */

void FUN_108de4d38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddabd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelPendingRequestsOnMainThre_112554490);
  return;
}



/* Entry: 108de4d3c; end: 108de4d93; -[SCKeyServicePassphrasePromptCoordinator _cancelPendingRequestsOnMainThread] */

void FUN_108de4d3c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108de4d94;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 108de4d94; end: 108de4e17;  */

void FUN_108de4d94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010be03060(*(undefined8 *)(param_1 + 0x20),param_2,0);
  lVar1 = *(long *)(param_1 + 0x20) + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf51e00(uVar2);
  func_0x00010bf2ebe0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108de4e18; end: 108de4f57; -[SCKeyServicePassphrasePromptCoordinator _dismissPassphrasePromptOnMainThread:] */

void FUN_108de4e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126d27f0;
  _objc_opt_class(PTR_PTR_1126d27f0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    _objc_retain(param_3);
    func_0x00010bf84b00(lVar4);
    _objc_release(lVar4);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar5);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_storeWeak(param_1 + 0x30,0);
  _objc_storeWeak(param_1 + 0x38,0);
  return;
}



/* Entry: 108de4f58; end: 108de506f;  */

void FUN_108de4f58(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x19) = 0;
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x18) == '\x01') {
    func_0x00010beba400();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de4f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108de5070; end: 108de512b; -[SCKeyServicePassphrasePromptCoordinator _dismissPassphrasePrompt:] */

void FUN_108de5070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x18) = 0;
  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x19) = 1;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108de512c;
    puStack_48 = &UNK_11084aaa8;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(uVar1);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108de512c; end: 108de5137;  */

void FUN_108de512c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dismissPassphrasePromptOnMainTh_11255e5c0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108de5138; end: 108de51bb; -[SCKeyServicePassphrasePromptCoordinator _showPassphrasePrompt] */

void FUN_108de5138(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 108de51bc; end: 108de547b;  */

void FUN_108de51bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  
  uVar1 = 0;
  func_0x000107c30a2c(0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf9000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 0x30,uVar3);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfbdd80();
  _objc_release(uVar4);
  if ((int)uVar1 == 0) {
    puVar6 = PTR_PTR_1126d27e8;
    _objc_alloc(PTR_PTR_1126d27e8);
    ppuVar7 = &PTR____CFConstantStringClassReference_110ef83b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef83b8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110ef83d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef83d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeeb40(puVar6);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    func_0x00010c1ded60(puVar6);
    func_0x00010c18b5e0(puVar6);
    _objc_storeWeak(*(long *)(param_1 + 0x20) + 0x38,puVar6);
    lVar9 = *(long *)(param_1 + 0x20) + 0x38;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c1c8c00();
    _objc_release(lVar9);
    lVar9 = *(long *)(param_1 + 0x20) + 0x38;
    _objc_loadWeakRetained(lVar9);
    func_0x00010c1c8b80();
    _objc_release(lVar9);
    lVar9 = *(long *)(param_1 + 0x20) + 0x30;
    _objc_loadWeakRetained(lVar9);
    lVar10 = *(long *)(param_1 + 0x20) + 0x38;
    _objc_loadWeakRetained(lVar10);
    func_0x00010c10eda0(lVar9);
    _objc_release(lVar10);
    _objc_release(lVar9);
  }
  else {
    puVar6 = PTR_PTR_1126d27f0;
    _objc_alloc(PTR_PTR_1126d27f0);
    ppuVar7 = &PTR____CFConstantStringClassReference_110ef8378;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8378,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110e29bf8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e29bf8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110ef8398;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8398,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeeb20(puVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    func_0x00010c1ded60(puVar6);
    func_0x00010c18b5e0(puVar6);
    _objc_storeWeak(*(long *)(param_1 + 0x20) + 0x38,puVar6);
    func_0x00010c238e80(puVar6);
  }
  _objc_release(puVar6);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108de547c; end: 108de5573; -[SCKeyServicePassphrasePromptCoordinator _deepestViewController:] */

void FUN_108de547c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UITabBarController_1126d5098;
    _objc_opt_class(PTR__OBJC_CLASS___UITabBarController_1126d5098);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 == 0) {
        _objc_retain(param_3);
        param_1 = param_3;
        goto LAB_108de554c;
      }
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c15a480(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c2a0180(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bdf9000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
LAB_108de554c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108de5574; end: 108de55eb; -[SCKeyServicePassphrasePromptCoordinator .cxx_destruct] */

void FUN_108de5574(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108de55ec; end: 108de5723; -[SCKeyServicePersistedKey initWithUserId:keyTag:masterKey:initializationVector:passphrase:] */

undefined1 *
FUN_108de55ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fe8b0;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108de5724; end: 108de5747; -[SCKeyServicePersistedKey copyWithZone:] */

undefined8 FUN_108de5724(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108de5748; end: 108de586f; -[SCKeyServicePersistedKey initWithCoder:] */

undefined1 * FUN_108de5748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe8b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108de5870; end: 108de590b; -[SCKeyServicePersistedKey encodeWithCoder:] */

void FUN_108de5870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110db1318);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ef83f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ef8418);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ef8438);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e29bf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108de590c; end: 108de5913; -[SCKeyServicePersistedKey preferFasterCoding] */

undefined8 FUN_108de590c(void)

{
  return 1;
}



/* Entry: 108de5914; end: 108de5987; -[SCKeyServicePersistedKey encodeWithFasterCoder:] */

void FUN_108de5914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108de5988; end: 108de5a5b; -[SCKeyServicePersistedKey decodeWithFasterDecoder:] */

void FUN_108de5988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108de5a5c; end: 108de5b5b; -[SCKeyServicePersistedKey setObject:forUInt64Key:] */

void FUN_108de5a5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0x7fe91686d0b0a3) {
    if (param_4 == 0xbefd6c8dd318b) {
      lVar2 = 8;
    }
    else {
      if (param_4 != 0x487cc343f34d6d) goto LAB_108de5b48;
      lVar2 = 0x20;
    }
  }
  else if (param_4 == 0x7fe91686d0b0a3) {
    lVar2 = 0x18;
  }
  else if (param_4 == 0xd32e71fb795c80) {
    lVar2 = 0x28;
  }
  else {
    if (param_4 != 0xe335544e4b73c0) goto LAB_108de5b48;
    lVar2 = 0x10;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_108de5b48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108de5b5c; end: 108de5b6f; +[SCKeyServicePersistedKey fasterCodingVersion] */

undefined8 FUN_108de5b5c(void)

{
  return 0x7857baf6fcc7d045;
}



/* Entry: 108de5b70; end: 108de5b7b; +[SCKeyServicePersistedKey fasterCodingKeys] */

undefined8 FUN_108de5b70(void)

{
  return 0x113299b98;
}



/* Entry: 108de5b7c; end: 108de5b97; -[SCKeyServicePersistedKey isEqual:] */

undefined8 * FUN_108de5b7c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x11372e998;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 5;
  lVar5 = 5;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam000000011372e990 & 1) == 0) {
      puVar2 = param_1;
      _objc_opt_class();
      _class_copyIvarList();
      lVar7 = 0;
      puVar8 = puVar2;
      do {
        pcVar6 = (char *)*puVar8;
        pcVar1 = pcVar6;
        _ivar_getTypeEncoding();
        if (*pcVar1 == '@') {
          _ivar_getOffset();
          *(char **)(lVar7 * 8 + 0x11372e998) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam000000011372e990 = 1;
    }
    do {
      puVar2 = *(undefined8 **)((long)param_1 + *plVar4);
      if ((puVar2 != *(undefined8 **)((long)param_3 + *plVar4)) &&
         (func_0x00010c071ae0(), (int)puVar2 == 0)) {
        return puVar2;
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}



/* Entry: 108de5b98; end: 108de5bab; -[SCKeyServicePersistedKey hash] */

ulong FUN_108de5b98(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar5 = (long *)0x11372e998;
  if ((bRam000000011372e990 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 5;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x11372e998) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam000000011372e990 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam000000011372e998);
  func_0x00010bfde980(uVar3);
  lVar7 = 4;
  do {
    plVar5 = plVar5 + 1;
    uVar4 = *(ulong *)((long)param_1 + *plVar5);
    func_0x00010bfde980(uVar4);
    uVar4 = uVar4 | uVar3 << 0x20;
    uVar3 = ~uVar4 + uVar4 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return uVar3;
}



/* Entry: 108de5bac; end: 108de5bb3; -[SCKeyServicePersistedKey userId] */

undefined8 FUN_108de5bac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108de5bb4; end: 108de5bbb; -[SCKeyServicePersistedKey keyTag] */

undefined8 FUN_108de5bb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108de5bbc; end: 108de5bc3; -[SCKeyServicePersistedKey masterKey] */

undefined8 FUN_108de5bbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108de5bc4; end: 108de5bcb; -[SCKeyServicePersistedKey initializationVector] */

undefined8 FUN_108de5bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108de5bcc; end: 108de5bd3; -[SCKeyServicePersistedKey passphrase] */

undefined8 FUN_108de5bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108de5bd4; end: 108de5c27; -[SCKeyServicePersistedKey .cxx_destruct] */

void FUN_108de5bd4(long param_1)

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



/* Entry: 108de5c28; end: 108de5c33; -[SCMemoriesPrivateKeyServices .cxx_destruct] */

void FUN_108de5c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108de5c34; end: 108de5d97;  */

void FUN_108de5c34(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef8458;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8458,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef8478;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8478,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 108de5d98; end: 108de5da7;  */

void FUN_108de5d98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 108de5da8; end: 108de5e0f;  */

void FUN_108de5da8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf3ec40();
  if (lVar1 == -0x7d7) {
    FUN_108df7438(param_1);
  }
  else {
    lVar1 = param_2;
    func_0x00010bf3ec40();
    if (lVar1 == -2) {
      FUN_108de5c34();
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108de5e10; end: 108de5f1b;  */

void FUN_108de5e10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108de5f1c;
  uStack_40 = 0x108de5f2c;
  uStack_38 = 0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010c135d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puStack_58[5];
  puStack_58[5] = uVar1;
  _objc_release(uVar2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 108de5f1c; end: 108de5f33;  */

void FUN_108de5f1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108de5f34; end: 108de5f77;  */

void FUN_108de5f34(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 6,param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108de5f78; end: 108de61bf;  */

void FUN_108de5f78(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef8498;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8498,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef84b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef84b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf898,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126af180;
  ppuVar6 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de61d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x10))(lVar9,1);
    return;
  }
  return;
}



/* Entry: 108de61c0; end: 108de61ef;  */

void FUN_108de61c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de61d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108de61f0; end: 108de6223;  */

void FUN_108de61f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108de6224; end: 108de646b;  */

void FUN_108de6224(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef84d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef84d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef84f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef84f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef8518;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8518,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126af180;
  ppuVar6 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de647c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x10))(lVar9,1);
    return;
  }
  return;
}



/* Entry: 108de646c; end: 108de649b;  */

void FUN_108de646c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de647c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108de649c; end: 108de64cf;  */

void FUN_108de649c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108de64d0; end: 108de66f3;  */

void FUN_108de64d0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85db8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85db8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef8538;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8538,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126af180;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de6704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108de66f4; end: 108de6723;  */

void FUN_108de66f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de6704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,1);
    return;
  }
  return;
}



/* Entry: 108de6724; end: 108de6757;  */

void FUN_108de6724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108de6758; end: 108de6a0f;  */

void FUN_108de6758(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8558;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8558,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110e85db8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85db8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d3c80();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e85dd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85dd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar2);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108de6a10; end: 108de6a63;  */

void FUN_108de6a10(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,1,0);
    return;
  }
  return;
}



/* Entry: 108de6a64; end: 108de6a97;  */

void FUN_108de6a64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108de6a98; end: 108de6cbb;  */

void FUN_108de6a98(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85e18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef8578;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8578,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126af180;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de6ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108de6cbc; end: 108de6ceb;  */

void FUN_108de6cbc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de6ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,1);
    return;
  }
  return;
}



/* Entry: 108de6cec; end: 108de6d1f;  */

void FUN_108de6cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108de6d20; end: 108de6fd7;  */

void FUN_108de6d20(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e85f98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85f98,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110e85e18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e18,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d3c80();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beef320(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e85e38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e38,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar2);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de6fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108de6fd8; end: 108de702b;  */

void FUN_108de6fd8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108de6fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,1,0);
    return;
  }
  return;
}



/* Entry: 108de702c; end: 108de705f;  */

void FUN_108de702c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108de7060; end: 108de711f; -[SCGalleryLockedRateLimitController setTitleAndDescription:topSecret:] */

void FUN_108de7060(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  if (param_3 == -0x7d8) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef8598;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8598,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined ***)(param_1 + 0x18) = ppuVar1;
    _objc_release(uVar2);
    ppuVar1 = (undefined **)0x0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef85b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef85b8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined ***)(param_1 + 0x18) = ppuVar1;
    _objc_release(uVar2);
    if (param_4 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ef85f8;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ef85d8;
    }
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined ***)(param_1 + 0x20) = ppuVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c139930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_resetTitleAndDescription_descrip_11262c068,
             *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108de7120; end: 108de7197; -[SCGalleryLockedRateLimitController view] */

void FUN_108de7120(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126dbf18;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010be0c5a0(param_1);
    func_0x00010c198bc0(*(undefined8 *)(param_1 + 0x10),param_2,lVar3);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108de7198; end: 108de71f7; -[SCGalleryLockedRateLimitController setAllowedFutureDate:] */

void FUN_108de7198(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(param_1 + 0x28)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010be0c5a0(param_1);
    func_0x00010c198bc0(*(undefined8 *)(param_1 + 0x10),param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108de71f8; end: 108de724b; -[SCGalleryLockedRateLimitController startAnimating] */

void FUN_108de71f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(0x4014000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__timerFired__11252cbc0,0,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108de724c; end: 108de7277; -[SCGalleryLockedRateLimitController stopAnimating] */

void FUN_108de724c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108de7278; end: 108de7287; -[SCGalleryLockedRateLimitController isAnimating] */

bool FUN_108de7278(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}



/* Entry: 108de7288; end: 108de730b; -[SCGalleryLockedRateLimitController _timerFired:] */

void FUN_108de7288(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 == *(long *)(param_2 + 8)) {
    lVar1 = param_2;
    func_0x00010be0c5a0();
    func_0x00010c198bc0(*(undefined8 *)(param_2 + 0x10),param_3,lVar1);
    if ((*(long *)(param_2 + 0x28) == 0) || (func_0x00010c26f3a0(), param_1 < 0.0)) {
      func_0x00010c069d00(*(undefined8 *)(param_2 + 8));
      uVar2 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = 0;
      _objc_release(uVar2);
      param_2 = param_2 + 0x30;
      _objc_loadWeakRetained(param_2);
      func_0x00010c09ff20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 108de730c; end: 108de735b; -[SCGalleryLockedRateLimitController _expirationMinutesFromAllowedFutureDate] */

long FUN_108de730c(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x28));
  dVar2 = 0.0;
  if (0.0 <= param_1) {
    dVar2 = param_1;
  }
  dVar1 = (double)(long)(dVar2 / 60.0 + -0.016666666666666666);
  dVar2 = 1.0;
  if (1.0 <= dVar1) {
    dVar2 = dVar1;
  }
  return (long)dVar2;
}



/* Entry: 108de735c; end: 108de736f; -[SCGalleryLockedRateLimitController actionViewSize] */

undefined1  [16] FUN_108de735c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4046000000000000;
  auVar1._0_8_ = 0x7fefffffffffffff;
  return auVar1;
}



/* Entry: 108de7370; end: 108de7373; -[SCGalleryLockedRateLimitController actionView] */

void FUN_108de7370(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_view_1126849e8);
  return;
}



/* Entry: 108de7374; end: 108de737b; -[SCGalleryLockedRateLimitController alertViewActionType] */

undefined8 FUN_108de7374(void)

{
  return 2;
}



/* Entry: 108de737c; end: 108de7383; -[SCGalleryLockedRateLimitController adjustsSizeToMatchStandard] */

undefined8 FUN_108de737c(void)

{
  return 0;
}



/* Entry: 108de7384; end: 108de738b; -[SCGalleryLockedRateLimitController becomeFirstResponder] */

void FUN_108de7384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 108de738c; end: 108de739f; -[SCGalleryLockedRateLimitController edgeInsets] */

undefined8 FUN_108de738c(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 108de73a0; end: 108de73a7; -[SCGalleryLockedRateLimitController requiresAdditionalPaddingIfLastItem] */

undefined8 FUN_108de73a0(void)

{
  return 1;
}



/* Entry: 108de73a8; end: 108de73af; -[SCGalleryLockedRateLimitController allowedFutureDate] */

undefined8 FUN_108de73a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108de73b0; end: 108de73c7; -[SCGalleryLockedRateLimitController delegate] */

void FUN_108de73b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108de73c8; end: 108de73d3; -[SCGalleryLockedRateLimitController setDelegate:] */

void FUN_108de73c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 108de73d4; end: 108de742f; -[SCGalleryLockedRateLimitController .cxx_destruct] */

void FUN_108de73d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108de7430; end: 108de773f; -[SCGalleryLockedRateLimitView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108de7430(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fe8c0;
  puVar1 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11277bb6c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110ef85b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef85b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(ppuVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11277bb70;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c680(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110ef8618;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8618,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(ppuVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 108de7740; end: 108de79ff;  */

void FUN_108de7740(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xbff0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108de7a00; end: 108de7a8b; -[SCGalleryLockedRateLimitView resetTitleAndDescription:description:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de7a00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277bb74);
  *(undefined8 *)(param_1 + _DAT_11277bb74) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277bb6c));
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be1af90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateDescriptionString_112564580);
  return;
}



/* Entry: 108de7a8c; end: 108de7bc3; -[SCGalleryLockedRateLimitView setExpirationMinutes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de7a8c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  float fVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef8618;
LAB_108de7ab4:
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = *(undefined ***)(param_1 + _DAT_11277bb78);
    *(undefined ***)(param_1 + _DAT_11277bb78) = ppuVar1;
  }
  else {
    if (param_3 < 0x3d) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110ef8678;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8678,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      fVar5 = (float)NEON_fminnm((int)((double)param_3 / 60.0),0x43b40000);
      if ((long)fVar5 == 1) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ef8638;
        goto LAB_108de7ab4;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110ef8658;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8658,0);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277bb78);
    *(undefined **)(param_1 + _DAT_11277bb78) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be1af90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateDescriptionString_112564580);
  return;
}



/* Entry: 108de7bc4; end: 108de7cd3; -[SCGalleryLockedRateLimitView _generateDescriptionString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de7bc4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + _DAT_11277bb74) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef8698;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8698,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277bb78);
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277bb70));
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dde098);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277bb70));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 108de7cd4; end: 108de7ce3; -[SCGalleryLockedRateLimitView expirationMinutes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108de7cd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277bb68);
}



/* Entry: 108de7ce4; end: 108de7d43; -[SCGalleryLockedRateLimitView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108de7ce4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277bb78,0);
  _objc_storeStrong(param_1 + _DAT_11277bb74,0);
  _objc_storeStrong(param_1 + _DAT_11277bb70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277bb6c,0);
  return;
}



/* Entry: 108de7d44; end: 108de7e93; +[SCGalleryPasscodeViewConfiguration defaultConfiguration] */

void FUN_108de7d44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d27b0;
  _objc_alloc_init(PTR_PTR_1126d27b0);
  func_0x00010c1d9500();
  func_0x00010c1ac120(0x4028000000000000,puVar1);
  func_0x00010c1ac140(0x4034000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14d460();
  if ((((int)puVar3 == 0) || (puVar3 = puVar2, func_0x00010c14d280(), ((ulong)puVar3 & 1) == 0)) &&
     ((puVar3 = puVar2, func_0x00010c14d460(), (int)puVar3 == 0 ||
      (puVar3 = puVar2, func_0x00010c14d2a0(), ((ulong)puVar3 & 1) == 0)))) {
    puVar3 = puVar2;
    func_0x00010c14d480();
    if (((int)puVar3 == 0) || (puVar3 = puVar2, func_0x00010c14d2c0(), ((ulong)puVar3 & 1) == 0)) {
      puVar3 = puVar2;
      func_0x00010c14d4a0();
      uVar5 = 0x403c000000000000;
      if ((int)puVar3 != 0) {
        func_0x00010c14d2e0(puVar2);
      }
      uVar6 = 0x4040000000000000;
      uVar7 = 0x4052000000000000;
      uVar4 = 0x4046000000000000;
    }
    else {
      uVar5 = 0x4038000000000000;
      uVar7 = 0x404e000000000000;
      uVar4 = 0x4040000000000000;
      uVar6 = 0x4040000000000000;
    }
  }
  else {
    uVar5 = 0x402c000000000000;
    uVar6 = 0x403c000000000000;
    uVar4 = 0x4032000000000000;
    uVar7 = 0x404a000000000000;
  }
  func_0x00010c2073a0(uVar4,puVar1);
  func_0x00010c1b6cc0(uVar7,puVar1);
  func_0x00010c1b6c20(uVar6,puVar1);
  func_0x00010c1b6d40(uVar5,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108de7e94; end: 108de7e9b; -[SCGalleryPasscodeViewConfiguration passcodeLength] */

undefined8 FUN_108de7e94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108de7e9c; end: 108de7ea3; -[SCGalleryPasscodeViewConfiguration setPasscodeLength:] */

void FUN_108de7e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108de7ea4; end: 108de7eab; -[SCGalleryPasscodeViewConfiguration indicatorSize] */

undefined8 FUN_108de7ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108de7eac; end: 108de7eb3; -[SCGalleryPasscodeViewConfiguration setIndicatorSize:] */

void FUN_108de7eac(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 108de7eb4; end: 108de7ebb; -[SCGalleryPasscodeViewConfiguration indicatorSpacing] */

undefined8 FUN_108de7eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108de7ebc; end: 108de7ec3; -[SCGalleryPasscodeViewConfiguration setIndicatorSpacing:] */

void FUN_108de7ebc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 108de7ec4; end: 108de7ecb; -[SCGalleryPasscodeViewConfiguration spacingBetweenIndicatorsAndKeys] */

undefined8 FUN_108de7ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108de7ecc; end: 108de7ed3; -[SCGalleryPasscodeViewConfiguration setSpacingBetweenIndicatorsAndKeys:] */

void FUN_108de7ecc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 108de7ed4; end: 108de7edb; -[SCGalleryPasscodeViewConfiguration keySize] */

undefined8 FUN_108de7ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108de7edc; end: 108de7ee3; -[SCGalleryPasscodeViewConfiguration setKeySize:] */

void FUN_108de7edc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108de7ee4; end: 108de7eeb; -[SCGalleryPasscodeViewConfiguration keyHorizontalSpacing] */

undefined8 FUN_108de7ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108de7eec; end: 108de7ef3; -[SCGalleryPasscodeViewConfiguration setKeyHorizontalSpacing:] */

void FUN_108de7eec(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 108de7ef4; end: 108de7efb; -[SCGalleryPasscodeViewConfiguration keyVerticalSpacing] */

undefined8 FUN_108de7ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108de7efc; end: 108de7f03; -[SCGalleryPasscodeViewConfiguration setKeyVerticalSpacing:] */

void FUN_108de7efc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}


