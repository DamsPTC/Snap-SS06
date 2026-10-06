/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105834e48; end: 105834e4f; -[SCCheckInNearbyOptionFetcher setFetchConstraint:] */

void FUN_105834e48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105834e50; end: 105834e5b; -[SCCheckInNearbyOptionFetcher wrappedResultHandlers] */

void FUN_105834e50(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xa8,1);
  return;
}



/* Entry: 105834e5c; end: 105834e63; -[SCCheckInNearbyOptionFetcher setWrappedResultHandlers:] */

void FUN_105834e5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105834e64; end: 105834f53; -[SCCheckInNearbyOptionFetcher .cxx_destruct] */

void FUN_105834e64(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 105834f54; end: 105834fdf;  */

ulong FUN_105834f54(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c11f520();
  lVar2 = param_3;
  func_0x00010c11f520();
  if (lVar1 < lVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_2;
    func_0x00010c11f520(param_2);
    lVar2 = param_3;
    func_0x00010c11f520(param_3);
    uVar3 = (ulong)(lVar2 < lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105834fe0; end: 10583501f;  */

void FUN_105834fe0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be6e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105835020; end: 105835237; -[SCCheckInServiceProvider _optionFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105835020(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11272a8bc;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar12;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  puVar2 = PTR_PTR_1126befd0;
  _objc_alloc(PTR_PTR_1126befd0);
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11272a8c4;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar12;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_105835238();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf38800();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_105835238(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0fdd80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272a8c8;
    _objc_loadWeakRetained(lVar13);
  }
  lVar10 = lVar13;
  func_0x00010bf70a00(lVar13);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272a8b4;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026ee0(puVar2,param_2,lVar4,lVar5,lVar7,lVar9,lVar10,lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar13);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105835238; end: 10583525b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105835238(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272a8c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10583525c; end: 1058352c3; -[SCCheckInServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10583525c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a8b4);
  _objc_destroyWeak(param_1 + _DAT_11272a8c8);
  _objc_destroyWeak(param_1 + _DAT_11272a8c4);
  _objc_destroyWeak(param_1 + _DAT_11272a8c0);
  _objc_destroyWeak(param_1 + _DAT_11272a8bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a8b8);
  return;
}



/* Entry: 1058352c4; end: 1058353e7; -[SCMapDropsPersistenceProvider initWithPinsService:snapchatterPublicDataFetcher:userInfoServices:] */

undefined1 *
FUN_1058352c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126ea8e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058353e8; end: 1058354df; -[SCMapDropsPersistenceProvider fetchPersistedDrops] */

void FUN_1058353e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126befd8;
  _objc_alloc_init(PTR_PTR_1126befd8);
  puVar2 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfc8c80(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1058354e0; end: 10583552f;  */

void FUN_1058354e0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2de40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105835530; end: 105835557; -[SCMapDropsPersistenceProvider persistedDropsObservable] */

void FUN_105835530(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105835558; end: 10583557f; -[SCMapDropsPersistenceProvider deletedDropObservable] */

void FUN_105835558(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105835580; end: 1058356f7; -[SCMapDropsPersistenceProvider verifyDropTitle:completion:] */

void FUN_105835580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126befe0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c216240();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010bf38380(uVar3);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1058356f8; end: 1058359d7; -[SCMapDropsPersistenceProvider saveDrop:completion:] */

void FUN_1058356f8(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126befe8;
  _objc_alloc_init(PTR_PTR_1126befe8);
  uVar2 = param_5;
  func_0x00010bf8aa20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100576d08();
  if ((int)uVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar6);
  }
  func_0x00010c1dbac0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0d4f60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1);
  _objc_release(uVar2);
  func_0x00010bf51c80(param_5);
  func_0x00010c1b9120((float)param_1,puVar1);
  func_0x00010bf51c80(param_5);
  func_0x00010c1be5e0((float)param_2,puVar1);
  uVar2 = param_5;
  func_0x00010c0fc060(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9680(puVar1);
  _objc_release(uVar2);
  func_0x00010c198d80(puVar1);
  uVar2 = param_5;
  func_0x00010c06f8e0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_5;
    func_0x00010bf5b460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100576d08();
    if ((int)uVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar6);
    }
    func_0x00010c1d7c20(puVar1);
    _objc_release(puVar6);
    _objc_release(uVar2);
  }
  puVar6 = PTR_PTR_1126beff0;
  _objc_alloc_init(PTR_PTR_1126beff0);
  func_0x00010c1db9e0();
  puVar4 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_3);
  uVar5 = *(undefined8 *)(param_3 + 8);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  func_0x00010c14ab40(uVar5);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1058359d8; end: 105835a7f;  */

void FUN_1058359d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = param_2;
    func_0x00010c07d080();
    if ((int)uVar2 != 0) {
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bedb280();
      _objc_release(lVar1);
    }
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) goto LAB_105835a64;
    uVar2 = param_2;
    func_0x00010c07d080(param_2);
    uVar3 = (uint)uVar2 ^ 1;
    pcVar4 = *(code **)(lVar1 + 0x10);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) goto LAB_105835a64;
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar3 = 2;
  }
  (*pcVar4)(lVar1,uVar3);
LAB_105835a64:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105835a80; end: 105835c5b; -[SCMapDropsPersistenceProvider deleteDrop:forEveryone:completion:] */

void FUN_105835a80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126beff8;
  _objc_alloc_init(PTR_PTR_1126beff8);
  uVar3 = param_3;
  func_0x00010bf8aa20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100576d08();
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c1dbac0(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010c18b820(puVar1);
  _objc_initWeak(auStack_58,param_1);
  puVar4 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bf6c580(uVar3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105835c5c; end: 105835d03;  */

void FUN_105835c5c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf8aa20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07a60(lVar2);
    _objc_release(uVar1);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3 == 0);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105835d04; end: 105835dbb; -[SCMapDropsPersistenceProvider _updateMapWithSavedDrop:] */

/* WARNING: Possible PIC construction at 0x000105835d78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105835d7c) */
/* WARNING: Removing unreachable block (ram,0x000105835db8) */
/* WARNING: Removing unreachable block (ram,0x000105835da4) */

void FUN_105835d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c2b9fc0(param_3,param_2,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_next__112614028,puVar1);
  return;
}



/* Entry: 105835dbc; end: 105835dc3; -[SCMapDropsPersistenceProvider _emitDeletedDrop:] */

void FUN_105835dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_next__112614028);
  return;
}



/* Entry: 105835dc4; end: 105835ecf; -[SCMapDropsPersistenceProvider _handlePersistedPinsResponse:] */

void FUN_105835dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1;
  func_0x00010be21760(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  lVar2 = lVar1;
  func_0x00010c25ff60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105835ed0; end: 105835f1f;  */

void FUN_105835ed0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105835f20; end: 105836043; -[SCMapDropsPersistenceProvider _getPersistedPinsFromResponse:] */

void FUN_105835f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c0fc6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010bf41860(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105836044; end: 105836113;  */

void FUN_105836044(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105836114; end: 105836177;  */

void FUN_105836114(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd6080();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 105836178; end: 10583619f;  */

void FUN_105836178(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1058361a0; end: 10583684b; -[SCMapDropsPersistenceProvider _buildDropFromPin:observer:] */

void FUN_1058361a0(float param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010c0706a0();
  if ((int)puVar1 != 0) {
    func_0x00010bf436e0(param_5);
  }
  puVar1 = param_4;
  func_0x00010c0f0700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe2ee0();
  puVar3 = puVar1;
  func_0x00010c0b5940();
  func_0x000100c4a928();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  if ((int)puVar1 == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    fVar17 = -32.0;
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c09d7c0(uVar5);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(param_5);
    puVar1 = param_4;
  }
  else {
    puVar1 = PTR_PTR_1126bf000;
    _objc_alloc();
    puVar2 = param_4;
    func_0x00010c0fc080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe2ee0();
    puVar6 = puVar2;
    func_0x00010c0b5940(puVar2);
    func_0x000100c4a928(puVar3,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar7 = param_4;
    func_0x00010c0f0700();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfe2ee0();
    puVar3 = puVar7;
    func_0x00010c0b5940();
    func_0x000100c4a928();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c08aca0(param_4);
    dVar19 = (double)param_1;
    func_0x00010c09abe0(param_4);
    dVar18 = (double)param_1;
    _CLLocationCoordinate2DMake();
    puVar8 = param_4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010bf1ad00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010bf1c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_4;
    func_0x00010bfe5400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9cc00();
    func_0x00010c00e760(dVar19,dVar18);
    fVar17 = SUB84(dVar19,0);
    _objc_release(puVar14);
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    func_0x00010c0d9840(param_5);
    func_0x00010bf436e0(param_5);
  }
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126bf000;
  _objc_alloc();
  uVar15 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c0fc080(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar15;
  func_0x00010bfe2ee0();
  uVar11 = uVar15;
  func_0x00010c0b5940(uVar15);
  func_0x000100c4a928(uVar5,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar10 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c0f0700(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010bfe2ee0();
  uVar13 = uVar10;
  func_0x00010c0b5940(uVar10);
  func_0x000100c4a928(uVar5,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c08aca0(*(undefined8 *)(param_4 + 0x20));
  dVar19 = (double)fVar17;
  func_0x00010c09abe0(*(undefined8 *)(param_4 + 0x20));
  dVar18 = (double)fVar17;
  _CLLocationCoordinate2DMake(dVar19,dVar18);
  uVar5 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c2711a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf1acc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf1c0a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010bfe5400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9cc00();
  func_0x00010c00e760(dVar19,dVar18,puVar2);
  _objc_release(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar15);
  func_0x00010c0d9840(*(undefined8 *)(param_4 + 0x28));
  func_0x00010bf436e0(*(undefined8 *)(param_4 + 0x28));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10583684c; end: 1058368ab; -[SCMapDropsPersistenceProvider .cxx_destruct] */

void FUN_10583684c(long param_1)

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



/* Entry: 1058368ac; end: 10583698f; -[SCMapDropsPersistenceServiceProvider provide] */

void FUN_1058368ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf008;
  _objc_alloc(PTR_PTR_1126bf008);
  func_0x00010c00e820();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105836990; end: 1058369cf;  */

void FUN_105836990(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be06a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058369d0; end: 105836b73; -[SCMapDropsPersistenceServiceProvider _dropsPersistenceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058369d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + _DAT_11272a8e4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bc1b8;
  lVar1 = param_1 + _DAT_11272a8e8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b139c8(puVar5,&PTR____CFConstantStringClassReference_110e06398,lVar4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272a8ec);
  *(undefined **)(param_1 + _DAT_11272a8ec) = puVar5;
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bf010;
  _objc_alloc(PTR_PTR_1126bf010);
  func_0x00010c058f80();
  puVar6 = PTR_PTR_1126bf018;
  _objc_alloc(PTR_PTR_1126bf018);
  lVar1 = param_1 + _DAT_11272a8f0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272a8f4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c036080(puVar6);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105836b74; end: 105836bdf; -[SCMapDropsPersistenceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105836b74(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a8f4);
  _objc_destroyWeak(param_1 + _DAT_11272a8e8);
  _objc_destroyWeak(param_1 + _DAT_11272a8f0);
  _objc_destroyWeak(param_1 + _DAT_11272a8e4);
  _objc_destroyWeak(param_1 + _DAT_11272a8f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a8ec,0);
  return;
}



/* Entry: 105836be0; end: 105836c53; -[UNISCMPPins initWithUnifiedGrpcService:] */

undefined1 * FUN_105836be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea8f0;
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



/* Entry: 105836c54; end: 105836d37; -[UNISCMPPins getPinsWithRequest:callOptionsBuilder:handler:] */

void FUN_105836c54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf020;
  _objc_opt_class(PTR_PTR_1126bf020);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e063b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105836d38; end: 105836e1b; -[UNISCMPPins savePinWithRequest:callOptionsBuilder:handler:] */

void FUN_105836d38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf028;
  _objc_opt_class(PTR_PTR_1126bf028);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e063d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105836e1c; end: 105836eff; -[UNISCMPPins checkPinTitleWithRequest:callOptionsBuilder:handler:] */

void FUN_105836e1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf030;
  _objc_opt_class(PTR_PTR_1126bf030);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e063f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105836f00; end: 105836fe3; -[UNISCMPPins deletePinWithRequest:callOptionsBuilder:handler:] */

void FUN_105836f00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf038;
  _objc_opt_class(PTR_PTR_1126bf038);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e06418,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105836fe4; end: 1058370c7; -[UNISCMPPins updatePinWithRequest:callOptionsBuilder:handler:] */

void FUN_105836fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf040;
  _objc_opt_class(PTR_PTR_1126bf040);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e06438,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058370c8; end: 1058370d3; -[UNISCMPPins .cxx_destruct] */

void FUN_1058370c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058370d4; end: 105837147; -[UNISCMPPinsInternal initWithUnifiedGrpcService:] */

undefined1 * FUN_1058370d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea8f8;
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



/* Entry: 105837148; end: 10583722b; -[UNISCMPPinsInternal getPinsInternalWithRequest:callOptionsBuilder:handler:] */

void FUN_105837148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf048;
  _objc_opt_class(PTR_PTR_1126bf048);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e06458,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10583722c; end: 10583730f; -[UNISCMPPinsInternal deletePinInternalWithRequest:callOptionsBuilder:handler:] */

void FUN_10583722c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf050;
  _objc_opt_class(PTR_PTR_1126bf050);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e06478,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105837310; end: 10583731b; -[UNISCMPPinsInternal .cxx_destruct] */

void FUN_105837310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10583731c; end: 1058373ab;  */

undefined * FUN_10583731c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0ba8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e06498,
                        &UNK_10ddbf458,&UNK_10ddbf498,3,FUN_1058373ac,0,&UNK_10ddbf4a8);
    do {
      if (puRam00000001136c0ba8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0ba8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0ba8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0ba8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0ba8;
}



/* Entry: 1058373ac; end: 1058373b7;  */

bool FUN_1058373ac(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1058373b8; end: 10583741f; +[SCMPGetPinsRequest descriptor] */

void FUN_1058373b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0bb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71420,
                        &PTR____CFConstantStringClassReference_110e064b8,&PTR_DAT_113104bd8,0,0,4,
                        0x1c);
    puRam00000001136c0bb0 = puVar1;
  }
  return;
}



/* Entry: 105837420; end: 105837487; +[SCMPGetPinsResponse descriptor] */

void FUN_105837420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0bb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71470,
                        &PTR____CFConstantStringClassReference_110e064d8,&PTR_DAT_113104bd8,
                        &PTR_DAT_113104bf0,1,0x10,0x1c);
    puRam00000001136c0bb8 = puVar1;
  }
  return;
}



/* Entry: 105837488; end: 1058374ef; +[SCMPSavePinRequest descriptor] */

void FUN_105837488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0bc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a714c0,
                        &PTR____CFConstantStringClassReference_110e064f8,&PTR_DAT_113104bd8,
                        &PTR_DAT_113104c10,1,0x10,0x1c);
    puRam00000001136c0bc0 = puVar1;
  }
  return;
}



/* Entry: 1058374f0; end: 105837557; +[SCMPSavePinResponse descriptor] */

void FUN_1058374f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0bc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71510,
                        &PTR____CFConstantStringClassReference_110e06518,&PTR_DAT_113104bd8,
                        &PTR_s_isSaved_113104c30,1,4,0x1c);
    puRam00000001136c0bc8 = puVar1;
  }
  return;
}



/* Entry: 105837558; end: 1058375bf; +[SCMPCheckPinTitleRequest descriptor] */

void FUN_105837558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0bd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71560,
                        &PTR____CFConstantStringClassReference_110e06538,&PTR_DAT_113104bd8,
                        &PTR_s_title_113104c50,1,0x10,0x1c);
    puRam00000001136c0bd0 = puVar1;
  }
  return;
}



/* Entry: 1058375c0; end: 105837627; +[SCMPCheckPinTitleResponse descriptor] */

void FUN_1058375c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0bd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a715b0,
                        &PTR____CFConstantStringClassReference_110e06558,&PTR_DAT_113104bd8,
                        &PTR_DAT_113104c70,1,4,0x1c);
    puRam00000001136c0bd8 = puVar1;
  }
  return;
}



/* Entry: 105837628; end: 10583768f; +[SCMPDeletePinRequest descriptor] */

void FUN_105837628(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0be0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71600,
                        &PTR____CFConstantStringClassReference_110e06578,&PTR_DAT_113104bd8,
                        &PTR_DAT_113104cf0,2,0x10,0x1c);
    puRam00000001136c0be0 = puVar1;
  }
  return;
}



/* Entry: 105837690; end: 1058376f7; +[SCMPDeletePinResponse descriptor] */

void FUN_105837690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0be8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71650,
                        &PTR____CFConstantStringClassReference_110e06598,&PTR_DAT_113104bd8,0,0,4,
                        0x1c);
    puRam00000001136c0be8 = puVar1;
  }
  return;
}



/* Entry: 1058376f8; end: 10583775f; +[SCMPGetPinsInternalRequest descriptor] */

void FUN_1058376f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0bf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a716a0,
                        &PTR____CFConstantStringClassReference_110e065b8,&PTR_DAT_113104bd8,
                        &PTR_s_userId_113104c90,1,0x10,0x1c);
    puRam00000001136c0bf0 = puVar1;
  }
  return;
}



/* Entry: 105837760; end: 1058377c7; +[SCMPGetPinsInternalResponse descriptor] */

void FUN_105837760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0bf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a716f0,
                        &PTR____CFConstantStringClassReference_110e065d8,&PTR_DAT_113104bd8,
                        &PTR_DAT_113104cb0,1,0x10,0x1c);
    puRam00000001136c0bf8 = puVar1;
  }
  return;
}



/* Entry: 1058377c8; end: 10583782f; +[SCMPDeletePinInternalRequest descriptor] */

void FUN_1058377c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71740,
                        &PTR____CFConstantStringClassReference_110e065f8,&PTR_DAT_113104bd8,
                        &PTR_DAT_113104d30,2,0x18,0x1c);
    puRam00000001136c0c00 = puVar1;
  }
  return;
}



/* Entry: 105837830; end: 105837897; +[SCMPDeletePinInternalResponse descriptor] */

void FUN_105837830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71790,
                        &PTR____CFConstantStringClassReference_110e06618,&PTR_DAT_113104bd8,0,0,4,
                        0x1c);
    puRam00000001136c0c08 = puVar1;
  }
  return;
}



/* Entry: 105837898; end: 1058378ff; +[SCMPUpdatePinRequest descriptor] */

void FUN_105837898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a717e0,
                        &PTR____CFConstantStringClassReference_110e06638,&PTR_DAT_113104bd8,
                        &PTR_DAT_113104d70,3,0x20,0x1c);
    puRam00000001136c0c10 = puVar1;
  }
  return;
}



/* Entry: 105837900; end: 105837967; +[SCMPUpdatePinResponse descriptor] */

void FUN_105837900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71830,
                        &PTR____CFConstantStringClassReference_110e06658,&PTR_DAT_113104bd8,
                        &PTR_DAT_113104cd0,1,0x10,0x1c);
    puRam00000001136c0c18 = puVar1;
  }
  return;
}



/* Entry: 105837968; end: 1058379cf; +[SCMPPin descriptor] */

void FUN_105837968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0c20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a71880,
                        &PTR____CFConstantStringClassReference_110e06678,&PTR_DAT_113104bd8,
                        &PTR_DAT_113104dd0,8,0x30,0x1c);
    puRam00000001136c0c20 = puVar1;
  }
  return;
}



/* Entry: 1058379d0; end: 105837b0b; -[SCMapLocationMuting initWithValisService:userPreferences:userContext:asyncQueue:] */

undefined1 *
FUN_1058379d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ea900;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    func_0x00010beea840(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105837b0c; end: 105837bbb; -[SCMapLocationMuting _warmupMutedSet] */

void FUN_105837b0c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = param_1;
  func_0x00010be1d7e0();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c07c8c0();
  if (iVar1 == 0 || lVar2 == 0) {
    func_0x00010be20a20(param_1);
  }
  else {
    lVar3 = lVar2;
    func_0x00010c0d4200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0d3c80();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c136f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar3;
    _objc_release(uVar5);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105837bbc; end: 105837be3; -[SCMapLocationMuting mutedFriendsIdsObservable] */

void FUN_105837bbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105837be4; end: 105837d03; -[SCMapLocationMuting muteFriendWithId:completion:] */

void FUN_105837be4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0d3f40(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105837d04; end: 105837db7;  */

void FUN_105837d04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_4 == 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdc7800();
  }
  else {
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_4);
    }
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be20a20();
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105837db8; end: 105837ed7; -[SCMapLocationMuting unmuteFriendWithId:completion:] */

void FUN_105837db8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c281900(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105837ed8; end: 105837f8b;  */

void FUN_105837ed8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_4 == 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be8c9c0();
  }
  else {
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_4);
    }
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be20a20();
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105837f8c; end: 105838053; -[SCMapLocationMuting _getMutedFriends] */

void FUN_105837f8c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfc7c00(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105838054; end: 1058380bb;  */

void FUN_105838054(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedbe80();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058380bc; end: 1058381df; -[SCMapLocationMuting _updateMutedFriendsWithIDs:version:] */

void FUN_1058380bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105838174;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1058381e0; end: 1058382f7; -[SCMapLocationMuting _removeMutedFriendsWithIDs:version:] */

void FUN_1058381e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105838298;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1058382f8; end: 10583840f; -[SCMapLocationMuting _addMutedFriendsWithIDs:version:] */

void FUN_1058382f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1058383b0;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 105838410; end: 1058384df; -[SCMapLocationMuting _updateCachedObjectWithSet:requestVersion:] */

void FUN_105838410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bf058;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d0c0(puVar1,param_2,param_3,param_4,puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058384e0; end: 10583852f; -[SCMapLocationMuting _getCachedObject] */

void FUN_1058384e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105838530; end: 1058385db; -[SCMapLocationMuting .cxx_destruct] */

void FUN_105838530(long param_1)

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



/* Entry: 1058385dc; end: 10583873f; -[SCMapLocationMutingServiceProvider _locationMutingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058385dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + _DAT_11272a920;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bf068;
  _objc_alloc(PTR_PTR_1126bf068);
  lVar1 = param_1 + _DAT_11272a924;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c296d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11272a928;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272a92c;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0603e0(puVar5,param_2,lVar3,lVar6,lVar7,lVar4);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105838740; end: 10583878f; -[SCMapLocationMutingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105838740(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a928);
  _objc_destroyWeak(param_1 + _DAT_11272a924);
  _objc_destroyWeak(param_1 + _DAT_11272a920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a92c);
  return;
}



/* Entry: 105838790; end: 105838867; -[SCMapLocationMutedFriendsCachedObject initWithCoder:] */

undefined1 * FUN_105838790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea908;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105838868; end: 10583893f; -[SCMapLocationMutedFriendsCachedObject initWithMutedFriendsSet:requestVersion:cachedDate:] */

undefined1 *
FUN_105838868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ea908;
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



/* Entry: 105838940; end: 105838963; -[SCMapLocationMutedFriendsCachedObject copyWithZone:] */

undefined8 FUN_105838940(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105838964; end: 1058389d7; -[SCMapLocationMutedFriendsCachedObject encodeWithCoder:] */

void FUN_105838964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e066b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e066d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e066f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058389d8; end: 105838a57; -[SCMapLocationMutedFriendsCachedObject hash] */

undefined8 * FUN_1058389d8(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105838af0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105838afc;
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
            goto LAB_105838afc;
          }
          goto LAB_105838af0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105838afc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105838a58; end: 105838b17; -[SCMapLocationMutedFriendsCachedObject isEqual:] */

long FUN_105838a58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105838af0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105838afc;
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
            goto LAB_105838afc;
          }
          goto LAB_105838af0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105838afc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105838b18; end: 105838b1f; -[SCMapLocationMutedFriendsCachedObject mutedFriendsSet] */

undefined8 FUN_105838b18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105838b20; end: 105838b27; -[SCMapLocationMutedFriendsCachedObject requestVersion] */

undefined8 FUN_105838b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105838b28; end: 105838b2f; -[SCMapLocationMutedFriendsCachedObject cachedDate] */

undefined8 FUN_105838b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105838b30; end: 105838b6b; -[SCMapLocationMutedFriendsCachedObject .cxx_destruct] */

void FUN_105838b30(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105838b6c; end: 105838d43; -[SCMapLocationPushRegistrationServiceProvider provide] */

void FUN_105838b6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105838d44;
  puStack_78 = &UNK_1108b7180;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aeec0;
  puVar4 = PTR_PTR_1126ae960;
  puVar3 = PTR_PTR_1126bf070;
  func_0x00010c09f480(PTR_PTR_1126bf070);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8600(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae970;
  func_0x00010c0c7320(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf0caa0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126bf078;
  _objc_alloc(PTR_PTR_1126bf078);
  func_0x00010c026f60();
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105838d44; end: 105838db7;  */

void FUN_105838d44(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010becd080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105838db8; end: 105838e33; -[SCMapLocationPushRegistrationServiceProvider _tokenProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105838db8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bf080;
  _objc_alloc(PTR_PTR_1126bf080);
  param_1 = param_1 + _DAT_11272a93c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105838e34; end: 105838e67; -[SCMapLocationPushRegistrationServiceProvider _registerForLocationPushes:] */

void FUN_105838e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105838e68; end: 105838e9f; -[SCMapLocationPushRegistrationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105838e68(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a93c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a940);
  return;
}



/* Entry: 105838ea0; end: 105838fb7; -[SCMapLocationPushTokenProvider initWithCircumstanceEngine:] */

undefined1 * FUN_105838ea0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ea910;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar5);
    uVar3 = param_3;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x18) = (char)uVar3;
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
      _objc_alloc_init();
      uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined **)((long)puVar1 + 0x20) = puVar2;
      _objc_release(uVar5);
    }
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105838fb8; end: 1058390af; -[SCMapLocationPushTokenProvider initWithLocationManager:initLocationManagerOnMainThread:] */

undefined1 *
FUN_105838fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ea910;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058390b0; end: 1058390d7; -[SCMapLocationPushTokenProvider notificationRegisterLPSETokenEventObservable] */

void FUN_1058390b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058390d8; end: 1058390db; -[SCMapLocationPushTokenProvider registerForLocationPushNotifications] */

void FUN_1058390d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerLocationPushNotificatio_11257fff0);
  return;
}



/* Entry: 1058390dc; end: 105839133; -[SCMapLocationPushTokenProvider _registerLocationPushNotifications] */

void FUN_1058390dc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105839134;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105839134; end: 10583918b;  */

void FUN_105839134(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(char *)(lVar1 + 0x18) == '\x01') && (*(long *)(lVar1 + 0x20) == 0)) {
    puVar2 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x20) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__startMonitoringLocationPushes_11258db38);
  return;
}



/* Entry: 10583918c; end: 1058391e3; -[SCMapLocationPushTokenProvider _startMonitoringLocationPushes] */

void FUN_10583918c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1058391e4;
  puStack_20 = &UNK_1108b71b0;
  lStack_18 = param_1;
  func_0x00010c24f480(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}


