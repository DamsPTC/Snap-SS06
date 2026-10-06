/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a17b48; end: 106a17bd3; -[SCMemoriesStoryEditorViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_106a17b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  
  _objc_retain(param_5);
  func_0x00010c1554e0();
  if (param_7 == 1) {
    func_0x00010bddc3a0(param_3);
  }
  else {
    func_0x00010bfb68e0(param_5);
    _CGRectGetWidth();
    param_2 = uRam000000011316d1c0;
  }
  _objc_release(param_5);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 106a17bd4; end: 106a17d1b; -[SCMemoriesStoryEditorViewController collectionView:itemsForBeginningDragSession:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a17bd4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined1 *param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar7 = &puStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar1 = param_1;
  puVar2 = param_5;
  func_0x00010be3fc80(param_1,param_2,param_5);
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if ((int)lVar1 != 0) {
    func_0x00010bf2e840(*(undefined8 *)(param_1 + _DAT_112755ecc));
    uVar8 = *(undefined8 *)(param_1 + _DAT_112755ea8);
    puVar2 = param_5;
    func_0x00010c0840e0(param_5);
    func_0x00010c0dfd40(uVar8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSItemProvider_1126b3ab0;
    _objc_alloc();
    func_0x00010c030760();
    puVar4 = PTR__OBJC_CLASS___UIDragItem_1126c1e58;
    _objc_alloc();
    func_0x00010c020340();
    func_0x00010c1bf200();
    param_4 = (undefined *)0x1;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar8);
    puVar2 = (undefined1 *)ppuVar7;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(puVar2);
    _objc_retain(param_4);
    puVar5 = param_4;
    func_0x00010bf6ec80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 == (undefined *)0x0) {
      puVar6 = puVar2;
      func_0x00010c0deec0(puVar2,param_2,1);
      puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,puVar6 + -1,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = param_4;
      func_0x00010bf6ec80(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = param_5;
    func_0x00010be3fc80(param_5,param_2,puVar5);
    if ((int)puVar6 != 0) {
      puVar3 = param_4;
      func_0x00010c118e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0eb9a0();
      _objc_release(puVar3);
      if (puVar4 == (undefined *)0x3) {
        func_0x00010be8e920(param_5,param_2,param_4,puVar5,puVar2);
      }
    }
    _objc_release(puVar5);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a17d1c; end: 106a17e23; -[SCMemoriesStoryEditorViewController collectionView:performDropWithCoordinator:] */

void FUN_106a17d1c(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010bf6ec80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    lVar2 = param_3;
    func_0x00010c0deec0(param_3,param_2,1);
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar2 + -1,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_4;
    func_0x00010bf6ec80(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = param_1;
  func_0x00010be3fc80(param_1,param_2,puVar1);
  if ((int)uVar3 != 0) {
    puVar4 = param_4;
    func_0x00010c118e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0eb9a0();
    _objc_release(puVar4);
    if (puVar5 == (undefined *)0x3) {
      func_0x00010be8e920(param_1,param_2,param_4,puVar1,param_3);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a17e24; end: 106a17ebf; -[SCMemoriesStoryEditorViewController collectionView:dropSessionDidUpdate:withDestinationIndexPath:] */

void FUN_106a17e24(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010be3fc80(param_1,param_2,param_5);
  if ((param_1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68;
    _objc_alloc(PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68);
  }
  else {
    uVar1 = param_3;
    func_0x00010bfd3b00();
    puVar2 = PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68;
    _objc_alloc(PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68);
    if ((int)uVar1 != 0) {
      func_0x00010c00e7c0();
      goto LAB_106a17ea0;
    }
  }
  func_0x00010c00e7a0();
LAB_106a17ea0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a17ec0; end: 106a1807b; -[SCMemoriesStoryEditorViewController _reorderItems:destinationIndexPath:collectionView:] */

void FUN_106a17ec0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x00010c247840();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar2 != 0) {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106a1807c;
      puStack_90 = &UNK_1108475b0;
      uStack_88 = param_1;
      _objc_retain(lVar2);
      lStack_80 = lVar2;
      _objc_retain(lVar3);
      lStack_78 = lVar3;
      _objc_retain(param_4);
      uStack_70 = param_4;
      _objc_retain(param_5);
      puStack_d0 = puVar1;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_106a18210;
      puStack_b8 = &UNK_110841f20;
      uStack_b0 = param_1;
      uStack_68 = param_5;
      func_0x00010c0f8420(param_5,param_2,&puStack_a8,&puStack_d0);
      lVar4 = lVar3;
      func_0x00010bf89640(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8aa40(param_3,param_2,lVar4,param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(lStack_78);
      _objc_release(lStack_80);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a1807c; end: 106a1820f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1807c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = (long)_DAT_112755ec8;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
  func_0x00010bf343c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be22a60(uVar1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112755ea8;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9) = uVar1;
  _objc_release(uVar6);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
  func_0x00010c0840e0(uVar1);
  func_0x00010c12d3c0(uVar6,param_2,uVar1);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf89640(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c09dcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0840e0(uVar2);
  func_0x00010c066b00(uVar7,param_2,uVar1,uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010be22b60(lVar3,param_2,*(undefined8 *)(lVar3 + lVar9));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126cfc30;
  _objc_alloc();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
  func_0x00010c2711a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
  func_0x00010c087060(uVar5);
  func_0x00010c052dc0(puVar4,param_2,uVar1,lVar3,uVar5);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
  *(undefined **)(*(long *)(param_1 + 0x20) + lVar8) = puVar4;
  _objc_release(uVar5);
  _objc_release(uVar1);
  func_0x00010c0d1540(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106a18210; end: 106a182f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a18210(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_2 != 0) {
    _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112755e8c);
    func_0x00010bdc4600();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfd0020(uVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106a182f8; end: 106a183ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a182f8(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112755e84);
      uVar1 = *(undefined8 *)(param_1 + _DAT_112755e88);
      func_0x00010bf643e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0ed4e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ba0(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a183ac; end: 106a18423; -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:galleryItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a183ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755e88);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a4ec0);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a18424; end: 106a18427; -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:handleLongPress:itemAtIndexPath:] */

void FUN_106a18424(void)

{
  return;
}



/* Entry: 106a18428; end: 106a1842f; -[SCMemoriesStoryEditorViewController memoriesCollectionViewIsFullyVisible:] */

undefined8 FUN_106a18428(void)

{
  return 1;
}



/* Entry: 106a18430; end: 106a18437; -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:overrideTapHandlingAtIndexPath:] */

undefined8 FUN_106a18430(void)

{
  return 0;
}



/* Entry: 106a18438; end: 106a1843f; -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:shouldChangeSelectedAtIndexPath:] */

undefined8 FUN_106a18438(void)

{
  return 0;
}



/* Entry: 106a18440; end: 106a18443; -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:didChangeSelected:forItem:] */

void FUN_106a18440(void)

{
  return;
}



/* Entry: 106a18444; end: 106a187e7; -[SCMemoriesStoryEditorViewController memoriesCollectionViewSelectionHelper:didTapItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a18444(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_2[_DAT_112755ebc] & 1) != 0) goto LAB_106a18798;
  lVar9 = param_5;
  func_0x00010c1554e0();
  if (lVar9 == 0) {
    param_2[_DAT_112755ed0] = 1;
    puVar1 = *(undefined **)(param_2 + _DAT_112755eb8);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cfc60;
    _objc_opt_class(PTR_PTR_1126cfc60);
    puVar4 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar3);
    puVar3 = puVar1;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar1);
    if (puVar3 != (undefined *)0x0) {
      uVar5 = *(ulong *)(param_2 + _DAT_112755ea8);
      func_0x00010bf529e0();
      if (1 < uVar5) {
        lVar9 = (long)_DAT_112755ec4;
        _objc_retain(param_5);
        uVar2 = *(undefined8 *)(param_2 + lVar9);
        *(long *)(param_2 + lVar9) = param_5;
        _objc_release(uVar2);
        lVar9 = *(long *)(param_2 + _DAT_112755e8c);
        func_0x00010c0ead40(lVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_2;
        func_0x00010be6de60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be6f200(param_2);
        func_0x00010c0f2220(param_2);
        puVar6 = puVar1;
        func_0x00010c27ace0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10d5e0(param_1,0,lVar9);
        _objc_release(puVar6);
LAB_106a18734:
        _objc_release(puVar4);
        _objc_release(puVar3);
        goto LAB_106a18744;
      }
    }
  }
  else {
    lVar9 = param_5;
    func_0x00010c0840e0();
    if (lVar9 == 0) {
      uVar2 = *(undefined8 *)(param_2 + _DAT_112755e8c);
      func_0x00010bdc4600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0020(uVar2);
      puVar3 = param_2;
    }
    else {
      puVar1 = *(undefined **)(param_2 + _DAT_112755eb8);
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126cfc70;
      _objc_opt_class(PTR_PTR_1126cfc70);
      puVar4 = puVar1;
      _objc_opt_isKindOfClass(puVar1,puVar3);
      puVar3 = puVar1;
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar1);
      if (puVar3 == (undefined *)0x0) goto LAB_106a18798;
      lVar9 = *(long *)(param_2 + _DAT_112755ea8);
      func_0x00010c0840e0(param_5);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar9 != 0) && (lVar10 = lVar9, func_0x00010c06ece0(), (int)lVar10 != 0)) {
        lVar10 = (long)_DAT_112755ec4;
        _objc_retain(param_5);
        uVar2 = *(undefined8 *)(param_2 + lVar10);
        *(long *)(param_2 + lVar10) = param_5;
        _objc_release(uVar2);
        puVar3 = *(undefined **)(param_2 + _DAT_112755e8c);
        func_0x00010c0ead40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_2;
        func_0x00010be6dae0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0840e0(param_5);
        func_0x00010be6f200(param_2);
        func_0x00010c0f2220(param_2);
        func_0x00010c10d5e0(param_1,0,puVar3);
        goto LAB_106a18734;
      }
LAB_106a18744:
      _objc_release(lVar9);
      puVar3 = puVar1;
    }
  }
  _objc_release(puVar3);
LAB_106a18798:
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = (long)_DAT_112755e8c;
  uVar7 = *(undefined8 *)(param_4 + lVar8);
  func_0x00010c0ead40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c07aae0();
  _objc_release(uVar7);
  if ((int)uVar2 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_4 + lVar8);
  func_0x00010c0ead40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6dae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286380(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a187e8; end: 106a1888b; -[SCMemoriesStoryEditorViewController _updateOperaGroupsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a187e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112755e8c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c0ead40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07aae0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c0ead40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6dae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286380(uVar2,param_2,param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106a1888c; end: 106a18c17; -[SCMemoriesStoryEditorViewController _operaGroups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1888c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = param_1;
  func_0x00010be6de80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar16 = *(long *)(param_1 + _DAT_112755ea8);
  _objc_retain(lVar16);
  lVar2 = lVar16;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar16);
      }
      lVar20 = *(long *)(lVar17 * 8);
      lVar3 = lVar20;
      func_0x00010c113000();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar20;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar7;
        func_0x00010bf52a60();
        lVar4 = lRam0000000000000000;
        while (lVar3 != 0) {
          lVar18 = 0;
          do {
            if (lRam0000000000000000 != lVar4) {
              _objc_enumerationMutation(lVar7);
            }
            uVar21 = *(undefined8 *)(lVar18 * 8);
            puVar8 = PTR_PTR_1126b2608;
            func_0x00010c243fe0(PTR_PTR_1126b2608);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c074da0(lVar20);
            func_0x00010c0df6e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar6);
            _objc_release(uVar21);
            _objc_release(puVar9);
            _objc_release(puVar8);
            lVar18 = lVar18 + 1;
          } while (lVar3 != lVar18);
          lVar3 = lVar7;
          func_0x00010bf52a60();
        }
        _objc_release(lVar7);
        puVar9 = PTR_PTR_1126b2610;
        _objc_alloc();
        func_0x00010c113000();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar20;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010bf51e00();
        puVar10 = puVar6;
        func_0x00010bf51e00();
        func_0x00010c019020();
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(lVar3);
        _objc_release(lVar20);
        func_0x00010befa120(ppuVar1);
        _objc_release(puVar9);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar2);
    lVar2 = lVar16;
    func_0x00010bf52a60();
  }
  _objc_release(lVar16);
  ppuVar12 = ppuVar1;
  func_0x00010bf51e00();
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = lVar19;
    func_0x00010be6de80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = *(long *)(lVar19 + _DAT_112755ea8);
    _objc_retain(lVar19);
    lVar2 = lVar19;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar19);
        }
        lVar20 = *(long *)(lVar17 * 8);
        lVar3 = lVar20;
        func_0x00010c113000();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          lVar7 = lVar20;
          func_0x00010c245680();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar7;
          func_0x00010bf52a60();
          lVar4 = lRam0000000000000000;
          while (lVar3 != 0) {
            lVar18 = 0;
            do {
              if (lRam0000000000000000 != lVar4) {
                _objc_enumerationMutation(lVar7);
              }
              uVar21 = *(undefined8 *)(lVar18 * 8);
              puVar8 = PTR_PTR_1126b2608;
              func_0x00010c243fe0(PTR_PTR_1126b2608);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar5);
              puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c074da0(lVar20);
              func_0x00010c0df6e0(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c241220(uVar21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar6);
              _objc_release(uVar21);
              _objc_release(puVar9);
              _objc_release(puVar8);
              lVar18 = lVar18 + 1;
            } while (lVar3 != lVar18);
            lVar3 = lVar7;
            func_0x00010bf52a60();
          }
          _objc_release(lVar7);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != lVar2);
      lVar2 = lVar19;
      func_0x00010bf52a60();
    }
    _objc_release(lVar19);
    ppuVar12 = (undefined **)PTR_PTR_1126b2610;
    _objc_alloc();
    puVar9 = puVar5;
    func_0x00010bf51e00();
    puVar8 = puVar6;
    func_0x00010bf51e00();
    func_0x00010c019020();
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
      ___stack_chk_fail();
      lVar19 = (long)_DAT_112755ec8;
      lVar11 = *(long *)(lVar15 + lVar19);
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar11;
      func_0x00010c08fa60();
      _objc_release(lVar11);
      if (lVar2 == 0) {
        lVar16 = (long)_DAT_112755e88;
        lVar19 = *(long *)(lVar15 + lVar16);
        func_0x00010bf643e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar19;
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar2;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        _objc_release(lVar2);
        _objc_release(lVar19);
        ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar11 == 2) {
          ppuVar12 = &PTR____CFConstantStringClassReference_110db1e38;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1e38,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000108dfda1c();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)(lVar15 + lVar16);
          func_0x00010bf643e0();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar13;
          func_0x00010bf97060();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar21;
          func_0x00010b5f6c38();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar14);
          _objc_release(uVar21);
          _objc_release(uVar13);
          _objc_release(lVar19);
        }
      }
      else {
        ppuVar12 = *(undefined ***)(lVar15 + lVar19);
        func_0x00010c2711a0(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar12);
  return;
}



/* Entry: 106a18c18; end: 106a18f37; -[SCMemoriesStoryEditorViewController _operaSingleGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a18c18(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be6de80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(param_1 + _DAT_112755ea8);
  _objc_retain(lVar15);
  lVar4 = lVar15;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar15);
      }
      lVar18 = *(long *)(lVar16 * 8);
      lVar5 = lVar18;
      func_0x00010c113000();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar6 != 0) {
        lVar7 = lVar18;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar7;
        func_0x00010bf52a60();
        lVar6 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar17 = 0;
          do {
            if (lRam0000000000000000 != lVar6) {
              _objc_enumerationMutation(lVar7);
            }
            uVar19 = *(undefined8 *)(lVar17 * 8);
            puVar8 = PTR_PTR_1126b2608;
            func_0x00010c243fe0(PTR_PTR_1126b2608);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c074da0(lVar18);
            func_0x00010c0df6e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c241220(uVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(uVar19);
            _objc_release(puVar9);
            _objc_release(puVar8);
            lVar17 = lVar17 + 1;
          } while (lVar5 != lVar17);
          lVar5 = lVar7;
          func_0x00010bf52a60();
        }
        _objc_release(lVar7);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar4);
    lVar4 = lVar15;
    func_0x00010bf52a60();
  }
  _objc_release(lVar15);
  ppuVar11 = (undefined **)PTR_PTR_1126b2610;
  _objc_alloc();
  puVar9 = puVar2;
  func_0x00010bf51e00();
  puVar8 = puVar3;
  func_0x00010bf51e00();
  func_0x00010c019020();
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar14 = (long)_DAT_112755ec8;
    lVar10 = *(long *)(lVar1 + lVar14);
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010c08fa60();
    _objc_release(lVar10);
    if (lVar4 == 0) {
      lVar15 = (long)_DAT_112755e88;
      lVar14 = *(long *)(lVar1 + lVar15);
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar14;
      func_0x00010bf97060();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      _objc_release(lVar4);
      _objc_release(lVar14);
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar10 == 2) {
        ppuVar11 = &PTR____CFConstantStringClassReference_110db1e38;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1e38,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108dfda1c();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(lVar1 + lVar15);
        func_0x00010bf643e0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar12;
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar19;
        func_0x00010b5f6c38();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        _objc_release(uVar19);
        _objc_release(uVar12);
        _objc_release(lVar14);
      }
    }
    else {
      ppuVar11 = *(undefined ***)(lVar1 + lVar14);
      func_0x00010c2711a0(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
  return;
}



/* Entry: 106a18f38; end: 106a190ab; -[SCMemoriesStoryEditorViewController _operaTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a18f38(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (long)_DAT_112755ec8;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar8 = (long)_DAT_112755e88;
    lVar7 = *(long *)(param_1 + lVar8);
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    _objc_release(lVar2);
    _objc_release(lVar7);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 == 2) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110db1e38;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1e38,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108dfda1c();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf97060();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010b5f6c38();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(lVar7);
    }
  }
  else {
    ppuVar3 = *(undefined ***)(param_1 + lVar7);
    func_0x00010c2711a0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106a190ac; end: 106a19293; -[SCMemoriesStoryEditorViewController _operaSnapEntryInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a190ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112755e88;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072900();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf977c0();
  lVar6 = (long)(int)uVar1;
  func_0x00010b5f5864(lVar6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2600;
  _objc_alloc();
  func_0x00010bfbdda0();
  func_0x00010be6dea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf977c0();
  func_0x00010c07b240();
  func_0x00010b5fc5e4();
  func_0x00010c0f7a20(uVar2);
  uVar1 = uVar2;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080ca0();
  uVar4 = uVar2;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d240();
  uVar5 = uVar2;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010560(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a19294; end: 106a1930b; -[SCMemoriesStoryEditorViewController operaPresenterWillOpenViewWithOperaItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a19294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((*(byte *)(param_1 + _DAT_112755ed0) & 1) == 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_106a1930c;
    puStack_20 = &UNK_110953598;
    lStack_18 = param_1;
    func_0x00010c0bfe40(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_1109535c8,
                        &PTR___NSConcreteGlobalBlock_1109535e8);
  }
  return;
}



/* Entry: 106a1930c; end: 106a1934b;  */

void FUN_106a1930c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6dd60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a1934c; end: 106a19353;  */

void FUN_106a1934c(void)

{
  return;
}



/* Entry: 106a19354; end: 106a193b3; -[SCMemoriesStoryEditorViewController operaPresenterDidOpenView] */

void FUN_106a19354(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3b30;
  _objc_alloc(PTR_PTR_1126c3b30);
  func_0x00010bebe740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7280(0,puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a193b4; end: 106a193d7; -[SCMemoriesStoryEditorViewController operaPresenterDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a193b4(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112755ed0) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755ec4);
  *(undefined8 *)(param_1 + _DAT_112755ec4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a193d8; end: 106a193db; -[SCMemoriesStoryEditorViewController operaPresenterDidPresent] */

void FUN_106a193d8(void)

{
  return;
}



/* Entry: 106a193dc; end: 106a193f7; -[SCMemoriesStoryEditorViewController operaPresenterOverrideTransitionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a193dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (*(char *)(param_1 + _DAT_112755ed0) != '\0') {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 106a193f8; end: 106a194c3; -[SCMemoriesStoryEditorViewController _actionModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a193f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b2238;
  _objc_alloc(PTR_PTR_1126b2238);
  lVar6 = (long)_DAT_112755e88;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf643e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf643e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0ed4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010180(puVar1,param_2,uVar3,uVar5,0,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a194c4; end: 106a1960f; -[SCMemoriesStoryEditorViewController _allSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a194c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar8 = *(long *)(param_1 + _DAT_112755ea8);
  _objc_retain(lVar8);
  lVar11 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar11 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar10 * 8);
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1,param_2,uVar2);
        _objc_release(uVar2);
        lVar10 = lVar10 + 1;
      } while (lVar11 != lVar10);
      lVar11 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar11 != 0);
  }
  _objc_release(lVar8);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar4 = puVar1;
    func_0x00010bdca060();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2238;
    _objc_alloc(PTR_PTR_1126b2238);
    lVar11 = (long)_DAT_112755e88;
    uVar5 = *(undefined8 *)(puVar1 + lVar11);
    func_0x00010bf643e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar1 + lVar11);
    func_0x00010bf643e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0ed4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010180(puVar3,param_2,uVar2,uVar7,puVar4,0);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a19610; end: 106a196f3; -[SCMemoriesStoryEditorViewController _actionModelWithAllSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a19610(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010bdca060();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2238;
  _objc_alloc(PTR_PTR_1126b2238);
  lVar7 = (long)_DAT_112755e88;
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf643e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf643e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0ed4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010180(puVar2,param_2,uVar4,uVar6,lVar1,0);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a196f4; end: 106a197fb; -[SCMemoriesStoryEditorViewController _actionModelFromViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a196f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b2238;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar7 = (long)_DAT_112755e88;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf643e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf643e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0ed4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c245680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c010180(puVar1,param_2,uVar3,uVar5,uVar6,0);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a197fc; end: 106a1984b; -[SCMemoriesStoryEditorViewController storyEditorSnapCell:didTapDelete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a197fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755e8c);
  func_0x00010bdc45e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0020(uVar1,param_2,0,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a1984c; end: 106a199b7; -[SCMemoriesStoryEditorViewController storyEditorHeaderCellDidTapSave:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1984c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bdd4e00(param_1);
  uVar1 = *(ulong *)(param_1 + _DAT_112755eb4);
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    func_0x00010becf0e0(param_1);
  }
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112755e8c);
  lVar2 = param_1;
  func_0x00010bdc4600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfd0020(uVar4);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112755eb8);
  puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128fa0(uVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106a199b8; end: 106a19a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a199b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112755eb8);
    puVar1 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128fa0(uVar2,param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112755e88);
    func_0x00010bf643e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139b60();
    _objc_release(uVar2);
    func_0x00010bdd4e00(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a19a5c; end: 106a19bff; -[SCMemoriesStoryEditorViewController storyEditorHeaderCell:didEditStoryTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a19a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2238;
  _objc_alloc(PTR_PTR_1126b2238);
  lVar6 = (long)_DAT_112755e88;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf643e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf643e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0ed4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010180(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112755e8c);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bfd0020(uVar5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a19c00; end: 106a19cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a19c00(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112755e84);
      uVar1 = *(undefined8 *)(param_1 + _DAT_112755e88);
      func_0x00010bf643e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0ed4e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ba0(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a19cb4; end: 106a19cfb; -[SCMemoriesStoryEditorViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106a19cb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755e8c);
  func_0x00010c0ead40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07aae0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 106a19cfc; end: 106a19d9f; -[SCMemoriesStoryEditorViewController memoriesStoryEditorDataSource:didUpdateViewModel:updateType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a19cfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010be8a780(param_1,param_2,param_4,param_5);
  func_0x00010bedc680(param_1);
  lVar3 = (long)_DAT_112755e88;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078a20();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfdde40();
    _objc_release(uVar2);
    uVar2 = 0;
    if ((int)uVar1 == 0) {
      uVar2 = 3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__transitionSaveButtonToState__1125915e0,uVar2);
  return;
}



/* Entry: 106a19da0; end: 106a19e97; -[SCMemoriesStoryEditorViewController memoriesStoryEditorDataSourceDidDeleteStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a19da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755e8c);
  func_0x00010bdc45c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfd0020(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a19e98; end: 106a19ecf;  */

void FUN_106a19e98(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be02280(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a19ed0; end: 106a1a0d3; -[SCMemoriesStoryEditorViewController _reloadCollectionViewWithViewModels:updateType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a19ed0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    lVar8 = (long)_DAT_112755ec8;
    puVar2 = PTR_PTR_1126b2210;
    func_0x00010bfecf80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      uVar3 = param_3;
      func_0x00010bf343c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      _objc_release(uVar3);
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf343c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
      uVar5 = param_3;
      func_0x00010bf343c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010be22a60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      lVar7 = (long)_DAT_112755ea8;
      func_0x00010be50c00(param_1);
      _objc_retain(param_3);
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      *(undefined8 *)(param_1 + lVar8) = param_3;
      _objc_release(uVar5);
      _objc_retain(lVar6);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      *(long *)(param_1 + lVar7) = lVar6;
      _objc_release(uVar5);
      if (param_4 != 4) {
        _objc_initWeak(auStack_68,param_1);
        puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_copyWeak(auStack_88,auStack_68);
        lStack_80 = param_4;
        _objc_retain(puVar2);
        uStack_78 = uVar4;
        uStack_70 = uVar3;
        func_0x00010c0f9680(puVar1);
        _objc_release(puVar2);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_68);
      }
      _objc_release(lVar6);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a1a0d4; end: 106a1a207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1a0d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112755eb8);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106a1a208;
    puStack_70 = &UNK_110842a68;
    _objc_copyWeak(auStack_60,param_1 + 0x28);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_68 = uVar3;
    _objc_copyWeak(auStack_a8,param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x38);
    uStack_a0 = *(undefined8 *)(param_1 + 0x30);
    uStack_90 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0f8420(uVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106a1a208; end: 106a1a2f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1a208(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x30);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112755eb8);
      puVar2 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128fa0(uVar4,param_2,puVar2);
      _objc_release(puVar2);
      uVar3 = *(ulong *)(param_1 + 0x30);
    }
    if ((uVar3 & 0x1e) != 0) {
      lVar6 = (long)_DAT_112755eb8;
      uVar5 = *(undefined8 *)(lVar1 + lVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf6cf20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c100(uVar5,param_2,uVar4);
      _objc_release(uVar4);
      uVar5 = *(undefined8 *)(lVar1 + lVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0672c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066a40(uVar5,param_2,uVar4);
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a1a2f4; end: 106a1a36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1a2f4(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    if ((*(byte *)(param_1 + 0x28) >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) < *(long *)(param_1 + 0x30)) {
        func_0x00010be9c0c0(lVar1);
        goto LAB_106a1a358;
      }
    }
    if ((*(byte *)(lVar1 + _DAT_112755ed4) & 1) == 0) {
      func_0x00010be830c0(lVar1);
    }
  }
LAB_106a1a358:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a1a36c; end: 106a1a52b; -[SCMemoriesStoryEditorViewController _promoteUserToNameStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1a36c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  ulong uStack_138;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + _DAT_112755eb8);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        puVar4 = PTR_PTR_1126cfc60;
        uVar6 = *(ulong *)(lStack_128 + lVar8 * 8);
        _objc_retain(uVar6);
        _objc_opt_class(puVar4);
        uVar5 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar4);
        uVar1 = uVar6;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar6);
        if (uVar1 != 0) {
          puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_150 = 0xc2000000;
          pcStack_148 = FUN_106a1a52c;
          puStack_140 = &UNK_110842e18;
          uStack_138 = uVar1;
          _objc_retain(uVar6);
          func_0x000100c749e0(0x3dcccccd,"APPSTORE",&puStack_158);
          *(undefined1 *)(param_1 + _DAT_112755ed4) = 1;
          _objc_release(uStack_138);
          _objc_release(uVar6);
          goto LAB_106a1a4e8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
LAB_106a1a4e8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfb3650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(lVar2 + 0x20),PTR_s_focusOnStoryNameTextFieldIfNeede_1125ca738);
    return;
  }
  return;
}



/* Entry: 106a1a52c; end: 106a1a533;  */

void FUN_106a1a52c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_focusOnStoryNameTextFieldIfNeede_1125ca738);
  return;
}



/* Entry: 106a1a534; end: 106a1a5c7; -[SCMemoriesStoryEditorViewController _scrollToIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1a534(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  if (0 < param_3) {
    lVar3 = (long)_DAT_112755eb8;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c0deec0(lVar1,param_2,1);
    if (param_3 < lVar1) {
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_3,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1525a0(*(undefined8 *)(param_1 + lVar3),param_2,puVar2,4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 106a1a5c8; end: 106a1a933; -[SCMemoriesStoryEditorViewController _logBlizzardSnapsAddingOrDeletingWithOldCellViewModels:newCellViewModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1a5c8(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_4);
      }
      lVar15 = *(long *)(lVar13 * 8);
      lVar16 = lVar15;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar16;
      func_0x00010bf529e0();
      _objc_release(lVar16);
      if (lVar3 != 0) {
        func_0x00010c245680(lVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1);
        _objc_release(lVar15);
      }
      lVar13 = lVar13 + 1;
    } while (lVar2 != lVar13);
    lVar2 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  _objc_retain(param_3);
  puVar5 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      lVar16 = *(long *)((long)puVar14 * 8);
      lVar6 = lVar16;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar6;
      func_0x00010bf529e0();
      _objc_release(lVar6);
      if (lVar13 != 0) {
        func_0x00010c245680(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar4);
        _objc_release(lVar16);
      }
      puVar14 = puVar14 + 1;
    } while (puVar5 != puVar14);
    puVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010c0d3c80();
  func_0x00010c0ce860();
  puVar14 = puVar4;
  func_0x00010c0d3c80();
  func_0x00010c0ce860(puVar4);
  puVar7 = puVar5;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    puVar8 = puVar14;
    func_0x00010bf529e0();
    puVar7 = puVar14;
  }
  else {
    puVar8 = param_3;
    func_0x00010bf529e0();
    puVar7 = puVar5;
  }
  if (puVar8 != (undefined *)0x0) {
    uVar17 = *(undefined8 *)(param_1 + _DAT_112755e84);
    uVar9 = *(undefined8 *)(param_1 + _DAT_112755e88);
    func_0x00010bf643e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0ed4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar7);
    func_0x00010c0a1ba0(uVar17);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
  }
  _objc_release(puVar14);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + _DAT_112755ea0,0);
  _objc_storeStrong(param_3 + _DAT_112755eb0,0);
  _objc_storeStrong(param_3 + _DAT_112755e9c,0);
  _objc_storeStrong(param_3 + _DAT_112755e98,0);
  _objc_storeStrong(param_3 + _DAT_112755e94,0);
  _objc_storeStrong(param_3 + _DAT_112755ec4,0);
  _objc_storeStrong(param_3 + _DAT_112755e84,0);
  _objc_storeStrong(param_3 + _DAT_112755e8c,0);
  _objc_storeStrong(param_3 + _DAT_112755e88,0);
  _objc_storeStrong(param_3 + _DAT_112755ea8,0);
  _objc_storeStrong(param_3 + _DAT_112755eac,0);
  _objc_storeStrong(param_3 + _DAT_112755ec8,0);
  _objc_storeStrong(param_3 + _DAT_112755ecc,0);
  _objc_destroyWeak(param_3 + _DAT_112755e90);
  _objc_storeStrong(param_3 + _DAT_112755ec0,0);
  _objc_storeStrong(param_3 + _DAT_112755eb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + _DAT_112755eb8,0);
  return;
}



/* Entry: 106a1a934; end: 106a1aa5f; -[SCMemoriesStoryEditorViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1a934(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755ea0,0);
  _objc_storeStrong(param_1 + _DAT_112755eb0,0);
  _objc_storeStrong(param_1 + _DAT_112755e9c,0);
  _objc_storeStrong(param_1 + _DAT_112755e98,0);
  _objc_storeStrong(param_1 + _DAT_112755e94,0);
  _objc_storeStrong(param_1 + _DAT_112755ec4,0);
  _objc_storeStrong(param_1 + _DAT_112755e84,0);
  _objc_storeStrong(param_1 + _DAT_112755e8c,0);
  _objc_storeStrong(param_1 + _DAT_112755e88,0);
  _objc_storeStrong(param_1 + _DAT_112755ea8,0);
  _objc_storeStrong(param_1 + _DAT_112755eac,0);
  _objc_storeStrong(param_1 + _DAT_112755ec8,0);
  _objc_storeStrong(param_1 + _DAT_112755ecc,0);
  _objc_destroyWeak(param_1 + _DAT_112755e90);
  _objc_storeStrong(param_1 + _DAT_112755ec0,0);
  _objc_storeStrong(param_1 + _DAT_112755eb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755eb8,0);
  return;
}



/* Entry: 106a1aa60; end: 106a1b08f; +[SCMemoriesStoryEditorDiffUtils indexPathChangeWithOldViewModel:newViewModel:] */

void FUN_106a1aa60(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  code *pcStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  code *pcStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar6 = param_3;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_1b0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1b0 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        uStack_1f0 = 0;
        uStack_1e0 = 0x3032000000;
        pcStack_1d8 = FUN_106a1b090;
        uStack_1d0 = 0x106a1b0a0;
        puStack_1c8 = (undefined *)0x0;
        puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_210 = 0xc2000000;
        pcStack_208 = FUN_106a1b0a8;
        puStack_200 = &UNK_110953638;
        puStack_1f8 = &uStack_1f0;
        puStack_1e8 = &uStack_1f0;
        func_0x00010c0bff00(*(undefined8 *)(lStack_1b8 + lVar9 * 8));
        func_0x00010befa120(puVar1);
        __Block_object_dispose(&uStack_1f0,8);
        _objc_release(puStack_1c8);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar6);
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  lVar6 = param_4;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_250;
    do {
      lVar9 = 0;
      do {
        if (*plStack_250 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        uStack_1f0 = 0;
        uStack_1e0 = 0x3032000000;
        pcStack_1d8 = FUN_106a1b090;
        uStack_1d0 = 0x106a1b0a0;
        puStack_1c8 = (undefined *)0x0;
        puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_280 = 0xc2000000;
        pcStack_278 = FUN_106a1b0e4;
        puStack_270 = &UNK_110953638;
        puStack_268 = &uStack_1f0;
        puStack_1e8 = &uStack_1f0;
        func_0x00010c0bff00(*(undefined8 *)(lStack_258 + lVar9 * 8));
        func_0x00010befa120(puVar2);
        __Block_object_dispose(&uStack_1f0,8);
        _objc_release(puStack_1c8);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar6);
  puVar8 = puVar1;
  func_0x000107ea50c8(puVar1,puVar2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar8;
  func_0x00010c13cae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar4;
  func_0x00010bfd5320();
  if (((ulong)puVar8 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puStack_1e8 = &uStack_1f0;
    uStack_1f0 = 0;
    uStack_1e0 = 0x3032000000;
    pcStack_1d8 = FUN_106a1b090;
    uStack_1d0 = 0x106a1b0a0;
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    puStack_1c8 = puVar8;
    func_0x00010bf6d000(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2b0 = 0xc2000000;
    pcStack_2a8 = FUN_106a1b120;
    puStack_2a0 = &UNK_1109536a8;
    _objc_retain(puVar1);
    puStack_290 = &uStack_1f0;
    puStack_298 = puVar1;
    func_0x00010bf97bc0(puVar5);
    _objc_release(puVar5);
    puStack_2e0 = &uStack_2e8;
    uStack_2e8 = 0;
    uStack_2d8 = 0x3032000000;
    pcStack_2d0 = FUN_106a1b090;
    uStack_2c8 = 0x106a1b0a0;
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    puStack_2c0 = puVar8;
    func_0x00010c0674e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_318 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_310 = 0xc2000000;
    uStack_308 = 0x106a1b194;
    puStack_300 = &UNK_1109536a8;
    _objc_retain(puVar2);
    puStack_2f0 = &uStack_2e8;
    puStack_2f8 = puVar2;
    func_0x00010bf97bc0(puVar5);
    _objc_release(puVar5);
    puStack_340 = &uStack_348;
    uStack_348 = 0;
    uStack_338 = 0x3032000000;
    pcStack_330 = FUN_106a1b090;
    uStack_328 = 0x106a1b0a0;
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_370 = &uStack_378;
    uStack_378 = 0;
    uStack_368 = 0x3032000000;
    pcStack_360 = FUN_106a1b090;
    uStack_358 = 0x106a1b0a0;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_320 = puVar8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    puStack_350 = puVar5;
    func_0x00010c0d19c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010bf97e80(puVar8);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126cfc78;
    _objc_alloc(PTR_PTR_1126cfc78);
    func_0x00010c01e2c0();
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_378,8);
    _objc_release(puStack_350);
    __Block_object_dispose(&uStack_348,8);
    _objc_release(puStack_320);
    _objc_release(puStack_2f8);
    __Block_object_dispose(&uStack_2e8,8);
    _objc_release(puStack_2c0);
    _objc_release(puStack_298);
    __Block_object_dispose(&uStack_1f0,8);
    _objc_release(puStack_1c8);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_348,8);
  __Block_object_dispose(&uStack_2e8,8);
  lVar6 = 8;
  __Block_object_dispose(&uStack_1f0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  return;
}



/* Entry: 106a1b090; end: 106a1b0a7;  */

void FUN_106a1b090(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a1b0a8; end: 106a1b0df;  */

void FUN_106a1b0a8(long param_1,undefined8 param_2)

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



/* Entry: 106a1b0e0; end: 106a1b0e3;  */

void FUN_106a1b0e0(void)

{
  return;
}



/* Entry: 106a1b0e4; end: 106a1b11b;  */

void FUN_106a1b0e4(long param_1,undefined8 param_2)

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



/* Entry: 106a1b11c; end: 106a1b11f;  */

void FUN_106a1b11c(void)

{
  return;
}



/* Entry: 106a1b120; end: 106a1b207;  */

void FUN_106a1b120(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (param_2 < uVar1) {
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106a1b208; end: 106a1b2db;  */

void FUN_106a1b208(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  if (param_3 < uVar1) {
    func_0x00010bfba9a0(param_2);
    func_0x00010bfed020(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010c2719c0(param_2);
    func_0x00010bfed020(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a1b2dc; end: 106a1b617; +[SCMemoriesStoryEditorDiffUtils entryChangeWithOriginalEntry:copiedEntry:memoriesMergedDataSource:completionQueue:completionBlock:] */

void FUN_106a1b2dc(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_6 != 0) && (param_7 != 0)) {
    uVar2 = param_3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c2711a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release();
    if ((uVar4 & 1) == 0) {
      uVar2 = param_4;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_190 = uVar2;
    }
    else {
      uStack_190 = 0;
    }
    _dispatch_group_create();
    _dispatch_group_enter();
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_106a1b090;
    uStack_88 = 0x106a1b0a0;
    uStack_80 = 0;
    uVar5 = param_5;
    puStack_a0 = &uStack_a8;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106a1b618;
    puStack_c0 = &UNK_110853230;
    puStack_b0 = &uStack_a8;
    _objc_retain(uVar2);
    uStack_b8 = uVar2;
    func_0x00010bfa7360(uVar5);
    _objc_release(uVar5);
    _dispatch_group_enter(uVar2);
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_106a1b090;
    uStack_e8 = 0x106a1b0a0;
    uStack_e0 = 0;
    uVar5 = param_5;
    puStack_100 = &uStack_108;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar1;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x106a1b674;
    puStack_120 = &UNK_110853230;
    puStack_110 = &uStack_108;
    _objc_retain(uVar2);
    uStack_118 = uVar2;
    func_0x00010bfa7360(uVar5);
    _objc_release(uVar5);
    puStack_188 = puVar1;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_106a1b6d0;
    puStack_170 = &UNK_110953708;
    puStack_148 = &uStack_a8;
    puStack_140 = &uStack_108;
    _objc_retain(param_4);
    uStack_168 = param_4;
    _objc_retain(param_3);
    uStack_158 = uStack_190;
    uStack_160 = param_3;
    _objc_retain(param_7);
    lStack_150 = param_7;
    _objc_retain(uStack_190);
    func_0x000100bc0718(uVar2,param_6,&puStack_188);
    _objc_release(lStack_150);
    _objc_release(uStack_158);
    _objc_release(uStack_160);
    _objc_release(uStack_168);
    _objc_release(uStack_118);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(uStack_e0);
    _objc_release(uStack_b8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(uStack_190);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a1b618; end: 106a1b6cf;  */

void FUN_106a1b618(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a1b6d0; end: 106a1bde3;  */

undefined * FUN_106a1b6d0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  _objc_retain(lVar23);
  lVar3 = lVar23;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar23);
      }
      lVar20 = *(long *)(lVar24 * 8);
      lVar4 = lVar20;
      func_0x00010c241220(lVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(lVar4);
      lVar4 = lVar20;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        func_0x00010bf8b0c0(lVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar22);
        _objc_release(lVar20);
      }
      lVar24 = lVar24 + 1;
    } while (lVar3 != lVar24);
    lVar3 = lVar23;
    func_0x00010bf52a60();
  }
  _objc_release(lVar23);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  _objc_retain(lVar23);
  lVar3 = lVar23;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar23);
      }
      lVar20 = *(long *)(lVar24 * 8);
      lVar4 = lVar20;
      func_0x00010c241220(lVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(lVar4);
      lVar4 = lVar20;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        lVar4 = lVar20;
        func_0x00010bf8b0c0(lVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(lVar4);
      }
      lVar8 = *(long *)(param_1 + 0x20);
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar20;
      func_0x00010c241220(lVar20);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar8);
      if (lVar9 != 0) {
        lVar4 = lVar20;
        func_0x00010bf8b0c0(lVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x00010bf4b900();
        _objc_release(lVar4);
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c245800(uVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar20;
        func_0x00010c241220(lVar20);
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar11;
        func_0x00010c0e00e0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        if ((int)puVar10 == 0) {
          func_0x00010c241220(lVar20);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf8b0c0();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c1d0560(puVar7);
        _objc_release(lVar20);
        _objc_release(uVar21);
        _objc_release(lVar4);
        _objc_release(uVar11);
      }
      lVar24 = lVar24 + 1;
    } while (lVar3 != lVar24);
    lVar3 = lVar23;
    func_0x00010bf52a60();
  }
  _objc_release(lVar23);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  _objc_retain(lVar23);
  lVar3 = lVar23;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar23);
      }
      lVar20 = *(long *)(lVar24 * 8);
      lVar4 = lVar20;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
LAB_106a1bb80:
        func_0x00010befa120(puVar10);
      }
      else {
        func_0x00010bf8b0c0(lVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar2;
        func_0x00010bf4b900();
        _objc_release(lVar20);
        _objc_release(lVar4);
        if (((ulong)puVar12 & 1) == 0) goto LAB_106a1bb80;
      }
      lVar24 = lVar24 + 1;
    } while (lVar3 != lVar24);
    lVar3 = lVar23;
    func_0x00010bf52a60();
  }
  _objc_release(lVar23);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  _objc_retain(lVar23);
  lVar3 = lVar23;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar23);
      }
      uVar21 = *(undefined8 *)(lVar24 * 8);
      func_0x00010c241220(uVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010bf4b900();
      _objc_release(uVar21);
      if (((ulong)puVar13 & 1) == 0) {
        func_0x00010befa120(puVar12);
      }
      lVar24 = lVar24 + 1;
    } while (lVar3 != lVar24);
    lVar3 = lVar23;
    func_0x00010bf52a60();
  }
  _objc_release(lVar23);
  uVar14 = *(ulong *)(param_1 + 0x28);
  func_0x00010c245800();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c071ae0();
  _objc_release(uVar14);
  if ((uVar15 & 1) == 0) {
    _objc_retain(puVar7);
    puVar13 = puVar7;
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  puVar16 = PTR_PTR_1126cfc80;
  _objc_alloc();
  puVar17 = puVar12;
  func_0x00010bf51e00(puVar12);
  puVar18 = puVar10;
  func_0x00010bf51e00(puVar10);
  func_0x00010c0533a0();
  _objc_release(puVar18);
  _objc_release(puVar17);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar16);
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar22 = puVar2;
  func_0x00010b5f6bec();
  if (((ulong)puVar22 & 1) == 0) {
    puVar22 = puVar2;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if ((((undefined *)0x8 < puVar22) || ((1L << ((ulong)puVar22 & 0x3f) & 0x195U) == 0)) &&
       (puVar22 != (undefined *)0x270f)) {
      puVar22 = (undefined *)0x1;
      goto LAB_106a1be30;
    }
  }
  puVar22 = (undefined *)0x0;
LAB_106a1be30:
  _objc_release(puVar2);
  return puVar22;
}



/* Entry: 106a1bde4; end: 106a1be5b;  */

undefined8 FUN_106a1bde4(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010b5f6bec();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (((8 < uVar1) || ((1L << (uVar1 & 0x3f) & 0x195U) == 0)) && (uVar1 != 9999)) {
      uVar2 = 1;
      goto LAB_106a1be30;
    }
  }
  uVar2 = 0;
LAB_106a1be30:
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106a1be5c; end: 106a1c11b;  */

void FUN_106a1be5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bf8c8;
  func_0x00010c2aeac0(PTR_PTR_1126bf8c8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c222da0(puVar1,param_2,2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a1e00(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c196b00(puVar1,param_2,0x10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b3960(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c216240(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b4ee0(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b1a80(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a1c11c; end: 106a1c3c7; -[SCMemoriesStoryEditorDataSourceListenerAnnouncer addListener:] */

undefined8 FUN_106a1c11c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110953748;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_106a1c3c8(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_106a1c508(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_106a1c2d0:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_106a1c2f0;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_106a1c3c8(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_106a1c3c8(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_106a1c508(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_106a1c2d0;
    }
  }
  uVar9 = 1;
LAB_106a1c2f0:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 106a1c3c8; end: 106a1c507;  */

void FUN_106a1c3c8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_106a1ca20();
LAB_106a1c504:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_106a1c504;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 106a1c508; end: 106a1c54f;  */

void FUN_106a1c508(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 106a1c550; end: 106a1c77f; -[SCMemoriesStoryEditorDataSourceListenerAnnouncer removeListener:] */

void FUN_106a1c550(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_106a1c704;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_106a1c5b8;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_106a1c508(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_106a1c704;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_106a1c5b8:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110953748;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_106a1c3c8(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_106a1c508(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_106a1c704;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_106a1c704:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a1c780; end: 106a1c893; -[SCMemoriesStoryEditorDataSourceListenerAnnouncer memoriesStoryEditorDataSource:didUpdateViewModel:updateType:] */

void FUN_106a1c780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_106a1c894(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0c9d80();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a1c894; end: 106a1c8f3;  */

void FUN_106a1c894(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 106a1c8f4; end: 106a1c9d7; -[SCMemoriesStoryEditorDataSourceListenerAnnouncer memoriesStoryEditorDataSourceDidDeleteStory:] */

void FUN_106a1c8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  FUN_106a1c894(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0c9da0();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a1c9d8; end: 106a1c9ff; -[SCMemoriesStoryEditorDataSourceListenerAnnouncer .cxx_destruct] */

void FUN_106a1c9d8(long param_1)

{
  FUN_106a1cad0(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 106a1ca00; end: 106a1ca1f; -[SCMemoriesStoryEditorDataSourceListenerAnnouncer .cxx_construct] */

void FUN_106a1ca00(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 106a1ca20; end: 106a1ca33;  */

void FUN_106a1ca20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110953748;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106a1ca34; end: 106a1ca43;  */

void FUN_106a1ca34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110953748;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106a1ca44; end: 106a1ca63;  */

void FUN_106a1ca44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110953748;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106a1ca64; end: 106a1cacb;  */

void FUN_106a1ca64(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 106a1cacc; end: 106a1cacf;  */

void FUN_106a1cacc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106a1cad0; end: 106a1cb27;  */

long FUN_106a1cad0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 106a1cb28; end: 106a1cc2b; -[SCMemoriesStoryEditorActionModel initWithEntry:originalEntry:snaps:storyTitle:] */

undefined1 *
FUN_106a1cb28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f43e0;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a1cc2c; end: 106a1cc4f; -[SCMemoriesStoryEditorActionModel copyWithZone:] */

undefined8 FUN_106a1cc2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a1cc50; end: 106a1ccdb; -[SCMemoriesStoryEditorActionModel hash] */

undefined8 * FUN_106a1cc50(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106a1cd8c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106a1cd98;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_106a1cd98;
            }
            goto LAB_106a1cd8c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106a1cd98:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106a1ccdc; end: 106a1cdb3; -[SCMemoriesStoryEditorActionModel isEqual:] */

long FUN_106a1ccdc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106a1cd8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106a1cd98;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_106a1cd98;
            }
            goto LAB_106a1cd8c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106a1cd98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106a1cdb4; end: 106a1cdbb; -[SCMemoriesStoryEditorActionModel entry] */

undefined8 FUN_106a1cdb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a1cdbc; end: 106a1cdc3; -[SCMemoriesStoryEditorActionModel originalEntry] */

undefined8 FUN_106a1cdbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a1cdc4; end: 106a1cdcb; -[SCMemoriesStoryEditorActionModel snaps] */

undefined8 FUN_106a1cdc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a1cdcc; end: 106a1cdd3; -[SCMemoriesStoryEditorActionModel storyTitle] */

undefined8 FUN_106a1cdcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106a1cdd4; end: 106a1ce1b; -[SCMemoriesStoryEditorActionModel .cxx_destruct] */

void FUN_106a1cdd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a1ce1c; end: 106a1cef3; -[SCMemoriesStoryEditorAddSnapsCellViewModel initWithBackgroundColor:iconImage:titleColor:] */

undefined1 *
FUN_106a1ce1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f43e8;
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



/* Entry: 106a1cef4; end: 106a1cefb; -[SCMemoriesStoryEditorAddSnapsCellViewModel backgroundColor] */

undefined8 FUN_106a1cef4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a1cefc; end: 106a1cf03; -[SCMemoriesStoryEditorAddSnapsCellViewModel iconImage] */

undefined8 FUN_106a1cefc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a1cf04; end: 106a1cf0b; -[SCMemoriesStoryEditorAddSnapsCellViewModel titleColor] */

undefined8 FUN_106a1cf04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a1cf0c; end: 106a1cf47; -[SCMemoriesStoryEditorAddSnapsCellViewModel .cxx_destruct] */

void FUN_106a1cf0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a1cf48; end: 106a1d00b; -[SCMemoriesStoryEditorHeaderViewModel initWithTitle:subtitle:isSaveable:isSaving:] */

undefined1 *
FUN_106a1cf48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f43f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a1d00c; end: 106a1d02f; -[SCMemoriesStoryEditorHeaderViewModel copyWithZone:] */

undefined8 FUN_106a1d00c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106a1d030; end: 106a1d0af; -[SCMemoriesStoryEditorHeaderViewModel hash] */

undefined8 * FUN_106a1d030(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106a1d150:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106a1d15c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_106a1d15c;
        }
        goto LAB_106a1d150;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106a1d15c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106a1d0b0; end: 106a1d177; -[SCMemoriesStoryEditorHeaderViewModel isEqual:] */

long FUN_106a1d0b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106a1d150:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106a1d15c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106a1d15c;
        }
        goto LAB_106a1d150;
      }
    }
    lVar3 = 0;
  }
LAB_106a1d15c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106a1d178; end: 106a1d17f; -[SCMemoriesStoryEditorHeaderViewModel title] */

undefined8 FUN_106a1d178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106a1d180; end: 106a1d187; -[SCMemoriesStoryEditorHeaderViewModel subtitle] */

undefined8 FUN_106a1d180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106a1d188; end: 106a1d18f; -[SCMemoriesStoryEditorHeaderViewModel isSaveable] */

undefined1 FUN_106a1d188(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106a1d190; end: 106a1d197; -[SCMemoriesStoryEditorHeaderViewModel isSaving] */

undefined1 FUN_106a1d190(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106a1d198; end: 106a1d1c7; -[SCMemoriesStoryEditorHeaderViewModel .cxx_destruct] */

void FUN_106a1d198(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


