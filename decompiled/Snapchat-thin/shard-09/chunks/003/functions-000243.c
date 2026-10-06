/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c5eb80; end: 106c5eb87; -[SCPlusStoreKitServicePurchaseHandleManager complete:type:] */

void FUN_106c5eb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_complete_type_data__1125ae780,param_3,param_4,0);
  return;
}



/* Entry: 106c5eb88; end: 106c5ec5f; -[SCPlusStoreKitServicePurchaseHandleManager complete:type:data:] */

void FUN_106c5eb88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c117d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d1bd0;
    _objc_alloc(PTR_PTR_1126d1bd0);
    func_0x00010c055a20();
    func_0x00010bf43d60(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
    func_0x00010bde05e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106c5ec60; end: 106c5ed9f; -[SCPlusStoreKitServicePurchaseHandleManager fail:error:] */

void FUN_106c5ec60(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    lVar2 = param_4;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    if ((int)lVar3 == 0) {
      _objc_release(lVar2);
    }
    else {
      lVar3 = param_4;
      func_0x00010bf3ec40();
      _objc_release(lVar2);
      if (lVar3 == 2) {
        func_0x00010bf43740(param_1,param_2,param_3,0);
        goto LAB_106c5ed80;
      }
    }
    if (*(char *)(param_1 + 0x20) == '\x01') {
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = param_3;
      _objc_release(uVar4);
      _objc_retain(param_4);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = param_4;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c117d80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    _objc_release(uVar4);
  }
LAB_106c5ed80:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c5eda0; end: 106c5ee1b; -[SCPlusStoreKitServicePurchaseHandleManager processing:] */

void FUN_106c5eda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde0ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearPendingFail_112555c48);
    return;
  }
  return;
}



/* Entry: 106c5ee1c; end: 106c5ee9b; -[SCPlusStoreKitServicePurchaseHandleManager metadata:] */

void FUN_106c5ee1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    func_0x00010c0cc0c0(*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c5ee9c; end: 106c5eec3; -[SCPlusStoreKitServicePurchaseHandleManager _clearHandle] */

void FUN_106c5ee9c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bde0aa0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c5eec4; end: 106c5ef17; -[SCPlusStoreKitServicePurchaseHandleManager .cxx_destruct] */

void FUN_106c5eec4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c5ef18; end: 106c5f053; -[SCPlusStoreKitSyntheticTransaction initWithProductIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106c5ef18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f5f38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___SKMutablePayment_1126d1bd8;
    _objc_opt_new();
    lVar6 = (long)_DAT_11275b7c8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c1e3be0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1e62e0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e7cab8;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b7cc);
    *(undefined ***)((long)puVar1 + (long)_DAT_11275b7cc) = ppuVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275b7d0);
    *(undefined **)((long)puVar1 + (long)_DAT_11275b7d0) = puVar2;
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c5f054; end: 106c5f083; -[SCPlusStoreKitSyntheticTransaction payment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c5f054(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275b7c8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c5f084; end: 106c5f0b3; -[SCPlusStoreKitSyntheticTransaction transactionIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c5f084(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275b7cc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c5f0b4; end: 106c5f0bb; -[SCPlusStoreKitSyntheticTransaction transactionState] */

undefined8 FUN_106c5f0b4(void)

{
  return 1;
}



/* Entry: 106c5f0bc; end: 106c5f0eb; -[SCPlusStoreKitSyntheticTransaction transactionDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c5f0bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275b7d0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c5f0ec; end: 106c5f0f3; -[SCPlusStoreKitSyntheticTransaction originalTransaction] */

undefined8 FUN_106c5f0ec(void)

{
  return 0;
}



/* Entry: 106c5f0f4; end: 106c5f0fb; -[SCPlusStoreKitSyntheticTransaction error] */

undefined8 FUN_106c5f0f4(void)

{
  return 0;
}



/* Entry: 106c5f0fc; end: 106c5f107; -[SCPlusStoreKitSyntheticTransaction downloads] */

undefined * FUN_106c5f0fc(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106c5f108; end: 106c5f157; -[SCPlusStoreKitSyntheticTransaction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c5f108(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275b7d0,0);
  _objc_storeStrong(param_1 + _DAT_11275b7cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275b7c8,0);
  return;
}



/* Entry: 106c5f158; end: 106c5f2cb; -[SCPlusStoreKitUserServiceImpl initWithPerformerProvider:grpcClientFactory:plusServices:userInfoFetcherServices:snapchattersDataMutator:] */

undefined1 *
FUN_106c5f158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f5f40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x000100a15258(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c5f2cc; end: 106c5f48f; -[SCPlusStoreKitUserServiceImpl forceSyncSubscriptionState] */

void FUN_106c5f2cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf45100();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    puVar4 = *(undefined **)(param_1 + 0x10);
    func_0x00010c292880(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb5060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c292880(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb5060();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar6 = puVar4;
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c5f490; end: 106c5f58b;  */

void FUN_106c5f490(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar2 = *(long *)(lVar1 + 8);
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf9dae0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c252440();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar6 != 0) {
      _objc_opt_class(lVar1);
      func_0x00010bec99a0();
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c5f58c; end: 106c5f637; -[SCPlusStoreKitUserServiceImpl forceSyncSubscriptionStateWithTargetTier:targetStatus:] */

void FUN_106c5f58c(undefined *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae558;
  if ((param_3 < 5) && (param_4 < 10)) {
    _objc_opt_class();
    func_0x00010bec9f80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e7caf8;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7caf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar2,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5f638; end: 106c5f6bb; -[SCPlusStoreKitUserServiceImpl fetchExternalUserIdWithSk2Transaction:] */

void FUN_106c5f638(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be9f360(PTR_PTR_1126d1af8,param_2,*(undefined8 *)(param_1 + 0x20),param_3,puVar1);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5f6bc; end: 106c5f7ab; +[SCPlusStoreKitUserServiceImpl _syncUserInfoIfNeeded:userInfoFetcherServices:snapchattersDataMutator:performer:targetTier:targetStatus:] */

void FUN_106c5f6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bec9fa0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_7,param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5f7ac; end: 106c5faff; +[SCPlusStoreKitUserServiceImpl _syncUserInfoWithBackoff:userInfoFetcherServices:snapchattersDataMutator:performer:promise:targetTier:targetStatus:currentAttempt:] */

void FUN_106c5f7ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,int param_9,
                  undefined4 param_10,long param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  double dVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a5778);
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  func_0x00010c069d00(lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c080120();
  if (((uint)(param_8 == 0) == (uint)lVar1) ||
     (lVar1 = lVar3, func_0x00010c252d60(), lVar1 != param_9)) {
    if (param_11 < 10) {
      if (param_11 < 1) {
        dVar8 = 0.25;
      }
      else {
        dVar8 = (double)(param_11 - 1);
        _exp2();
        dVar8 = (double)NEON_fminnm(dVar8,0x4024000000000000);
        if (dVar8 <= 0.25) {
          dVar8 = 0.25;
        }
      }
      _objc_retain(param_4);
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_6);
      _objc_retain(param_7);
      func_0x00010c0f7fe0(dVar8,param_6);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_release(param_4);
      goto LAB_106c5faac;
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110e7cb18;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cb18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_7);
  }
  else {
    lVar1 = param_3;
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf9dae0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c252440();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar6 != 0) {
      func_0x00010bec99a0(param_1);
    }
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(param_7);
  }
  _objc_release(ppuVar7);
LAB_106c5faac:
  _objc_release(lVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c5fb00; end: 106c5fc4b;  */

void FUN_106c5fb00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c292880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106c5fc4c;
  puStack_88 = &UNK_11096be90;
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar5;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar5;
  _objc_retain(uVar4);
  uStack_48 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = uVar4;
  func_0x00010c297260(uVar3,param_2,&puStack_a0,*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  return;
}



/* Entry: 106c5fc4c; end: 106c5fc8b;  */

void FUN_106c5fc4c(long param_1,undefined8 param_2)

{
  func_0x00010bec9fa0(*(undefined8 *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  return;
}



/* Entry: 106c5fc8c; end: 106c5feab; +[SCPlusStoreKitUserServiceImpl _sendGetExternalUserIDRequestWithGrpcClient:sk2Transaction:promise:] */

void FUN_106c5fc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d1c10;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1e52e0();
  if (param_4 != 0) {
    puVar2 = PTR_PTR_1126d1c18;
    _objc_opt_new(PTR_PTR_1126d1c18);
    lVar3 = param_4;
    func_0x00010c279800(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219600(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010c0edaa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d68a0(puVar2,param_2,lVar3);
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126d1c20;
    _objc_opt_new(PTR_PTR_1126d1c20);
    func_0x00010c1b94e0();
    func_0x00010c169800(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  puVar4 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  puVar2 = PTR_PTR_1126d1c28;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106c5feac;
  puStack_60 = &UNK_11096bc10;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_opt_class(puVar2);
  func_0x00010c0199c0(puVar4,param_2,&puStack_78,puVar2);
  uVar5 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar5,param_2,&PTR____CFConstantStringClassReference_110e7cb58,puVar2,puVar6,
                      puVar4);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 106c5feac; end: 106c5ff6b;  */

void FUN_106c5feac(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010bf987e0();
    if ((int)lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010bf9e6c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        ppuVar3 = &PTR____CFConstantStringClassReference_110e7cb38;
        FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cb38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43ca0(uVar4);
        _objc_release(ppuVar3);
        goto LAB_106c5ff24;
      }
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
LAB_106c5ff24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c5ff6c; end: 106c5ffd7; +[SCPlusStoreKitUserServiceImpl _syncFriends:] */

void FUN_106c5ff6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bb6f8;
  func_0x00010bfa6d80(PTR_PTR_1126bb6f8,param_2,4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2900(param_3,param_2,puVar1,0,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c5ffd8; end: 106c6002b; -[SCPlusStoreKitUserServiceImpl .cxx_destruct] */

void FUN_106c5ffd8(long param_1)

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



/* Entry: 106c6002c; end: 106c600f3; -[SCPlusStoreKitProductsRequest initWithProductIdentifiers:] */

undefined1 * FUN_106c6002c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5f48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___SKProductsRequest_1126c0100;
    _objc_alloc();
    func_0x00010c03a920();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x10));
    func_0x00010c24d960(*(undefined8 *)((long)puVar1 + 0x10));
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 **)((long)puVar1 + 0x18) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c600f4; end: 106c600fb; -[SCPlusStoreKitProductsRequest future] */

void FUN_106c600f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 106c600fc; end: 106c60327; -[SCPlusStoreKitProductsRequest productsRequest:didReceiveResponse:] */

void FUN_106c600fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  lVar2 = param_4;
  func_0x00010c069c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126d1c30;
    _objc_alloc_init(PTR_PTR_1126d1c30);
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
    func_0x00010bf6a0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c257f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf53280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar9 = ppuVar7;
    }
    _objc_retain(ppuVar9);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    lVar8 = param_4;
    func_0x00010c069c40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar8);
        }
        FUN_106c6861c(puVar4,*(undefined8 *)(lVar11 * 8),ppuVar9,1);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    _objc_release(ppuVar9);
    _objc_release(puVar4);
  }
  lVar2 = param_4;
  func_0x00010c1163e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR___NSConcreteGlobalBlock_11096bec0;
  lVar3 = lVar2;
  func_0x00010050471c();
  _objc_release(lVar2);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 8));
  _objc_release(lVar3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c115eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar9,PTR_s_productIdentifier_1126231c8);
  return;
}



/* Entry: 106c60328; end: 106c6032f;  */

void FUN_106c60328(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c115eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_productIdentifier_1126231c8);
  return;
}



/* Entry: 106c60330; end: 106c60357;  */

void FUN_106c60330(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c60358; end: 106c603a7; -[SCPlusStoreKitProductsRequest request:didFailWithError:] */

void FUN_106c60358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 8),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c603a8; end: 106c603e3; -[SCPlusStoreKitProductsRequest .cxx_destruct] */

void FUN_106c603a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c603e4; end: 106c6048b; -[SCPlusStoreKitReceiptRefreshRequest init] */

undefined1 * FUN_106c603e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5f50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___SKReceiptRefreshRequest_1126d1c38;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x10));
    func_0x00010c24d960(*(undefined8 *)((long)puVar1 + 0x10));
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 **)((long)puVar1 + 0x18) = puVar1;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106c6048c; end: 106c60493; -[SCPlusStoreKitReceiptRefreshRequest future] */

void FUN_106c6048c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 106c60494; end: 106c604e7; -[SCPlusStoreKitReceiptRefreshRequest requestDidFinish:] */

void FUN_106c60494(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106c604e8; end: 106c60537; -[SCPlusStoreKitReceiptRefreshRequest request:didFailWithError:] */

void FUN_106c604e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 8),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c60538; end: 106c60573; -[SCPlusStoreKitReceiptRefreshRequest .cxx_destruct] */

void FUN_106c60538(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c60574; end: 106c60707; -[SCPlusStoreKitALCTransactionProcessor finishTransaction:metadata:purchaseHandleManager:] */

void FUN_106c60574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_opt_class(param_1);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106c610ec;
  uStack_50 = 0x106c610fc;
  uStack_48 = 0;
  func_0x00010c0c0700(param_4);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  func_0x00010be173a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106c60708; end: 106c60977; +[SCPlusStoreKitALCTransactionProcessor _finishTransaction:entityId:paymentQueue:performer:grpcClient:purchaseHandleManager:] */

void FUN_106c60708(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bfafd40(param_5,param_2,param_3);
    uVar4 = param_3;
    func_0x00010c0f67c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43740(param_8,param_2,uVar5,3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar4 = param_3;
    func_0x00010c0f67c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    FUN_106c58588();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106c60978;
    puStack_a8 = &UNK_11096bf60;
    _objc_retain(param_6);
    uStack_a0 = param_6;
    uStack_68 = param_1;
    _objc_retain(param_3);
    uStack_98 = param_3;
    _objc_retain(param_4);
    lStack_90 = param_4;
    _objc_retain(param_5);
    uStack_88 = param_5;
    _objc_retain(param_7);
    uStack_80 = param_7;
    _objc_retain(param_8);
    uStack_78 = param_8;
    puStack_70 = puVar2;
    func_0x00010c297260(uVar3,param_2,&puStack_c0,param_6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar6 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(lStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c60978; end: 106c60b03;  */

void FUN_106c60978(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106c60b04;
  puStack_88 = &UNK_11096bf00;
  uStack_58 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar2;
  uStack_70 = param_2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar3;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  _objc_retain(param_2);
  FUN_106c778cc(uVar1,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  func_0x00010c297260(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_2);
  return;
}



/* Entry: 106c60b04; end: 106c60b7b;  */

void FUN_106c60b04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0ec5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0d60(uVar4,param_2,uVar1,uVar2,uVar3,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106c60b7c; end: 106c60c83;  */

void FUN_106c60b7c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f67c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43740(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e7cb78;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cb78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
    return;
  }
  func_0x00010c252d60(param_2);
  func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x38));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f67c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43740(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106c60c84; end: 106c60dd7; +[SCPlusStoreKitALCTransactionProcessor _sendToServer:entityId:product:paymentQueue:grpcClient:] */

void FUN_106c60c84(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c0f67c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000106c58498();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126ae558;
  if (lVar3 == 7) {
    func_0x00010be9f480(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e7cb98;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cb98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar5,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c60dd8; end: 106c6109b; +[SCPlusStoreKitALCTransactionProcessor _sendIAPToServer:entityId:product:paymentQueue:grpcClient:] */

void FUN_106c60dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106c6723c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e7cbb8;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cbb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = (undefined **)PTR_PTR_1126d1c40;
    _objc_opt_new();
    func_0x00010c196620();
    uVar4 = param_5;
    FUN_106c58ed4(param_5,param_6,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d60e0(ppuVar7);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    _objc_opt_class(PTR_PTR_1126d1c48);
    func_0x00010c0199c0(puVar5);
    uVar4 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010bf63640(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar4);
    _objc_release(puVar1);
    _objc_release(ppuVar6);
    _objc_release(uVar4);
    puVar1 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar7);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c6109c; end: 106c610af;  */

void FUN_106c6109c(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 106c610b0; end: 106c610eb; -[SCPlusStoreKitALCTransactionProcessor .cxx_destruct] */

void FUN_106c610b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c610ec; end: 106c6111b;  */

void FUN_106c610ec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c6111c; end: 106c61153;  */

void FUN_106c6111c(long param_1,undefined8 param_2)

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



/* Entry: 106c61154; end: 106c613c3; -[SCPlusStoreKitBitmojiTransactionProcessor finishTransaction:metadata:purchaseHandleManager:] */

void FUN_106c61154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_opt_class();
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_106c6254c;
  uStack_80 = 0x106c6255c;
  ppuStack_78 = (undefined **)0x0;
  func_0x00010c0c0700(param_4);
  uVar1 = puStack_98[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(ppuStack_78);
  _objc_release(param_4);
  _objc_retain(param_4);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_106c6254c;
  uStack_80 = 0x106c6255c;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daafd8;
  puStack_98 = &uStack_a0;
  func_0x00010c0c0700(param_4);
  uVar2 = puStack_98[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(ppuStack_78);
  _objc_release(param_4);
  func_0x00010be17360(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106c613c4; end: 106c6163f; +[SCPlusStoreKitBitmojiTransactionProcessor _finishTransaction:contentId:domainInfo:paymentQueue:performer:grpcClient:v2GrpcClient:configProvider:purchaseHandleManager:] */

void FUN_106c613c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0f67c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_106c58588();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106c61640;
  puStack_c8 = &UNK_11096c0e0;
  uStack_90 = param_9;
  uStack_88 = param_10;
  uStack_80 = param_11;
  uStack_c0 = param_7;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  uStack_98 = param_8;
  puStack_78 = puVar1;
  uStack_70 = param_1;
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_7);
  func_0x00010c297260(uVar4,param_2,&puStack_e0,param_7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c61640; end: 106c61813;  */

void FUN_106c61640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106c61814;
  puStack_a0 = &UNK_11096c080;
  uStack_58 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = uVar3;
  uStack_80 = param_2;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_70 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_68 = uVar2;
  _objc_retain(uVar3);
  uStack_60 = uVar3;
  _objc_retain(param_2);
  FUN_106c778cc(uVar1,&puStack_b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  func_0x00010c297260(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_2);
  return;
}



/* Entry: 106c61814; end: 106c619db;  */

void FUN_106c61814(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0ec5e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0d20(uVar5,param_2,uVar1,uVar3,uVar2,uVar4,*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106c619dc; end: 106c61be3; +[SCPlusStoreKitBitmojiTransactionProcessor _sendToServer:contentId:domainInfo:product:paymentQueue:grpcClient:v2GrpcClient:configProvider:] */

void FUN_106c619dc(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_10;
  func_0x00010bf1f440(param_10,param_2,&PTR____CFConstantStringClassReference_110e7cc18,0,0);
  lVar2 = param_3;
  func_0x00010c0f67c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000106c58498();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126ae558;
  if (lVar4 == 6) {
    if ((int)uVar1 == 0) {
      func_0x00010be9f460(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
    }
    else {
      func_0x00010be9f4a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9,param_10);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
    }
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e7cb98;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cb98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar6,param_2,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c61be4; end: 106c61eeb; +[SCPlusStoreKitBitmojiTransactionProcessor _sendIAPToServer:contentId:domainInfo:product:paymentQueue:grpcClient:configProvider:] */

void FUN_106c61be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106c6723c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e7cbb8;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cbb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar8 = (undefined **)PTR_PTR_1126d1c50;
    _objc_opt_new();
    uVar4 = param_4;
    func_0x00010bdc3580(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5e20(ppuVar8);
    _objc_release(uVar4);
    uVar4 = param_3;
    FUN_106c58c70(param_3,param_6,param_7,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e81a0(ppuVar8);
    _objc_release(uVar4);
    func_0x00010c171180(ppuVar8);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    _objc_opt_class(PTR_PTR_1126d1c60);
    func_0x00010c0199c0(puVar5);
    uVar4 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar8;
    func_0x00010bf63640(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_9;
    FUN_106c61f9c(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar4);
    _objc_release(uVar7);
    _objc_release(ppuVar6);
    _objc_release(uVar4);
    puVar1 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar8);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c61eec; end: 106c61f9b;  */

void FUN_106c61eec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d1c58;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1c740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c61f9c; end: 106c6213f;  */

void FUN_106c61f9c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined ***pppuVar14;
  undefined8 uVar15;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126ae748;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = &PTR____CFConstantStringClassReference_110de0e38;
  pppuVar14 = (undefined ***)0x0;
  uVar15 = 0;
  lVar3 = param_1;
  func_0x00010bf1f440();
  _objc_release(param_1);
  lVar4 = lVar2;
  func_0x00010c08fa60();
  puVar6 = puVar1;
  if (lVar4 != 0) {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dadcb8;
    pppuVar14 = &ppuStack_58;
    uVar15 = 1;
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = lVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar5;
    func_0x00010bef9140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(ppuVar5);
  }
  puVar1 = puVar6;
  if ((int)lVar3 != 0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e7cc58;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110de0e58;
    pppuVar14 = &ppuStack_68;
    uVar15 = 1;
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar5;
    func_0x00010bef9140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(ppuVar5);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(ppuVar13);
    _objc_retain(pppuVar14);
    _objc_retain(uVar15);
    _objc_retain(in_x5);
    _objc_retain(in_x6);
    _objc_retain(in_x7);
    _objc_retain(uStack_70);
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    FUN_106c6723c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar7 = puVar6;
    func_0x00010c08fa60();
    puVar1 = PTR_PTR_1126ae558;
    if (puVar7 == (undefined *)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e7cbb8;
      FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cbb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9c80(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar5 = (undefined **)PTR_PTR_1126d1c68;
      _objc_opt_new();
      pppuVar8 = pppuVar14;
      func_0x00010bdc3580(pppuVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b5e20(ppuVar5);
      _objc_release(pppuVar8);
      ppuVar9 = ppuVar13;
      FUN_106c58c70(ppuVar13,in_x5,in_x6,puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e81a0(ppuVar5);
      _objc_release(ppuVar9);
      func_0x00010c171180(ppuVar5);
      puVar7 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar10 = PTR_PTR_1126ae988;
      _objc_alloc(PTR_PTR_1126ae988);
      _objc_opt_class(PTR_PTR_1126d1c70);
      func_0x00010c0199c0(puVar10);
      uVar11 = in_x7;
      func_0x00010c269d40(in_x7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar5;
      func_0x00010bf63640(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uStack_70;
      FUN_106c61f9c(uStack_70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27f2c0(uVar11);
      _objc_release(uVar12);
      _objc_release(ppuVar9);
      _objc_release(uVar11);
      puVar1 = puVar7;
      func_0x00010bfbc3e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar7);
    }
    _objc_release(ppuVar5);
    _objc_release(puVar6);
    _objc_release(uStack_70);
    _objc_release(in_x7);
    _objc_release(in_x6);
    _objc_release(in_x5);
    _objc_release(uVar15);
    _objc_release(pppuVar14);
    _objc_release(ppuVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c62140; end: 106c62447; +[SCPlusStoreKitBitmojiTransactionProcessor _sendIAPV2ToServer:contentId:domainInfo:product:paymentQueue:v2GrpcClient:configProvider:] */

void FUN_106c62140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106c6723c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e7cbb8;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cbb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar8 = (undefined **)PTR_PTR_1126d1c68;
    _objc_opt_new();
    uVar4 = param_4;
    func_0x00010bdc3580(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5e20(ppuVar8);
    _objc_release(uVar4);
    uVar4 = param_3;
    FUN_106c58c70(param_3,param_6,param_7,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e81a0(ppuVar8);
    _objc_release(uVar4);
    func_0x00010c171180(ppuVar8);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    _objc_opt_class(PTR_PTR_1126d1c70);
    func_0x00010c0199c0(puVar5);
    uVar4 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar8;
    func_0x00010bf63640(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_9;
    FUN_106c61f9c(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar4);
    _objc_release(uVar7);
    _objc_release(ppuVar6);
    _objc_release(uVar4);
    puVar1 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar8);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c62448; end: 106c624f7;  */

void FUN_106c62448(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d1c58;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1c740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c624f8; end: 106c6254b; -[SCPlusStoreKitBitmojiTransactionProcessor .cxx_destruct] */

void FUN_106c624f8(long param_1)

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



/* Entry: 106c6254c; end: 106c62577;  */

void FUN_106c6254c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c62578; end: 106c625af;  */

void FUN_106c62578(long param_1,undefined8 param_2)

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



/* Entry: 106c625b0; end: 106c625c7;  */

void FUN_106c625b0(void)

{
  return;
}



/* Entry: 106c625c8; end: 106c62607;  */

void FUN_106c625c8(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(ppuVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106c62608; end: 106c6260b;  */

void FUN_106c62608(void)

{
  return;
}



/* Entry: 106c6260c; end: 106c626d3; -[SCPlusStoreKitBulkStreakRestoreTransactionProcessor finishTransaction:metadata:purchaseHandleManager:] */

void FUN_106c6260c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  uVar2 = param_4;
  FUN_106c59830(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010be17440(lVar1,param_2,param_3,uVar2,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),param_5,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c626d4; end: 106c628f7; +[SCPlusStoreKitBulkStreakRestoreTransactionProcessor _finishTransaction:traceId:paymentQueue:performer:grpcClient:purchaseHandleManager:nativeMessagingServices:] */

void FUN_106c626d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0f67c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_106c58588();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106c628f8;
  puStack_b0 = &UNK_11096c3b0;
  uStack_70 = param_9;
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_88 = param_7;
  uStack_80 = param_8;
  puStack_78 = puVar1;
  uStack_68 = param_1;
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c297260(uVar4,param_2,&puStack_c8,param_6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c628f8; end: 106c62aaf;  */

void FUN_106c628f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_106c587d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106c62ab0;
  puStack_80 = &UNK_11096c320;
  uStack_58 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar3;
  uStack_68 = uVar1;
  _objc_retain(uVar4);
  uStack_60 = uVar4;
  FUN_106c778cc(uVar2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  func_0x00010c297260(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uVar1);
  return;
}



/* Entry: 106c62ab0; end: 106c62ac3;  */

void FUN_106c62ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea0df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s__sendToServer_traceId_productInf_112585d20,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106c62ac4; end: 106c62c93;  */

void FUN_106c62ac4(long param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106c62c94;
    puStack_68 = &UNK_110863958;
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    ppuStack_60 = param_2;
    _objc_retain(uVar3);
    uStack_58 = uVar3;
    FUN_106c778cc(uVar2,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    _objc_retain(param_2);
    func_0x00010c297260(uVar2);
    _objc_release(param_2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uStack_58);
    ppuVar1 = ppuStack_60;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f67c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43740(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e7cb78;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cb78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2);
  }
  _objc_release(ppuVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106c62c94; end: 106c62ce7;  */

void FUN_106c62c94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf504c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_106c75220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c62ce8; end: 106c62d87;  */

void FUN_106c62ce8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0f67c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252d60();
  func_0x00010bf43740(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c62d88; end: 106c63093; +[SCPlusStoreKitBulkStreakRestoreTransactionProcessor _sendToServer:traceId:productInfo:grpcClient:] */

void FUN_106c62d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106c6723c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e7cbb8;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cbb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = (undefined **)PTR_PTR_1126d1c78;
    _objc_opt_new(PTR_PTR_1126d1c78);
    func_0x00010c218e40();
    uVar4 = param_3;
    FUN_106c58af0(param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e81a0(ppuVar7);
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c257f80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c3c0(ppuVar7);
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c112ac0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e28e0(ppuVar7);
    _objc_release(uVar4);
    func_0x00010c112aa0(param_5);
    func_0x00010c1e28a0(ppuVar7);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    _objc_opt_class(PTR_PTR_1126d1c80);
    func_0x00010c0199c0(puVar5);
    uVar4 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010bf63640(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar4);
    _objc_release(puVar1);
    _objc_release(ppuVar6);
    _objc_release(uVar4);
    puVar1 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar7);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c63094; end: 106c630a7;  */

void FUN_106c63094(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 106c630a8; end: 106c630ef; -[SCPlusStoreKitBulkStreakRestoreTransactionProcessor .cxx_destruct] */

void FUN_106c630a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c630f0; end: 106c63283; -[SCPlusStoreKitDreamsTransactionProcessor finishTransaction:metadata:purchaseHandleManager:] */

void FUN_106c630f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_opt_class(param_1);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106c63a8c;
  uStack_50 = 0x106c63a9c;
  uStack_48 = 0;
  func_0x00010c0c0700(param_4);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  func_0x00010be173c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106c63284; end: 106c6346b; +[SCPlusStoreKitDreamsTransactionProcessor _finishTransaction:generationId:paymentQueue:performer:grpcClient:purchaseHandleManager:] */

void FUN_106c63284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0f67c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_106c58588();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106c6346c;
  puStack_a8 = &UNK_11096bf60;
  uStack_a0 = param_6;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_88 = param_5;
  uStack_80 = param_7;
  uStack_78 = param_8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c297260(uVar4,param_2,&puStack_c0,param_6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c6346c; end: 106c635f7;  */

void FUN_106c6346c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106c635f8;
  puStack_88 = &UNK_11096bf00;
  uStack_58 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar2;
  uStack_70 = param_2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar3;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  _objc_retain(param_2);
  FUN_106c778cc(uVar1,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  func_0x00010c297260(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_2);
  return;
}



/* Entry: 106c635f8; end: 106c6366f;  */

void FUN_106c635f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0ec5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0d80(uVar4,param_2,uVar1,uVar2,uVar3,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106c63670; end: 106c63777;  */

void FUN_106c63670(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f67c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43740(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e7cb78;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cb78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
    return;
  }
  func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x38),param_2,uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f67c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43740(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106c63778; end: 106c63a3b; +[SCPlusStoreKitDreamsTransactionProcessor _sendToServer:generationId:product:paymentQueue:grpcClient:] */

void FUN_106c63778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106c6723c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e7cbb8;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cbb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = (undefined **)PTR_PTR_1126d1c88;
    _objc_opt_new();
    func_0x00010c1a2840();
    uVar4 = param_3;
    FUN_106c58c70(param_3,param_5,param_6,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e81a0(ppuVar7);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    _objc_opt_class(PTR_PTR_1126d1c90);
    func_0x00010c0199c0(puVar5);
    uVar4 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010bf63640(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar4);
    _objc_release(puVar1);
    _objc_release(ppuVar6);
    _objc_release(uVar4);
    puVar1 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar7);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c63a3c; end: 106c63a4f;  */

void FUN_106c63a3c(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 106c63a50; end: 106c63a8b; -[SCPlusStoreKitDreamsTransactionProcessor .cxx_destruct] */

void FUN_106c63a50(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c63a8c; end: 106c63ab3;  */

void FUN_106c63a8c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c63ab4; end: 106c63aeb;  */

void FUN_106c63ab4(long param_1,undefined8 param_2)

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



/* Entry: 106c63aec; end: 106c63af3;  */

void FUN_106c63aec(void)

{
  return;
}



/* Entry: 106c63af4; end: 106c63c87; -[SCPlusStoreKitGiftTransactionProcessor finishTransaction:metadata:purchaseHandleManager:] */

void FUN_106c63af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_opt_class(param_1);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106c64464;
  uStack_50 = 0x106c64474;
  uStack_48 = 0;
  func_0x00010c0c0700(param_4);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  func_0x00010be17400(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106c63c88; end: 106c63e6f; +[SCPlusStoreKitGiftTransactionProcessor _finishTransaction:recipientUserId:paymentQueue:performer:grpcClient:purchaseHandleManager:] */

void FUN_106c63c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0f67c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_106c58588();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106c63e70;
  puStack_a8 = &UNK_11096bf60;
  uStack_a0 = param_5;
  uStack_98 = param_6;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_7;
  uStack_78 = param_8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c297260(uVar4,param_2,&puStack_c0,param_6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c63e70; end: 106c63ff7;  */

void FUN_106c63e70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_106c587d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106c63ff8;
  puStack_80 = &UNK_11096c320;
  uStack_58 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar3;
  uStack_68 = uVar1;
  _objc_retain(uVar4);
  uStack_60 = uVar4;
  FUN_106c778cc(uVar2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  func_0x00010c297260(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uVar1);
  return;
}



/* Entry: 106c63ff8; end: 106c6400b;  */

void FUN_106c63ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea0dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s__sendToServer_recipientUserId_pr_112585d18,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106c6400c; end: 106c64113;  */

void FUN_106c6400c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f67c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43740(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e7cb78;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cb78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
    return;
  }
  func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x38),param_2,uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f67c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43740(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106c64114; end: 106c64413; +[SCPlusStoreKitGiftTransactionProcessor _sendToServer:recipientUserId:productInfo:grpcClient:] */

void FUN_106c64114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106c6723c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e7cbb8;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cbb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = (undefined **)PTR_PTR_1126d1c98;
    _objc_opt_new(PTR_PTR_1126d1c98);
    func_0x00010c1e83e0();
    uVar4 = param_3;
    FUN_106c58af0(param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e81a0(ppuVar7);
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c257f80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c3c0(ppuVar7);
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c112ac0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e28e0(ppuVar7);
    _objc_release(uVar4);
    func_0x00010c112aa0(param_5);
    func_0x00010c1e28a0(ppuVar7);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    _objc_opt_class(PTR_PTR_1126d1ca0);
    func_0x00010c0199c0(puVar5);
    uVar4 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010bf63640(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar4);
    _objc_release(puVar1);
    _objc_release(ppuVar6);
    _objc_release(uVar4);
    puVar1 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar7);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c64414; end: 106c64427;  */

void FUN_106c64414(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 106c64428; end: 106c64463; -[SCPlusStoreKitGiftTransactionProcessor .cxx_destruct] */

void FUN_106c64428(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c64464; end: 106c6447f;  */

void FUN_106c64464(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c64480; end: 106c644b7;  */

void FUN_106c64480(long param_1,undefined8 param_2)

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



/* Entry: 106c644b8; end: 106c644cb;  */

void FUN_106c644b8(void)

{
  return;
}


