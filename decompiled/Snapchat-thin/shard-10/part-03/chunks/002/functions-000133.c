/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f99d2c; end: 107f99f3f; -[SCSmartSwipeFilterView filterArrangerDidReloadSwipeOrder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f99d2c(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  func_0x00010c2878c0();
  func_0x00010c284c40(param_4);
  func_0x00010c264d20(param_4);
  param_1 = param_1 - (double)(long)param_1;
  dVar11 = -param_1;
  dVar12 = dVar11;
  if (*(long *)(param_4 + _DAT_112772690) != 1) {
    dVar12 = param_1;
  }
  lVar10 = param_4;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112772714;
  lVar2 = lVar10;
  func_0x00010bf5efe0();
  _objc_release(lVar10);
  if ((lVar2 != 0x7fffffffffffffff) &&
     (lVar10 = (long)_DAT_1127726f4,
     lVar2 != *(long *)(param_4 + _DAT_112772708) + *(long *)(param_4 + lVar10))) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_5,
                        &PTR____CFConstantStringClassReference_110ec9e18);
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_4 + _DAT_1127726b0);
    func_0x00010c070400();
    func_0x00010c152520(param_4,param_5,lVar2);
    lVar2 = param_4;
    func_0x00010bfadb40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    lVar4 = param_4;
    func_0x00010bfadb40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar5 = param_4;
    func_0x00010bfadb40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    lVar6 = param_4;
    func_0x00010bfadb40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822e0(param_1 + param_3 * dVar12,dVar11);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (iVar1 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_5,
                          &PTR____CFConstantStringClassReference_110ec9e38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9c1c0(param_4,param_5,*(undefined8 *)(param_4 + lVar10),1);
      _objc_release(puVar7);
    }
    _objc_release(puVar3);
  }
  uVar8 = *(undefined8 *)(param_4 + lVar9);
  *(undefined8 *)(param_4 + lVar9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 107f99f40; end: 107f99f87; -[SCSmartSwipeFilterView filterArrangerDidChangeVisualFilterNamesProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f99f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c2a0440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772698);
  *(undefined8 *)(param_1 + _DAT_112772698) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c2878d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateMediaFiltersAndCommands_11267f858);
  return;
}



/* Entry: 107f99f88; end: 107f9a00b; -[SCSmartSwipeFilterView filterArranger:didApplyToolFilterName:config:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f99f88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  func_0x00010bec2440(param_1);
  puVar1 = PTR_PTR_1126d8928;
  func_0x00010c0c1be0(PTR_PTR_1126d8928,param_2,param_4,7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127726c8),param_2,puVar1);
  }
  func_0x00010c2878c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f9a00c; end: 107f9a05b; -[SCSmartSwipeFilterView filterArranger:didUnapplyToolFilterName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a00c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be95880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127726c8),param_2,lVar1);
  }
  func_0x00010c2878c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f9a05c; end: 107f9a063; -[SCSmartSwipeFilterView numberOfSectionsInCollectionView:] */

undefined8 FUN_107f9a05c(void)

{
  return 7;
}



/* Entry: 107f9a064; end: 107f9a06b; -[SCSmartSwipeFilterView collectionView:numberOfItemsInSection:] */

undefined8 FUN_107f9a064(void)

{
  return 1;
}



/* Entry: 107f9a06c; end: 107f9a083; -[SCSmartSwipeFilterView collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a06c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127726b0),
             PTR_s_dequeueReusableCellWithReuseIden_1125b91d8,
             &PTR____CFConstantStringClassReference_110ec9dd8);
  return;
}



/* Entry: 107f9a084; end: 107f9a0d7; -[SCSmartSwipeFilterView collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_107f9a084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  
  _objc_retain(param_7);
  func_0x00010bf20c00(param_7);
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 107f9a0d8; end: 107f9a273; -[SCSmartSwipeFilterView scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a0d8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  func_0x00010c070ea0();
  if (param_4 != 0) {
    func_0x00010bde1040(param_2);
  }
  lVar3 = (long)_DAT_1127726ac;
  if ((*(byte *)(param_2 + lVar3) & 1) == 0) {
    func_0x00010c0c3f20(*(undefined8 *)(param_2 + _DAT_1127726a0),param_3,0xf,1);
    *(undefined1 *)(param_2 + lVar3) = 1;
  }
  lVar3 = param_2;
  func_0x00010c23eea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6fc20();
  _objc_release(lVar3);
  lVar3 = (long)_DAT_1127726f4;
  lVar4 = *(long *)(param_2 + lVar3);
  func_0x00010c284c40(param_2);
  lVar3 = *(long *)(param_2 + lVar3);
  if (lVar4 != lVar3 || 0xfffffffffffffffa < lVar3 - 6U) {
    if (lVar3 - 6U < 0xfffffffffffffffb) {
      *(long *)(param_2 + _DAT_112772708) = *(long *)(param_2 + _DAT_112772708) - (3 - lVar3);
      lVar4 = (long)_DAT_1127726b0;
      func_0x00010bf4cdc0(*(undefined8 *)(param_2 + lVar4));
      dVar5 = param_1;
      func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar4));
      _CGRectGetWidth();
      func_0x00010bf4cdc0(*(undefined8 *)(param_2 + lVar4));
      func_0x00010c1822e0(param_1 + dVar5 * (double)(3 - lVar3),*(undefined8 *)(param_2 + lVar4));
      func_0x00010be8a740(param_2);
    }
    func_0x00010bee08c0(param_2);
    lVar3 = param_2 + _DAT_112772710;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c264940();
    _objc_release(lVar3);
    func_0x00010bf5eac0(param_2);
    uVar2 = *(undefined8 *)(param_2 + _DAT_1127726c0);
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107f9a274; end: 107f9a277; -[SCSmartSwipeFilterView scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

void FUN_107f9a274(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5ead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentFilterOffset_1125b5458);
  return;
}



/* Entry: 107f9a278; end: 107f9a433; -[SCSmartSwipeFilterView scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a278(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010bf5eac0();
  lVar1 = param_3;
  func_0x00010be16120();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bfda7c0();
  _objc_release(lVar5);
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    *(undefined1 *)(param_3 + _DAT_112772694) = 1;
  }
  uVar4 = *(undefined8 *)(param_3 + _DAT_112772698);
  lVar1 = param_3;
  func_0x00010be16120(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar4,param_4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar1);
  if ((int)uVar4 != 0) {
    *(undefined1 *)(param_3 + _DAT_11277269c) = 1;
  }
  lVar5 = (long)_DAT_1127726f4;
  func_0x00010bed7160(param_3,param_4,*(undefined8 *)(param_3 + lVar5),1);
  lVar1 = param_3;
  func_0x00010bfae060(param_3,param_4,*(undefined8 *)(param_3 + lVar5));
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c081ec0();
  if ((int)lVar5 != 0) {
    func_0x00010c2105c0(*(undefined8 *)(param_3 + _DAT_1127726b8),param_4,0xffffffffffffffff);
  }
  lVar5 = param_3 + _DAT_112772710;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c265320();
  _objc_release(lVar5);
  func_0x00010c0d9840(*(undefined8 *)(param_3 + _DAT_1127726c8),param_4,lVar1);
  uVar4 = *(undefined8 *)(param_3 + _DAT_1127726c4);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_4,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f9a434; end: 107f9a4b3; -[SCSmartSwipeFilterView scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a434(long param_1)

{
  long lVar1;
  
  func_0x00010bf5eac0();
  lVar1 = param_1;
  func_0x00010c23eea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc1720();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfae880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6ca0();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112772710;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2649c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f9a4b4; end: 107f9a513; -[SCSmartSwipeFilterView scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a4b4(long param_1)

{
  long lVar1;
  
  func_0x00010bf5eac0();
  lVar1 = param_1;
  func_0x00010bfae880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6340();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112772710;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2649e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f9a514; end: 107f9a5c3; -[SCSmartSwipeFilterView storeCurrentFilterInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a514(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127726f4;
  lVar1 = param_1;
  func_0x00010be160e0(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
  if (0 < lVar1) {
    lVar1 = param_1;
    func_0x00010bfae060(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112772718);
    *(long *)(param_1 + _DAT_112772718) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be160e0(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    *(long *)(param_1 + _DAT_11277271c) = lVar1;
  }
  return;
}



/* Entry: 107f9a5c4; end: 107f9a61b; -[SCSmartSwipeFilterView restoreFilterInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a5c4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112772718) != 0) {
    func_0x00010bf5f000();
    func_0x00010c152520(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde1050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearStoredFilterInfo_112555db0);
    return;
  }
  return;
}



/* Entry: 107f9a61c; end: 107f9a65f; -[SCSmartSwipeFilterView _clearStoredFilterInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a61c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112772718) != 0) {
    *(undefined8 *)(param_1 + _DAT_112772718) = 0;
    _objc_release();
    *(undefined8 *)(param_1 + _DAT_11277271c) = 0x7fffffffffffffff;
  }
  return;
}



/* Entry: 107f9a660; end: 107f9a6ff; -[SCSmartSwipeFilterView filterViewForCurrentSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a660(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bfae060(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127726f4));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772674);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277266c);
  func_0x00010bf20c00(param_1);
  func_0x00010bfae8a0(param_1,param_2,lVar1,uVar2,uVar3,*(undefined8 *)(param_1 + _DAT_112772668),
                      *(undefined8 *)(param_1 + _DAT_112772650));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f9a700; end: 107f9a70f; -[SCSmartSwipeFilterView existingFilterViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772674),PTR_s_allValues_11259dcf0);
  return;
}



/* Entry: 107f9a710; end: 107f9aa9f; -[SCSmartSwipeFilterView collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9a710(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c23eea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010c1554e0(param_5);
  lVar7 = param_1;
  func_0x00010bfae060(param_1,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc1740(lVar1,param_2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf4dce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d960();
  _objc_release(lVar1);
  uVar9 = param_5;
  func_0x00010c1554e0(param_5);
  lVar1 = param_1;
  func_0x00010bfae060(param_1,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar11 = (long)_DAT_112772668;
  lVar12 = *(long *)(param_1 + lVar11);
  lVar7 = lVar1;
  func_0x00010bfae180(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf11de0(lVar12,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (lVar12 != 0) {
    func_0x00010befa120(puVar2,param_2,lVar12);
  }
  func_0x00010befa120(puVar2,param_2,lVar1);
  uVar9 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(puVar2);
  lVar7 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_140,auStack_100);
  if (puVar3 != (undefined *)0x0) {
    lVar10 = *plStack_130;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        lVar14 = *(long *)(lStack_138 + (long)puVar8 * 8);
        uVar13 = *(undefined8 *)(param_1 + _DAT_112772674);
        uVar15 = *(undefined8 *)(param_1 + _DAT_11277266c);
        func_0x00010bf20c00(param_1);
        lVar7 = param_1;
        func_0x00010bfae8a0(param_1,param_2,lVar14,uVar13,uVar15,*(undefined8 *)(param_1 + lVar11),
                            *(undefined8 *)(param_1 + _DAT_112772650));
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bfe8500(param_1,param_2,param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aa720(lVar7,param_2,lVar4);
        _objc_release(lVar4);
        func_0x00010c1a7f60(lVar7,param_2,0);
        func_0x00010c2518a0(lVar7);
        lVar4 = param_4;
        func_0x00010bf4dce0(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar14;
        func_0x00010bfae5a0();
        lVar6 = lVar7;
        if (lVar5 == 6) {
          lVar6 = *(long *)(param_1 + _DAT_112772670);
        }
        func_0x00010befbb60(lVar4,param_2,lVar6);
        _objc_release(lVar4);
        func_0x00010bf20c00(param_1);
        func_0x00010c19f0e0(lVar7);
        if (lVar14 == lVar1) {
          lVar4 = lVar7;
          func_0x00010c08c0e0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bef60();
          lVar5 = param_4;
          func_0x00010c08c0e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c227960(uVar9);
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        _objc_release(lVar7);
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      lVar7 = 0x10;
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_140,auStack_100);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(lVar12);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  lVar12 = *(long *)(param_4 + _DAT_1127726f4);
  lVar1 = lVar7;
  func_0x00010c1554e0();
  if (lVar12 != lVar1) {
    lVar1 = lVar7;
    func_0x00010c1554e0(lVar7);
    lVar12 = param_4;
    func_0x00010bfae060(param_4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar12;
    func_0x00010c081ec0();
    if ((int)lVar1 != 0) {
      func_0x00010c21b580(*(undefined8 *)(param_4 + _DAT_1127726b8),param_2,1);
    }
    lVar1 = lVar7;
    func_0x00010c1554e0(lVar7);
    func_0x00010bed7160(param_4,param_2,lVar1,0);
    lVar11 = (long)_DAT_112772674;
    uVar9 = *(undefined8 *)(param_4 + lVar11);
    lVar1 = lVar12;
    func_0x00010bfae180(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar9,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256e80();
    _objc_release(uVar9);
    _objc_release(lVar1);
    func_0x00010c12f180(param_4,param_2,lVar12,*(undefined8 *)(param_4 + lVar11));
    _objc_release(lVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 107f9aaa0; end: 107f9abaf; -[SCSmartSwipeFilterView collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9aaa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + _DAT_1127726f4);
  lVar1 = param_5;
  func_0x00010c1554e0();
  if (lVar2 != lVar1) {
    lVar1 = param_5;
    func_0x00010c1554e0(param_5);
    lVar2 = param_1;
    func_0x00010bfae060(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c081ec0();
    if ((int)lVar1 != 0) {
      func_0x00010c21b580(*(undefined8 *)(param_1 + _DAT_1127726b8),param_2,1);
    }
    lVar1 = param_5;
    func_0x00010c1554e0(param_5);
    func_0x00010bed7160(param_1,param_2,lVar1,0);
    lVar4 = (long)_DAT_112772674;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    lVar1 = lVar2;
    func_0x00010bfae180(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256e80();
    _objc_release(uVar3);
    _objc_release(lVar1);
    func_0x00010c12f180(param_1,param_2,lVar2,*(undefined8 *)(param_1 + lVar4));
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107f9abb0; end: 107f9abbf; -[SCSmartSwipeFilterView scrollViewPanGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9abb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127726b0),PTR_s_panGestureRecognizer_11261a7c8);
  return;
}



/* Entry: 107f9abc0; end: 107f9ad4f; -[SCSmartSwipeFilterView shouldRespondToTap:] */

undefined ** FUN_107f9abc0(ulong param_1,undefined8 param_2,undefined **param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar11 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar3 = param_1;
  func_0x00010beca760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar14 = *plStack_120;
    do {
      uVar15 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(uVar3);
        }
        func_0x00010c067fc0(*(undefined8 *)(lStack_128 + uVar15 * 8));
        uVar5 = param_1;
        func_0x00010bf5eb00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b38c0;
        _objc_opt_class(PTR_PTR_1126b38c0);
        uVar7 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar6);
        uVar1 = uVar5;
        if ((uVar7 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar5);
        uVar5 = uVar1;
        ppuVar11 = param_3;
        func_0x00010c232a60();
        _objc_release(uVar1);
        if ((uVar5 & 1) != 0) {
          ppuVar13 = (undefined **)0x1;
          goto LAB_107f9ad00;
        }
        uVar15 = uVar15 + 1;
      } while (uVar4 != uVar15);
      uVar4 = uVar3;
      ppuVar11 = &puStack_130;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  ppuVar13 = (undefined **)0x0;
LAB_107f9ad00:
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar11);
  ppuVar8 = param_3;
  func_0x00010beca760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar8;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  do {
    if (ppuVar13 == (undefined **)0x0) {
LAB_107f9ae98:
      _objc_release(ppuVar8);
      _objc_release(ppuVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        return ppuVar11;
      }
      ___stack_chk_fail();
      return &PTR__OBJC_CLASS___NSConstantArray_111181fb8;
    }
    ppuVar16 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(ppuVar8);
      }
      func_0x00010c067fc0(*(undefined8 *)((long)ppuVar16 * 8));
      ppuVar9 = param_3;
      func_0x00010bf5eb00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b38c0;
      _objc_opt_class(PTR_PTR_1126b38c0);
      ppuVar10 = ppuVar9;
      _objc_opt_isKindOfClass(ppuVar9,puVar6);
      ppuVar2 = ppuVar9;
      if (((ulong)ppuVar10 & 1) == 0) {
        ppuVar2 = (undefined **)0x0;
      }
      _objc_retain(ppuVar2);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar2;
      func_0x00010c232a60();
      if ((int)ppuVar9 != 0) {
        func_0x00010c268be0(ppuVar2);
        _objc_release(ppuVar2);
        goto LAB_107f9ae98;
      }
      _objc_release(ppuVar2);
      ppuVar16 = (undefined **)((long)ppuVar16 + 1);
    } while (ppuVar13 != ppuVar16);
    ppuVar13 = ppuVar8;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107f9ad50; end: 107f9aee3; -[SCSmartSwipeFilterView tap:] */

undefined ** FUN_107f9ad50(ulong param_1,undefined8 param_2,undefined **param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010beca760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (uVar4 == 0) {
LAB_107f9ae98:
      _objc_release(uVar3);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return param_3;
      }
      ___stack_chk_fail();
      return &PTR__OBJC_CLASS___NSConstantArray_111181fb8;
    }
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(uVar3);
      }
      func_0x00010c067fc0(*(undefined8 *)(uVar9 * 8));
      uVar5 = param_1;
      func_0x00010bf5eb00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b38c0;
      _objc_opt_class(PTR_PTR_1126b38c0);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar1 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      uVar5 = uVar1;
      func_0x00010c232a60();
      if ((int)uVar5 != 0) {
        func_0x00010c268be0(uVar1);
        _objc_release(uVar1);
        goto LAB_107f9ae98;
      }
      _objc_release(uVar1);
      uVar9 = uVar9 + 1;
    } while (uVar4 != uVar9);
    uVar4 = uVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107f9aee4; end: 107f9aeef; -[SCSmartSwipeFilterView _tapEligibleFilterTypes] */

undefined ** FUN_107f9aee4(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111181fb8;
}



/* Entry: 107f9aef0; end: 107f9af07; -[SCSmartSwipeFilterView gestureRecognizerShouldBegin:] */

uint FUN_107f9aef0(uint param_1)

{
  func_0x00010c22e4e0();
  return param_1 ^ 1;
}



/* Entry: 107f9af08; end: 107f9af0f; -[SCSmartSwipeFilterView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107f9af08(void)

{
  return 1;
}



/* Entry: 107f9af10; end: 107f9af23; -[SCSmartSwipeFilterView _scrollToCurrentSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9af10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__scrollToSection_animated__112584a18,
             *(undefined8 *)(param_1 + _DAT_1127726f4),0);
  return;
}



/* Entry: 107f9af24; end: 107f9afd3; -[SCSmartSwipeFilterView _scrollToSection:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9af24(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_1127726b0;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar3));
  _CGRectGetWidth();
  dVar4 = param_1 * (double)param_4;
  func_0x00010bf4cdc0(*(undefined8 *)(param_2 + lVar3));
  if (dVar4 == param_1) {
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1525a0(uVar2,param_3,puVar1,0x10,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f9afd4; end: 107f9b003; -[SCSmartSwipeFilterView filterItemForSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9afd4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be160e0();
                    /* WARNING: Could not recover jumptable at 0x00010bfae010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772668),PTR_s_filterItemAtIndex__1125c91a8,lVar1);
  return;
}



/* Entry: 107f9b004; end: 107f9b013; -[SCSmartSwipeFilterView currentFilterIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9b004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be160f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__filterIndexFromSection__1125631d8,
             *(undefined8 *)(param_1 + _DAT_1127726f4));
  return;
}



/* Entry: 107f9b014; end: 107f9b06f; -[SCSmartSwipeFilterView _filterIndexFromSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107f9b014(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112772668);
  func_0x00010bf5e9c0();
  param_3 = *(long *)(param_1 + _DAT_112772708) + param_3;
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = param_3 / lVar3;
  }
  lVar1 = (param_3 - lVar1 * lVar3) + lVar3;
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar1 / lVar3;
  }
  return lVar1 - lVar2 * lVar3;
}



/* Entry: 107f9b070; end: 107f9b0e3; -[SCSmartSwipeFilterView _filterSectionFromIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107f9b070(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bfadb40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0df300(param_1,param_2,lVar2);
  _objc_release(lVar2);
  param_3 = param_3 - *(long *)(param_1 + _DAT_112772708);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = param_3 / lVar3;
  }
  lVar2 = (param_3 - lVar2 * lVar3) + lVar3;
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2 / lVar3;
  }
  return lVar2 - lVar1 * lVar3;
}



/* Entry: 107f9b0e4; end: 107f9b0eb; -[SCSmartSwipeFilterView _reloadCollectionView] */

void FUN_107f9b0e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadCollectionViewWithComplet_112580378,0)
  ;
  return;
}



/* Entry: 107f9b0ec; end: 107f9b1c7; -[SCSmartSwipeFilterView _reloadCollectionViewWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9b0ec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107f9b1c8;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127726b0);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x107f9b218;
    puStack_78 = &UNK_110842508;
    _objc_retain(param_3);
    lStack_70 = param_3;
    func_0x00010c0f8420(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110a15f68,&puStack_90);
    _objc_release(lStack_70);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107f9b1c8; end: 107f9b213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9b1c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127726b0);
  uVar1 = uVar2;
  func_0x00010bfed1a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f9b214; end: 107f9b223;  */

void FUN_107f9b214(void)

{
  return;
}



/* Entry: 107f9b224; end: 107f9b29f; -[SCSmartSwipeFilterView _filterItemAtCenterPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9b224(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127726b0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf345e0();
  func_0x00010bf512a0(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010bfed040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c1554e0();
  func_0x00010bfae060(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f9b2a0; end: 107f9b3cf; -[SCSmartSwipeFilterView _isItemVisibleAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107f9b2a0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar1 = *(ulong *)(param_1 + _DAT_1127726b0);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_d8;
  uVar5 = uVar1;
  func_0x00010bf52a60();
  if (uVar5 != 0) {
    lVar6 = *plStack_110;
    do {
      uVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(uVar1);
        }
        uVar2 = *(undefined8 *)(lStack_118 + uVar7 * 8);
        func_0x00010c1554e0(uVar2);
        lVar3 = param_1;
        func_0x00010be160e0(param_1,param_2,uVar2);
        if (lVar3 == param_3) {
          uVar5 = 1;
          goto LAB_107f9b38c;
        }
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
      puVar4 = auStack_d8;
      uVar5 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,&uStack_120,puVar4,0x10);
    } while (uVar5 != 0);
  }
  uVar5 = 0;
LAB_107f9b38c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar5;
  }
  ___stack_chk_fail();
  uVar5 = uVar1;
  func_0x00010bfae060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c081ec0();
  if ((uVar7 & 1) == 0) {
    func_0x00010bed7140(uVar1,param_2,uVar5,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return uVar5;
}



/* Entry: 107f9b3d0; end: 107f9b423; -[SCSmartSwipeFilterView _updateDisplayStatusForSection:displayed:] */

void FUN_107f9b3d0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bfae060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c081ec0();
  if ((uVar2 & 1) == 0) {
    func_0x00010bed7140(param_1,param_2,uVar1,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f9b424; end: 107f9b4eb; -[SCSmartSwipeFilterView _updateDisplayStatusForItem:displayed:] */

void FUN_107f9b424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfae820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfae180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190140();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c23eea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c140();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f9b4ec; end: 107f9b547; -[SCSmartSwipeFilterView _shouldDrawOverlayFilterView:] */

uint FUN_107f9b4ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd7d40();
  if (((int)uVar1 == 0) || (uVar1 = param_3, func_0x00010c074c20(), (uVar1 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c06c000(param_3);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107f9b548; end: 107f9b5c3; -[SCSmartSwipeFilterView _indexForTopMostAnimatedFilterInCurrentOverlayFilterViews:] */

long FUN_107f9b548(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf529e0();
  do {
    lVar3 = lVar3 + -1;
    if (lVar3 < 0) break;
    lVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06c000();
    _objc_release(lVar1);
  } while ((int)lVar2 == 0);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f9b5c4; end: 107f9b69f; -[SCSmartSwipeFilterView drawStaticOverlayFiltersForAlternativeSuperview:] */

void FUN_107f9b5c4(ulong param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_1;
  func_0x00010bfdcb00();
  if ((int)uVar5 != 0) {
    uVar1 = param_1;
    func_0x00010bdf6e00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010be38b60(param_1,param_2,uVar1);
    while( true ) {
      uVar5 = uVar5 + 1;
      uVar2 = uVar1;
      func_0x00010bf529e0();
      if (uVar2 <= uVar5) break;
      uVar2 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c22dba0();
      uVar4 = param_1;
      func_0x00010beb35a0(param_1,param_2,uVar2);
      if (((int)uVar4 != 0) && (((param_3 ^ (uint)uVar3) & 1) == 0)) {
        func_0x00010bf20c00(param_1);
        func_0x00010bf89b80(uVar2);
      }
      _objc_release(uVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107f9b6a0; end: 107f9b74f; -[SCSmartSwipeFilterView hasStaticOverlayFilters] */

bool FUN_107f9b6a0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bdf6e00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be38b60(param_1,param_2,uVar1);
  do {
    uVar5 = uVar5 + 1;
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 <= uVar5) break;
    uVar3 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010beb35a0(param_1,param_2,uVar3);
    _objc_release(uVar3);
  } while ((int)uVar4 == 0);
  _objc_release(uVar1);
  return uVar5 < uVar2;
}



/* Entry: 107f9b750; end: 107f9b83b; -[SCSmartSwipeFilterView overlayFiltersImage] */

void FUN_107f9b750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = param_5;
  func_0x00010bfdcb00();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_5;
    func_0x00010bdf6e00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010be38b60(param_5,param_6,uVar1);
    func_0x00010bf20c00(param_5);
    _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
    while( true ) {
      uVar2 = uVar2 + 1;
      uVar4 = uVar1;
      func_0x00010bf529e0();
      if (uVar4 <= uVar2) break;
      uVar4 = uVar1;
      func_0x00010c0dfd40(uVar1,param_6,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_5;
      func_0x00010beb35a0(param_5,param_6,uVar4);
      if ((int)uVar3 != 0) {
        func_0x00010bf20c00(param_5);
        func_0x00010bf89b80(uVar4);
      }
      _objc_release(uVar4);
    }
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107f9b83c; end: 107f9b947; -[SCSmartSwipeFilterView videoTrackedImages] */

void FUN_107f9b83c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010bdf6e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be38b60(param_1,param_2,lVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (-1 < param_1) {
    lVar7 = 0;
    do {
      lVar3 = lVar1;
      func_0x00010c0dfd40(lVar1,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c29b880();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      func_0x00010befa160(puVar2,param_2,lVar5);
      _objc_release(lVar5);
      lVar7 = lVar7 + 1;
    } while (param_1 + 1 != lVar7);
  }
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f9b948; end: 107f9b957;  */

void FUN_107f9b948(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,param_2);
  return;
}



/* Entry: 107f9b958; end: 107f9ba77; -[SCSmartSwipeFilterView geoFilterIfOnlyDrawnFilter] */

void FUN_107f9b958(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = param_1;
  func_0x00010bf5eb00(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b38c0;
  _objc_opt_class(PTR_PTR_1126b38c0);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      if ((lVar6 != 0) && (lVar6 != 6)) {
        uVar3 = param_1;
        func_0x00010bf5eb00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b38c0;
        _objc_opt_class(PTR_PTR_1126b38c0);
        uVar4 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar2);
        uVar5 = uVar3;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar3);
        if (((uVar5 != 0) && (uVar4 = uVar3, func_0x00010c074c20(), (uVar4 & 1) == 0)) &&
           (uVar4 = uVar3, func_0x00010bfd7d40(), (uVar4 & 1) != 0)) {
          _objc_release(uVar3);
          uVar5 = 0;
          goto LAB_107f9ba48;
        }
        _objc_release(uVar5);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 8);
  }
  _objc_retain(uVar1);
  uVar5 = uVar1;
LAB_107f9ba48:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107f9ba78; end: 107f9bb9b; -[SCSmartSwipeFilterView hasAnimatedFilters] */

undefined1 * FUN_107f9ba78(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar1 = param_1;
  func_0x00010bdf6e00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      uVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(uVar1);
        }
        uVar6 = *(ulong *)(lStack_118 + uVar8 * 8);
        uVar9 = param_1;
        func_0x00010be44ec0(param_1,param_2,uVar6);
        if (((uVar9 & 1) == 0) && (func_0x00010c06c000(), (uVar6 & 1) != 0)) {
          puVar5 = (undefined1 *)0x1;
          goto LAB_107f9bb58;
        }
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
      uVar2 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar2 != 0);
  }
  puVar5 = (undefined1 *)0x0;
LAB_107f9bb58:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uVar2 = uVar1;
  func_0x00010bdf6e00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf52a60();
  if (uVar8 != 0) {
    lVar7 = *plStack_230;
    do {
      uVar9 = 0;
      do {
        if (*plStack_230 != lVar7) {
          _objc_enumerationMutation(uVar2);
        }
        puVar5 = *(undefined1 **)(lStack_238 + uVar9 * 8);
        uVar6 = uVar1;
        puVar3 = (undefined8 *)puVar5;
        func_0x00010be44ec0(uVar1,param_2,puVar5);
        if (((int)uVar6 != 0) && (func_0x00010c06c000(), ((ulong)puVar5 & 1) != 0)) {
          puVar5 = (undefined1 *)0x1;
          goto LAB_107f9bc7c;
        }
        uVar9 = uVar9 + 1;
      } while (uVar8 != uVar9);
      uVar8 = uVar2;
      puVar3 = &uStack_240;
      func_0x00010bf52a60(uVar2,param_2,&uStack_240,auStack_1f8,0x10);
    } while (uVar8 != 0);
  }
  puVar5 = (undefined1 *)0x0;
LAB_107f9bc7c:
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010bf45e20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar4 = puVar5;
  func_0x00010c081f00(puVar5);
  _objc_release(puVar5);
  return puVar4;
}



/* Entry: 107f9bb9c; end: 107f9bcbf; -[SCSmartSwipeFilterView hasUcoAnimatedFilters] */

undefined1 * FUN_107f9bb9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
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
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_1;
  func_0x00010bdf6e00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        puVar6 = *(undefined1 **)(lStack_118 + lVar8 * 8);
        lVar3 = param_1;
        puVar4 = (undefined8 *)puVar6;
        func_0x00010be44ec0(param_1,param_2,puVar6);
        if (((int)lVar3 != 0) && (func_0x00010c06c000(), ((ulong)puVar6 & 1) != 0)) {
          puVar6 = (undefined1 *)0x1;
          goto LAB_107f9bc7c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar4 = &uStack_120;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  puVar6 = (undefined1 *)0x0;
LAB_107f9bc7c:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010bf45e20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar5 = puVar6;
  func_0x00010c081f00(puVar6);
  _objc_release(puVar6);
  return puVar5;
}



/* Entry: 107f9bcc0; end: 107f9bd27; -[SCSmartSwipeFilterView _isUcoFilterView:] */

undefined8 FUN_107f9bcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf45e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c081f00(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107f9bd28; end: 107f9bdcb; -[SCSmartSwipeFilterView appliedUCOLensIds] */

void FUN_107f9bd28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf60860();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f9bdcc; end: 107f9bf83; -[SCSmartSwipeFilterView hasGenerativeAiUcoFilters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9bdcc(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010bf60860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar3 == 0) {
      uVar10 = 0;
LAB_107f9bf3c:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return uVar10;
      }
      ___stack_chk_fail();
      uVar10 = *(undefined8 *)(uVar2 + (long)_DAT_112772668);
                    /* WARNING: Could not recover jumptable at 0x00010bf2d8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar10,PTR_s_canStackMoreFilters_1125a8fe0);
      return uVar10;
    }
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar2);
      }
      uVar4 = *(undefined8 *)(uVar9 * 8);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bfad800();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010bfadea0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfae620();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf0a800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar10);
      _objc_release(uVar5);
      uVar5 = uVar7;
      func_0x00010c074540();
      _objc_release(uVar7);
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) {
        uVar10 = 1;
        goto LAB_107f9bf3c;
      }
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
    uVar3 = uVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107f9bf84; end: 107f9bf93; -[SCSmartSwipeFilterView canStackMoreFilters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9bf84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772668),PTR_s_canStackMoreFilters_1125a8fe0);
  return;
}



/* Entry: 107f9bf94; end: 107f9c027; -[SCSmartSwipeFilterView loadingAnimationCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9bf94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d89f8;
  _objc_alloc(PTR_PTR_1126d89f8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277265c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112772660);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d0e0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f9c028; end: 107f9c10b; -[SCSmartSwipeFilterView _subscribeToAttachmentPresentationEventObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f9c10c; end: 107f9c217;  */

void FUN_107f9c10c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c10f460();
    lVar2 = param_1;
    if (lVar1 == 2) {
      func_0x00010c23eea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf32420(param_2);
      func_0x00010c0a1260(lVar2);
    }
    else if (lVar1 == 1) {
      func_0x00010c23eea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf32420(param_2);
      func_0x00010c0a12e0(lVar2);
    }
    else {
      if (lVar1 != 0) goto LAB_107f9c1fc;
      func_0x00010c23eea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010c094fa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0d7a0(lVar2);
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
  }
LAB_107f9c1fc:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f9c218; end: 107f9c25f; -[SCSmartSwipeFilterView _stashCurrentFilterItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c218(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bfae060(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127726f4));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772720);
  *(long *)(param_1 + _DAT_112772720) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f9c260; end: 107f9c2a7; -[SCSmartSwipeFilterView _restoreStashedFilterItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c260(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112772720;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f9c2a8; end: 107f9c2ab; -[SCSmartSwipeFilterView currentLensCommand] */

void FUN_107f9c2a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf69ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_defaultLensCommand_1125b8058);
  return;
}



/* Entry: 107f9c2ac; end: 107f9c2ff; -[SCSmartSwipeFilterView defaultLensCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107f9c2ac(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_c8;
  
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar4 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar3);
  uVar8 = uVar4;
  _objc_retain(uVar9);
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar4);
  _objc_exception_throw(puVar3);
  _objc_retain(uVar9);
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar8);
  _objc_exception_throw();
  puVar7 = &uStack_190;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar4);
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  func_0x00010bdf6e00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar11 = *plStack_180;
    do {
      puVar2 = PTR_s_didProcessTapInPreviewContainerV_1125bbcd0;
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_180 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        uVar9 = *(ulong *)(lStack_188 + (long)puVar12 * 8);
        uVar8 = uVar9;
        _objc_opt_respondsToSelector(uVar9,puVar2);
        if ((uVar8 & 1) != 0) {
          func_0x00010bf78ca0(uVar9);
        }
        puVar12 = puVar12 + 1;
      } while (puVar5 != puVar12);
      puVar5 = puVar3;
      puVar7 = &uStack_190;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return uVar4;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  uVar8 = uVar4;
  func_0x00010c07d460();
  if ((uVar8 & 1) == 0) {
    func_0x00010bdf6e00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        puVar3 = PTR_s_shouldBlockGesture__112669360;
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar4);
          }
          uVar10 = *(ulong *)(uVar8 * 8);
          uVar6 = uVar10;
          _objc_opt_respondsToSelector(uVar10,puVar3);
          if (((uVar6 & 1) != 0) && (func_0x00010c22e4e0(), (uVar10 & 1) != 0)) {
            uVar8 = 1;
            goto LAB_107f9c60c;
          }
          uVar8 = uVar8 + 1;
        } while (uVar9 != uVar8);
        uVar9 = uVar4;
        func_0x00010bf52a60();
      } while (uVar9 != 0);
      uVar8 = 0;
    }
LAB_107f9c60c:
    _objc_release(uVar4);
  }
  else {
    uVar8 = 1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    return *(ulong *)((long)puVar7 + (long)_DAT_112772688);
  }
  return uVar8;
}



/* Entry: 107f9c300; end: 107f9c35f; -[SCSmartSwipeFilterView imageProcessCommandForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107f9c300(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_a8;
  
  uVar8 = param_2;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar3);
  _objc_retain(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar8);
  _objc_exception_throw();
  puVar7 = &uStack_170;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar5);
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  func_0x00010bdf6e00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar11 = *plStack_160;
    do {
      puVar2 = PTR_s_didProcessTapInPreviewContainerV_1125bbcd0;
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_160 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        uVar9 = *(ulong *)(lStack_168 + (long)puVar12 * 8);
        uVar8 = uVar9;
        _objc_opt_respondsToSelector(uVar9,puVar2);
        if ((uVar8 & 1) != 0) {
          func_0x00010bf78ca0(uVar9);
        }
        puVar12 = puVar12 + 1;
      } while (puVar4 != puVar12);
      puVar4 = puVar3;
      puVar7 = &uStack_170;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return uVar5;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  uVar8 = uVar5;
  func_0x00010c07d460();
  if ((uVar8 & 1) == 0) {
    func_0x00010bdf6e00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        puVar3 = PTR_s_shouldBlockGesture__112669360;
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar5);
          }
          uVar10 = *(ulong *)(uVar8 * 8);
          uVar6 = uVar10;
          _objc_opt_respondsToSelector(uVar10,puVar3);
          if (((uVar6 & 1) != 0) && (func_0x00010c22e4e0(), (uVar10 & 1) != 0)) {
            uVar8 = 1;
            goto LAB_107f9c60c;
          }
          uVar8 = uVar8 + 1;
        } while (uVar9 != uVar8);
        uVar9 = uVar5;
        func_0x00010bf52a60();
      } while (uVar9 != 0);
      uVar8 = 0;
    }
LAB_107f9c60c:
    _objc_release(uVar5);
  }
  else {
    uVar8 = 1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    return *(ulong *)((long)puVar7 + (long)_DAT_112772688);
  }
  return uVar8;
}



/* Entry: 107f9c360; end: 107f9c3bf; -[SCSmartSwipeFilterView updateMediaFiltersAndOutputCommandsWithFilterItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107f9c360(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  puVar7 = &uStack_150;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar5);
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  func_0x00010bdf6e00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar11 = *plStack_140;
    do {
      puVar2 = PTR_s_didProcessTapInPreviewContainerV_1125bbcd0;
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_140 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        uVar9 = *(ulong *)(lStack_148 + (long)puVar12 * 8);
        uVar8 = uVar9;
        _objc_opt_respondsToSelector(uVar9,puVar2);
        if ((uVar8 & 1) != 0) {
          func_0x00010bf78ca0(uVar9);
        }
        puVar12 = puVar12 + 1;
      } while (puVar4 != puVar12);
      puVar4 = puVar3;
      puVar7 = &uStack_150;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return uVar5;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  uVar8 = uVar5;
  func_0x00010c07d460();
  if ((uVar8 & 1) == 0) {
    func_0x00010bdf6e00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        puVar3 = PTR_s_shouldBlockGesture__112669360;
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar5);
          }
          uVar10 = *(ulong *)(uVar8 * 8);
          uVar6 = uVar10;
          _objc_opt_respondsToSelector(uVar10,puVar3);
          if (((uVar6 & 1) != 0) && (func_0x00010c22e4e0(), (uVar10 & 1) != 0)) {
            uVar8 = 1;
            goto LAB_107f9c60c;
          }
          uVar8 = uVar8 + 1;
        } while (uVar9 != uVar8);
        uVar9 = uVar5;
        func_0x00010bf52a60();
      } while (uVar9 != 0);
      uVar8 = 0;
    }
LAB_107f9c60c:
    _objc_release(uVar5);
  }
  else {
    uVar8 = 1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    return *(ulong *)((long)puVar7 + (long)_DAT_112772688);
  }
  return uVar8;
}



/* Entry: 107f9c3c0; end: 107f9c4fb; -[SCSmartSwipeFilterView didProcessTapInPreviewContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107f9c3c0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bdf6e00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_120;
    do {
      puVar1 = PTR_s_didProcessTapInPreviewContainerV_1125bbcd0;
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        uVar6 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar5 = uVar6;
        _objc_opt_respondsToSelector(uVar6,puVar1);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf78ca0(uVar6);
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = param_1;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  uVar5 = param_3;
  func_0x00010c07d460();
  if ((uVar5 & 1) == 0) {
    func_0x00010bdf6e00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    uVar5 = 0;
    if (uVar6 != 0) {
      do {
        puVar1 = PTR_s_shouldBlockGesture__112669360;
        uVar5 = 0;
        do {
          if (lRam0000000000000000 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          uVar7 = *(ulong *)(uVar5 * 8);
          uVar2 = uVar7;
          _objc_opt_respondsToSelector(uVar7,puVar1);
          if (((uVar2 & 1) != 0) && (func_0x00010c22e4e0(), (uVar7 & 1) != 0)) {
            uVar5 = 1;
            goto LAB_107f9c60c;
          }
          uVar5 = uVar5 + 1;
        } while (uVar6 != uVar5);
        uVar6 = param_3;
        func_0x00010bf52a60();
      } while (uVar6 != 0);
      uVar5 = 0;
    }
LAB_107f9c60c:
    _objc_release(param_3);
  }
  else {
    uVar5 = 1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    return *(ulong *)((long)puVar3 + (long)_DAT_112772688);
  }
  return uVar5;
}



/* Entry: 107f9c4fc; end: 107f9c65b; -[SCSmartSwipeFilterView shouldBlockGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c4fc(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010c07d460();
  if ((uVar3 & 1) == 0) {
    func_0x00010bdf6e00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        puVar2 = PTR_s_shouldBlockGesture__112669360;
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_1);
          }
          uVar7 = *(ulong *)(uVar8 * 8);
          uVar4 = uVar7;
          _objc_opt_respondsToSelector(uVar7,puVar2);
          if (((uVar4 & 1) != 0) && (func_0x00010c22e4e0(), (uVar7 & 1) != 0)) {
            uVar6 = 1;
            goto LAB_107f9c60c;
          }
          uVar8 = uVar8 + 1;
        } while (uVar3 != uVar8);
        uVar3 = param_1;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
      uVar6 = 0;
    }
LAB_107f9c60c:
    _objc_release(param_1);
  }
  else {
    uVar6 = 1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    return *(undefined8 *)(param_3 + _DAT_112772688);
  }
  return uVar6;
}



/* Entry: 107f9c65c; end: 107f9c66b; -[SCSmartSwipeFilterView commonLoggingParamsBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c65c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772688);
}



/* Entry: 107f9c66c; end: 107f9c68b; -[SCSmartSwipeFilterView currentViewportTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c66c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1127726b4);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 107f9c68c; end: 107f9c6ab; -[SCSmartSwipeFilterView setCurrentViewportTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c68c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1127726b4);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 107f9c6ac; end: 107f9c6bb; -[SCSmartSwipeFilterView filterCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c6ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127726b0);
}



/* Entry: 107f9c6bc; end: 107f9c6cb; -[SCSmartSwipeFilterView captionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c6bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127726f8);
}



/* Entry: 107f9c6cc; end: 107f9c6db; -[SCSmartSwipeFilterView previewABProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c6cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772684);
}



/* Entry: 107f9c6dc; end: 107f9c6eb; -[SCSmartSwipeFilterView locationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c6dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772664);
}



/* Entry: 107f9c6ec; end: 107f9c6fb; -[SCSmartSwipeFilterView didEndScrollingFilterViewObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c6ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127726c4);
}



/* Entry: 107f9c6fc; end: 107f9c70b; -[SCSmartSwipeFilterView isVideoSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107f9c6fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772648);
}



/* Entry: 107f9c70c; end: 107f9c71b; -[SCSmartSwipeFilterView setIsVideoSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c70c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112772648) = param_3;
  return;
}



/* Entry: 107f9c71c; end: 107f9c72b; -[SCSmartSwipeFilterView isFromGallery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107f9c71c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127726bc);
}



/* Entry: 107f9c72c; end: 107f9c74b; -[SCSmartSwipeFilterView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c72c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112772710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f9c74c; end: 107f9c75f; -[SCSmartSwipeFilterView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c74c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112772710,param_3);
  return;
}



/* Entry: 107f9c760; end: 107f9c76f; -[SCSmartSwipeFilterView renderingSessionFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c760(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772654);
}



/* Entry: 107f9c770; end: 107f9c77f; -[SCSmartSwipeFilterView imageProcessCommandProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c770(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772658);
}



/* Entry: 107f9c780; end: 107f9c78f; -[SCSmartSwipeFilterView commonLoggingParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c780(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772724);
}



/* Entry: 107f9c790; end: 107f9c7cf; -[SCSmartSwipeFilterView setCommonLoggingParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772724;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f9c7d0; end: 107f9c7df; -[SCSmartSwipeFilterView lazyLensIconRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c7d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127726cc);
}



/* Entry: 107f9c7e0; end: 107f9c81f; -[SCSmartSwipeFilterView setLazyLensIconRepository:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127726cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f9c820; end: 107f9c82f; -[SCSmartSwipeFilterView lensCommandMetadataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c820(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772728);
}



/* Entry: 107f9c830; end: 107f9c86f; -[SCSmartSwipeFilterView setLensCommandMetadataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772728;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f9c870; end: 107f9c88f; -[SCSmartSwipeFilterView ucoLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c870(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127726d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f9c890; end: 107f9c89f; -[SCSmartSwipeFilterView ucoInteractionTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c890(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127726d8);
}



/* Entry: 107f9c8a0; end: 107f9c8bf; -[SCSmartSwipeFilterView lensCrashLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c8a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127726dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f9c8c0; end: 107f9c8cf; -[SCSmartSwipeFilterView unifiedCameraObjectFilterViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c8c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127726d0);
}



/* Entry: 107f9c8d0; end: 107f9c8df; -[SCSmartSwipeFilterView swipeFilterViewLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c8d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127726e0);
}



/* Entry: 107f9c8e0; end: 107f9c91f; -[SCSmartSwipeFilterView setSwipeFilterViewLayoutGuide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127726e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f9c920; end: 107f9c92f; -[SCSmartSwipeFilterView lensCTAHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c920(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127726e4);
}



/* Entry: 107f9c930; end: 107f9c93f; -[SCSmartSwipeFilterView backgroundGradientColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c930(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772704);
}



/* Entry: 107f9c940; end: 107f9c97f; -[SCSmartSwipeFilterView setBackgroundGradientColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772704;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f9c980; end: 107f9c98f; -[SCSmartSwipeFilterView didSwipeFilterViewObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c980(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127726c0);
}



/* Entry: 107f9c990; end: 107f9c99f; -[SCSmartSwipeFilterView filterViewDidEndDeceleratingObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c990(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127726c8);
}



/* Entry: 107f9c9a0; end: 107f9c9af; -[SCSmartSwipeFilterView userBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c9a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127726e8);
}



/* Entry: 107f9c9b0; end: 107f9c9ef; -[SCSmartSwipeFilterView setUserBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9c9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127726e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f9c9f0; end: 107f9c9ff; -[SCSmartSwipeFilterView filterArranger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f9c9f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772668);
}


