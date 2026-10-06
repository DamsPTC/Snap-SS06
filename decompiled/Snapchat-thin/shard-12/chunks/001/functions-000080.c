/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d16ebc; end: 108d16ec3; -[SCRecentStickerHistory clearRecentlyUsedSearchTags] */

void FUN_108d16ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 108d16ec4; end: 108d16eeb; -[SCRecentStickerHistory recentlyUsedSearchTagsList] */

void FUN_108d16ec4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d16eec; end: 108d16f9f; -[SCRecentStickerHistory initWithCoder:] */

undefined1 * FUN_108d16eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe5a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar2;
      _objc_release(uVar4);
    }
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d16fa0; end: 108d16fb7; -[SCRecentStickerHistory encodeWithCoder:] */

void FUN_108d16fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110ef2a98);
  return;
}



/* Entry: 108d16fb8; end: 108d16fc3; -[SCRecentStickerHistory .cxx_destruct] */

void FUN_108d16fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d16fc4; end: 108d17013; -[SCGiphyStickerSearchSectionCell initWithFrame:] */

undefined1 * FUN_108d16fc4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe5a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beab960(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d17014; end: 108d173f3; -[SCGiphyStickerSearchSectionCell setStickers:contexts:edgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d17014(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = param_1;
  _objc_retain(param_7);
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(param_5 + _DAT_11277b1d0);
  *(undefined8 *)(param_5 + _DAT_11277b1d0) = param_8;
  _objc_release(uVar11);
  lVar12 = (long)_DAT_11277b1d4;
  _objc_retain(param_7);
  uVar11 = *(undefined8 *)(param_5 + lVar12);
  *(long *)(param_5 + lVar12) = param_7;
  _objc_release(uVar11);
  lVar13 = (long)_DAT_11277b1d8;
  if (*(long *)(param_5 + lVar13) == 0) {
    func_0x00010beab960(param_5);
  }
  dVar15 = -param_2;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  param_2 = param_2 + dVar14;
  param_4 = param_4 + param_2;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  func_0x00010c19f0e0(dVar15,-param_1,param_4,param_3 + param_1 + param_2,
                      *(undefined8 *)(param_5 + lVar13));
  func_0x00010c128b60(*(undefined8 *)(param_5 + lVar13));
  func_0x00010beea0a0(param_5);
  func_0x00010bebe840(param_5);
  func_0x00010c181f80(0,dVar15,0,dVar15,*(undefined8 *)(param_5 + lVar13));
  lVar13 = *(long *)(param_5 + lVar12);
  func_0x00010bf529e0();
  lVar12 = param_5;
  func_0x00010c09d4e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    _objc_release();
    if (lVar12 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
      _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
      func_0x00010bff0f20();
      func_0x00010c1befa0(param_5,param_6,puVar1);
      _objc_release(puVar1);
      lVar12 = param_5;
      func_0x00010c09d4e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      _objc_release(lVar12);
      lVar12 = param_5;
      func_0x00010c09d4e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a8560();
      _objc_release(lVar12);
      lVar12 = param_5;
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_5;
      func_0x00010c09d4e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar12,param_6,lVar13);
      _objc_release(lVar13);
      _objc_release(lVar12);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar12 = param_5;
      func_0x00010c09d4e0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_5;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar13;
      func_0x00010bf493a0(lVar13,param_6,lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_5;
      lStack_a8 = lVar4;
      func_0x00010c09d4e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_5;
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010bf493a0(lVar6,param_6,lVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_a0 = lVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_a8,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1,param_6,puVar10);
      _objc_release(puVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar13);
      _objc_release(lVar12);
    }
    func_0x00010c09d4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
  }
  else {
    func_0x00010c2558c0();
    param_5 = lVar12;
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = (long)_DAT_11277b1d8;
  func_0x00010c12c960(*(undefined8 *)(param_7 + lVar12));
  uVar11 = *(undefined8 *)(param_7 + lVar12);
  *(undefined8 *)(param_7 + lVar12) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 108d173f4; end: 108d17427; -[SCGiphyStickerSearchSectionCell didEndDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d173f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b1d8;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d17428; end: 108d17547; -[SCGiphyStickerSearchSectionCell _setupCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d17428(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f7ac0();
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11277b1d8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c167a00(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR_PTR_1126d4f28;
  _objc_opt_class(PTR_PTR_1126d4f28);
  func_0x00010c126000(uVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110dec758);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d17548; end: 108d175c3; -[SCGiphyStickerSearchSectionCell setGlobalScopeItemViewService:itemPresentationModelSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d17548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b1dc);
  *(undefined8 *)(param_1 + _DAT_11277b1dc) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b1e0);
  *(undefined8 *)(param_1 + _DAT_11277b1e0) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d175c4; end: 108d175cb; -[SCGiphyStickerSearchSectionCell numberOfSectionsInCollectionView:] */

undefined8 FUN_108d175c4(void)

{
  return 1;
}



/* Entry: 108d175cc; end: 108d175db; -[SCGiphyStickerSearchSectionCell collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d175cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b1d4),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108d175dc; end: 108d1763f; -[SCGiphyStickerSearchSectionCell collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d175dc(long param_1)

{
  func_0x00010beea0a0();
  func_0x00010bebe840(param_1);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11277b1d8));
  _CGRectGetWidth();
  return;
}



/* Entry: 108d17640; end: 108d177ff; -[SCGiphyStickerSearchSectionCell collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d17640(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11277b1d4;
  uVar5 = *(ulong *)(param_1 + lVar7);
  if (uVar5 != 0) {
    func_0x00010c0840e0(param_4);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126baa60;
    _objc_opt_class(PTR_PTR_1126baa60);
    uVar2 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar1);
    _objc_release(uVar5);
    if ((uVar2 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0840e0(param_4);
      func_0x00010c0dfd40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_11277b1dc);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c29e140();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078d80();
      if ((int)puVar1 != 0) {
        uVar8 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c0840e0(param_4);
        func_0x00010c0dfd40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be45b80(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar6);
        goto LAB_108d177d4;
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar6);
    }
  }
  param_1 = param_3;
  func_0x00010bf6e0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_108d177d4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d17800; end: 108d1788b; -[SCGiphyStickerSearchSectionCell collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_108d17800(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126d4f28;
  _objc_opt_class(PTR_PTR_1126d4f28);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  puVar1 = PTR_PTR_1126d4f28;
  if ((uVar2 & 1) != 0) {
    _objc_retain(in_x3);
    _objc_opt_class(puVar1);
    uVar3 = in_x3;
    _objc_opt_isKindOfClass(in_x3,puVar1);
    uVar2 = in_x3;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(in_x3);
    func_0x00010c2a5f80(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 108d1788c; end: 108d178d7; -[SCGiphyStickerSearchSectionCell collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_108d1788c(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126d4f28;
  _objc_opt_class(PTR_PTR_1126d4f28);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf75820(in_x3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 108d178d8; end: 108d17aab; -[SCGiphyStickerSearchSectionCell collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d178d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_6);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d4f28;
  _objc_opt_class(PTR_PTR_1126d4f28);
  uVar2 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_5);
    uVar2 = param_5;
    func_0x00010c0840e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + _DAT_11277b1e0);
    func_0x00010c10f580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c2721e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0(param_5);
    func_0x00010bf512a0(uVar5);
    _objc_release(uVar5);
    param_3 = param_3 + _DAT_11277b1e4;
    _objc_loadWeakRetained(param_3);
    uVar5 = param_5;
    func_0x00010c084de0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    uVar6 = uVar5;
    func_0x00010bfe90c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_6);
    func_0x00010c155660(param_1,param_2,param_3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 108d17aac; end: 108d17c07; -[SCGiphyStickerSearchSectionCell _itemCellForItem:atIndexPath:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d17aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + _DAT_11277b1dc);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c29e140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf6e0c0(param_5,param_2,uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c18b5e0(uVar2,param_2,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277b1e0);
  func_0x00010c10f580(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c084de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c29cde0(uVar6,param_2,param_3,uVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c28c8c0(uVar2,param_2,uVar5,param_3);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d17c08; end: 108d17c5f; -[SCGiphyStickerSearchSectionCell willDisplayStickerPickerItemCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d17c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277b1e4;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a6120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d17c60; end: 108d17cc7; -[SCGiphyStickerSearchSectionCell stickerPickerItemCell:didDisplayContentInTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d17c60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277b1e4;
  _objc_retain(param_4);
  param_2 = param_2 + lVar1;
  _objc_loadWeakRetained(param_2);
  func_0x00010c254840(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d17cc8; end: 108d17d0b; -[SCGiphyStickerSearchSectionCell gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108d17cc8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277b1d8;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010c070400();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c070ea0(uVar3);
    uVar1 = (uint)uVar3 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108d17d0c; end: 108d17d13; -[SCGiphyStickerSearchSectionCell gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_108d17d0c(void)

{
  return 1;
}



/* Entry: 108d17d14; end: 108d17dab; -[SCGiphyStickerSearchSectionCell gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_108d17d14(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_108d17d90;
    }
  }
  uVar3 = 0;
LAB_108d17d90:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 108d17dac; end: 108d17ddf; -[SCGiphyStickerSearchSectionCell _visibleColumnCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d17dac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11277b1d4);
  func_0x00010bf529e0();
  uVar2 = 0x4010000000000000;
  if (8 < uVar1) {
    uVar2 = 0x4011cccccccccccd;
  }
  return uVar2;
}



/* Entry: 108d17de0; end: 108d17e2b; -[SCGiphyStickerSearchSectionCell _spacingWithVisibleColumnNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108d17de0(double param_1,long param_2)

{
  double dVar1;
  
  param_1 = param_1 / -200.0;
  dVar1 = param_1 + 0.055;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_11277b1d8));
  _CGRectGetWidth();
  return (long)(dVar1 * param_1);
}



/* Entry: 108d17e2c; end: 108d17e4b; -[SCGiphyStickerSearchSectionCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d17e2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277b1e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d17e4c; end: 108d17e5f; -[SCGiphyStickerSearchSectionCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d17e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b1e4,param_3);
  return;
}



/* Entry: 108d17e60; end: 108d17e6f; -[SCGiphyStickerSearchSectionCell loadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d17e60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b1e8);
}



/* Entry: 108d17e70; end: 108d17eaf; -[SCGiphyStickerSearchSectionCell setLoadingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d17e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b1e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d17eb0; end: 108d17f3b; -[SCGiphyStickerSearchSectionCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d17eb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b1e8,0);
  _objc_destroyWeak(param_1 + _DAT_11277b1e4);
  _objc_storeStrong(param_1 + _DAT_11277b1e0,0);
  _objc_storeStrong(param_1 + _DAT_11277b1dc,0);
  _objc_storeStrong(param_1 + _DAT_11277b1d4,0);
  _objc_storeStrong(param_1 + _DAT_11277b1d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b1d8,0);
  return;
}



/* Entry: 108d17f3c; end: 108d18017; -[SCRoundedCornersView initWithFrame:roundedCorners:radius:] */

undefined1 * FUN_108d17f3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 in_d4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fe5b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c40(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c0bc1c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c1ee9c0(in_d4,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108d18018; end: 108d18053; -[SCRoundedCornersView setRoundedCorners:radius:] */

void FUN_108d18018(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c184340();
  func_0x00010c1e6e60(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c2877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_updateMaskLayer_11267f820);
  return;
}



/* Entry: 108d18054; end: 108d1809b; -[SCRoundedCornersView layoutSubviews] */

void FUN_108d18054(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe5b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010c2877e0(param_1);
  return;
}



/* Entry: 108d1809c; end: 108d181ab; -[SCRoundedCornersView updateMaskLayer] */

void FUN_108d1809c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf20c00();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  uVar1 = param_5;
  uVar3 = param_1;
  func_0x00010bf52660(param_5);
  func_0x00010c11ef60(param_5);
  uVar4 = uVar3;
  func_0x00010c11ef60(param_5);
  func_0x00010bf199e0(param_1,param_2,param_3,param_4,uVar3,uVar4,puVar2,param_6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0bc1c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c0bc1c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108d181ac; end: 108d181bb; -[SCRoundedCornersView maskLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d181ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b1ec);
}



/* Entry: 108d181bc; end: 108d181fb; -[SCRoundedCornersView setMaskLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d181bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b1ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d181fc; end: 108d1820b; -[SCRoundedCornersView corners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d181fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b1f0);
}



/* Entry: 108d1820c; end: 108d1821b; -[SCRoundedCornersView setCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1820c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277b1f0) = param_3;
  return;
}



/* Entry: 108d1821c; end: 108d1822b; -[SCRoundedCornersView radius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1821c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b1f4);
}



/* Entry: 108d1822c; end: 108d1823b; -[SCRoundedCornersView setRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1822c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277b1f4) = param_1;
  return;
}



/* Entry: 108d1823c; end: 108d1824f; -[SCRoundedCornersView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1823c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b1ec,0);
  return;
}



/* Entry: 108d18250; end: 108d1833b; -[SCStickerPickerBitmojiCTACell initWithFrame:bitmoji3DContentFetcher:snapchattersDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d18250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fe5b8;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277b1f8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277b1fc;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108d1833c; end: 108d18793; -[SCStickerPickerBitmojiCTACell _setUpLayoutFromAvatarImages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1833c(long param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  long lVar23;
  ulong uStack_d0;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar21 = puRam000000011372e508;
  puRam000000011372e508 = puVar4;
  _objc_release(uVar21);
  uStack_d0 = 0;
  bVar2 = true;
  do {
    bVar1 = bVar2;
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    func_0x00010befbb60(param_1);
    func_0x00010c219b60(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = &PTR__OBJC_CLASS___NSConstantArray_111182f78;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar19;
    func_0x00010c067fc0(ppuVar19);
    puVar8 = puVar6;
    func_0x00010bf493c0((double)(long)ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    puStack_90 = puVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bf348e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    puStack_88 = puVar11;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf49420(0x404a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar5;
    puStack_80 = puVar13;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar5;
    func_0x00010bfe0660(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(lVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar19);
    _objc_release(lVar23);
    _objc_release(puVar6);
    func_0x00010befa120(puRam000000011372e508);
    puVar4 = PTR_PTR_1126af5d8;
    _objc_alloc(PTR_PTR_1126af5d8);
    lVar23 = (long)_DAT_11277b200;
    uVar18 = *(ulong *)(param_1 + lVar23);
    func_0x00010bf529e0();
    ppuVar19 = &PTR__OBJC_CLASS___NSConstantArray_111182f90;
    if (uStack_d0 < uVar18) {
      ppuVar19 = *(undefined ***)(param_1 + lVar23);
    }
    func_0x00010c0dfd40(ppuVar19);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantArray_111182fa8;
    func_0x00010c0dfd40(&PTR__OBJC_CLASS___NSConstantArray_111182fa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6040(puVar4);
    _objc_release(ppuVar7);
    _objc_release(ppuVar19);
    uVar20 = *(undefined8 *)(param_1 + _DAT_11277b1f8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bfa9f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(puVar4);
    _objc_release(puVar5);
    uStack_d0 = 1;
    bVar2 = false;
  } while (bVar1);
  _objc_initWeak(auStack_98,param_1);
  puVar22 = auStack_98;
  _objc_copyWeak(auStack_a0,puVar22);
  func_0x00010be0fda0(param_1);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(puVar3);
  _objc_retain(puVar22);
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained(puVar3);
  func_0x00010bea2400();
  _objc_release(puVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108d18794; end: 108d187eb;  */

void FUN_108d18794(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d187ec; end: 108d188b7; -[SCStickerPickerBitmojiCTACell _setBitmojiImageForCTASticker:imageViewToAttach:] */

void FUN_108d187ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [48];
  
  uVar1 = uRam000000011372e508;
  _objc_retain(param_3);
  func_0x00010c0dfd40(uVar1,param_2,(long)(int)param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
  _objc_release(uVar1);
  if (param_4 < 2) {
    _CGAffineTransformMakeScale(auStack_70,0xbff0000000000000,0x3ff0000000000000);
    uVar1 = uRam000000011372e508;
    func_0x00010c0dfd40(uRam000000011372e508,param_2,(long)(int)param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 108d188b8; end: 108d18a23; -[SCStickerPickerBitmojiCTACell _fetchAvatarImages:completion:] */

void FUN_108d188b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae810;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar1 = puRam000000011372e500;
  puRam000000011372e500 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010bf41860(PTR_PTR_1126ae6b8,param_2,param_3,&PTR___NSConcreteGlobalBlock_110ac2718);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0e0e60(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puRam000000011372e500;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d18a4c;
  puStack_50 = &UNK_110859310;
  uStack_48 = param_4;
  _objc_retain(param_4);
  puVar3 = puVar4;
  func_0x00010c25ff60(puVar4,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010bea9120(param_1);
  func_0x00010bea8f40(param_1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(puVar4);
  return;
}



/* Entry: 108d18a24; end: 108d18a4b;  */

void FUN_108d18a24(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108d18a4c; end: 108d18beb;  */

void FUN_108d18a4c(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined4 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar3 != 0) {
    uVar3 = 0;
    do {
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_108d18bec;
      uStack_88 = 0x108d18bfc;
      uStack_80 = 0;
      uVar2 = param_2;
      puStack_a0 = &uStack_a8;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puStack_d0 = puVar1;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_108d18c04;
      puStack_b8 = &UNK_11084d758;
      puStack_f8 = puVar1;
      uStack_f0 = 0xc2000000;
      uStack_e8 = 0x108d18c3c;
      puStack_e0 = &UNK_11084d888;
      puStack_d8 = &uStack_a8;
      puStack_b0 = &uStack_a8;
      func_0x00010c0c0800();
      _objc_release(uVar2);
      puStack_130 = puVar1;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_108d18c88;
      puStack_118 = &UNK_110ac2738;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      uStack_100 = (undefined4)uVar3;
      uStack_110 = uVar4;
      puStack_108 = &uStack_a8;
      func_0x000107c312cc("APPSTORE",&puStack_130);
      _objc_release(uStack_110);
      __Block_object_dispose(&uStack_a8,8);
      _objc_release(uStack_80);
      uVar3 = uVar3 + 1;
      uVar2 = param_2;
      func_0x00010bf529e0();
    } while (uVar3 < uVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108d18bec; end: 108d18c03;  */

void FUN_108d18bec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108d18c04; end: 108d18c87;  */

void FUN_108d18c04(long param_1,undefined8 param_2)

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



/* Entry: 108d18c88; end: 108d18ca3;  */

void FUN_108d18c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d18ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             *(undefined4 *)(param_1 + 0x30));
  return;
}



/* Entry: 108d18ca4; end: 108d18cdb; -[SCStickerPickerBitmojiCTACell _setValidFriendAvatarIdsList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d18ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b200);
  *(undefined8 *)(param_1 + _DAT_11277b200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d18cdc; end: 108d18de3; -[SCStickerPickerBitmojiCTACell showIconForLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d18cdc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b1fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0d42c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108d18de4; end: 108d19007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108d18de4(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined *puStack_368;
  undefined *puStack_360;
  long lStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined1 ***pppuStack_2a0;
  code *pcStack_298;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar4 = param_1;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_138 = param_1;
    _objc_alloc_init();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_2);
    puVar6 = param_2;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      unaff_x27 = 0;
      unaff_x28 = *plStack_120;
      do {
        unaff_x22 = (undefined *)0x0;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(param_2);
          }
          unaff_x24 = *(ulong *)(lStack_128 + (long)unaff_x22 * 8);
          uVar5 = unaff_x24;
          func_0x00010901c54c();
          if ((uVar5 & 1) == 0) {
            unaff_x25 = unaff_x24;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(unaff_x25);
            if (unaff_x26 != 0 && unaff_x27 < 2) {
              unaff_x27 = unaff_x27 + 1;
              func_0x00010bf1bae0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x24;
              func_0x00010bf1acc0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(unaff_x25);
              _objc_release(unaff_x24);
            }
          }
          unaff_x22 = unaff_x22 + 1;
        } while (puVar6 != unaff_x22);
        puVar6 = param_2;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(param_2);
    func_0x00010c1097a0(puVar3);
    puVar6 = puVar3;
    func_0x00010bea9f20();
    if ((puStack_138[0x28] & 1) == 0) {
      func_0x000108d397a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    puVar7 = puRam000000011372e510;
    puRam000000011372e510 = puVar6;
    _objc_release(puVar7);
    func_0x00010bea9580(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_108d19008;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  uStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  puStack_170 = unaff_x22;
  puStack_168 = puVar4;
  puStack_160 = puVar3;
  puStack_158 = param_2;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = puRam000000011372e520;
  puRam000000011372e520 = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = puRam000000011372e520;
  func_0x00010c08c0e0(puRam000000011372e520);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puRam000000011372e520;
  func_0x00010c08c0e0(puRam000000011372e520);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x402e000000000000);
  _objc_release(puVar3);
  func_0x00010befbb60(puVar6);
  func_0x00010c219b60(puRam000000011372e520);
  puVar3 = puRam000000011372e520;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  puStack_1d8 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puRam000000011372e520;
  puStack_1e8 = puVar3;
  puStack_1d0 = puVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  puStack_1f0 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f8 = puVar3;
  func_0x00010bf493c0(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puRam000000011372e520;
  puStack_200 = puVar4;
  puStack_1c8 = puVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puRam000000011372e520;
  puStack_1c0 = puVar7;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puRam000000011372e520;
  puStack_1b8 = puVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1b0 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_200);
  _objc_release(puStack_1f8);
  _objc_release(puStack_1f0);
  _objc_release(puStack_1e8);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1d8);
  uVar2 = puRam000000011372e518;
  puRam000000011372e518 = puVar12;
  _objc_retain(puVar12);
  _objc_release(uVar2);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar8 = puVar12;
  _objc_release(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar8 = PTR_PTR_1126b0c40;
  uStack_248 = 0x11372e518;
  uStack_220 = uVar2;
  pcStack_208 = FUN_108d1935c;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = puVar7;
  puStack_258 = puVar4;
  puStack_250 = puVar3;
  puStack_240 = puVar11;
  puStack_238 = puVar10;
  puStack_230 = puVar9;
  puStack_228 = puVar6;
  puStack_218 = puVar12;
  ppuStack_210 = &puStack_150;
  if (puRam000000011372e510 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7ac0(0x4034000000000000,0x4034000000000000,0x4000000000000000,0x4000000000000000,
                        0x4000000000000000,0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = puRam000000011372e528;
    puRam000000011372e528 = puVar4;
    _objc_release(puVar3);
    func_0x00010c1a9f00(puRam000000011372e528);
    func_0x00010befbb60(puRam000000011372e520);
    func_0x00010c219b60(puRam000000011372e528);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puRam000000011372e528;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puRam000000011372e520;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puRam000000011372e528;
    puStack_278 = puVar10;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puRam000000011372e520;
    func_0x00010bf348e0(puRam000000011372e520);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_270 = puVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar4);
  }
  else {
    puVar6 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = puRam000000011372e530;
    puRam000000011372e530 = puVar6;
    _objc_release(puVar3);
    func_0x00010c1cfce0(puRam000000011372e530);
    func_0x00010c21ad00(puRam000000011372e530);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puRam000000011372e530);
    _objc_release(puVar3);
    func_0x00010c212f20(puRam000000011372e530);
    func_0x00010befbb60(puRam000000011372e520);
    func_0x00010c219b60(puRam000000011372e530);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puRam000000011372e530;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puRam000000011372e520;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puRam000000011372e530;
    puStack_288 = puVar9;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puRam000000011372e520;
    func_0x00010bf348e0(puRam000000011372e520);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_280 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
  }
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar6);
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_298 = FUN_108d196ec;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_360 = PTR_PTR_1126fe5b8;
  puStack_368 = puVar3;
  puStack_2d0 = puVar7;
  puStack_2c8 = puVar4;
  puStack_2c0 = puVar10;
  puStack_2b8 = puVar9;
  puStack_2b0 = puVar6;
  puStack_2a8 = puVar8;
  pppuStack_2a0 = &ppuStack_210;
  _objc_msgSendSuper2(&puStack_368,PTR_s_prepareForReuse_112620008);
  func_0x00010c1a9f00(puRam000000011372e528);
  puVar3 = puRam000000011372e510;
  puRam000000011372e510 = (undefined *)0x0;
  _objc_release(puVar3);
  func_0x00010c212f20(puRam000000011372e530);
  func_0x00010c212f20(0);
  puVar3 = puRam000000011372e520;
  puRam000000011372e520 = (undefined *)0x0;
  _objc_release(puVar3);
  puVar4 = puRam000000011372e508;
  _objc_retain(puRam000000011372e508);
  puVar3 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      func_0x00010c1a9f00(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar3 != puVar6);
    puVar3 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar3 = puRam000000011372e508;
  puRam000000011372e508 = (undefined *)0x0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar3 + _DAT_11277b200);
}



/* Entry: 108d19008; end: 108d1935b; -[SCStickerPickerBitmojiCTACell _setUpCreateButtonContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108d19008(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
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
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puRam000000011372e518);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = puRam000000011372e520;
  puRam000000011372e520 = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = puRam000000011372e520;
  func_0x00010c08c0e0(puRam000000011372e520);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puRam000000011372e520;
  func_0x00010c08c0e0(puRam000000011372e520);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x402e000000000000);
  _objc_release(puVar3);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(puRam000000011372e520);
  puVar3 = puRam000000011372e520;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  puStack_98 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puRam000000011372e520;
  puStack_a8 = puVar3;
  puStack_90 = puVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  puStack_b0 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar3;
  func_0x00010bf493c0(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puRam000000011372e520;
  puStack_c0 = puVar4;
  puStack_88 = puVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puRam000000011372e520;
  puStack_80 = puVar12;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puRam000000011372e520;
  puStack_78 = puVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_c0);
  _objc_release(puStack_b8);
  _objc_release(puStack_b0);
  _objc_release(puStack_a8);
  _objc_release(puStack_a0);
  _objc_release(puStack_98);
  uVar2 = puRam000000011372e518;
  puRam000000011372e518 = puVar9;
  _objc_retain(puVar9);
  _objc_release(uVar2);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar5 = puVar9;
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126b0c40;
  uStack_108 = 0x11372e518;
  uStack_e0 = uVar2;
  pcStack_c8 = FUN_108d1935c;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = puVar12;
  puStack_118 = puVar4;
  puStack_110 = puVar3;
  puStack_100 = puVar8;
  puStack_f8 = puVar7;
  puStack_f0 = puVar6;
  puStack_e8 = param_1;
  puStack_d8 = puVar9;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (lRam000000011372e510 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7ac0(0x4034000000000000,0x4034000000000000,0x4000000000000000,0x4000000000000000,
                        0x4000000000000000,0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = puRam000000011372e528;
    puRam000000011372e528 = puVar4;
    _objc_release(puVar3);
    func_0x00010c1a9f00(puRam000000011372e528);
    func_0x00010befbb60(puRam000000011372e520);
    func_0x00010c219b60(puRam000000011372e528);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puRam000000011372e528;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puRam000000011372e520;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puRam000000011372e528;
    puStack_138 = puVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puRam000000011372e520;
    func_0x00010bf348e0(puRam000000011372e520);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_130 = puVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar4);
  }
  else {
    puVar5 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = puRam000000011372e530;
    puRam000000011372e530 = puVar5;
    _objc_release(puVar3);
    func_0x00010c1cfce0(puRam000000011372e530);
    func_0x00010c21ad00(puRam000000011372e530);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puRam000000011372e530);
    _objc_release(puVar3);
    func_0x00010c212f20(puRam000000011372e530);
    func_0x00010befbb60(puRam000000011372e520);
    func_0x00010c219b60(puRam000000011372e530);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puRam000000011372e530;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puRam000000011372e520;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puRam000000011372e530;
    puStack_148 = puVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puRam000000011372e520;
    func_0x00010bf348e0(puRam000000011372e520);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_140 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar3 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_108d196ec;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = PTR_PTR_1126fe5b8;
  puStack_228 = puVar3;
  puStack_190 = puVar12;
  puStack_188 = puVar4;
  puStack_180 = puVar8;
  puStack_178 = puVar7;
  puStack_170 = puVar6;
  puStack_168 = puVar5;
  ppuStack_160 = &puStack_d0;
  _objc_msgSendSuper2(&puStack_228,PTR_s_prepareForReuse_112620008);
  func_0x00010c1a9f00(puRam000000011372e528);
  lVar1 = lRam000000011372e510;
  lRam000000011372e510 = 0;
  _objc_release(lVar1);
  func_0x00010c212f20(puRam000000011372e530);
  func_0x00010c212f20(0);
  puVar3 = puRam000000011372e520;
  puRam000000011372e520 = (undefined *)0x0;
  _objc_release(puVar3);
  puVar4 = puRam000000011372e508;
  _objc_retain(puRam000000011372e508);
  puVar3 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      func_0x00010c1a9f00(*(undefined8 *)((long)puVar12 * 8));
      puVar12 = puVar12 + 1;
    } while (puVar3 != puVar12);
    puVar3 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar3 = puRam000000011372e508;
  puRam000000011372e508 = (undefined *)0x0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar3 + _DAT_11277b200);
}



/* Entry: 108d1935c; end: 108d196eb; -[SCStickerPickerBitmojiCTACell _setUpButtonLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108d1935c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_d8;
  
  puVar2 = PTR_PTR_1126b0c40;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lRam000000011372e510 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7ac0(0x4034000000000000,0x4034000000000000,0x4000000000000000,0x4000000000000000,
                        0x4000000000000000,0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar10 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar1 = puRam000000011372e528;
    puRam000000011372e528 = puVar10;
    _objc_release(puVar1);
    func_0x00010c1a9f00(puRam000000011372e528);
    func_0x00010befbb60(puRam000000011372e520);
    func_0x00010c219b60(puRam000000011372e528);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar10 = puRam000000011372e528;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puRam000000011372e520;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puRam000000011372e528;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puRam000000011372e520;
    func_0x00010bf348e0(puRam000000011372e520);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar8);
  }
  else {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar2 = puRam000000011372e530;
    puRam000000011372e530 = puVar1;
    _objc_release(puVar2);
    func_0x00010c1cfce0(puRam000000011372e530);
    func_0x00010c21ad00(puRam000000011372e530);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puRam000000011372e530);
    _objc_release(puVar2);
    func_0x00010c212f20(puRam000000011372e530);
    func_0x00010befbb60(puRam000000011372e520);
    func_0x00010c219b60(puRam000000011372e530);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puRam000000011372e530;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puRam000000011372e520;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puRam000000011372e530;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puRam000000011372e520;
    func_0x00010bf348e0(puRam000000011372e520);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar2;
  }
  ___stack_chk_fail();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = PTR_PTR_1126fe5b8;
  puStack_168 = puVar2;
  _objc_msgSendSuper2(&puStack_168,PTR_s_prepareForReuse_112620008);
  func_0x00010c1a9f00(puRam000000011372e528);
  lVar9 = lRam000000011372e510;
  lRam000000011372e510 = 0;
  _objc_release(lVar9);
  func_0x00010c212f20(puRam000000011372e530);
  func_0x00010c212f20(0);
  puVar2 = puRam000000011372e520;
  puRam000000011372e520 = (undefined *)0x0;
  _objc_release(puVar2);
  puVar1 = puRam000000011372e508;
  _objc_retain(puRam000000011372e508);
  puVar2 = puVar1;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar1);
      }
      func_0x00010c1a9f00(*(undefined8 *)((long)puVar10 * 8));
      puVar10 = puVar10 + 1;
    } while (puVar2 != puVar10);
    puVar2 = puVar1;
    func_0x00010bf52a60();
  }
  _objc_release(puVar1);
  puVar2 = puRam000000011372e508;
  puRam000000011372e508 = (undefined *)0x0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar2 + _DAT_11277b200);
}



/* Entry: 108d196ec; end: 108d1984f; -[SCStickerPickerBitmojiCTACell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108d196ec(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR_PTR_1126fe5b8;
  uStack_d8 = param_1;
  _objc_msgSendSuper2(&uStack_d8,PTR_s_prepareForReuse_112620008);
  func_0x00010c1a9f00(uRam000000011372e528);
  uVar3 = uRam000000011372e510;
  uRam000000011372e510 = 0;
  _objc_release(uVar3);
  func_0x00010c212f20(uRam000000011372e530);
  func_0x00010c212f20(0);
  uVar3 = uRam000000011372e520;
  uRam000000011372e520 = 0;
  _objc_release(uVar3);
  lVar2 = lRam000000011372e508;
  _objc_retain(lRam000000011372e508);
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c1a9f00(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar4 = lRam000000011372e508;
  lRam000000011372e508 = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar4;
  }
  ___stack_chk_fail();
  return *(long *)(lVar4 + _DAT_11277b200);
}



/* Entry: 108d19850; end: 108d1985f; -[SCStickerPickerBitmojiCTACell validFriendAvatarIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d19850(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b200);
}



/* Entry: 108d19860; end: 108d1989f; -[SCStickerPickerBitmojiCTACell setValidFriendAvatarIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d19860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b200;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d198a0; end: 108d198af; -[SCStickerPickerBitmojiCTACell bitmoji3DContentFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d198a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b1f8);
}



/* Entry: 108d198b0; end: 108d198ef; -[SCStickerPickerBitmojiCTACell setBitmoji3DContentFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d198b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b1f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d198f0; end: 108d198ff; -[SCStickerPickerBitmojiCTACell snapchattersDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d198f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b1fc);
}



/* Entry: 108d19900; end: 108d1993f; -[SCStickerPickerBitmojiCTACell setSnapchattersDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d19900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b1fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d19940; end: 108d1998f; -[SCStickerPickerBitmojiCTACell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d19940(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b1fc,0);
  _objc_storeStrong(param_1 + _DAT_11277b1f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b200,0);
  return;
}



/* Entry: 108d19990; end: 108d19baf; -[SCStickerPickerCategoryCellScrollbar initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108d19990(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fe5c0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
    lVar4 = (long)_DAT_11277b204;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x3ff0000000000000);
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
    lVar4 = (long)_DAT_11277b208;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x3ff8000000000000);
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x00010c050900();
    func_0x00010c18b5e0();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 108d19bb0; end: 108d19cdb;  */

void FUN_108d19bb0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_108d19cdc();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d19cdc; end: 108d19d17;  */

void FUN_108d19cdc(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d19d18; end: 108d19ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d19d18(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_108d19cdc();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d19ec0; end: 108d19f57; -[SCStickerPickerCategoryCellScrollbar setSourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d19ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b20c;
  *(undefined8 *)(param_1 + lVar2) = param_3;
  puVar1 = PTR_PTR_1126d4eb0;
  func_0x00010c152d80(PTR_PTR_1126d4eb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277b204),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d4eb0;
  func_0x00010c152d60(PTR_PTR_1126d4eb0,param_2,*(undefined8 *)(param_1 + lVar2));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277b208),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108d19f58; end: 108d1a01b; -[SCStickerPickerCategoryCellScrollbar setSectionCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d19f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  *(undefined8 *)(param_1 + _DAT_11277b210) = param_3;
  lVar3 = (long)_DAT_11277b208;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c14df20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108d1a01c;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bc060(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 108d1a01c; end: 108d1a127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1a01c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf87140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))((double)*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b210));
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d1a128; end: 108d1a1eb; -[SCStickerPickerCategoryCellScrollbar scrollToSection:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1a128(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x00010c08cdc0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108d1a1ec;
  puStack_58 = &UNK_11084fc28;
  lStack_50 = param_1;
  uStack_48 = param_3;
  func_0x00010c0bc060(*(undefined8 *)(param_1 + _DAT_11277b208),param_2,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_4 != 0) {
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108d1a2cc;
    puStack_80 = &UNK_110842e18;
    lStack_78 = param_1;
    func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_98);
  }
  return;
}



/* Entry: 108d1a1ec; end: 108d1a2cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1a1ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  dVar4 = *(double *)(param_1 + 0x28);
  dVar5 = (double)(long)dVar4;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
  _CGRectGetHeight();
  (**(code **)(lVar3 + 0x10))
            ((dVar4 * dVar5) / (double)*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277b210),
             lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d1a2cc; end: 108d1a2d3;  */

void FUN_108d1a2cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108d1a2d4; end: 108d1a42b; -[SCStickerPickerCategoryCellScrollbar _pan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1a2d4(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  double dVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  double dStack_58;
  
  _objc_retain(param_5);
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  lVar1 = (long)_DAT_11277b208;
  dVar2 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar1));
  _CGRectGetHeight();
  func_0x00010c09ef00(param_5,param_4,*(undefined8 *)(param_3 + _DAT_11277b204));
  _objc_release(param_5);
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  dStack_58 = param_1 - dVar2;
  if (param_2 <= param_1 - dVar2) {
    dStack_58 = param_2;
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108d1a42c;
  puStack_68 = &UNK_11084fc28;
  lStack_60 = param_3;
  func_0x00010c0bc060(*(undefined8 *)(param_3 + lVar1),param_4,&puStack_80);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar1));
  _CGRectGetHeight();
  param_3 = param_3 + _DAT_11277b214;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf332c0();
  _objc_release(param_3);
  return;
}



/* Entry: 108d1a42c; end: 108d1a4d3;  */

void FUN_108d1a42c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d1a4d4; end: 108d1a4db; -[SCStickerPickerCategoryCellScrollbar gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_108d1a4d4(void)

{
  return 1;
}



/* Entry: 108d1a4dc; end: 108d1a4fb; -[SCStickerPickerCategoryCellScrollbar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1a4dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277b214);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d1a4fc; end: 108d1a50f; -[SCStickerPickerCategoryCellScrollbar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1a4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b214,param_3);
  return;
}



/* Entry: 108d1a510; end: 108d1a51f; -[SCStickerPickerCategoryCellScrollbar sectionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1a510(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b210);
}



/* Entry: 108d1a520; end: 108d1a52f; -[SCStickerPickerCategoryCellScrollbar sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d1a520(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277b20c);
}



/* Entry: 108d1a530; end: 108d1a57b; -[SCStickerPickerCategoryCellScrollbar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d1a530(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b214);
  _objc_storeStrong(param_1 + _DAT_11277b204,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b208,0);
  return;
}



/* Entry: 108d1a57c; end: 108d1a613; -[SCStickerPickerCategoryLayout initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108d1a57c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe5c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b21c) = 0x4024000000000000;
    uVar2 = *(undefined8 *)PTR__CGSizeZero_110347620;
    ((undefined8 *)((long)puVar1 + (long)_DAT_11277b220))[1] =
         *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b220) = uVar2;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11277b224),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d1a614; end: 108d1a6c7; -[SCStickerPickerCategoryLayout invalidateLayout] */

void FUN_108d1a614(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010bf9bfe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfb40(param_1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf0e7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfb00(param_1);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf0e7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfb20(param_1);
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126fe5c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_invalidateLayout_1125f8208);
  return;
}



/* Entry: 108d1a6c8; end: 108d1af7b; -[SCStickerPickerCategoryLayout prepareLayout] */

void FUN_108d1a6c8(undefined8 param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  long lStack_120;
  double dStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  
  puStack_b0 = PTR_PTR_1126fe5c8;
  lStack_b8 = param_5;
  _objc_msgSendSuper2(&lStack_b8,PTR_s_prepareLayout_112620088);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar18 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  dVar23 = param_2;
  dVar28 = param_4;
  _objc_release(lVar18);
  lVar18 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar26 = param_3;
  _objc_release(lVar18);
  lVar18 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar18;
  func_0x00010c0df2e0();
  _objc_release(lVar18);
  if (lVar10 == 0) {
    lStack_120 = 0;
    puVar19 = (undefined *)0x0;
    dVar31 = 0.0;
  }
  else {
    puVar19 = (undefined *)0x0;
    lStack_120 = 0;
    lVar18 = 0;
    param_4 = (param_3 - param_2) - param_4;
    dVar24 = *(double *)PTR__CGSizeZero_110347620;
    dVar20 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    dVar35 = *(double *)PTR__CGRectZero_110347608;
    dVar34 = *(double *)(PTR__CGRectZero_110347608 + 8);
    dVar33 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    dVar21 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
    dVar31 = 0.0;
    dVar22 = dVar21;
    dVar25 = dVar24;
    dVar27 = dVar26;
    do {
      lVar11 = param_5;
      func_0x00010bf6b020(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_5;
      func_0x00010bf40120(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40280(lVar11);
      dVar30 = dVar25;
      dVar26 = dVar27;
      dVar29 = dVar28;
      _objc_release(lVar12);
      _objc_release(lVar11);
      dVar32 = (param_4 - dVar25) - dVar28;
      dVar22 = dVar31 + dVar22;
      dVar37 = dVar31;
      if (lVar18 != 0) {
        dVar37 = dVar22;
      }
      puVar13 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_5;
      func_0x00010bf6b020(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_5;
      func_0x00010bf40120(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40360(lVar11);
      dVar23 = dVar30;
      _objc_release(lVar12);
      _objc_release(lVar11);
      if (dVar32 <= dVar22) {
        dVar22 = dVar32;
      }
      bVar1 = false;
      if ((dVar24 == dVar22) && (bVar1 = false, !NAN(dVar20) && !NAN(dVar30))) {
        bVar1 = dVar20 == dVar30;
      }
      dVar31 = dVar20;
      dVar28 = dVar29;
      if (!bVar1) {
        puVar14 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
        func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
        _objc_retainAutoreleasedReturnValue();
        dVar31 = dVar25;
        dVar23 = dVar37;
        dVar28 = dVar30;
        func_0x00010c19f0e0();
        func_0x00010c1d0640(puVar6);
        dVar37 = dVar37 + dVar30;
        _objc_release(puVar14);
        dVar26 = dVar22;
      }
      lVar11 = param_5;
      func_0x00010bf6b020(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_5;
      func_0x00010bf40120(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf402a0(lVar11);
      dVar22 = dVar31;
      _objc_release(lVar12);
      _objc_release(lVar11);
      lVar12 = param_5;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar12;
      func_0x00010c0deec0();
      _objc_release(lVar12);
      dVar30 = 0.0;
      dStack_c0 = dVar25;
      if (0 < lVar11) {
        do {
          puVar14 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = param_5;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = param_5;
          func_0x00010bf40120(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf40480(lVar12);
          _objc_release(lVar15);
          _objc_release();
          iVar3 = (int)lVar12;
          if (puVar19 == (undefined *)0x0) {
            lVar12 = param_5;
            func_0x00010bf6b020();
            iVar3 = (int)lVar12;
            _objc_retainAutoreleasedReturnValue();
            iVar2 = iVar3;
            func_0x00010c234680();
            _objc_release();
            if (iVar2 == 0) {
              puVar19 = (undefined *)0x0;
            }
            else {
              _objc_retain(puVar14);
              lVar12 = param_5;
              func_0x00010bf6b020();
              _objc_retainAutoreleasedReturnValue();
              lVar15 = lVar12;
              func_0x00010c087080();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lStack_120);
              _objc_release();
              iVar3 = (int)lVar12;
              puVar19 = puVar14;
              lStack_120 = lVar15;
            }
          }
          dVar36 = dVar35;
          dVar26 = dVar34;
          dVar29 = dVar33;
          dVar28 = dVar21;
          if (dVar22 != dVar24 || dVar23 != dVar20) {
            dVar36 = dStack_c0;
            dVar26 = dVar37;
            dVar29 = dVar22;
            dVar28 = dVar23;
          }
          _CGRectIsNull(dVar36,dVar26,dVar29,dVar28);
          if (iVar3 != 0) {
            _CGRectCreateDictionaryRepresentation(dVar36,dVar26,dVar29,dVar28);
            _objc_release();
            dVar28 = dVar21;
            dVar29 = dVar33;
            dVar26 = dVar34;
            dVar36 = dVar35;
          }
          puVar16 = PTR_PTR_1126dbc80;
          func_0x00010c08c8e0(PTR_PTR_1126dbc80);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19f0e0(dVar36,dVar26,dVar29);
          func_0x00010c227920(puVar16);
          func_0x00010c18fb40(puVar16);
          func_0x00010c1d0640(puVar4);
          puVar17 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          dStack_c0 = dVar31 + dStack_c0 + dVar22;
          if (dVar23 <= dVar30) {
            dVar23 = dVar30;
          }
          dVar30 = dVar23;
          lVar12 = param_5;
          dVar22 = dStack_c0;
          dVar23 = dVar31;
          dVar26 = dVar32;
          func_0x00010be42300();
          if ((int)lVar12 == 0) {
            if ((lVar11 == 1) && (puVar19 != (undefined *)0x0)) {
              dVar22 = param_4;
              dVar23 = dVar37;
              func_0x00010be32260(param_5);
              dVar37 = dVar37 + dVar22;
              _objc_release(puVar19);
              puVar19 = (undefined *)0x0;
            }
          }
          else {
            dVar37 = dVar37 + dVar30;
            if (puVar19 != (undefined *)0x0) {
              dVar22 = param_4;
              dVar23 = dVar37;
              func_0x00010be32260(param_5);
              dVar37 = dVar37 + dVar22;
              _objc_release(puVar19);
            }
            func_0x00010c0ce4a0(param_5);
            puVar19 = (undefined *)0x0;
            dVar37 = dVar37 + dVar22;
            dVar30 = 0.0;
            dStack_c0 = dVar25;
          }
          _objc_release(puVar17);
          _objc_release(puVar16);
          _objc_release(puVar14);
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      lVar11 = param_5;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c0df2e0();
      _objc_release(lVar11);
      dVar22 = dVar27 + dVar30 + dVar37;
      dVar31 = dVar22;
      if (lVar12 + -1 <= lVar18) {
        dVar31 = dVar30 + dVar37;
      }
      _objc_release(puVar13);
      lVar18 = lVar18 + 1;
      dVar25 = dVar23;
      dVar27 = dVar26;
    } while (lVar18 != lVar10);
  }
  lVar18 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar10 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  lVar11 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  func_0x00010c17e700((dVar26 - dVar23) - dVar28,dVar31,param_5);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar18);
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b840(param_5);
  _objc_release(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b860(param_5);
  _objc_release(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b880(param_5);
  _objc_release(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b8a0(param_5);
  _objc_release(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226ce0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198720(param_5);
  _objc_release(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217720(param_5);
  _objc_release(puVar13);
  _objc_release(lStack_120);
  _objc_release(puVar19);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 108d1af7c; end: 108d1b027; -[SCStickerPickerCategoryLayout _isNewLineNeededForNextIndexPath:nextOriginX:interItemSpacing:contentWidth:] */

bool FUN_108d1af7c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010bf6b020(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf40120(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40480(uVar1,param_5,uVar2,param_4,param_6);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_3 < param_1 + dVar3;
}



/* Entry: 108d1b028; end: 108d1b117; -[SCStickerPickerCategoryLayout _createAttributesForToggleableSupplementaryViewWithIndexPath:kind:y:contentWidth:height:sourceRect:] */

void FUN_108d1b028(double param_1,double param_2,undefined8 param_3,double param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dbc88;
  func_0x00010c08ca00(PTR_PTR_1126dbc88,param_9,param_11,param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(0xc01c000000000000,param_1,param_2 + 14.0,param_3);
  func_0x00010c227920(puVar1,param_9,0);
  func_0x00010c207040(param_4 + 7.0,param_5 - param_1,param_6,param_7,puVar1);
  func_0x00010c19c9a0(0xc01c000000000000,param_1,param_2 + 14.0,param_3,puVar1);
  func_0x00010c1db6a0(0x3ff0000000000000,puVar1);
  func_0x00010c1677c0(0x3ff0000000000000,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d1b118; end: 108d1b33f; -[SCStickerPickerCategoryLayout _handleToggleableUIIfNecessaryForIndexPath:kind:dataItemAttributes:toggleableViewAttributes:contentWidth:currentY:] */

undefined8
FUN_108d1b118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = param_1;
  uVar8 = param_2;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_7 == 0) {
    uVar6 = 0;
  }
  else {
    _objc_retain(param_10);
    uVar2 = param_5;
    func_0x00010bf6b020(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010bf40120(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0880(uVar2,param_6,uVar3,param_8,param_5);
    uVar7 = uVar6;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c0720c0(param_8,param_6,&PTR____CFConstantStringClassReference_110ef2bd8);
    if ((int)uVar2 == 0) {
      uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      param_3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      param_4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      iVar1 = 0;
    }
    else {
      uVar2 = param_5;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_5;
      func_0x00010bf40120(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247ae0(uVar2,param_6,uVar3,param_7);
      _objc_release(uVar3);
      _objc_release();
      iVar1 = (int)uVar2;
    }
    uVar2 = uVar7;
    uVar3 = uVar8;
    uVar4 = param_3;
    uVar5 = param_4;
    _CGRectIsEmpty(uVar7,uVar8,param_3,param_4);
    if (iVar1 != 0) {
      uVar8 = param_9;
      func_0x00010c0e00e0(param_9,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _objc_release(uVar8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      param_3 = uVar4;
      param_4 = uVar5;
    }
    func_0x00010bdeaee0(param_2,param_1,uVar6,uVar7,uVar8,param_3,param_4,param_5,param_6,param_7,
                        param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_10,param_6,param_5,param_7);
    _objc_release(param_10);
    _objc_release(param_5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return uVar6;
}



/* Entry: 108d1b340; end: 108d1b3ab; -[SCStickerPickerCategoryLayout layoutAttributesForItemAtIndexPath:] */

void FUN_108d1b340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0e7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d1b3ac; end: 108d1b503; -[SCStickerPickerCategoryLayout layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

void FUN_108d1b3ac(undefined8 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  pppuVar2 = &ppuStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      puStack_58 = PTR_PTR_1126fe5c8;
      ppuStack_60 = param_1;
    }
    else {
      pppuVar2 = param_1;
      func_0x00010bf0e800();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = pppuVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(pppuVar2);
      if (pppuVar3 != (undefined8 ***)0x0) {
        func_0x00010bf0e800(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108d1b468;
      }
      puStack_48 = PTR_PTR_1126fe5c8;
      pppuVar2 = &ppuStack_50;
      ppuStack_50 = param_1;
    }
    _objc_msgSendSuper2(pppuVar2,PTR_s_layoutAttributesForSupplementary_112600c88,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf0e7e0(param_1);
    _objc_retainAutoreleasedReturnValue();
LAB_108d1b468:
    pppuVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar2);
  return;
}



/* Entry: 108d1b504; end: 108d1b8b7; -[SCStickerPickerCategoryLayout layoutAttributesForElementsInRect:] */

void FUN_108d1b504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined1 **ppuStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  long lStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_1c0;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  long lVar5;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar16 = param_1;
  uVar17 = param_2;
  uVar19 = param_3;
  uVar21 = param_4;
  _objc_opt_new();
  lVar9 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0df2e0();
  _objc_release(lVar9);
  if (0 < lVar10) {
    lVar9 = 0;
    do {
      lVar10 = param_5;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar10;
      func_0x00010c0deec0();
      _objc_release(lVar10);
      if (0 < lVar3) {
        lVar10 = 0;
        uVar15 = uVar16;
        uVar18 = uVar17;
        uVar20 = uVar19;
        uVar22 = uVar21;
        do {
          puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_5;
          func_0x00010c08c980();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar15;
          uVar17 = uVar18;
          uVar19 = uVar20;
          uVar21 = uVar22;
          if (lVar3 != 0) {
            lVar5 = lVar3;
            func_0x00010bfb68e0();
            iVar1 = (int)lVar5;
            uVar16 = param_1;
            uVar17 = param_2;
            uVar19 = param_3;
            uVar21 = param_4;
            _CGRectIntersectsRect(param_1,param_2,param_3,param_4,uVar15,uVar18,uVar20,uVar22);
            if (iVar1 != 0) {
              func_0x00010befa120(puVar2);
            }
          }
          _objc_release(lVar3);
          _objc_release(puVar4);
          lVar10 = lVar10 + 1;
          lVar3 = param_5;
          func_0x00010bf40120();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          func_0x00010c0deec0();
          _objc_release(lVar3);
          uVar15 = uVar16;
          uVar18 = uVar17;
          uVar20 = uVar19;
          uVar22 = uVar21;
        } while (lVar10 < lVar5);
      }
      lVar9 = lVar9 + 1;
      lVar10 = param_5;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar10;
      func_0x00010c0df2e0();
      _objc_release(lVar10);
    } while (lVar9 < lVar3);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar9 = param_5;
  func_0x00010bf0e7c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4);
  _objc_release(lVar10);
  _objc_release(lVar9);
  lVar9 = param_5;
  func_0x00010bf0e7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4);
  _objc_release(lVar10);
  _objc_release(lVar9);
  func_0x00010bf0e800();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4);
  _objc_release(lVar9);
  _objc_release(param_5);
  uVar16 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(puVar4);
  puVar14 = puVar4;
  func_0x00010bf52a60();
  if (puVar14 != (undefined *)0x0) {
    lVar9 = *plStack_140;
    do {
      puVar12 = (undefined *)0x0;
      do {
        uVar15 = uVar16;
        uVar18 = uVar17;
        uVar20 = uVar19;
        uVar22 = uVar21;
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(puVar4);
          uVar15 = uVar16;
          uVar18 = uVar17;
          uVar20 = uVar19;
          uVar22 = uVar21;
        }
        iVar1 = (int)*(undefined8 *)(lStack_148 + (long)puVar12 * 8);
        func_0x00010bfb68e0();
        uVar16 = param_1;
        uVar17 = param_2;
        uVar19 = param_3;
        uVar21 = param_4;
        _CGRectIntersectsRect(param_1,param_2,param_3,param_4,uVar15,uVar18,uVar20,uVar22);
        if (iVar1 != 0) {
          func_0x00010befa120(puVar2);
        }
        puVar12 = puVar12 + 1;
      } while (puVar14 != puVar12);
      puVar14 = puVar4;
      func_0x00010bf52a60();
    } while (puVar14 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puVar12 = puVar2;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_108d1b8b8;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_370 = puVar2;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_378 = puVar14;
  _objc_opt_new();
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  puStack_380 = puVar13;
  _objc_retain(puVar12);
  puStack_350 = puVar12;
  func_0x00010bf52a60();
  if (puVar12 == (undefined *)0x0) {
LAB_108d1bc5c:
    _objc_release(puStack_350);
    puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_348 = puVar14;
    _objc_opt_new();
    lStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    plStack_330 = (long *)0x0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    puVar14 = puStack_370;
    puStack_358 = puVar12;
    func_0x00010c106040();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar14;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = puVar12;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      lVar9 = *plStack_330;
      lStack_368 = lVar9;
      puStack_360 = puVar12;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_330 != lVar9) {
            _objc_enumerationMutation(puVar12);
          }
          puVar11 = *(undefined **)(lStack_338 + (long)puVar13 * 8);
          puVar6 = puVar11;
          func_0x00010c1554e0();
          puVar7 = puVar4;
          func_0x00010bf529e0();
          if (puVar6 < puVar7) {
            puVar6 = puVar4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0840e0(puVar11);
            puVar8 = puVar6;
            func_0x00010bf4b800();
            if (((ulong)puVar8 & 1) == 0) {
              func_0x00010c0840e0(puVar11);
              func_0x00010c0840e0(puVar11);
              func_0x00010bf52e60(puVar6);
              do {
                puVar12 = puVar7;
                func_0x00010bf52e60();
              } while (0 < (long)puVar12);
              puVar12 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
              func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puStack_348);
              func_0x00010c1d0640(puStack_358);
              _objc_release(puVar12);
              puVar12 = puStack_360;
              lVar9 = lStack_368;
            }
            _objc_release(puVar7);
            _objc_release(puVar6);
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar14);
        puVar14 = puVar12;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puVar12);
    puVar13 = puStack_370;
    puVar12 = puStack_378;
    func_0x00010c1ad860(puStack_370);
    puVar14 = puStack_380;
    func_0x00010c18ba00(puVar13);
    puVar7 = puStack_348;
    func_0x00010c1df4a0(puVar13);
    puVar6 = puStack_358;
    func_0x00010c1d0d00(puVar13);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar14);
    _objc_release(puVar12);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar4 = puStack_350;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      puStack_398 = puVar6;
      pcStack_388 = FUN_108d1bef4;
      puStack_3a0 = puVar2;
      ppuStack_390 = &puStack_160;
      func_0x00010c1dfb40();
      puStack_3a8 = PTR_PTR_1126fe5c8;
      puStack_3b0 = puVar4;
      _objc_msgSendSuper2(&puStack_3b0,PTR_s_finalizeCollectionViewUpdates_11253d138);
      return;
    }
    return;
  }
  puStack_348 = (undefined *)*plStack_2f0;
LAB_108d1b970:
  puVar14 = (undefined *)0x0;
LAB_108d1b974:
  if ((undefined *)*plStack_2f0 != puStack_348) {
    _objc_enumerationMutation(puStack_350);
  }
  puVar13 = *(undefined **)(lStack_2f8 + (long)puVar14 * 8);
  do {
    puVar6 = puVar2;
    func_0x00010bf529e0();
    puVar7 = puVar13;
    func_0x00010bfecf40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010c1554e0();
    if (puVar11 < puVar6) {
      puVar6 = puVar4;
      func_0x00010bf529e0();
      puVar11 = puVar13;
      func_0x00010bfecf60();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar11;
      func_0x00010c1554e0();
      _objc_release(puVar11);
      _objc_release(puVar7);
      if (puVar8 < puVar6) break;
    }
    else {
      _objc_release(puVar7);
    }
    puVar6 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    func_0x00010befa120(puVar2);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    func_0x00010befa120(puVar4);
    _objc_release(puVar6);
  } while( true );
  puVar6 = puVar13;
  func_0x00010c283300();
  if (puVar6 == (undefined *)0x1) {
    puVar6 = puVar13;
    func_0x00010bfecf60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0840e0();
    _objc_release(puVar6);
    if (puVar7 == (undefined *)0x7fffffffffffffff) goto LAB_108d1bc34;
    puVar6 = puVar13;
    func_0x00010bfecf60(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puStack_380);
    _objc_release(puVar6);
    puVar6 = puVar13;
    func_0x00010bfecf60(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0();
    puVar7 = puVar4;
    func_0x00010c0dfd40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar13;
    func_0x00010bfecf60(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0();
    func_0x00010bef92c0(puVar7);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010bfecf60(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puStack_370;
    func_0x00010c08c980(puStack_370);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    func_0x00010c227920(puVar6);
  }
  else {
    if (puVar6 != (undefined *)0x0) goto LAB_108d1bc34;
    puVar6 = puVar13;
    func_0x00010bfecf40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0840e0();
    _objc_release(puVar6);
    if (puVar7 == (undefined *)0x7fffffffffffffff) goto LAB_108d1bc34;
    puVar6 = puVar13;
    func_0x00010bfecf40(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puStack_378);
    _objc_release(puVar6);
    puVar6 = puVar13;
    func_0x00010bfecf40(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0();
    puVar7 = puVar2;
    func_0x00010c0dfd40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecf40(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0();
    func_0x00010bef92c0(puVar7);
    _objc_release(puVar13);
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
LAB_108d1bc34:
  puVar14 = puVar14 + 1;
  if (puVar14 == puVar12) goto code_r0x000108d1bc40;
  goto LAB_108d1b974;
code_r0x000108d1bc40:
  puVar12 = puStack_350;
  func_0x00010bf52a60();
  if (puVar12 == (undefined *)0x0) goto LAB_108d1bc5c;
  goto LAB_108d1b970;
}



/* Entry: 108d1b8b8; end: 108d1bef3; -[SCStickerPickerCategoryLayout prepareForCollectionViewUpdates:] */

void FUN_108d1b8b8(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = param_1;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_228 = puVar8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puStack_230 = puVar3;
  _objc_retain(param_3);
  lStack_200 = param_3;
  func_0x00010bf52a60();
  if (param_3 == 0) {
LAB_108d1bc5c:
    _objc_release(lStack_200);
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_1f8 = puVar8;
    _objc_opt_new();
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    puVar8 = puStack_220;
    puStack_208 = puVar3;
    func_0x00010c106040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar3;
    func_0x00010bf52a60();
    if (puVar8 != (undefined *)0x0) {
      lVar9 = *plStack_1e0;
      lStack_218 = lVar9;
      puStack_210 = puVar3;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_1e0 != lVar9) {
            _objc_enumerationMutation(puVar3);
          }
          puVar7 = *(undefined **)(lStack_1e8 + (long)puVar10 * 8);
          puVar4 = puVar7;
          func_0x00010c1554e0();
          puVar5 = puVar2;
          func_0x00010bf529e0();
          if (puVar4 < puVar5) {
            puVar4 = puVar2;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar1;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0840e0(puVar7);
            puVar6 = puVar4;
            func_0x00010bf4b800();
            if (((ulong)puVar6 & 1) == 0) {
              func_0x00010c0840e0(puVar7);
              func_0x00010c0840e0(puVar7);
              func_0x00010bf52e60(puVar4);
              do {
                puVar3 = puVar5;
                func_0x00010bf52e60();
              } while (0 < (long)puVar3);
              puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
              func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puStack_1f8);
              func_0x00010c1d0640(puStack_208);
              _objc_release(puVar3);
              puVar3 = puStack_210;
              lVar9 = lStack_218;
            }
            _objc_release(puVar5);
            _objc_release(puVar4);
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar8);
        puVar8 = puVar3;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar10 = puStack_220;
    puVar3 = puStack_228;
    func_0x00010c1ad860(puStack_220);
    puVar8 = puStack_230;
    func_0x00010c18ba00(puVar10);
    puVar5 = puStack_1f8;
    func_0x00010c1df4a0(puVar10);
    puVar4 = puStack_208;
    func_0x00010c1d0d00(puVar10);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar9 = lStack_200;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
      ___stack_chk_fail();
      puStack_248 = puVar4;
      pcStack_238 = FUN_108d1bef4;
      puStack_250 = puVar1;
      puStack_240 = &stack0xfffffffffffffff0;
      func_0x00010c1dfb40();
      puStack_258 = PTR_PTR_1126fe5c8;
      lStack_260 = lVar9;
      _objc_msgSendSuper2(&lStack_260,PTR_s_finalizeCollectionViewUpdates_11253d138);
      return;
    }
    return;
  }
  puStack_1f8 = (undefined *)*plStack_1a0;
LAB_108d1b970:
  lVar9 = 0;
LAB_108d1b974:
  if ((undefined *)*plStack_1a0 != puStack_1f8) {
    _objc_enumerationMutation(lStack_200);
  }
  puVar8 = *(undefined **)(lStack_1a8 + lVar9 * 8);
  do {
    puVar3 = puVar1;
    func_0x00010bf529e0();
    puVar10 = puVar8;
    func_0x00010bfecf40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010c1554e0();
    if (puVar4 < puVar3) {
      puVar3 = puVar2;
      func_0x00010bf529e0();
      puVar4 = puVar8;
      func_0x00010bfecf60();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c1554e0();
      _objc_release(puVar4);
      _objc_release(puVar10);
      if (puVar5 < puVar3) break;
    }
    else {
      _objc_release(puVar10);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    func_0x00010befa120(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
  } while( true );
  puVar3 = puVar8;
  func_0x00010c283300();
  if (puVar3 == (undefined *)0x1) {
    puVar3 = puVar8;
    func_0x00010bfecf60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010c0840e0();
    _objc_release(puVar3);
    if (puVar10 == (undefined *)0x7fffffffffffffff) goto LAB_108d1bc34;
    puVar3 = puVar8;
    func_0x00010bfecf60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puStack_230);
    _objc_release(puVar3);
    puVar3 = puVar8;
    func_0x00010bfecf60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0();
    puVar10 = puVar2;
    func_0x00010c0dfd40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010bfecf60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0();
    func_0x00010bef92c0(puVar10);
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(puVar3);
    func_0x00010bfecf60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_220;
    func_0x00010c08c980(puStack_220);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c227920(puVar3);
  }
  else {
    if (puVar3 != (undefined *)0x0) goto LAB_108d1bc34;
    puVar3 = puVar8;
    func_0x00010bfecf40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010c0840e0();
    _objc_release(puVar3);
    if (puVar10 == (undefined *)0x7fffffffffffffff) goto LAB_108d1bc34;
    puVar3 = puVar8;
    func_0x00010bfecf40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puStack_228);
    _objc_release(puVar3);
    puVar3 = puVar8;
    func_0x00010bfecf40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0();
    puVar10 = puVar1;
    func_0x00010c0dfd40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecf40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0();
    func_0x00010bef92c0(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar10);
  }
  _objc_release(puVar3);
LAB_108d1bc34:
  lVar9 = lVar9 + 1;
  if (lVar9 == param_3) goto code_r0x000108d1bc40;
  goto LAB_108d1b974;
code_r0x000108d1bc40:
  param_3 = lStack_200;
  func_0x00010bf52a60();
  if (param_3 == 0) goto LAB_108d1bc5c;
  goto LAB_108d1b970;
}



/* Entry: 108d1bef4; end: 108d1bf3b; -[SCStickerPickerCategoryLayout finalizeCollectionViewUpdates] */

void FUN_108d1bef4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c1dfb40(param_1,param_2,0);
  puStack_28 = PTR_PTR_1126fe5c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_finalizeCollectionViewUpdates_11253d138);
  return;
}



/* Entry: 108d1bf3c; end: 108d1c173; -[SCStickerPickerCategoryLayout initialLayoutAttributesForAppearingItemAtIndexPath:] */

void FUN_108d1bf3c(undefined8 ***param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  double dVar5;
  double in_d3;
  undefined1 auStack_90 [48];
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  pppuVar1 = param_1;
  func_0x00010c08c980(param_1);
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar1;
  func_0x00010bf51e00();
  _objc_release(pppuVar1);
  pppuVar1 = param_1;
  func_0x00010c067360();
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar1;
  func_0x00010bf4b900();
  _objc_release(pppuVar1);
  if (((ulong)pppuVar3 & 1) == 0) {
    pppuVar1 = param_1;
    func_0x00010c1054e0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar1);
    pppuVar1 = param_1;
    func_0x00010c106040(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (pppuVar3 == (undefined8 ***)0x0) {
      pppuVar3 = pppuVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar1);
      pppuVar1 = param_1;
      func_0x00010c272e60();
      pppuVar4 = pppuVar3;
      if ((2 < (long)pppuVar1 - 1U) && (pppuVar4 = pppuVar2, pppuVar1 != (undefined8 ***)0x0)) {
        _objc_release(pppuVar3);
        goto LAB_108d1bfe8;
      }
      _objc_retain(pppuVar4);
    }
    else {
      pppuVar4 = pppuVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar1);
    }
    _objc_release(pppuVar3);
  }
  else {
    pppuVar1 = param_1;
    func_0x00010bf9bfe0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar1;
    func_0x00010bf4b900();
    _objc_release(pppuVar1);
    if (((ulong)pppuVar3 & 1) == 0) {
      puStack_58 = PTR_PTR_1126fe5c8;
      pppuVar4 = &ppuStack_60;
      ppuStack_60 = param_1;
      _objc_msgSendSuper2(pppuVar4,PTR_s_initialLayoutAttributesForAppear_112527a18,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108d1c138;
    }
LAB_108d1bfe8:
    func_0x00010bfb68e0(pppuVar2);
    dVar5 = -0.5;
    func_0x00010c0ce4a0(param_1);
    pppuVar4 = pppuVar2;
    func_0x00010bf51e00(pppuVar2);
    func_0x00010c227920();
    func_0x00010c1677c0(0,pppuVar4);
    _CGAffineTransformMakeTranslation(auStack_90,0,in_d3 * -0.5 - dVar5);
    func_0x00010c219960(pppuVar4);
  }
LAB_108d1c138:
  _objc_release(pppuVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar4);
  return;
}



/* Entry: 108d1c174; end: 108d1c35b; -[SCStickerPickerCategoryLayout finalLayoutAttributesForDisappearingItemAtIndexPath:] */

void FUN_108d1c174(float param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 ***param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_90 [48];
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  pppuVar1 = param_5;
  func_0x00010bf6d040();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar1;
  func_0x00010bf4b900();
  if (((ulong)pppuVar2 & 1) == 0) {
    _objc_release(pppuVar1);
  }
  else {
    pppuVar2 = param_5;
    func_0x00010c106060();
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar2;
    func_0x00010bf4b900();
    _objc_release(pppuVar2);
    _objc_release(pppuVar1);
    if (((ulong)pppuVar3 & 1) != 0) {
      pppuVar2 = param_5;
      func_0x00010c106040(param_5);
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = pppuVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar1 = pppuVar3;
      func_0x00010bf51e00();
      _objc_release(pppuVar3);
      _objc_release(pppuVar2);
      pppuVar2 = pppuVar1;
      func_0x00010bf857a0(pppuVar1);
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = param_5;
      func_0x00010c2751a0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar4 = pppuVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar3);
      if (pppuVar4 == (undefined8 ***)0x0) {
        func_0x00010bfb68e0(pppuVar1);
        param_2 = -0.5;
        func_0x00010c0ce4a0(param_5);
        param_2 = param_4 * -0.5 - param_2;
      }
      else {
        func_0x00010bfb2c80(pppuVar4);
        func_0x00010bfb68e0(pppuVar1);
        param_2 = (double)param_1 - param_2;
      }
      func_0x00010c1677c0(0,pppuVar1);
      _CGAffineTransformMakeTranslation(auStack_90,0,param_2);
      func_0x00010c219960(pppuVar1);
      _objc_release(pppuVar4);
      _objc_release(pppuVar2);
      goto LAB_108d1c334;
    }
  }
  puStack_58 = PTR_PTR_1126fe5c8;
  pppuVar1 = &ppuStack_60;
  ppuStack_60 = param_5;
  _objc_msgSendSuper2(pppuVar1,PTR_s_finalLayoutAttributesForDisappea_112527a20,param_7);
  _objc_retainAutoreleasedReturnValue();
LAB_108d1c334:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 108d1c35c; end: 108d1c46f; -[SCStickerPickerCategoryLayout initialLayoutAttributesForAppearingSupplementaryElementOfKind:atIndexPath:] */

void FUN_108d1c35c(undefined8 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  pppuVar2 = &ppuStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    puStack_58 = PTR_PTR_1126fe5c8;
    ppuStack_60 = param_1;
  }
  else {
    pppuVar2 = param_1;
    func_0x00010bf0e800();
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar2);
    if (pppuVar3 != (undefined8 ***)0x0) {
      pppuVar2 = pppuVar3;
      FUN_108e6be7c(pppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar3);
      goto LAB_108d1c444;
    }
    puStack_48 = PTR_PTR_1126fe5c8;
    pppuVar2 = &ppuStack_50;
    ppuStack_50 = param_1;
  }
  _objc_msgSendSuper2(pppuVar2,PTR_s_initialLayoutAttributesForAppear_11253d140,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_108d1c444:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar2);
  return;
}



/* Entry: 108d1c470; end: 108d1c583; -[SCStickerPickerCategoryLayout finalLayoutAttributesForDisappearingSupplementaryElementOfKind:atIndexPath:] */

void FUN_108d1c470(undefined8 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  pppuVar2 = &ppuStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    puStack_58 = PTR_PTR_1126fe5c8;
    ppuStack_60 = param_1;
  }
  else {
    pppuVar2 = param_1;
    func_0x00010bf0e820();
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar2);
    if (pppuVar3 != (undefined8 ***)0x0) {
      pppuVar2 = pppuVar3;
      FUN_108e6be7c(pppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar3);
      goto LAB_108d1c558;
    }
    puStack_48 = PTR_PTR_1126fe5c8;
    pppuVar2 = &ppuStack_50;
    ppuStack_50 = param_1;
  }
  _objc_msgSendSuper2(pppuVar2,PTR_s_finalLayoutAttributesForDisappea_112531930,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_108d1c558:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar2);
  return;
}



/* Entry: 108d1c584; end: 108d1c617; -[SCStickerPickerCategoryLayout indexPathsToInsertForSupplementaryViewOfKind:] */

void FUN_108d1c584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c272e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c272e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d1c618; end: 108d1c6ab; -[SCStickerPickerCategoryLayout indexPathsToDeleteForSupplementaryViewOfKind:] */

void FUN_108d1c618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c272e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c272e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108d1c6ac; end: 108d1c6b3; -[SCStickerPickerCategoryLayout flipsHorizontallyInOppositeLayoutDirection] */

undefined8 FUN_108d1c6ac(void)

{
  return 1;
}


