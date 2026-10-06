/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ea02d8; end: 107ea02df; -[IGListBatchUpdateTransaction setMode:] */

void FUN_107ea02d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 107ea02e0; end: 107ea02e7; -[IGListBatchUpdateTransaction actualCollectionViewUpdates] */

undefined8 FUN_107ea02e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107ea02e8; end: 107ea0317; -[IGListBatchUpdateTransaction setActualCollectionViewUpdates:] */

void FUN_107ea02e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ea0318; end: 107ea039f; -[IGListBatchUpdateTransaction .cxx_destruct] */

void FUN_107ea0318(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107ea03a0; end: 107ea047f; -[IGListBindingSectionController debugDescription] */

void FUN_107ea03a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ec20f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a100(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf660c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_107ea0a1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  puVar1 = puVar2;
  func_0x00010bf446e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db2db8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ea0480; end: 107ea049b; -[IGListBindingSectionController debugDescriptionLines] */

void FUN_107ea0480(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ea049c; end: 107ea056b; -[IGListDataSourceChangeTransaction initWithChangeBlock:itemUpdateBlocks:completionBlocks:] */

undefined1 *
FUN_107ea049c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fb8a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 107ea056c; end: 107ea0573; -[IGListDataSourceChangeTransaction state] */

undefined8 FUN_107ea056c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107ea0574; end: 107ea07d3; -[IGListDataSourceChangeTransaction begin] */

long FUN_107ea0574(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x28) = 2;
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))();
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  *(undefined8 *)(param_1 + 0x28) = 3;
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),1);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf51e00();
  _objc_retain();
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),1);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return lVar4;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 107ea07d4; end: 107ea07db; -[IGListDataSourceChangeTransaction cancel] */

undefined8 FUN_107ea07d4(void)

{
  return 0;
}



/* Entry: 107ea07dc; end: 107ea07df; -[IGListDataSourceChangeTransaction insertItemsAtIndexPaths:] */

void FUN_107ea07dc(void)

{
  return;
}



/* Entry: 107ea07e0; end: 107ea07e3; -[IGListDataSourceChangeTransaction deleteItemsAtIndexPaths:] */

void FUN_107ea07e0(void)

{
  return;
}



/* Entry: 107ea07e4; end: 107ea07e7; -[IGListDataSourceChangeTransaction moveItemFromIndexPath:toIndexPath:] */

void FUN_107ea07e4(void)

{
  return;
}



/* Entry: 107ea07e8; end: 107ea07eb; -[IGListDataSourceChangeTransaction reloadItemFromIndexPath:toIndexPath:] */

void FUN_107ea07e8(void)

{
  return;
}



/* Entry: 107ea07ec; end: 107ea07ef; -[IGListDataSourceChangeTransaction reloadSections:] */

void FUN_107ea07ec(void)

{
  return;
}



/* Entry: 107ea07f0; end: 107ea086b; -[IGListDataSourceChangeTransaction addCompletionBlock:] */

void FUN_107ea07f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  uVar2 = param_3;
  _objc_retainBlock(param_3);
  func_0x00010befa120(lVar3,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ea086c; end: 107ea08b3; -[IGListDataSourceChangeTransaction .cxx_destruct] */

void FUN_107ea086c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ea08b4; end: 107ea08b7; +[IGListDebugger trackAdapter:] */

void FUN_107ea08b4(void)

{
  return;
}



/* Entry: 107ea08b8; end: 107ea09c7; +[IGListDebugger adapterDescriptions] */

void FUN_107ea08b8(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = 0;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(0);
      }
      uVar4 = *(undefined8 *)(lVar6 * 8);
      func_0x00010bf660a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar4);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = 0;
    func_0x00010bf52a60();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107ea09c8; end: 107ea09cf; +[IGListDebugger clear] */

void FUN_107ea09c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107ea09d0; end: 107ea0a1b; +[IGListDebugger dump] */

void FUN_107ea09d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bef66e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ea0a1c; end: 107ea0b73;  */

undefined1 * FUN_107ea0a1c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uStack_140 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_170;
  pcStack_148 = FUN_107ea0b74;
  puStack_168 = PTR_PTR_1126fb8a8;
  lStack_170 = lVar2;
  puStack_160 = puVar1;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_170,PTR_s_init_1125d9248);
  if (plVar4 != (long *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)plVar4 + 8);
    *(undefined **)((long)plVar4 + 8) = puVar1;
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    _objc_alloc();
    func_0x00010c020e80();
    uVar5 = *(undefined8 *)((long)plVar4 + 0x10);
    *(undefined **)((long)plVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
  }
  return (undefined1 *)plVar4;
}



/* Entry: 107ea0b74; end: 107ea0c03; -[IGListDisplayHandler init] */

undefined1 * FUN_107ea0b74(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb8a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    _objc_alloc();
    func_0x00010c020e80();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ea0c04; end: 107ea0c7b; -[IGListDisplayHandler _pluckObjectForView:] */

void FUN_107ea0c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c2a01a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(param_1,param_2,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ea0c7c; end: 107ea0daf; -[IGListDisplayHandler _willDisplayReusableView:forListAdapter:sectionController:object:indexPath:] */

void FUN_107ea0c7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c2a01a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010c29fea0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52b00();
  if (lVar1 == 0) {
    func_0x00010c2a6220(param_5,param_2,param_4);
    uVar2 = param_4;
    func_0x00010bf6b020(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_7;
    func_0x00010c1554e0(param_7);
    func_0x00010c099ce0(uVar2,param_2,param_4,param_6,uVar3);
    _objc_release(uVar2);
  }
  func_0x00010befa120(param_1,param_2,param_5);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ea0db0; end: 107ea0e97; -[IGListDisplayHandler _didEndDisplayingReusableView:forListAdapter:sectionController:object:indexPath:] */

void FUN_107ea0db0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (param_6 != 0)) {
    func_0x00010c1554e0(param_7);
    func_0x00010c29fea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    lVar1 = param_1;
    func_0x00010bf52b00(param_1,param_2,param_5);
    if (lVar1 == 0) {
      func_0x00010bf75960(param_5,param_2,param_4);
      uVar2 = param_4;
      func_0x00010bf6b020(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099b80();
      _objc_release(uVar2);
    }
    _objc_release(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ea0e98; end: 107ea0e9b; -[IGListDisplayHandler willDisplaySupplementaryView:forListAdapter:sectionController:object:indexPath:] */

void FUN_107ea0e98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeb010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__willDisplayReusableView_forList_1125985a8);
  return;
}



/* Entry: 107ea0e9c; end: 107ea0f4f; -[IGListDisplayHandler didEndDisplayingSupplementaryView:forListAdapter:sectionController:indexPath:] */

void FUN_107ea0e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be753e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfd720(param_1,param_2,param_3,param_4,param_5,uVar1,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ea0f50; end: 107ea1013; -[IGListDisplayHandler willDisplayCell:forListAdapter:sectionController:object:indexPath:] */

void FUN_107ea0f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_7;
  func_0x00010c0840e0(param_7);
  func_0x00010c2a5fe0(param_5,param_2,param_3,uVar1,param_4);
  func_0x00010beeb000(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ea1014; end: 107ea10e7; -[IGListDisplayHandler didEndDisplayingCell:forListAdapter:sectionController:indexPath:] */

void FUN_107ea1014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010be753e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = param_6;
    func_0x00010c0840e0(param_6);
    func_0x00010bf75880(param_5,param_2,param_3,uVar2,param_4);
    func_0x00010bdfd720(param_1,param_2,param_3,param_4,param_5,lVar1,param_6);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ea10e8; end: 107ea10ef; -[IGListDisplayHandler visibleListSections] */

undefined8 FUN_107ea10e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ea10f0; end: 107ea10f7; -[IGListDisplayHandler visibleViewObjectMap] */

undefined8 FUN_107ea10f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ea10f8; end: 107ea1127; -[IGListDisplayHandler setVisibleViewObjectMap:] */

void FUN_107ea10f8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107ea1128; end: 107ea1157; -[IGListDisplayHandler .cxx_destruct] */

void FUN_107ea1128(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ea1158; end: 107ea121f; -[IGListItemUpdatesCollector init] */

undefined1 * FUN_107ea1158(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb8b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ea1220; end: 107ea1323; -[IGListItemUpdatesCollector hasChanges] */

bool FUN_107ea1220(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1;
  func_0x00010c156480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010c0846c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      lVar4 = param_1;
      func_0x00010c084840();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      if (lVar5 == 0) {
        lVar5 = param_1;
        func_0x00010c084a40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf529e0();
        if (lVar6 == 0) {
          func_0x00010c084260(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_1;
          func_0x00010bf529e0();
          bVar1 = lVar6 != 0;
          _objc_release(param_1);
        }
        else {
          bVar1 = true;
        }
        _objc_release(lVar5);
      }
      else {
        bVar1 = true;
      }
      _objc_release(lVar4);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 107ea1324; end: 107ea132b; -[IGListItemUpdatesCollector sectionReloads] */

undefined8 FUN_107ea1324(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ea132c; end: 107ea1333; -[IGListItemUpdatesCollector itemInserts] */

undefined8 FUN_107ea132c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ea1334; end: 107ea133b; -[IGListItemUpdatesCollector itemDeletes] */

undefined8 FUN_107ea1334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ea133c; end: 107ea1343; -[IGListItemUpdatesCollector itemReloads] */

undefined8 FUN_107ea133c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ea1344; end: 107ea134b; -[IGListItemUpdatesCollector itemMoves] */

undefined8 FUN_107ea1344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107ea134c; end: 107ea139f; -[IGListItemUpdatesCollector .cxx_destruct] */

void FUN_107ea134c(long param_1)

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



/* Entry: 107ea13a0; end: 107ea1443; -[IGListReloadIndexPath initWithFromIndexPath:toIndexPath:] */

undefined1 *
FUN_107ea13a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb8b8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ea1444; end: 107ea144b; -[IGListReloadIndexPath fromIndexPath] */

undefined8 FUN_107ea1444(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ea144c; end: 107ea1453; -[IGListReloadIndexPath toIndexPath] */

undefined8 FUN_107ea144c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ea1454; end: 107ea1483; -[IGListReloadIndexPath .cxx_destruct] */

void FUN_107ea1454(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ea1484; end: 107ea15f3; -[IGListReloadTransaction initWithCollectionViewBlock:updater:delegate:reloadBlock:itemUpdateBlocks:completionBlocks:] */

undefined1 *
FUN_107ea1484(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
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
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fb8c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_3;
      (**(code **)(param_3 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = lVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    uVar3 = param_6;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_7;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_8;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ea15f4; end: 107ea194b; -[IGListReloadTransaction begin] */

/* WARNING: Possible PIC construction at 0x000107ea187c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ea1880) */
/* WARNING: Removing unreachable block (ram,0x000107ea1898) */

long FUN_107ea15f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c28d720();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c099d80(lVar1);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
      ___stack_chk_fail();
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar6 = lVar1;
      func_0x00010bf44020();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar6);
          }
          (**(code **)(*(long *)(lVar7 * 8) + 0x10))(*(long *)(lVar7 * 8),lVar3);
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
        lVar4 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      lVar4 = lVar1;
      func_0x00010bfeb840();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf51e00();
      _objc_release(lVar4);
      _objc_retain(lVar6);
      lVar4 = lVar6;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar6);
          }
          (**(code **)(*(long *)(lVar7 * 8) + 0x10))(*(long *)(lVar7 * 8),lVar3);
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
        lVar4 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      func_0x00010c209fc0(lVar1);
      _objc_release(lVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return lVar6;
      }
      ___stack_chk_fail();
      return 0;
    }
  }
  else {
    func_0x00010c209fc0();
    lVar1 = param_1;
    func_0x00010c128aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c128aa0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      _objc_release(lVar1);
    }
    lVar2 = param_1;
    func_0x00010c084cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        (**(code **)(*(long *)(lVar6 * 8) + 0x10))();
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    func_0x00010c209fc0(param_1);
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c28d720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099e80(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf408e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c28d720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099dc0(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeCompletionBlocks__112560818,1);
  return param_1;
}



/* Entry: 107ea194c; end: 107ea1b23; -[IGListReloadTransaction _executeCompletionBlocks:] */

long FUN_107ea194c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),param_3);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar3 = param_1;
  func_0x00010bfeb840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf51e00();
  _objc_release(lVar3);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),param_3);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010c209fc0(param_1);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return lVar2;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 107ea1b24; end: 107ea1b2b; -[IGListReloadTransaction cancel] */

undefined8 FUN_107ea1b24(void)

{
  return 0;
}



/* Entry: 107ea1b2c; end: 107ea1b2f; -[IGListReloadTransaction insertItemsAtIndexPaths:] */

void FUN_107ea1b2c(void)

{
  return;
}



/* Entry: 107ea1b30; end: 107ea1b33; -[IGListReloadTransaction deleteItemsAtIndexPaths:] */

void FUN_107ea1b30(void)

{
  return;
}



/* Entry: 107ea1b34; end: 107ea1b37; -[IGListReloadTransaction moveItemFromIndexPath:toIndexPath:] */

void FUN_107ea1b34(void)

{
  return;
}



/* Entry: 107ea1b38; end: 107ea1b3b; -[IGListReloadTransaction reloadItemFromIndexPath:toIndexPath:] */

void FUN_107ea1b38(void)

{
  return;
}



/* Entry: 107ea1b3c; end: 107ea1b3f; -[IGListReloadTransaction reloadSections:] */

void FUN_107ea1b3c(void)

{
  return;
}



/* Entry: 107ea1b40; end: 107ea1be7; -[IGListReloadTransaction addCompletionBlock:] */

void FUN_107ea1b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfeb840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar2;
    _objc_release(uVar3);
  }
  func_0x00010bfeb840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  _objc_retainBlock(param_3);
  _objc_release(param_3);
  func_0x00010befa120(param_1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ea1be8; end: 107ea1bef; -[IGListReloadTransaction collectionView] */

undefined8 FUN_107ea1be8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ea1bf0; end: 107ea1c07; -[IGListReloadTransaction updater] */

void FUN_107ea1bf0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ea1c08; end: 107ea1c1f; -[IGListReloadTransaction delegate] */

void FUN_107ea1c08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ea1c20; end: 107ea1c27; -[IGListReloadTransaction reloadBlock] */

undefined8 FUN_107ea1c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ea1c28; end: 107ea1c2f; -[IGListReloadTransaction itemUpdateBlocks] */

undefined8 FUN_107ea1c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107ea1c30; end: 107ea1c37; -[IGListReloadTransaction completionBlocks] */

undefined8 FUN_107ea1c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107ea1c38; end: 107ea1c3f; -[IGListReloadTransaction state] */

undefined8 FUN_107ea1c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107ea1c40; end: 107ea1c47; -[IGListReloadTransaction setState:] */

void FUN_107ea1c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 107ea1c48; end: 107ea1c4f; -[IGListReloadTransaction inUpdateCompletionBlocks] */

undefined8 FUN_107ea1c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107ea1c50; end: 107ea1cb3; -[IGListReloadTransaction .cxx_destruct] */

void FUN_107ea1c50(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ea1cb4; end: 107ea1ccf; -[IGListSectionMap debugDescriptionLines] */

void FUN_107ea1cb4(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ea1cd0; end: 107ea1d8f; -[IGListSectionMap initWithMapTable:] */

undefined1 * FUN_107ea1cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb8c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    _objc_alloc();
    func_0x00010c020e80();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ea1d90; end: 107ea1dcb; -[IGListSectionMap objects] */

void FUN_107ea1d90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf51e00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ea1dcc; end: 107ea1e57; -[IGListSectionMap sectionForSectionController:] */

long FUN_107ea1dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c1558a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067fc0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 107ea1e58; end: 107ea1ed3; -[IGListSectionMap sectionControllerForSection:] */

void FUN_107ea1e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0e0200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0100(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ea1ed4; end: 107ea210b; -[IGListSectionMap updateWithObjects:sectionControllers:] */

void FUN_107ea1ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c137fe0(param_1);
  uVar1 = param_3;
  func_0x00010c0d3c80(param_3);
  func_0x00010c1c1400(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x107ea1ff8;
  puStack_68 = &UNK_110a10938;
  uStack_60 = param_4;
  uStack_58 = param_1;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(param_4);
  func_0x00010bf97e80(param_3,param_2,&puStack_80);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ea210c; end: 107ea2177; -[IGListSectionMap sectionControllerForObject:] */

void FUN_107ea210c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0e0200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ea2178; end: 107ea21db; -[IGListSectionMap objectForSection:] */

void FUN_107ea2178(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010c0b5ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ea21dc; end: 107ea223b; -[IGListSectionMap sectionForObject:] */

long FUN_107ea21dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_1 = 0x7fffffffffffffff;
  }
  else {
    lVar1 = param_1;
    func_0x00010c155800();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      param_1 = 0x7fffffffffffffff;
    }
    else {
      func_0x00010c155d60(param_1,param_2,lVar1);
    }
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 107ea223c; end: 107ea22eb; -[IGListSectionMap reset] */

void FUN_107ea223c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf980a0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a10988);
  uVar1 = param_1;
  func_0x00010c1558a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  func_0x00010c0e0200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ea22ec; end: 107ea23f7; -[IGListSectionMap updateObject:] */

void FUN_107ea22ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c155d20(param_1,param_2,param_3);
  uVar2 = param_1;
  func_0x00010c155800(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c1558a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3,param_2,puVar4,uVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  uVar1 = param_1;
  func_0x00010c0e0200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  func_0x00010c0b5ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ea23f8; end: 107ea24ef; -[IGListSectionMap enumerateUsingBlock:] */

void FUN_107ea23f8(ulong param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char cStack_51;
  
  _objc_retain(param_3);
  cStack_51 = '\0';
  uVar2 = param_1;
  func_0x00010c0e0300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar3 = uVar2;
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c155800(param_1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_3 + 0x10))(param_3,uVar3,uVar4,uVar5,&cStack_51);
      cVar1 = cStack_51;
      _objc_release(uVar4);
      _objc_release(uVar3);
      if (cVar1 == '\x01') break;
      uVar5 = uVar5 + 1;
      uVar3 = uVar2;
      func_0x00010bf529e0();
    } while (uVar5 < uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107ea24f0; end: 107ea25b7; -[IGListSectionMap copyWithZone:] */

undefined * FUN_107ea24f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8118;
  func_0x00010bf00e40();
  uVar2 = param_1;
  func_0x00010c0e0200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028740(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_1;
    func_0x00010c1558a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c0b5ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0d3c80();
    uVar4 = *(undefined8 *)(puVar1 + 0x18);
    *(undefined8 *)(puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    _objc_release(param_1);
  }
  return puVar1;
}



/* Entry: 107ea25b8; end: 107ea25bf; -[IGListSectionMap objectToSectionControllerMap] */

undefined8 FUN_107ea25b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ea25c0; end: 107ea25c7; -[IGListSectionMap sectionControllerToSectionMap] */

undefined8 FUN_107ea25c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ea25c8; end: 107ea25cf; -[IGListSectionMap mObjects] */

undefined8 FUN_107ea25c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ea25d0; end: 107ea25ff; -[IGListSectionMap setMObjects:] */

void FUN_107ea25d0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107ea2600; end: 107ea263b; -[IGListSectionMap .cxx_destruct] */

void FUN_107ea2600(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ea263c; end: 107ea26bf; -[IGListUpdateTransactionBuilder init] */

undefined1 * FUN_107ea263c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb8d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 1;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ea26c0; end: 107ea27db; -[IGListUpdateTransactionBuilder addSectionBatchUpdateAnimated:collectionViewBlock:sectionDataBlock:applySectionDataBlock:completion:] */

void FUN_107ea26c0(ulong param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0cfd40(param_1);
  func_0x00010c1c8c60(param_1,param_2,uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU));
  uVar1 = param_1;
  func_0x00010bf034a0(param_1);
  func_0x00010c167e40(param_1,param_2,param_3 & (uint)uVar1);
  func_0x00010c17e6c0(param_1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1f9200(param_1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c169c40(param_1,param_2,param_6);
  _objc_release(param_6);
  lVar2 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  if (lVar2 != 0) {
    func_0x00010bf44020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    _objc_retainBlock(lVar2);
    func_0x00010befa120(param_1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107ea27dc; end: 107ea2907; -[IGListUpdateTransactionBuilder addItemBatchUpdateAnimated:collectionViewBlock:itemUpdates:completion:] */

void FUN_107ea27dc(ulong param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0cfd40(param_1);
  func_0x00010c1c8c60(param_1,param_2,uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU));
  uVar1 = param_1;
  func_0x00010bf034a0(param_1);
  func_0x00010c167e40(param_1,param_2,param_3 & (uint)uVar1);
  func_0x00010c17e6c0(param_1,param_2,param_4);
  _objc_release(param_4);
  uVar1 = param_1;
  func_0x00010c084cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  _objc_retainBlock(param_5);
  _objc_release(param_5);
  func_0x00010befa120(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  if (lVar3 != 0) {
    func_0x00010bf44020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    _objc_retainBlock(lVar3);
    func_0x00010befa120(param_1,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107ea2908; end: 107ea29e7; -[IGListUpdateTransactionBuilder addReloadDataWithCollectionViewBlock:reloadBlock:completion:] */

void FUN_107ea2908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0cfd40();
  if (lVar1 < 2) {
    lVar1 = 1;
  }
  func_0x00010c1c8c60(param_1,param_2,lVar1);
  func_0x00010c17e6c0(param_1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1e9c40(param_1,param_2,param_4);
  _objc_release(param_4);
  lVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  if (lVar1 != 0) {
    func_0x00010bf44020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_retainBlock(lVar1);
    func_0x00010befa120(param_1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ea29e8; end: 107ea2a3b; -[IGListUpdateTransactionBuilder addDataSourceChange:] */

void FUN_107ea29e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0cfd40();
  if (lVar1 < 3) {
    lVar1 = 2;
  }
  func_0x00010c1c8c60(param_1,param_2,lVar1);
  func_0x00010c189860(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ea2a3c; end: 107ea2ca7; -[IGListUpdateTransactionBuilder addChangesFromBuilder:] */

void FUN_107ea2a3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = param_1;
    func_0x00010c0cfd40();
    lVar1 = param_3;
    func_0x00010c0cfd40();
    if (lVar2 <= lVar1) {
      lVar2 = lVar1;
    }
    func_0x00010c1c8c60(param_1,param_2,lVar2);
    lVar2 = param_1;
    func_0x00010bf034a0();
    if ((int)lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_3;
      func_0x00010bf034a0(param_3);
    }
    func_0x00010c167e40(param_1,param_2,lVar2);
    lVar2 = param_1;
    func_0x00010c1559a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010c1559a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f9200(param_1,param_2,lVar1);
      _objc_release(lVar1);
    }
    else {
      func_0x00010c1f9200(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf08840();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010bf08840(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c169c40(param_1,param_2,lVar1);
      _objc_release(lVar1);
    }
    else {
      func_0x00010c169c40(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c084cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c084cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(lVar2,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c128aa0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010c128aa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e9c40(param_1,param_2,lVar1);
      _objc_release(lVar1);
    }
    else {
      func_0x00010c1e9c40(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf40660();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010bf40660(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17e6c0(param_1,param_2,lVar1);
      _objc_release(lVar1);
    }
    else {
      func_0x00010c17e6c0(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
    func_0x00010bf44020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf44020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(param_1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ea2ca8; end: 107ea2f03; -[IGListUpdateTransactionBuilder buildWithConfig:delegate:updater:] */

void FUN_107ea2ca8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *unaff_x28;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bf40660();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    unaff_x28 = (undefined *)0x0;
    goto LAB_107ea2ec8;
  }
  uVar2 = param_1;
  func_0x00010c0cfd40();
  uVar4 = param_1;
  uVar5 = param_1;
  if (uVar2 == 2) {
    func_0x00010bf644e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 != 0) {
      unaff_x28 = PTR_PTR_1126d8190;
      _objc_alloc(PTR_PTR_1126d8190);
      func_0x00010c084cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffd640(unaff_x28,param_2,uVar4,uVar5,param_1);
      goto LAB_107ea2ea8;
    }
LAB_107ea2ebc:
    unaff_x28 = (undefined *)0x0;
  }
  else {
    if (uVar2 == 1) {
      func_0x00010c128aa0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) goto LAB_107ea2ebc;
      unaff_x28 = PTR_PTR_1126d8188;
      _objc_alloc(PTR_PTR_1126d8188);
      func_0x00010c084cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfff960(unaff_x28,param_2,uVar1,param_6,param_5,uVar4,uVar5,param_1);
    }
    else {
      if (uVar2 != 0) goto LAB_107ea2ec8;
      unaff_x28 = PTR_PTR_1126d8180;
      _objc_alloc(PTR_PTR_1126d8180);
      uVar2 = param_1;
      func_0x00010bf034a0();
      func_0x00010c1559a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf08840();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c084cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfff940(unaff_x28,param_2,uVar1,param_6,param_5,param_3,param_4,uVar2 & 0xffffffff
                          ,uVar4,uVar5,uVar3,param_1);
      _objc_release(param_1);
      param_1 = uVar3;
    }
LAB_107ea2ea8:
    _objc_release(param_1);
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
LAB_107ea2ec8:
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x28);
  return;
}



/* Entry: 107ea2f04; end: 107ea2f8f; -[IGListUpdateTransactionBuilder hasChanges] */

bool FUN_107ea2f04(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c0cfd40();
  if ((lVar2 == 1) || (lVar2 = param_1, func_0x00010c0cfd40(), lVar2 == 2)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_1;
    func_0x00010c084cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      func_0x00010c1559a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = param_1 != 0;
      _objc_release();
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 107ea2f90; end: 107ea2f97; -[IGListUpdateTransactionBuilder sectionDataBlock] */

undefined8 FUN_107ea2f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ea2f98; end: 107ea2f9f; -[IGListUpdateTransactionBuilder setSectionDataBlock:] */

void FUN_107ea2f98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107ea2fa0; end: 107ea2fa7; -[IGListUpdateTransactionBuilder applySectionDataBlock] */

undefined8 FUN_107ea2fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ea2fa8; end: 107ea2faf; -[IGListUpdateTransactionBuilder setApplySectionDataBlock:] */

void FUN_107ea2fa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107ea2fb0; end: 107ea2fb7; -[IGListUpdateTransactionBuilder itemUpdateBlocks] */

undefined8 FUN_107ea2fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ea2fb8; end: 107ea2fbf; -[IGListUpdateTransactionBuilder animated] */

undefined1 FUN_107ea2fb8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107ea2fc0; end: 107ea2fc7; -[IGListUpdateTransactionBuilder setAnimated:] */

void FUN_107ea2fc0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107ea2fc8; end: 107ea2fcf; -[IGListUpdateTransactionBuilder reloadBlock] */

undefined8 FUN_107ea2fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


