/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055b5fdc; end: 1055b6083;  */

void FUN_1055b5fdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_1055b8cdc(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055b6084; end: 1055b62bb; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _updateRecentlyActivenessFromUserIds:lastUpdatedTimestamp:completionQueue:completionHandler:] */

void FUN_1055b6084(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1055b62bc;
    puStack_70 = &UNK_110849530;
    _objc_retain(param_6);
    uStack_68 = param_6;
    func_0x00010007380c(param_5,&puStack_88);
    _objc_release(uStack_68);
  }
  else {
    _objc_initWeak(auStack_90,param_2);
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_1055b5fc4;
    uStack_a0 = 0x1055b5fd4;
    uStack_98 = 0;
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_90);
    _objc_retain(param_4);
    uStack_c8 = param_1;
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010c0f8500(uVar2);
    _objc_release(uVar2);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_d0);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1055b62bc; end: 1055b62d3;  */

void FUN_1055b62bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055b62d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),0,PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 1055b62d4; end: 1055b634b;  */

void FUN_1055b62d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bee60a0(*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1055b634c; end: 1055b636f;  */

void FUN_1055b634c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055b6368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,param_2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    return;
  }
  return;
}



/* Entry: 1055b6370; end: 1055b66cb; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _upsertActivenessFromUserIds:transactionContext:timestamp:] */

void FUN_1055b6370(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [256];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar4 = param_5;
  FUN_1055b89e4(param_5,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar17 = lVar4;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar16 = *plStack_1b0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1b0 != lVar16) {
          _objc_enumerationMutation(lVar4);
        }
        uVar19 = *(undefined8 *)(lStack_1b8 + lVar15 * 8);
        uVar5 = uVar19;
        func_0x00010c2923e0(uVar19);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf1f3c0();
        _objc_release(lVar6);
        _objc_release(uVar5);
        FUN_1055b9094(param_1,param_5,uVar19,lVar7);
        func_0x00010c2923e0(uVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar19);
        func_0x00010befa120(puVar3);
        lVar15 = lVar15 + 1;
      } while (lVar17 != lVar15);
      lVar17 = lVar4;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  puVar8 = puVar12;
  func_0x00010c0d3c80();
  func_0x00010c0ce860();
  uVar5 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  _objc_retain(puVar8);
  puVar13 = &uStack_200;
  puVar14 = auStack_180;
  uVar19 = 0x10;
  puVar9 = puVar8;
  func_0x00010bf52a60();
  if (puVar9 != (undefined *)0x0) {
    lVar17 = *plStack_1f0;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (*plStack_1f0 != lVar17) {
          _objc_enumerationMutation(puVar8);
        }
        lVar16 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar16;
        func_0x00010bf1f3c0();
        _objc_release(lVar16);
        puVar10 = PTR_PTR_1126bb4b8;
        _objc_alloc(PTR_PTR_1126bb4b8);
        func_0x00010c05b520(param_1);
        uVar5 = param_1;
        FUN_1055b9094(param_1,param_5,puVar10,lVar15);
        func_0x00010befa120(puVar3);
        _objc_release(puVar10);
        puVar18 = puVar18 + 1;
      } while (puVar9 != puVar18);
      puVar13 = &uStack_200;
      puVar14 = auStack_180;
      uVar19 = 0x10;
      puVar9 = puVar8;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar8);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(puVar13);
    _objc_retain(puVar14);
    _objc_retain(uVar19);
    puVar11 = puVar13;
    func_0x00010bf529e0();
    puVar12 = PTR____NSArray0__struct_11034ab48;
    if (puVar11 != (undefined8 *)0x0) {
      puVar12 = *(undefined **)(param_4 + 0x20);
      func_0x00010c122880(uVar5,puVar12);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bde21a0(param_4);
    _objc_release(puVar12);
    _objc_release(uVar19);
    _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar13);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055b66cc; end: 1055b678b; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _publishUpdatedRecords:lastUpdatedTimestamp:localUnexpiredRecentlyActiveRecords:sourceToUserIds:] */

void FUN_1055b66cc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puVar2 = *(undefined **)(param_2 + 0x20);
    func_0x00010c122880(param_1,puVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bde21a0(param_2,param_3,puVar2,param_5,param_6);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055b678c; end: 1055b6a53; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _combineUpdatedRecentlyActiveRecords:localUnexpiredRecentlyActiveRecords:sourceToUserIds:] */

void FUN_1055b678c(undefined8 param_1,long param_2,undefined **param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  ppuVar8 = &puStack_120;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = param_4;
  uStack_88 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2925e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _CACurrentMediaTime();
  lVar1 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1055b6a54;
    puStack_a8 = &UNK_11089abf0;
    _objc_retain(uVar9);
    param_3 = &puStack_c0;
    lVar2 = lVar1;
    uStack_a0 = uVar9;
    uStack_98 = param_1;
    func_0x000100504554(lVar1,param_3);
    func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x38));
    _objc_release(lVar2);
    _objc_release(uStack_a0);
  }
  lVar2 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x1055b6ae4;
    puStack_d8 = &UNK_11089abf0;
    _objc_retain(uVar9);
    param_3 = &puStack_f0;
    lVar3 = lVar2;
    uStack_d0 = uVar9;
    uStack_c8 = param_1;
    func_0x000100504554(lVar2,param_3);
    func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x40));
    _objc_release(lVar3);
    _objc_release(uStack_d0);
  }
  lVar3 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x1055b6b74;
    puStack_108 = &UNK_11089abf0;
    _objc_retain(uVar9);
    lVar4 = lVar3;
    uStack_100 = uVar9;
    uStack_f8 = param_1;
    func_0x000100504554(lVar3,&puStack_120);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(uStack_100);
    param_3 = ppuVar8;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar6 = *(undefined **)(param_4 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126bb4b8;
    _objc_alloc(PTR_PTR_1126bb4b8);
    func_0x00010c05b520(*(undefined8 *)(param_4 + 0x28));
  }
  else {
    _objc_retain(puVar6);
    puVar7 = puVar6;
  }
  _objc_release(puVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055b6a54; end: 1055b6c03;  */

void FUN_1055b6a54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126bb4b8;
    _objc_alloc(PTR_PTR_1126bb4b8);
    func_0x00010c05b520(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055b6c04; end: 1055b6c93; -[SCSnapchattersRecentlyActiveRecordDefaultRepository .cxx_destruct] */

void FUN_1055b6c04(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1055b6c94; end: 1055b6cbb; -[SCSnapchattersRecentlyActiveRecordParamConverter sourceToUserIdsFromSourceToSnapchatters:] */

void FUN_1055b6c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bd869d0(param_3,&PTR___NSConcreteGlobalBlock_11089ac20,
                      &PTR___NSConcreteGlobalBlock_11089ac40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b6cbc; end: 1055b6ce3;  */

void FUN_1055b6cbc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055b6ce4; end: 1055b6d03;  */

void FUN_1055b6ce4(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11089ac60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b6d04; end: 1055b6d0b;  */

void FUN_1055b6d04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1055b6d0c; end: 1055b6ddf; -[SCSnapchattersRecentlyActiveRecordParamConverter userIdsFromSourceToSnapchatters:] */

void FUN_1055b6d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_3);
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1055b6e08;
  puStack_40 = &UNK_110854bd0;
  puStack_38 = puVar1;
  _objc_retain();
  uVar2 = param_3;
  func_0x00010bd869d0(param_3,&PTR___NSConcreteGlobalBlock_11089ac80,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf00560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055b6de0; end: 1055b6e4b;  */

void FUN_1055b6de0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055b6e4c; end: 1055b6e53;  */

void FUN_1055b6e4c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1055b6e54; end: 1055b6f1b; -[SCSnapchattersRecentlyActiveRecordParamConverter userIdToRecentlyActiveFromRecentlyActiveRecordsArrays:] */

void FUN_1055b6e54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11089ace0);
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1055b6f74;
  puStack_40 = &UNK_11089ad80;
  _objc_retain(puVar1);
  puStack_38 = puVar1;
  func_0x000100504554(uVar2,&puStack_58);
  _objc_release();
  _objc_release(puStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055b6f1c; end: 1055b6f43;  */

void FUN_1055b6f1c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_11089ad20,
                      &PTR___NSConcreteGlobalBlock_11089ad60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b6f44; end: 1055b6f4b;  */

void FUN_1055b6f44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1055b6f4c; end: 1055b6fab;  */

void FUN_1055b6f4c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055b6fac; end: 1055b6fff; -[SCSnapchattersRecentlyActiveRecordParamConverter unexpiredRecentlyActiveRecords:expirationTimestamp:] */

void FUN_1055b6fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1055b7000;
  puStack_20 = &UNK_11089adb0;
  uStack_18 = param_1;
  func_0x0001006372a4(param_4,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b7000; end: 1055b702b;  */

bool FUN_1055b7000(double param_1,long param_2,undefined8 param_3)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + 0x20);
  func_0x00010c08a800(param_3);
  return dVar1 <= param_1;
}



/* Entry: 1055b702c; end: 1055b70cf; -[SCSnapchattersRecentlyActiveRecordParamConverter unexpiredSourceToRecentlyActiveRecordsFromSourceToUserIds:userIdToRecordsInCache:expirationTimestamp:] */

void FUN_1055b702c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1055b70f8;
  puStack_48 = &UNK_110893620;
  uStack_40 = param_5;
  uStack_38 = param_1;
  _objc_retain(param_5);
  func_0x00010bd869d0(param_4,&PTR___NSConcreteGlobalBlock_11089add0,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1055b70d0; end: 1055b70f7;  */

void FUN_1055b70d0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055b70f8; end: 1055b71e3;  */

void FUN_1055b70f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1055b71e4;
  puStack_50 = &UNK_11089adf0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar3;
  _objc_retain(puVar2);
  uVar3 = param_2;
  puStack_40 = puVar2;
  func_0x000100504554(param_2,&puStack_68);
  _objc_release(param_2);
  _objc_release(uVar3);
  puVar1 = puStack_40;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055b71e4; end: 1055b727b;  */

void FUN_1055b71e4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    dVar3 = *(double *)(param_2 + 0x30);
    func_0x00010c08a800();
    if (dVar3 <= param_1) {
      func_0x00010befa120(*(undefined8 *)(param_2 + 0x28));
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1055b727c; end: 1055b732f; -[SCSnapchattersRecentlyActiveRecordParamConverter expiredSourceToUserIdsFromSourceToUserIds:localUnexpiredRecentlyActiveRecords:] */

void FUN_1055b727c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x000100817178(param_4,&PTR___NSConcreteGlobalBlock_11089ae20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1055b7360;
  puStack_40 = &UNK_110854bd0;
  uStack_38 = param_4;
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bd869d0(param_3,&PTR___NSConcreteGlobalBlock_11089ae40,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055b7330; end: 1055b7337;  */

void FUN_1055b7330(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1055b7338; end: 1055b73db;  */

void FUN_1055b7338(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055b73dc; end: 1055b73fb;  */

uint FUN_1055b73dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1055b73fc; end: 1055b74b3; -[SCSnapchattersRecentlyActiveRecordParamConverter userIdToActivenessFromSourceToRecentlyActives:] */

void FUN_1055b73fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1055b74dc;
  puStack_40 = &UNK_110854bd0;
  _objc_retain();
  uVar2 = param_3;
  puStack_38 = puVar1;
  func_0x00010bd869d0(param_3,&PTR___NSConcreteGlobalBlock_11089ae60,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055b74b4; end: 1055b7557;  */

void FUN_1055b74b4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055b7558; end: 1055b75eb;  */

void FUN_1055b7558(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c122720(param_2);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055b75ec; end: 1055b76c7; -[SCSnapchattersRecentlyActiveRecordParamConverter recentlyActiveRecordsFromRecentlyActivesDictionary:lastUpdatedTimestamp:] */

void FUN_1055b75ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1055b76f0;
  puStack_58 = &UNK_110893620;
  uStack_48 = param_1;
  _objc_retain();
  uVar2 = param_4;
  puStack_50 = puVar1;
  func_0x00010bd869d0(param_4,&PTR___NSConcreteGlobalBlock_11089aeb0,&puStack_70);
  _objc_release(param_4);
  _objc_release(uVar2);
  func_0x00010bd86590(puVar1,&PTR___NSConcreteGlobalBlock_11089aef0);
  _objc_release();
  _objc_release(puStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055b76c8; end: 1055b776b;  */

void FUN_1055b76c8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055b776c; end: 1055b7803;  */

void FUN_1055b776c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb4b8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c122720(param_2);
  _objc_release(param_2);
  func_0x00010c05b520(*(undefined8 *)(param_1 + 0x20),puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055b7804; end: 1055b780b;  */

void FUN_1055b7804(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1055b780c; end: 1055b789b; -[SCSnapchattersRecentlyActiveRecordService initWithUnifiedGRPCClientFactory:performerProvider:] */

long FUN_1055b780c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    _objc_retain(param_4);
    lVar1 = param_1;
    func_0x00010be49c40(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_1;
    func_0x00010be49ba0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar1;
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 1055b789c; end: 1055b79eb; -[SCSnapchattersRecentlyActiveRecordService getActiveStatusForUserIds:completionQueue:completionBlock:] */

void FUN_1055b789c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055b79ec; end: 1055b7a23;  */

void FUN_1055b79ec(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1cb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055b7a24; end: 1055b7ae7; -[SCSnapchattersRecentlyActiveRecordService _lazyRecentlyActiveServerWithUnifiedGRPCClientFactory:performerProvider:] */

void FUN_1055b7a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1055b7ae8;
  puStack_48 = &UNK_11089af10;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055b7ae8; end: 1055b7c27;  */

void FUN_1055b7ae8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,120000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,120000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf56360(uVar2,param_2,&PTR____CFConstantStringClassReference_110ded718,puVar1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126bb4c0;
  _objc_alloc(PTR_PTR_1126bb4c0);
  func_0x00010c058f80();
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055b7c28; end: 1055b7d1b; -[SCSnapchattersRecentlyActiveRecordService _lazyPerformerWithPerformerProvider:] */

void FUN_1055b7c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1055b7cc0;
  puStack_30 = &UNK_1108545f0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055b7d1c; end: 1055b7ea3; -[SCSnapchattersRecentlyActiveRecordService _getActiveStatusForUserIdsInPerformer:completionQueue:completionBlock:] */

void FUN_1055b7d1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be91120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd8d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c2933e0(uVar1);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055b7ea4; end: 1055b7f0f;  */

void FUN_1055b7ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff8a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055b7f10; end: 1055b80db; -[SCSnapchattersRecentlyActiveRecordService _requestFromSourceToUserIds:] */

void FUN_1055b7f10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined *unaff_x25;
  long unaff_x26;
  undefined8 uVar11;
  long unaff_x27;
  undefined **unaff_x28;
  long lVar12;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined1 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined **ppuStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
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
  puVar1 = PTR_PTR_1126bb4c8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_138 = puVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar12 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_f0;
  uVar8 = 0x10;
  lVar3 = lVar12;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x27 = *plStack_120;
    unaff_x28 = &PTR_PTR_1126bb000;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar12);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        unaff_x25 = PTR_PTR_1126bb4d0;
        _objc_opt_new();
        func_0x00010c067fc0(uVar8);
        func_0x00010c1e64c0(unaff_x25);
        unaff_x24 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x24;
        func_0x00010c0d3c80();
        func_0x00010c21e700(unaff_x25);
        _objc_release(unaff_x26);
        _objc_release(unaff_x24);
        func_0x00010befa120(puVar2);
        _objc_release(unaff_x25);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      puVar7 = auStack_f0;
      uVar8 = 0x10;
      lVar3 = lVar12;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar12);
  puVar1 = puStack_138;
  puVar6 = puVar2;
  func_0x00010c1ec480(puStack_138);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puStack_160 = puVar1;
  pcStack_148 = FUN_1055b80dc;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  lStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  lStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  lStack_170 = lVar12;
  puStack_168 = puVar2;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar2 = puVar6;
    func_0x00010c13be00();
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puVar4 = puVar2;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar12 = *plStack_260;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar12) {
            _objc_enumerationMutation(puVar2);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar11 = *(undefined8 *)(lStack_268 + (long)puVar9 * 8);
          func_0x00010c11d960(uVar11);
          func_0x00010c0df760(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c253640(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(uVar11);
          _objc_release(puVar5);
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        puVar4 = puVar2;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar2);
  }
  puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a0 = 0xc2000000;
  pcStack_298 = FUN_1055b8324;
  puStack_290 = &UNK_11084a9e8;
  puStack_288 = puVar1;
  puStack_280 = puVar7;
  uStack_278 = param_6;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(param_6);
  func_0x00010007380c(uVar8,&puStack_2a8);
  _objc_release(puStack_280);
  _objc_release(puStack_288);
  _objc_release(uStack_278);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001055b8334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar6 + 0x30) + 0x10))
            (*(long *)(puVar6 + 0x30),*(undefined8 *)(puVar6 + 0x20),*(undefined8 *)(puVar6 + 0x28))
  ;
  return;
}



/* Entry: 1055b80dc; end: 1055b8323; -[SCSnapchattersRecentlyActiveRecordService _didReceiveRecentlyActiveResponse:error:completionQueue:completionBlock:] */

void FUN_1055b80dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010c13be00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar5 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar2);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar6 = *(undefined8 *)(lStack_128 + lVar5 * 8);
          func_0x00010c11d960(uVar6);
          func_0x00010c0df760(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c253640(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(uVar6);
          _objc_release(puVar4);
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar3 = lVar2;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
  }
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_1055b8324;
  puStack_150 = &UNK_11084a9e8;
  puStack_148 = puVar1;
  uStack_140 = param_4;
  uStack_138 = param_6;
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(param_6);
  func_0x00010007380c(param_5,&puStack_168);
  _objc_release(uStack_140);
  _objc_release(puStack_148);
  _objc_release(uStack_138);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001055b8334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x30) + 0x10))
            (*(long *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x20),
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 1055b8324; end: 1055b8337;  */

void FUN_1055b8324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055b8334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055b8338; end: 1055b8343; -[SCSnapchattersRecentlyActiveRecordService _callOptionBuilder] */

void FUN_1055b8338(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae748,PTR_s_builder_1125a6bb0);
  return;
}



/* Entry: 1055b8344; end: 1055b8373; -[SCSnapchattersRecentlyActiveRecordService .cxx_destruct] */

void FUN_1055b8344(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055b8374; end: 1055b8503;  */

void FUN_1055b8374(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfec000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c262260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126bb4e8;
  _objc_alloc(PTR_PTR_1126bb4e8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010be49c20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010be74020();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010be49aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e080(puVar4,param_2,uVar3,lVar6,uVar2,uVar1,lVar8,lVar10,
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055b8504; end: 1055b8583; -[SCSnapchattersRecentlyActiveRecordServiceProvider _pinnedSuggestedSnapchattersObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055b8504(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112726034;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0fc4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1055b8584; end: 1055b8693; -[SCSnapchattersRecentlyActiveRecordServiceProvider _lazyContactSnapchattersObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055b8584(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x00010071520c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112726030);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0dace0(lVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1055b8694;
  puStack_50 = &UNK_11089afa0;
  puVar6 = PTR_PTR_1126ae720;
  lStack_48 = lVar5;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055b8694; end: 1055b86bb;  */

void FUN_1055b8694(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055b86bc; end: 1055b87af; -[SCSnapchattersRecentlyActiveRecordServiceProvider _lazyRecentlyActiveRecordService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055b86bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112726040;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar3;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x0001007151e8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1055b87b0;
  puStack_48 = &UNK_11089afd0;
  puVar2 = PTR_PTR_1126ae720;
  lStack_40 = lVar1;
  lStack_38 = lVar3;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055b87b0; end: 1055b87df;  */

void FUN_1055b87b0(void)

{
  _objc_alloc(PTR_PTR_1126bb4f0);
  func_0x00010c058dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b87e0; end: 1055b8867; -[SCSnapchattersRecentlyActiveRecordServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055b87e0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726034);
  _objc_destroyWeak(param_1 + _DAT_11272602c);
  _objc_destroyWeak(param_1 + _DAT_112726044);
  _objc_destroyWeak(param_1 + _DAT_112726040);
  _objc_destroyWeak(param_1 + _DAT_11272603c);
  _objc_destroyWeak(param_1 + _DAT_112726038);
  _objc_storeStrong(param_1 + _DAT_112726028,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112726030,0);
  return;
}



/* Entry: 1055b8868; end: 1055b88db; -[UNIRecentlyActive initWithUnifiedGrpcService:] */

undefined1 * FUN_1055b8868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9230;
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



/* Entry: 1055b88dc; end: 1055b89bf; -[UNIRecentlyActive userRecentlyActiveWithRequest:callOptionsBuilder:handler:] */

void FUN_1055b88dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb4f8;
  _objc_opt_class(PTR_PTR_1126bb4f8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ded758,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055b89c0; end: 1055b89e3; -[UNIRecentlyActive .cxx_destruct] */

void FUN_1055b89c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055b89e4; end: 1055b8b77;  */

void FUN_1055b89e4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [31];
  undefined1 uStack_f1;
  undefined **appuStack_f0 [9];
  undefined1 auStack_a8 [24];
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bb4b8);
  if (param_1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_1);
  }
  puVar2 = &uStack_f1;
  FUN_1055b9d20(puVar2);
  FUN_1055b8b78(auStack_110,param_2);
  func_0x0001004c2e3c(appuStack_f0,0xc,puVar2,auStack_110);
  puStack_128 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar3 = &uStack_80;
  func_0x0001000e77a0(puVar3,appuStack_f0,&puStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_128 != (undefined1 *)0x0) {
    puStack_120 = puStack_128;
    __ZdlPv();
  }
  plVar1 = plStack_88;
  appuStack_f0[0] = &PTR_FUN_110862700;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_128 = auStack_a8;
  func_0x000100105004(&puStack_128);
  puStack_128 = auStack_110;
  func_0x000100105004(&puStack_128);
  func_0x0001000e76e0(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055b8b78; end: 1055b8cdb;  */

void FUN_1055b8b78(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_3d4;
  long lStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined **ppuStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3a0;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  long lStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  long *plStack_350;
  undefined1 uStack_341;
  undefined **ppuStack_340;
  undefined4 uStack_338;
  undefined2 uStack_328;
  byte bStack_326;
  byte bStack_325;
  undefined1 *puStack_308;
  undefined ***pppuStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined *apuStack_2d0 [3];
  undefined1 uStack_2b1;
  undefined **appuStack_2b0 [3];
  byte bStack_296;
  byte bStack_295;
  undefined *apuStack_268 [3];
  long *plStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined4 uStack_238;
  undefined2 uStack_228;
  byte bStack_226;
  byte bStack_225;
  undefined ***pppuStack_208;
  undefined ***pppuStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar3 = param_2;
  func_0x00010bf529e0();
  func_0x0001004c2bb4(param_1);
  uVar8 = 0;
  _objc_retain(param_2);
  puVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar6 = *(undefined8 *)((long)puVar7 * 8);
      _objc_retain(uVar6);
      puVar3 = auStack_e0;
      auStack_e0[0] = uVar6;
      func_0x0001004c2d3c(param_1);
      _objc_release(auStack_e0[0]);
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    } while (puVar4 != puVar7);
    puVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  _objc_retain();
  _objc_retain(puVar3);
  _objc_opt_class(PTR_PTR_1126bb4b8);
  if (param_2 == (undefined8 *)0x0) {
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1d0,param_2);
  }
  puVar5 = &uStack_2b1;
  FUN_1055b9d20(puVar5);
  FUN_1055b8b78(apuStack_2d0,puVar3);
  func_0x0001004c2e3c(appuStack_2b0,0xc,puVar5,apuStack_2d0);
  puVar5 = &uStack_341;
  FUN_1055b9e98();
  uStack_3b0 = 0xf;
  uStack_3a0 = 0x100;
  ppuStack_3b8 = &PTR_FUN_11086d7d0;
  uStack_378 = 0;
  uStack_380 = 0;
  lStack_368 = 0;
  lStack_370 = 0;
  plStack_358 = (long *)0x0;
  uStack_360 = 0;
  plStack_350 = (long *)0x0;
  bStack_326 = puVar5[0x1a];
  bStack_325 = puVar5[0x1b];
  uStack_338 = 8;
  uStack_328 = 0x100;
  ppuStack_340 = &PTR_FUN_11089b010;
  plStack_2d8 = (long *)0x0;
  lStack_2f0 = 0;
  lStack_2f8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2e8 = 0;
  bStack_226 = bStack_296 | bStack_326;
  bStack_225 = bStack_295 & bStack_325;
  uStack_238 = 4;
  uStack_228 = 0x100;
  ppuStack_240 = &PTR_SUB_1108629c8;
  pppuStack_200 = &ppuStack_340;
  uStack_1f0 = 0;
  lStack_1f8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1e8 = 0;
  plStack_1d8 = (long *)0x0;
  lStack_3d0 = 0;
  lStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3d4 = 0;
  puVar4 = &uStack_1d0;
  uStack_388 = uVar8;
  puStack_308 = puVar5;
  pppuStack_300 = &ppuStack_3b8;
  pppuStack_208 = appuStack_2b0;
  func_0x0001000e77a0(puVar4,&ppuStack_240,&lStack_3d0,&uStack_3d4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3d0 != 0) {
    lStack_3c8 = lStack_3d0;
    __ZdlPv();
  }
  plVar2 = plStack_1d8;
  ppuStack_240 = &PTR_SUB_1108629c8;
  plStack_1d8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_1e0;
  plStack_1e0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_1f8 != 0) {
    __ZdlPv();
  }
  plVar2 = plStack_2d8;
  ppuStack_340 = &PTR_FUN_11089b010;
  plStack_2d8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_2e0;
  plStack_2e0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_2f8 != 0) {
    lStack_2f0 = lStack_2f8;
    __ZdlPv();
  }
  plVar2 = plStack_350;
  ppuStack_3b8 = &PTR_FUN_11086d7d0;
  plStack_350 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_358;
  plStack_358 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_370 != 0) {
    lStack_368 = lStack_370;
    __ZdlPv();
  }
  plVar2 = plStack_248;
  appuStack_2b0[0] = &PTR_FUN_110862700;
  plStack_248 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_250;
  plStack_250 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  ppuStack_340 = apuStack_268;
  func_0x000100105004(&ppuStack_340);
  ppuStack_340 = apuStack_2d0;
  func_0x000100105004(&ppuStack_340);
  func_0x0001000e76e0(&uStack_1a8);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055b8cdc; end: 1055b9023;  */

void FUN_1055b8cdc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_2b4;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined4 uStack_280;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined1 uStack_221;
  undefined **ppuStack_220;
  undefined4 uStack_218;
  undefined2 uStack_208;
  byte bStack_206;
  byte bStack_205;
  undefined1 *puStack_1e8;
  undefined ***pppuStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined *apuStack_1b0 [3];
  undefined1 uStack_191;
  undefined **appuStack_190 [3];
  byte bStack_176;
  byte bStack_175;
  undefined *apuStack_148 [3];
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126bb4b8);
  if (param_2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_2);
  }
  puVar2 = &uStack_191;
  FUN_1055b9d20(puVar2);
  FUN_1055b8b78(apuStack_1b0,param_3);
  func_0x0001004c2e3c(appuStack_190,0xc,puVar2,apuStack_1b0);
  puVar2 = &uStack_221;
  FUN_1055b9e98();
  uStack_290 = 0xf;
  uStack_280 = 0x100;
  ppuStack_298 = &PTR_FUN_11086d7d0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_248 = 0;
  lStack_250 = 0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  plStack_230 = (long *)0x0;
  bStack_206 = puVar2[0x1a];
  bStack_205 = puVar2[0x1b];
  uStack_218 = 8;
  uStack_208 = 0x100;
  ppuStack_220 = &PTR_FUN_11089b010;
  plStack_1b8 = (long *)0x0;
  lStack_1d0 = 0;
  lStack_1d8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1c8 = 0;
  bStack_106 = bStack_176 | bStack_206;
  bStack_105 = bStack_175 & bStack_205;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_220;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_2b4 = 0;
  puVar3 = &uStack_b0;
  uStack_268 = param_1;
  puStack_1e8 = puVar2;
  pppuStack_1e0 = &ppuStack_298;
  pppuStack_e8 = appuStack_190;
  func_0x0001000e77a0(puVar3,&ppuStack_120,&lStack_2b0,&uStack_2b4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2b0 != 0) {
    lStack_2a8 = lStack_2b0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_1b8;
  ppuStack_220 = &PTR_FUN_11089b010;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1d8 != 0) {
    lStack_1d0 = lStack_1d8;
    __ZdlPv();
  }
  plVar1 = plStack_230;
  ppuStack_298 = &PTR_FUN_11086d7d0;
  plStack_230 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_250 != 0) {
    lStack_248 = lStack_250;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  appuStack_190[0] = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_220 = apuStack_148;
  func_0x000100105004(&ppuStack_220);
  ppuStack_220 = apuStack_1b0;
  func_0x000100105004(&ppuStack_220);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055b9024; end: 1055b9093;  */

undefined8 * FUN_1055b9024(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_11089b010;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1055b9094; end: 1055b91e7;  */

void FUN_1055b9094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = auStack_70;
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bb500;
  FUN_1055ba2cc(PTR_PTR_1126bb500,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    func_0x000108bc3b74(auStack_70,param_3);
    puVar1 = PTR_PTR_1126bb500;
    auStack_70[0] = 0;
    uStack_60 = param_4;
    uStack_58 = param_1;
    func_0x000108bc3c0c(auStack_70);
    _objc_retainAutoreleasedReturnValue();
    FUN_1055ba134(puVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uStack_68);
  }
  else {
    puVar1[0x14] = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1055b91e8; end: 1055b98a3;  */

void FUN_1055b91e8(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001055b9848;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001055b9868;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001055b9868;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001055b97dc:
                    /* WARNING: Could not recover jumptable at 0x0001055b9800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001055b97dc;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001055b9868;
    }
    goto code_r0x0001055b985c;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001055b985c;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001055b9868;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001055b9868;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1055b9878;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001055b9848:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001055b985c:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001055b9868:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1055b9878:
  return;
}



/* Entry: 1055b98a4; end: 1055b99d7;  */

void FUN_1055b98a4(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar4 = *(undefined8 **)(param_1 + 0x48); puVar4 != puVar1; puVar4 = puVar4 + 1) {
        uVar5 = *puVar4;
        *param_3 = *param_3 + 1;
        _sqlite3_bind_double(uVar5,param_2);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001055b99cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1055b99d8; end: 1055b9bf3;  */

uint FUN_1055b99d8(double param_1,long param_2,long param_3,long param_4,byte *param_5)

{
  long lVar1;
  double *pdVar2;
  double *pdVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  double *pdVar7;
  uint uVar8;
  long *plVar9;
  double dVar10;
  double dStack_58;
  double dStack_50;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_4);
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xe) {
    if (iVar5 - 1U < 2) {
      *param_5 = 0;
      dStack_50 = (double)((ulong)dStack_50 & 0xffffffffffffff00);
      (**(code **)(**(long **)(param_2 + 0x38) + 0x28))
                (*(long **)(param_2 + 0x38),param_3,param_4,&dStack_50);
      uVar8 = (uint)(iVar5 != 1 ^ dStack_50._0_1_);
      goto LAB_1055b9bcc;
    }
    if (iVar5 - 0xcU < 2) {
      plVar9 = *(long **)(param_2 + 0x38);
      _objc_retain(param_4);
      (**(code **)(*plVar9 + 0x28))(plVar9,param_3,param_4,param_5);
      pdVar2 = *(double **)(param_2 + 0x48);
      pdVar3 = *(double **)(param_2 + 0x50);
      if (iVar5 == 0xc) {
        if (pdVar2 == pdVar3) {
          uVar8 = 0;
        }
        else {
          do {
            pdVar7 = pdVar2 + 1;
            dVar10 = *pdVar2;
            uVar8 = (uint)(param_1 == dVar10);
            pdVar2 = pdVar7;
          } while (param_1 != dVar10 && pdVar7 != pdVar3);
        }
      }
      else if (pdVar2 == pdVar3) {
        uVar8 = 1;
      }
      else {
        do {
          pdVar7 = pdVar2 + 1;
          dVar10 = *pdVar2;
          uVar8 = (uint)(param_1 != dVar10);
          pdVar2 = pdVar7;
        } while (param_1 != dVar10 && pdVar7 != pdVar3);
      }
      _objc_release(param_4);
      goto LAB_1055b9bcc;
    }
  }
  else {
    if (iVar5 - 0xfU < 2) {
      *param_5 = 0;
      uVar8 = (uint)*(byte *)(param_2 + 0x30);
      goto LAB_1055b9bcc;
    }
    if (iVar5 == 0xe) {
      lVar1 = 0x28;
      lVar6 = param_4;
      if (param_3 != 0) {
        lVar1 = 0x20;
        lVar6 = param_3;
      }
      (**(code **)(param_2 + lVar1))(lVar6,param_5);
      uVar8 = (uint)lVar6;
      goto LAB_1055b9bcc;
    }
  }
  if (iVar5 - 6U < 6) {
    plVar9 = *(long **)(param_2 + 0x38);
    plVar4 = *(long **)(param_2 + 0x40);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_3,param_4,&bStack_41);
    dStack_50 = param_1;
    (**(code **)(*plVar4 + 0x28))(plVar4,param_3,param_4,&bStack_42);
    *param_5 = (bStack_41 | bStack_42) & 1;
    dStack_58 = param_1;
    FUN_105188554(plVar9,&dStack_50,&dStack_58,iVar5,0);
    uVar8 = (uint)plVar9;
  }
  else {
    uVar8 = 0;
  }
LAB_1055b9bcc:
  _objc_release(param_4);
  return uVar8 & 1;
}



/* Entry: 1055b9bf4; end: 1055b9c87;  */

undefined8 * FUN_1055b9bf4(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_FUN_11089b010;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1055b9c88; end: 1055b9d1f;  */

undefined8 * FUN_1055b9c88(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_FUN_11089b010;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_105188834(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1055b9d20; end: 1055b9d83;  */

undefined ** FUN_1055b9d20(void)

{
  int iVar1;
  
  if ((bRam0000000113819c00 & 1) == 0) {
    iVar1 = 0x13819c00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130e6870,0x100000000);
      ___cxa_guard_release(0x113819c00);
    }
  }
  return &PTR_PTR_1130e6870;
}



/* Entry: 1055b9d84; end: 1055b9e0b;  */

void FUN_1055b9d84(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b9e0c; end: 1055b9e97;  */

void FUN_1055b9e0c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055b9e98; end: 1055b9f53;  */

undefined8 FUN_1055b9e98(void)

{
  int iVar1;
  
  if ((bRam0000000113819c78 & 1) == 0) {
    iVar1 = 0x13819c78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819c10 = 0xe;
      puRam0000000113819c18 = &UNK_10f2d63a1;
      uRam0000000113819c20 = 0x1010000;
      pcRam0000000113819c28 = FUN_1055b9f54;
      pcRam0000000113819c30 = FUN_1055b9f88;
      ppuRam0000000113819c08 = &PTR_FUN_11086d7d0;
      uRam0000000113819c48 = 0;
      uRam0000000113819c40 = 0;
      uRam0000000113819c58 = 0;
      uRam0000000113819c50 = 0;
      uRam0000000113819c68 = 0;
      uRam0000000113819c60 = 0;
      uRam0000000113819c70 = 0;
      ___cxa_atexit(FUN_105187b98,0x113819c08,0x100000000);
      ___cxa_guard_release(0x113819c78);
    }
  }
  return 0x113819c08;
}



/* Entry: 1055b9f54; end: 1055b9f87;  */

undefined8 FUN_1055b9f54(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 1055b9f88; end: 1055b9fe3;  */

undefined8 FUN_1055b9f88(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c08a800(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1055b9fe4; end: 1055b9fef; +[SCSnapchattersRecentlyActiveRecord table] */

undefined * FUN_1055b9fe4(void)

{
  return &UNK_10f2d63b6;
}



/* Entry: 1055b9ff0; end: 1055ba10f; +[SCSnapchattersRecentlyActiveRecord immutableObjectParse:bufferSize:] */

void FUN_1055b9ff0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar5 = PTR_PTR_1126bb4b8;
  _objc_alloc(PTR_PTR_1126bb4b8);
  lVar6 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar3 < 5) {
    puVar8 = (undefined *)0x0;
    bVar4 = false;
    uVar9 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar6);
    }
    uVar9 = 0;
    if (uVar3 < 7) {
      bVar4 = false;
    }
    else {
      uVar7 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar6));
      if (uVar7 == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(char *)((long)piVar1 + uVar7) != '\0';
      }
      if ((8 < uVar3) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar6)), uVar7 != 0)) {
        uVar9 = *(undefined8 *)((long)piVar1 + uVar7);
      }
    }
  }
  func_0x00010c05b520(uVar9,puVar5,param_2,puVar8,bVar4);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055ba110; end: 1055ba133; +[SCSnapchattersRecentlyActiveRecord objectClassFunctionPointer] */

undefined1  [16] FUN_1055ba110(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1055ba12c;
  auVar1._0_8_ = 0x1055ba124;
  return auVar1;
}



/* Entry: 1055ba134; end: 1055ba217;  */

void FUN_1055ba134(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126bb500;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c07be00(param_2);
    func_0x00010c08a800(param_2);
    FUN_1055ba218(puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055ba218; end: 1055ba2cb;  */

undefined1 *
FUN_1055ba218(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_48 = PTR_PTR_1126e9238;
    lStack_50 = param_2;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_5;
      *(undefined8 *)((long)plVar1 + 0x20) = param_1;
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 1055ba2cc; end: 1055ba33f;  */

void FUN_1055ba2cc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1055ba340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055ba340; end: 1055ba67b;  */

void FUN_1055ba340(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar5 < 0) {
      puVar5 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        func_0x00010bf636c0();
        _objc_release(puVar5);
        func_0x0001001b9e08(puVar1,&UNK_10f2d63d9);
        puVar5 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_1055ba5e8;
        puVar5 = param_1;
        func_0x00010c2923e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar5);
        _objc_release(puVar5);
        puVar5 = puVar1;
        _sqlite3_step();
        if ((int)puVar5 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar5 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126bb4b8);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar5;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar5);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_1055ba5e0;
          puVar5 = PTR_PTR_1126bb500;
          _objc_alloc(PTR_PTR_1126bb500);
          puVar1 = puVar3;
          func_0x00010c2923e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c07be00(puVar3);
          func_0x00010c08a800(puVar3);
          FUN_1055ba218(puVar5,puVar2,puVar1,puVar4);
          param_1 = puVar3;
          goto LAB_1055ba428;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bb4b8);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126bb500;
        _objc_alloc(PTR_PTR_1126bb500);
        puVar1 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c07be00(puVar3);
        func_0x00010c08a800(puVar3);
        FUN_1055ba218(puVar5,puVar2,puVar1,puVar4);
        param_1 = puVar3;
LAB_1055ba428:
        _objc_release(puVar1);
        goto LAB_1055ba5e8;
      }
LAB_1055ba5e0:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_1055ba5e8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055ba67c; end: 1055ba6e3;  */

void FUN_1055ba67c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bb4b8;
    _objc_alloc(PTR_PTR_1126bb4b8);
    func_0x00010c05b520(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055ba6e4; end: 1055ba6ef; -[SCSnapchattersRecentlyActiveRecordChangeRequest .cxx_destruct] */

void FUN_1055ba6e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1055ba6f0; end: 1055ba6fb; -[SCSnapchattersRecentlyActiveRecordChangeRequest table] */

undefined * FUN_1055ba6f0(void)

{
  return &UNK_10f2d63b6;
}



/* Entry: 1055ba6fc; end: 1055ba743; -[SCSnapchattersRecentlyActiveRecordChangeRequest createTableWithSQLite:] */

void FUN_1055ba6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddb34dd,0x90,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1055ba744; end: 1055baacb; -[SCSnapchattersRecentlyActiveRecordChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1055ba744(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1055ba67c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1055baacc(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2d6467);
    if (lVar6 == 0) goto LAB_1055baa68;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1055baa68;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bb4b8);
    func_0x00010c21c9a0(puVar7);
LAB_1055baa50:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2d6429);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bb4b8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1055baa74;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1055baa74;
    }
    FUN_1055ba67c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1055baacc(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2d64b2);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bb4b8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1055baa50;
      }
    }
LAB_1055baa68:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1055baa74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055baacc; end: 1055bacc3;  */

ulong FUN_1055baacc(undefined8 param_1,ulong param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  pcVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_1055babcc;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_2;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_2,pcVar5,pcVar6);
    goto LAB_1055babcc;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_1055bab8c;
    uVar9 = 0;
  }
  else {
LAB_1055bab8c:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_2,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_1055babcc:
  _objc_release(pcVar4);
  pcVar5 = param_3;
  func_0x00010c07be00(param_3);
  func_0x00010c08a800(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_1,0,param_2,8);
  func_0x0001001ce2e4(param_2,4,uVar9 & 0xffffffff);
  func_0x000100ab13ac(param_2,6,pcVar5,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1055bacc4; end: 1055badbf; -[SCUserSearchabilityServiceImpl initWithUserNetworkServices:configsProvider:configsMutator:settingsEventLogger:] */

undefined1 *
FUN_1055bacc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9240;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055badc0; end: 1055baed3; -[SCUserSearchabilityServiceImpl updateSearchabilityByPhoneNumber:callback:] */

void FUN_1055badc0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c154a80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8d60();
  _objc_release(uVar1);
  if (param_4 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1055baed4;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
    _objc_release(lStack_48);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2bc0();
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1055baed4; end: 1055baee3;  */

void FUN_1055baed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055baee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 1055baee4; end: 1055baf87; -[SCUserSearchabilityServiceImpl _updateFailedWithOldSearchable:callback:] */

void FUN_1055baee4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126afca8;
  FUN_1055bb2a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8d60();
  _objc_release(uVar3);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055baf88; end: 1055bafdb; -[SCUserSearchabilityServiceImpl .cxx_destruct] */

void FUN_1055baf88(long param_1)

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



/* Entry: 1055bafdc; end: 1055bb0bf; -[SCUserSearchabilityServiceProvider provide] */

void FUN_1055bafdc(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bb508;
  _objc_alloc(PTR_PTR_1126bb508);
  func_0x00010c042c00();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055bb0c0; end: 1055bb0ff;  */

void FUN_1055bb0c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9ca40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055bb100; end: 1055bb22f; -[SCUserSearchabilityServiceProvider _searchabiltyServiceImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bb100(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126bb510;
  _objc_alloc(PTR_PTR_1126bb510);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112726078;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = param_1;
  FUN_1055bb230(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf46520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1055bb230(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf46500();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_112726080;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010c2280e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c740(puVar1,param_2,lVar8,lVar3,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055bb230; end: 1055bb253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bb230(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272607c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055bb254; end: 1055bb2a3; -[SCUserSearchabilityServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bb254(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726080);
  _objc_destroyWeak(param_1 + _DAT_11272607c);
  _objc_destroyWeak(param_1 + _DAT_112726078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726074);
  return;
}


