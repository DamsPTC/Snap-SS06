/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aec5450; end: 10aec54c7; -[SCLensScheduleLocationRequestMetadata initWithLocation:] */

undefined1 * FUN_10aec5450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127017b8;
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



/* Entry: 10aec54c8; end: 10aec54eb; -[SCLensScheduleLocationRequestMetadata copyWithZone:] */

undefined8 FUN_10aec54c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec54ec; end: 10aec54f3; -[SCLensScheduleLocationRequestMetadata hash] */

void FUN_10aec54ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10aec54f4; end: 10aec5583; -[SCLensScheduleLocationRequestMetadata isEqual:] */

long FUN_10aec54f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec5568;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10aec5568;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10aec5568;
    }
  }
  lVar3 = 1;
LAB_10aec5568:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec5584; end: 10aec558b; -[SCLensScheduleLocationRequestMetadata location] */

undefined8 FUN_10aec5584(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec558c; end: 10aec5597; -[SCLensScheduleLocationRequestMetadata .cxx_destruct] */

void FUN_10aec558c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec5598; end: 10aec561f; -[SCLensMetadataCacheResult initWithLens:needsUpdate:] */

undefined1 *
FUN_10aec5598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127017c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec5620; end: 10aec5643; -[SCLensMetadataCacheResult copyWithZone:] */

undefined8 FUN_10aec5620(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec5644; end: 10aec56af; -[SCLensMetadataCacheResult hash] */

undefined8 * FUN_10aec5644(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aec5734;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10aec5734;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10aec5734;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10aec5734:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10aec56b0; end: 10aec574f; -[SCLensMetadataCacheResult isEqual:] */

long FUN_10aec56b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec5734;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10aec5734;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10aec5734;
    }
  }
  lVar3 = 1;
LAB_10aec5734:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec5750; end: 10aec5757; -[SCLensMetadataCacheResult lens] */

undefined8 FUN_10aec5750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec5758; end: 10aec575f; -[SCLensMetadataCacheResult needsUpdate] */

undefined1 FUN_10aec5758(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aec5760; end: 10aec576b; -[SCLensMetadataCacheResult .cxx_destruct] */

void FUN_10aec5760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aec576c; end: 10aec5803; +[SCLensMetadataCacheRetrievalResult errorWithLensId:error:] */

void FUN_10aec576c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126de270;
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



/* Entry: 10aec5804; end: 10aec5867; +[SCLensMetadataCacheRetrievalResult succeedWithCacheResult:] */

void FUN_10aec5804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126de270;
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



/* Entry: 10aec5868; end: 10aec588b; -[SCLensMetadataCacheRetrievalResult copyWithZone:] */

undefined8 FUN_10aec5868(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec588c; end: 10aec590f; -[SCLensMetadataCacheRetrievalResult hash] */

void FUN_10aec588c(long param_1)

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
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1127017c8;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec5910; end: 10aec5953; -[SCLensMetadataCacheRetrievalResult internalInit] */

void FUN_10aec5910(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127017c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec5954; end: 10aec5a23; -[SCLensMetadataCacheRetrievalResult isEqual:] */

long FUN_10aec5954(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec59fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec5a08;
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
            goto LAB_10aec5a08;
          }
          goto LAB_10aec59fc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aec5a08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec5a24; end: 10aec5aab; -[SCLensMetadataCacheRetrievalResult matchSucceed:error:] */

void FUN_10aec5a24(long param_1,undefined8 param_2,long param_3,long param_4)

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



/* Entry: 10aec5aac; end: 10aec5ae7; -[SCLensMetadataCacheRetrievalResult .cxx_destruct] */

void FUN_10aec5aac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aec5ae8; end: 10aec5b0b; -[SCLensCustomNamespaceStoreConfig copyWithZone:] */

undefined8 FUN_10aec5ae8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec5b0c; end: 10aec5b7b; -[SCLensCustomNamespaceStoreConfig hash] */

long * FUN_10aec5b0c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  plVar1 = &lStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_40 = (long)(int)*(undefined8 *)(param_1 + 0xc);
  lStack_38 = (long)(int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  lStack_30 = (long)*(int *)(param_1 + 0x14);
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  func_0x000107c3191c(&lStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar1 == (long *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((plVar1 != (long *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)plVar1;
      _objc_opt_class(plVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(int *)((long)plVar1 + 0xc) != *(int *)(param_3 + 0xc) ||
            (*(int *)((long)plVar1 + 0x10) != *(int *)(param_3 + 0x10))) ||
           (*(int *)((long)plVar1 + 0x14) != *(int *)(param_3 + 0x14))))) ||
         (*(char *)((long)plVar1 + 8) != param_3[8])) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)plVar1 + 9) == param_3[9]);
      }
    }
  }
  _objc_release(param_3);
  return (long *)puVar3;
}



/* Entry: 10aec5b7c; end: 10aec5c43; -[SCLensCustomNamespaceStoreConfig isEqual:] */

bool FUN_10aec5b7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((((uVar3 & 1) == 0) ||
          (((*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc) ||
            (*(int *)(param_1 + 0x10) != *(int *)(param_3 + 0x10))) ||
           (*(int *)(param_1 + 0x14) != *(int *)(param_3 + 0x14))))) ||
         (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10aec5c44; end: 10aec5c4b; -[SCLensCustomNamespaceStoreConfig cacheTtlSec] */

undefined4 FUN_10aec5c44(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10aec5c4c; end: 10aec5c53; -[SCLensCustomNamespaceStoreConfig reloadTtlSec] */

undefined4 FUN_10aec5c4c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10aec5c54; end: 10aec5c5b; -[SCLensCustomNamespaceStoreConfig memoryCacheLimit] */

undefined4 FUN_10aec5c54(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10aec5c5c; end: 10aec5c63; -[SCLensCustomNamespaceStoreConfig resetAccessDate] */

undefined1 FUN_10aec5c5c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aec5c64; end: 10aec5c87; -[SCLensCentralizedStoreConfig copyWithZone:] */

undefined8 FUN_10aec5c64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec5c88; end: 10aec5ce7; -[SCLensCentralizedStoreConfig hash] */

undefined8 * FUN_10aec5c88(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aec5d6c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10aec5d6c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10aec5d6c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10aec5d6c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10aec5ce8; end: 10aec5d87; -[SCLensCentralizedStoreConfig isEqual:] */

long FUN_10aec5ce8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec5d6c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10aec5d6c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10aec5d6c;
    }
  }
  lVar3 = 1;
LAB_10aec5d6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec5d88; end: 10aec5d8f; -[SCLensCentralizedStoreConfig variant] */

undefined8 FUN_10aec5d88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec5d90; end: 10aec5d9b; -[SCLensCentralizedStoreConfig .cxx_destruct] */

void FUN_10aec5d90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aec5d9c; end: 10aec5e27; -[SCLensCacheSizeMetadata initWithNamespaceName:totalCount:expiredCount:] */

undefined1 *
FUN_10aec5d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127017e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec5e28; end: 10aec5e4b; -[SCLensCacheSizeMetadata copyWithZone:] */

undefined8 FUN_10aec5e28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec5e4c; end: 10aec5ebb; -[SCLensCacheSizeMetadata hash] */

undefined8 * FUN_10aec5e4c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec5f50;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10aec5f50;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10aec5f50;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10aec5f50:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10aec5ebc; end: 10aec5f6b; -[SCLensCacheSizeMetadata isEqual:] */

long FUN_10aec5ebc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec5f50;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10aec5f50;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10aec5f50;
    }
  }
  lVar3 = 1;
LAB_10aec5f50:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec5f6c; end: 10aec5f73; -[SCLensCacheSizeMetadata namespaceName] */

undefined8 FUN_10aec5f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec5f74; end: 10aec5f7b; -[SCLensCacheSizeMetadata totalCount] */

undefined8 FUN_10aec5f74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec5f7c; end: 10aec5f83; -[SCLensCacheSizeMetadata expiredCount] */

undefined8 FUN_10aec5f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aec5f84; end: 10aec5f8f; -[SCLensCacheSizeMetadata .cxx_destruct] */

void FUN_10aec5f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec5f90; end: 10aec6003; -[SCLensRetrievalAllMetadata initWithMethod:latency:retrievedCount:missedCount:isFromCache:] */

void FUN_10aec5f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1127017e8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  return;
}



/* Entry: 10aec6004; end: 10aec6027; -[SCLensRetrievalAllMetadata copyWithZone:] */

undefined8 FUN_10aec6004(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec6028; end: 10aec60af; -[SCLensRetrievalAllMetadata hash] */

undefined8 * FUN_10aec6028(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_38 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  func_0x000107c3191c(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))) ||
           (*(long *)((long)puVar1 + 0x28) != *(long *)(param_3 + 0x28))))) ||
         (*(char *)((long)puVar1 + 8) != param_3[8])) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar5
                        );
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10aec60b0; end: 10aec619b; -[SCLensRetrievalAllMetadata isEqual:] */

bool FUN_10aec60b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if ((((uVar2 & 1) == 0) ||
          (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) ||
           (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))))) ||
         (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10aec619c; end: 10aec61a3; -[SCLensRetrievalAllMetadata method] */

undefined8 FUN_10aec619c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec61a4; end: 10aec61ab; -[SCLensRetrievalAllMetadata latency] */

undefined8 FUN_10aec61a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aec61ac; end: 10aec61b3; -[SCLensRetrievalAllMetadata retrievedCount] */

undefined8 FUN_10aec61ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aec61b4; end: 10aec61bb; -[SCLensRetrievalAllMetadata missedCount] */

undefined8 FUN_10aec61b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aec61bc; end: 10aec61c3; -[SCLensRetrievalAllMetadata isFromCache] */

undefined1 FUN_10aec61bc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aec61c4; end: 10aec626f; -[SCLensRetrievalMetadata initWithNamespaceName:source:latency:retrievedCount:missedCount:] */

undefined1 *
FUN_10aec61c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1127017f0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec6270; end: 10aec6293; -[SCLensRetrievalMetadata copyWithZone:] */

undefined8 FUN_10aec6270(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec6294; end: 10aec632b; -[SCLensRetrievalMetadata hash] */

undefined8 * FUN_10aec6294(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aec63f8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec6404;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
      dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)puVar3 + 8);
        if (puVar6 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10aec6404;
        }
        goto LAB_10aec63f8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aec6404:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aec632c; end: 10aec641f; -[SCLensRetrievalMetadata isEqual:] */

long FUN_10aec632c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec63f8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec6404;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10aec6404;
        }
        goto LAB_10aec63f8;
      }
    }
    lVar4 = 0;
  }
LAB_10aec6404:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aec6420; end: 10aec6427; -[SCLensRetrievalMetadata namespaceName] */

undefined8 FUN_10aec6420(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec6428; end: 10aec642f; -[SCLensRetrievalMetadata source] */

undefined8 FUN_10aec6428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec6430; end: 10aec6437; -[SCLensRetrievalMetadata latency] */

undefined8 FUN_10aec6430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aec6438; end: 10aec643f; -[SCLensRetrievalMetadata retrievedCount] */

undefined8 FUN_10aec6438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aec6440; end: 10aec6447; -[SCLensRetrievalMetadata missedCount] */

undefined8 FUN_10aec6440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aec6448; end: 10aec6453; -[SCLensRetrievalMetadata .cxx_destruct] */

void FUN_10aec6448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec6454; end: 10aec653f; -[SCMixerRequestParams initWithRequestNamespaces:cachedMixerData:contextualInfo:updatingMode:namespaceGroupId:] */

undefined1 *
FUN_10aec6454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1127017f8;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec6540; end: 10aec6563; -[SCMixerRequestParams copyWithZone:] */

undefined8 FUN_10aec6540(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec6564; end: 10aec65f3; -[SCMixerRequestParams hash] */

undefined8 * FUN_10aec6564(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aec66ac:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec66b8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10aec66b8;
          }
          goto LAB_10aec66ac;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aec66b8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aec65f4; end: 10aec66d3; -[SCMixerRequestParams isEqual:] */

long FUN_10aec65f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec66ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec66b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10aec66b8;
          }
          goto LAB_10aec66ac;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aec66b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec66d4; end: 10aec66db; -[SCMixerRequestParams requestNamespaces] */

undefined8 FUN_10aec66d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec66dc; end: 10aec66e3; -[SCMixerRequestParams cachedMixerData] */

undefined8 FUN_10aec66dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec66e4; end: 10aec66eb; -[SCMixerRequestParams contextualInfo] */

undefined8 FUN_10aec66e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aec66ec; end: 10aec66f3; -[SCMixerRequestParams updatingMode] */

undefined8 FUN_10aec66ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aec66f4; end: 10aec66fb; -[SCMixerRequestParams namespaceGroupId] */

undefined8 FUN_10aec66f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aec66fc; end: 10aec6737; -[SCMixerRequestParams .cxx_destruct] */

void FUN_10aec66fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec6738; end: 10aec67e3; -[SCMixerMetadataItemKey initWithIdentifier:checksum:] */

undefined1 *
FUN_10aec6738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701800;
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



/* Entry: 10aec67e4; end: 10aec6807; -[SCMixerMetadataItemKey copyWithZone:] */

undefined8 FUN_10aec67e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec6808; end: 10aec687b; -[SCMixerMetadataItemKey hash] */

undefined8 * FUN_10aec6808(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10aec68fc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aec6908;
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
          goto LAB_10aec6908;
        }
        goto LAB_10aec68fc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aec6908:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aec687c; end: 10aec6923; -[SCMixerMetadataItemKey isEqual:] */

long FUN_10aec687c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec68fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec6908;
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
          goto LAB_10aec6908;
        }
        goto LAB_10aec68fc;
      }
    }
    lVar3 = 0;
  }
LAB_10aec6908:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec6924; end: 10aec692b; -[SCMixerMetadataItemKey identifier] */

undefined8 FUN_10aec6924(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec692c; end: 10aec6933; -[SCMixerMetadataItemKey checksum] */

undefined8 FUN_10aec692c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec6934; end: 10aec6963; -[SCMixerMetadataItemKey .cxx_destruct] */

void FUN_10aec6934(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec6964; end: 10aec6a3b; -[SCMixerResponseNamespaceData initWithInternalNamespaceData:cachedLensIds:responseLogData:] */

undefined1 *
FUN_10aec6964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112701808;
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



/* Entry: 10aec6a3c; end: 10aec6a5f; -[SCMixerResponseNamespaceData copyWithZone:] */

undefined8 FUN_10aec6a3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec6a60; end: 10aec6adf; -[SCMixerResponseNamespaceData hash] */

undefined8 * FUN_10aec6a60(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10aec6b78:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec6b84;
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
            goto LAB_10aec6b84;
          }
          goto LAB_10aec6b78;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aec6b84:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aec6ae0; end: 10aec6b9f; -[SCMixerResponseNamespaceData isEqual:] */

long FUN_10aec6ae0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec6b78:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec6b84;
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
            goto LAB_10aec6b84;
          }
          goto LAB_10aec6b78;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aec6b84:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec6ba0; end: 10aec6ba7; -[SCMixerResponseNamespaceData internalNamespaceData] */

undefined8 FUN_10aec6ba0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec6ba8; end: 10aec6baf; -[SCMixerResponseNamespaceData cachedLensIds] */

undefined8 FUN_10aec6ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec6bb0; end: 10aec6bb7; -[SCMixerResponseNamespaceData responseLogData] */

undefined8 FUN_10aec6bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aec6bb8; end: 10aec6bf3; -[SCMixerResponseNamespaceData .cxx_destruct] */

void FUN_10aec6bb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec6bf4; end: 10aec6c7b; -[SCMixerFeedData initWithFeeds:feedsCacheTtlMillis:] */

undefined1 *
FUN_10aec6bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701810;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec6c7c; end: 10aec6c9f; -[SCMixerFeedData copyWithZone:] */

undefined8 FUN_10aec6c7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec6ca0; end: 10aec6d2b; -[SCMixerFeedData hash] */

undefined8 * FUN_10aec6ca0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aec6dc8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aec6dd4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10aec6dd4;
        }
        goto LAB_10aec6dc8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aec6dd4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aec6d2c; end: 10aec6def; -[SCMixerFeedData isEqual:] */

long FUN_10aec6d2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec6dc8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec6dd4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10aec6dd4;
        }
        goto LAB_10aec6dc8;
      }
    }
    lVar4 = 0;
  }
LAB_10aec6dd4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aec6df0; end: 10aec6df7; -[SCMixerFeedData feeds] */

undefined8 FUN_10aec6df0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec6df8; end: 10aec6dff; -[SCMixerFeedData feedsCacheTtlMillis] */

undefined8 FUN_10aec6df8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec6e00; end: 10aec6e0b; -[SCMixerFeedData .cxx_destruct] */

void FUN_10aec6e00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec6e0c; end: 10aec6eb7; -[SCMixerFetchResult initWithNamespaceData:feedData:] */

undefined1 *
FUN_10aec6e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701818;
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



/* Entry: 10aec6eb8; end: 10aec6edb; -[SCMixerFetchResult copyWithZone:] */

undefined8 FUN_10aec6eb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec6edc; end: 10aec6f4f; -[SCMixerFetchResult hash] */

undefined8 * FUN_10aec6edc(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10aec6fd0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aec6fdc;
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
          goto LAB_10aec6fdc;
        }
        goto LAB_10aec6fd0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aec6fdc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aec6f50; end: 10aec6ff7; -[SCMixerFetchResult isEqual:] */

long FUN_10aec6f50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec6fd0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec6fdc;
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
          goto LAB_10aec6fdc;
        }
        goto LAB_10aec6fd0;
      }
    }
    lVar3 = 0;
  }
LAB_10aec6fdc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec6ff8; end: 10aec6fff; -[SCMixerFetchResult namespaceData] */

undefined8 FUN_10aec6ff8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec7000; end: 10aec7007; -[SCMixerFetchResult feedData] */

undefined8 FUN_10aec7000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec7008; end: 10aec7037; -[SCMixerFetchResult .cxx_destruct] */

void FUN_10aec7008(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec7038; end: 10aec705b; -[SCMixerUpdateNamespaceData copyWithZone:] */

undefined8 FUN_10aec7038(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


