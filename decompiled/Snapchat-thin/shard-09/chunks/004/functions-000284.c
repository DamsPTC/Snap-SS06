/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d11620; end: 106d1162f; -[SCMemoriesSubscreenViewController scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d11620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf75b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275cbe8),PTR_s_didEndScrolling_1125bb078);
  return;
}



/* Entry: 106d11630; end: 106d1176f; -[SCMemoriesSubscreenViewController subscreenStoryHeaderCellDidTapStoryThumbnail:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d11630(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_11275cbf8);
    func_0x00010bf64220();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010be6db00(param_2,param_3,lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        *(undefined1 *)(param_2 + _DAT_11275cc00) = 1;
        uVar7 = *(undefined8 *)(param_2 + _DAT_11275cbd0);
        func_0x00010be6f200(param_2);
        lVar3 = param_2;
        func_0x00010c0f2220(param_2);
        lVar4 = param_4;
        func_0x00010c27ace0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_2 + _DAT_11275cbd8);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c22f180();
        func_0x00010c10d5e0(param_1,0,uVar7,param_3,param_2,lVar2,0,lVar3,lVar4,uVar6);
        _objc_release(uVar5);
        _objc_release(lVar4);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d11770; end: 106d117cf; -[SCMemoriesSubscreenViewController selectedGalleryItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d11770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275cbf0);
  func_0x00010c1599e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ecd40(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d117d0; end: 106d117df; -[SCMemoriesSubscreenViewController selectedSnapItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d117d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15a030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275cbf0),PTR_s_selectedSnapItems_112634228);
  return;
}



/* Entry: 106d117e0; end: 106d117ef; -[SCMemoriesSubscreenViewController orderedSelectedSnapItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d117e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eccf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275cbf0),PTR_s_orderedSelectedSnapItems_112618d50);
  return;
}



/* Entry: 106d117f0; end: 106d11853; -[SCMemoriesSubscreenViewController selectedGallerySnaps] */

void FUN_106d117f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c15a020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100817178();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d11854; end: 106d1185b;  */

void FUN_106d11854(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 106d1185c; end: 106d1189f; -[SCMemoriesSubscreenViewController orderedSelectedGallerySnaps] */

void FUN_106d1185c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ecce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d118a0; end: 106d118a7;  */

void FUN_106d118a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 106d118a8; end: 106d118b7; -[SCMemoriesSubscreenViewController selectedItemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d118a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c159930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275cbf0),PTR_s_selectedItemCount_112634068);
  return;
}



/* Entry: 106d118b8; end: 106d11947; -[SCMemoriesSubscreenViewController selectionControllerDidEnterSelectionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d118b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11275cbf0);
  _objc_retain(param_4);
  func_0x00010c1facc0(uVar1);
  func_0x00010c1facc0(*(undefined8 *)(param_2 + _DAT_11275cbf8));
  func_0x00010bf201c0(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c181f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,0,*(undefined8 *)(param_2 + _DAT_11275cbe4),
             PTR_s_setContentInset__11263e200);
  return;
}



/* Entry: 106d11948; end: 106d119af; -[SCMemoriesSubscreenViewController selectionControllerDidExitSelectionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d11948(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x00010c1facc0(*(undefined8 *)(param_2 + _DAT_11275cbf0),param_3,0);
  func_0x00010c1facc0(*(undefined8 *)(param_2 + _DAT_11275cbf8));
  func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
                    /* WARNING: Could not recover jumptable at 0x00010c181f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,0,*(undefined8 *)(param_2 + _DAT_11275cbe4),
             PTR_s_setContentInset__11263e200);
  return;
}



/* Entry: 106d119b0; end: 106d119b7; -[SCMemoriesSubscreenViewController selectionController:shouldScrollToGalleryEntry:] */

void FUN_106d119b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWithAnimated__11255e890,1);
  return;
}



/* Entry: 106d119b8; end: 106d119c7; -[SCMemoriesSubscreenViewController selectionController:didCreateStory:] */

void FUN_106d119b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfd0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didCreateStory__11255cdd8,param_4);
    return;
  }
  return;
}



/* Entry: 106d119c8; end: 106d11b83; -[SCMemoriesSubscreenViewController collectionViewUpdaterWillDisplaySection:cell:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d119c8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar10 = (long)_DAT_11275cbf0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar10);
  func_0x00010c158e00();
  if (iVar1 == 0) goto LAB_106d11b5c;
  lVar2 = *(long *)(param_1 + (long)_DAT_11275cbf4);
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfecde0();
  _objc_release(lVar2);
  if (lVar3 == 0x7fffffffffffffff) goto LAB_106d11b5c;
  puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bddc460();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c06ece0();
  if ((int)uVar6 != 0) {
    uVar6 = uVar5;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfbdda0();
    func_0x00010b5fad2c();
    if ((uVar7 & 1) == 0) {
      uVar7 = uVar6;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      if (uVar7 == 8) goto LAB_106d11ac8;
      uVar7 = uVar5;
      func_0x00010c245680(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar9 = *(undefined8 *)(param_1 + lVar10);
      uVar7 = uVar8;
      func_0x00010b6f8630(uVar8,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb0a0(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar8);
    }
    else {
LAB_106d11ac8:
      func_0x00010c1fb080(*(undefined8 *)(param_1 + lVar10));
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
  _objc_release(puVar4);
LAB_106d11b5c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d11b84; end: 106d11b87; -[SCMemoriesSubscreenViewController collectionViewUpdaterDidEndDisplayingSection:cell:atIndex:] */

void FUN_106d11b84(void)

{
  return;
}



/* Entry: 106d11b88; end: 106d11be3; -[SCMemoriesSubscreenViewController textForGalleryTableIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d11b88(long param_1)

{
  long lVar1;
  
  func_0x00010c267e60(*(undefined8 *)(param_1 + _DAT_11275cbe8));
  func_0x00010be46260(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x000107e89650();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d11be4; end: 106d11c5f; -[SCMemoriesSubscreenViewController galleryTableIndex:isDraggedToPercent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d11be4(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  
  lVar1 = (long)_DAT_11275cbe4;
  dVar4 = param_1;
  func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  func_0x00010becd620(param_5);
  uVar2 = *(undefined8 *)(param_5 + lVar1);
  fVar3 = (float)(int)(param_1 * (dVar4 + (param_2 - param_4)));
  dVar4 = (double)(ulong)(uint)fVar3;
  func_0x00010becd620(dVar4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,(double)fVar3 - dVar4,uVar2,PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 106d11c60; end: 106d11d3b; -[SCMemoriesSubscreenViewController _itemsInScrollViewRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d11c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_11275cbe4);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c940(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106d11d3c;
  puStack_60 = &UNK_110975d48;
  uVar1 = uVar2;
  lStack_58 = param_5;
  func_0x000100504554(uVar2,&puStack_78);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d11d3c; end: 106d11d8f;  */

void FUN_106d11d3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfecf20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddc460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d11d90; end: 106d11dd3; -[SCMemoriesSubscreenViewController _topOffset] */

undefined8 FUN_106d11d90(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c34a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106d11dd4; end: 106d11dd7; -[SCMemoriesSubscreenViewController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:] */

void FUN_106d11dd4(void)

{
  return;
}



/* Entry: 106d11dd8; end: 106d11deb; -[SCMemoriesSubscreenViewController sectionInsetsForSectionBasedCollectionViewUpdater:] */

undefined8 FUN_106d11dd8(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 106d11dec; end: 106d11def; -[SCMemoriesSubscreenViewController presentingViewControllerForSectionBasedCollectionViewUpdater:] */

void FUN_106d11dec(void)

{
  return;
}



/* Entry: 106d11df0; end: 106d11df3; -[SCMemoriesSubscreenViewController sectionBasedCollectionViewUpdaterWillUpdateCollectionView:] */

void FUN_106d11df0(void)

{
  return;
}



/* Entry: 106d11df4; end: 106d11df7; -[SCMemoriesSubscreenViewController sectionBasedCollectionViewUpdater:didSetUpSections:] */

void FUN_106d11df4(void)

{
  return;
}



/* Entry: 106d11df8; end: 106d11dfb; -[SCMemoriesSubscreenViewController sectionBasedCollectionViewUpdater:didTearDownSections:] */

void FUN_106d11df8(void)

{
  return;
}



/* Entry: 106d11dfc; end: 106d11dff; -[SCMemoriesSubscreenViewController sectionBasedCollectionViewUpdater:didUpdateLayoutWithAnimationFinished:] */

void FUN_106d11dfc(void)

{
  return;
}



/* Entry: 106d11e00; end: 106d11e07; -[SCMemoriesSubscreenViewController pageViewName] */

undefined8 FUN_106d11e00(void)

{
  return 0;
}



/* Entry: 106d11e08; end: 106d11e17; -[SCMemoriesSubscreenViewController type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d11e08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275cbc4);
}



/* Entry: 106d11e18; end: 106d11e27; -[SCMemoriesSubscreenViewController sectionController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d11e18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275cbf8);
}



/* Entry: 106d11e28; end: 106d11e67; -[SCMemoriesSubscreenViewController setSectionController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d11e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275cbf8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d11e68; end: 106d11f73; -[SCMemoriesSubscreenViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d11e68(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275cbf8,0);
  _objc_storeStrong(param_1 + _DAT_11275cbdc,0);
  _objc_storeStrong(param_1 + _DAT_11275cbd8,0);
  _objc_storeStrong(param_1 + _DAT_11275cbe0,0);
  _objc_storeStrong(param_1 + _DAT_11275cbc8,0);
  _objc_storeStrong(param_1 + _DAT_11275cbd4,0);
  _objc_storeStrong(param_1 + _DAT_11275cbcc,0);
  _objc_storeStrong(param_1 + _DAT_11275cbe8,0);
  _objc_storeStrong(param_1 + _DAT_11275cbfc,0);
  _objc_storeStrong(param_1 + _DAT_11275cbd0,0);
  _objc_storeStrong(param_1 + _DAT_11275cbf0,0);
  _objc_destroyWeak(param_1 + _DAT_11275cc04);
  _objc_storeStrong(param_1 + _DAT_11275cbf4,0);
  _objc_storeStrong(param_1 + _DAT_11275cbe4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275cbec,0);
  return;
}



/* Entry: 106d11f74; end: 106d12057; -[SCMemoriesSubscreenDataModel initWithPrimarySnap:snaps:entry:isFavorited:] */

undefined1 *
FUN_106d11f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

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
  puStack_48 = PTR_PTR_1126f68b0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d12058; end: 106d1207b; -[SCMemoriesSubscreenDataModel copyWithZone:] */

undefined8 FUN_106d12058(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d1207c; end: 106d120ff; -[SCMemoriesSubscreenDataModel hash] */

undefined8 * FUN_106d1207c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106d121a8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106d121b4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_106d121b4;
          }
          goto LAB_106d121a8;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106d121b4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106d12100; end: 106d121cf; -[SCMemoriesSubscreenDataModel isEqual:] */

long FUN_106d12100(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106d121a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106d121b4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106d121b4;
          }
          goto LAB_106d121a8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106d121b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106d121d0; end: 106d121d7; -[SCMemoriesSubscreenDataModel primarySnap] */

undefined8 FUN_106d121d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d121d8; end: 106d121df; -[SCMemoriesSubscreenDataModel snaps] */

undefined8 FUN_106d121d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d121e0; end: 106d121e7; -[SCMemoriesSubscreenDataModel entry] */

undefined8 FUN_106d121e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d121e8; end: 106d121ef; -[SCMemoriesSubscreenDataModel isFavorited] */

undefined1 FUN_106d121e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d121f0; end: 106d1222b; -[SCMemoriesSubscreenDataModel .cxx_destruct] */

void FUN_106d121f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d1222c; end: 106d122b3; -[SCMemoriesSubscreenHeaderDataProviderAccessories initWithIsMyStory:customStoryEntryExternalId:] */

undefined1 *
FUN_106d1222c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f68b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106d122b4; end: 106d122d7; -[SCMemoriesSubscreenHeaderDataProviderAccessories copyWithZone:] */

undefined8 FUN_106d122b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d122d8; end: 106d1233b; -[SCMemoriesSubscreenHeaderDataProviderAccessories hash] */

ulong * FUN_106d122d8(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_106d123c0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((char)puVar2[1] != (char)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_106d123c0;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_106d123c0;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_106d123c0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106d1233c; end: 106d123db; -[SCMemoriesSubscreenHeaderDataProviderAccessories isEqual:] */

long FUN_106d1233c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106d123c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_106d123c0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106d123c0;
    }
  }
  lVar3 = 1;
LAB_106d123c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106d123dc; end: 106d123e3; -[SCMemoriesSubscreenHeaderDataProviderAccessories isMyStory] */

undefined1 FUN_106d123dc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d123e4; end: 106d123eb; -[SCMemoriesSubscreenHeaderDataProviderAccessories customStoryEntryExternalId] */

undefined8 FUN_106d123e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d123ec; end: 106d123f7; -[SCMemoriesSubscreenHeaderDataProviderAccessories .cxx_destruct] */

void FUN_106d123ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d123f8; end: 106d124b3; -[SCMemoriesSnapsClusterSectionControllerConfig initWithClusterType:headerType:viewControllerType:isClusterChronological:isFavorites:isMyStory:customStoryEntryExternalId:] */

undefined1 *
FUN_106d123f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f68c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 106d124b4; end: 106d124bb; -[SCMemoriesSnapsClusterSectionControllerConfig clusterType] */

undefined8 FUN_106d124b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d124bc; end: 106d124c3; -[SCMemoriesSnapsClusterSectionControllerConfig headerType] */

undefined8 FUN_106d124bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d124c4; end: 106d124cb; -[SCMemoriesSnapsClusterSectionControllerConfig viewControllerType] */

undefined8 FUN_106d124c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d124cc; end: 106d124d3; -[SCMemoriesSnapsClusterSectionControllerConfig isClusterChronological] */

undefined1 FUN_106d124cc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d124d4; end: 106d124db; -[SCMemoriesSnapsClusterSectionControllerConfig isFavorites] */

undefined1 FUN_106d124d4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106d124dc; end: 106d124e3; -[SCMemoriesSnapsClusterSectionControllerConfig isMyStory] */

undefined1 FUN_106d124dc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106d124e4; end: 106d124eb; -[SCMemoriesSnapsClusterSectionControllerConfig customStoryEntryExternalId] */

undefined8 FUN_106d124e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d124ec; end: 106d124f7; -[SCMemoriesSnapsClusterSectionControllerConfig .cxx_destruct] */

void FUN_106d124ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 106d124f8; end: 106d12673; -[SCMemoriesSnapsClusterSectionControllerListenerAnnouncer description] */

void FUN_106d124f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_106d12674(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d12674; end: 106d126d3;  */

void FUN_106d12674(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 106d126d4; end: 106d1297f; -[SCMemoriesSnapsClusterSectionControllerListenerAnnouncer addListener:] */

undefined8 FUN_106d126d4(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_110975d88;
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
    FUN_106d12980(plVar10,auStack_90);
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
    FUN_106d12ac0(puVar8,&plStack_a0);
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
LAB_106d12888:
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
      goto LAB_106d128a8;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_106d12980(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_106d12980(plVar10,auStack_78);
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
    FUN_106d12ac0(puVar8,&plStack_88);
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
      goto LAB_106d12888;
    }
  }
  uVar9 = 1;
LAB_106d128a8:
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



/* Entry: 106d12980; end: 106d12abf;  */

void FUN_106d12980(long *param_1,long *param_2)

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
      FUN_106d12e8c();
LAB_106d12abc:
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
      if (uVar7 >> 0x3d != 0) goto LAB_106d12abc;
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



/* Entry: 106d12ac0; end: 106d12b07;  */

void FUN_106d12ac0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 106d12b08; end: 106d12d37; -[SCMemoriesSnapsClusterSectionControllerListenerAnnouncer removeListener:] */

void FUN_106d12b08(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_106d12cbc;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_106d12b70;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_106d12ac0(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_106d12cbc;
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
LAB_106d12b70:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110975d88;
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
          FUN_106d12980(plVar9,lVar7);
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
    FUN_106d12ac0(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_106d12cbc;
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
LAB_106d12cbc:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d12d38; end: 106d12e43; -[SCMemoriesSnapsClusterSectionControllerListenerAnnouncer memoriesSubscreenDataCoordinator:didUpdateDataModels:] */

void FUN_106d12d38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_106d12674(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0c9e60();
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



/* Entry: 106d12e44; end: 106d12e6b; -[SCMemoriesSnapsClusterSectionControllerListenerAnnouncer .cxx_destruct] */

void FUN_106d12e44(long param_1)

{
  FUN_106d12ea0(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 106d12e6c; end: 106d12e8b; -[SCMemoriesSnapsClusterSectionControllerListenerAnnouncer .cxx_construct] */

void FUN_106d12e6c(long param_1)

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



/* Entry: 106d12e8c; end: 106d12e9f;  */

undefined * FUN_106d12e8c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 106d12ea0; end: 106d12ef7;  */

long FUN_106d12ea0(long param_1)

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



/* Entry: 106d12ef8; end: 106d12f07;  */

void FUN_106d12ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110975d88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106d12f08; end: 106d12f27;  */

void FUN_106d12f08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110975d88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106d12f28; end: 106d12f8f;  */

void FUN_106d12f28(long param_1)

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



/* Entry: 106d12f90; end: 106d12f93;  */

void FUN_106d12f90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106d12f94; end: 106d13027; -[SCMemoriesLiveRenderingActiveRender initWithResponse:action:startTime:] */

undefined1 *
FUN_106d12f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f68c8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106d13028; end: 106d1302f; -[SCMemoriesLiveRenderingActiveRender response] */

undefined8 FUN_106d13028(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d13030; end: 106d13037; -[SCMemoriesLiveRenderingActiveRender action] */

undefined8 FUN_106d13030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d13038; end: 106d1303f; -[SCMemoriesLiveRenderingActiveRender startTime] */

undefined8 FUN_106d13038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d13040; end: 106d1304b; -[SCMemoriesLiveRenderingActiveRender .cxx_destruct] */

void FUN_106d13040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d1304c; end: 106d13c5b; -[SCGalleryOperaActionHandlerSession initWithShowSaveChangesPrompt:addSnapMutator:eventAnnouncer:operaSnapResolver:operaController:operaViewPlayManager:activityController:backupRetryMutator:boomboxScopeExposer:boomboxScopeServices:circumstanceEngine:cloudFS:cloudSync:contentDelivery:dataObjectContext:deletionMutator:encryptedContentManager:favoriteMutator:featureSettingsService:grapheneRegistry:keyService:liveRenderingMetricsRecorder:legacyLogger:memoriesEngagementLogger:memoriesExternalShareAdaptorScopeExposer:memoriesMergedDataSource:memoriesPreviewPresenterBuilder:memoriesPrivateGallerySetupFlowScopeExposer:memoriesSendViewPresenter:memoriesSnapThumbnailGeneratorBuilder:meoMutator:musicMediaLoader:musicSelectionLoader:previewURLVideoProvider:remixController:aiRemixController:spectaclesCustomExportScopeExposer:spectaclesCustomExportScopeServices:ucoDataFetcher:userInfoServices:userTrackedLogger:videoImportServices:memoriesExperimentService:snapDocDownloadingService:dreamsFeedbackExposer:dreamsFeedbackScopeServices:plusManagementScopeExposer:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:reportFlowScopeExposer:cachingMediaManager:shareNotificationService:promoteSnapService:memoriesSaveServices:genAIDreamsService:docObjectContext:memoriesLinkManagementUIScopeServices:valdiRuntimeProvider:snapRenderer:quickCutScopeExposer:simpleReportCreator:] */

undefined8 *
FUN_106d1304c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain();
  puStack_70 = PTR_PTR_1126f68d0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    _objc_storeWeak(puVar1 + 2,param_5);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_storeWeak(puVar1 + 5,param_7);
    uVar3 = param_7;
    func_0x00010c27f040(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(puVar1 + 4,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 6,param_8);
    _objc_retain(param_9);
    uVar3 = puVar1[0x10];
    puVar1[0x10] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[0x12];
    puVar1[0x12] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[0x28];
    puVar1[0x28] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0x29];
    puVar1[0x29] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[7];
    puVar1[7] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar1[10];
    puVar1[10] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_18;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_19;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = param_21;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar1[0x20];
    puVar1[0x20] = param_22;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar1[0x46];
    puVar1[0x46] = param_24;
    _objc_release(uVar3);
    _objc_retain(param_23);
    uVar3 = puVar1[0xf];
    puVar1[0xf] = param_23;
    _objc_release(uVar3);
    _objc_retain(param_25);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_25;
    _objc_release(uVar3);
    _objc_retain(param_26);
    uVar3 = puVar1[0x16];
    puVar1[0x16] = param_26;
    _objc_release(uVar3);
    _objc_retain(param_27);
    uVar3 = puVar1[0x27];
    puVar1[0x27] = param_27;
    _objc_release(uVar3);
    _objc_retain(param_28);
    uVar3 = puVar1[0x15];
    puVar1[0x15] = param_28;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar3 = puVar1[0x17];
    puVar1[0x17] = param_29;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0x2c,param_30);
    _objc_retain(param_31);
    uVar3 = puVar1[0x18];
    puVar1[0x18] = param_31;
    _objc_release(uVar3);
    _objc_retain(param_32);
    uVar3 = puVar1[9];
    puVar1[9] = param_32;
    _objc_release(uVar3);
    _objc_retain(param_33);
    uVar3 = puVar1[0x14];
    puVar1[0x14] = param_33;
    _objc_release(uVar3);
    _objc_retain(param_34);
    uVar3 = puVar1[0x19];
    puVar1[0x19] = param_34;
    _objc_release(uVar3);
    _objc_retain(param_35);
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = param_35;
    _objc_release(uVar3);
    _objc_retain(param_36);
    uVar3 = puVar1[8];
    puVar1[8] = param_36;
    _objc_release(uVar3);
    _objc_retain(param_37);
    uVar3 = puVar1[0x21];
    puVar1[0x21] = param_37;
    _objc_release(uVar3);
    _objc_retain(param_38);
    uVar3 = puVar1[0x22];
    puVar1[0x22] = param_38;
    _objc_release(uVar3);
    _objc_retain(param_39);
    uVar3 = puVar1[0x2a];
    puVar1[0x2a] = param_39;
    _objc_release(uVar3);
    _objc_retain(param_40);
    uVar3 = puVar1[0x2b];
    puVar1[0x2b] = param_40;
    _objc_release(uVar3);
    _objc_retain(param_41);
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = param_41;
    _objc_release(uVar3);
    _objc_retain(param_42);
    uVar3 = puVar1[0x23];
    puVar1[0x23] = param_42;
    _objc_release(uVar3);
    _objc_retain(param_43);
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = param_43;
    _objc_release(uVar3);
    _objc_retain(param_44);
    uVar3 = puVar1[0x24];
    puVar1[0x24] = param_44;
    _objc_release(uVar3);
    _objc_retain(param_45);
    uVar3 = puVar1[0x26];
    puVar1[0x26] = param_45;
    _objc_release(uVar3);
    _objc_retain(param_46);
    uVar3 = puVar1[0x2d];
    puVar1[0x2d] = param_46;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0x2e,param_47);
    _objc_retain(param_48);
    uVar3 = puVar1[0x2f];
    puVar1[0x2f] = param_48;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0x30,param_49);
    _objc_retain(param_50);
    uVar3 = puVar1[0x31];
    puVar1[0x31] = param_50;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0x32,param_51);
    _objc_storeWeak(puVar1 + 0x33,param_52);
    _objc_storeWeak(puVar1 + 0x34,param_53);
    _objc_retain(param_54);
    uVar3 = puVar1[0x35];
    puVar1[0x35] = param_54;
    _objc_release(uVar3);
    _objc_retain(param_55);
    uVar3 = puVar1[0x25];
    puVar1[0x25] = param_55;
    _objc_release(uVar3);
    _objc_retain(param_56);
    uVar3 = puVar1[0x36];
    puVar1[0x36] = param_56;
    _objc_release(uVar3);
    _objc_retain(param_57);
    uVar3 = puVar1[0x37];
    puVar1[0x37] = param_57;
    _objc_release(uVar3);
    _objc_retain(param_58);
    uVar3 = puVar1[0x38];
    puVar1[0x38] = param_58;
    _objc_release(uVar3);
    _objc_retain(param_59);
    uVar3 = puVar1[0x39];
    puVar1[0x39] = param_59;
    _objc_release(uVar3);
    _objc_retain(param_60);
    uVar3 = puVar1[0x3a];
    puVar1[0x3a] = param_60;
    _objc_release(uVar3);
    _objc_retain(param_61);
    uVar3 = puVar1[0x3b];
    puVar1[0x3b] = param_61;
    _objc_release(uVar3);
    _objc_retain(param_62);
    uVar3 = puVar1[0x3c];
    puVar1[0x3c] = param_62;
    _objc_release(uVar3);
    _objc_retain(param_63);
    uVar3 = puVar1[0x3d];
    puVar1[0x3d] = param_63;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d2378;
    _objc_alloc();
    func_0x00010c03e720();
    uVar3 = puVar1[0x3e];
    puVar1[0x3e] = puVar4;
    _objc_release(uVar3);
    puVar5 = puVar1 + 2;
    _objc_loadWeakRetained();
    puVar6 = puVar1;
    func_0x00010be89fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar1[0x43];
    puVar1[0x43] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar7);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[0x44];
    puVar1[0x44] = puVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106d13c5c; end: 106d13daf; -[SCGalleryOperaActionHandlerSession _getActionItemsForItem:gallerySnaps:handler:] */

void FUN_106d13c5c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) goto LAB_106d13d88;
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4ec8);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (param_3 == 0) {
LAB_106d13d28:
    lVar2 = param_4;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if ((lVar2 != 4) && (lVar2 = param_4, func_0x00010bf529e0(), lVar2 != 0)) {
      lVar2 = lVar1;
      func_0x00010bf977c0();
      if (0x13 < (int)lVar2 - 0x13U) {
        lVar2 = lVar1;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        if (lVar2 != 8) goto LAB_106d13d28;
      }
    }
    puVar3 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd80(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
  }
  (**(code **)(param_5 + 0x10))(param_5,puVar3,puVar4);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_106d13d88:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d13db0; end: 106d145f7; -[SCGalleryOperaActionHandlerSession operaViewDidSendEvent:page:params:] */

void FUN_106d13db0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf14c20(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be25180(param_1);
    goto LAB_106d13ffc;
  }
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c13f3e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be25280(param_1,param_2,param_4);
    goto LAB_106d13ffc;
  }
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c1100e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be25240(param_1,param_2,param_4);
    goto LAB_106d13ffc;
  }
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf8c140(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
LAB_106d13ee0:
    func_0x00010be25200(param_1,param_2,param_4,param_3);
    goto LAB_106d13ffc;
  }
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be251c0(param_1,param_2,param_4);
    goto LAB_106d13ffc;
  }
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c15c9e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    uVar5 = 1;
LAB_106d13f70:
    func_0x00010be252c0(param_1,param_2,param_4,uVar5,param_5,0);
    goto LAB_106d13ffc;
  }
  puVar1 = PTR_PTR_1126b5b28;
  func_0x00010bf52060(PTR_PTR_1126b5b28);
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2d30;
    func_0x00010bf52060(PTR_PTR_1126b2d30);
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126b5b28;
      func_0x00010c15b3c0(PTR_PTR_1126b5b28);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 != 0) {
        uVar5 = 0;
        goto LAB_106d13f70;
      }
      puVar1 = PTR_PTR_1126b5b28;
      func_0x00010c1052e0(PTR_PTR_1126b5b28);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 != 0) {
        func_0x00010be2ad40(param_1,param_2,param_4,0,param_5);
        goto LAB_106d13ffc;
      }
      puVar1 = PTR_PTR_1126b5b28;
      func_0x00010bf8c140(PTR_PTR_1126b5b28);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 != 0) goto LAB_106d13ee0;
      puVar1 = PTR_PTR_1126b5b28;
      func_0x00010bfa0ee0(PTR_PTR_1126b5b28);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR_PTR_1126b5b28;
        func_0x00010c27fa80(PTR_PTR_1126b5b28);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar3);
        if ((int)uVar2 != 0) {
          _objc_release(puVar3);
          goto LAB_106d14130;
        }
        puVar4 = PTR_PTR_1126b2d30;
        func_0x00010bfa1100(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar1);
        if ((uVar2 & 1) == 0) {
          puVar1 = PTR_PTR_1126b5b28;
          func_0x00010c105200(PTR_PTR_1126b5b28);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar1);
          _objc_release(puVar1);
          if ((int)uVar2 != 0) {
            func_0x00010be2ad20(param_1,param_2,param_4,0,param_5);
            goto LAB_106d13ffc;
          }
          puVar1 = PTR_PTR_1126b2d30;
          func_0x00010c272a20(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar1);
          _objc_release(puVar1);
          if ((int)uVar2 != 0) {
            func_0x00010be32220(param_1,param_2,param_4);
            goto LAB_106d13ffc;
          }
          puVar1 = PTR_PTR_1126b2d30;
          func_0x00010bf1f540(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar1);
          _objc_release(puVar1);
          if ((int)uVar2 != 0) {
            func_0x00010be268a0(param_1,param_2,param_4);
            goto LAB_106d13ffc;
          }
          puVar1 = PTR_PTR_1126b2d30;
          func_0x00010c129540(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar1);
          _objc_release(puVar1);
          if ((int)uVar2 != 0) {
            func_0x00010be2eda0(param_1,param_2,param_4);
            goto LAB_106d13ffc;
          }
          puVar1 = PTR_PTR_1126b2d30;
          func_0x00010befee40(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar1);
          _objc_release(puVar1);
          if ((int)uVar2 != 0) {
            func_0x00010be24f40(param_1,param_2,param_4);
            goto LAB_106d13ffc;
          }
          puVar1 = PTR_PTR_1126b2330;
          func_0x00010bf3df20(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar1);
          _objc_release(puVar1);
          if ((int)uVar2 == 0) {
            uVar2 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e87978);
            if ((int)uVar2 != 0) {
              func_0x00010be2b720(param_1,param_2,param_4,param_5);
              goto LAB_106d13ffc;
            }
            puVar1 = PTR_PTR_1126b2d30;
            func_0x00010bef9700(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_3;
            func_0x00010c0720c0(param_3,param_2,puVar1);
            _objc_release(puVar1);
            if ((int)uVar2 != 0) goto LAB_106d13ee0;
            puVar1 = PTR_PTR_1126b6160;
            func_0x00010bf3d9e0(PTR_PTR_1126b6160);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_3;
            func_0x00010c0720c0(param_3,param_2,puVar1);
            _objc_release(puVar1);
            if ((int)uVar2 == 0) {
              uVar2 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e878d8);
              if ((int)uVar2 == 0) {
                puVar1 = PTR_PTR_1126b2d30;
                func_0x00010bf8a5e0(PTR_PTR_1126b2d30);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0(param_3,param_2,puVar1);
                _objc_release(puVar1);
                if ((int)uVar2 == 0) {
                  uVar2 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110e87998);
                  if ((int)uVar2 == 0) {
                    puVar1 = PTR_PTR_1126b2d30;
                    func_0x00010c133ba0(PTR_PTR_1126b2d30);
                    _objc_retainAutoreleasedReturnValue();
                    uVar2 = param_3;
                    func_0x00010c0720c0(param_3,param_2,puVar1);
                    _objc_release(puVar1);
                    if ((int)uVar2 == 0) {
                      puVar1 = PTR_PTR_1126b2d30;
                      func_0x00010c117f20(PTR_PTR_1126b2d30);
                      _objc_retainAutoreleasedReturnValue();
                      uVar2 = param_3;
                      func_0x00010c0720c0(param_3,param_2,puVar1);
                      _objc_release(puVar1);
                      if ((int)uVar2 == 0) {
                        puVar1 = PTR_PTR_1126b2d30;
                        func_0x00010bfa33c0(PTR_PTR_1126b2d30);
                        _objc_retainAutoreleasedReturnValue();
                        uVar2 = param_3;
                        func_0x00010c0720c0(param_3,param_2,puVar1);
                        _objc_release(puVar1);
                        if ((int)uVar2 == 0) {
                          puVar1 = PTR_PTR_1126b2d30;
                          func_0x00010bfa3380(PTR_PTR_1126b2d30);
                          _objc_retainAutoreleasedReturnValue();
                          uVar2 = param_3;
                          func_0x00010c0720c0(param_3,param_2,puVar1);
                          _objc_release(puVar1);
                          if ((int)uVar2 == 0) {
                            puVar1 = PTR_PTR_1126b2d30;
                            func_0x00010c065620(PTR_PTR_1126b2d30);
                            _objc_retainAutoreleasedReturnValue();
                            uVar2 = param_3;
                            func_0x00010c0720c0(param_3,param_2,puVar1);
                            _objc_release(puVar1);
                            if ((int)uVar2 != 0) {
                              func_0x00010c0e9480(PTR_PTR_1126d2380);
                            }
                            goto LAB_106d13ffc;
                          }
                          uVar5 = 0;
                        }
                        else {
                          uVar5 = 1;
                        }
                        func_0x00010be29600(param_1,param_2,param_4,uVar5);
                      }
                      else {
                        func_0x00010be2e7c0(param_1,param_2,param_4);
                      }
                    }
                    else {
                      func_0x00010be2ef80(param_1,param_2,param_4);
                    }
                  }
                  else {
                    func_0x00010be32200(param_1,param_2,param_4);
                  }
                }
                else {
                  func_0x00010be251e0(param_1,param_2,param_4);
                }
              }
              else {
                func_0x00010be2c780(param_1,param_2,param_4,param_5);
              }
              goto LAB_106d13ffc;
            }
            uVar5 = *(undefined8 *)(param_1 + 0x70);
            func_0x00010c269d40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c204520();
            _objc_release(uVar5);
            param_1 = param_1 + 0x240;
            _objc_loadWeakRetained(param_1);
            func_0x00010beee640();
          }
          else {
            func_0x00010c15d960(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf3a400();
          }
          _objc_release(param_1);
          goto LAB_106d13ffc;
        }
      }
      else {
LAB_106d14130:
        _objc_release(puVar1);
      }
      func_0x00010be25260(param_1,param_2,param_4);
      goto LAB_106d13ffc;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  func_0x00010be251a0(param_1,param_2,param_4,uVar5,param_5,0);
LAB_106d13ffc:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d145f8; end: 106d1484b; -[SCGalleryOperaActionHandlerSession presentShareNotificationForPage:params:] */

void FUN_106d145f8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x200);
  func_0x00010c1122c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) goto LAB_106d147e8;
  _objc_initWeak(auStack_68,param_1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106d1484c;
  puStack_88 = &UNK_110848218;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  puStack_80 = param_3;
  _objc_retain(param_4);
  ppuVar3 = &puStack_a0;
  uStack_78 = param_4;
  _objc_retainBlock();
  if (param_3 == (undefined *)0x0) {
LAB_106d14734:
    puVar4 = PTR_PTR_1126ae720;
    puVar6 = auStack_e0;
    _objc_copyWeak(puVar6,auStack_68);
    func_0x00010bf11fe0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54840();
    _objc_release(uVar5);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x000108faa928();
    if (iVar1 == 0) goto LAB_106d14734;
    puStack_d8 = puVar4;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106d14888;
    puStack_c0 = &UNK_110975df8;
    puVar6 = auStack_a8;
    _objc_copyWeak(puVar6,auStack_68);
    _objc_retain(param_3);
    puStack_b8 = param_3;
    _objc_retain(ppuVar3);
    ppuStack_b0 = ppuVar3;
    func_0x00010bdcff80(param_1);
    _objc_release(ppuStack_b0);
    puVar4 = puStack_b8;
  }
  _objc_release(puVar4);
  _objc_destroyWeak(puVar6);
  _objc_release(ppuVar3);
  _objc_release(uStack_78);
  _objc_release(puStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
LAB_106d147e8:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1484c; end: 106d14887;  */

void FUN_106d1484c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be251a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d14888; end: 106d149d7;  */

void FUN_106d14888(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bdd69e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    _objc_retain(lVar2);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x128);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54840();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106d149d8; end: 106d14a63;  */

void FUN_106d149d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9bd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d14a64; end: 106d14d5b; -[SCGalleryOperaActionHandlerSession _buildScreenshotShareSheetConfigForOperaSnap:page:] */

void FUN_106d14a64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c15d960();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_106d14d5c;
    uStack_80 = 0x106d14d6c;
    puStack_78 = PTR____NSArray0__struct_11034ab48;
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_106d14d5c;
    uStack_b0 = 0x106d14d6c;
    uStack_a8 = 0;
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x3032000000;
    pcStack_e8 = FUN_106d14d5c;
    uStack_e0 = 0x106d14d6c;
    uStack_d8 = 0;
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_106d14d5c;
    uStack_110 = 0x106d14d6c;
    uStack_108 = 0;
    puStack_148 = &uStack_150;
    uStack_150 = 0;
    uStack_140 = 0x2020000000;
    uStack_138 = 0;
    _objc_retain(param_4);
    func_0x00010c0bfe60(param_3);
    uVar1 = puStack_98[5];
    func_0x00010b5f8c3c(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfc0040(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_150,8);
    __Block_object_dispose(&uStack_130,8);
    _objc_release(uStack_108);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(uStack_d8);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(puStack_78);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106d14d5c; end: 106d14d73;  */

void FUN_106d14d5c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106d14d74; end: 106d14f97;  */

void FUN_106d14d74(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x23;
  long lVar11;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  long *plStack_158;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_2;
  lStack_40 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar1;
  _objc_release(uVar7);
  uVar7 = param_3;
  func_0x00010c07b240();
  _objc_release(param_3);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar7;
  lVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_48 = 0x106d14e48;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = lVar10;
  uStack_70 = uVar7;
  lStack_68 = param_1;
  lStack_60 = param_2;
  uStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(lVar10);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_80 = lVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(lVar8 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar1;
  _objc_release(uVar7);
  plVar3 = &lStack_88;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
  uVar7 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar1;
  _objc_release(uVar7);
  lVar9 = *(long *)(lVar8 + 0x20);
  FUN_106d4ac3c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    lVar11 = lVar10;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    plVar3 = &lStack_90;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_98 = lVar11;
    lStack_90 = lVar9;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar1;
    _objc_release(uVar7);
    _objc_release(lVar11);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    plVar2 = &lStack_100;
    pcStack_a8 = FUN_106d14f98;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar9 = lVar4;
    plVar5 = plVar3;
    ppuStack_b0 = &puStack_50;
    _objc_retain(lVar4);
    _objc_retain(plVar3);
    lVar8 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (lVar8 != 0) {
      unaff_x23 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_100 = unaff_x23;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      plVar5 = plVar2;
    }
    lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 8);
    _objc_retain(puVar1);
    uVar7 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined **)(lVar11 + 0x28) = puVar1;
    _objc_release(uVar7);
    if (lVar8 != 0) {
      _objc_release(puVar1);
      _objc_release(unaff_x23);
    }
    _objc_release(lVar8);
    plVar2 = plVar3;
    func_0x00010c07b240();
    _objc_release(plVar3);
    *(char *)(*(long *)(*(long *)(lVar10 + 0x28) + 8) + 0x18) = (char)plVar2;
    lVar8 = lVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      plVar6 = &lStack_140;
      pcStack_108 = FUN_106d150d4;
      lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_140 = lVar9;
      plStack_130 = plVar2;
      plStack_128 = plVar3;
      lStack_120 = lVar10;
      lStack_118 = lVar4;
      pppuStack_110 = &ppuStack_b0;
      _objc_retain(plVar5);
      _objc_retain(lVar9);
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)(*(long *)(lVar8 + 0x20) + 8);
      uVar7 = *(undefined8 *)(lVar10 + 0x28);
      *(undefined **)(lVar10 + 0x28) = puVar1;
      _objc_release(uVar7);
      plVar3 = plVar5;
      func_0x00010c07b240();
      _objc_release(plVar5);
      *(char *)(*(long *)(*(long *)(lVar8 + 0x28) + 8) + 0x18) = (char)plVar3;
      lVar10 = lVar9;
      _objc_release(lVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
        ___stack_chk_fail();
        pcStack_148 = FUN_106d151a8;
        plStack_170 = plVar3;
        lStack_168 = lVar8;
        lStack_160 = lVar9;
        plStack_158 = plVar5;
        pppuStack_150 = &pppuStack_110;
        _objc_retain(plVar6);
        _objc_initWeak(auStack_178,lVar10);
        _objc_copyWeak(auStack_180,auStack_178);
        func_0x00010bdcff80(lVar10);
        _objc_destroyWeak(auStack_180);
        _objc_destroyWeak(auStack_178);
        _objc_release(plVar6);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106d14f98; end: 106d150d3;  */

void FUN_106d14f98(long param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  long unaff_x23;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    unaff_x23 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = unaff_x23;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)plVar7;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(puVar2);
  uVar3 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar2;
  _objc_release(uVar3);
  if (lVar1 != 0) {
    _objc_release(puVar2);
    _objc_release(unaff_x23);
  }
  _objc_release(lVar1);
  puVar4 = param_3;
  func_0x00010c07b240();
  _objc_release(param_3);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)puVar4;
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    plVar7 = &lStack_a0;
    pcStack_68 = FUN_106d150d4;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_a0 = lVar5;
    puStack_90 = puVar4;
    puStack_88 = param_3;
    lStack_80 = param_1;
    lStack_78 = param_2;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    _objc_retain(lVar5);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(lVar1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar4 = puVar6;
    func_0x00010c07b240();
    _objc_release(puVar6);
    *(char *)(*(long *)(*(long *)(lVar1 + 0x28) + 8) + 0x18) = (char)puVar4;
    lVar8 = lVar5;
    _objc_release(lVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      pcStack_a8 = FUN_106d151a8;
      puStack_d0 = puVar4;
      lStack_c8 = lVar1;
      lStack_c0 = lVar5;
      puStack_b8 = puVar6;
      ppuStack_b0 = &puStack_70;
      _objc_retain(plVar7);
      _objc_initWeak(auStack_d8,lVar8);
      _objc_copyWeak(auStack_e0,auStack_d8);
      func_0x00010bdcff80(lVar8);
      _objc_destroyWeak(auStack_e0);
      _objc_destroyWeak(auStack_d8);
      _objc_release(plVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 106d150d4; end: 106d151a7;  */

void FUN_106d150d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puVar3 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c07b240();
  _objc_release(param_3);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar4;
  uVar2 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_106d151a8;
  uStack_70 = uVar4;
  lStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_initWeak(auStack_78,uVar2);
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bdcff80(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar3);
  return;
}



/* Entry: 106d151a8; end: 106d1526b; -[SCGalleryOperaActionHandlerSession _handlePromoteSnapWithPage:] */

void FUN_106d151a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bdcff80(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1526c; end: 106d152b3;  */

void FUN_106d1526c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d4e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d152b4; end: 106d1534f; -[SCGalleryOperaActionHandlerSession _openPromoteFlowWithSnap:] */

void FUN_106d152b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106d15350;
  puStack_20 = &UNK_110975ee8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106d15360;
  puStack_48 = &UNK_1108fdf00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x106d15370;
  puStack_70 = &UNK_110975ee8;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bfe60(param_3,param_2,&puStack_38,&puStack_60,&PTR___NSConcreteGlobalBlock_110975f38
                      ,&puStack_88);
  return;
}



/* Entry: 106d15350; end: 106d1537f;  */

void FUN_106d15350(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be47470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__launchAdCreationForGallerySnap__11256f6b8,
             param_2,param_3);
  return;
}



/* Entry: 106d15380; end: 106d15543; -[SCGalleryOperaActionHandlerSession _launchAdCreationForPhAsset:] */

void FUN_106d15380(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  uVar7 = *(undefined8 *)(param_1 + 0x1b0);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0fce40(param_3);
  dVar8 = (double)uVar1;
  uVar1 = param_3;
  func_0x00010c0fcaa0(param_3);
  puVar3 = PTR_PTR_1126c6618;
  uVar2 = param_3;
  func_0x00010c09da80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8f40(dVar8,(double)uVar1,puVar3,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c6608;
  _objc_alloc(PTR_PTR_1126c6608);
  uVar1 = param_3;
  func_0x00010c09da80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010c0200c0(puVar4,param_2,uVar1,uVar2 != 1);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126c6610;
  _objc_alloc(PTR_PTR_1126c6610);
  uVar1 = param_3;
  func_0x00010c0fce40(param_3);
  uVar2 = param_3;
  func_0x00010c0fcaa0(param_3);
  func_0x00010bf8b160(param_3);
  dVar9 = dVar8 * 1000.0;
  uVar6 = param_3;
  func_0x00010bf5a700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c26f320(uVar6);
  func_0x00010c0200e0((double)uVar1,(double)uVar2,dVar9,dVar8 * 1000.0,puVar5,param_2,puVar4);
  _objc_release(uVar6);
  func_0x00010c2144a0(puVar5,param_2,puVar3);
  func_0x00010c08b460(uVar7,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 106d15544; end: 106d157d7; -[SCGalleryOperaActionHandlerSession _launchAdCreationForGallerySnap:entryInfo:] */

void FUN_106d15544(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar12 = (double)(long)((param_3 + 1.0) / 99.0);
  dVar13 = 0.0;
  if (0.0 <= dVar12) {
    dVar13 = dVar12;
  }
  uVar9 = (ulong)dVar13;
  if (uVar9 < 5) {
    uVar9 = 4;
  }
  dVar13 = (param_3 - (double)(uVar9 - 1)) / (double)uVar9;
  uVar9 = uVar1;
  FUN_106d7a74c(dVar13,dVar13 * 1.6666666666666667);
  fVar11 = SUB84(dVar13,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = param_6;
  func_0x00010c26e480();
  puVar4 = PTR_PTR_1126c6628;
  _objc_alloc(PTR_PTR_1126c6628);
  uVar8 = param_7;
  func_0x00010bf97200(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar5 = uVar9;
  func_0x00010beec820(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar6 = param_6;
  func_0x00010bf59960(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f260(puVar2,param_5,uVar6);
  uVar7 = param_6;
  func_0x00010b5fa088();
  uVar10 = 4;
  if ((int)uVar3 != 2) {
    uVar10 = 5;
  }
  uVar3 = param_6;
  func_0x00010c246620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010b5fa33c();
  func_0x00010bf8b160(param_6);
  func_0x00010c010300((double)(long)puVar2,(double)(fVar11 * 1000.0),puVar4,param_5,uVar8,uVar1,
                      uVar5,uVar10,0,0,uVar7 < 0xd & (byte)(0x1566 >> (ulong)((uint)uVar7 & 0x1f)));
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar8);
  func_0x00010c103ce0(PTR_PTR_1126c6678,param_5,param_6,puVar4,*(undefined8 *)(param_4 + 0xf0));
  _objc_release(param_6);
  uVar8 = *(undefined8 *)(param_4 + 0x1b0);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b480();
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d157d8; end: 106d158df; -[SCGalleryOperaActionHandlerSession _screenshotSharingConfigurationWithShareSheetConfig:] */

void FUN_106d157d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b43b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03b1e0();
  puVar2 = PTR_PTR_1126b43b8;
  _objc_alloc(PTR_PTR_1126b43b8);
  puVar3 = puVar2;
  func_0x000106d4daf4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0538c0(puVar2,param_2,puVar3,0,0,param_3,puVar1,uVar4,2,0x51,4,0x11,5,5);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d158e0; end: 106d159ab; -[SCGalleryOperaActionHandlerSession _handleFeaturedStoryQualityLabelForPage:isGoodMatch:] */

void FUN_106d158e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  func_0x00010bdcff80(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d159ac; end: 106d159ff;  */

void FUN_106d159ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be159c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d15a00; end: 106d15a8b; -[SCGalleryOperaActionHandlerSession _fileQualityLabelForSnap:isGoodMatch:] */

void FUN_106d15a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106d15a8c;
  puStack_28 = &UNK_110975f88;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106d15aac;
  puStack_58 = &UNK_110975f88;
  uStack_50 = param_1;
  uStack_48 = param_4;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0bfe60(param_3,param_2,&puStack_40,&PTR___NSConcreteGlobalBlock_110975fb8,
                      &PTR___NSConcreteGlobalBlock_110975fd8,&puStack_70);
  return;
}


