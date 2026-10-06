/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e5b66c; end: 105e5b68b;  */

bool FUN_105e5b66c(undefined8 param_1,long param_2)

{
  func_0x00010bf529e0(param_2);
  return param_2 != 0;
}



/* Entry: 105e5b68c; end: 105e5b6ef;  */

void FUN_105e5b68c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be9d780(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e5b6f0; end: 105e5b7bb; -[SCSendToSelectAllActionHandler _selectAllWithSnapchatters:source:selectionFrame:] */

void FUN_105e5b6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bd86420(param_7,&PTR___NSConcreteGlobalBlock_1108ed238);
  uVar2 = param_7;
  func_0x000100504554(param_7,&PTR___NSConcreteGlobalBlock_1108ed258);
  _objc_release(param_7);
  func_0x00010be9d760(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e5b7bc; end: 105e5b7cb;  */

void FUN_105e5b7bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b3560;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x000108ef8240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010901d7c4(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01bce0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e5b7cc; end: 105e5b897; -[SCSendToSelectAllActionHandler _selectAllWithRecipients:source:selectionFrame:] */

void FUN_105e5b7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bd86420(param_7,&PTR___NSConcreteGlobalBlock_1108ed298);
  uVar2 = param_7;
  func_0x000100504554(param_7,&PTR___NSConcreteGlobalBlock_1108ed2b8);
  _objc_release(param_7);
  func_0x00010be9d760(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e5b898; end: 105e5b8a7;  */

void FUN_105e5b898(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105e5c0d0;
  uStack_30 = 0x105e5c0e0;
  uStack_28 = 0;
  func_0x00010c0c0060(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e5b8a8; end: 105e5b973; -[SCSendToSelectAllActionHandler _selectAllWithGroups:source:selectionFrame:] */

void FUN_105e5b8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x000100504554(param_7,&PTR___NSConcreteGlobalBlock_1108ed2f8);
  uVar2 = param_7;
  func_0x000100504554(param_7,&PTR___NSConcreteGlobalBlock_1108ed318);
  _objc_release(param_7);
  func_0x00010be9d760(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e5b974; end: 105e5b983;  */

undefined1 * FUN_105e5b974(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar11 = PTR_PTR_1126b3560;
  _objc_alloc();
  lVar1 = param_2;
  func_0x000108ef7580(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x00010c01bce0();
  puStack_140 = puVar2;
  _objc_release(lVar13);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_138 = param_2;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    puVar11 = (undefined *)*puStack_120;
    do {
      lVar13 = 0;
      do {
        if ((undefined *)*puStack_120 != puVar11) {
          _objc_enumerationMutation(param_2);
        }
        lVar12 = *(long *)(lStack_128 + lVar13 * 8);
        puVar3 = PTR_PTR_1126b3558;
        _objc_alloc(PTR_PTR_1126b3558);
        lVar4 = lVar12;
        func_0x00010c2923e0(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d4e0(puVar3);
        _objc_release(lVar4);
        lVar4 = lVar12;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        if (lVar5 == 0) {
          func_0x00010c294420(lVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf85d80(lVar12);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar4);
        puVar6 = PTR_PTR_1126b3560;
        _objc_alloc(PTR_PTR_1126b3560);
        func_0x00010c01bce0();
        func_0x00010befa120(puVar2);
        _objc_release(puVar6);
        _objc_release(lVar12);
        _objc_release(puVar3);
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_2);
  puVar6 = PTR_PTR_1126b3568;
  _objc_alloc();
  puVar3 = puStack_140;
  puVar9 = puStack_140;
  puVar10 = puVar2;
  func_0x00010c03d400();
  _objc_release(puVar2);
  _objc_release(puVar3);
  lVar1 = lStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  plVar7 = &lStack_180;
  puStack_158 = puVar3;
  puStack_148 = &UNK_108ef78a4;
  puStack_170 = puVar6;
  puStack_168 = puVar2;
  puStack_160 = puVar11;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  puStack_178 = PTR_PTR_1126ff280;
  lStack_180 = lVar1;
  _objc_msgSendSuper2(&lStack_180,PTR_s_init_1125d9248);
  if (plVar7 != (long *)0x0) {
    _objc_retain(puVar9);
    uVar8 = *(undefined8 *)((long)plVar7 + 8);
    *(undefined **)((long)plVar7 + 8) = puVar9;
    _objc_release(uVar8);
    _objc_retain(puVar10);
    uVar8 = *(undefined8 *)((long)plVar7 + 0x10);
    *(undefined **)((long)plVar7 + 0x10) = puVar10;
    _objc_release(uVar8);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  return (undefined1 *)plVar7;
}



/* Entry: 105e5b984; end: 105e5bc0b; -[SCSendToSelectAllActionHandler _selectAllWithSelectionItems:identifiers:source:selectionFrame:] */

void FUN_105e5b984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar2 = *(undefined8 *)(param_5 + 8);
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  _objc_retain(uVar2);
  _objc_retain(param_8);
  lVar3 = param_8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_8);
      _objc_release(uVar2);
      _objc_release(param_8);
LAB_105e5bb48:
      func_0x00010c1fb980(*(undefined8 *)(param_5 + 8));
      uVar4 = param_9;
      func_0x00010c0720c0();
      if ((int)uVar4 != 0) {
        param_5 = param_5 + 0x40;
        _objc_loadWeakRetained(param_5);
        lVar3 = param_5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7a680();
        _objc_release(lVar3);
        _objc_release(param_5);
      }
      _objc_release(uVar2);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_7 + 0x48,0);
      _objc_destroyWeak(param_7 + 0x40);
      _objc_storeStrong(param_7 + 0x38,0);
      _objc_storeStrong(param_7 + 0x30,0);
      _objc_storeStrong(param_7 + 0x28,0);
      _objc_storeStrong(param_7 + 0x20,0);
      _objc_storeStrong(param_7 + 0x18,0);
      _objc_storeStrong(param_7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_7 + 8,0);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_8);
      }
      if (*(long *)(lVar8 * 8) != 0) {
        uVar4 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf1f3c0();
        _objc_release(uVar4);
        if ((int)uVar5 == 0) {
          _objc_release(param_8);
          _objc_release(uVar2);
          _objc_release(param_8);
          puVar6 = PTR_PTR_1126c24d8;
          func_0x00010c158720(param_1,param_2,param_3,param_4,PTR_PTR_1126c24d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(*(undefined8 *)(param_5 + 0x48));
          _objc_release(puVar6);
          goto LAB_105e5bb48;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_8;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105e5bc0c; end: 105e5bc8b; -[SCSendToSelectAllActionHandler .cxx_destruct] */

void FUN_105e5bc0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 105e5bc8c; end: 105e5bd73; -[SCSendToTopGroupsDataSourceImpl initWithSelectionGroupObservableRepository:sendToExperimentConfiguration:] */

undefined1 *
FUN_105e5bc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ed5b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c274460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11ac40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e5bd74; end: 105e5bd9b; -[SCSendToTopGroupsDataSourceImpl allTopGroupsObservable] */

void FUN_105e5bd74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e5bd9c; end: 105e5be17; -[SCSendToTopGroupsDataSourceImpl cappedTopGroupsObservable] */

void FUN_105e5bd9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12ec00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  if ((int)uVar2 == 0) {
    func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108ed360);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e5be18; end: 105e5be73;  */

void FUN_105e5be18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010bf529e0();
  uVar1 = param_2;
  func_0x00010c25e980(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e5be74; end: 105e5be83; -[SCSendToTopGroupsDataSourceImpl cappedAndOrderedTopGroupsObservable] */

void FUN_105e5be74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_map__11260bb98,
             &PTR___NSConcreteGlobalBlock_1108ed380);
  return;
}



/* Entry: 105e5be84; end: 105e5bf03;  */

void FUN_105e5be84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010bf529e0();
  uVar1 = param_2;
  func_0x00010c25e980(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c246ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e5bf04; end: 105e5bf87;  */

undefined8 FUN_105e5bf04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010c0891c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0891c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010bf433a0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105e5bf88; end: 105e5bfb7; -[SCSendToTopGroupsDataSourceImpl .cxx_destruct] */

void FUN_105e5bf88(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e5bfb8; end: 105e5c0cf;  */

void FUN_105e5bfb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105e5c0d0;
  uStack_30 = 0x105e5c0e0;
  uStack_28 = 0;
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e5c0d0; end: 105e5c0e7;  */

void FUN_105e5c0d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105e5c0e8; end: 105e5c1a7;  */

void FUN_105e5c0e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000108ef8240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e5c1a8; end: 105e5c2bf;  */

void FUN_105e5c1a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105e5c0d0;
  uStack_30 = 0x105e5c0e0;
  uStack_28 = 0;
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e5c2c0; end: 105e5c37f;  */

void FUN_105e5c2c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000108ef82c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e5c380; end: 105e5c427;  */

void FUN_105e5c380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_1;
  func_0x00010c0faf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bdc2600(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d4e0(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f52e78);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e5c428; end: 105e5c58f;  */

void FUN_105e5c428(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_105e5c380(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfded40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = lVar1;
    func_0x00010c122b80(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  lVar2 = param_1;
  func_0x00010901c4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c24d0;
  _objc_alloc(PTR_PTR_1126c24d0);
  lVar6 = param_1;
  func_0x00010c0faf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150c20(param_1);
  func_0x00010c035a40(puVar5,param_2,lVar6,lVar3);
  func_0x00010c01bce0(puVar4,param_2,lVar1,0,lVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e5c590; end: 105e5c957; -[SCSendToStoriesActionHandler initWithSendToTracker:customStoriesOnboardingManager:customStoriesDataFetcher:customStoriesDataMutator:blockedSnapchatterFetcher:ourStoriesOnboardingManager:ourStoriesAttributionManager:valdiRuntimeProvider:snapProProfilesProvider:snapProUserProfileIdProvider:storyConfiguration:circumstanceEngine:currentUserId:delegate:storyPrivacySettingManager:preSelectedItems:sendToExperimentConfiguration:subscriptionInfoProvider:] */

undefined8 *
FUN_105e5c590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
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
  puStack_70 = PTR_PTR_1126ed5b8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_16);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    func_0x00010be66560(puVar1);
    func_0x00010be66ca0(puVar1);
  }
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e5c958; end: 105e5ca53; -[SCSendToStoriesActionHandler _observeManagedProfiles:] */

void FUN_105e5c958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c0b8000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105e5ca54; end: 105e5caa3;  */

void FUN_105e5ca54(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6b840(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e5caa4; end: 105e5cbf7; -[SCSendToStoriesActionHandler _onSnapProProfilesUpdated:] */

ulong FUN_105e5caa4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x48) = uVar4;
  _objc_release(uVar3);
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar4 == 0) {
LAB_105e5cbb0:
      _objc_release(param_3);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
        return param_3;
      }
      ___stack_chk_fail();
      _objc_retain(param_2);
      uVar3 = param_2;
      func_0x00010bf2d140();
      if ((int)uVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar3 = param_2;
        func_0x00010c074e40(param_2);
        uVar4 = (ulong)((uint)uVar3 ^ 1);
      }
      _objc_release(param_2);
      return uVar4;
    }
    uVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar5 = *(undefined8 *)(uVar6 * 8);
      uVar3 = uVar5;
      func_0x00010c074e40();
      if ((int)uVar3 != 0) {
        _objc_retain(uVar5);
        uVar3 = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x88) = uVar5;
        _objc_release(uVar3);
        goto LAB_105e5cbb0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
    uVar4 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105e5cbf8; end: 105e5cc47;  */

uint FUN_105e5cbf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf2d140();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c074e40(param_2);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105e5cc48; end: 105e5cde3; -[SCSendToStoriesActionHandler _observeSendToEventsIfRequiredWithPreSelectedItems:] */

void FUN_105e5cc48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108ed400);
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf9a080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar2);
    uVar6 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105e5cde4; end: 105e5cef7;  */

undefined8 FUN_105e5cde4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = uVar1;
    func_0x00010c15ab60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105e5cef8; end: 105e5d00f; -[SCSendToStoriesActionHandler _onSendToEvent:spotlightSelectionItem:] */

void FUN_105e5cef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0c1600(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e5d010; end: 105e5d043;  */

void FUN_105e5d010(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5d044; end: 105e5d14b; -[SCSendToStoriesActionHandler _onSendToViewDidLoadWithSpotlightSelectionItem:] */

void FUN_105e5d044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(param_3);
  func_0x00010bf86d40(uVar4);
  puVar1 = PTR_PTR_1126b5658;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b5650;
  _objc_alloc();
  func_0x00010c043e20();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043e40();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010be9dc60(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_105e5d14c;
  puStack_60 = puVar3;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010bf2dba0(*(undefined8 *)(puVar1 + 0x78));
  puStack_68 = PTR_PTR_1126ed5b8;
  puStack_70 = puVar1;
  _objc_msgSendSuper2(&puStack_70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105e5d14c; end: 105e5d193; -[SCSendToStoriesActionHandler dealloc] */

void FUN_105e5d14c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x78));
  puStack_28 = PTR_PTR_1126ed5b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105e5d194; end: 105e5d343; -[SCSendToStoriesActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_105e5d194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar2 == 0) {
      uVar3 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar2 == 0) {
        uVar3 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar2 == 0) {
          uVar3 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((int)uVar2 == 0) {
            uVar3 = 0;
            goto LAB_105e5d31c;
          }
          func_0x00010bdf1ba0(param_1,param_2,param_4);
        }
        else {
          func_0x00010be2fbe0(param_1,param_2,param_4);
        }
      }
      else {
        func_0x00010be30bc0(param_1);
      }
    }
    else {
      func_0x00010be2fc20(param_1,param_2,param_4);
    }
    uVar3 = 1;
  }
  else {
    lVar1 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7a880();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
    func_0x00010c1ff1c0();
    _objc_release(uVar2);
  }
LAB_105e5d31c:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 105e5d344; end: 105e5d36f; -[SCSendToStoriesActionHandler _handleSpotlightTryAgain] */

void FUN_105e5d344(long param_1)

{
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7a800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5d370; end: 105e5d60f; -[SCSendToStoriesActionHandler _handleSelectStoryWithActionModel:] */

void FUN_105e5d370(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5658;
  _objc_opt_class(PTR_PTR_1126b5658);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (uVar5 != 0) {
    uVar4 = uVar1;
    func_0x00010c15a7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x00010c15a7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c15ab60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    uVar4 = uVar8;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = uVar8;
      func_0x00010c0720c0();
      if (((int)uVar4 == 0) && (uVar4 = uVar8, func_0x00010c0720c0(), (int)uVar4 == 0)) {
        uVar4 = uVar8;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          uVar4 = uVar8;
          func_0x00010c0720c0();
          if ((int)uVar4 == 0) {
            uVar4 = uVar8;
            func_0x00010c0720c0();
            if ((int)uVar4 == 0) {
              uVar4 = uVar8;
              func_0x00010c0720c0();
              if ((int)uVar4 == 0) {
                uVar4 = uVar8;
                func_0x00010c0720c0();
                if ((int)uVar4 == 0) {
                  uVar4 = uVar8;
                  func_0x00010c0720c0();
                  if ((int)uVar4 == 0) {
                    func_0x00010be9dce0(param_1);
                  }
                  else {
                    func_0x00010be9dc60(param_1);
                  }
                }
                else {
                  func_0x00010be9d900(param_1);
                }
              }
              else {
                func_0x00010be9d800(param_1);
              }
            }
            else {
              func_0x00010be9daa0(param_1);
            }
          }
          else {
            func_0x00010be9d860(param_1);
          }
        }
        else {
          func_0x00010be9d840(param_1);
        }
      }
      else {
        func_0x00010be9dbc0(param_1);
      }
    }
    else {
      func_0x00010be9dae0(param_1);
    }
    uVar4 = uVar8;
    func_0x00010c0720c0();
    if (((int)uVar4 != 0) && (uVar4 = uVar5, func_0x00010c07d660(), (int)uVar4 != 0)) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x58);
      func_0x000108ec009c();
      if (iVar2 != 0) {
        param_1 = param_1 + 0x68;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf7b020();
        _objc_release(param_1);
      }
    }
    _objc_release(uVar8);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e5d610; end: 105e5d823; -[SCSendToStoriesActionHandler _selectPrivateStoryWithSelectionActionModel:] */

void FUN_105e5d610(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d660();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf86b20();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c15a7c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c15a7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c122b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_initWeak(auStack_58,param_1);
      param_1 = param_1 + 0x68;
      _objc_loadWeakRetained(param_1);
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      func_0x00010bf7ad80(param_1);
      _objc_release(param_1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(uVar6);
      goto LAB_105e5d7e4;
    }
  }
  func_0x00010be9dce0(param_1);
LAB_105e5d7e4:
  _objc_release(param_3);
  return;
}



/* Entry: 105e5d824; end: 105e5d857;  */

void FUN_105e5d824(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be24fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5d858; end: 105e5d8bf; -[SCSendToStoriesActionHandler _handleAcceptPrivateStoryOnboardingWithSelectionActionModel:] */

void FUN_105e5d858(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190640();
  _objc_release(uVar1);
  func_0x00010be9dce0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e5d8c0; end: 105e5d96b; -[SCSendToStoriesActionHandler _selectCommunityStoryWithSelectionActionModel:] */

void FUN_105e5d8c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
  func_0x000108f42124();
  if (iVar1 == 0) {
    func_0x00010be9dbc0(param_1,param_2,param_3);
  }
  else {
    uVar2 = param_3;
    func_0x00010c15a7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07d660();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0) {
      func_0x00010be9dce0(param_1,param_2,param_3);
    }
    else {
      func_0x00010beb85c0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e5d96c; end: 105e5db63; -[SCSendToStoriesActionHandler _showCommunityStoryFirstTimePostWithSelectionActionModel:] */

void FUN_105e5d96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf86920();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar8 = param_3;
    func_0x00010c15a7c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c15a7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c122b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    func_0x00010bf62500(uVar8);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar8);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010be9dce0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e5db64; end: 105e5dbb7;  */

void FUN_105e5db64(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb85e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5dbb8; end: 105e5dcbb; -[SCSendToStoriesActionHandler _showCommunityStoryFirstTimePostWithSelectionActionModel:customStory:] */

void FUN_105e5dbb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bf7a820(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e5dcbc; end: 105e5dcef;  */

void FUN_105e5dcbc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be24fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5dcf0; end: 105e5dd57; -[SCSendToStoriesActionHandler _handleAcceptCommunityStoryOnboardingWithSelectionActionModel:] */

void FUN_105e5dcf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1902a0();
  _objc_release(uVar1);
  func_0x00010be9dce0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e5dd58; end: 105e5dde7; -[SCSendToStoriesActionHandler _selectSharedStoryWithSelectionActionModel:] */

void FUN_105e5dd58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d660();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    func_0x00010be9dce0(param_1,param_2,param_3);
  }
  else {
    func_0x00010beba740();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e5dde8; end: 105e5df2f; -[SCSendToStoriesActionHandler _showPromptForSharedStoryWithSelectionActionModel:] */

void FUN_105e5dde8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22c3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar3);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    _objc_retain(uVar3);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bf7b040(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_release(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010be267e0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e5df30; end: 105e5df87;  */

void FUN_105e5df30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff280();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be267e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5df88; end: 105e5e15b; -[SCSendToStoriesActionHandler _handleBlockedUsersOnSharedStoryWithSelectionActionModel:] */

void FUN_105e5df88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar6 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  func_0x00010c22c120(uVar6);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105e5e15c; end: 105e5e1af;  */

void FUN_105e5e15c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebaec0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5e1b0; end: 105e5e317; -[SCSendToStoriesActionHandler _showSharedStoryWithSelectionActionModel:publicationId:blockedSnapchattersInGroup:] */

void FUN_105e5e1b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_5 == 0) || (lVar1 = param_5, func_0x00010bf529e0(), lVar1 == 0)) {
    func_0x00010be9dce0(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    _objc_retain(param_5);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf7b060(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e5e318; end: 105e5e447;  */

void FUN_105e5e318(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_1108ed480);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_58,param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  func_0x00010befb420(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105e5e448; end: 105e5e44f;  */

void FUN_105e5e448(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105e5e450; end: 105e5e483;  */

void FUN_105e5e450(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9dce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5e484; end: 105e5e5f3; -[SCSendToStoriesActionHandler _selectCustomStoryWithSelectionActionModel:] */

void FUN_105e5e484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d660();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    func_0x00010be9dce0(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf1d7c0(uVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e5e5f4; end: 105e5e65f;  */

void FUN_105e5e5f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf529e0(param_2);
  _objc_release(param_2);
  func_0x00010beb88e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5e660; end: 105e5e873; -[SCSendToStoriesActionHandler _showCustomStoryFirstTimePostWithSelectionActionModel:hasblockedUser:] */

void FUN_105e5e660(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  if (param_4 == 0) {
    func_0x00010bf86940();
  }
  else {
    func_0x00010bf86960();
  }
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar8 = param_3;
    func_0x00010c15a7c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c15a7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c122b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    uStack_70 = (undefined1)param_4;
    func_0x00010bf62500(uVar8);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar8);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_68);
  }
  else {
    func_0x00010be9dce0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e5e874; end: 105e5e8cb;  */

void FUN_105e5e874(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb88c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5e8cc; end: 105e5ea47; -[SCSendToStoriesActionHandler _showCustomStoryFirstTimePostWithSelectionActionModel:hasBlockedUsers:customStory:] */

void FUN_105e5e8cc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x60);
    lVar1 = param_5;
    func_0x00010bf5a820(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (iVar3 == 0) {
      _objc_initWeak(auStack_58,param_1);
      param_1 = param_1 + 0x68;
      _objc_loadWeakRetained(param_1);
      _objc_copyWeak(auStack_68,auStack_58);
      _objc_retain(param_3);
      uStack_60 = param_4;
      func_0x00010bf7a8a0(param_1);
      _objc_release(param_1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
    }
    else {
      func_0x00010be9dce0(param_1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105e5ea48; end: 105e5ea7f;  */

void FUN_105e5ea48(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be24fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5ea80; end: 105e5eb0f; -[SCSendToStoriesActionHandler _handleAcceptCustomStoryOnboardingWithSelectionActionModel:hasBlockedUsers:] */

void FUN_105e5ea80(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190340();
  _objc_release(uVar1);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190360();
    _objc_release(uVar1);
  }
  func_0x00010be9dce0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e5eb10; end: 105e5ec77; -[SCSendToStoriesActionHandler _selectOurStoryWithSelectionActionModel:] */

void FUN_105e5eb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07e980();
  _objc_release(uVar1);
  uVar3 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c07d660();
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (((int)uVar5 == 0) || ((uVar2 & 1) != 0)) {
    func_0x00010beba340(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf7ad20(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e5ec78; end: 105e5ecab;  */

void FUN_105e5ec78(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5ecac; end: 105e5ed13; -[SCSendToStoriesActionHandler _onAcceptOurStoryFirstTimePostWithSelectionActionModel:] */

void FUN_105e5ecac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204d20();
  _objc_release(uVar1);
  func_0x00010beba340(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e5ed14; end: 105e5eeab; -[SCSendToStoriesActionHandler _showOurStoryAttributionIntroWithSelectionActionModel:] */

void FUN_105e5ed14(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d660();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010be9dce0(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105e5eeac;
    puStack_70 = &UNK_110841fb0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_copyWeak(auStack_90,auStack_58);
    _objc_retain(param_3);
    func_0x00010bf7ada0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_90);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e5eeac; end: 105e5ef13;  */

void FUN_105e5eeac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9dce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5ef14; end: 105e5f12b; -[SCSendToStoriesActionHandler _showOurStoryFallbackAttributionIntroWithSelectionActionModel:] */

void FUN_105e5ef14(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdbba0();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c079660();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c07d660();
  _objc_release(uVar5);
  _objc_release(uVar3);
  if ((((int)uVar6 == 0) || ((int)uVar4 == 0)) || ((uVar2 & 1) != 0)) {
    func_0x00010be9dce0(param_1);
  }
  else {
    uVar4 = param_3;
    func_0x00010c15a7c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c15a7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0d5140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    func_0x00010bf7ad00(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar7);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e5f12c; end: 105e5f15f;  */

void FUN_105e5f12c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be674e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5f160; end: 105e5f1c7; -[SCSendToStoriesActionHandler _onAcceptOurStoryAttributionIntroWithSelectionActionModel:] */

void FUN_105e5f160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa5e0();
  _objc_release(uVar1);
  func_0x00010be9dce0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e5f1c8; end: 105e5f537; -[SCSendToStoriesActionHandler _createPostEditButtonSelectionActionModel:] */

void FUN_105e5f1c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **unaff_x24;
  uint uVar12;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3568;
  _objc_opt_class(PTR_PTR_1126b3568);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126b5650;
    _objc_alloc();
    func_0x00010c043e20();
    ppuVar4 = *(undefined ***)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(ulong *)(param_1 + 0x58);
    func_0x000108f3e258();
    uVar12 = 0;
    unaff_x24 = (undefined **)0x0;
    if ((uVar5 & 1) == 0) {
      ppuVar6 = ppuVar4;
      func_0x00010c07f640();
      uVar12 = (uint)ppuVar6 ^ 1;
      unaff_x24 = ppuVar4;
      func_0x00010c2347a0();
    }
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c073920();
    _objc_release(uVar7);
    _objc_initWeak(auStack_78,param_1);
    if (uVar12 == 0) {
      param_1 = param_1 + 0x68;
      _objc_loadWeakRetained(param_1);
      if ((int)unaff_x24 == 0) {
        func_0x00010bf7b1c0(param_1);
        _objc_release(param_1);
      }
      else {
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0xc2000000;
        uStack_d0 = 0x105e5f5b8;
        puStack_c8 = &UNK_110848218;
        _objc_copyWeak(auStack_b0,auStack_78);
        _objc_retain(ppuVar4);
        ppuStack_c0 = ppuVar4;
        _objc_retain(puVar2);
        puStack_b8 = puVar2;
        func_0x00010bf7b1a0(param_1);
        _objc_release(param_1);
        _objc_release(puStack_b8);
        _objc_release(ppuStack_c0);
        _objc_destroyWeak(auStack_b0);
        unaff_x24 = &puStack_e0;
      }
    }
    else if ((int)uVar10 == 0) {
      param_1 = param_1 + 0x68;
      _objc_loadWeakRetained(param_1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_105e5f538;
      puStack_90 = &UNK_110841fb0;
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_retain(puVar2);
      puStack_88 = puVar2;
      func_0x00010bf7b120(param_1);
      _objc_release(param_1);
      _objc_release(puStack_88);
      _objc_destroyWeak(auStack_80);
      unaff_x24 = &puStack_a8;
    }
    else {
      unaff_x24 = (undefined **)PTR_PTR_1126b5658;
      _objc_alloc(PTR_PTR_1126b5658);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c043e40(unaff_x24);
      _objc_release(puVar8);
      func_0x00010bebb140(param_1);
      func_0x00010c208de0(ppuVar4);
      _objc_release(unaff_x24);
    }
    _objc_destroyWeak(auStack_78);
    _objc_release(ppuVar4);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 5);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  lVar9 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar9 != 0) {
    uVar10 = *(undefined8 *)(lVar9 + 0x30);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208de0();
    _objc_release(uVar10);
    lVar11 = lVar9 + 0x68;
    _objc_loadWeakRetained(lVar11);
    func_0x00010bf7b1c0();
    _objc_release(lVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 105e5f538; end: 105e5f61b;  */

void FUN_105e5f538(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208de0();
    _objc_release(uVar1);
    lVar2 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf7b1c0();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5f61c; end: 105e5faaf; -[SCSendToStoriesActionHandler _selectSpotlightWithSelectionActionModel:] */

void FUN_105e5f61c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  long lVar8;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + 0x58);
  func_0x000108f3e258();
  if ((uVar4 & 1) == 0) {
    uVar5 = uVar3;
    func_0x00010c07f640();
    uVar13 = (uint)uVar5 ^ 1;
    uVar5 = uVar3;
    func_0x00010c2347a0();
    uVar12 = (uint)uVar5;
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
  }
  lVar6 = *(long *)(param_1 + 0x48);
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    iVar1 = 0;
  }
  else {
    lVar6 = param_3;
    func_0x00010c15a7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c07d660();
    iVar1 = (int)lVar8;
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  lVar6 = param_1;
  func_0x00010bebed00();
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c073920();
  _objc_release(uVar9);
  _objc_initWeak(auStack_68,param_1);
  lVar7 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010c07d660();
  _objc_release(lVar8);
  _objc_release(lVar7);
  if (((uint)lVar10 & uVar13) == 1) {
    if ((int)uVar5 == 0) {
      param_1 = param_1 + 0x68;
      _objc_loadWeakRetained(param_1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_105e5fab0;
      puStack_90 = &UNK_11086aae8;
      _objc_copyWeak(auStack_80,auStack_68);
      lStack_78 = lVar6;
      uStack_70 = (char)iVar1;
      _objc_retain(param_3);
      lStack_88 = param_3;
      uStack_6f = (char)uVar5;
      func_0x00010bf7b120(param_1);
      _objc_release(param_1);
      _objc_release(lStack_88);
      puVar11 = auStack_80;
LAB_105e5f984:
      _objc_destroyWeak(puVar11);
      goto LAB_105e5f988;
    }
    func_0x00010bebb140(param_1);
    lVar6 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208de0();
  }
  else if (lVar6 == 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x58);
    func_0x000108f48664();
    if (iVar2 != 0) {
      lVar6 = param_3;
      func_0x00010c15a7c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c07d660();
      _objc_release(lVar7);
      _objc_release(lVar6);
      if ((int)lVar8 != 0) {
        lVar6 = param_1;
        func_0x00010beb5ac0();
        if ((int)lVar6 == 0) {
          if (iVar1 == 0) {
            func_0x00010bebb140(param_1);
            goto LAB_105e5f988;
          }
          lVar6 = param_1 + 0x68;
          _objc_loadWeakRetained(lVar6);
          func_0x00010bf7b160();
        }
        else if (iVar1 == 0) {
          lVar7 = param_3;
          func_0x00010c15a7c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar7;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          param_1 = param_1 + 0x68;
          _objc_loadWeakRetained(param_1);
          func_0x00010bf7b1c0();
          _objc_release(param_1);
        }
        else {
          lVar6 = param_1 + 0x68;
          _objc_loadWeakRetained(lVar6);
          func_0x00010bf7b160();
        }
        goto LAB_105e5f7b0;
      }
    }
    lVar6 = param_3;
    func_0x00010c15a7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c07d660();
    _objc_release(lVar7);
    _objc_release(lVar6);
    if (((uint)lVar8 & uVar12) == 1) {
      param_1 = param_1 + 0x68;
      _objc_loadWeakRetained(param_1);
      _objc_copyWeak(auStack_b8,auStack_68);
      _objc_retain(uVar3);
      uStack_b0 = (char)iVar1;
      _objc_retain(param_3);
      uStack_af = (char)uVar5;
      func_0x00010bf7b1a0(param_1);
      _objc_release(param_1);
      _objc_release(param_3);
      _objc_release(uVar3);
      puVar11 = auStack_b8;
      goto LAB_105e5f984;
    }
    if (iVar1 == 0) {
      func_0x00010bebb140(param_1);
      goto LAB_105e5f988;
    }
    lVar6 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf7b160();
  }
  else {
    lVar6 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf7b180();
  }
LAB_105e5f7b0:
  _objc_release(lVar6);
LAB_105e5f988:
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105e5fab0; end: 105e5fb6b;  */

void FUN_105e5fab0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208de0();
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x30) == 0) {
      if (*(char *)(param_1 + 0x38) != '\x01') {
        func_0x00010bebb140(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                            *(undefined1 *)(param_1 + 0x39));
        goto LAB_105e5fb44;
      }
      lVar3 = lVar1 + 0x68;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf7b160();
    }
    else {
      lVar3 = lVar1 + 0x68;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf7b180();
    }
    _objc_release(lVar3);
  }
LAB_105e5fb44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e5fb6c; end: 105e5fbdb;  */

void FUN_105e5fb6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beecbc0(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar2 = lVar1 + 0x68;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf7b160();
    _objc_release(lVar2);
  }
  else {
    func_0x00010bebb140(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined1 *)(param_1 + 0x39));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e5fbdc; end: 105e5fc4f; -[SCSendToStoriesActionHandler _spotlightEducationType] */

undefined8 FUN_105e5fbdc(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x98);
  func_0x00010c0782e0();
  if (iVar1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x58);
    func_0x000108f4870c();
    if ((uVar4 & 1) != 0) {
      return 0;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
  func_0x000108f485dc();
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x58);
  func_0x000108f486a0();
  if (iVar1 != 0) {
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x98);
    func_0x00010c075080();
    if (((uVar2 | uVar3 ^ 0xffffffff) & 1) == 0) {
      return 3;
    }
  }
  return 0;
}



/* Entry: 105e5fc50; end: 105e5fdeb; -[SCSendToStoriesActionHandler _showSpotlightIntroWithSelectionActionModel:isFriendsOnlyProfile:] */

void FUN_105e5fc50(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d660();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010bebf000(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105e5fdec;
    puStack_70 = &UNK_110841fb0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_copyWeak(auStack_90,auStack_58);
    _objc_retain(param_3);
    func_0x00010bf7b140(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_90);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e5fdec; end: 105e5fe53;  */

void FUN_105e5fdec(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebf000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e5fe54; end: 105e6006b; -[SCSendToStoriesActionHandler _showSpotlightFallbackAttributionIntroWithSelectionActionModel:] */

void FUN_105e5fe54(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdbbe0();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c079660();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c07d660();
  _objc_release(uVar5);
  _objc_release(uVar3);
  if ((((int)uVar6 == 0) || ((int)uVar4 == 0)) || ((uVar2 & 1) != 0)) {
    func_0x00010bebf000(param_1);
  }
  else {
    uVar4 = param_3;
    func_0x00010c15a7c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c15a7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0d5140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    func_0x00010bf7b100(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar7);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e6006c; end: 105e6009f;  */

void FUN_105e6006c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e600a0; end: 105e60107; -[SCSendToStoriesActionHandler _onAcceptSpotlightAttributionIntroWithSelectionActionModel:] */

void FUN_105e600a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa6e0();
  _objc_release(uVar1);
  func_0x00010bebf000(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e60108; end: 105e6034f; -[SCSendToStoriesActionHandler _selectBusinessStoryWithSelectionActionModel:] */

void FUN_105e60108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15a7c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d660();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    func_0x00010be9dce0(param_1);
  }
  else {
    puVar7 = PTR_PTR_1126c3320;
    func_0x00010c271d40(PTR_PTR_1126c3320);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c15a7c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1f20(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar7);
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    func_0x00010bf7a740(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 105e60350; end: 105e60383;  */

void FUN_105e60350(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9dce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e60384; end: 105e605cb; -[SCSendToStoriesActionHandler _selectFanPassStoryWithSelectionActionModel:] */

void FUN_105e60384(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15a7c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126c3320;
  func_0x00010c272080(PTR_PTR_1126c3320);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d660();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    func_0x00010be9dce0(param_1);
  }
  else {
    uVar1 = param_3;
    func_0x00010c15a7c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1f20(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    func_0x00010bf7a740(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 105e605cc; end: 105e605ff;  */

void FUN_105e605cc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9dce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e60600; end: 105e6065f; -[SCSendToStoriesActionHandler _shouldShowAddSoundError] */

uint FUN_105e60600(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c075080(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c0782e0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c06c980(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c06c8e0(uVar4);
  return ((uint)uVar1 | (uint)uVar3 & (uint)uVar4 ^ 0xffffffff) & ((uint)uVar2 ^ 0xffffffff) & 1;
}



/* Entry: 105e60660; end: 105e60793; -[SCSendToStoriesActionHandler _spotlightSelectionWithActionModel:] */

void FUN_105e60660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010c0720c0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f52df8);
  if (((int)uVar1 == 0) || (uVar1 = uVar2, func_0x00010c07d660(), (int)uVar1 == 0)) {
    func_0x00010be9dce0(param_1,param_2,param_3);
  }
  else {
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b1c0();
    _objc_release(param_1);
  }
  _objc_release(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e60794; end: 105e60937; -[SCSendToStoriesActionHandler _selectWithSelectionActionModel:] */

void FUN_105e60794(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar1 = param_3;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar14 = *plStack_120;
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(puVar1);
        }
        uVar13 = *(undefined8 *)(lStack_128 + (long)puVar15 * 8);
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010c15ab20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar13;
        func_0x00010c15a7a0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar13;
        func_0x00010c07d660();
        func_0x00010c247520();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fb940(uVar3,param_2,uVar4,uVar11,uVar13);
        _objc_release(uVar13);
        _objc_release(uVar4);
        _objc_release(uVar3);
        puVar15 = puVar15 + 1;
      } while (puVar2 != puVar15);
      puVar2 = puVar1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  uVar5 = *(ulong *)(param_1 + 0x58);
  func_0x000108f4837c();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)param_3;
    func_0x00010be01d00(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined1 *)puVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar2 = puVar1;
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar15;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar15);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar15;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar15);
  _objc_release(puVar2);
  puVar2 = puVar8;
  func_0x00010c0720c0(puVar8,param_2,&PTR____CFConstantStringClassReference_110f52cd8);
  if (((((ulong)puVar2 & 1) == 0) &&
      (puVar2 = puVar8,
      func_0x00010c0720c0(puVar8,param_2,&PTR____CFConstantStringClassReference_110f52d18),
      ((ulong)puVar2 & 1) == 0)) &&
     (puVar2 = puVar8,
     func_0x00010c0720c0(puVar8,param_2,&PTR____CFConstantStringClassReference_110f52cf8),
     (int)puVar2 == 0)) {
LAB_105e60b54:
    uVar11 = *(undefined8 *)(param_3 + 0x88);
    func_0x00010c1164a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c0720c0(puVar9,param_2,uVar4);
    if (((ulong)puVar2 & 1) != 0) {
      lVar10 = *(long *)(param_3 + 0x80);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar10;
      func_0x00010c25aac0();
      if (lVar14 == 1) {
        puVar2 = puVar1;
        func_0x00010c07d660();
        _objc_release(lVar10);
        _objc_release(uVar4);
        _objc_release(uVar11);
        if ((int)puVar2 == 0) goto LAB_105e60c6c;
      }
      else {
        lVar12 = *(long *)(param_3 + 0x80);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar12;
        func_0x00010c25aac0();
        if (lVar14 != 2) {
          _objc_release(lVar12);
          _objc_release(lVar10);
          goto LAB_105e60c5c;
        }
        puVar2 = puVar1;
        func_0x00010c07d660();
        _objc_release(lVar12);
        _objc_release(lVar10);
        _objc_release(uVar4);
        _objc_release(uVar11);
        if (((ulong)puVar2 & 1) == 0) goto LAB_105e60c6c;
      }
      func_0x00010bed1f40(param_3,param_2,&PTR____CFConstantStringClassReference_110f52cd8,puVar1);
      func_0x00010bed1f40(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d18,puVar1);
      goto LAB_105e60c6c;
    }
LAB_105e60c5c:
    _objc_release(uVar4);
  }
  else {
    lVar10 = *(long *)(param_3 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar10;
    func_0x00010c25aac0();
    if (lVar14 != 1) {
      lVar12 = *(long *)(param_3 + 0x80);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar12;
      func_0x00010c25aac0();
      if (lVar14 == 2) {
        puVar2 = puVar1;
        func_0x00010c07d660();
        _objc_release(lVar12);
        _objc_release(lVar10);
        if ((int)puVar2 != 0) goto LAB_105e60b00;
      }
      else {
        _objc_release(lVar12);
        _objc_release(lVar10);
      }
      goto LAB_105e60b54;
    }
    puVar2 = puVar1;
    func_0x00010c07d660();
    _objc_release(lVar10);
    if (((ulong)puVar2 & 1) == 0) goto LAB_105e60b54;
LAB_105e60b00:
    uVar11 = *(undefined8 *)(param_3 + 0x88);
    func_0x00010c1164a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1f20(param_3,param_2,uVar4,puVar1);
    _objc_release(uVar4);
  }
  _objc_release(uVar11);
LAB_105e60c6c:
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e60938; end: 105e60c9f; -[SCSendToStoriesActionHandler _disableMyStoryAndMyPublicStoryPostingWithSelectionActionModel:] */

void FUN_105e60938(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  if (param_3 == 0) {
    return;
  }
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c0720c0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f52cd8);
  if ((((uVar2 & 1) == 0) &&
      (uVar2 = uVar5,
      func_0x00010c0720c0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f52d18),
      (uVar2 & 1) == 0)) &&
     (uVar2 = uVar5,
     func_0x00010c0720c0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f52cf8),
     (int)uVar2 == 0)) {
LAB_105e60b54:
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c1164a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c0720c0(uVar6,param_2,uVar9);
    if ((uVar2 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x80);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c25aac0();
      if (lVar8 == 1) {
        uVar2 = uVar1;
        func_0x00010c07d660();
        _objc_release(lVar7);
        _objc_release(uVar9);
        _objc_release(uVar10);
        if ((int)uVar2 == 0) goto LAB_105e60c6c;
      }
      else {
        lVar11 = *(long *)(param_1 + 0x80);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar11;
        func_0x00010c25aac0();
        if (lVar8 != 2) {
          _objc_release(lVar11);
          _objc_release(lVar7);
          goto LAB_105e60c5c;
        }
        uVar2 = uVar1;
        func_0x00010c07d660();
        _objc_release(lVar11);
        _objc_release(lVar7);
        _objc_release(uVar9);
        _objc_release(uVar10);
        if ((uVar2 & 1) == 0) goto LAB_105e60c6c;
      }
      func_0x00010bed1f40(param_1,param_2,&PTR____CFConstantStringClassReference_110f52cd8,uVar1);
      func_0x00010bed1f40(param_1,param_2,&PTR____CFConstantStringClassReference_110f52d18,uVar1);
      goto LAB_105e60c6c;
    }
LAB_105e60c5c:
    _objc_release(uVar9);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c25aac0();
    if (lVar8 != 1) {
      lVar11 = *(long *)(param_1 + 0x80);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar11;
      func_0x00010c25aac0();
      if (lVar8 == 2) {
        uVar2 = uVar1;
        func_0x00010c07d660();
        _objc_release(lVar11);
        _objc_release(lVar7);
        if ((int)uVar2 != 0) goto LAB_105e60b00;
      }
      else {
        _objc_release(lVar11);
        _objc_release(lVar7);
      }
      goto LAB_105e60b54;
    }
    uVar2 = uVar1;
    func_0x00010c07d660();
    _objc_release(lVar7);
    if ((uVar2 & 1) == 0) goto LAB_105e60b54;
LAB_105e60b00:
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c1164a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1f20(param_1,param_2,uVar9,uVar1);
    _objc_release(uVar9);
  }
  _objc_release(uVar10);
LAB_105e60c6c:
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e60ca0; end: 105e60eaf; -[SCSendToStoriesActionHandler _unselectItemWithSelectionTypeIdentifier:currentSelectionItemUpdate:] */

void FUN_105e60ca0(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [8];
  undefined1 *puStack_420;
  undefined1 *puStack_418;
  undefined1 *puStack_410;
  undefined1 *puStack_408;
  undefined1 *puStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined1 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 **ppuStack_3d0;
  code *pcStack_3c8;
  undefined1 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_2f0;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 *puStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined1 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_138 = param_4;
  if (param_4 != (undefined1 *)0x0) {
    unaff_x23 = *(long *)(param_1 + 8);
    lStack_140 = param_1;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x23;
    func_0x00010c0ecca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    _objc_retain(unaff_x22);
    puVar4 = &uStack_130;
    puVar3 = auStack_f0;
    lVar1 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      param_4 = (undefined1 *)*puStack_120;
      do {
        param_1 = 0;
        do {
          if ((undefined1 *)*puStack_120 != param_4) {
            _objc_enumerationMutation(unaff_x22);
          }
          unaff_x24 = *(undefined1 **)(lStack_128 + param_1 * 8);
          unaff_x25 = unaff_x24;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x27;
          func_0x00010c0720c0();
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          if ((int)unaff_x28 != 0) {
            unaff_x25 = *(undefined1 **)(lStack_140 + 8);
            func_0x00010c15ab20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = puStack_138;
            func_0x00010c247520();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fb940(unaff_x25);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
          }
          param_1 = param_1 + 1;
        } while (lVar1 != param_1);
        puVar4 = &uStack_130;
        puVar3 = auStack_f0;
        lVar1 = unaff_x22;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x22);
    _objc_release(unaff_x22);
  }
  _objc_release(puStack_138);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105e60eb0;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar11 = puVar3;
  puStack_278 = puVar2;
  puStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  lStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  lStack_168 = param_1;
  puStack_160 = param_4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  if ((puVar4 != (undefined8 *)0x0) && (puVar3 != (undefined1 *)0x0)) {
    unaff_x23 = puStack_278[1];
    puStack_280 = puVar3;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x23;
    func_0x00010c0ecca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    _objc_retain(unaff_x22);
    puVar5 = &uStack_270;
    puVar11 = auStack_230;
    lVar1 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar13 = *plStack_260;
      do {
        param_1 = 0;
        do {
          if (*plStack_260 != lVar13) {
            _objc_enumerationMutation(unaff_x22);
          }
          unaff_x24 = *(undefined1 **)(lStack_268 + param_1 * 8);
          unaff_x25 = unaff_x24;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x27;
          func_0x00010c0720c0();
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          if ((int)unaff_x28 != 0) {
            unaff_x25 = (undefined1 *)puStack_278[1];
            func_0x00010c15ab20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = puStack_280;
            func_0x00010c247520();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fb940(unaff_x25);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
          }
          param_1 = param_1 + 1;
        } while (lVar1 != param_1);
        puVar5 = &uStack_270;
        puVar11 = auStack_230;
        lVar1 = unaff_x22;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x22);
    _objc_release(unaff_x22);
    puVar3 = puStack_280;
  }
  _objc_release(puVar3);
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_105e610c8;
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar5;
  puStack_3b8 = puVar2;
  puStack_2e0 = unaff_x28;
  puStack_2d8 = unaff_x27;
  puStack_2d0 = unaff_x26;
  puStack_2c8 = unaff_x25;
  puStack_2c0 = unaff_x24;
  lStack_2b8 = unaff_x23;
  lStack_2b0 = unaff_x22;
  lStack_2a8 = param_1;
  puStack_2a0 = puVar3;
  puStack_298 = puVar4;
  ppuStack_290 = &puStack_150;
  _objc_retain(puVar5);
  _objc_retain(puVar11);
  if ((puVar5 != (undefined8 *)0x0) && (puVar11 != (undefined1 *)0x0)) {
    unaff_x23 = puStack_3b8[1];
    puStack_3c0 = puVar11;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x23;
    func_0x00010c0ecca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    lStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    _objc_retain(unaff_x22);
    puVar10 = &uStack_3b0;
    lVar1 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar13 = *plStack_3a0;
      do {
        param_1 = 0;
        do {
          if (*plStack_3a0 != lVar13) {
            _objc_enumerationMutation(unaff_x22);
          }
          unaff_x24 = *(undefined1 **)(lStack_3a8 + param_1 * 8);
          unaff_x25 = unaff_x24;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x27;
          func_0x00010c0720c0();
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          if ((((ulong)unaff_x28 & 1) == 0) &&
             (puVar3 = unaff_x24, func_0x000108425bb0(), (int)puVar3 != 0)) {
            unaff_x25 = (undefined1 *)puStack_3b8[1];
            func_0x00010c15ab20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = puStack_3c0;
            func_0x00010c247520();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fb940(unaff_x25);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
          }
          param_1 = param_1 + 1;
        } while (lVar1 != param_1);
        puVar10 = &uStack_3b0;
        lVar1 = unaff_x22;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x22);
    _objc_release(unaff_x22);
    puVar11 = puStack_3c0;
  }
  _objc_release(puVar11);
  puVar4 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3c8 = FUN_105e612ec;
  puStack_420 = unaff_x28;
  puStack_418 = unaff_x27;
  puStack_410 = unaff_x26;
  puStack_408 = unaff_x25;
  puStack_400 = unaff_x24;
  lStack_3f8 = unaff_x23;
  lStack_3f0 = unaff_x22;
  lStack_3e8 = param_1;
  puStack_3e0 = puVar11;
  puStack_3d8 = puVar5;
  ppuStack_3d0 = &ppuStack_290;
  _objc_retain(puVar10);
  puVar5 = puVar10;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c51c8;
  _objc_opt_class(PTR_PTR_1126c51c8);
  puVar7 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar6);
  puVar2 = puVar5;
  if (((ulong)puVar7 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar5);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_428,puVar4);
    puVar6 = PTR_PTR_1126c5280;
    uVar8 = puVar4[0x15];
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080120();
    _objc_copyWeak(auStack_430,auStack_428);
    func_0x00010c10d860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = puVar4[0xe];
    puVar4[0xe] = puVar6;
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_430);
    _objc_destroyWeak(auStack_428);
  }
  _objc_release(puVar2);
  _objc_release(puVar10);
  return;
}



/* Entry: 105e60eb0; end: 105e610c7; -[SCSendToStoriesActionHandler _unselectItemWithSelectionItemRecipientId:currentSelectionItemUpdate:] */

void FUN_105e60eb0(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [8];
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 *puStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined1 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 *puStack_140;
  long lStack_138;
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
  puVar9 = param_3;
  puVar3 = param_4;
  lStack_138 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != (undefined8 *)0x0) && (param_4 != (undefined1 *)0x0)) {
    unaff_x23 = *(long *)(lStack_138 + 8);
    puStack_140 = param_4;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x23;
    func_0x00010c0ecca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(unaff_x22);
    puVar9 = &uStack_130;
    puVar3 = auStack_f0;
    lVar1 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar12 = *plStack_120;
      do {
        unaff_x21 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(unaff_x22);
          }
          unaff_x24 = *(undefined1 **)(lStack_128 + unaff_x21 * 8);
          unaff_x25 = unaff_x24;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x27;
          func_0x00010c0720c0();
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          if ((int)unaff_x28 != 0) {
            unaff_x25 = *(undefined1 **)(lStack_138 + 8);
            func_0x00010c15ab20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = puStack_140;
            func_0x00010c247520();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fb940(unaff_x25);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
          }
          unaff_x21 = unaff_x21 + 1;
        } while (lVar1 != unaff_x21);
        puVar9 = &uStack_130;
        puVar3 = auStack_f0;
        lVar1 = unaff_x22;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x22);
    _objc_release(unaff_x22);
    param_4 = puStack_140;
  }
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105e610c8;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  puStack_278 = puVar2;
  puStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  lStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  puStack_160 = param_4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar3);
  if ((puVar9 != (undefined8 *)0x0) && (puVar3 != (undefined1 *)0x0)) {
    unaff_x23 = puStack_278[1];
    puStack_280 = puVar3;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x23;
    func_0x00010c0ecca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    _objc_retain(unaff_x22);
    puVar10 = &uStack_270;
    lVar1 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar12 = *plStack_260;
      do {
        unaff_x21 = 0;
        do {
          if (*plStack_260 != lVar12) {
            _objc_enumerationMutation(unaff_x22);
          }
          unaff_x24 = *(undefined1 **)(lStack_268 + unaff_x21 * 8);
          unaff_x25 = unaff_x24;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x27;
          func_0x00010c0720c0();
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          if ((((ulong)unaff_x28 & 1) == 0) &&
             (puVar3 = unaff_x24, func_0x000108425bb0(), (int)puVar3 != 0)) {
            unaff_x25 = (undefined1 *)puStack_278[1];
            func_0x00010c15ab20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = puStack_280;
            func_0x00010c247520();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fb940(unaff_x25);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
          }
          unaff_x21 = unaff_x21 + 1;
        } while (lVar1 != unaff_x21);
        puVar10 = &uStack_270;
        lVar1 = unaff_x22;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x22);
    _objc_release(unaff_x22);
    puVar3 = puStack_280;
  }
  _objc_release(puVar3);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_105e612ec;
  puStack_2e0 = unaff_x28;
  puStack_2d8 = unaff_x27;
  puStack_2d0 = unaff_x26;
  puStack_2c8 = unaff_x25;
  puStack_2c0 = unaff_x24;
  lStack_2b8 = unaff_x23;
  lStack_2b0 = unaff_x22;
  lStack_2a8 = unaff_x21;
  puStack_2a0 = puVar3;
  puStack_298 = puVar9;
  ppuStack_290 = &puStack_150;
  _objc_retain(puVar10);
  puVar4 = puVar10;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c51c8;
  _objc_opt_class(PTR_PTR_1126c51c8);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar9 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  _objc_retain(puVar9);
  _objc_release(puVar4);
  if (puVar9 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_2e8,puVar2);
    puVar5 = PTR_PTR_1126c5280;
    uVar7 = puVar2[0x15];
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080120();
    _objc_copyWeak(auStack_2f0,auStack_2e8);
    func_0x00010c10d860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar2[0xe];
    puVar2[0xe] = puVar5;
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_2f0);
    _objc_destroyWeak(auStack_2e8);
  }
  _objc_release(puVar9);
  _objc_release(puVar10);
  return;
}



/* Entry: 105e610c8; end: 105e612eb; -[SCSendToStoriesActionHandler _unselectStoriesExcludingRecipientId:currentSelectionItemUpdate:] */

void FUN_105e610c8(long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong uStack_140;
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
  puVar10 = param_3;
  lStack_138 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != (undefined8 *)0x0) && (param_4 != 0)) {
    unaff_x23 = *(long *)(lStack_138 + 8);
    uStack_140 = param_4;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x23;
    func_0x00010c0ecca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(unaff_x22);
    puVar10 = &uStack_130;
    lVar2 = unaff_x22;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar12 = *plStack_120;
      do {
        unaff_x21 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(unaff_x22);
          }
          unaff_x24 = *(ulong *)(lStack_128 + unaff_x21 * 8);
          unaff_x25 = unaff_x24;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x27;
          func_0x00010c0720c0();
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          if (((unaff_x28 & 1) == 0) && (uVar3 = unaff_x24, func_0x000108425bb0(), (int)uVar3 != 0))
          {
            unaff_x25 = *(ulong *)(lStack_138 + 8);
            func_0x00010c15ab20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = uStack_140;
            func_0x00010c247520();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fb940(unaff_x25);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
          }
          unaff_x21 = unaff_x21 + 1;
        } while (lVar2 != unaff_x21);
        puVar10 = &uStack_130;
        lVar2 = unaff_x22;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(unaff_x22);
    _objc_release(unaff_x22);
    param_4 = uStack_140;
  }
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105e612ec;
  uStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  uStack_180 = unaff_x24;
  lStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  uStack_160 = param_4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  puVar5 = puVar10;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c51c8;
  _objc_opt_class(PTR_PTR_1126c51c8);
  puVar7 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar6);
  puVar1 = puVar5;
  if (((ulong)puVar7 & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar5);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_1a8,puVar4);
    puVar6 = PTR_PTR_1126c5280;
    uVar8 = puVar4[0x15];
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080120();
    _objc_copyWeak(auStack_1b0,auStack_1a8);
    func_0x00010c10d860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar4[0xe];
    puVar4[0xe] = puVar6;
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_1b0);
    _objc_destroyWeak(auStack_1a8);
  }
  _objc_release(puVar1);
  _objc_release(puVar10);
  return;
}



/* Entry: 105e612ec; end: 105e61497; -[SCSendToStoriesActionHandler _handleSelectCustomTTLWithActionModel:] */

void FUN_105e612ec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c51c8;
  _objc_opt_class(PTR_PTR_1126c51c8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar3 = PTR_PTR_1126c5280;
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080120();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c10d860();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105e61498; end: 105e614ff;  */

void FUN_105e61498(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7a8c0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e61500; end: 105e61507; -[SCSendToStoriesActionHandler uiContainer] */

undefined8 FUN_105e61500(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105e61508; end: 105e61537; -[SCSendToStoriesActionHandler setUiContainer:] */

void FUN_105e61508(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e61538; end: 105e61653; -[SCSendToStoriesActionHandler .cxx_destruct] */

void FUN_105e61538(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 105e61654; end: 105e61b2b; +[SCSendToStoriesTimerPickerPresenter presentPickerForSelectionStory:uiContainer:valdiRuntimeProvider:isSnapchatPlusSubscriber:completion:] */

void FUN_105e61654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_3);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_108 = &puStack_110;
  puStack_110 = (undefined *)0x0;
  uStack_100 = 0x2020000000;
  puStack_f8 = (undefined *)((ulong)puStack_f8 & 0xffffffffffffff00);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = (code *)0x105e61da0;
  puStack_a8 = &UNK_11086a8c8;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105e61db4;
  puStack_d0 = &UNK_1108ed550;
  ppuStack_c8 = ppuStack_108;
  ppuStack_a0 = ppuStack_108;
  func_0x00010c0bee40(param_3);
  bVar2 = *(byte *)(ppuStack_108 + 3);
  __Block_object_dispose(&puStack_110,8);
  _objc_release(param_3);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117f618;
  if (((bVar2 | param_6 ^ 0xff) & 1) == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117f630;
  }
  _objc_retain(ppuVar1);
  ppuVar3 = ppuVar1;
  func_0x000100504554(ppuVar1,&PTR___NSConcreteGlobalBlock_1108ed500);
  puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x00010c02f980();
  puVar5 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  _objc_initWeak(auStack_140,puVar5);
  puVar6 = PTR_PTR_1126c5288;
  _objc_alloc(PTR_PTR_1126c5288);
  _objc_retain(ppuVar1);
  _objc_copyWeak(auStack_148,auStack_140);
  _objc_retain(param_7);
  func_0x00010c0215e0(puVar6);
  _objc_retain(param_3);
  puStack_118 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_c0 = puVar7;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105e61dc8;
  puStack_a8 = &UNK_1108ed580;
  puStack_e8 = puVar7;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105e61df8;
  puStack_d0 = &UNK_11086a8c8;
  puStack_110 = puVar7;
  ppuStack_108 = (undefined **)0xc2000000;
  uStack_100 = 0x105e61e28;
  puStack_f8 = &UNK_1108ed5b0;
  puStack_138 = puVar7;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105e61e58;
  puStack_120 = &UNK_1108ed550;
  puStack_f0 = puStack_118;
  ppuStack_c8 = (undefined **)puStack_118;
  ppuStack_a0 = (undefined **)puStack_118;
  puStack_90 = puStack_118;
  func_0x00010c0bee40(param_3);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar1;
  func_0x00010bfecde0();
  _objc_release(puVar7);
  if (ppuVar8 != (undefined **)0x7fffffffffffffff) {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1abfe0(puVar6);
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126c5290;
  _objc_alloc(PTR_PTR_1126c5290);
  uVar9 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar7);
  _objc_release(uVar10);
  _objc_release(uVar9);
  func_0x00010c222380(puVar4);
  _objc_retain(param_4);
  func_0x00010c2a1520(puVar7);
  _objc_retain(puVar5);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_148);
  _objc_release(ppuVar1);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_140);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


