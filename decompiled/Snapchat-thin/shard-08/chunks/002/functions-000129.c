/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e39228; end: 105e39263; -[SCSelectionSnapchatter .cxx_destruct] */

void FUN_105e39228(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105e39264; end: 105e3940b; -[SCSelectionSortableSnapchatterSectionCreator initWithSectionIdentifiers:snapchatterSectionDataSource:selectionTracker:actionHandler:imageDownloader:viewModelSource:sendToExperimentConfiguration:avatarFactory:] */

undefined1 *
FUN_105e39264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ed438;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e3940c; end: 105e39523; -[SCSelectionSortableSnapchatterSectionCreator sectionForDescriptor:] */

void FUN_105e3940c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  iVar5 = (int)*(undefined8 *)(param_1 + 8);
  uVar3 = uVar1;
  func_0x00010c155f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar3);
  lVar6 = 0;
  if (iVar5 != 0) {
    func_0x00010bebd700(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105e39524; end: 105e396a7; -[SCSelectionSortableSnapchatterSectionCreator _snapchatterSectionForSectionDataModel:] */

void FUN_105e39524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c155ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5398;
  _objc_alloc(PTR_PTR_1126b5398);
  func_0x00010c01a160();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar3;
  func_0x00010c246c60(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126c5180;
  _objc_alloc(PTR_PTR_1126c5180);
  func_0x00010c0494e0();
  puVar7 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar7,param_2,*(undefined8 *)(param_1 + 0x30));
  puVar8 = PTR_PTR_1126b5260;
  _objc_alloc(PTR_PTR_1126b5260);
  uVar4 = uVar1;
  func_0x00010c06ef40(uVar1);
  uVar3 = uVar1;
  func_0x00010bfcf7e0(uVar1);
  func_0x00010c01edc0(puVar8,param_2,uVar4,uVar3);
  func_0x00010c222a60(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105e396a8; end: 105e3971f; -[SCSelectionSortableSnapchatterSectionCreator .cxx_destruct] */

void FUN_105e396a8(long param_1)

{
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



/* Entry: 105e39720; end: 105e398c3; -[SCSelectionSortableSnapchatterSectionDataProvider initWithSnapchatterSectionDataSource:selectionTracker:imageDownloader:viewModelGenerator:sendToExperimentConfiguration:avatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e39720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096e8d8);
  puStack_58 = PTR_PTR_1126ed440;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithSelectionTracker_selecti_11252c850,param_4,
                      &PTR___NSConcreteGlobalBlock_11096e8d8,param_7);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096e8d8);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112737b94;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737b98;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737b9c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737ba0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737ba0) = uVar2;
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737ba4);
    *(undefined ***)((long)puVar1 + (long)_DAT_112737ba4) =
         &PTR____CFConstantStringClassReference_110e2bfb8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737ba8);
    *(undefined **)((long)puVar1 + (long)_DAT_112737ba8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e398c4; end: 105e39947; -[SCSelectionSortableSnapchatterSectionDataProvider contentCellClassesByReuseIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e398c4(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class();
  ppuVar10 = &puStack_20;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  ppuVar4 = ppuVar10;
  _objc_opt_isKindOfClass(ppuVar10,puVar2);
  ppuVar1 = ppuVar10;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  if (ppuVar1 != (undefined **)0x0) {
    lVar11 = (long)_DAT_112737bac;
    _objc_retain(ppuVar10);
    uVar5 = *(undefined8 *)(puVar3 + lVar11);
    *(undefined ***)(puVar3 + lVar11) = ppuVar1;
    _objc_release(uVar5);
    _objc_initWeak(auStack_98,puVar3);
    uVar6 = *(undefined8 *)(puVar3 + _DAT_112737b94);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar10;
    func_0x00010c155f60(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar10;
    func_0x00010c11d080(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c246c20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0e0680(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c0e0e80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(ppuVar10);
    uVar9 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2606c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar9);
    _objc_release(puVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
    _objc_release(uVar6);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar10);
  return;
}



/* Entry: 105e39948; end: 105e39b8f; -[SCSelectionSortableSnapchatterSectionDataProvider setSectionDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e39948(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar9 = (long)_DAT_112737bac;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = uVar1;
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112737b94);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c155f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c11d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c246c20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c0e0680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c0e0e80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uVar8 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2606c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar8);
    _objc_release(param_1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar9);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105e39b90; end: 105e39c03;  */

void FUN_105e39b90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c155f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea7be0(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e39c04; end: 105e39d37; -[SCSelectionSortableSnapchatterSectionDataProvider configurationBlocksByReuseIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e39c04(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105e39d38;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  uStack_48 = *(undefined8 *)(param_1 + _DAT_112737ba4);
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde5680();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105e39d38; end: 105e39d7f;  */

void FUN_105e39d38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e39d80; end: 105e39fc3; -[SCSelectionSortableSnapchatterSectionDataProvider _setSnapchatters:sectionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e39d80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126b5628;
  uVar7 = *(undefined8 *)(param_1 + _DAT_112737ba8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043280(puVar1);
  _objc_release(param_4);
  func_0x00010c0d9840(uVar7);
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010c1895e0(param_1);
  uVar7 = param_3;
  func_0x00010bf529e0();
  uVar3 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108ec718);
  lVar4 = param_1;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf80e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105e3a00c;
  puStack_78 = &UNK_1108ec738;
  lStack_70 = lVar5;
  lStack_68 = lVar6;
  lStack_60 = param_1;
  uStack_58 = uVar7;
  _objc_retain(lVar6);
  _objc_retain(lVar5);
  uVar7 = param_3;
  func_0x00010bd86420(param_3,&puStack_90);
  _objc_release(param_3);
  func_0x00010c181940(param_1);
  _objc_release(uVar7);
  func_0x00010c1895e0(param_1);
  lVar4 = param_1;
  func_0x00010bf64120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155aa0();
  _objc_release(lVar4);
  uVar7 = uVar3;
  func_0x0001084256c4(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb8c0(param_1);
  _objc_release(uVar7);
  _objc_release(lStack_68);
  _objc_release(lStack_70);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105e39fc4; end: 105e3a00b;  */

void FUN_105e39fc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108ef8240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e3a00c; end: 105e3a13f;  */

void FUN_105e3a00c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ef8240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ef8240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bde7520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e3a140; end: 105e3a1cb; -[SCSelectionSortableSnapchatterSectionDataProvider _containerCellViewModelForSnapchatter:index:isSelected:isDisabled:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3a140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112737ba0);
  (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_5,param_6,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e3a1cc; end: 105e3a257; -[SCSelectionSortableSnapchatterSectionDataProvider _configureRecipientCollectionViewCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3a1cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class(PTR_PTR_1126b5290);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  func_0x00010c16d9c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e3a258; end: 105e3a267; -[SCSelectionSortableSnapchatterSectionDataProvider sectionDataTrackerObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e3a258(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737ba8);
}



/* Entry: 105e3a268; end: 105e3a277; -[SCSelectionSortableSnapchatterSectionDataProvider sectionDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e3a268(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737bac);
}



/* Entry: 105e3a278; end: 105e3a307; -[SCSelectionSortableSnapchatterSectionDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3a278(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737bac,0);
  _objc_storeStrong(param_1 + _DAT_112737ba8,0);
  _objc_storeStrong(param_1 + _DAT_112737ba4,0);
  _objc_storeStrong(param_1 + _DAT_112737ba0,0);
  _objc_storeStrong(param_1 + _DAT_112737b9c,0);
  _objc_storeStrong(param_1 + _DAT_112737b98,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737b94,0);
  return;
}



/* Entry: 105e3a308; end: 105e3a7df; -[SCSelectionStoryCarouselSectionCreator initWithSectionIdentifiers:carouselSectionIdentifiers:placeTagCarouselViewProvider:placeTagsTracker:dataSource:viewModelSource:sendToTracker:actionHandler:imageDownloader:customStoriesOnboardingManager:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:selectionStoryRepository:renderingTracker:subscriptionInfoProvider:imageCacheDelegate:showSendToTray:avatarFactory:crossPostingSelectionTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105e3a308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
             undefined4 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
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
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126ed448;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithSectionIdentifiers_carou_1125ee6d8,param_3,param_4,
                      param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
                      param_14,param_15,param_16,param_17,param_18,param_19,param_20);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112737bb0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bb4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bb8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bbc;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737bc0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737bc0) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112737bc4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bc8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bcc;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bd0;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_22;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bd4;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bd8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bdc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737be0;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737be4;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737be8;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bec;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bf0;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bf4;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737bf8;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_19;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112737bfc) = param_20;
    lVar4 = (long)_DAT_112737c00;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_23;
    _objc_release(uVar2);
  }
  _objc_release(param_23);
  _objc_release(param_22);
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



/* Entry: 105e3a7e0; end: 105e3a877; -[SCSelectionStoryCarouselSectionCreator sectionForDescriptor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3a7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737bb4);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be9cde0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e3a878; end: 105e3a967; -[SCSelectionStoryCarouselSectionCreator _sectionForDescriptor:] */

void FUN_105e3a878(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4890;
  _objc_opt_class(PTR_PTR_1126b4890);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bec4d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e3a968; end: 105e3abbf; -[SCSelectionStoryCarouselSectionCreator _storySectionForDescriptor:withSectionDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3a968(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar7 = *(undefined8 *)(param_1 + _DAT_112737bbc);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c15ab00(uVar7,param_2,uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126c5188;
  _objc_alloc(PTR_PTR_1126c5188);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_112737bf0;
  func_0x00010c043120(puVar4,param_2,uVar2,*(undefined8 *)(param_1 + _DAT_112737bb8),
                      *(undefined8 *)(param_1 + _DAT_112737bd8),
                      *(undefined8 *)(param_1 + _DAT_112737bdc),uVar3,
                      *(undefined8 *)(param_1 + _DAT_112737bc4),
                      *(undefined8 *)(param_1 + _DAT_112737bcc),1,
                      *(undefined8 *)(param_1 + _DAT_112737bd4),
                      *(undefined8 *)(param_1 + _DAT_112737be4),
                      *(undefined8 *)(param_1 + _DAT_112737be8),
                      *(undefined8 *)(param_1 + _DAT_112737bec),*(undefined8 *)(param_1 + lVar1),
                      *(undefined8 *)(param_1 + _DAT_112737bf4),
                      *(undefined8 *)(param_1 + _DAT_112737bf8),
                      *(undefined1 *)(param_1 + _DAT_112737bfc));
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c155ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126b5250;
  _objc_alloc(PTR_PTR_1126b5250);
  func_0x00010c01a1c0();
  lVar9 = (long)_DAT_112737bc8;
  func_0x00010c161980();
  puVar6 = PTR_PTR_1126bed88;
  _objc_alloc(PTR_PTR_1126bed88);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar6,param_2,*(undefined8 *)(param_1 + lVar9));
  uVar8 = *(undefined8 *)(param_1 + lVar1);
  uVar7 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf79c60(uVar8,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e3abc0; end: 105e3ad1f; -[SCSelectionStoryCarouselSectionCreator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3abc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737c00,0);
  _objc_storeStrong(param_1 + _DAT_112737bf8,0);
  _objc_storeStrong(param_1 + _DAT_112737bf4,0);
  _objc_storeStrong(param_1 + _DAT_112737bf0,0);
  _objc_storeStrong(param_1 + _DAT_112737bec,0);
  _objc_storeStrong(param_1 + _DAT_112737be8,0);
  _objc_storeStrong(param_1 + _DAT_112737be4,0);
  _objc_storeStrong(param_1 + _DAT_112737be0,0);
  _objc_storeStrong(param_1 + _DAT_112737bdc,0);
  _objc_storeStrong(param_1 + _DAT_112737bd8,0);
  _objc_storeStrong(param_1 + _DAT_112737bd4,0);
  _objc_storeStrong(param_1 + _DAT_112737bd0,0);
  _objc_storeStrong(param_1 + _DAT_112737bcc,0);
  _objc_storeStrong(param_1 + _DAT_112737bc8,0);
  _objc_storeStrong(param_1 + _DAT_112737bc0,0);
  _objc_storeStrong(param_1 + _DAT_112737bc4,0);
  _objc_storeStrong(param_1 + _DAT_112737bbc,0);
  _objc_storeStrong(param_1 + _DAT_112737bb8,0);
  _objc_storeStrong(param_1 + _DAT_112737bb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737bb0,0);
  return;
}



/* Entry: 105e3ad20; end: 105e3b157; -[SCSelectionStorySectionCreator initWithSectionIdentifiers:carouselSectionIdentifiers:placeTagCarouselViewProvider:placeTagsTracker:dataSource:viewModelSource:sendToTracker:actionHandler:imageDownloader:customStoriesOnboardingManager:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:selectionStoryRepository:renderingTracker:subscriptionInfoProvider:imageCacheDelegate:showSendToTray:avatarFactory:crossPostingSelectionTracker:] */

undefined8 *
FUN_105e3ad20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
             undefined4 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126ed450;
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
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[9];
    puVar1[9] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_19;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x14) = param_20;
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
  }
  _objc_release(param_23);
  _objc_release(param_22);
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



/* Entry: 105e3b158; end: 105e3b2df; -[SCSelectionStorySectionCreator sectionForDescriptor:] */

void FUN_105e3b158(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  _objc_retain(param_3);
  iVar5 = (int)*(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if (iVar5 == 0) {
    lVar6 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1700;
    _objc_opt_class(PTR_PTR_1126b1700);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf4c1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b5240;
    _objc_opt_class(PTR_PTR_1126b5240);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    iVar5 = (int)*(undefined8 *)(param_1 + 8);
    uVar2 = uVar1;
    func_0x00010c155f60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar2);
    lVar6 = 0;
    if (iVar5 != 0) {
      uVar2 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec4d80(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar6 = param_1;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105e3b2e0; end: 105e3b4d7; -[SCSelectionStorySectionCreator _storySectionForIdentifier:withSectionDataModel:] */

void FUN_105e3b2e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  func_0x00010c155ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      func_0x00010c0720c0(param_3);
      puVar4 = PTR_PTR_1126b5250;
      _objc_alloc(PTR_PTR_1126b5250);
      func_0x00010c01a1c0();
      func_0x00010c161980();
      goto LAB_105e3b3c0;
    }
  }
  puVar4 = PTR_PTR_1126b5258;
  _objc_opt_new(PTR_PTR_1126b5258);
LAB_105e3b3c0:
  puVar5 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c15ab00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126c5188;
  _objc_alloc(PTR_PTR_1126c5188);
  func_0x00010c043120();
  func_0x00010c1f9240(puVar5);
  func_0x00010c161980(puVar5);
  func_0x00010bf79c60(*(undefined8 *)(param_1 + 0x88));
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e3b4d8; end: 105e3b5df; -[SCSelectionStorySectionCreator .cxx_destruct] */

void FUN_105e3b4d8(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 105e3b5e0; end: 105e3bb5f; -[SCSelectionStorySectionDataProvider initWithSectionIdentifier:dataSource:placeTagCarouselViewProvider:placeTagsTracker:viewModelGenerator:sendToTracker:imageDownloader:sectionLayout:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:selectionStoryRepository:renderingTracker:subscriptionInfoProvider:imageCacheDelegate:showSendToTray:avatarFactory:crossPostingSelectionTracker:] */

undefined8 *
FUN_105e3b5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126ed458;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    uVar3 = param_7;
    _objc_retainBlock();
    uVar6 = puVar2[3];
    puVar2[3] = uVar3;
    _objc_release(uVar6);
    uVar3 = param_8;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[5];
    puVar2[5] = uVar3;
    _objc_release(uVar6);
    _objc_retain(param_8);
    uVar3 = puVar2[4];
    puVar2[4] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[6];
    puVar2[6] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[7];
    puVar2[7] = param_20;
    _objc_release(uVar3);
    uVar3 = puVar2[10];
    puVar2[10] = &PTR____CFConstantStringClassReference_110e2bfd8;
    _objc_release(uVar3);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = &PTR____CFConstantStringClassReference_110e2bff8;
    _objc_release(uVar3);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = &PTR____CFConstantStringClassReference_110e2c018;
    _objc_release(uVar3);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = &PTR____CFConstantStringClassReference_110e2c038;
    _objc_release(uVar3);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = &PTR____CFConstantStringClassReference_110e2c058;
    _objc_release(uVar3);
    puVar2[8] = param_10;
    _objc_retain(param_11);
    uVar3 = puVar2[0x17];
    puVar2[0x17] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0x23];
    puVar2[0x23] = param_16;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar3 = puVar2[0x12];
    puVar2[0x12] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[0x18];
    puVar2[0x18] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = param_6;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b5280;
    _objc_alloc_init();
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = param_13;
    _objc_release(uVar3);
    puVar2[0x20] = 5;
    _objc_retain(param_15);
    uVar3 = puVar2[0x22];
    puVar2[0x22] = param_15;
    _objc_release(uVar3);
    uVar3 = param_11;
    func_0x000108f48528();
    uVar1 = 0;
    if ((int)uVar3 != 0) {
      uVar3 = param_11;
      func_0x0001009703d0(param_11,0);
      uVar1 = (undefined1)uVar3;
    }
    *(undefined1 *)(puVar2 + 0x21) = uVar1;
    _objc_retain(param_17);
    uVar3 = puVar2[9];
    puVar2[9] = param_17;
    _objc_release(uVar3);
    *(undefined1 *)(puVar2 + 0x24) = param_18;
    _objc_initWeak(auStack_80,puVar2);
    uVar3 = param_14;
    func_0x00010c269d40(param_14);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c29df20();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar5 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar2[0x25];
    puVar2[0x25] = param_21;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar3 = puVar2[0x26];
    puVar2[0x26] = puVar4;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105e3bb60; end: 105e3bba7;  */

void FUN_105e3bb60(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3c60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e3bba8; end: 105e3bbb3; +[SCSelectionStorySectionDataProvider announcerIdentifier] */

undefined ** FUN_105e3bba8(void)

{
  return &PTR____CFConstantStringClassReference_110e2c078;
}



/* Entry: 105e3bbb4; end: 105e3bbbb; -[SCSelectionStorySectionDataProvider addListener:] */

void FUN_105e3bbb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105e3bbbc; end: 105e3bbc3; -[SCSelectionStorySectionDataProvider removeListener:] */

void FUN_105e3bbbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105e3bbc4; end: 105e3bc37; -[SCSelectionStorySectionDataProvider setUpdateQueuePerformer:] */

void FUN_105e3bbc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(*(undefined8 *)(param_1 + 0x90),param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e3bc38; end: 105e3beff; -[SCSelectionStorySectionDataProvider setUp] */

void FUN_105e3bc38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6d420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105e3bf00;
  puStack_88 = &UNK_1108531d0;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9a080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105e3bf48;
  puStack_b0 = &UNK_11086a5e0;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar5 = *(long *)(param_1 + 0x128);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf8d4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_78);
    uVar7 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_d0);
  }
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105e3bf00; end: 105e3bfd7;  */

void FUN_105e3bf00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4fa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e3bfd8; end: 105e3bfdf; -[SCSelectionStorySectionDataProvider tearDown] */

void FUN_105e3bfd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 105e3bfe0; end: 105e3bfe7; -[SCSelectionStorySectionDataProvider dataLoadingStatus] */

undefined8 FUN_105e3bfe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105e3bfe8; end: 105e3c06b; -[SCSelectionStorySectionDataProvider numberOfItemsInSection:] */

/* WARNING: Possible PIC construction at 0x000105e3c000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105e3c034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105e3c004) */
/* WARNING: Removing unreachable block (ram,0x000105e3c014) */
/* WARNING: Removing unreachable block (ram,0x000105e3c01c) */
/* WARNING: Removing unreachable block (ram,0x000105e3c024) */
/* WARNING: Removing unreachable block (ram,0x000105e3c038) */
/* WARNING: Removing unreachable block (ram,0x000105e3c058) */
/* WARNING: Removing unreachable block (ram,0x000105e3c040) */
/* WARNING: Removing unreachable block (ram,0x000105e3c044) */

void FUN_105e3bfe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105e3c06c; end: 105e3c37f; -[SCSelectionStorySectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105e3c06c(ulong param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long lVar16;
  undefined **ppuVar17;
  long unaff_x19;
  ulong uVar18;
  undefined *puVar19;
  uint uVar20;
  ulong uVar21;
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  uint uStack_154;
  ulong uStack_150;
  long lStack_148;
  long lStack_140;
  ulong uStack_138;
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
  uVar18 = *(ulong *)(param_1 + 0x98);
  _objc_retain(uVar18);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  bVar2 = *(byte *)(param_1 + 200);
  uVar20 = (uint)bVar2;
  uStack_150 = *(ulong *)(param_1 + 0x100);
  if (((bVar2 == 1) && (lVar4 = *(long *)(param_1 + 0xd0), lVar4 != 0)) &&
     (func_0x00010c067fc0(), -1 < lVar4)) {
    uVar5 = *(ulong *)(param_1 + 0xd0);
    func_0x00010c2827c0();
    if (uVar5 < *(ulong *)(param_1 + 0x100)) {
      uStack_150 = *(ulong *)(param_1 + 0x100) + 1;
    }
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lStack_140 = lVar4;
  if (lVar4 != 0) {
    lStack_148 = *plStack_120;
    uStack_154 = (uint)bVar2;
    do {
      unaff_x19 = 0;
      do {
        if (*plStack_120 != lStack_148) {
          _objc_enumerationMutation(param_3);
        }
        uVar21 = *(ulong *)(lStack_128 + unaff_x19 * 8);
        uVar6 = *(ulong *)(param_1 + 0xf0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010c074e20();
        if ((int)uVar5 == 0) {
LAB_105e3c1bc:
          if ((*(long *)(param_1 + 0x40) == 1) ||
             (uVar7 = uVar21, func_0x00010c0840e0(), uVar7 != uStack_150)) {
            if ((int)uVar5 != 0) goto LAB_105e3c23c;
            goto LAB_105e3c244;
          }
          uVar8 = *(ulong *)(param_1 + 0x100);
          uVar7 = uVar18;
          func_0x00010bf529e0();
          if ((uVar5 & 1) != 0) {
            _objc_release(uStack_138);
          }
          _objc_release(uVar6);
          if (uVar8 < uVar7) {
            func_0x00010bde75c0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(param_1);
            goto LAB_105e3c314;
          }
          uVar20 = uStack_154;
          if (uStack_154 != 0) goto LAB_105e3c220;
LAB_105e3c250:
          uVar5 = uVar21;
          func_0x00010c0840e0();
          uVar6 = uVar18;
          func_0x00010bf529e0();
          if ((uVar6 <= uVar5) || (uVar5 = uVar21, func_0x00010c0840e0(), (long)uVar5 < 0)) {
            _objc_release(param_3);
            puVar19 = (undefined *)0x0;
            goto LAB_105e3c328;
          }
          func_0x00010c0840e0(uVar21);
          uVar5 = uVar18;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar7 = uVar18;
          func_0x00010bf529e0();
          uVar8 = *(ulong *)(param_1 + 0xf0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uStack_138 = uVar8;
          func_0x00010bfe43c0();
          if (uVar7 < uVar8) goto LAB_105e3c1bc;
LAB_105e3c23c:
          _objc_release(uStack_138);
LAB_105e3c244:
          _objc_release(uVar6);
          if (uVar20 == 0) goto LAB_105e3c250;
LAB_105e3c220:
          uVar5 = param_1;
          func_0x00010bde7420();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010befa120(puVar3);
        _objc_release(uVar5);
        unaff_x19 = unaff_x19 + 1;
      } while (lStack_140 != unaff_x19);
      lVar4 = param_3;
      func_0x00010bf52a60();
      lStack_140 = lVar4;
    } while (lVar4 != 0);
  }
LAB_105e3c314:
  _objc_release(param_3);
  _objc_retain(puVar3);
  puVar19 = puVar3;
LAB_105e3c328:
  _objc_release(puVar3);
  _objc_release(uVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_168 = FUN_105e3c380;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR_PTR_1126b5290;
    uStack_180 = uVar18;
    lStack_178 = unaff_x19;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_opt_class();
    puVar19 = PTR_PTR_1126c5190;
    puStack_1b0 = puVar3;
    _objc_opt_class();
    lVar9 = *(long *)(param_3 + 0xd8);
    puStack_1a8 = puVar19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x00010c0fd580();
    puVar3 = PTR_PTR_1126b5298;
    lStack_1a0 = lVar4;
    _objc_opt_class();
    puVar10 = PTR_PTR_1126c5198;
    puStack_198 = puVar3;
    _objc_opt_class();
    ppuVar17 = &puStack_1b0;
    puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_190 = puVar10;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _objc_retain(ppuVar17);
      puVar3 = PTR_PTR_1126b5240;
      _objc_opt_class(PTR_PTR_1126b5240);
      ppuVar11 = ppuVar17;
      _objc_opt_isKindOfClass(ppuVar17,puVar3);
      ppuVar1 = ppuVar17;
      if (((ulong)ppuVar11 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      if (ppuVar1 != (undefined **)0x0) {
        _objc_retain(ppuVar17);
        uVar12 = *(undefined8 *)(lVar9 + 0x140);
        *(undefined ***)(lVar9 + 0x140) = ppuVar1;
        _objc_release(uVar12);
        *(undefined8 *)(lVar9 + 0x80) = 1;
        ppuVar11 = ppuVar17;
        func_0x00010c11d080();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar11;
        func_0x00010c08fa60();
        if (ppuVar13 == (undefined **)0x0) {
          _objc_release(ppuVar11);
        }
        else {
          ppuVar13 = ppuVar17;
          func_0x00010c11d080();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar13;
          func_0x00010c08fa60();
          _objc_release(ppuVar13);
          _objc_release(ppuVar11);
          if (ppuVar14 < (undefined **)0x5) {
            ppuVar11 = ppuVar17;
            func_0x00010c155f60(ppuVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bea74c0(lVar9);
            _objc_release(ppuVar11);
            goto LAB_105e3c780;
          }
        }
        puStack_268 = &uStack_270;
        uStack_270 = 0;
        uStack_260 = 0x2020000000;
        uVar15 = *(undefined8 *)(lVar9 + 0xf0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar15;
        func_0x00010c074e20();
        _objc_release(uVar15);
        uStack_258 = (undefined1)uVar12;
        puStack_298 = &uStack_2a0;
        uStack_2a0 = 0;
        uStack_290 = 0x3032000000;
        pcStack_288 = FUN_105e3c804;
        uStack_280 = 0x105e3c814;
        uVar12 = *(undefined8 *)(lVar9 + 8);
        _objc_retain(uVar12);
        puStack_2b8 = &uStack_2c0;
        uStack_2c0 = 0;
        uStack_2b0 = 0x2020000000;
        uVar15 = *(undefined8 *)(lVar9 + 0xf0);
        uStack_278 = uVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar15;
        func_0x00010bfe43c0();
        _objc_release(uVar15);
        uStack_2a8 = uVar12;
        _objc_initWeak(auStack_2c8,lVar9);
        ppuVar11 = ppuVar17;
        func_0x00010c155f60(ppuVar17);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar17;
        func_0x00010c11d080(ppuVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be9e480(lVar9);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar9;
        func_0x00010c0e0e80();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_2d0,auStack_2c8);
        _objc_retain(ppuVar17);
        lVar16 = lVar4;
        func_0x00010c25ff60(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(lVar16);
        _objc_release(lVar4);
        _objc_release(lVar9);
        _objc_release(ppuVar13);
        _objc_release(ppuVar11);
        _objc_release(ppuVar1);
        _objc_destroyWeak(auStack_2d0);
        _objc_destroyWeak(auStack_2c8);
        __Block_object_dispose(&uStack_2c0,8);
        __Block_object_dispose(&uStack_2a0,8);
        _objc_release(uStack_278);
        __Block_object_dispose(&uStack_270,8);
      }
LAB_105e3c780:
      _objc_release(ppuVar1);
      _objc_release(ppuVar17);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 105e3c380; end: 105e3c483; -[SCSelectionStorySectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105e3c380(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126c5190;
  puStack_50 = puVar2;
  _objc_opt_class();
  lVar4 = *(long *)(param_1 + 0xd8);
  puStack_48 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0fd580();
  puVar2 = PTR_PTR_1126b5298;
  lStack_40 = lVar5;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126c5198;
  puStack_38 = puVar2;
  _objc_opt_class();
  ppuVar12 = &puStack_50;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  ppuVar6 = ppuVar12;
  _objc_opt_isKindOfClass(ppuVar12,puVar2);
  ppuVar1 = ppuVar12;
  if (((ulong)ppuVar6 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  if (ppuVar1 != (undefined **)0x0) {
    _objc_retain(ppuVar12);
    uVar7 = *(undefined8 *)(lVar4 + 0x140);
    *(undefined ***)(lVar4 + 0x140) = ppuVar1;
    _objc_release(uVar7);
    *(undefined8 *)(lVar4 + 0x80) = 1;
    ppuVar6 = ppuVar12;
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar6;
    func_0x00010c08fa60();
    if (ppuVar8 == (undefined **)0x0) {
      _objc_release(ppuVar6);
    }
    else {
      ppuVar8 = ppuVar12;
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c08fa60();
      _objc_release(ppuVar8);
      _objc_release(ppuVar6);
      if (ppuVar9 < (undefined **)0x5) {
        ppuVar6 = ppuVar12;
        func_0x00010c155f60(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bea74c0(lVar4);
        _objc_release(ppuVar6);
        goto LAB_105e3c780;
      }
    }
    puStack_108 = &uStack_110;
    uStack_110 = 0;
    uStack_100 = 0x2020000000;
    uVar10 = *(undefined8 *)(lVar4 + 0xf0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar10;
    func_0x00010c074e20();
    _objc_release(uVar10);
    uStack_f8 = (undefined1)uVar7;
    puStack_138 = &uStack_140;
    uStack_140 = 0;
    uStack_130 = 0x3032000000;
    pcStack_128 = FUN_105e3c804;
    uStack_120 = 0x105e3c814;
    uVar7 = *(undefined8 *)(lVar4 + 8);
    _objc_retain(uVar7);
    puStack_158 = &uStack_160;
    uStack_160 = 0;
    uStack_150 = 0x2020000000;
    uVar10 = *(undefined8 *)(lVar4 + 0xf0);
    uStack_118 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar10;
    func_0x00010bfe43c0();
    _objc_release(uVar10);
    uStack_148 = uVar7;
    _objc_initWeak(auStack_168,lVar4);
    ppuVar6 = ppuVar12;
    func_0x00010c155f60(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar12;
    func_0x00010c11d080(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9e480(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_170,auStack_168);
    _objc_retain(ppuVar12);
    lVar11 = lVar5;
    func_0x00010c25ff60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar11);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(ppuVar8);
    _objc_release(ppuVar6);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
    __Block_object_dispose(&uStack_160,8);
    __Block_object_dispose(&uStack_140,8);
    _objc_release(uStack_118);
    __Block_object_dispose(&uStack_110,8);
  }
LAB_105e3c780:
  _objc_release(ppuVar1);
  _objc_release(ppuVar12);
  return;
}



/* Entry: 105e3c484; end: 105e3c803; -[SCSelectionStorySectionDataProvider setSectionDataModel:] */

void FUN_105e3c484(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x140);
    *(ulong *)(param_1 + 0x140) = uVar1;
    _objc_release(uVar4);
    *(undefined8 *)(param_1 + 0x80) = 1;
    uVar3 = param_3;
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c08fa60();
    if (uVar5 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar5 = param_3;
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fa60();
      _objc_release(uVar5);
      _objc_release(uVar3);
      if (uVar6 < 5) {
        uVar3 = param_3;
        func_0x00010c155f60(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bea74c0(param_1);
        _objc_release(uVar3);
        goto LAB_105e3c780;
      }
    }
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uVar7 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c074e20();
    _objc_release(uVar7);
    uStack_78 = (undefined1)uVar4;
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_105e3c804;
    uStack_a0 = 0x105e3c814;
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar4);
    puStack_d8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d0 = 0x2020000000;
    uVar7 = *(undefined8 *)(param_1 + 0xf0);
    uStack_98 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bfe43c0();
    _objc_release(uVar7);
    uStack_c8 = uVar4;
    _objc_initWeak(auStack_e8,param_1);
    uVar3 = param_3;
    func_0x00010c155f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c11d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9e480(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_f0,auStack_e8);
    _objc_retain(param_3);
    lVar9 = lVar8;
    func_0x00010c25ff60(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_e8);
    __Block_object_dispose(&uStack_e0,8);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
    __Block_object_dispose(&uStack_90,8);
  }
LAB_105e3c780:
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105e3c804; end: 105e3c81b;  */

void FUN_105e3c804(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105e3c81c; end: 105e3c9ff;  */

void FUN_105e3c81c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(lVar1 + 0xc0);
    puVar2 = PTR_PTR_1126b5628;
    _objc_alloc(PTR_PTR_1126b5628);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c155f60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043280(puVar2);
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
      uVar7 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
      _objc_retain(param_2);
      _objc_retain(uVar6);
      uVar3 = uVar6;
      func_0x00010c0720c0();
      if (((((int)uVar3 == 0) || (uVar5 = param_2, func_0x00010bf529e0(), uVar7 <= uVar5)) &&
          ((uVar3 = uVar6, func_0x00010c0720c0(), (int)uVar3 == 0 ||
           (uVar5 = param_2, func_0x00010bf529e0(), uVar5 < uVar7)))) &&
         (uVar3 = uVar6, func_0x00010c0720c0(), (int)uVar3 == 0)) {
        func_0x00010c0720c0();
        _objc_release(uVar6);
        _objc_release(param_2);
      }
      else {
        _objc_release(uVar6);
        _objc_release(param_2);
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c155f60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea74c0(lVar1);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e3ca00; end: 105e3ca83; -[SCSelectionStorySectionDataProvider _selectionStoryObservableForSectionIdentifier:query:] */

void FUN_105e3ca00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c15aaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e3ca84; end: 105e3cd2b; -[SCSelectionStorySectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105e3ca84(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_c8,param_1);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_105e3cd2c;
  puStack_d8 = &UNK_110845ae0;
  _objc_copyWeak(auStack_d0,auStack_c8);
  ppuVar1 = &puStack_f0;
  _objc_retainBlock();
  puStack_118 = puVar9;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x105e3cd74;
  puStack_100 = &UNK_110845ae0;
  _objc_copyWeak(auStack_f8,auStack_c8);
  ppuVar2 = &puStack_118;
  _objc_retainBlock();
  puStack_140 = puVar9;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x105e3cdbc;
  puStack_128 = &UNK_110845ae0;
  _objc_copyWeak(auStack_120,auStack_c8);
  ppuVar3 = &puStack_140;
  _objc_retainBlock();
  puStack_168 = puVar9;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x105e3ce04;
  puStack_150 = &UNK_110845ae0;
  puVar11 = auStack_c8;
  _objc_copyWeak(auStack_148,puVar11);
  ppuVar4 = &puStack_168;
  _objc_retainBlock();
  uStack_c0 = *(undefined8 *)(param_1 + 0x50);
  ppuVar5 = ppuVar1;
  _objc_retainBlock();
  uStack_b8 = *(undefined8 *)(param_1 + 0x58);
  ppuVar6 = ppuVar2;
  ppuStack_a0 = ppuVar5;
  _objc_retainBlock();
  uStack_b0 = *(undefined8 *)(param_1 + 0x60);
  ppuVar7 = ppuVar3;
  ppuStack_98 = ppuVar6;
  _objc_retainBlock();
  uStack_a8 = *(undefined8 *)(param_1 + 0x70);
  ppuVar8 = ppuVar4;
  ppuStack_90 = ppuVar7;
  _objc_retainBlock();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_88 = ppuVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_148);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_120);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_f8);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_d0);
  puVar10 = auStack_c8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume(puVar10);
  _objc_retain(puVar11);
  puVar10 = puVar10 + 0x20;
  _objc_loadWeakRetained(puVar10);
  func_0x00010bde5680();
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 105e3cd2c; end: 105e3ce4b;  */

void FUN_105e3cd2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e3ce4c; end: 105e3ce77; -[SCSelectionStorySectionDataProvider _setExpandedStorySnapchattersCount:] */

void FUN_105e3ce4c(long param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c282760();
  *(ulong *)(param_1 + 0x100) = param_3 & 0xffffffff;
  return;
}



/* Entry: 105e3ce78; end: 105e3d01f; -[SCSelectionStorySectionDataProvider _onNextEligibleCrossPostingToSpotlightIdentifiers:] */

void FUN_105e3ce78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  lVar4 = param_3;
  if (lVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x130);
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    _objc_retain(lVar4);
    func_0x000100504554(uVar5,&PTR___NSConcreteGlobalBlock_1108ec798);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c15aa20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0xa8);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105e3d028;
    puStack_90 = &UNK_1108ec7b8;
    uStack_88 = uVar6;
    lStack_80 = lVar4;
    uStack_78 = uVar2;
    uStack_70 = uVar7;
    uStack_68 = lVar1 == 0;
    _objc_retain(uVar7);
    _objc_retain(uVar2);
    _objc_retain(uVar6);
    func_0x00010bd86420(uVar8,&puStack_a8);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar8;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar8 = *(undefined8 *)(param_1 + 0x130);
    *(long *)(param_1 + 0x130) = param_3;
    _objc_release(uVar8);
    param_1 = param_1 + 0x138;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155aa0();
    _objc_release(param_1);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_88);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e3d020; end: 105e3d027;  */

void FUN_105e3d020(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  puStack_48 = &UNK_108f42630;
  puStack_40 = &UNK_108f42640;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  puStack_78 = &UNK_108f42630;
  puStack_70 = &UNK_108f42640;
  uStack_68 = 0;
  func_0x00010c0bee40(param_2);
  puVar1 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  func_0x00010c03d4e0();
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e3d028; end: 105e3d19f;  */

void FUN_105e3d028(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b52c0;
  _objc_opt_class(PTR_PTR_1126b52c0);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(puVar1);
  }
  else {
    uVar5 = param_2;
    func_0x000108f4242c(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf4b900();
    if ((uVar6 & 1) == 0) {
      _objc_retain(puVar1);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0e00e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf1f3c0();
      _objc_release(uVar7);
      FUN_105e3fe94(puVar2,uVar8,*(char *)(param_1 + 0x40) == '\0');
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126aea98;
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
      _objc_release(puVar2);
    }
    _objc_release(uVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e3d1a0; end: 105e3d377; -[SCSelectionStorySectionDataProvider _setSelectionStories:sectionIdentifier:] */

void FUN_105e3d1a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined8 *)(param_1 + 0x80) = 1;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 200) = 0;
  uVar1 = param_3;
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108ec7e8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105e3d380;
  puStack_78 = &UNK_1108ec808;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(uVar3);
  uVar5 = param_3;
  uStack_70 = uVar3;
  uStack_60 = uVar1;
  func_0x00010bd86420(param_3,&puStack_90);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x80) = 2;
  lVar4 = param_1 + 0x138;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c155aa0();
  _objc_release(lVar4);
  func_0x00010bf790c0(*(undefined8 *)(param_1 + 0x110));
  uVar1 = uVar2;
  func_0x0001084256c4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  _objc_release(uVar5);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e3d378; end: 105e3d37f;  */

void FUN_105e3d378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  puStack_48 = &UNK_108f42630;
  puStack_40 = &UNK_108f42640;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  puStack_78 = &UNK_108f42630;
  puStack_70 = &UNK_108f42640;
  uStack_68 = 0;
  func_0x00010c0bee40(param_2);
  puVar1 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  func_0x00010c03d4e0();
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e3d380; end: 105e3d3f3;  */

void FUN_105e3d380(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde7560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e3d3f4; end: 105e3d623; -[SCSelectionStorySectionDataProvider _containerCellViewModelFromSelectionStory:identifierToStateMap:index:count:] */

void FUN_105e3d3f4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x000108f4242c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010bf1f3c0(uVar2);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  if ((int)uVar5 != 0) {
    func_0x00010be2d840(param_1,param_2,param_3,uVar3,param_5);
  }
  uVar4 = uVar1;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  if ((uVar5 & 1) == 0) {
    uVar5 = uVar1;
    func_0x00010c15ab60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    if ((uVar6 & 1) != 0) {
LAB_105e3d558:
      _objc_release(uVar5);
      goto LAB_105e3d560;
    }
    uVar6 = uVar1;
    func_0x00010c15ab60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0();
    if ((uVar7 & 1) != 0) {
LAB_105e3d550:
      _objc_release(uVar6);
      goto LAB_105e3d558;
    }
    uVar7 = uVar1;
    func_0x00010c15ab60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0720c0();
    if ((uVar8 & 1) != 0) {
      _objc_release(uVar7);
      goto LAB_105e3d550;
    }
    uVar8 = uVar1;
    func_0x00010c15ab60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0720c0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar9 & 1) == 0) goto LAB_105e3d578;
  }
  else {
LAB_105e3d560:
    _objc_release(uVar4);
  }
  func_0x00010be27cc0(param_1,param_2,param_3,uVar3);
LAB_105e3d578:
  func_0x00010bde74e0(param_1,param_2,param_3,param_5,uVar3,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e3d624; end: 105e3d6a3; -[SCSelectionStorySectionDataProvider _handleCustomStoryTitleUpdateIfNecessary:isSelected:] */

void FUN_105e3d624(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  
  if (param_4 != 0) {
    func_0x000108f42a50();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x000108f43240();
    if (((((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x000108f432c0(), (uVar1 & 1) != 0)) ||
        (uVar1 = param_3, func_0x000108f43340(), (uVar1 & 1) != 0)) ||
       ((uVar1 = param_3, func_0x000108f43440(), (uVar1 & 1) != 0 ||
        (uVar1 = param_3, func_0x000108f434c0(), (int)uVar1 != 0)))) {
      func_0x00010c289b60(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105e3d6a4; end: 105e3d7ff; -[SCSelectionStorySectionDataProvider _handleOurStoryPlaceTagChanges:isSelected:ourStoryIndex:] */

void FUN_105e3d6a4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined **)(param_1 + 0xd0) = puVar1;
  _objc_release(uVar5);
  uVar2 = *(ulong *)(param_1 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2391e0();
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c074e20();
    *(byte *)(param_1 + 200) = (byte)uVar5 ^ 1;
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  if (*(char *)(param_1 + 0x108) == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined ***)(param_1 + 0xd0) = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3d78;
    _objc_release(uVar5);
    *(undefined1 *)(param_1 + 200) = 0;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1acd60();
  _objc_release(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2887c0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (param_4 != 0) {
    func_0x00010be2fca0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e3d800; end: 105e3d847; -[SCSelectionStorySectionDataProvider _handleSelectedStoryTitleUpdate:] */

void FUN_105e3d800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000108f42a50();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000108f431c0();
  if ((int)uVar1 != 0) {
    func_0x00010c289b60(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e3d848; end: 105e3de9f; -[SCSelectionStorySectionDataProvider _setItemToSelectionStateMap:] */

void FUN_105e3d848(ulong param_1,undefined8 param_2,ulong param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  ulong uVar9;
  ulong uVar10;
  long unaff_x21;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 unaff_x23;
  ulong unaff_x24;
  undefined1 uVar13;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_3;
  func_0x000108425790(param_3,*(undefined8 *)(param_1 + 0xa0));
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = param_3;
  func_0x00010bf529e0();
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 1;
    lVar2 = *(long *)(param_1 + 0x98);
    func_0x00010c0d3c80();
    uVar10 = uStack_148;
    uVar8 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_160 = lVar2;
    _objc_retain(uStack_148);
    param_4 = auStack_100;
    param_5 = 0x10;
    func_0x00010bf52a60();
    uStack_150 = uVar10;
    if (uVar10 != 0) {
      lStack_158 = *plStack_130;
      do {
        unaff_x26 = 0;
        do {
          if (*plStack_130 != lStack_158) {
            _objc_enumerationMutation(uStack_148);
          }
          unaff_x22 = *(long *)(lStack_138 + unaff_x26 * 8);
          if (*(long *)(param_1 + 0x40) == 1) {
            uVar9 = *(ulong *)(param_1 + 0x98);
            func_0x00010c2827c0(unaff_x22);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010bf4ddc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            puVar3 = PTR_PTR_1126c51a0;
            _objc_opt_class(PTR_PTR_1126c51a0);
            uVar9 = uVar10;
            _objc_opt_isKindOfClass(uVar10,puVar3);
            uStack_178 = uVar10;
            if ((uVar9 & 1) == 0) {
              uStack_178 = 0;
            }
            _objc_retain();
            _objc_release(uVar10);
            uVar10 = *(ulong *)(param_1 + 0xa8);
            func_0x00010c2827c0(unaff_x22);
            func_0x00010c0dfd40(uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uStack_148;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uStack_170 = uVar9;
            func_0x00010bf1f3c0();
            uStack_18c = (undefined4)uVar9;
            uStack_198 = *(undefined8 *)(param_1 + 0xb0);
            uVar12 = *(undefined8 *)(param_1 + 0xb8);
            uVar6 = uVar12;
            lStack_168 = unaff_x22;
            func_0x000108f3e0f0();
            uVar11 = *(undefined8 *)(param_1 + 0xf0);
            uStack_1a0 = uVar6;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uStack_180 = uVar11;
            func_0x00010c074e20();
            uStack_1a4 = (undefined4)uVar11;
            uVar6 = *(undefined8 *)(param_1 + 0xf0);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uStack_188 = uVar6;
            func_0x00010c2583c0();
            uVar4 = *(ulong *)(param_1 + 0x118);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = uVar4;
            func_0x00010bf60aa0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = unaff_x24;
            func_0x00010c080120();
            uVar5 = *(undefined8 *)(param_1 + 0xf0);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c258a60();
            unaff_x23 = *(undefined8 *)(param_1 + 0xf0);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = unaff_x23;
            func_0x00010c258640();
            unaff_x22 = lStack_168;
            unaff_x25 = uStack_178;
            uStack_1b0 = (undefined1)uVar11;
            uStack_1c0 = (undefined1)uVar9;
            param_6 = 1;
            uVar9 = uStack_178;
            uStack_1b8 = uVar6;
            FUN_105e40150(uVar8,uStack_178,uVar10,uStack_18c,uStack_198,uVar12,1,uStack_1a0,
                          uStack_1a4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x25);
            _objc_release(unaff_x23);
            _objc_release(uVar5);
            _objc_release(unaff_x24);
            _objc_release(uVar4);
            _objc_release(uStack_188);
            _objc_release(uStack_180);
            _objc_release(uStack_170);
            puVar3 = PTR_PTR_1126aea98;
            _objc_alloc(PTR_PTR_1126aea98);
LAB_105e3dda0:
            func_0x00010bffd260();
            func_0x00010c2827c0(unaff_x22);
            func_0x00010c1d04c0(lStack_160);
            _objc_release(puVar3);
            _objc_release(uVar9);
            _objc_release(uVar10);
          }
          else if (*(long *)(param_1 + 0x40) == 0) {
            uVar10 = uStack_148;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = uVar10;
            func_0x00010bf1f3c0();
            _objc_release(uVar10);
            lVar2 = *(long *)(param_1 + 0xd0);
            if (lVar2 == 0) {
              iVar1 = 0;
            }
            else {
              func_0x00010c071f40();
              iVar1 = (int)lVar2;
            }
            uVar10 = *(ulong *)(param_1 + 0x98);
            func_0x00010c2827c0(unaff_x22);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar10;
            func_0x00010bf4ddc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            puVar3 = PTR_PTR_1126b52c0;
            _objc_opt_class(PTR_PTR_1126b52c0);
            uVar4 = uVar9;
            _objc_opt_isKindOfClass(uVar9,puVar3);
            uVar10 = uVar9;
            if ((uVar4 & 1) == 0) {
              uVar10 = 0;
            }
            _objc_retain();
            _objc_release(uVar9);
            lVar2 = *(long *)(param_1 + 0x130);
            func_0x00010bf529e0();
            uVar9 = uVar10;
            if (lVar2 == 0) {
              unaff_x23 = 0;
              if (iVar1 == 0) goto LAB_105e3dd6c;
LAB_105e3dc44:
              uVar11 = *(undefined8 *)(param_1 + 0xe0);
              func_0x00010c269d40(uVar11);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar11;
              func_0x00010bf6b020();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2887c0();
              _objc_release(uVar6);
              _objc_release(uVar11);
              uVar6 = *(undefined8 *)(param_1 + 0xe0);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1acd60();
              _objc_release(uVar6);
              lVar2 = unaff_x22;
              func_0x00010c2827c0(unaff_x22);
              lVar7 = lStack_160;
              func_0x00010bf529e0(lStack_160);
              uVar11 = *(undefined8 *)(param_1 + 0xe0);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar11;
              func_0x00010c2391e0();
              *(char *)(param_1 + 200) = (char)uVar6;
              _objc_release(uVar11);
              _objc_retain(unaff_x22);
              uVar6 = *(undefined8 *)(param_1 + 0xd0);
              *(long *)(param_1 + 0xd0) = unaff_x22;
              _objc_release(uVar6);
              uVar6 = *(undefined8 *)(param_1 + 0xa8);
              func_0x00010c067fc0(*(undefined8 *)(param_1 + 0xd0));
              func_0x00010c0dfd20(uVar6);
              _objc_retainAutoreleasedReturnValue();
              param_6 = unaff_x23;
              FUN_105e3fb50(uVar10,unaff_x25,*(undefined1 *)(param_1 + 200),lVar2 + 1 == lVar7,uVar6
                            ,unaff_x23);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar6);
            }
            else {
              unaff_x23 = *(undefined8 *)(param_1 + 0x130);
              uVar11 = *(undefined8 *)(param_1 + 0xa8);
              func_0x00010c2827c0(unaff_x22);
              func_0x00010c0dfd40(uVar11);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar11;
              func_0x000108f4242c();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf4b900();
              _objc_release(uVar6);
              _objc_release(uVar11);
              if (iVar1 != 0) goto LAB_105e3dc44;
LAB_105e3dd6c:
              FUN_105e3fe94(uVar10,unaff_x25,unaff_x23);
              _objc_retainAutoreleasedReturnValue();
            }
            puVar3 = PTR_PTR_1126aea98;
            _objc_alloc(PTR_PTR_1126aea98);
            unaff_x24 = uVar10;
            goto LAB_105e3dda0;
          }
          unaff_x26 = unaff_x26 + 1;
        } while (uStack_150 != unaff_x26);
        param_4 = auStack_100;
        param_5 = 0x10;
        uVar10 = uStack_148;
        func_0x00010bf52a60();
        uStack_150 = uVar10;
      } while (uVar10 != 0);
    }
    _objc_release(uStack_148);
    unaff_x21 = lStack_160;
    lVar2 = lStack_160;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(param_1 + 0x98);
    *(long *)(param_1 + 0x98) = lVar2;
    _objc_release(uVar8);
    *(undefined8 *)(param_1 + 0x80) = 2;
    unaff_x19 = param_1 + 0x138;
    _objc_loadWeakRetained();
    uVar10 = param_1;
    func_0x00010c155aa0();
    _objc_release(unaff_x19);
    _objc_release(unaff_x21);
  }
  uVar9 = uStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_105e3dea0;
  uStack_210 = unaff_x26;
  uStack_208 = unaff_x25;
  uStack_200 = unaff_x24;
  uStack_1f8 = unaff_x23;
  lStack_1f0 = unaff_x22;
  lStack_1e8 = unaff_x21;
  uStack_1e0 = param_1;
  lStack_1d8 = unaff_x19;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar10);
  if (*(long *)(uVar9 + 0x40) == 1) {
    uVar8 = *(undefined8 *)(uVar9 + 0x58);
    _objc_retain(uVar8);
  }
  else {
    if (*(long *)(uVar9 + 0x40) != 0) {
      uVar13 = 0;
      uVar8 = 0;
      goto LAB_105e3df50;
    }
    uVar8 = *(undefined8 *)(uVar9 + 0x50);
    _objc_retain(uVar8);
    lVar2 = *(long *)(uVar9 + 0x130);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar13 = (undefined1)*(undefined8 *)(uVar9 + 0x130);
      uVar4 = uVar10;
      func_0x000108f4242c(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(uVar4);
      goto LAB_105e3df50;
    }
  }
  uVar13 = 0;
LAB_105e3df50:
  lVar2 = *(long *)(uVar9 + 0x18);
  (**(code **)(lVar2 + 0x10))
            (lVar2,uVar10,param_5,*(undefined8 *)(uVar9 + 0xb0),param_4,param_6,
             *(undefined1 *)(uVar9 + 200),0,0,0,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puStack_238 = &uStack_240;
  uStack_240 = 0;
  uStack_230 = 0x3032000000;
  pcStack_228 = FUN_105e3c804;
  uStack_220 = 0x105e3c814;
  uStack_218 = 0;
  func_0x00010c0bea20();
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  __Block_object_dispose(&uStack_240,8);
  _objc_release(uStack_218);
  _objc_release(lVar2);
  _objc_release(uVar8);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e3dea0; end: 105e3e093; -[SCSelectionStorySectionDataProvider _containerCellViewModelForSelectionStory:index:isSelected:count:] */

void FUN_105e3dea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar4);
  }
  else {
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar5 = 0;
      uVar4 = 0;
      goto LAB_105e3df50;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar4);
    lVar1 = *(long *)(param_1 + 0x130);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x130);
      uVar2 = param_3;
      func_0x000108f4242c(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(uVar2);
      goto LAB_105e3df50;
    }
  }
  uVar5 = 0;
LAB_105e3df50:
  lVar1 = *(long *)(param_1 + 0x18);
  (**(code **)(lVar1 + 0x10))
            (lVar1,param_3,param_5,*(undefined8 *)(param_1 + 0xb0),param_4,param_6,
             *(undefined1 *)(param_1 + 200),0,0,0,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105e3c804;
  uStack_60 = 0x105e3c814;
  uStack_58 = 0;
  func_0x00010c0bea20();
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e3e094; end: 105e3e103;  */

void FUN_105e3e094(long param_1,undefined8 param_2)

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



/* Entry: 105e3e104; end: 105e3e25f; -[SCSelectionStorySectionDataProvider _onNextSendToEvent:] */

void FUN_105e3e104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 0x138;
  _objc_loadWeakRetained();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105e3e260;
  puStack_70 = &UNK_11086b840;
  lStack_68 = param_1;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c0c1600(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105e3e260; end: 105e3e2cf;  */

void FUN_105e3e260(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e3e2d0; end: 105e3e34b; -[SCSelectionStorySectionDataProvider _configureRecipientCollectionViewCell:] */

void FUN_105e3e2d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class(PTR_PTR_1126b5290);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  func_0x00010c16d9c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e3e34c; end: 105e3e3e3; -[SCSelectionStorySectionDataProvider _configureCarouselCollectionViewCell:] */

void FUN_105e3e34c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5190;
  _objc_opt_class(PTR_PTR_1126c5190);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar4);
  func_0x00010c175080(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e3e3e4; end: 105e3e46b; -[SCSelectionStorySectionDataProvider _configurePlaceTagCarouselCollectionViewCell:] */

void FUN_105e3e3e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4f18);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc940(param_3);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e3e46c; end: 105e3e573; -[SCSelectionStorySectionDataProvider _configureViewMoreCell:] */

void FUN_105e3e46c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5198;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c1d3f20(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105e3e574; end: 105e3e59f;  */

void FUN_105e3e574(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e3e5a0; end: 105e3e5df; -[SCSelectionStorySectionDataProvider _onTapViewMore] */

void FUN_105e3e5a0(long param_1)

{
  *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 5;
  param_1 = param_1 + 0x138;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e3e5e0; end: 105e3e743; -[SCSelectionStorySectionDataProvider _containerCellViewModelForIndexPath:] */

void FUN_105e3e5e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xd0);
  if ((lVar1 == 0) || (func_0x00010c067fc0(), lVar1 < 0)) {
LAB_105e3e6f0:
    puVar6 = *(undefined **)(param_1 + 0x98);
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0xd0);
    func_0x00010c067fc0();
    uVar3 = *(ulong *)(param_1 + 0x98);
    func_0x00010bf529e0();
    if (uVar3 <= uVar2) goto LAB_105e3e6f0;
    lVar1 = param_3;
    func_0x00010c0840e0();
    lVar4 = *(long *)(param_1 + 0xd0);
    func_0x00010c067fc0();
    if (lVar1 <= lVar4) goto LAB_105e3e6f0;
    lVar4 = *(long *)(param_1 + 0xd0);
    func_0x00010c067fc0();
    lVar1 = param_3;
    func_0x00010c0840e0();
    if (lVar1 == lVar4 + 1) {
      lVar1 = param_3;
      func_0x00010c0840e0(param_3);
      lVar4 = *(long *)(param_1 + 0x98);
      func_0x00010bf529e0(lVar4);
      puVar5 = PTR_PTR_1126b52e0;
      _objc_alloc(PTR_PTR_1126b52e0);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1 == lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01f1c0(puVar5,param_2,puVar6,1);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126aea98;
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
      _objc_release(puVar5);
      goto LAB_105e3e714;
    }
    puVar6 = *(undefined **)(param_1 + 0x98);
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    lVar1 = lVar1 + -1;
  }
  func_0x00010c0dfd40(puVar6,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_105e3e714:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e3e744; end: 105e3e897; -[SCSelectionStorySectionDataProvider _containerCellViewMoreCell] */

void FUN_105e3e744(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010bf529e0();
  lVar7 = *(long *)(param_1 + 0x100);
  ppuVar2 = &PTR____CFConstantStringClassReference_110db8398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8398,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((ulong)(lVar1 - lVar7) < 2) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e2c0b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2c0b8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e2c098;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2c098,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(puVar4);
    ppuVar2 = ppuVar3;
  }
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  puVar6 = PTR_PTR_1126c51a8;
  _objc_alloc(PTR_PTR_1126c51a8);
  func_0x00010c053a80();
  func_0x00010bffd260(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e3e898; end: 105e3e8af; -[SCSelectionStorySectionDataProvider dataProviderDelegate] */

void FUN_105e3e898(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e3e8b0; end: 105e3e8bb; -[SCSelectionStorySectionDataProvider setDataProviderDelegate:] */

void FUN_105e3e8b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x138,param_3);
  return;
}



/* Entry: 105e3e8bc; end: 105e3e8c3; -[SCSelectionStorySectionDataProvider sectionDataModel] */

undefined8 FUN_105e3e8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 105e3e8c4; end: 105e3e8cb; -[SCSelectionStorySectionDataProvider updateQueuePerformer] */

undefined8 FUN_105e3e8c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 105e3e8cc; end: 105e3e8d3; -[SCSelectionStorySectionDataProvider sectionDataTrackerObservable] */

undefined8 FUN_105e3e8cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105e3e8d4; end: 105e3ea8b; -[SCSelectionStorySectionDataProvider .cxx_destruct] */

void FUN_105e3e8d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_destroyWeak(param_1 + 0x138);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105e3ea8c; end: 105e3eadb; -[SCSelectionStorySectionHeader setViewModel:] */

void FUN_105e3ea8c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed460;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setViewModel__1126663d8);
  func_0x00010bdf8220(param_1);
  func_0x00010bdc4920(param_1);
  return;
}



/* Entry: 105e3eadc; end: 105e3eae7; +[SCSelectionStorySectionHeader sizeWithViewModel:constrainedToSize:] */

void FUN_105e3eadc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c51b0,PTR_s_sizeWithViewModel_constrainedToS_11266cfe0);
  return;
}



/* Entry: 105e3eae8; end: 105e3eb53; -[SCSelectionStorySectionHeader setShowBadgeOnAccessaryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3eae8(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112737cfc) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112737cfc) = (char)param_3;
  func_0x00010bdeb2e0();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112737d00));
  func_0x00010bdf8220(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc4930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateBadgeViewConstraints_11254ebe8);
  return;
}



/* Entry: 105e3eb54; end: 105e3ec2b; -[SCSelectionStorySectionHeader _createBadgeViewIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3eb54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = param_1;
  func_0x00010c27f7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c2792c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_112737d00;
    if (*(long *)(param_1 + lVar5) == 0) {
      puVar2 = PTR_PTR_1126c51b8;
      _objc_alloc();
      func_0x00010c04eae0();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar4);
      lVar3 = lVar1;
      func_0x00010c262ca0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
    }
    func_0x00010bdf8220(param_1);
    func_0x00010bdc4920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e3ec2c; end: 105e3edd7; -[SCSelectionStorySectionHeader _activateBadgeViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3ec2c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010c27f7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c2792c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    lVar10 = (long)_DAT_112737d00;
    lVar2 = *(long *)(param_1 + lVar10);
    if (lVar2 != 0) {
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c1408a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar1;
      func_0x00010c274200(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + _DAT_112737d04);
      *(undefined **)(param_1 + _DAT_112737d04) = puVar7;
      _objc_release(uVar9);
      _objc_release(uVar6);
      _objc_release(lVar10);
      _objc_release(uVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar1 + _DAT_112737d04) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf65bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_deactivateConstraints__1125b70a0
              );
    return;
  }
  return;
}



/* Entry: 105e3edd8; end: 105e3edf7; -[SCSelectionStorySectionHeader _deactivateBadgeViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3edd8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112737d04) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf65bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_deactivateConstraints__1125b70a0
              );
    return;
  }
  return;
}



/* Entry: 105e3edf8; end: 105e3ee07; -[SCSelectionStorySectionHeader showBadgeOnAccessaryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105e3edf8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112737cfc);
}



/* Entry: 105e3ee08; end: 105e3ee47; -[SCSelectionStorySectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3ee08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737d04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737d00,0);
  return;
}



/* Entry: 105e3ee48; end: 105e3ef7b; -[SCSelectionStorySectionHeaderSupplementaryViewProvider initWithHeaderViewModel:customStoriesOnboardingManager:selectionTracker:hideHeaderWhenSpotlightSelected:] */

undefined1 *
FUN_105e3ee48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ed468;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_6;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c22c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e3ef7c; end: 105e3ef83; -[SCSelectionStorySectionHeaderSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_105e3ef7c(void)

{
  return 1;
}



/* Entry: 105e3ef84; end: 105e3f04f; -[SCSelectionStorySectionHeaderSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_105e3ef84(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_30;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    ppuVar2 = ppuVar5;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar1 + 0x40;
      _objc_loadWeakRetained();
      puVar3 = puVar6;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126c51c0;
      _objc_opt_class(PTR_PTR_1126c51c0);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar6);
      puVar6 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar3);
      func_0x00010c2226c0(puVar6);
      func_0x00010c161980(puVar6);
      func_0x00010bf86d80(*(undefined8 *)(puVar1 + 0x20));
      uVar7 = *(undefined8 *)(puVar1 + 0x18);
      _objc_retain(puVar6);
      func_0x00010c25ff60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(puVar1 + 0x10);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22c260();
      func_0x00010c2017c0(puVar6);
      _objc_release(uVar7);
      _objc_release(puVar6);
    }
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e3f050; end: 105e3f1df; -[SCSelectionStorySectionHeaderSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_105e3f050(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1 + 0x40;
    _objc_loadWeakRetained();
    uVar1 = uVar4;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c51c0;
    _objc_opt_class(PTR_PTR_1126c51c0);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar4 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
    func_0x00010c2226c0(uVar4);
    func_0x00010c161980(uVar4);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar4);
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22c260();
    func_0x00010c2017c0(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e3f1e0; end: 105e3f27b;  */

void FUN_105e3f1e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105e3f27c;
  puStack_38 = &UNK_110841f80;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 105e3f27c; end: 105e3f28f;  */

void FUN_105e3f27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2017d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setShowBadgeOnAccessaryView__11265e018,
             *(long *)(param_1 + 0x28) == 0);
  return;
}



/* Entry: 105e3f290; end: 105e3f47f; -[SCSelectionStorySectionHeaderSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined * FUN_105e3f290(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)param_4 != 0) {
    if (*(char *)(param_2 + 0x30) == '\x01') {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      param_4 = *(undefined **)(param_2 + 0x28);
      func_0x00010c0ecca0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_4;
      func_0x00010bf52a60();
      if (puVar1 != (undefined *)0x0) {
        lVar5 = *plStack_130;
        do {
          puVar6 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar5) {
              _objc_enumerationMutation(param_4);
            }
            uVar2 = *(ulong *)(lStack_138 + (long)puVar6 * 8);
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            _objc_release(uVar2);
            uVar3 = uVar4;
            func_0x00010c0720c0(uVar4,param_3,&PTR____CFConstantStringClassReference_110f52df8);
            _objc_release(uVar4);
            if ((uVar3 & 1) != 0) {
              _objc_release();
              goto LAB_105e3f438;
            }
            puVar6 = puVar6 + 1;
          } while (puVar1 != puVar6);
          puVar1 = param_4;
          func_0x00010bf52a60(param_4,param_3,&uStack_140,auStack_f8,0x10);
        } while (puVar1 != (undefined *)0x0);
      }
      _objc_release(param_4);
    }
    param_4 = PTR_PTR_1126c51c0;
    func_0x00010c23d6e0(param_1,0x7fefffffffffffff,PTR_PTR_1126c51c0,param_3,
                        *(undefined8 *)(param_2 + 8));
  }
LAB_105e3f438:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    return *(undefined **)(param_4 + 0x38);
  }
  return param_4;
}



/* Entry: 105e3f480; end: 105e3f487; -[SCSelectionStorySectionHeaderSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_105e3f480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105e3f488; end: 105e3f48f; -[SCSelectionStorySectionHeaderSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_105e3f488(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e3f490; end: 105e3f4a7; -[SCSelectionStorySectionHeaderSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_105e3f490(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e3f4a8; end: 105e3f4b3; -[SCSelectionStorySectionHeaderSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_105e3f4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105e3f4b4; end: 105e3f4bb; -[SCSelectionStorySectionHeaderSupplementaryViewProvider actionHandler] */

undefined8 FUN_105e3f4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105e3f4bc; end: 105e3f4eb; -[SCSelectionStorySectionHeaderSupplementaryViewProvider setActionHandler:] */

void FUN_105e3f4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e3f4ec; end: 105e3f55f; -[SCSelectionStorySectionHeaderSupplementaryViewProvider .cxx_destruct] */

void FUN_105e3f4ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e3f560; end: 105e3fa9b;  */

void FUN_105e3f560(undefined *param_1,byte param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  byte bStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR_PTR_1126b5658;
  _objc_opt_class(PTR_PTR_1126b5658);
  puVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,ppuVar1);
  puVar11 = param_1;
  if (((ulong)puVar2 & 1) == 0) {
    puVar11 = (undefined *)0x0;
  }
  _objc_retain(puVar11);
  _objc_release(param_1);
  puVar2 = puVar11;
  func_0x00010c15a7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar15;
  func_0x00010c15a7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar15 = puVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar15 = puVar3;
  func_0x000108f43028();
  if (((((ulong)puVar15 & 1) == 0) &&
      (puVar15 = puVar3, func_0x000108f430b0(), ((ulong)puVar15 & 1) == 0)) &&
     (puVar15 = puVar3, func_0x000108f43138(), (int)puVar15 == 0)) {
    puVar15 = puVar3;
    func_0x000108f431c0();
    puVar12 = PTR_PTR_1126b5650;
    if ((int)puVar15 == 0) {
      func_0x00010c15a7c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc0000000;
      pcStack_98 = FUN_105e3fa9c;
      puStack_90 = &UNK_1108ec870;
      ppuVar1 = &puStack_a8;
      puVar12 = puVar11;
      bStack_88 = param_2;
      func_0x000100504554();
      _objc_release(puVar11);
      puVar11 = PTR_PTR_1126b5658;
      _objc_alloc();
      func_0x00010c043e40();
      puVar15 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      _objc_release(puVar11);
      goto LAB_105e3f938;
    }
    if ((param_2 & 1) != 0) goto LAB_105e3f66c;
    _objc_retain(puVar4);
    _objc_retain(puVar3);
    _objc_alloc();
  }
  else {
    if ((param_2 & 1) == 0) {
      _objc_retain(puVar3);
      _objc_retain(puVar4);
      puVar11 = PTR_PTR_1126b5650;
      _objc_alloc();
      func_0x00010c043e20();
      puVar15 = puVar3;
      func_0x000108f43028();
      if ((((ulong)puVar15 & 1) == 0) &&
         (puVar15 = puVar3, func_0x000108f430b0(), ((ulong)puVar15 & 1) == 0)) {
        puVar12 = puVar3;
        func_0x000108f43138();
        puVar15 = (undefined *)0x0;
        if ((int)puVar12 != 0) goto LAB_105e3f79c;
      }
      else {
LAB_105e3f79c:
        puVar12 = PTR_PTR_1126c51c8;
        func_0x00010c0d4dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar12;
        func_0x000108f42a50();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b5650;
        _objc_alloc();
        func_0x00010c043e20();
        puVar7 = PTR_PTR_1126c51c8;
        func_0x00010c0d4dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x000108f42a50();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b5650;
        _objc_alloc();
        func_0x00010c043e20();
        puVar10 = PTR_PTR_1126b5658;
        _objc_alloc();
        puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_80 = puVar11;
        puStack_78 = puVar6;
        puStack_70 = puVar9;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c043e40();
        _objc_release(puVar15);
        puVar15 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
        func_0x00010c01b460();
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar12);
      }
      _objc_release(puVar11);
      _objc_release(puVar4);
      puVar12 = puVar3;
      goto LAB_105e3f938;
    }
LAB_105e3f66c:
    puVar12 = PTR_PTR_1126b5650;
    _objc_retain(puVar4);
    _objc_retain(puVar3);
    _objc_alloc();
  }
  func_0x00010c043e20();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar11 = PTR_PTR_1126b5658;
  _objc_alloc();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043e40();
  _objc_release(puVar15);
  puVar15 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar11);
LAB_105e3f938:
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar15 = PTR_PTR_1126b5650;
    _objc_retain(ppuVar1);
    _objc_alloc(puVar15);
    ppuVar13 = ppuVar1;
    func_0x00010c15a7a0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar1;
    func_0x00010c247520(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    func_0x00010c043e20(puVar15);
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}


