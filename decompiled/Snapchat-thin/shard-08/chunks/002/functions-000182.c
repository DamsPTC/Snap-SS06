/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f30f94; end: 105f31017; -[SCMapPeopleLocationsConverter initWithClusterConverter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105f30f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ee128;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273aaa8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f31018; end: 105f3123f; -[SCMapPeopleLocationsConverter convert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f31018(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf3e920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126c60d8;
    _objc_alloc_init(PTR_PTR_1126c60d8);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar2 = param_3;
    func_0x00010bf3e920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0(puVar4);
    _objc_release(lVar2);
    lVar5 = param_3;
    func_0x00010bf3e920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar5);
        }
        lVar6 = *(long *)(param_1 + _DAT_11273aaa8);
        func_0x00010bf50c80();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) {
          func_0x00010befa120(puVar4);
        }
        _objc_release(lVar6);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    func_0x00010c19fba0(puVar9);
    func_0x00010c0758c0(param_3);
    func_0x00010c1b1e00(puVar9);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + _DAT_11273aaa8,0);
  return;
}



/* Entry: 105f31240; end: 105f31253; -[SCMapPeopleLocationsConverter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f31240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273aaa8,0);
  return;
}



/* Entry: 105f31254; end: 105f312d7; -[SCLocationPermissionConverter initWithLocationPermissionManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105f31254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ee130;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273aaac;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f312d8; end: 105f31423; -[SCLocationPermissionConverter convert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f312d8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e32058);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_11273aaac);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar2;
      func_0x00010bf52340(lVar2);
      lVar4 = lVar2;
      func_0x00010c09eaa0(lVar2);
      puVar6 = PTR_PTR_1126c60e0;
      _objc_alloc_init(PTR_PTR_1126c60e0);
      lVar5 = param_1;
      func_0x00010be33e80(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18cae0(puVar6,param_2,lVar5);
      _objc_release(lVar5);
      lVar5 = param_1;
      func_0x00010be33be0(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e7e0(puVar6,param_2,lVar5);
      _objc_release(lVar5);
      func_0x00010be34420(param_1,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dfc20(puVar6,param_2,param_1);
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f31424; end: 105f3146f; -[SCLocationPermissionConverter _hasForegroundLocation:] */

void FUN_105f31424(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  if (param_3 < 5) {
    func_0x00010c220160(puVar1,param_2,0x18U >> (ulong)(param_3 & 0x1f) & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f31470; end: 105f314bb; -[SCLocationPermissionConverter _hasBackgroundLocation:] */

void FUN_105f31470(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  if (param_3 < 5) {
    func_0x00010c220160(puVar1,param_2,8U >> (ulong)(param_3 & 0x1f) & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f314bc; end: 105f31507; -[SCLocationPermissionConverter _hasPreciseLocation:] */

void FUN_105f314bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  if (param_3 < 3) {
    func_0x00010c220160(puVar1,param_2,4U >> (ulong)((uint)param_3 & 0x1f) & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f31508; end: 105f3151b; -[SCLocationPermissionConverter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f31508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273aaac,0);
  return;
}



/* Entry: 105f3151c; end: 105f315df; -[SCNotificationAuthorizationStatusConverter convert:] */

void FUN_105f3151c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e32078);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c60e0;
    _objc_alloc_init(PTR_PTR_1126c60e0);
    puVar2 = PTR_PTR_1126c0308;
    _objc_alloc_init(PTR_PTR_1126c0308);
    uVar3 = param_3;
    func_0x00010bf10fa0();
    if (uVar3 < 5) {
      func_0x00010c220160(puVar2,param_2,3U >> (ulong)((uint)uVar3 & 0x1f) & 1);
    }
    func_0x00010c1ce7a0(puVar4,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f315e0; end: 105f31663; -[SCUserLocationPermissionConverter initWithLocationPermissionManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105f315e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ee138;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273aab0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f31664; end: 105f317af; -[SCUserLocationPermissionConverter convert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f31664(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e32058);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_11273aab0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar2;
      func_0x00010bf52340(lVar2);
      lVar4 = lVar2;
      func_0x00010c09eaa0(lVar2);
      puVar6 = PTR_PTR_1126c60e0;
      _objc_alloc_init(PTR_PTR_1126c60e0);
      lVar5 = param_1;
      func_0x00010be33e80(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18cae0(puVar6,param_2,lVar5);
      _objc_release(lVar5);
      lVar5 = param_1;
      func_0x00010be33be0(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e7e0(puVar6,param_2,lVar5);
      _objc_release(lVar5);
      func_0x00010be34420(param_1,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dfc20(puVar6,param_2,param_1);
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f317b0; end: 105f317fb; -[SCUserLocationPermissionConverter _hasForegroundLocation:] */

void FUN_105f317b0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  if (param_3 < 5) {
    func_0x00010c220160(puVar1,param_2,0x18U >> (ulong)(param_3 & 0x1f) & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f317fc; end: 105f31847; -[SCUserLocationPermissionConverter _hasBackgroundLocation:] */

void FUN_105f317fc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  if (param_3 < 5) {
    func_0x00010c220160(puVar1,param_2,8U >> (ulong)(param_3 & 0x1f) & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f31848; end: 105f31893; -[SCUserLocationPermissionConverter _hasPreciseLocation:] */

void FUN_105f31848(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  if (param_3 < 3) {
    func_0x00010c220160(puVar1,param_2,4U >> (ulong)((uint)param_3 & 0x1f) & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f31894; end: 105f318a7; -[SCUserLocationPermissionConverter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f31894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273aab0,0);
  return;
}



/* Entry: 105f318a8; end: 105f3192b; -[SCMapExploreItemConverter initWithStatusGroupConverter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105f318a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ee140;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273aab4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f3192c; end: 105f31a1f; -[SCMapExploreItemConverter convert:] */

void FUN_105f3192c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_105f31a20;
    uStack_30 = 0x105f31a30;
    uStack_28 = 0;
    func_0x00010c0c0440(param_3);
    uVar1 = puStack_48[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f31a20; end: 105f31a37;  */

void FUN_105f31a20(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105f31a38; end: 105f31a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f31a38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273aab4);
  func_0x00010bf50c80(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f31a88; end: 105f31a8b;  */

void FUN_105f31a88(void)

{
  return;
}



/* Entry: 105f31a8c; end: 105f31a9f; -[SCMapExploreItemConverter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f31a8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273aab4,0);
  return;
}



/* Entry: 105f31aa0; end: 105f31b23; -[SCMapExploreUpdateConverter initWithExploreItemConverter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105f31aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ee148;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273aab8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f31b24; end: 105f31ceb; -[SCMapExploreUpdateConverter convert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f31b24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c60e8;
    _objc_alloc_init(PTR_PTR_1126c60e8);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar5 = *(long *)(param_1 + _DAT_11273aab8);
        func_0x00010bf50c80();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(lVar5);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    func_0x00010c1a0360(puVar7);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + _DAT_11273aab8,0);
  return;
}



/* Entry: 105f31cec; end: 105f31cff; -[SCMapExploreUpdateConverter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f31cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273aab8,0);
  return;
}



/* Entry: 105f31d00; end: 105f31f0b; -[SCMapStatusGroupConverter convert:] */

void FUN_105f31d00(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010c253620();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 1) {
      lVar1 = param_4;
      func_0x00010c253620(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar5 = param_1;
      _objc_release(puVar4);
      func_0x00010c2709c0(lVar2);
      param_1 = param_1 - dVar5;
      if (86400.0 <= param_1) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR_PTR_1126c60f0;
        _objc_alloc_init(PTR_PTR_1126c60f0);
        lVar1 = lVar2;
        func_0x00010c2923e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e620(puVar4,param_3,lVar1);
        _objc_release(lVar1);
        lVar1 = lVar2;
        func_0x00010bfe5ec0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a400(puVar4,param_3,lVar1);
        _objc_release(lVar1);
        func_0x00010c2709c0(lVar2);
        func_0x00010c215e40(puVar4,param_3,(long)(param_1 * 1000.0));
        lVar1 = param_4;
        func_0x00010c27dd80(param_4);
        func_0x00010be9c3c0(param_2,param_3,lVar1);
        func_0x00010c20a500(puVar4,param_3,param_2);
        lVar1 = param_4;
        func_0x00010c26b700(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2137c0(puVar4,param_3,lVar1);
        _objc_release(lVar1);
        lVar1 = lVar2;
        func_0x00010c253880(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c0dab60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20b0e0(puVar4,param_3,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar1);
      }
      _objc_release(lVar2);
      goto LAB_105f31ee8;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_105f31ee8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f31f0c; end: 105f31f1b; -[SCMapStatusGroupConverter _sdkStatusTypeFromType:] */

int FUN_105f31f0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 0xf) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 105f31f1c; end: 105f31f9f; -[SCMapFriendFeedItemConverter initWithStoriesSummaryInfoConverter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105f31f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ee150;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273aabc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f31fa0; end: 105f32283; -[SCMapFriendFeedItemConverter convert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f31fa0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      puVar2 = PTR_PTR_1126c60f8;
      _objc_alloc_init(PTR_PTR_1126c60f8);
      uVar1 = param_3;
      func_0x00010bfa3d00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e620(puVar2);
      _objc_release(uVar1);
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x3032000000;
      pcStack_68 = FUN_105f32284;
      uStack_60 = 0x105f32294;
      uStack_58 = 0;
      uVar1 = param_3;
      func_0x00010c258f40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c0560();
      _objc_release(uVar1);
      if (puStack_78[5] != 0) {
        uVar3 = *(undefined8 *)(param_1 + _DAT_11273aabc);
        func_0x00010bf50c80(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20dc60(puVar2);
        _objc_release(uVar3);
      }
      uVar1 = param_3;
      func_0x000100bf377c();
      if ((uVar1 & 1) == 0) {
        if (puStack_78[5] != 0) goto LAB_105f32214;
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR_PTR_1126c6100;
        _objc_alloc_init(PTR_PTR_1126c6100);
        func_0x00010c1c7120(puVar2);
        _objc_release(puVar5);
        uVar1 = param_3;
        func_0x00010bef0c80(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010bf866a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        puVar5 = puVar2;
        func_0x00010c0cb9a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160();
        _objc_release(puVar5);
        _objc_release(uVar4);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c0cb340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        uVar1 = uVar4;
        func_0x000107cfdba8();
        if ((((uVar1 & 1) != 0) || (uVar1 = uVar4, func_0x000107cfce24(), (uVar1 & 1) != 0)) ||
           (uVar1 = uVar4, func_0x000107cfcf34(), (int)uVar1 != 0)) {
          func_0x00010c1c70e0(puVar2);
        }
        _objc_release(uVar4);
LAB_105f32214:
        _objc_retain(puVar2);
        puVar5 = puVar2;
      }
      __Block_object_dispose(&uStack_80,8);
      _objc_release(uStack_58);
      _objc_release(puVar2);
      goto LAB_105f3223c;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_105f3223c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f32284; end: 105f3229b;  */

void FUN_105f32284(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105f3229c; end: 105f32343;  */

void FUN_105f3229c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfddf20();
  if ((int)uVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar4 = param_1;
    func_0x00010c0d1140(param_3);
    _objc_release(puVar1);
    if (param_1 - dVar4 < 7200.0) {
      lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 8);
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = param_3;
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f32344; end: 105f32357; -[SCMapFriendFeedItemConverter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f32344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273aabc,0);
  return;
}



/* Entry: 105f32358; end: 105f323db; -[SCMapFriendFeedUpdateConverter initWithFriendFeedItemConverter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105f32358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ee158;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273aac0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f323dc; end: 105f32593; -[SCMapFriendFeedUpdateConverter convert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f323dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar5 = *(long *)(param_1 + _DAT_11273aac0);
      func_0x00010bf50c80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(lVar5);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar6 = PTR_PTR_1126c6108;
  _objc_alloc_init(PTR_PTR_1126c6108);
  func_0x00010c19fce0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + _DAT_11273aac0,0);
  return;
}



/* Entry: 105f32594; end: 105f325a7; -[SCMapFriendFeedUpdateConverter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f32594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273aac0,0);
  return;
}



/* Entry: 105f325a8; end: 105f32813; -[SCMapStoriesSummaryInfoConverter convert:] */

void FUN_105f325a8(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126c6110;
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_105f32800;
  }
  _objc_retain(param_4);
  _objc_alloc_init(puVar4);
  lVar1 = param_4;
  func_0x00010c259cc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d1a0(puVar4,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0ddc60(param_4);
  func_0x00010c1ce980(puVar4,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010bfddf20(param_4);
  func_0x00010c1a7220(puVar4,param_3,lVar1);
  func_0x00010c0d1120(param_4);
  func_0x00010c1c90e0(puVar4,param_3,(long)param_1);
  func_0x00010c0d1140(param_4);
  func_0x00010c1c9100(puVar4,param_3,(long)param_1);
  func_0x00010c0d1180(param_4);
  func_0x00010c1c9140(puVar4,param_3,(long)param_1);
  lVar1 = param_4;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = lVar1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126c60b0;
      _objc_alloc_init(PTR_PTR_1126c60b0);
      lVar2 = lVar1;
      func_0x00010c28f340(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21afe0(puVar3,param_3,lVar2);
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010c085300(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b64a0(puVar3,param_3,lVar2);
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010c086560(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40(puVar3,param_3,lVar2);
      _objc_release(lVar2);
      func_0x00010c214140(puVar4,param_3,puVar3);
      goto LAB_105f327f0;
    }
  }
  else {
    puVar3 = PTR_PTR_1126c6118;
    _objc_alloc_init(PTR_PTR_1126c6118);
    lVar2 = lVar1;
    func_0x00010bf4cce0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar3,param_3,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf4cd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64a0(puVar3,param_3,lVar2);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf4cd40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40(puVar3,param_3,lVar2);
    _objc_release(lVar2);
    func_0x00010c213f20(puVar4,param_3,puVar3);
LAB_105f327f0:
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
LAB_105f32800:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f32814; end: 105f3289f; -[SCMapAllowFootstepsConverter convert:] */

void FUN_105f32814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_3);
  func_0x00010c277640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e320d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  uVar3 = param_3;
  func_0x00010bf1f3c0(param_3);
  _objc_release(param_3);
  func_0x00010c220160(puVar2,param_2,uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f328a0; end: 105f3292b; -[SCMapAllowFootstepsRealtimeCollectionConverter convert:] */

void FUN_105f328a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_3);
  func_0x00010c277640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e320f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  uVar3 = param_3;
  func_0x00010bf1f3c0(param_3);
  _objc_release(param_3);
  func_0x00010c220160(puVar2,param_2,uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f3292c; end: 105f329e3; -[SCMapUserHeadingConverter convert:] */

void FUN_105f3292c(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_3,&PTR____CFConstantStringClassReference_110e32118);
  _objc_retainAutoreleasedReturnValue();
  if (((param_4 == 0) || (func_0x00010c27cae0(param_4), param_1 < 0.0)) ||
     (func_0x00010c27cae0(param_4), 360.0 < param_1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c6120;
    _objc_alloc_init(PTR_PTR_1126c6120);
    func_0x00010c27cae0(param_4);
    func_0x00010c1a7ba0(puVar2,param_3,(int)param_1);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f329e4; end: 105f32a6f; -[SCMapHomeWorkConverter convert:] */

void FUN_105f329e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_3);
  func_0x00010c277640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e32138);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  uVar3 = param_3;
  func_0x00010bf1f3c0(param_3);
  _objc_release(param_3);
  func_0x00010c220160(puVar2,param_2,uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f32a70; end: 105f32afb; -[SCMapInferredSchoolConverter convert:] */

void FUN_105f32a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_3);
  func_0x00010c277640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e32158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  uVar3 = param_3;
  func_0x00010bf1f3c0(param_3);
  _objc_release(param_3);
  func_0x00010c220160(puVar2,param_2,uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f32afc; end: 105f32bb7; -[SCMapLocationRequestStateConverter convert:] */

void FUN_105f32afc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0(puVar2,param_2,lVar1);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105f32bb8;
    puStack_30 = &UNK_1108709f0;
    _objc_retain();
    puStack_28 = puVar2;
    func_0x00010bf97ce0(param_3,param_2,&puStack_48);
    _objc_release(puStack_28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f32bb8; end: 105f32c4b;  */

void FUN_105f32bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6128;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c21e620();
  _objc_release(param_2);
  func_0x00010c067fc0(param_3);
  _objc_release(param_3);
  func_0x00010c177cc0(puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f32c4c; end: 105f32ddb; -[SCMapMutedFriendsConverter convert:] */

void FUN_105f32c4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar7;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e32178;
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c6130;
    _objc_alloc_init();
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lVar2 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(unaff_x22,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar2 != 0) {
      unaff_x24 = *plStack_110;
      do {
        lVar7 = 0;
        do {
          if (*plStack_110 != unaff_x24) {
            _objc_enumerationMutation(param_3);
          }
          func_0x00010befa120(unaff_x22,param_2,*(undefined8 *)(lStack_118 + lVar7 * 8));
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
        unaff_x23 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(param_3);
    ppuVar5 = unaff_x22;
    func_0x00010c1ca6c0(puVar6);
    _objc_release(unaff_x22);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_105f32ddc;
    lStack_160 = unaff_x24;
    uStack_158 = unaff_x23;
    ppuStack_150 = unaff_x22;
    puStack_148 = puVar6;
    puStack_140 = puVar1;
    lStack_138 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar5);
    puVar1 = PTR_PTR_1126bc310;
    func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e32198);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c60d0;
    _objc_alloc_init();
    func_0x00010c1cd8e0();
    func_0x00010c17d920(puVar6,param_2,0);
    func_0x00010c17d940(puVar6,param_2,0);
    ppuVar3 = ppuVar5;
    func_0x00010c0d4aa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf529e0();
    _objc_release(ppuVar3);
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar3 = ppuVar5;
      func_0x00010c0d4aa0(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_188 = 0xc2000000;
      pcStack_180 = FUN_105f32f3c;
      puStack_178 = &UNK_1108f6cb0;
      _objc_retain(ppuVar5);
      ppuStack_170 = ppuVar5;
      _objc_retain(puVar6);
      puStack_168 = puVar6;
      func_0x00010c0c0420(ppuVar4,param_2,&puStack_190);
      _objc_release(puStack_168);
      _objc_release(ppuStack_170);
      _objc_release(ppuVar4);
    }
    _objc_release(puVar1);
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f32ddc; end: 105f32f3b; -[SCMapMyStatusConverter convert:] */

void FUN_105f32ddc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e32198);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c60d0;
  _objc_alloc_init();
  func_0x00010c1cd8e0();
  func_0x00010c17d920(puVar2,param_2,0);
  func_0x00010c17d940(puVar2,param_2,0);
  lVar3 = param_3;
  func_0x00010c0d4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_3;
    func_0x00010c0d4aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105f32f3c;
    puStack_58 = &UNK_1108f6cb0;
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(puVar2);
    puStack_48 = puVar2;
    func_0x00010c0c0420(lVar4,param_2,&puStack_70);
    _objc_release(puStack_48);
    _objc_release(lStack_50);
    _objc_release(lVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f32f3c; end: 105f331f7;  */

void FUN_105f32f3c(double param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  
  func_0x00010c253620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar4 = lVar3;
  func_0x00010c0c3980();
  if ((int)lVar4 != 0) {
    lVar4 = lVar3;
    func_0x00010c09a860();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      bVar1 = true;
    }
    else {
      lVar6 = lVar3;
      func_0x00010c09a860(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      bVar1 = 0.0 < param_1;
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010c09a860();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf345e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar3;
      func_0x00010c09a860();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf345e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      _objc_release(lVar5);
      _objc_release();
      iVar2 = (int)lVar4;
      dVar9 = param_1;
      uVar10 = param_2;
      _CLLocationCoordinate2DIsValid(param_1,param_2);
      if (iVar2 != 0) {
        uVar8 = *(undefined8 *)(param_3 + 0x20);
        func_0x00010c0d4740(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51c80();
        _objc_release(uVar8);
        func_0x000108d312a8(param_1,param_2,dVar9,uVar10);
        lVar4 = lVar3;
        dVar9 = param_1;
        func_0x00010c09a860(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11ef60();
        _objc_release(lVar4);
        bVar1 = (bool)(param_1 <= dVar9 & bVar1);
      }
    }
    if (bVar1) {
      lVar4 = lVar3;
      func_0x00010c253880(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0dab60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cd8e0(*(undefined8 *)(param_3 + 0x28));
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010c253880(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf3e8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17d920(*(undefined8 *)(param_3 + 0x28));
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010c253880(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf3e8c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17d940(*(undefined8 *)(param_3 + 0x28));
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105f331f8; end: 105f33547; -[SCMapNowPlayingUpdateConverter convert:] */

undefined * FUN_105f331f8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
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
  puVar3 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    puVar11 = param_3;
    func_0x00010bfb81e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar11;
    func_0x00010bf529e0();
    _objc_release(puVar11);
    if (puVar1 != (undefined *)0x0) {
      puVar11 = PTR_PTR_1126c6138;
      _objc_alloc_init();
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010bfb81e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      puVar3 = puVar2;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar10 = *plStack_120;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar10) {
              _objc_enumerationMutation(puVar3);
            }
            puVar5 = puVar2;
            func_0x00010c0e00e0(puVar2,param_2,*(undefined8 *)(lStack_128 + (long)puVar12 * 8));
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126c6140;
            _objc_alloc_init(PTR_PTR_1126c6140);
            func_0x00010c19fd60();
            puVar7 = puVar5;
            func_0x00010c2711a0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c216240(puVar6,param_2,puVar7);
            _objc_release(puVar7);
            puVar7 = puVar5;
            func_0x00010bf0a420(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c16a4e0(puVar6,param_2,puVar7);
            _objc_release(puVar7);
            puVar7 = puVar5;
            func_0x00010c119be0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e53c0(puVar6,param_2,puVar7);
            _objc_release(puVar7);
            puVar7 = puVar5;
            func_0x00010c083f80(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b5cc0(puVar6,param_2,puVar7);
            _objc_release(puVar7);
            puVar7 = puVar5;
            func_0x00010c277e40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar7 != (undefined *)0x0) {
              puVar7 = puVar5;
              func_0x00010c277e40(puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010c282800();
              func_0x00010c218f80(puVar6,param_2,puVar8);
              _objc_release(puVar7);
            }
            puVar7 = puVar5;
            func_0x00010c119b40(puVar5);
            uVar9 = param_1;
            func_0x00010be9c3a0(param_1,param_2,puVar7);
            func_0x00010c19fe60(puVar6,param_2,uVar9);
            puVar7 = param_3;
            func_0x00010c292e00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar7 != (undefined *)0x0) {
              puVar7 = param_3;
              func_0x00010c292e00(param_3);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010c067fc0();
              uVar9 = param_1;
              func_0x00010be9c3a0(param_1,param_2,puVar8);
              func_0x00010c21eca0(puVar6,param_2,uVar9);
              _objc_release(puVar7);
            }
            func_0x00010befa120(puVar1,param_2,puVar6);
            _objc_release(puVar6);
            _objc_release(puVar5);
            puVar12 = puVar12 + 1;
          } while (puVar4 != puVar12);
          puVar4 = puVar3;
          func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_f0,0x10);
        } while (puVar4 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c1ce880(puVar11,param_2,puVar1);
      _objc_release(puVar2);
      _objc_release(puVar1);
      goto LAB_105f33500;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_105f33500:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(puVar3 == (undefined *)0x0);
}



/* Entry: 105f33548; end: 105f33553; -[SCMapNowPlayingUpdateConverter _sdkMusicProviderTypeFromType:] */

bool FUN_105f33548(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}



/* Entry: 105f33554; end: 105f3355b; -[SCMapSDKDataConverter convert:] */

undefined8 FUN_105f33554(void)

{
  return 0;
}



/* Entry: 105f3355c; end: 105f335eb; -[SCMapSessionIDConverter convert:] */

void FUN_105f3355c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e321b8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c6100;
    _objc_alloc_init(PTR_PTR_1126c6100);
    lVar2 = param_3;
    func_0x00010c2827c0(param_3);
    func_0x00010c220160(puVar3,param_2,lVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f335ec; end: 105f338af; -[SCMapSharingPreferencesConverter convert:] */

void FUN_105f335ec(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e321d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_105f33884;
  }
  puVar7 = PTR_PTR_1126c6148;
  _objc_alloc_init(PTR_PTR_1126c6148);
  puVar2 = PTR_PTR_1126c6150;
  _objc_alloc_init(PTR_PTR_1126c6150);
  puVar3 = param_3;
  func_0x00010bfcc660();
  if ((int)puVar3 == 0) {
    puVar3 = param_3;
    func_0x00010c22c5c0();
    puVar4 = PTR_PTR_1126c6160;
    if (1 < (long)puVar3) {
      if (puVar3 == (undefined *)0x2) {
        _objc_alloc_init(PTR_PTR_1126c6160);
        puVar3 = param_3;
        func_0x00010c2a4ba0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0d3c80();
        func_0x00010c19fd80(puVar4,param_2,puVar5);
        _objc_release(puVar5);
        goto LAB_105f337a4;
      }
      if (puVar3 != (undefined *)0x3) goto LAB_105f337c0;
      puVar4 = PTR_PTR_1126c6168;
      _objc_alloc_init(PTR_PTR_1126c6168);
      puVar3 = param_3;
      func_0x00010bf1c9a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0d3c80();
      func_0x00010c19fd80(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar3);
      func_0x00010c171cc0(puVar2,param_2,puVar4);
      goto LAB_105f337b8;
    }
    if (puVar3 == (undefined *)0x0) {
      _objc_alloc_init(PTR_PTR_1126c6160);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19fd80(puVar4,param_2,puVar3);
LAB_105f337a4:
      _objc_release(puVar3);
      func_0x00010c167160(puVar2,param_2,puVar4);
      goto LAB_105f337b8;
    }
    if (puVar3 == (undefined *)0x1) {
      puVar4 = PTR_PTR_1126c6170;
      _objc_alloc_init(PTR_PTR_1126c6170);
      func_0x00010c197e00(puVar2,param_2,puVar4);
      goto LAB_105f337b8;
    }
  }
  else {
    puVar4 = PTR_PTR_1126c6158;
    _objc_alloc_init(PTR_PTR_1126c6158);
    func_0x00010c1a3a20(puVar2,param_2,puVar4);
LAB_105f337b8:
    _objc_release(puVar4);
  }
LAB_105f337c0:
  func_0x00010c1bfd60(puVar7,param_2,puVar2);
  puVar3 = PTR_PTR_1126c6178;
  _objc_alloc_init(PTR_PTR_1126c6178);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c1ff380(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1b23c0(puVar3,param_2,0);
  func_0x00010c1be420(puVar7,param_2,puVar3);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  func_0x00010c220160();
  func_0x00010c1b5620(puVar7,param_2,puVar4);
  puVar5 = PTR_PTR_1126c0308;
  _objc_alloc_init(PTR_PTR_1126c0308);
  puVar6 = param_3;
  func_0x00010c0e7d40(param_3);
  func_0x00010c220160(puVar5,param_2,puVar6);
  func_0x00010c1b4640(puVar7,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_105f33884:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105f338b0; end: 105f33bbb; -[SCMapStickerOverrideConverter convert:] */

void FUN_105f338b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e321f8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c6180;
    _objc_alloc_init(PTR_PTR_1126c6180);
    lVar2 = param_3;
    func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108f9b10);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    func_0x00010c1d7a80(puVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f33bbc; end: 105f33d03; -[SCMapActiveUserDetailsConverter initWithActiveUserID:usernameProvider:displayNameProvider:bitmojiAvatarIDProvider:bitmojiSelfieIDProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105f33bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ee160;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273aac4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273aac8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273aacc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273aad0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273aad4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f33d04; end: 105f33e87; -[SCMapActiveUserDetailsConverter convert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f33d04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bf1c8;
  _objc_alloc_init(PTR_PTR_1126bf1c8);
  func_0x00010c21e620();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273aacc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273aac8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be04940(param_1,param_2,uVar3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11273aad0);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170a80(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11273aad4);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171480(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f33e88; end: 105f33f23; -[SCMapActiveUserDetailsConverter _displayNameFromDisplayName:username:] */

void FUN_105f33e88(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  lVar2 = param_3;
  if (((lVar1 == 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar2 = param_4, lVar1 == 0)) ||
     (_objc_retain(lVar2), lVar2 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010901e6c8(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f33f24; end: 105f33f93; -[SCMapActiveUserDetailsConverter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f33f24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273aad4,0);
  _objc_storeStrong(param_1 + _DAT_11273aad0,0);
  _objc_storeStrong(param_1 + _DAT_11273aacc,0);
  _objc_storeStrong(param_1 + _DAT_11273aac8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273aac4,0);
  return;
}



/* Entry: 105f33f94; end: 105f342ab; -[SCMapSnapchatterDetailsConverter convert:] */

void FUN_105f33f94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126bf1c8;
    _objc_alloc_init(PTR_PTR_1126bf1c8);
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620(puVar6,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be04940(param_1,param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar6,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170a80(puVar6,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171480(puVar6,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126bf1d0;
      _objc_alloc_init();
      lVar1 = lVar4;
      func_0x00010c243560(lVar4);
      func_0x00010c20e2c0(puVar7,param_2,lVar1);
      lVar1 = lVar4;
      func_0x00010c06d240(lVar4);
      func_0x00010c1af880(puVar7,param_2,lVar1);
    }
    puVar5 = puVar7;
    func_0x00010c06d240();
    if ((int)puVar5 != 0) {
      lVar1 = param_3;
      func_0x00010bfb9b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd3fe0(param_1,param_2,lVar1);
      func_0x00010c16fe60(puVar7,param_2,param_1);
      _objc_release(lVar1);
    }
    lVar1 = lVar4;
    func_0x00010bf1a5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar5 = PTR_PTR_1126bf1d8;
      _objc_alloc_init(PTR_PTR_1126bf1d8);
      lVar1 = lVar4;
      func_0x00010bf1a5c0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf65700();
      func_0x00010c1703a0(puVar5,param_2,lVar2);
      _objc_release(lVar1);
      lVar1 = lVar4;
      func_0x00010bf1a5c0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0d0e40();
      func_0x00010c170400(puVar5,param_2,lVar2);
      _objc_release(lVar1);
      func_0x00010c170380(puVar7,param_2,puVar5);
      _objc_release(puVar5);
    }
    lVar1 = param_3;
    func_0x00010bfb8280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c07fc80();
    func_0x00010c1b12e0(puVar7,param_2,lVar2);
    _objc_release(lVar1);
    func_0x00010c19fda0(puVar6,param_2,puVar7);
    _objc_release(lVar4);
    _objc_release(puVar7);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f342ac; end: 105f34347; -[SCMapSnapchatterDetailsConverter _displayNameFromDisplayName:username:] */

void FUN_105f342ac(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  lVar2 = param_3;
  if (((lVar1 == 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar2 = param_4, lVar1 == 0)) ||
     (_objc_retain(lVar2), lVar2 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010901e6c8(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f34348; end: 105f34567; -[SCMapSnapchatterDetailsConverter _bestFriendTypeFromFriendmojis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105f34348(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined1 *param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined *unaff_x20;
  undefined1 *puVar7;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined **unaff_x24;
  long lVar8;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_3;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf529e0();
  if (ppuVar1 == (undefined **)0x0) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(param_3);
    param_4 = auStack_d8;
    param_5 = 0x10;
    ppuVar1 = param_3;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      unaff_x23 = *plStack_110;
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if (*plStack_110 != unaff_x23) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x22 = *(undefined8 *)(lStack_118 + (long)unaff_x24 * 8);
          func_0x00010bf33560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x20);
          _objc_release(unaff_x22);
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar1 != unaff_x24);
        param_4 = auStack_d8;
        param_5 = 0x10;
        ppuVar1 = param_3;
        func_0x00010bf52a60();
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(param_3);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc5118;
    puVar2 = unaff_x20;
    func_0x00010bf4b900();
    if (((ulong)puVar2 & 1) == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dc50f8;
      puVar2 = unaff_x20;
      func_0x00010bf4b900();
      if (((ulong)puVar2 & 1) == 0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110dc50d8;
        puVar2 = unaff_x20;
        func_0x00010bf4b900();
        if (((ulong)puVar2 & 1) == 0) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110dc50b8;
          puVar2 = unaff_x20;
          func_0x00010bf4b900();
          if (((ulong)puVar2 & 1) == 0) {
            ppuVar5 = &PTR____CFConstantStringClassReference_110dc5158;
            puVar2 = unaff_x20;
            func_0x00010bf4b900();
            if (((ulong)puVar2 & 1) == 0) {
              ppuVar5 = &PTR____CFConstantStringClassReference_110dc5138;
              puVar2 = unaff_x20;
              func_0x00010bf4b900();
              uVar6 = 6;
              if ((int)puVar2 == 0) {
                uVar6 = 0;
              }
              puVar7 = (undefined1 *)(ulong)uVar6;
            }
            else {
              puVar7 = (undefined1 *)0x5;
            }
          }
          else {
            puVar7 = (undefined1 *)0x4;
          }
        }
        else {
          puVar7 = (undefined1 *)0x3;
        }
      }
      else {
        puVar7 = (undefined1 *)0x2;
      }
    }
    else {
      puVar7 = (undefined1 *)0x1;
    }
    _objc_release(unaff_x20);
  }
  ppuVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar7;
  }
  ___stack_chk_fail();
  pppuVar3 = &ppuStack_170;
  pcStack_128 = FUN_105f34568;
  ppuStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  puStack_148 = puVar7;
  puStack_140 = unaff_x20;
  ppuStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_168 = PTR_PTR_1126ee168;
  ppuStack_170 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_170,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined ***)0x0) {
    lVar8 = (long)_DAT_11273aad8;
    _objc_retain(ppuVar5);
    uVar4 = *(undefined8 *)((long)pppuVar3 + lVar8);
    *(undefined ***)((long)pppuVar3 + lVar8) = ppuVar5;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_11273aadc;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)pppuVar3 + lVar8);
    *(undefined1 **)((long)pppuVar3 + lVar8) = param_4;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_11273aae0;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)pppuVar3 + lVar8);
    *(undefined8 *)((long)pppuVar3 + lVar8) = param_5;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppuVar5);
  return (undefined1 *)pppuVar3;
}



/* Entry: 105f34568; end: 105f3464f; -[SCMapUserDetailsConverter initWithActiveUserID:activeUserConverter:snapchatterConverter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105f34568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ee168;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273aad8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273aadc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273aae0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f34650; end: 105f347b3; -[SCMapUserDetailsConverter convert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f34650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126bc310;
  _objc_retain(param_3);
  func_0x00010c277640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e32218);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f347b4;
  puStack_50 = &UNK_1108f9b30;
  uVar2 = param_3;
  lStack_48 = param_1;
  func_0x00010bf43280(param_3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0d3c80(uVar2);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273aadc);
  puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf50c80(uVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010befa120(uVar3,param_2,uVar5);
  puVar4 = PTR_PTR_1126c6190;
  _objc_alloc_init(PTR_PTR_1126c6190);
  uVar2 = uVar3;
  func_0x00010c0d3c80(uVar3);
  func_0x00010c21e7e0(puVar4,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f347b4; end: 105f34853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f347b4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273aae0);
    func_0x00010bf50c80(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105f34854; end: 105f348a3; -[SCMapUserDetailsConverter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f34854(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273aae0,0);
  _objc_storeStrong(param_1 + _DAT_11273aadc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273aad8,0);
  return;
}



/* Entry: 105f348a4; end: 105f34927; -[SCMapUserIDConverter convert:] */

void FUN_105f348a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e32238);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc_init(PTR_PTR_1126b1df0);
    func_0x00010c220160();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f34928; end: 105f349db; -[SCMapUserLocationConverter convert:] */

void FUN_105f34928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_4,&PTR____CFConstantStringClassReference_110e32258);
  _objc_retainAutoreleasedReturnValue();
  if ((param_5 == 0) || (lVar2 = param_5, func_0x000107f492b0(0x404e000000000000), (int)lVar2 == 0))
  {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bf1b8;
    _objc_alloc_init(PTR_PTR_1126bf1b8);
    func_0x00010bf51c80(param_5);
    func_0x00010c1b9120(puVar3);
    func_0x00010bf51c80(param_5);
    func_0x00010c1be5e0(param_2,puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f349dc; end: 105f34a93; -[SCMapWidgetInfoConverter convert:] */

void FUN_105f349dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e32278);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c6198;
    _objc_alloc_init(PTR_PTR_1126c6198);
    lVar2 = param_3;
    func_0x00010c083bc0(param_3);
    func_0x00010c1b5b60(puVar3,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c082840(param_3);
    func_0x00010c1b5760(puVar3,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c083c00(param_3);
    func_0x00010c1b5b80(puVar3,param_2,lVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f34a94; end: 105f34c0b; -[SCMapUpdateUserInfoRequestBuilder initWithObservable:converter:builder:] */

undefined8 *
FUN_105f34a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ee170;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    _objc_copyWeak(auStack_60,auStack_58);
    uVar2 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f34c0c; end: 105f34c53;  */

void FUN_105f34c0c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f34c54; end: 105f34c5b; -[SCMapUpdateUserInfoRequestBuilder subscribeOnNext:] */

void FUN_105f34c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_subscribeOnNext__112675a00);
  return;
}



/* Entry: 105f34c5c; end: 105f34ccb; -[SCMapUpdateUserInfoRequestBuilder _onNextMapTypeObject:] */

void FUN_105f34c5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf50c80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105f34ccc; end: 105f34d13; -[SCMapUpdateUserInfoRequestBuilder .cxx_destruct] */

void FUN_105f34ccc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f34d14; end: 105f34ecf; -[SCMapUpdateUserInfoRequestSender initWithMetadataManager:requestBuilders:] */

undefined8 *
FUN_105f34d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126ee178;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c61a0;
    _objc_alloc_init();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    _objc_copyWeak(auStack_70,auStack_68);
    uVar2 = param_4;
    func_0x00010c0b8600(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010bf97e80(uVar2);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f34ed0; end: 105f34f83;  */

void FUN_105f34ed0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c25ff60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f34f84; end: 105f3503f;  */

void FUN_105f34f84(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105f35040;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f35040; end: 105f35073;  */

void FUN_105f35040(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f35074; end: 105f35083;  */

void FUN_105f35074(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_bindTo__1125a42a0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  return;
}



/* Entry: 105f35084; end: 105f35183; -[SCMapUpdateUserInfoRequestSender _onRequest:] */

void FUN_105f35084(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c27ddc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2318a0();
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    FUN_105f3c9d8(*(undefined8 *)(param_1 + 0x20),lVar1,1);
  }
  func_0x00010c28bac0(*(undefined8 *)(param_1 + 8));
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 105f35184; end: 105f351cb; -[SCMapUpdateUserInfoRequestSender .cxx_destruct] */

void FUN_105f35184(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f351cc; end: 105f351e3; -[SMSdkUpdateUserInfoRequest shouldLogUpdate] */

uint FUN_105f351cc(uint param_1)

{
  func_0x00010bfdbe40();
  return param_1 ^ 1;
}



/* Entry: 105f351e4; end: 105f35487; -[SMSdkUpdateUserInfoRequest typeDescription] */

void FUN_105f351e4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfd74e0();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e322b8);
  }
  lVar2 = param_1;
  func_0x00010bfd7480();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e322d8);
  }
  lVar2 = param_1;
  func_0x00010bfde140();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e322f8);
  }
  lVar2 = param_1;
  func_0x00010bfdd9a0();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e30fb8);
  }
  lVar2 = param_1;
  func_0x00010bfd6440();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e32318);
  }
  lVar2 = param_1;
  func_0x00010bfd8dc0();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e32338);
  }
  lVar2 = param_1;
  func_0x00010bfd60c0();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e32358);
  }
  lVar2 = param_1;
  func_0x00010bfd60a0();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e32378);
  }
  lVar2 = param_1;
  func_0x00010bfd6080();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e32398);
  }
  lVar2 = param_1;
  func_0x00010bfd8a40();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e323b8);
  }
  lVar2 = param_1;
  func_0x00010bf8e780();
  if (lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e323d8);
  }
  lVar2 = param_1;
  func_0x00010bfd9600();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e323f8);
  }
  lVar2 = param_1;
  func_0x00010bfde7e0();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e32418);
  }
  lVar2 = param_1;
  func_0x00010bfdcba0();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e32438);
  }
  lVar2 = param_1;
  func_0x00010bfde240();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e32458);
  }
  lVar2 = param_1;
  func_0x00010bfd3f40();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e32478);
  }
  lVar2 = param_1;
  func_0x00010bfdbe40();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e32498);
  }
  lVar2 = param_1;
  func_0x00010bfd3f00();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e324b8);
  }
  lVar2 = param_1;
  func_0x00010bfd3f20();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e324d8);
  }
  func_0x00010bfd98c0();
  if ((int)param_1 != 0) {
    func_0x00010befa120(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e324f8);
  }
  ppuVar3 = ppuVar1;
  func_0x00010bf529e0();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db54d8;
  }
  else {
    ppuVar3 = ppuVar1;
    func_0x00010bf446e0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105f35488; end: 105f360eb; -[SCMapSDKDataBridge initWithBasemapUserMetadataManager:mapSessionIDProvider:locationProvider:shouldStartStreaming:mapValisService:friendsFeedDataCoordinator:activeUserID:sharingPreferencesProvider:userLocationPermissionManager:locationPermissionManager:notificationStatusRetriever:mutingService:bitmojiAvatarProvider:statusService:friendmojiRegistry:userPreferences:homeScreenWidgetUpdater:mapLoadTracker:personLocationsProvider:featureSettingsService:snapchatterDataFetcher:snapchatterRepository:userInfoServices:circumstanceEngine:externalMusicTweaksServices:externalMusicServices:mapView:locationRequestStateServices:] */

undefined8 *
FUN_105f35488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,long param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,long param_28,long param_29
             ,undefined8 param_30,undefined8 param_31)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  puVar2 = PTR_PTR_1126bc310;
  func_0x00010c277640();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR_PTR_1126ee180;
  puVar3 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _CACurrentMediaTime();
    puVar4 = PTR_PTR_1126bc330;
    func_0x00010c277860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17a60();
    puVar5 = PTR_PTR_1126c61a0;
    _objc_alloc_init();
    uVar14 = puVar3[3];
    puVar3[3] = puVar5;
    _objc_release(uVar14);
    _objc_retain(param_27);
    uVar14 = puVar3[4];
    puVar3[4] = param_27;
    _objc_release(uVar14);
    uVar14 = param_27;
    func_0x00010bf1f440();
    *(char *)(puVar3 + 7) = (char)uVar14;
    _objc_retain(param_23);
    uVar14 = puVar3[5];
    puVar3[5] = param_23;
    _objc_release(uVar14);
    uVar14 = param_31;
    func_0x00010c0dfc40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = puVar3[6];
    puVar3[6] = uVar16;
    _objc_release(uVar15);
    _objc_release(uVar14);
    uVar14 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = puVar3[8];
    puVar3[8] = uVar14;
    _objc_release(uVar16);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    if (param_5 != 0) {
      lVar6 = param_5;
      func_0x00010c15ff80(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bdf3280(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar7);
      _objc_release(lVar6);
    }
    puVar7 = puVar3;
    func_0x00010bdeb3c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    uVar14 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bdf55c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar14);
    uVar14 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bdf5540(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar14);
    uVar14 = param_22;
    func_0x00010c269d40(param_22);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_21;
    func_0x00010c269d40(param_21);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bdf1220(param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar15);
    _objc_release(uVar16);
    _objc_release(uVar14);
    uVar14 = param_9;
    func_0x00010c269d40(param_9);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bdedec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar14);
    puVar7 = puVar3;
    func_0x00010bdf5560(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    if (param_11 != 0) {
      lVar6 = param_11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bdf3460(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar7);
      _objc_release(lVar6);
    }
    puVar7 = puVar3;
    func_0x00010bdf0920(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    iVar1 = (int)puVar3[4];
    func_0x000109021ca4();
    puVar7 = puVar3;
    if (iVar1 == 0) {
      func_0x00010bdef9e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdefa00(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    uVar14 = param_15;
    func_0x00010c269d40(param_15);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bdf04a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar14);
    uVar14 = param_16;
    func_0x00010c269d40(param_16);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bdeb500(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar14);
    uVar14 = param_17;
    func_0x00010c269d40(param_17);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bdeb560(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar16);
    _objc_release(uVar14);
    iVar1 = (int)puVar3[4];
    func_0x000109021d74();
    if (iVar1 != 0) {
      uVar14 = param_17;
      func_0x00010c269d40(param_17);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bdf5060(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar7);
      _objc_release(uVar14);
    }
    puVar7 = puVar3;
    func_0x00010bdeb400(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    lVar6 = param_23;
    func_0x00010c2a4fe0();
    lVar8 = puVar3[4];
    func_0x0001090223b8();
    if (lVar6 < lVar8) {
      uVar14 = param_19;
      func_0x00010c269d40(param_19);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bdf5c40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar7);
      _objc_release(uVar14);
    }
    puVar7 = puVar3;
    func_0x00010bdee860(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    puVar7 = puVar3;
    func_0x00010bdeeb40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    uVar14 = param_27;
    func_0x000109021c84();
    if ((int)uVar14 != 0) {
      puVar7 = puVar3;
      func_0x00010bdf3ec0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar7);
    }
    puVar7 = puVar3;
    func_0x00010bdede40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    puVar7 = puVar3;
    func_0x00010bdede20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar7);
    uVar14 = param_27;
    func_0x000109021d10();
    if ((int)uVar14 != 0) {
      uVar14 = param_26;
      func_0x00010c2946e0(param_26);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_26;
      func_0x00010bf85f80(param_26);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_26;
      func_0x00010bf1ad00(param_26);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_26;
      func_0x00010bf1c0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bdf21a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar7);
      _objc_release(uVar9);
      _objc_release(uVar15);
      _objc_release(uVar16);
      _objc_release(uVar14);
    }
    lVar6 = param_28;
    func_0x00010c27d8c0();
    _objc_retainAutoreleasedReturnValue();
    if (((param_29 != 0) && (lVar6 != 0)) && (lVar8 = lVar6, func_0x00010c0bae40(), (int)lVar8 != 0)
       ) {
      lVar8 = param_29;
      func_0x00010c0dd900();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_29;
      func_0x00010bf48a40(param_29);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = param_22;
      func_0x00010c269d40(param_22);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_30;
      func_0x00010c269d40(param_30);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar16;
      func_0x00010c0b90c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bdf0960(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar7);
      _objc_release(uVar15);
      _objc_release(uVar16);
      _objc_release(uVar14);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar8);
    }
    if ((puVar3[6] != 0) && (*(char *)(puVar3 + 7) == '\x01')) {
      puVar7 = puVar3;
      func_0x00010bdefa20(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar7);
    }
    puVar13 = PTR_PTR_1126c61a8;
    _objc_alloc();
    func_0x00010c02bb60();
    uVar14 = puVar3[1];
    puVar3[1] = puVar13;
    _objc_release(uVar14);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 105f360ec; end: 105f361bf; -[SCMapSDKDataBridge _createBatteryInfoBuilder] */

void FUN_105f360ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105f361c0;
  puStack_40 = &UNK_110842e18;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x000100162d98("APPSTORE",&puStack_58);
  puVar2 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar3 = PTR_PTR_1126c61b8;
  _objc_alloc_init(PTR_PTR_1126c61b8);
  func_0x00010c030a80(puVar2);
  _objc_release(puVar3);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f361c0; end: 105f3624f;  */

void FUN_105f361c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f36250; end: 105f362cf; -[SCMapSDKDataBridge _createSessionIDRequestBuilderWithSessionIDObservable:] */

void FUN_105f36250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c61b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c61c0;
  _objc_alloc_init(PTR_PTR_1126c61c0);
  func_0x00010c030a80(puVar1,param_2,param_3,puVar2,&PTR___NSConcreteGlobalBlock_1108f9c20);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f362d0; end: 105f3631b;  */

void FUN_105f362d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1c25a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f3631c; end: 105f363bb; -[SCMapSDKDataBridge _createUserIDRequestBuilderWithID:] */

void FUN_105f3631c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c0d9840();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c61b0;
  _objc_alloc(PTR_PTR_1126c61b0);
  puVar3 = PTR_PTR_1126c61c8;
  _objc_alloc_init(PTR_PTR_1126c61c8);
  func_0x00010c030a80(puVar2,param_2,puVar1,puVar3,&PTR___NSConcreteGlobalBlock_1108f9c60);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f363bc; end: 105f36407;  */

void FUN_105f363bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c187f00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f36408; end: 105f364ab; -[SCMapSDKDataBridge _createUserLocationRequestBuilderWithLocationProvider:] */

void FUN_105f36408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c61b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bdef9c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c61d0;
  _objc_alloc_init(PTR_PTR_1126c61d0);
  func_0x00010c030a80(puVar1,param_2,param_1,puVar2,&PTR___NSConcreteGlobalBlock_1108f9ca0);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f364ac; end: 105f364f7;  */

void FUN_105f364ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c21eb20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f364f8; end: 105f3670f; -[SCMapSDKDataBridge _createLocationObservableWithLocationProvider:] */

undefined * FUN_105f364f8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  puVar1 = param_3;
  func_0x00010c09f820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105f36710;
  puStack_90 = &UNK_1108f9cc0;
  _objc_retain(uVar6);
  uStack_88 = uVar6;
  _objc_retain(param_3);
  puVar2 = puVar1;
  puStack_80 = param_3;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar7;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105f36838;
  puStack_b8 = &UNK_1108f9cf0;
  _objc_retain(param_3);
  puVar3 = puVar2;
  puStack_b0 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(puVar3);
    puVar7 = puVar3;
  }
  else {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar2;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cab40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puStack_b0);
  _objc_release(puStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar6);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_105f36710;
  uStack_f0 = uVar6;
  puStack_e8 = param_3;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  lVar5 = *(long *)(puVar1 + 0x20);
  if ((lVar5 == 0) || (func_0x00010c06cae0(), (int)lVar5 != 0)) {
    puStack_108 = &uStack_110;
    uStack_110 = 0;
    uStack_100 = 0x2020000000;
    uStack_f8 = 0;
    func_0x00010c0bd800(param_2);
    if (*(char *)(puStack_108 + 3) == '\x01') {
      lVar5 = *(long *)(puVar1 + 0x28);
      func_0x00010c09ea00(lVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)(ulong)(lVar5 != 0);
      _objc_release();
    }
    else {
      puVar7 = (undefined *)0x0;
    }
    __Block_object_dispose(&uStack_110,8);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  _objc_release(param_2);
  return puVar7;
}



/* Entry: 105f36710; end: 105f36823;  */

bool FUN_105f36710(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 == 0) || (func_0x00010c06cae0(), (int)lVar2 != 0)) {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    func_0x00010c0bd800(param_2);
    if (*(char *)(puStack_38 + 3) == '\x01') {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c09ea00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar2 != 0;
      _objc_release();
    }
    else {
      bVar1 = false;
    }
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 105f36824; end: 105f3683f;  */

void FUN_105f36824(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105f36840; end: 105f368e3; -[SCMapSDKDataBridge _createUserHeadingRequestBuilderWithLocationProvider:] */

void FUN_105f36840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c61b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bdee720(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c61d8;
  _objc_alloc_init(PTR_PTR_1126c61d8);
  func_0x00010c030a80(puVar1,param_2,param_1,puVar2,&PTR___NSConcreteGlobalBlock_1108f9d40);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f368e4; end: 105f3692f;  */

void FUN_105f368e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1de8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1fcd00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f36930; end: 105f36a03; -[SCMapSDKDataBridge _createHeadingObservableWithLocationProvider:] */

void FUN_105f36930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c09f820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105f36ad8;
  puStack_40 = &UNK_1108f9da0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010bf43280(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105f36a04; end: 105f36ac3;  */

undefined1 FUN_105f36a04(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bd800(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105f36ac4; end: 105f36adf;  */

void FUN_105f36ac4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105f36ae0; end: 105f36b2b; -[SCMapSDKDataBridge _createPeopleLocationsRequestBuilderWithPersonLocationProvider:valisService:statusService:activeUserID:shouldStartStreaming:mapLoadTracker:initStartTime:initToLocationsTrace:] */

void FUN_105f36ae0(void)

{
  long in_x3;
  
  if (in_x3 == 0) {
    func_0x00010bdf52a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdf4340();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f36b2c; end: 105f36f47; -[SCMapSDKDataBridge _createStreamingPeopleLocationsRequestBuilderWithPersonLocationProvider:valisService:statusService:activeUserID:shouldStartStreaming:mapLoadTracker:initStartTime:initToLocationsTrace:] */

void FUN_105f36b2c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_105f36f48;
  uStack_a0 = 0x105f36f58;
  uStack_98 = 0;
  lVar5 = param_4;
  func_0x00010bfd7a20();
  if ((int)lVar5 == 0) {
    puVar4 = param_5;
    func_0x00010bfb8420(param_5);
    _objc_retainAutoreleasedReturnValue();
    if (param_8 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110e32578;
      goto LAB_105f36d50;
    }
    func_0x00010bf79e40(param_9);
    lVar5 = param_4;
    func_0x00010c136180();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)puStack_b8[5];
    puStack_b8[5] = lVar5;
    ppuVar6 = &PTR____CFConstantStringClassReference_110e32598;
  }
  else {
    func_0x00010bf79e40(param_9);
    puVar7 = PTR_PTR_1126ae6b8;
    puVar4 = PTR_PTR_1126bf2c8;
    _objc_alloc(PTR_PTR_1126bf2c8);
    lVar5 = param_4;
    func_0x00010bf00640(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff460(puVar4);
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(lVar5);
    puVar4 = PTR_PTR_1126ae6b8;
    puVar2 = param_5;
    puStack_90 = puVar7;
    func_0x00010bfb8420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cab40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    ppuVar6 = &PTR____CFConstantStringClassReference_110dfbe18;
  }
  _objc_release(puVar7);
LAB_105f36d50:
  FUN_105f3c684(*(undefined8 *)(param_2 + 0x18),ppuVar6,1);
  _objc_initWeak(auStack_c8,param_9);
  _objc_initWeak(auStack_d0,*(undefined8 *)(param_2 + 0x18));
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_105f36f48;
  uStack_e0 = 0x105f36f58;
  _objc_retain(param_10);
  uStack_d8 = param_10;
  _objc_copyWeak(auStack_118,auStack_c8);
  _objc_copyWeak(auStack_110,auStack_d0);
  uStack_108 = param_1;
  func_0x00010bdf11e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_118);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  _objc_release(puVar4);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_118);
  __Block_object_dispose(&uStack_100,8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  lVar5 = 8;
  __Block_object_dispose(&uStack_c0);
  __Unwind_Resume();
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 105f36f48; end: 105f36f5f;  */

void FUN_105f36f48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


