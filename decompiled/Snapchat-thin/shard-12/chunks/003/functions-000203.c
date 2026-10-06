/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f83398; end: 108f8339f; -[SCScriptIndexer sortedEntitiesForKey:] */

void FUN_108f83398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 108f833a0; end: 108f833df; -[SCScriptIndexer sectionBasedIndexForKey:] */

undefined8 FUN_108f833a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2827c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108f833e0; end: 108f8342b; -[SCScriptIndexer sectionBasedIndexAtScriptIndex:] */

long FUN_108f833e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155600(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108f8342c; end: 108f8346b; -[SCScriptIndexer rowBasedIndexForKey:] */

undefined8 FUN_108f8342c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2827c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108f8346c; end: 108f834b7; -[SCScriptIndexer rowBasedIndexAtScriptIndex:] */

long FUN_108f8346c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142260(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108f834b8; end: 108f834bf; -[SCScriptIndexer displayIndexes] */

undefined8 FUN_108f834b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f834c0; end: 108f83567; -[SCScriptIndexer .cxx_destruct] */

void FUN_108f834c0(long param_1)

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



/* Entry: 108f83568; end: 108f835a3;  */

void FUN_108f83568(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111183410);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730478;
  puRam0000000113730478 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f835a4; end: 108f836d3;  */

void FUN_108f835a4(undefined8 param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108f836d4;
  uStack_30 = 0x108f836e4;
  uStack_28 = 0;
  func_0x00010c08fa60();
  func_0x00010bf98040(param_1);
  lVar1 = puStack_48[5];
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = puStack_48[5];
    func_0x00010bf433a0();
    if (lVar1 != -1) {
      lVar1 = puStack_48[5];
      func_0x00010bf433a0();
      if (lVar1 != 1) {
        ppuVar2 = (undefined **)puStack_48[5];
        _objc_retain(ppuVar2);
        goto LAB_108f83680;
      }
    }
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbf518;
LAB_108f83680:
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108f836d4; end: 108f836eb;  */

void FUN_108f836d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f836ec; end: 108f8373b;  */

void FUN_108f836ec(long param_1,undefined8 param_2)

{
  undefined1 *in_x6;
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c09e940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  *in_x6 = 1;
  return;
}



/* Entry: 108f8373c; end: 108f8373f;  */

void FUN_108f8373c(void)

{
  return;
}



/* Entry: 108f83740; end: 108f8383f; -[SCCollectionViewRenderingTracker initWithPerformer:] */

undefined1 * FUN_108f83740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff810;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dcc18;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f83840; end: 108f8393f; -[SCCollectionViewRenderingTracker didReceiveDataForSection:cellViewModels:] */

void FUN_108f83840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108f83940; end: 108f83973;  */

void FUN_108f83940(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f83974; end: 108f83a4b; -[SCCollectionViewRenderingTracker didRenderSection:] */

void FUN_108f83974(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108f83a4c; end: 108f83a7f;  */

void FUN_108f83a4c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f83a80; end: 108f83bcf; -[SCCollectionViewRenderingTracker renderCompleteWithRenderedSectionIndexToIdentifierMapping:visibleIndexPaths:completion:] */

void FUN_108f83a80(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010bf529e0();
  *(bool *)(param_1 + 0x30) = uVar2 <= uVar1;
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar3);
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



/* Entry: 108f83bd0; end: 108f83c07;  */

void FUN_108f83bd0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8e0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f83c08; end: 108f83c0f; -[SCCollectionViewRenderingTracker addListener:] */

void FUN_108f83c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108f83c10; end: 108f83c17; -[SCCollectionViewRenderingTracker removeListener:] */

void FUN_108f83c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108f83c18; end: 108f83cdf; -[SCCollectionViewRenderingTracker _didReceiveDataForSection:cellViewModels:] */

void FUN_108f83c18(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010c0dff20(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar2,param_4);
      _objc_release(puVar2);
    }
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,param_5,param_4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108f83ce0; end: 108f83d83; -[SCCollectionViewRenderingTracker _didRenderSection:] */

void FUN_108f83ce0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    lVar1 = *(long *)(param_2 + 0x10);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,param_4);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108f83d84; end: 108f84047; -[SCCollectionViewRenderingTracker _renderCompleteWithRenderedSectionIndexToIdentifierMapping:visibleIndexPaths:completion:] */

ulong FUN_108f83d84(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_4);
      }
      func_0x00010c1554e0(*(undefined8 *)(lVar13 * 8));
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      uVar11 = uVar6;
      func_0x00010c08fa60();
      if (uVar11 != 0) {
        puVar7 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (puVar7 == (undefined *)0x0) {
          func_0x00010c1d0640(puVar3);
        }
        else {
          func_0x00010c282760(puVar7);
          func_0x00010c0df820(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar5);
        }
        _objc_release(puVar7);
      }
      _objc_release(uVar6);
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar10);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c156b80(uVar1);
  _objc_release(puVar5);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  if (param_5 != 0) {
    uVar11 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0(uVar11);
    uVar6 = param_3;
    func_0x00010bf529e0(param_3);
    (**(code **)(param_5 + 0x10))(param_5,uVar6 <= uVar11);
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_3;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(param_3 + 0x30);
}



/* Entry: 108f84048; end: 108f8404f; -[SCCollectionViewRenderingTracker areSectionsRendered] */

undefined1 FUN_108f84048(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 108f84050; end: 108f840a3; -[SCCollectionViewRenderingTracker .cxx_destruct] */

void FUN_108f84050(long param_1)

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



/* Entry: 108f840a4; end: 108f8425b; -[SCCollectionViewSectionRenderingTracker initWithCollectionViewUpdater:collectionView:performer:sectionRenderingSource:] */

undefined1 *
FUN_108f840a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ff818;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dcc18;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f8425c; end: 108f843b7; -[SCCollectionViewSectionRenderingTracker queryResultDidUpdate] */

void FUN_108f8425c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c156b00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    _objc_release(uVar1);
    if (*(long *)(param_1 + 0x58) == 0) {
      func_0x00010becde60(param_1);
      func_0x00010becdf60(param_1);
    }
    else {
      func_0x00010bece200(param_1);
    }
    lVar3 = *(long *)(param_1 + 0x58);
    func_0x00010bf529e0();
    *(bool *)(param_1 + 0x60) = lVar3 == 0;
    if (lVar3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bfed1a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_38,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(uVar1);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      _objc_release(uVar1);
    }
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 108f843b8; end: 108f843eb;  */

void FUN_108f843b8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f843ec; end: 108f844db; -[SCCollectionViewSectionRenderingTracker forceRenderingCompletion] */

void FUN_108f843ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 108f844dc; end: 108f8450f;  */

void FUN_108f844dc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f84510; end: 108f84517; -[SCCollectionViewSectionRenderingTracker addListener:] */

void FUN_108f84510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108f84518; end: 108f8451f; -[SCCollectionViewSectionRenderingTracker removeListener:] */

void FUN_108f84518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108f84520; end: 108f845c3; -[SCCollectionViewSectionRenderingTracker _trackInitialRenderingForCollectionViewSections:] */

void FUN_108f84520(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      func_0x00010bece0a0(param_1,param_2,param_3,param_4,uVar4,puVar1);
      uVar4 = uVar4 + 1;
      uVar2 = param_4;
      func_0x00010bf529e0();
    } while (uVar4 < uVar2);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined **)(param_2 + 0x58) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108f845c4; end: 108f846e7; -[SCCollectionViewSectionRenderingTracker _trackFirstDataReceivedForCollectionViewSections:] */

void FUN_108f845c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x23 = *plStack_110;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(long *)(param_1 + 0x18);
        func_0x00010c155b20();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x22 != 0) {
          func_0x00010bec7640(param_1);
        }
        _objc_release(unaff_x22);
        unaff_x24 = unaff_x24 + 1;
      } while (lVar1 != unaff_x24);
      lVar1 = param_3;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_108f846e8;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  lStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = param_1;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_initWeak(auStack_168,lVar1);
  puVar2 = (undefined1 *)puVar4;
  func_0x00010bfb0d80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_170,auStack_168);
  puVar3 = puVar2;
  func_0x00010c25ff60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release(puVar4);
  return;
}



/* Entry: 108f846e8; end: 108f847ef; -[SCCollectionViewSectionRenderingTracker _subscribeToDataTrackerObservableFirstEvent:] */

void FUN_108f846e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bfb0d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108f847f0; end: 108f84837;  */

void FUN_108f847f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be689a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f84838; end: 108f8490f; -[SCCollectionViewSectionRenderingTracker _onDataReceivedEvent:] */

void FUN_108f84838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108f84910; end: 108f8498b;  */

void FUN_108f84910(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c155f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2709c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdff2e0(lVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f8498c; end: 108f84a03; -[SCCollectionViewSectionRenderingTracker _didReceiveDataForSection:timestamp:] */

void FUN_108f8498c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,param_4,param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f84a04; end: 108f84b5f; -[SCCollectionViewSectionRenderingTracker _trackSubsequentRenderingForCollectionViewSections:] */

void FUN_108f84a04(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_208 [8];
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = *(long *)(param_2 + 0x58);
  _objc_retain(lVar9);
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010c2827c0(*(undefined8 *)(lStack_128 + lVar11 * 8));
        uVar12 = param_1;
        func_0x00010bece0a0(param_2);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      lVar2 = lVar9;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined **)(param_2 + 0x58) = puVar1;
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(uVar8);
  puVar4 = (undefined1 *)puVar6;
  func_0x00010bf529e0();
  if (puVar7 < puVar4) {
    _objc_initWeak(auStack_1b0,param_4);
    puVar4 = (undefined1 *)puVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf63d80();
    if (puVar5 == (undefined1 *)0x2) {
      uVar3 = *(undefined8 *)(param_4 + 0x48);
      puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1e8 = 0xc2000000;
      pcStack_1e0 = FUN_108f84d5c;
      puStack_1d8 = &UNK_11084d6b8;
      _objc_copyWeak(auStack_1c8,auStack_1b0);
      _objc_retain(puVar4);
      puStack_1d0 = puVar4;
      puStack_1c0 = puVar7;
      uStack_1b8 = uVar12;
      func_0x00010c0f7fc0(uVar3);
      _objc_release(puStack_1d0);
      _objc_destroyWeak(auStack_1c8);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar8);
      _objc_release(puVar1);
    }
    uVar3 = *(undefined8 *)(param_4 + 0x48);
    _objc_copyWeak(auStack_208,auStack_1b0);
    _objc_retain(puVar4);
    puStack_200 = puVar7;
    uStack_1f8 = uVar12;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_208);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_1b0);
  }
  _objc_release(uVar8);
  _objc_release(puVar6);
  return;
}



/* Entry: 108f84b60; end: 108f84d5b; -[SCCollectionViewSectionRenderingTracker _trackRenderingForCollectionViewSections:index:unrenderedIndexes:timestamp:] */

void FUN_108f84b60(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [8];
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (param_5 < uVar1) {
    _objc_initWeak(auStack_80,param_2);
    uVar1 = param_4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf63d80();
    if (uVar2 == 2) {
      uVar4 = *(undefined8 *)(param_2 + 0x48);
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_108f84d5c;
      puStack_a8 = &UNK_11084d6b8;
      _objc_copyWeak(auStack_98,auStack_80);
      _objc_retain(uVar1);
      uStack_a0 = uVar1;
      uStack_90 = param_5;
      uStack_88 = param_1;
      func_0x00010c0f7fc0(uVar4);
      _objc_release(uStack_a0);
      _objc_destroyWeak(auStack_98);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(param_6);
      _objc_release(puVar3);
    }
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    _objc_copyWeak(auStack_d8,auStack_80);
    _objc_retain(uVar1);
    uStack_d0 = param_5;
    uStack_c8 = param_1;
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_d8);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 108f84d5c; end: 108f84dd3;  */

void FUN_108f84d5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdffec0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f84dd4; end: 108f84f4f; -[SCCollectionViewSectionRenderingTracker _didRenderSection:index:withTimestamp:] */

void FUN_108f84dd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x18);
  func_0x00010c260ae0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar2 = *(long *)(param_2 + 0x18);
    func_0x00010c155f80(lVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_3,lVar2,puVar3);
      _objc_release(puVar3);
      lVar4 = *(long *)(param_2 + 0x28);
      func_0x00010c0e00e0(lVar4,param_3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,puVar3,lVar2);
        _objc_release(puVar3);
      }
      lVar4 = *(long *)(param_2 + 0x30);
      func_0x00010c0e00e0(lVar4,param_3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        uVar5 = *(undefined8 *)(param_2 + 0x18);
        func_0x00010c29dbe0(uVar5,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x30),param_3,uVar5,lVar2);
        _objc_release(uVar5);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108f84f50; end: 108f851d3; -[SCCollectionViewSectionRenderingTracker _didRenderMultisections:index:withTimestamp:] */

undefined8 *
FUN_108f84f50(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  undefined *puVar16;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long lVar17;
  undefined **unaff_x28;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x18);
  puVar11 = param_4;
  func_0x00010c260ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar1;
  func_0x00010bf529e0();
  puVar15 = param_5;
  if (lVar17 != 0) {
    unaff_x22 = *(long *)(param_2 + 0x18);
    puVar11 = param_4;
    func_0x00010c155f80();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = unaff_x22;
    func_0x00010c08fa60();
    if (lVar17 != 0) {
      unaff_x24 = *(undefined8 *)(param_2 + 0x38);
      unaff_x28 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(unaff_x24,param_3,unaff_x22,puVar15);
      _objc_release(puVar15);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c29dbe0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      uStack_150 = uVar2;
      lStack_148 = unaff_x22;
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x30),param_3,uVar2,unaff_x22);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      puStack_130 = (undefined8 *)0x0;
      _objc_retain(lVar1);
      puVar11 = &uStack_140;
      lVar17 = lVar1;
      func_0x00010bf52a60();
      if (lVar17 != 0) {
        puVar15 = (undefined *)*puStack_130;
        do {
          lVar13 = 0;
          do {
            if ((undefined *)*puStack_130 != puVar15) {
              _objc_enumerationMutation(lVar1);
            }
            puVar16 = *(undefined **)(lStack_138 + lVar13 * 8);
            puVar3 = puVar16;
            func_0x00010bf63d80();
            unaff_x25 = puVar16;
            if (puVar3 == (undefined *)0x2) {
              unaff_x26 = puVar16;
              func_0x00010bf4abe0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = unaff_x26;
              func_0x00010bf529e0();
              _objc_release(unaff_x26);
              if (unaff_x27 != (undefined *)0x0) {
                unaff_x25 = *(undefined **)(param_2 + 0x18);
                func_0x00010c155fa0(unaff_x25,param_3,puVar16);
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = *(undefined **)(param_2 + 0x28);
                func_0x00010c0e00e0(unaff_x26,param_3,unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (unaff_x26 == (undefined *)0x0) {
                  unaff_x26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df720(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x28),param_3,unaff_x26,unaff_x25);
                  _objc_release(unaff_x26);
                }
                _objc_release(unaff_x25);
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar17 != lVar13);
          puVar11 = &uStack_140;
          lVar17 = lVar1;
          func_0x00010bf52a60();
          unaff_x24 = 0;
        } while (lVar17 != 0);
      }
      _objc_release(lVar1);
      _objc_release(uStack_150);
      unaff_x22 = lStack_148;
    }
    _objc_release(unaff_x22);
  }
  _objc_release(lVar1);
  puVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_108f851d4;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  uStack_190 = unaff_x24;
  puStack_188 = puVar15;
  lStack_180 = unaff_x22;
  lStack_178 = param_2;
  lStack_170 = lVar1;
  puStack_168 = param_4;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  _objc_retain(puVar11);
  puVar6 = puVar11;
  func_0x00010bf52a60(puVar11,param_3,&uStack_280,auStack_240,0x10);
  if (puVar6 != (undefined8 *)0x0) {
    lVar17 = *plStack_270;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_270 != lVar17) {
          _objc_enumerationMutation(puVar11);
        }
        puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar2 = *(undefined8 *)(lStack_278 + (long)puVar12 * 8);
        func_0x00010c1554e0(uVar2);
        func_0x00010c0df780(puVar15,param_3,uVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = puVar4[7];
        func_0x00010c0e00e0(lVar1,param_3,puVar15);
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 != 0) {
          ppuVar7 = ppuVar5;
          func_0x00010c0e00e0(ppuVar5,param_3,lVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1218;
          if (ppuVar7 != (undefined **)0x0) {
            ppuVar10 = ppuVar7;
          }
          ppuVar7 = ppuVar10;
          func_0x00010c282760(ppuVar10);
          func_0x00010c0df820(puVar3,param_3,(int)ppuVar7 + 1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar10);
          func_0x00010c1d0640(ppuVar5,param_3,puVar3,lVar1);
          _objc_release(puVar3);
        }
        _objc_release(lVar1);
        _objc_release(puVar15);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar6 != puVar12);
      puVar6 = puVar11;
      func_0x00010bf52a60(puVar11,param_3,&uStack_280,auStack_240,0x10);
    } while (puVar6 != (undefined8 *)0x0);
  }
  _objc_release(puVar11);
  uVar14 = puVar4[8];
  uVar2 = puVar4[6];
  func_0x00010bf51e00(uVar2);
  uVar8 = puVar4[4];
  func_0x00010bf51e00(uVar8);
  uVar9 = puVar4[5];
  func_0x00010bf51e00(uVar9);
  ppuVar10 = ppuVar5;
  func_0x00010bf51e00(ppuVar5);
  func_0x00010c156b80(uVar14,param_3,uVar2,uVar8,uVar9,ppuVar10);
  _objc_release(ppuVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(ppuVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return puVar11;
  }
  ___stack_chk_fail();
  return (undefined8 *)(ulong)*(byte *)(puVar11 + 0xc);
}



/* Entry: 108f851d4; end: 108f8542f; -[SCCollectionViewSectionRenderingTracker _announceOnRenderingCompletionWithVisibleIndexPaths:] */

ulong FUN_108f851d4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
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
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (uVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      uVar11 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = *(undefined8 *)(lStack_128 + uVar11 * 8);
        func_0x00010c1554e0(uVar3);
        func_0x00010c0df780(puVar4,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(param_1 + 0x38);
        func_0x00010c0e00e0(lVar5,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          ppuVar6 = ppuVar1;
          func_0x00010c0e00e0(ppuVar1,param_2,lVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1218;
          if (ppuVar6 != (undefined **)0x0) {
            ppuVar10 = ppuVar6;
          }
          ppuVar6 = ppuVar10;
          func_0x00010c282760(ppuVar10);
          func_0x00010c0df820(puVar7,param_2,(int)ppuVar6 + 1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar10);
          func_0x00010c1d0640(ppuVar1,param_2,puVar7,lVar5);
          _objc_release(puVar7);
        }
        _objc_release(lVar5);
        _objc_release(puVar4);
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
      uVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (uVar2 != 0);
  }
  _objc_release(param_3);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar9);
  ppuVar10 = ppuVar1;
  func_0x00010bf51e00(ppuVar1);
  func_0x00010c156b80(uVar12,param_2,uVar3,uVar8,uVar9,ppuVar10);
  _objc_release(ppuVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(param_3 + 0x60);
}



/* Entry: 108f85430; end: 108f85437; -[SCCollectionViewSectionRenderingTracker areSectionsRendered] */

undefined1 FUN_108f85430(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 108f85438; end: 108f854d3; -[SCCollectionViewSectionRenderingTracker .cxx_destruct] */

void FUN_108f85438(long param_1)

{
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



/* Entry: 108f854d4; end: 108f855ef; -[SCCollectionViewSectionSeenCellTracker initWithPerformer:seenSource:] */

undefined1 *
FUN_108f854d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff820;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f855f0; end: 108f855ff; -[SCCollectionViewSectionSeenCellTracker startMonitoringSeenEvents:] */

void FUN_108f855f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_addListener__11259c008,param_1);
  return;
}



/* Entry: 108f85600; end: 108f8560f; -[SCCollectionViewSectionSeenCellTracker stopMonitoringSeenEvents:] */

void FUN_108f85600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_removeListener__112628e00,param_1);
  return;
}



/* Entry: 108f85610; end: 108f85627; -[SCCollectionViewSectionSeenCellTracker sectionToSeenViewModelsMapping] */

void FUN_108f85610(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f85628; end: 108f8563f; -[SCCollectionViewSectionSeenCellTracker sectionToSeenVisibilityMapping] */

void FUN_108f85628(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f85640; end: 108f85657; -[SCCollectionViewSectionSeenCellTracker sectionToSeenContactMapping] */

void FUN_108f85640(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f85658; end: 108f856ef; -[SCCollectionViewSectionSeenCellTracker reset] */

void FUN_108f85658(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f856f0; end: 108f8584b; -[SCCollectionViewSectionSeenCellTracker didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_108f856f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c155fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 8);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(lVar1);
      _objc_retain(param_5);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(param_5);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108f8584c; end: 108f8587f;  */

void FUN_108f8584c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f85880; end: 108f85e0b; -[SCCollectionViewSectionSeenCellTracker _onNewSeenRecipientWithSectionIdentifier:extraData:] */

void FUN_108f85880(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_opt_class(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  if (uVar2 != 0) {
    func_0x00010c142240();
    uVar5 = uVar1;
    func_0x00010bf529e0();
    if (uVar4 < uVar5) {
      lVar6 = *(long *)(param_1 + 0x18);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        puVar7 = PTR_PTR_1126d1ec8;
        _objc_alloc(PTR_PTR_1126d1ec8);
        func_0x00010c0114a0();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
        _objc_release(puVar7);
        puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18));
        _objc_release(puVar7);
        puVar7 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        func_0x00010c0ecd20(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
        _objc_release(puVar7);
        _objc_release(puVar3);
      }
      uVar4 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_1 + 0x10);
      func_0x00010c122ba0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        uVar8 = *(ulong *)(param_1 + 0x18);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar8;
        func_0x00010bf4b900();
        _objc_release(uVar8);
        if ((uVar5 & 1) == 0) {
          uVar9 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c0e00e0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(uVar9);
          uVar9 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0e00e0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(uVar9);
          uVar8 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          _objc_opt_class(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          uVar10 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar3);
          uVar5 = uVar8;
          if ((uVar10 & 1) == 0) {
            uVar5 = 0;
          }
          _objc_retain(uVar5);
          _objc_release(uVar8);
          if (uVar5 != 0) {
            uVar10 = param_4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar11 = uVar10;
            _objc_opt_isKindOfClass(uVar10,puVar3);
            uVar5 = uVar10;
            if ((uVar11 & 1) == 0) {
              uVar5 = 0;
            }
            _objc_retain(uVar5);
            _objc_release(uVar10);
            if (uVar5 != 0) {
              func_0x00010c067fc0(uVar10);
            }
            puVar3 = PTR_PTR_1126d1ed0;
            _objc_alloc();
            func_0x00010c01d880();
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar7;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            if (puVar12 != (undefined *)0x0) {
              uVar18 = uVar9;
              func_0x00010bf9e840(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640();
              _objc_release(uVar18);
              uVar10 = param_3;
              func_0x00010c071ae0();
              if (((uVar10 & 1) != 0) || (uVar10 = param_3, func_0x00010c071ae0(), (int)uVar10 != 0)
                 ) {
                puVar7 = PTR_PTR_1126b52c0;
                _objc_retain(uVar4);
                _objc_opt_class(puVar7);
                uVar11 = uVar4;
                _objc_opt_isKindOfClass(uVar4,puVar7);
                uVar10 = uVar4;
                if ((uVar11 & 1) == 0) {
                  uVar10 = 0;
                }
                _objc_retain(uVar10);
                _objc_release(uVar4);
                uVar11 = uVar10;
                func_0x00010bfecc60();
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar11;
                func_0x00010c15a7a0();
                _objc_retainAutoreleasedReturnValue();
                uVar14 = uVar13;
                func_0x00010c122a80();
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar14;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar16 = uVar15;
                func_0x00010c15ab60();
                _objc_retainAutoreleasedReturnValue();
                uVar17 = uVar16;
                func_0x00010c0720c0();
                _objc_release(uVar16);
                _objc_release(uVar15);
                _objc_release(uVar14);
                _objc_release(uVar13);
                _objc_release(uVar11);
                if ((int)uVar17 != 0) {
                  uVar19 = *(undefined8 *)(param_1 + 0x30);
                  uVar18 = *(undefined8 *)(param_1 + 0x10);
                  func_0x00010bf49d60(uVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(uVar19);
                  _objc_release(uVar18);
                }
                _objc_release(uVar10);
              }
            }
            _objc_release(puVar12);
            _objc_release(uVar9);
            _objc_release(puVar3);
            _objc_release(uVar5);
            _objc_release(uVar8);
          }
        }
      }
      _objc_release(lVar6);
      _objc_release(uVar4);
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f85e0c; end: 108f85e6b; -[SCCollectionViewSectionSeenCellTracker .cxx_destruct] */

void FUN_108f85e0c(long param_1)

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



/* Entry: 108f85e6c; end: 108f85f37; -[SCSearchQueryTextFieldHandler initWithQueryResultController:collectionView:indexView:] */

undefined1 *
FUN_108f85e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ff828;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f85f38; end: 108f8603b; -[SCSearchQueryTextFieldHandler textField:shouldChangeCharactersInRange:replacementString:] */

undefined8
FUN_108f85f38(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_7);
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  func_0x00010c1e6360(*(undefined8 *)(param_2 + 8),param_3,puVar2);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf4c7c0(uVar4);
  func_0x00010c182300(0,-param_1,uVar4,param_3,0);
  lVar3 = lVar1;
  func_0x00010c08fa60(lVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + 0x18),param_3,lVar3 != 0);
  _objc_release(lVar1);
  return 1;
}



/* Entry: 108f8603c; end: 108f86043; -[SCSearchQueryTextFieldHandler textFieldDidEndEditing:] */

void FUN_108f8603c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 108f86044; end: 108f860ab; -[SCSearchQueryTextFieldHandler textFieldShouldClear:] */

undefined8 FUN_108f86044(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  func_0x00010c1e6360(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x18),param_2,0);
  return 1;
}



/* Entry: 108f860ac; end: 108f860c7; -[SCSearchQueryTextFieldHandler textFieldShouldReturn:] */

undefined8 FUN_108f860ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c13a0e0(param_3);
  return 1;
}



/* Entry: 108f860c8; end: 108f86103; -[SCSearchQueryTextFieldHandler .cxx_destruct] */

void FUN_108f860c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f86104; end: 108f863cb; -[SCConfigurableCollectionViewSectionHeader setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f86104(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e8f4;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  uVar1 = param_3;
  if (uVar5 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_108f863b0;
    }
    puVar2 = PTR_PTR_1126b55e0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar5 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    uVar1 = uVar5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    uVar1 = uVar5;
    func_0x00010c06ef40();
    if ((int)uVar1 != 0) {
      puVar2 = PTR_PTR_1126dcbe0;
      func_0x00010c22ba80(PTR_PTR_1126dcbe0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2074a0(param_1);
      _objc_release(puVar2);
    }
    func_0x00010bfcf7e0(uVar5);
    func_0x00010c20eaa0(param_1);
    uVar1 = uVar5;
    func_0x00010c2711a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c27f7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010c2711a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c27f7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010c260dc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c27f7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f6c0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010beed3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      func_0x00010c27f7c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161640();
      uVar1 = param_1;
    }
    else {
      uVar1 = uVar5;
      func_0x00010beed3c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bc600();
    }
  }
  _objc_release(uVar1);
  _objc_release(uVar5);
LAB_108f863b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f863cc; end: 108f86467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f863cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277e8f8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277e8f8) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27f7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161640();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f86468; end: 108f86547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f86468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277e8f8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277e8f8) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27f7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174740(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f86548; end: 108f86763; +[SCConfigurableCollectionViewSectionHeader sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_108f86548(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126b55e0;
  _objc_opt_class(PTR_PTR_1126b55e0);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar1 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  uVar4 = uVar1;
  func_0x00010beed3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  dVar7 = 1.60807493534087e-314;
  func_0x00010c0bc600();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c06ef40();
  puVar3 = PTR_PTR_1126b78f0;
  uVar6 = uVar1;
  if ((int)uVar4 == 0) {
    func_0x00010c260dc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = param_1;
    func_0x00010bfe0a40(param_1,puVar3);
  }
  else {
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    cVar2 = *(char *)(puStack_68 + 3);
    _objc_retain();
    puVar3 = PTR_PTR_1126dcbe0;
    func_0x00010c22ba80(PTR_PTR_1126dcbe0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2740();
    if (uVar6 != 0) {
      puVar5 = PTR_PTR_1126b78f0;
      dVar7 = param_1;
      func_0x00010c0781a0();
      if ((int)puVar5 == 0) {
        func_0x00010bdc2780(puVar3);
      }
      else {
        func_0x00010bdc2760(puVar3);
      }
    }
    dVar8 = dVar7;
    if ((cVar2 != '\0') && (func_0x00010bdc2720(puVar3), dVar8 <= dVar7)) {
      dVar8 = dVar7;
    }
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  _objc_release(uVar6);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  auVar9._8_8_ = dVar8;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 108f86764; end: 108f8677b;  */

void FUN_108f86764(void)

{
  return;
}



/* Entry: 108f8677c; end: 108f867a7; -[SCConfigurableCollectionViewSectionHeader _handleAccessoryAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8677c(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277e8f8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11277e8fc),
               PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
               *(long *)(param_1 + _DAT_11277e8f8),param_1);
    return;
  }
  return;
}



/* Entry: 108f867a8; end: 108f86933; -[SCConfigurableCollectionViewSectionHeader applyLayoutAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f867a8(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126ff830;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_applyLayoutAttributes__112527ed0,param_4);
  puVar2 = PTR_PTR_1126b55e0;
  uVar5 = *(ulong *)(param_2 + _DAT_11277e8f4);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b56f0;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar5 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar3 = param_4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_4);
  uVar5 = uVar1;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c08fa60();
  if (uVar4 == 0) {
    _objc_release(uVar5);
  }
  else {
    func_0x00010bfdfea0(uVar3);
    _objc_release(uVar5);
    if (0.0 < param_1) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108f868e8;
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
LAB_108f868e8:
  func_0x00010c16e440(param_2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 108f86934; end: 108f86943; -[SCConfigurableCollectionViewSectionHeader viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f86934(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e8f4);
}



/* Entry: 108f86944; end: 108f86953; -[SCConfigurableCollectionViewSectionHeader actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f86944(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e8fc);
}



/* Entry: 108f86954; end: 108f86993; -[SCConfigurableCollectionViewSectionHeader setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f86954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e8fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f86994; end: 108f869e3; -[SCConfigurableCollectionViewSectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f86994(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e8fc,0);
  _objc_storeStrong(param_1 + _DAT_11277e8f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e8f8,0);
  return;
}



/* Entry: 108f869e4; end: 108f86a27; -[SCSelectionItem SIGSelectBarItemTitle] */

void FUN_108f869e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d5140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f86a28; end: 108f86aef; -[SCSelectionItem SIGSelectBarItemType] */

undefined8 FUN_108f86a28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (lRam0000000113730480 != -1) {
    func_0x000107c27d9c(0x113730480,&PTR___NSConcreteGlobalBlock_110acf820);
  }
  func_0x00010c122a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uRam0000000113730488;
  func_0x00010c0e00e0(uRam0000000113730488);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2827c0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 108f86af0; end: 108f86c17;  */

undefined *** FUN_108f86af0(void)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
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
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1230;
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1230;
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1248;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1278;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1290;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1260;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1230;
  pppuVar6 = &ppuStack_c0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuRam0000000113730488;
  pppuRam0000000113730488 = (undefined ***)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar6);
  if (pppuVar2 == pppuVar6) {
    pppuVar7 = (undefined ***)0x1;
  }
  else {
    pppuVar7 = (undefined ***)0x0;
    if ((pppuVar2 != (undefined ***)0x0) && (pppuVar6 != (undefined ***)0x0)) {
      pppuVar7 = pppuVar2;
      _objc_opt_class(pppuVar2);
      pppuVar3 = pppuVar6;
      _objc_opt_isKindOfClass(pppuVar6,pppuVar7);
      if (((ulong)pppuVar3 & 1) == 0) {
        pppuVar7 = (undefined ***)0x0;
      }
      else {
        func_0x00010c122a80(pppuVar2);
        _objc_retainAutoreleasedReturnValue();
        pppuVar3 = pppuVar2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar4 = pppuVar6;
        func_0x00010c122a80(pppuVar6);
        _objc_retainAutoreleasedReturnValue();
        pppuVar5 = pppuVar4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar7 = pppuVar3;
        func_0x00010c071ae0(pppuVar3);
        _objc_release(pppuVar5);
        _objc_release(pppuVar4);
        _objc_release(pppuVar3);
        _objc_release(pppuVar2);
      }
    }
  }
  _objc_release(pppuVar6);
  return pppuVar7;
}



/* Entry: 108f86c18; end: 108f86d0f; -[SCSelectionItem isSelectBarItemEqual:] */

ulong FUN_108f86c18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar4 = param_1;
      _objc_opt_class(param_1);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar4);
      if ((uVar1 & 1) == 0) {
        uVar4 = 0;
      }
      else {
        func_0x00010c122a80(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c122a80(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c071ae0(uVar1);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(param_1);
      }
    }
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108f86d10; end: 108f86d6b; -[SCSelectionItem selectBarItemHash] */

undefined8 FUN_108f86d10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f86d6c; end: 108f86d9b; -[SCSelectionItem accessibilityIdentifier] */

void FUN_108f86d6c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f02e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f02e58);
  return;
}



/* Entry: 108f86d9c; end: 108f86e93; -[SCSelectionItem customIcon] */

void FUN_108f86d9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    func_0x00010c122a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c122b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_108f94c24();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
    FUN_108f9240c(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f86e94; end: 108f86e97; -[SCSelectionParticipant pillText] */

void FUN_108f86e94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_nameToDisplay_112612e68);
  return;
}



/* Entry: 108f86e98; end: 108f86f3b; -[SCSectionKitDropdownButtonViewModel onlyVisibleWhenSelected] */

undefined1 FUN_108f86e98(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108f86f3c;
  puStack_50 = &UNK_110acda20;
  puStack_38 = puStack_48;
  func_0x00010c0bd2e0(param_1,param_2,&puStack_68,0);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 108f86f3c; end: 108f86f4f;  */

void FUN_108f86f3c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108f86f50; end: 108f87033; -[SCSectionKitDropdownButtonViewModel actionModel] */

void FUN_108f86f50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108f87034;
  uStack_30 = 0x108f87044;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108f8704c;
  puStack_60 = &UNK_110acda20;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x108f87084;
  puStack_88 = &UNK_110acf840;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0bd2e0(param_1,param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f87034; end: 108f8704b;  */

void FUN_108f87034(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f8704c; end: 108f870bb;  */

void FUN_108f8704c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f870bc; end: 108f87223; -[SCSectionKitAvatarViewProvider setViewModel:] */

void FUN_108f870bc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar6 = *(ulong *)(param_1 + 8);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  uVar2 = param_3;
  if (uVar6 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar6);
    }
    else {
      uVar2 = uVar6;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar6);
      if ((uVar2 & 1) != 0) goto LAB_108f8720c;
    }
    puVar3 = PTR_PTR_1126c2678;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar2 = uVar1;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = uVar2;
    _objc_release(uVar5);
    uVar6 = param_1 + 0x10;
    _objc_loadWeakRetained();
    puVar3 = PTR_PTR_1126b1a08;
    _objc_opt_class(PTR_PTR_1126b1a08);
    uVar4 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar2 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar6);
    func_0x00010c18b5e0(uVar2);
    uVar6 = uVar1;
    func_0x00010bf13300(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c2226c0(uVar2);
  }
  _objc_release(uVar2);
  _objc_release(uVar6);
LAB_108f8720c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f87224; end: 108f87227; -[SCSectionKitAvatarViewProvider handleTapOnBitmojiFromAvatarView:] */

void FUN_108f87224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be26290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAvatarAction_112567240);
  return;
}



/* Entry: 108f87228; end: 108f8722b; -[SCSectionKitAvatarViewProvider handleTapOnStoryIconFromAvatarView:] */

void FUN_108f87228(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be26290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAvatarAction_112567240);
  return;
}



/* Entry: 108f8722c; end: 108f8722f; -[SCSectionKitAvatarViewProvider handleLongPressOnStoryIconFromAvatarView:] */

void FUN_108f8722c(void)

{
  return;
}



/* Entry: 108f87230; end: 108f87307; -[SCSectionKitAvatarViewProvider _handleAvatarAction] */

void FUN_108f87230(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126c2678;
  uVar5 = *(ulong *)(param_1 + 8);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010beeecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    lVar4 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar4);
    uVar3 = uVar1;
    func_0x00010beeecc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd00e0(lVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f87308; end: 108f8730f; -[SCSectionKitAvatarViewProvider viewModel] */

undefined8 FUN_108f87308(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f87310; end: 108f87327; -[SCSectionKitAvatarViewProvider accessoryView] */

void FUN_108f87310(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f87328; end: 108f87333; -[SCSectionKitAvatarViewProvider setAccessoryView:] */

void FUN_108f87328(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108f87334; end: 108f8734b; -[SCSectionKitAvatarViewProvider actionHandlingDelegate] */

void FUN_108f87334(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8734c; end: 108f87357; -[SCSectionKitAvatarViewProvider setActionHandlingDelegate:] */

void FUN_108f8734c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108f87358; end: 108f8738b; -[SCSectionKitAvatarViewProvider .cxx_destruct] */

void FUN_108f87358(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


