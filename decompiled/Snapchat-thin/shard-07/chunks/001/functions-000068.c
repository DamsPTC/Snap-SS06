/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105145254; end: 10514525b; -[SCSendToSpotlightSectionDataProvider _setShouldAllowSpotlightRemixing:] */

void FUN_105145254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setShouldAllowSpotlightRemixing__11265d9f0);
  return;
}



/* Entry: 10514525c; end: 105145263; -[SCSendToSpotlightSectionDataProvider _setShouldCreateHighlight:] */

void FUN_10514525c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c200370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setShouldCreateHighlight__11265db00);
  return;
}



/* Entry: 105145264; end: 105145763; -[SCSendToSpotlightSectionDataProvider _spotlightContainerCellViewModelsFromNumberOfItemsInSection] */

void FUN_105145264(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = param_1;
  func_0x00010bf4b360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    func_0x00010c0af900(*(undefined8 *)(param_1 + 0x120));
    puVar14 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    func_0x00010befa120(puVar2);
    lVar9 = param_1;
    func_0x00010be65720();
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    puVar14 = puVar2;
    if (lVar9 == 1) {
      func_0x00010bf51e00(puVar2);
    }
    else {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105145764;
      puStack_88 = &UNK_1108429c8;
      _objc_retain(puVar2);
      ppuVar4 = &puStack_a0;
      puStack_80 = puVar2;
      _objc_retainBlock();
      puVar5 = PTR_PTR_1126b52d0;
      _objc_alloc();
      ppuVar6 = ppuVar4;
      (*(code *)ppuVar4[2])(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010bee66c0(param_1);
      func_0x00010c043080(0x4060400000000000);
      _objc_release(ppuVar6);
      puVar7 = PTR_PTR_1126aea98;
      _objc_alloc();
      func_0x00010bffd260();
      func_0x00010befa120(puVar2);
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c2343e0();
      if (iVar1 != 0) {
        _objc_initWeak(auStack_a8,param_1);
        puStack_d0 = puVar10;
        uStack_c8 = 0xc2000000;
        uStack_c0 = 0x105145798;
        puStack_b8 = &UNK_110849200;
        _objc_copyWeak(auStack_b0,auStack_a8);
        ppuVar6 = &puStack_d0;
        _objc_retainBlock();
        lVar8 = *(long *)(param_1 + 0x158);
        func_0x00010bf113a0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c08fa60();
        if (lVar9 == 0) {
          func_0x000108f584a4();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar9 = *(long *)(param_1 + 0x158);
          func_0x00010bf113a0(lVar9);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar8);
        puVar10 = PTR_PTR_1126b52d8;
        _objc_alloc(PTR_PTR_1126b52d8);
        puVar11 = puVar10;
        func_0x000108f584d4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c22dfa0(*(undefined8 *)(param_1 + 0x20));
        ppuVar12 = ppuVar4;
        (*(code *)ppuVar4[2])();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        func_0x00010bee66c0();
        func_0x00010c053880(puVar10);
        _objc_release(ppuVar12);
        _objc_release(puVar11);
        puVar11 = PTR_PTR_1126aea98;
        _objc_alloc(PTR_PTR_1126aea98);
        func_0x00010bffd260();
        func_0x00010befa120(puVar2);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(lVar9);
        _objc_release(ppuVar6);
        _objc_destroyWeak(auStack_b0);
        _objc_destroyWeak(auStack_a8);
        puVar10 = PTR___NSConcreteStackBlock_11034bd00;
      }
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c233280();
      if (iVar1 != 0) {
        _objc_initWeak(auStack_a8,param_1);
        uStack_f0 = 0xc2000000;
        uStack_e8 = 0x1051457cc;
        puStack_e0 = &UNK_110849200;
        puStack_f8 = puVar10;
        _objc_copyWeak(auStack_d8,auStack_a8);
        ppuVar6 = &puStack_f8;
        _objc_retainBlock();
        puVar10 = PTR_PTR_1126b52d8;
        _objc_alloc(PTR_PTR_1126b52d8);
        puVar11 = puVar10;
        func_0x000108f584ec();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar11;
        func_0x000108f58504();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c22dd20(*(undefined8 *)(param_1 + 0x20));
        ppuVar12 = ppuVar4;
        (*(code *)ppuVar4[2])();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        func_0x00010bee66c0();
        func_0x00010c053880(puVar10);
        _objc_release(ppuVar12);
        _objc_release(puVar13);
        _objc_release(puVar11);
        puVar11 = PTR_PTR_1126aea98;
        _objc_alloc(PTR_PTR_1126aea98);
        func_0x00010bffd260();
        func_0x00010befa120(puVar2);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(ppuVar6);
        _objc_destroyWeak(auStack_d8);
        _objc_destroyWeak(auStack_a8);
      }
      func_0x00010bf51e00(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(ppuVar4);
      _objc_release(puStack_80);
    }
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105145764; end: 1051457ff;  */

void FUN_105145764(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,lVar2 == 0);
  return;
}



/* Entry: 105145800; end: 1051459f7; -[SCSendToSpotlightSectionDataProvider _snapMapContainerCellViewModelsFromNumberOfItemsInSection] */

void FUN_105145800(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_1;
  func_0x00010bf4b360(param_1,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c0af900(*(undefined8 *)(param_1 + 0x120),param_2,1);
    puVar11 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    func_0x00010befa120(puVar1,param_2,lVar2);
    lVar3 = param_1;
    func_0x00010be65700(param_1,param_2,lVar2);
    puVar11 = puVar1;
    if (lVar3 == 1) {
      func_0x00010bf51e00(puVar1);
    }
    else {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1051459f8;
      puStack_68 = &UNK_11086b8a0;
      _objc_retain(puVar1);
      puStack_60 = puVar1;
      lStack_58 = param_1;
      _objc_retainBlock();
      uVar5 = *(undefined8 *)(param_1 + 0x140);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c2391e0();
      _objc_release(uVar5);
      if ((int)uVar6 != 0) {
        puVar7 = PTR_PTR_1126b52e0;
        _objc_alloc(PTR_PTR_1126b52e0);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar8 = (undefined1 *)ppuVar4;
        (**(code **)((long)ppuVar4 + 0x10))(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf1f3c0();
        func_0x00010c0df6e0(puVar10,param_2,puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01f1c0(puVar7,param_2,puVar10,1);
        _objc_release(puVar10);
        _objc_release(puVar8);
        puVar10 = PTR_PTR_1126aea98;
        _objc_alloc(PTR_PTR_1126aea98);
        func_0x00010bffd260();
        func_0x00010befa120(puVar1,param_2,puVar10);
        _objc_release(puVar10);
        _objc_release(puVar7);
      }
      func_0x00010bf51e00(puVar1);
      _objc_release(ppuVar4);
      _objc_release(puStack_60);
    }
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1051459f8; end: 105145a4b;  */

void FUN_1051459f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0(lVar2);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010be656e0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,lVar2 == lVar3 + -1);
  return;
}



/* Entry: 105145a4c; end: 105145bdf; -[SCSendToSpotlightSectionDataProvider _containerCellViewModelsFromNumberOfItemsInSectionForIndexPaths:] */

void FUN_105145a4c(long param_1,undefined1 *param_2,undefined *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  ppuVar8 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be65540();
  if (lVar2 == 1) {
    lVar2 = *(long *)(param_1 + 0xd0);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)param_2;
    goto LAB_105145b98;
  }
  lVar2 = param_1;
  func_0x00010bebeca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bebce40();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x148) == 2) {
LAB_105145b18:
    lVar4 = lVar3;
  }
  else {
    lVar4 = lVar2;
    if (*(long *)(param_1 + 0x148) == 3) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0xf8);
      func_0x000108f4868c();
      if (iVar1 != 0) goto LAB_105145b18;
    }
  }
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105145be0;
  puStack_68 = &UNK_11086b8d0;
  lStack_60 = lVar4;
  lStack_58 = param_1;
  _objc_retain();
  puVar9 = param_3;
  func_0x000100504554();
  _objc_release(lStack_60);
  _objc_release(lVar4);
  _objc_release(lVar3);
LAB_105145b98:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(ppuVar8);
    puVar5 = (undefined1 *)ppuVar8;
    func_0x00010c142240();
    puVar6 = *(undefined1 **)(param_3 + 0x20);
    func_0x00010bf529e0();
    if (puVar5 < puVar6) {
      puVar9 = *(undefined **)(param_3 + 0x20);
      func_0x00010c142240(ppuVar8);
      func_0x00010c0dfd40(puVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar9 = PTR_PTR_1126aea98;
      _objc_alloc(PTR_PTR_1126aea98);
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010bdee7c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffd260(puVar9);
      _objc_release(uVar7);
    }
    _objc_release(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105145be0; end: 105145ca7;  */

void FUN_105145be0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c142240();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x00010c142240(param_2);
    func_0x00010c0dfd40(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bdee7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd260(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105145ca8; end: 105145d27; -[SCSendToSpotlightSectionDataProvider containerViewModelForSelectionStoryType:] */

void FUN_105145ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105145d28;
  puStack_38 = &UNK_11086b900;
  lStack_30 = param_1;
  uStack_28 = param_3;
  func_0x0001006372a4(uVar2,&puStack_50);
  uVar1 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105145d28; end: 105145d83;  */

undefined8 FUN_105145d28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf34020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be971e0(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105145d84; end: 105145e1f; -[SCSendToSpotlightSectionDataProvider _reuseIdentifierMatchesSelectionStoryType:selectionStoryType:] */

ulong FUN_105145d84(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_4 == 2) {
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x68));
    if ((uVar2 & 1) != 0) {
LAB_105145de0:
      uVar2 = 1;
      goto LAB_105145e04;
    }
    lVar1 = 0x78;
  }
  else {
    if (param_4 != 5) {
      uVar2 = 0;
      goto LAB_105145e04;
    }
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x60));
    if ((uVar2 & 1) != 0) goto LAB_105145de0;
    lVar1 = 0x70;
  }
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + lVar1));
LAB_105145e04:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105145e20; end: 105145f9f; -[SCSendToSpotlightSectionDataProvider _createTopicCarouselViewController] */

void FUN_105145e20(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  uVar1 = *(ulong *)(param_1 + 0xe8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c129720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22dd20();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c073920();
  uVar5 = uVar1;
  func_0x00010bf59a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_retain(uVar5);
  _objc_opt_class(puVar6);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105145fa0; end: 105146087; -[SCSendToSpotlightSectionDataProvider _updateSpotlightPlaceTagOnSelectionStateChange] */

void FUN_105145fa0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0xd0);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b52c0;
  _objc_opt_class(PTR_PTR_1126b52c0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010beee800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bfba0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105146088; end: 10514609b;  */

void FUN_105146088(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2887d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),
             PTR_s_updatePlaceTagDisplayStateForSou_11267fc18,4,param_2);
  return;
}



/* Entry: 10514609c; end: 1051460bb; -[SCSendToSpotlightSectionDataProvider _useFullyRoundedCornersStyle] */

bool FUN_10514609c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x158);
  func_0x00010bf34120(lVar1);
  return lVar1 == 1;
}



/* Entry: 1051460bc; end: 10514616f; -[SCSendToSpotlightSectionDataProvider _handleOurStoryPlaceTagChanges:isSelected:ourStoryIndex:] */

void FUN_1051460bc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2887c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_4 != 0) {
    uVar2 = param_3;
    func_0x000108f42a50();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x000108f431c0();
    if ((int)uVar1 != 0) {
      func_0x00010c289b60(*(undefined8 *)(param_1 + 0x28),param_2,uVar2);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105146170; end: 10514632b; -[SCSendToSpotlightSectionDataProvider _selectionStoriesHasSnapMap:] */

ulong FUN_105146170(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c0bee40(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  bVar1 = *(byte *)(puStack_110 + 3);
  __Block_object_dispose(&uStack_118,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (ulong)(bVar1 & 1);
  }
  ___stack_chk_fail();
  uVar4 = 8;
  __Block_object_dispose(&uStack_118);
  __Unwind_Resume();
  func_0x00010c0720c0();
  *(char *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = (char)uVar4;
  return uVar4;
}



/* Entry: 10514632c; end: 105146367;  */

void FUN_10514632c(long param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,&PTR____CFConstantStringClassReference_110e43098);
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)param_2;
  return;
}



/* Entry: 105146368; end: 10514637f; -[SCSendToSpotlightSectionDataProvider dataProviderDelegate] */

void FUN_105146368(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105146380; end: 10514638b; -[SCSendToSpotlightSectionDataProvider setDataProviderDelegate:] */

void FUN_105146380(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x170,param_3);
  return;
}



/* Entry: 10514638c; end: 105146393; -[SCSendToSpotlightSectionDataProvider sectionDataModel] */

undefined8 FUN_10514638c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 105146394; end: 10514639b; -[SCSendToSpotlightSectionDataProvider updateQueuePerformer] */

undefined8 FUN_105146394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 10514639c; end: 1051465b3; -[SCSendToSpotlightSectionDataProvider .cxx_destruct] */

void FUN_10514639c(long param_1)

{
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_destroyWeak(param_1 + 0x170);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
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



/* Entry: 1051465b4; end: 10514665f; -[SCSendToSpotlightSectionDataSource initWithSpotlightStoryObservableRepository:useSpotlightSnapMap:selectionTracker:] */

undefined1 *
FUN_1051465b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6670;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105146660; end: 105146723; -[SCSendToSpotlightSectionDataSource selectionStoryObservableForSectionIdentifier:query:] */

void FUN_105146660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12cf8);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12b78);
    if ((int)uVar1 == 0) {
      param_1 = 0;
      goto LAB_105146708;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c0ecca0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9e0a0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar2;
    func_0x00010c24c500();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
LAB_105146708:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105146724; end: 105146813; -[SCSendToSpotlightSectionDataSource _selectedSelectionStoryObservable:] */

void FUN_105146724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24c500();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105146814;
  puStack_50 = &UNK_110854bd0;
  uStack_48 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105146814; end: 10514688f;  */

void FUN_105146814(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105146890;
  puStack_30 = &UNK_11086b9c0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x0001006372a4(param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105146890; end: 10514689f;  */

ulong FUN_105146890(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **in_x5;
  undefined **in_x7;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_f8 [16];
  long lStack_78;
  
  lVar7 = *(long *)(param_1 + 0x20);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar7);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_138 = 0;
  puStack_140 = (undefined *)0x0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(lVar7);
  ppuVar9 = &puStack_140;
  ppuVar10 = apuStack_f8;
  ppuVar11 = (undefined **)0x10;
  lVar5 = lVar7;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar14 = *plStack_130;
    do {
      lVar15 = 0;
      do {
        if (*plStack_130 != lVar14) {
          _objc_enumerationMutation(lVar7);
        }
        uVar13 = *(ulong *)(lStack_138 + lVar15 * 8);
        uVar8 = uVar13;
        func_0x000108425a5c();
        if (((uVar8 & 1) == 0) && (uVar8 = uVar13, func_0x000108425b30(), (uVar8 & 1) == 0)) {
          uVar8 = uVar13;
          func_0x000108425950();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar8);
          func_0x0001084259b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar13);
        }
        lVar15 = lVar15 + 1;
      } while (lVar5 != lVar15);
      ppuVar9 = &puStack_140;
      ppuVar10 = apuStack_f8;
      ppuVar11 = (undefined **)0x10;
      lVar5 = lVar7;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar7);
  puVar6 = puVar3;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar6 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    uStack_160 = 0;
    uStack_150 = 0x2020000000;
    uStack_148 = 0;
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    puStack_180 = &UNK_10697a09c;
    puStack_178 = &UNK_11094e560;
    puStack_168 = &uStack_160;
    puStack_158 = &uStack_160;
    _objc_retain(puVar4);
    puStack_1c0 = puVar1;
    uStack_1b8 = 0xc2000000;
    puStack_1b0 = &UNK_10697a190;
    puStack_1a8 = &UNK_11094e590;
    puStack_198 = &uStack_160;
    puStack_170 = puVar4;
    _objc_retain(puVar3);
    puStack_1f0 = puVar1;
    uStack_1e8 = 0xc2000000;
    puStack_1e0 = &UNK_10697a1c4;
    puStack_1d8 = &UNK_11094e5c0;
    puStack_1c8 = &uStack_160;
    puStack_1a0 = puVar3;
    _objc_retain(puVar3);
    puStack_220 = puVar1;
    uStack_218 = 0xc2000000;
    puStack_210 = &UNK_10697a1f8;
    puStack_208 = &UNK_11094e5f0;
    puStack_1f8 = &uStack_160;
    puStack_1d0 = puVar3;
    _objc_retain(puVar3);
    puStack_250 = puVar1;
    uStack_248 = 0xc2000000;
    puStack_240 = &UNK_10697a22c;
    puStack_238 = &UNK_11094e620;
    puStack_228 = &uStack_160;
    puStack_200 = puVar3;
    _objc_retain(puVar3);
    puStack_280 = puVar1;
    uStack_278 = 0xc2000000;
    puStack_270 = &UNK_10697a260;
    puStack_268 = &UNK_11094e650;
    puStack_258 = &uStack_160;
    puStack_230 = puVar3;
    _objc_retain(lVar7);
    lStack_260 = lVar7;
    _objc_retain(puVar3);
    ppuVar9 = &puStack_190;
    ppuVar10 = &puStack_1c0;
    ppuVar11 = &puStack_1f0;
    in_x5 = &puStack_220;
    in_x7 = &puStack_280;
    func_0x00010c0bee40(param_2);
    uVar12 = (uint)*(byte *)(puStack_158 + 3);
    _objc_release(puVar3);
    _objc_release(lStack_260);
    _objc_release(puStack_230);
    _objc_release(puStack_200);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1a0);
    _objc_release(puStack_170);
    __Block_object_dispose(&uStack_160,8);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (ulong)(uVar12 & 1);
  }
  ___stack_chk_fail();
  uVar8 = 8;
  __Block_object_dispose(&uStack_160,8);
  __Unwind_Resume();
  _objc_retain(uVar8);
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar11);
  _objc_retain(in_x5);
  _objc_retain(in_x7);
  if (ppuVar10 == (undefined **)0x2) {
    uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x20);
  }
  else if (ppuVar10 == (undefined **)0x1) {
    uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x20);
  }
  else {
    if (ppuVar10 != (undefined **)0x0) goto code_r0x00010697a154;
    uVar2 = (undefined1)*(undefined8 *)(param_2 + 0x20);
  }
  func_0x00010bf4b900();
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = uVar2;
code_r0x00010697a154:
  _objc_release(in_x7);
  _objc_release(in_x5);
  _objc_release(ppuVar11);
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return uVar8;
}



/* Entry: 1051468a0; end: 1051468db; -[SCSendToSpotlightSectionDataSource .cxx_destruct] */

void FUN_1051468a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051468dc; end: 1051469d7; -[SCSendToSpotlightSectionDescriptor initWithSectionIdentifier:sendToExperimentConfiguration:sendToUIConfiguration:circumstanceEngine:] */

undefined1 *
FUN_1051468dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6678;
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



/* Entry: 1051469d8; end: 105146acf; -[SCSendToSpotlightSectionDescriptor sectionDescriptorForQuery:] */

void FUN_1051469d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = 0;
  func_0x000106c9d38c(0,0,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f48528(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = param_3;
  func_0x00010c11da20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000106c9c554(0xbff0000000000000,0,0x4024000000000000,0,uVar5,uVar4,uVar1,puVar2,
                      (uint)uVar3 ^ 1,(uint)uVar3 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105146ad0; end: 105146b17; -[SCSendToSpotlightSectionDescriptor .cxx_destruct] */

void FUN_105146ad0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105146b18; end: 105146bcb; -[SCSendToSpotlightToggleCell initWithFrame:] */

undefined1 * FUN_105146b18(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e6680;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcde0(puVar1);
    _objc_release(puVar2);
    func_0x00010beb0340(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105146bcc; end: 105146c33; -[SCSendToSpotlightToggleCell layoutSubviews] */

void FUN_105146bcc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6680;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010beda860(param_1);
  func_0x00010bed3a60(param_1);
  func_0x00010bedfcc0(param_1);
  func_0x00010bedfac0(param_1);
  func_0x00010bedb2c0(param_1);
  return;
}



/* Entry: 105146c34; end: 105146ca3; -[SCSendToSpotlightToggleCell applyLayoutAttributes:] */

void FUN_105146c34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_applyLayoutAttributes__112527ed0;
  puStack_38 = PTR_PTR_1126e6680;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x000108fdaa20(param_1,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 105146ca4; end: 105146ddb; -[SCSendToSpotlightToggleCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105146ca4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b52d8;
  _objc_opt_class(PTR_PTR_1126b52d8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b52d8;
  if (uVar1 != 0) {
    lVar7 = (long)_DAT_11271d3f0;
    uVar6 = *(ulong *)(param_1 + lVar7);
    _objc_retain(uVar6);
    _objc_opt_class(puVar2);
    uVar4 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar2);
    uVar3 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar6);
    uVar4 = param_3;
    FUN_105148ab4(param_3,uVar3);
    if ((uVar4 & 1) == 0) {
      uVar4 = param_3;
      func_0x00010bfbbf20();
      *(char *)(param_1 + _DAT_11271d3f4) = (char)uVar4;
      _objc_retain(param_3);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      *(ulong *)(param_1 + lVar7) = uVar1;
      _objc_release(uVar5);
      uVar4 = uVar3;
      func_0x00010c076140();
      if ((int)uVar4 == 0) {
        func_0x00010c1fce20(param_1);
      }
      else {
        func_0x00010c1ee980(param_1);
      }
      func_0x00010bf47d60(*(undefined8 *)(param_1 + _DAT_11271d3f8));
      func_0x00010c1cbe20(param_1);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105146ddc; end: 105146f5f; +[SCSendToSpotlightToggleCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_105146ddc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b52d8;
  _objc_opt_class(PTR_PTR_1126b52d8);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar3 = param_5;
    func_0x00010c073fc0();
    dVar6 = 56.0;
    if ((int)uVar3 == 0) {
      dVar6 = 80.0;
    }
    puVar2 = PTR_PTR_1126b52e8;
    _objc_alloc_init(PTR_PTR_1126b52e8);
    func_0x00010bf47d60();
    puVar4 = puVar2;
    func_0x00010c2a5060(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf49580(param_1 - dVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010bfe0660(puVar2);
    _objc_retainAutoreleasedReturnValue();
    param_2 = param_2 + -16.0;
    puVar5 = puVar4;
    func_0x00010bf49580(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c267040(param_1 - dVar6,param_2,puVar2);
    param_2 = param_2 + 16.0;
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 105146f60; end: 105146f7f; -[SCSendToSpotlightToggleCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105146f60(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11271d3fc) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11271d3fc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105146f80; end: 105147017; -[SCSendToSpotlightToggleCell setSeparatorMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105146f80(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong *)(param_1 + _DAT_11271d400) == param_3) {
    return;
  }
  *(ulong *)(param_1 + _DAT_11271d400) = param_3;
  if (((uint)param_3 >> 1 & 1) != 0) {
    func_0x00010bdeb740(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11271d404));
  if ((param_3 & 1) != 0) {
    func_0x00010bdf4e80(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11271d408));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 105147018; end: 10514709f; -[SCSendToSpotlightToggleCell setSeparatorColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105147018(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11271d40c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071c60(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11271d408),param_2,param_3);
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11271d404),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051470a0; end: 1051470cb; -[SCSendToSpotlightToggleCell _setupSubviews] */

void FUN_1051470a0(undefined8 param_1)

{
  func_0x00010bead720();
  func_0x00010beaac20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beb0a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupToggleCellContentView_112589c28);
  return;
}



/* Entry: 1051470cc; end: 1051475d3; -[SCSendToSpotlightToggleCell _setupLayoutGuides] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051470cc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  lVar23 = (long)_DAT_11271d410;
  uVar19 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar2;
  _objc_release(uVar19);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar4;
  func_0x00010bf493c0(0xc044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + _DAT_11271d414);
  *(undefined8 *)(param_1 + _DAT_11271d414) = uVar19;
  _objc_release(uVar20);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar5;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493c0(0x8000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar8;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar11);
  _objc_release(uVar20);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(lVar7);
  _objc_release(lVar22);
  _objc_release(uVar6);
  _objc_release(uVar19);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  lVar22 = (long)_DAT_11271d418;
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar2;
  _objc_release(uVar19);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = *(long *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf1ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar6;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08de00(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar13;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar15;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar11);
  _objc_release(uVar20);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar19);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b52d8;
  uVar21 = *(ulong *)(lVar12 + _DAT_11271d3f0);
  _objc_retain(uVar21);
  _objc_opt_class(puVar2);
  uVar17 = uVar21;
  _objc_opt_isKindOfClass(uVar21,puVar2);
  uVar1 = uVar21;
  if ((uVar17 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar21);
  uVar17 = uVar1;
  func_0x00010c073fc0();
  uVar19 = 0xc030000000000000;
  if ((int)uVar17 == 0) {
    uVar19 = 0xc044000000000000;
  }
  func_0x00010c181140(uVar19,*(undefined8 *)(lVar12 + _DAT_11271d414));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051475d4; end: 10514766f; -[SCSendToSpotlightToggleCell _updateLayoutGuideConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051475d4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b52d8;
  uVar4 = *(ulong *)(param_1 + _DAT_11271d3f0);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c073fc0();
  uVar5 = 0xc030000000000000;
  if ((int)uVar3 == 0) {
    uVar5 = 0xc044000000000000;
  }
  func_0x00010c181140(uVar5,*(undefined8 *)(param_1 + _DAT_11271d414));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105147670; end: 105147947; -[SCSendToSpotlightToggleCell _setupBackgroundCardView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105147670(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b52f0;
  _objc_opt_new();
  lVar17 = (long)_DAT_11271d41c;
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c22a660(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar13);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11271d410;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  lStack_90 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uVar13;
  func_0x00010bf493a0(lVar2,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar17);
  lStack_a0 = lVar2;
  lStack_88 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_a8 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  uStack_80 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar17);
  uStack_78 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uStack_a8);
  _objc_release(lStack_a0);
  _objc_release(uStack_98);
  lVar2 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_105147948;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126b52e8;
  uStack_110 = uVar6;
  uStack_108 = uVar5;
  uStack_100 = uVar3;
  uStack_f8 = uVar13;
  uStack_f0 = uVar4;
  lStack_e8 = lVar17;
  puStack_e0 = puVar1;
  uStack_d8 = uVar9;
  uStack_d0 = uVar7;
  uStack_c8 = uVar8;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_alloc_init();
  lVar14 = (long)_DAT_11271d3f8;
  uVar13 = *(undefined8 *)(lVar2 + lVar14);
  *(undefined **)(lVar2 + lVar14) = puVar10;
  _objc_release(uVar13);
  lVar15 = lVar2;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar15);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = *(long *)(lVar2 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_11271d418;
  uVar3 = *(undefined8 *)(lVar2 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar17;
  func_0x00010bf493a0(lVar17,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar14);
  lStack_138 = lVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + lVar16);
  func_0x00010bf1ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + lVar14);
  uStack_130 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + lVar16);
  func_0x00010c08de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar2 + lVar14);
  uStack_128 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar2 + lVar16);
  func_0x00010c2793a0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_138,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar15);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = (long)_DAT_11271d408;
  lVar2 = *(long *)(lVar17 + lVar15);
  if (lVar2 == 0) {
    lVar2 = lVar17;
    func_0x00010be63440();
    uVar13 = *(undefined8 *)(lVar17 + lVar15);
    *(long *)(lVar17 + lVar15) = lVar2;
    _objc_release(uVar13);
    lVar2 = *(long *)(lVar17 + lVar15);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105147948; end: 105147bbb; -[SCSendToSpotlightToggleCell _setupToggleCellContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105147948(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b52e8;
  _objc_alloc_init();
  lVar14 = (long)_DAT_11271d3f8;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar13);
  lVar15 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar15);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_11271d418;
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  lStack_88 = lVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar15);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = (long)_DAT_11271d408;
  lVar15 = *(long *)(lVar2 + lVar14);
  if (lVar15 == 0) {
    lVar15 = lVar2;
    func_0x00010be63440();
    uVar13 = *(undefined8 *)(lVar2 + lVar14);
    *(long *)(lVar2 + lVar14) = lVar15;
    _objc_release(uVar13);
    lVar15 = *(long *)(lVar2 + lVar14);
  }
  _objc_retain(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar15);
  return;
}



/* Entry: 105147bbc; end: 105147c13; -[SCSendToSpotlightToggleCell _createTopSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105147bbc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271d408;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010be63440();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + lVar3);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105147c14; end: 105147c6b; -[SCSendToSpotlightToggleCell _createBottomSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105147c14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271d404;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010be63440();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + lVar3);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105147c6c; end: 105147cc3; -[SCSendToSpotlightToggleCell _newSeparator] */

undefined * FUN_105147c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c15e460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 105147cc4; end: 105147e7f; -[SCSendToSpotlightToggleCell _updateBackgroundCardViewPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105147cc4(undefined8 param_1,double param_2,double param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  puVar2 = PTR_PTR_1126b52d8;
  uVar6 = *(ulong *)(param_5 + _DAT_11271d3f0);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar3 = uVar1;
  func_0x00010c073fc0();
  dVar8 = 40.0;
  dVar10 = 16.0;
  if ((int)uVar3 == 0) {
    dVar10 = 40.0;
  }
  lVar7 = param_5;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c08cc60();
  _objc_release(lVar7);
  dVar9 = dVar10;
  if (lVar4 != 1) {
    dVar9 = 16.0;
  }
  lVar7 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar7);
  lVar7 = (long)_DAT_11271d41c;
  func_0x00010c19f0e0(dVar9 + dVar8,param_2 + 0.0,param_3 - (dVar10 + 16.0),param_4,
                      *(undefined8 *)(param_5 + lVar7));
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
  func_0x00010bf199e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar5 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c22a660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1d9820(uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105147e80; end: 105147ef7; -[SCSendToSpotlightToggleCell _updateShadows] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105147e80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b08d8;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271d41c);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010085b3c8(0x4018000000000000,0x3faeb851e0000000,0,0x3ff0000000000000,puVar1,uVar3,puVar2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105147ef8; end: 1051480a7; -[SCSendToSpotlightToggleCell _updateSeparators] */

/* WARNING: Possible PIC construction at 0x000105147f34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105147f38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105147ef8(double param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = *(ulong *)(param_2 + _DAT_11271d400);
  lVar3 = (long)_DAT_11271d408;
  lVar1 = *(long *)(param_2 + lVar3);
  if ((uVar2 & 1) != 0) {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010bf4dce0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar1);
    }
    lVar1 = (long)_DAT_11271d41c;
    func_0x00010c0ed1a0(*(undefined8 *)(param_2 + lVar1));
    dVar4 = param_1;
    func_0x00010c2a5040(*(undefined8 *)(param_2 + lVar1));
    func_0x00010c19f0e0(param_1,0,dVar4,0x3ff0000000000000,*(undefined8 *)(param_2 + lVar3));
    lVar1 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300();
    _objc_release(lVar1);
    lVar3 = (long)_DAT_11271d404;
    lVar1 = *(long *)(param_2 + lVar3);
    if (((uint)uVar2 >> 1 & 1) != 0) {
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        lVar1 = param_2;
        func_0x00010bf4dce0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(lVar1);
      }
      lVar1 = (long)_DAT_11271d41c;
      func_0x00010c0ed1a0(*(undefined8 *)(param_2 + lVar1));
      dVar4 = param_1;
      func_0x00010bfe0640(*(undefined8 *)(param_2 + lVar1));
      dVar5 = dVar4 + -1.0;
      func_0x00010c2a5040(*(undefined8 *)(param_2 + lVar1));
      func_0x00010c19f0e0(param_1,dVar5,dVar4,0x3ff0000000000000,*(undefined8 *)(param_2 + lVar3));
      func_0x00010bf4dce0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1051480a8; end: 1051481df; -[SCSendToSpotlightToggleCell _updateMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051480a8(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  double dVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar2 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)PTR__CGPointZero_110347540;
  dVar1 = *(double *)(PTR__CGPointZero_110347540 + 8);
  if ((*(ulong *)(param_3 + _DAT_11271d3fc) & 2) != 0) {
    param_2 = param_2 + 6.0;
    dVar1 = *(double *)(PTR__CGPointZero_110347540 + 8) + -6.0;
  }
  if ((*(ulong *)(param_3 + _DAT_11271d3fc) & 8) != 0) {
    param_2 = param_2 + 6.0;
  }
  puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
  _objc_opt_new(PTR__OBJC_CLASS___CALayer_1126b1750);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(puVar3,param_4,puVar5);
  _objc_release(puVar4);
  func_0x00010c19f0e0(uVar6,dVar1,param_1,param_2,puVar3);
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1051481e0; end: 1051481ef; -[SCSendToSpotlightToggleCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051481e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271d3f0);
}



/* Entry: 1051481f0; end: 1051481ff; -[SCSendToSpotlightToggleCell separatorMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051481f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271d400);
}



/* Entry: 105148200; end: 10514820f; -[SCSendToSpotlightToggleCell separatorColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105148200(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271d40c);
}



/* Entry: 105148210; end: 10514821f; -[SCSendToSpotlightToggleCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105148210(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271d3fc);
}



/* Entry: 105148220; end: 1051482cf; -[SCSendToSpotlightToggleCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105148220(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271d40c,0);
  _objc_storeStrong(param_1 + _DAT_11271d3f0,0);
  _objc_storeStrong(param_1 + _DAT_11271d404,0);
  _objc_storeStrong(param_1 + _DAT_11271d408,0);
  _objc_storeStrong(param_1 + _DAT_11271d414,0);
  _objc_storeStrong(param_1 + _DAT_11271d418,0);
  _objc_storeStrong(param_1 + _DAT_11271d410,0);
  _objc_storeStrong(param_1 + _DAT_11271d3f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271d41c,0);
  return;
}



/* Entry: 1051482d0; end: 10514835b; -[SCSendToSpotlightToggleCellContentView initWithFrame:] */

undefined1 * FUN_1051482d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6688;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1);
    func_0x00010beb0340(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10514835c; end: 1051484cf; -[SCSendToSpotlightToggleCellContentView configureWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514835c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11271d420;
    uVar1 = *(ulong *)(param_1 + lVar3);
    FUN_105148ab4(uVar1,param_3);
    if ((uVar1 & 1) == 0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = param_3;
      _objc_release(uVar2);
      lVar3 = param_3;
      func_0x00010bf33800(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(param_1);
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11271d424));
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010c260dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_11271d428;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010c260dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010c2725a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_11271d42c;
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
      _objc_release(lVar3);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c272860(param_3);
      func_0x00010c1d1380(uVar2);
      func_0x00010c1cbe20(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051484d0; end: 10514859b; -[SCSendToSpotlightToggleCellContentView _handleToggleAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051484d0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126b52d8;
  uVar5 = *(ulong *)(param_1 + _DAT_11271d420);
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
  if (uVar1 != 0) {
    uVar3 = uVar5;
    func_0x00010c272960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      func_0x00010c272960();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_11271d42c);
      func_0x00010c079040(uVar4);
      (**(code **)(uVar5 + 0x10))(uVar5,uVar4);
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10514859c; end: 1051485d3; -[SCSendToSpotlightToggleCellContentView _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10514859c(long param_1)

{
  long lVar1;
  
  func_0x00010bdec6c0();
  lVar1 = (long)_DAT_11271d430;
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c14c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_sc_constrainToSuperviewEdges_112630c70);
  return;
}



/* Entry: 1051485d4; end: 1051486e7; -[SCSendToSpotlightToggleCellContentView _createContentStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051485d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdeef40();
  func_0x00010bdf4d00(param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  lVar5 = (long)_DAT_11271d430;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c207380(0x4028000000000000,*(undefined8 *)(param_1 + lVar5));
  lVar5 = *(long *)(param_1 + lVar5);
  func_0x00010c219b60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdf4ca0();
  func_0x00010bdf44a0(lVar5);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  lVar6 = (long)_DAT_11271d434;
  uVar4 = *(undefined8 *)(lVar5 + lVar6);
  *(undefined **)(lVar5 + lVar6) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  func_0x00010c16e060(*(undefined8 *)(lVar5 + lVar6));
  func_0x00010c166c00(*(undefined8 *)(lVar5 + lVar6));
  func_0x00010c190b80(*(undefined8 *)(lVar5 + lVar6));
  func_0x00010c207380(0x3ff0000000000000,*(undefined8 *)(lVar5 + lVar6));
  lVar5 = *(long *)(lVar5 + lVar6);
  func_0x00010c181cc0(0x437a0000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11271d424;
  uVar4 = *(undefined8 *)(lVar5 + lVar3);
  *(undefined **)(lVar5 + lVar3) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar3));
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar3));
  func_0x00010c1cfce0(*(undefined8 *)(lVar5 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar5 + lVar3),PTR_s_setTextAlignment__112662638,4);
  return;
}



/* Entry: 1051486e8; end: 1051487ff; -[SCSendToSpotlightToggleCellContentView _createLabelsStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051486e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdf4ca0();
  func_0x00010bdf44a0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  lVar5 = (long)_DAT_11271d434;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c207380(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar5));
  lVar5 = *(long *)(param_1 + lVar5);
  func_0x00010c181cc0(0x437a0000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11271d424;
  uVar4 = *(undefined8 *)(lVar5 + lVar3);
  *(undefined **)(lVar5 + lVar3) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar5 + lVar3));
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(lVar5 + lVar3));
  func_0x00010c1cfce0(*(undefined8 *)(lVar5 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar5 + lVar3),PTR_s_setTextAlignment__112662638,4);
  return;
}



/* Entry: 105148800; end: 1051488ab; -[SCSendToSpotlightToggleCellContentView _createTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105148800(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11271d424;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setTextAlignment__112662638,4);
  return;
}



/* Entry: 1051488ac; end: 105148957; -[SCSendToSpotlightToggleCellContentView _createSubtitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051488ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11271d428;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setTextAlignment__112662638,4);
  return;
}



/* Entry: 105148958; end: 105148a33; -[SCSendToSpotlightToggleCellContentView _createToggleSwitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105148958(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11271d42c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x3a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  _CGAffineTransformMakeScale(&uStack_60,0x3fe999999999999a,0x3fe999999999999a);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar3),param_2,&uStack_90);
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar3),param_2,param_1,
                      PTR_s__handleToggleAction__112527ed8,0x1000);
  return;
}



/* Entry: 105148a34; end: 105148ab3; -[SCSendToSpotlightToggleCellContentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105148a34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271d420,0);
  _objc_storeStrong(param_1 + _DAT_11271d42c,0);
  _objc_storeStrong(param_1 + _DAT_11271d428,0);
  _objc_storeStrong(param_1 + _DAT_11271d424,0);
  _objc_storeStrong(param_1 + _DAT_11271d434,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271d430,0);
  return;
}



/* Entry: 105148ab4; end: 105148ca3;  */

uint FUN_105148ab4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar11 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_105148c70;
  lVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    uVar11 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c260dc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0720c0();
    if ((int)lVar5 == 0) {
LAB_105148b80:
      uVar11 = 0;
    }
    else {
      lVar5 = param_1;
      func_0x00010c272860();
      lVar6 = param_2;
      func_0x00010c272860();
      if ((int)lVar5 != (int)lVar6) goto LAB_105148b80;
      lVar5 = param_1;
      func_0x00010bf33800();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010bf33800(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010c0720c0();
      if ((int)lVar7 == 0) {
        uVar11 = 0;
      }
      else {
        lVar7 = param_1;
        func_0x00010c2725a0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_2;
        func_0x00010c2725a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar7;
        func_0x00010c0720c0();
        if ((int)lVar9 == 0) {
          uVar11 = 0;
        }
        else {
          lVar9 = param_1;
          func_0x00010c076140(param_1);
          lVar10 = param_2;
          func_0x00010c076140(param_2);
          uVar11 = (uint)lVar9 ^ (uint)lVar10 ^ 1;
        }
        _objc_release(lVar8);
        _objc_release(lVar7);
      }
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_105148c70:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar11;
}



/* Entry: 105148ca4; end: 105148d9f; -[SCSendToSpotlightSectionViewModelSource initWithCircumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:subscriptionInfoProvider:] */

undefined1 *
FUN_105148ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6690;
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



/* Entry: 105148da0; end: 105148eb3; -[SCSendToSpotlightSectionViewModelSource selectionStoryViewModelGeneratorForSectionIdentifier:useCarouselSection:] */

void FUN_105148da0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  ppuVar4 = &puStack_90;
  _objc_retain(param_4);
  func_0x000108faa718(*(undefined8 *)(param_2 + 8));
  uVar5 = *(undefined8 *)(param_2 + 8);
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c080120();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105148eb4;
  puStack_78 = &UNK_11086b9f0;
  uStack_58 = (undefined1)uVar3;
  uStack_70 = param_4;
  uStack_68 = uVar5;
  uStack_60 = param_1;
  _objc_retain(uVar5);
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_90);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 105148eb4; end: 105148f47;  */

void FUN_105148eb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  
  func_0x000108f3c39c(*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_5,param_6,
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),1,1,param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b52f8;
  func_0x00010c099fc0(PTR_PTR_1126b52f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105148f48; end: 105148f8f; -[SCSendToSpotlightSectionViewModelSource .cxx_destruct] */

void FUN_105148f48(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105148f90; end: 1051490f7; -[SCSendToSpotlightToggleCellViewModel initWithTitle:subtitle:toggleEnabled:toggleHandler:cellAccessibilityId:toggleAccessibilityId:isFullScreenEnabled:isLastRow:fullyRoundedCorners:] */

undefined1 *
FUN_105148f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e6698;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 10) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9._2_1_;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051490f8; end: 10514911b; -[SCSendToSpotlightToggleCellViewModel copyWithZone:] */

undefined8 FUN_1051490f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10514911c; end: 105149123; -[SCSendToSpotlightToggleCellViewModel title] */

undefined8 FUN_10514911c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105149124; end: 10514912b; -[SCSendToSpotlightToggleCellViewModel subtitle] */

undefined8 FUN_105149124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10514912c; end: 105149133; -[SCSendToSpotlightToggleCellViewModel toggleEnabled] */

undefined1 FUN_10514912c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105149134; end: 10514913b; -[SCSendToSpotlightToggleCellViewModel toggleHandler] */

undefined8 FUN_105149134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10514913c; end: 105149143; -[SCSendToSpotlightToggleCellViewModel cellAccessibilityId] */

undefined8 FUN_10514913c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105149144; end: 10514914b; -[SCSendToSpotlightToggleCellViewModel toggleAccessibilityId] */

undefined8 FUN_105149144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10514914c; end: 105149153; -[SCSendToSpotlightToggleCellViewModel isFullScreenEnabled] */

undefined1 FUN_10514914c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105149154; end: 10514915b; -[SCSendToSpotlightToggleCellViewModel isLastRow] */

undefined1 FUN_105149154(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10514915c; end: 105149163; -[SCSendToSpotlightToggleCellViewModel fullyRoundedCorners] */

undefined1 FUN_10514915c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 105149164; end: 1051491b7; -[SCSendToSpotlightToggleCellViewModel .cxx_destruct] */

void FUN_105149164(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1051491b8; end: 1051491c3; -[SCFeatureSettingsService hasSeenSponsorMoreButtonTooltip] */

void FUN_1051491b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc7418);
  return;
}



/* Entry: 1051491c4; end: 1051491cf; -[SCFeatureSettingsService seenSponsorMoreButtonTooltipServerParam] */

undefined ** FUN_1051491c4(void)

{
  return &PTR____CFConstantStringClassReference_110dc7418;
}



/* Entry: 1051491d0; end: 1051491df; -[SCFeatureSettingsService setSeenSponsorMoreButtonTooltip:] */

void FUN_1051491d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc7418,param_3);
  return;
}



/* Entry: 1051491e0; end: 1051491e7; -[SCFeatureSettingsService sponsor_more_button_tooltip_client_value:] */

undefined * FUN_1051491e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1051491e8; end: 1051491ef; -[SCFeatureSettingsService sponsor_more_button_tooltip_server_value:] */

void FUN_1051491e8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1051491f0; end: 1051491ff; -[SCFeatureSettingsService seenSponsorMoreButtonTooltip] */

void FUN_1051491f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc7418,0);
  return;
}



/* Entry: 105149200; end: 10514920b; -[SCFeatureSettingsService hasSeenExternalLinkSendingModal] */

void FUN_105149200(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc7438);
  return;
}



/* Entry: 10514920c; end: 105149217; -[SCFeatureSettingsService seenExternalLinkSendingModalServerParam] */

undefined ** FUN_10514920c(void)

{
  return &PTR____CFConstantStringClassReference_110dc7438;
}



/* Entry: 105149218; end: 105149227; -[SCFeatureSettingsService setSeenExternalLinkSendingModal:] */

void FUN_105149218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc7438,param_3);
  return;
}



/* Entry: 105149228; end: 10514922f; -[SCFeatureSettingsService sharing_has_seen_contact_privacy_alert_client_value:] */

undefined * FUN_105149228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105149230; end: 105149237; -[SCFeatureSettingsService sharing_has_seen_contact_privacy_alert_server_value:] */

void FUN_105149230(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105149238; end: 105149247; -[SCFeatureSettingsService seenExternalLinkSendingModal] */

void FUN_105149238(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc7438,0);
  return;
}



/* Entry: 105149248; end: 105149253; -[SCFeatureSettingsService hasSeenSnapAnyoneSendingModal] */

void FUN_105149248(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc7458);
  return;
}



/* Entry: 105149254; end: 10514925f; -[SCFeatureSettingsService seenSnapAnyoneSendingModalServerParam] */

undefined ** FUN_105149254(void)

{
  return &PTR____CFConstantStringClassReference_110dc7458;
}



/* Entry: 105149260; end: 10514926f; -[SCFeatureSettingsService setSeenSnapAnyoneSendingModal:] */

void FUN_105149260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc7458,param_3);
  return;
}



/* Entry: 105149270; end: 105149277; -[SCFeatureSettingsService sharing_has_seen_snap_anyone_privacy_alert_client_value:] */

undefined * FUN_105149270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}


