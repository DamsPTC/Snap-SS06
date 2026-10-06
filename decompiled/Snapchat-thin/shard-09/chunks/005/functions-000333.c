/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e30248; end: 106e3027f;  */

void FUN_106e30248(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beb6160(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e30280; end: 106e302c3; -[SCGalleryBaseStorySnapCell _cancelMiniThumbnailBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e30280(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f4f0;
  if (*(long *)(param_1 + lVar2) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e302c4; end: 106e30493; -[SCGalleryBaseStorySnapCell _startLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e302c4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11275f4f4;
  lVar1 = *(long *)(param_1 + lVar11);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar10 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar2;
    _objc_release(uVar10);
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar11));
    lVar1 = (long)_DAT_11275f4c0;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010bf348e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010bf34860(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + lVar11);
  }
  func_0x00010c24dbc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_11275f4f4;
  func_0x00010c2558c0(*(undefined8 *)(lVar1 + lVar9));
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + lVar9),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 106e30494; end: 106e304c3; -[SCGalleryBaseStorySnapCell _stopLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e30494(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275f4f4;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 106e304c4; end: 106e3053b; -[SCGalleryBaseStorySnapCell _shouldShowLoadingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e304c4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11275f4e0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06ece0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    return;
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec31b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopLoading_11258e610);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec0410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLoading_11258daa8);
  return;
}



/* Entry: 106e3053c; end: 106e307b3; -[SCGalleryBaseStorySnapCell _addIncompatibleIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3053c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11275f4dc;
  if (*(long *)(param_1 + lVar14) == 0) {
    puVar13 = PTR_PTR_1126cfb28;
    _objc_alloc();
    func_0x00010c01afa0();
    uVar12 = *(undefined8 *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar13;
    _objc_release(uVar12);
  }
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = *(long *)(param_1 + lVar14);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar15;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf493a0(lVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  lStack_88 = lVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49420(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = (long)_DAT_11275f4c0;
  lVar14 = *(long *)(lVar1 + lVar15);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar13 = PTR_PTR_1126cfb18;
  if (lVar14 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar12 = *(undefined8 *)(lVar1 + lVar15);
    func_0x00010bfe6ac0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar1 + _DAT_11275f4e0;
    _objc_loadWeakRetained(lVar1);
    lVar14 = lVar1;
    func_0x00010c113000();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c0ed100();
    func_0x00010c141a40(puVar13,param_2,uVar12,(long)(int)lVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar1);
    _objc_release(uVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106e307b4; end: 106e30887; -[SCGalleryBaseStorySnapCell transitioningPosterFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e307b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11275f4c0;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126cfb18;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfe6ac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_11275f4e0;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c113000();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0ed100();
    func_0x00010c141a40(puVar3,param_2,uVar2,(long)(int)lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e30888; end: 106e30897; -[SCGalleryBaseStorySnapCell transitioningImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e30888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f4c0),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106e30898; end: 106e308c7; -[SCGalleryBaseStorySnapCell transitioningExpandingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e30898(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f4c0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e308c8; end: 106e308d7; -[SCGalleryBaseStorySnapCell setTransitioningInitialImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e308c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f4c0),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 106e308d8; end: 106e308db; -[SCGalleryBaseStorySnapCell syncStatusGenerator:didUpdateStatus:] */

void FUN_106e308d8(void)

{
  return;
}



/* Entry: 106e308dc; end: 106e309e3; -[SCGalleryBaseStorySnapCell setSelected:selectOverlayImage:snapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e308dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_11275f4e0;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06ece0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    func_0x00010c1fadc0(*(undefined8 *)(param_1 + _DAT_11275f4c8),param_2,param_3);
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained();
    lVar1 = lVar4;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar2 == 2) {
      uVar5 = 0;
      if ((int)param_3 == 0) {
        uVar5 = 0x3fe999999999999a;
      }
      uVar3 = *(undefined8 *)(param_1 + _DAT_11275f4d8);
      func_0x00010c2666e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 106e309e4; end: 106e309f3; -[SCGalleryBaseStorySnapCell setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e309e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1facd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f4c8),PTR_s_setSelectMode__11265c558);
  return;
}



/* Entry: 106e309f4; end: 106e309f7; -[SCGalleryBaseStorySnapCell setSelectionOrderNumber:orderNumbersBySnapId:] */

void FUN_106e309f4(void)

{
  return;
}



/* Entry: 106e309f8; end: 106e309fb; -[SCGalleryBaseStorySnapCell animateLongTapForTouchLocation:reverse:] */

void FUN_106e309f8(void)

{
  return;
}



/* Entry: 106e309fc; end: 106e30a03; -[SCGalleryBaseStorySnapCell interactionMode] */

undefined8 FUN_106e309fc(void)

{
  return 0;
}



/* Entry: 106e30a04; end: 106e30a13; -[SCGalleryBaseStorySnapCell disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e30a04(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f4b4);
}



/* Entry: 106e30a14; end: 106e30a23; -[SCGalleryBaseStorySnapCell setDisableMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e30a14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275f4b4) = param_3;
  return;
}



/* Entry: 106e30a24; end: 106e30a33; -[SCGalleryBaseStorySnapCell imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e30a24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f4c0);
}



/* Entry: 106e30a34; end: 106e30a53; -[SCGalleryBaseStorySnapCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e30a34(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275f4e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e30a54; end: 106e30a63; -[SCGalleryBaseStorySnapCell isActionMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e30a54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f4b8);
}



/* Entry: 106e30a64; end: 106e30a73; -[SCGalleryBaseStorySnapCell setIsActionMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e30a64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275f4b8) = param_3;
  return;
}



/* Entry: 106e30a74; end: 106e30a83; -[SCGalleryBaseStorySnapCell syncStatusGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e30a74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f4d8);
}



/* Entry: 106e30a84; end: 106e30ac3; -[SCGalleryBaseStorySnapCell setSyncStatusGenerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e30a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f4d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e30ac4; end: 106e30ad3; -[SCGalleryBaseStorySnapCell containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e30ac4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f4bc);
}



/* Entry: 106e30ad4; end: 106e30ae3; -[SCGalleryBaseStorySnapCell favoriteIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e30ad4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f4cc);
}



/* Entry: 106e30ae4; end: 106e30bef; -[SCGalleryBaseStorySnapCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e30ae4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f4cc,0);
  _objc_storeStrong(param_1 + _DAT_11275f4bc,0);
  _objc_storeStrong(param_1 + _DAT_11275f4d8,0);
  _objc_destroyWeak(param_1 + _DAT_11275f4e0);
  _objc_storeStrong(param_1 + _DAT_11275f4c0,0);
  _objc_storeStrong(param_1 + _DAT_11275f4ec,0);
  _objc_storeStrong(param_1 + _DAT_11275f4e4,0);
  _objc_storeStrong(param_1 + _DAT_11275f4e8,0);
  _objc_storeStrong(param_1 + _DAT_11275f4c4,0);
  _objc_storeStrong(param_1 + _DAT_11275f4dc,0);
  _objc_storeStrong(param_1 + _DAT_11275f4f0,0);
  _objc_storeStrong(param_1 + _DAT_11275f4f4,0);
  _objc_storeStrong(param_1 + _DAT_11275f4c8,0);
  _objc_storeStrong(param_1 + _DAT_11275f4d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f4d4,0);
  return;
}



/* Entry: 106e30bf0; end: 106e30e1b; -[SCGallerySnapsCollectionViewFlowLayout layoutAttributesForElementsInRect:] */

void FUN_106e30bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uStack_90;
  undefined *puStack_88;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  uVar2 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126cfb90;
  _objc_opt_class(PTR_PTR_1126cfb90);
  uVar7 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar7 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (uVar2 != 0) {
    uVar7 = uVar3;
    func_0x00010bf4b2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar7);
    if (uVar4 != 0) {
      func_0x00010bf4b2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010bf20c00(uVar7);
      goto LAB_106e30d40;
    }
  }
  uVar7 = 0;
LAB_106e30d40:
  puStack_88 = PTR_PTR_1126f7140;
  puVar5 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar5,
                      PTR_s_layoutAttributesForElementsInRec_112600c60);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar7);
  puVar6 = puVar5;
  func_0x00010bfaea20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106e30e1c; end: 106e30f2f;  */

bool FUN_106e30e1c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  _objc_retain(param_6);
  func_0x00010bf40120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_6);
  _objc_release(param_6);
  func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar2);
  _objc_release(uVar2);
  dVar4 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar3 = *(double *)(param_5 + 0x30);
  _CGRectGetMaxY(dVar3,*(undefined8 *)(param_5 + 0x38),*(undefined8 *)(param_5 + 0x40),
                 *(undefined8 *)(param_5 + 0x48));
  if (dVar3 <= dVar4) {
    bVar1 = false;
  }
  else {
    _CGRectGetMaxY(param_1,param_2,param_3,param_4);
    dVar4 = *(double *)(param_5 + 0x30);
    _CGRectGetMinY(dVar4,*(undefined8 *)(param_5 + 0x38),*(undefined8 *)(param_5 + 0x40),
                   *(undefined8 *)(param_5 + 0x48));
    bVar1 = dVar4 < param_1;
  }
  return bVar1;
}



/* Entry: 106e30f30; end: 106e30fb3; -[SCMemoriesSubscreenStoryHeaderCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106e30f30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7148;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275f4f8);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11275f4f8) = puVar2;
    _objc_release(uVar3);
    func_0x00010bea9060(puVar1);
    func_0x00010bea9be0(puVar1);
    func_0x00010bea9560(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e30fb4; end: 106e31257; -[SCMemoriesSubscreenStoryHeaderCell _setUpContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e30fb4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar19 = (long)_DAT_11275f4fc;
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar19));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar13);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar20);
  _objc_release(uVar4);
  _objc_release(uVar16);
  _objc_release(lVar17);
  _objc_release(uVar3);
  _objc_release(lVar12);
  _objc_release(lVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar15 = (long)_DAT_11275f500;
  uVar16 = *(undefined8 *)(lVar2 + lVar15);
  *(undefined **)(lVar2 + lVar15) = puVar1;
  _objc_release(uVar16);
  lVar18 = (long)_DAT_11275f4fc;
  func_0x00010befbb60(*(undefined8 *)(lVar2 + lVar18));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010c274200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf49420(0x4052000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010bf49420(0x4052000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar16);
  _objc_release(uVar6);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar18 = (long)_DAT_11275f504;
  uVar16 = *(undefined8 *)(lVar2 + lVar18);
  *(undefined **)(lVar2 + lVar18) = puVar1;
  _objc_release(uVar16);
  func_0x00010c1c8340(0,*(undefined8 *)(lVar2 + lVar18));
  func_0x00010c18b5e0(*(undefined8 *)(lVar2 + lVar18));
  func_0x00010bef9040(*(undefined8 *)(lVar2 + lVar15));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4052000000000000,0x4052000000000000);
  lVar20 = (long)_DAT_11275f508;
  uVar16 = *(undefined8 *)(lVar2 + lVar20);
  *(undefined **)(lVar2 + lVar20) = puVar1;
  _objc_release(uVar16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar2 + lVar20));
  _objc_release(puVar1);
  func_0x00010c182220(*(undefined8 *)(lVar2 + lVar20));
  func_0x00010c17d4c0(*(undefined8 *)(lVar2 + lVar20));
  uVar16 = *(undefined8 *)(lVar2 + lVar20);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4042000000000000);
  _objc_release(uVar16);
  func_0x00010befbb60(*(undefined8 *)(lVar2 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar20));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = *(long *)(lVar2 + lVar20);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + lVar20);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + lVar20);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar2 + lVar15);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar16);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(lVar18);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar11,uVar21,uVar22,uVar23);
  lVar18 = (long)_DAT_11275f50c;
  uVar16 = *(undefined8 *)(lVar12 + lVar18);
  *(undefined **)(lVar12 + lVar18) = puVar1;
  _objc_release(uVar16);
  func_0x00010c1cfce0(*(undefined8 *)(lVar12 + lVar18));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar12 + lVar18));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar12 + lVar18));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar12 + lVar18));
  lVar2 = (long)_DAT_11275f4fc;
  func_0x00010befbb60(*(undefined8 *)(lVar12 + lVar2));
  func_0x00010c219b60(*(undefined8 *)(lVar12 + lVar18));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(lVar12 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar12 + _DAT_11275f500);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar12 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar12 + lVar2);
  func_0x00010c08de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar12 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar12 + lVar2);
  func_0x00010c2793a0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar11,uVar21,uVar22,uVar23);
  lVar15 = (long)_DAT_11275f510;
  uVar16 = *(undefined8 *)(lVar12 + lVar15);
  *(undefined **)(lVar12 + lVar15) = puVar1;
  _objc_release(uVar16);
  func_0x00010c1cfce0(*(undefined8 *)(lVar12 + lVar15));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar12 + lVar15));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar12 + lVar15));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar12 + lVar15));
  func_0x00010befbb60(*(undefined8 *)(lVar12 + lVar2));
  func_0x00010c219b60(*(undefined8 *)(lVar12 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = *(long *)(lVar12 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar12 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar12 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar12 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar12 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar12 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 3;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar7;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar18);
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  uVar16 = *(undefined8 *)(lVar17 + _DAT_11275f514);
  *(undefined **)(lVar17 + _DAT_11275f514) = puVar14;
  _objc_retain(uVar9);
  _objc_release(uVar16);
  _objc_storeWeak(lVar17 + _DAT_11275f518,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 106e31258; end: 106e3176f; -[SCMemoriesSubscreenStoryHeaderCell _setUpThumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e31258(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar18 = (long)_DAT_11275f500;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar15);
  lVar16 = (long)_DAT_11275f4fc;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010bf49420(0x4052000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf49420(0x4052000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar16 = (long)_DAT_11275f504;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c1c8340(0,*(undefined8 *)(param_1 + lVar16));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar16));
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4052000000000000,0x4052000000000000);
  lVar17 = (long)_DAT_11275f508;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar17));
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4042000000000000);
  _objc_release(uVar15);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar10 = *(long *)(param_1 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar15);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar16);
  _objc_release(uVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar20,uVar21,uVar22);
  lVar16 = (long)_DAT_11275f50c;
  uVar15 = *(undefined8 *)(lVar10 + lVar16);
  *(undefined **)(lVar10 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c1cfce0(*(undefined8 *)(lVar10 + lVar16));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar10 + lVar16));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar10 + lVar16));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar10 + lVar16));
  lVar18 = (long)_DAT_11275f4fc;
  func_0x00010befbb60(*(undefined8 *)(lVar10 + lVar18));
  func_0x00010c219b60(*(undefined8 *)(lVar10 + lVar16));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(lVar10 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar10 + _DAT_11275f500);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar11;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar10 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar10 + lVar18);
  func_0x00010c08de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar10 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar10 + lVar18);
  func_0x00010c2793a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar11);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar8,uVar20,uVar21,uVar22);
  lVar19 = (long)_DAT_11275f510;
  uVar15 = *(undefined8 *)(lVar10 + lVar19);
  *(undefined **)(lVar10 + lVar19) = puVar1;
  _objc_release(uVar15);
  func_0x00010c1cfce0(*(undefined8 *)(lVar10 + lVar19));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar10 + lVar19));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar10 + lVar19));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar10 + lVar19));
  func_0x00010befbb60(*(undefined8 *)(lVar10 + lVar18));
  func_0x00010c219b60(*(undefined8 *)(lVar10 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = *(long *)(lVar10 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar10 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar14;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar10 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar10 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar10 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar10 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 3;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar9;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(lVar16);
  _objc_release(uVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  uVar15 = *(undefined8 *)(lVar14 + _DAT_11275f514);
  *(undefined **)(lVar14 + _DAT_11275f514) = puVar13;
  _objc_retain(uVar5);
  _objc_release(uVar15);
  _objc_storeWeak(lVar14 + _DAT_11275f518,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106e31770; end: 106e31c5b; -[SCMemoriesSubscreenStoryHeaderCell _setUpLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e31770(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar18 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
  lVar16 = (long)_DAT_11275f50c;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar14);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar16));
  lVar15 = (long)_DAT_11275f4fc;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275f500);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
  lVar17 = (long)_DAT_11275f510;
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar14);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar17));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar10 = *(long *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar10;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 3;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar9);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar16);
  _objc_release(uVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  uVar14 = *(undefined8 *)(lVar10 + _DAT_11275f514);
  *(undefined **)(lVar10 + _DAT_11275f514) = puVar12;
  _objc_retain(uVar7);
  _objc_release(uVar14);
  _objc_storeWeak(lVar10 + _DAT_11275f518,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 106e31c5c; end: 106e31ccf; -[SCMemoriesSubscreenStoryHeaderCell setThumbnailGenerator:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e31c5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f514);
  *(undefined8 *)(param_1 + _DAT_11275f514) = param_3;
  _objc_retain(param_4);
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + _DAT_11275f518,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e31cd0; end: 106e31d1f; -[SCMemoriesSubscreenStoryHeaderCell isThumbnailImageViewOnScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e31cd0(long param_1)

{
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11275f508));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectIntersectsRect_1103475c8)();
  return;
}



/* Entry: 106e31d20; end: 106e31d7b; -[SCMemoriesSubscreenStoryHeaderCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e31d20(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dbc0(*(undefined8 *)(param_1 + _DAT_11275f514),param_2,
                      *(undefined8 *)(param_1 + _DAT_11275f4f8));
  puStack_28 = PTR_PTR_1126f7148;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106e31d7c; end: 106e31e17; -[SCMemoriesSubscreenStoryHeaderCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e31d7c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f7148;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010bf2dbc0(*(undefined8 *)(param_1 + _DAT_11275f514));
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275f50c));
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275f510));
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275f508));
  if (*(long *)(param_1 + _DAT_11275f51c) != 0) {
    func_0x00010c069f60();
  }
  return;
}



/* Entry: 106e31e18; end: 106e31e23; +[SCMemoriesSubscreenStoryHeaderCell sizeWithViewModel:constrainedToSize:] */

void FUN_106e31e18(void)

{
  return;
}



/* Entry: 106e31e24; end: 106e31f5f; -[SCMemoriesSubscreenStoryHeaderCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e31e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11275f520;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126d2360;
  uVar5 = *(ulong *)(param_1 + lVar6);
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
  func_0x00010c2711a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275f50c));
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c260dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275f510));
  _objc_release(uVar3);
  func_0x00010bfe5b00(uVar1);
  func_0x00010bed3d00(param_1);
  uVar3 = uVar1;
  func_0x00010c26e2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be91a20(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e31f60; end: 106e31fab; -[SCMemoriesSubscreenStoryHeaderCell _updateBadgeIconWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e31f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f51c;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    func_0x00010bdf4ac0(param_1,param_2,param_3);
    lVar1 = *(long *)(param_1 + lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c138d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_resetImageForIconType__11262bd60,param_3);
  return;
}



/* Entry: 106e31fac; end: 106e32283; -[SCMemoriesSubscreenStoryHeaderCell _createThumbnailBadgeIconWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e31fac(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined *param_5,undefined8 param_6,long param_7)

{
  double dVar1;
  undefined *puVar2;
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
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x0;
  puVar12 = param_5;
  if (param_7 != 0) {
    puVar2 = PTR_PTR_1126cfb40;
    _objc_alloc();
    func_0x00010c022660(0x4038000000000000);
    lVar18 = (long)_DAT_11275f51c;
    uVar16 = *(undefined8 *)(param_5 + lVar18);
    *(undefined **)(param_5 + lVar18) = puVar2;
    _objc_release(uVar16);
    lVar17 = (long)_DAT_11275f500;
    func_0x00010befbb60(*(undefined8 *)(param_5 + lVar17));
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar18));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_5 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010bf1ff80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + lVar18);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_5 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar16);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar16 = *(undefined8 *)(param_5 + lVar18);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4028000000000000);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_5 + lVar18);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.5;
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(uVar16);
    puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar16 = *(undefined8 *)(param_5 + lVar18);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar16);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c1a9f00(*(undefined8 *)(puVar12 + _DAT_11275f508));
    }
    else {
      func_0x00010bfb68e0();
      puVar13 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      param_3 = param_3 * param_1;
      puVar14 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar13 = puVar2;
      func_0x00010c0ed100();
      dVar19 = param_3;
      dVar1 = param_4 * param_1;
      if (((long)(int)puVar13 - 2U & 0xfffffffffffffffa) != 0) {
        dVar19 = param_4 * param_1;
        dVar1 = param_3;
      }
      _objc_initWeak(auStack_118,puVar12);
      uVar16 = *(undefined8 *)(puVar12 + _DAT_11275f514);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_120,auStack_118);
      _objc_retain(puVar2);
      func_0x00010c136ae0(dVar1,dVar19,uVar16);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_120);
      _objc_destroyWeak(auStack_118);
    }
    _objc_release(puVar2);
    return;
  }
  return;
}



/* Entry: 106e32284; end: 106e3244f; -[SCMemoriesSubscreenStoryHeaderCell _requestThumbnailForSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e32284(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_7);
  if (param_7 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_5 + _DAT_11275f508));
  }
  else {
    func_0x00010bfb68e0();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_3 = param_3 * param_1;
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar4 = param_7;
    func_0x00010c0ed100();
    dVar6 = param_3;
    dVar1 = param_4 * param_1;
    if (((long)(int)lVar4 - 2U & 0xfffffffffffffffa) != 0) {
      dVar6 = param_4 * param_1;
      dVar1 = param_3;
    }
    _objc_initWeak(auStack_68,param_5);
    uVar5 = *(undefined8 *)(param_5 + _DAT_11275f514);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_7);
    func_0x00010c136ae0(dVar1,dVar6,uVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 106e32450; end: 106e324fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e32450(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((param_2 != 0) && ((int)uVar3 != 0)) {
      func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_11275f508));
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e324fc; end: 106e3250b; -[SCMemoriesSubscreenStoryHeaderCell transitioningPosterFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e324fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f508),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106e3250c; end: 106e3251b; -[SCMemoriesSubscreenStoryHeaderCell transitioningImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3250c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f508),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106e3251c; end: 106e3254b; -[SCMemoriesSubscreenStoryHeaderCell transitioningExpandingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3251c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f508);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e3254c; end: 106e3255b; -[SCMemoriesSubscreenStoryHeaderCell setTransitioningInitialImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3254c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f508),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 106e3255c; end: 106e3267f; -[SCMemoriesSubscreenStoryHeaderCell _handleImageViewLongPressGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3255c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 3) {
    lVar1 = param_3 + _DAT_11275f518;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c25fc00();
  }
  else {
    if (lVar1 == 2) {
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5,param_4,lVar1);
      _objc_release(lVar1);
      param_1 = param_1 - *(double *)(param_3 + _DAT_11275f524);
      param_2 = param_2 - ((double *)(param_3 + _DAT_11275f524))[1];
      if (1.0 < SQRT(param_2 * param_2 + param_1 * param_1)) {
        func_0x00010c14c8a0(param_5);
      }
      goto LAB_106e32668;
    }
    if (lVar1 != 1) goto LAB_106e32668;
    lVar2 = (long)_DAT_11275f524;
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5,param_4,lVar1);
    *(double *)(param_3 + lVar2) = param_1;
    ((double *)(param_3 + lVar2))[1] = param_2;
  }
  _objc_release(lVar1);
LAB_106e32668:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106e32680; end: 106e3268f; -[SCMemoriesSubscreenStoryHeaderCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e32680(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f520);
}



/* Entry: 106e32690; end: 106e3275b; -[SCMemoriesSubscreenStoryHeaderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e32690(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f520,0);
  _objc_storeStrong(param_1 + _DAT_11275f504,0);
  _objc_destroyWeak(param_1 + _DAT_11275f518);
  _objc_storeStrong(param_1 + _DAT_11275f514,0);
  _objc_storeStrong(param_1 + _DAT_11275f4f8,0);
  _objc_storeStrong(param_1 + _DAT_11275f51c,0);
  _objc_storeStrong(param_1 + _DAT_11275f510,0);
  _objc_storeStrong(param_1 + _DAT_11275f50c,0);
  _objc_storeStrong(param_1 + _DAT_11275f508,0);
  _objc_storeStrong(param_1 + _DAT_11275f500,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f4fc,0);
  return;
}



/* Entry: 106e3275c; end: 106e32843; -[SCMemoriesSubscreenStoryHeaderCellViewModel initWithThumbnailSnap:title:subtitle:iconType:] */

undefined1 *
FUN_106e3275c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f7150;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e32844; end: 106e32867; -[SCMemoriesSubscreenStoryHeaderCellViewModel copyWithZone:] */

undefined8 FUN_106e32844(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e32868; end: 106e328f3; -[SCMemoriesSubscreenStoryHeaderCellViewModel hash] */

undefined8 * FUN_106e32868(long param_1,undefined8 param_2,undefined8 *param_3)

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
  long lStack_30;
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
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e3299c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e329a8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_106e329a8;
          }
          goto LAB_106e3299c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e329a8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e328f4; end: 106e329c3; -[SCMemoriesSubscreenStoryHeaderCellViewModel isEqual:] */

long FUN_106e328f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e3299c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e329a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106e329a8;
          }
          goto LAB_106e3299c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e329a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e329c4; end: 106e329cb; -[SCMemoriesSubscreenStoryHeaderCellViewModel thumbnailSnap] */

undefined8 FUN_106e329c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e329cc; end: 106e329d3; -[SCMemoriesSubscreenStoryHeaderCellViewModel title] */

undefined8 FUN_106e329cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e329d4; end: 106e329db; -[SCMemoriesSubscreenStoryHeaderCellViewModel subtitle] */

undefined8 FUN_106e329d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e329dc; end: 106e329e3; -[SCMemoriesSubscreenStoryHeaderCellViewModel iconType] */

undefined8 FUN_106e329dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e329e4; end: 106e32a1f; -[SCMemoriesSubscreenStoryHeaderCellViewModel .cxx_destruct] */

void FUN_106e329e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e32a20; end: 106e32a23; -[SCGalleryCRItemCellViewModel diffIdentifier] */

void FUN_106e32a20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7ecb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_diffId_1125bd4d0);
  return;
}



/* Entry: 106e32a24; end: 106e32a9b; -[SCGalleryCRItemCellViewModel isEqualToDiffableObject:] */

ulong FUN_106e32a24(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126b2698;
    _objc_opt_class(PTR_PTR_1126b2698);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c071ae0(param_1);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e32a9c; end: 106e32a9f; -[SCGalleryCRItemCellViewModel getGalleryItem] */

void FUN_106e32a9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0af10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_asset_1125a0568);
  return;
}



/* Entry: 106e32aa0; end: 106e32adf; -[SCGalleryCRItemCellViewModel shouldOpenOpera] */

bool FUN_106e32aa0(long param_1)

{
  long lVar1;
  
  func_0x00010c0efdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106e32ae0; end: 106e32b4f; +[SCGalleryCRItemCellViewModel getDiffIdentifierWithClusterTitle:phAsset:] */

void FUN_106e32ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c09da80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25ce40(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e32b50; end: 106e32bc3; -[SCMemoriesDiffableEntry initWithEntry:] */

undefined1 * FUN_106e32b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7158;
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



/* Entry: 106e32bc4; end: 106e32beb; -[SCMemoriesDiffableEntry entry] */

void FUN_106e32bc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e32bec; end: 106e32c27; -[SCMemoriesDiffableEntry hash] */

undefined8 FUN_106e32bec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf7ecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106e32c28; end: 106e32c2b; -[SCMemoriesDiffableEntry isEqual:] */

void FUN_106e32c28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isEqualToDiffableObject__1125fa158);
  return;
}



/* Entry: 106e32c2c; end: 106e32c33; -[SCMemoriesDiffableEntry diffIdentifier] */

void FUN_106e32c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_entryId_1125c3628);
  return;
}



/* Entry: 106e32c34; end: 106e32d43; -[SCMemoriesDiffableEntry isEqualToDiffableObject:] */

undefined8 FUN_106e32c34(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar6 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d2c20;
    _objc_opt_class(PTR_PTR_1126d2c20);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      iVar7 = (int)*(undefined8 *)(param_1 + 8);
      uVar2 = param_3;
      func_0x00010bf97060(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0();
      if (iVar7 == 0) {
        uVar6 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0e0160(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010bf97060(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0e0160();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c0720c0(uVar3);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 106e32d44; end: 106e32d4f; -[SCMemoriesDiffableEntry .cxx_destruct] */

void FUN_106e32d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e32d50; end: 106e32d53; -[SCMemoriesSnapCellViewModel diffIdentifier] */

void FUN_106e32d50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7ecb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_diffId_1125bd4d0);
  return;
}



/* Entry: 106e32d54; end: 106e32dcb; -[SCMemoriesSnapCellViewModel isEqualToDiffableObject:] */

ulong FUN_106e32d54(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126cfb60;
    _objc_opt_class(PTR_PTR_1126cfb60);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c071ae0(param_1);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e32dcc; end: 106e32dd3; -[SCMemoriesSnapCellViewModel galleryItemType] */

undefined8 FUN_106e32dcc(void)

{
  return 0;
}



/* Entry: 106e32dd4; end: 106e32e37; -[SCMemoriesSnapCellViewModel galleryItemIdentifier] */

void FUN_106e32dd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e32e38; end: 106e32e9b; -[SCMemoriesSnapCellViewModel galleryItemCreateTime] */

void FUN_106e32e38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf59960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e32e9c; end: 106e3304b; +[SCMemoriesSnapCellViewModel diffIdentifierWithSnaps:] */

void FUN_106e32e9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      lVar8 = 0;
      ppuVar5 = ppuVar4;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lVar8 * 8);
        lVar3 = lVar7;
        func_0x00010c241220(lVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar5;
        func_0x00010c25ce40(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        _objc_release(lVar3);
        lVar3 = lVar7;
        func_0x00010c0e0160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          func_0x00010c0e0160(lVar7);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar4;
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar4);
          _objc_release(lVar7);
          ppuVar4 = ppuVar5;
        }
        lVar8 = lVar8 + 1;
        ppuVar5 = ppuVar4;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106e3304c; end: 106e3304f; -[SCMemoriesSnapClusterViewModel diffIdentifier] */

void FUN_106e3304c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 106e33050; end: 106e33057; -[SCMemoriesSnapClusterViewModel isEqualToDiffableObject:] */

undefined8 FUN_106e33050(void)

{
  return 1;
}



/* Entry: 106e33058; end: 106e3305b; -[SCGalleryEntry entry] */

void FUN_106e33058(void)

{
  return;
}



/* Entry: 106e3305c; end: 106e3311f; -[SCMemoriesSnapClustererOption initWithEntryPredicate:snapPredicate:isClusterChronological:isClusterVideoOrImageOnly:isSnapsTab:] */

undefined1 *
FUN_106e3305c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f7160;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e33120; end: 106e331cf; +[SCMemoriesSnapClustererOption optionForSnapsTab:] */

void FUN_106e33120(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 in_x7;
  undefined **ppuVar4;
  
  puVar1 = PTR_PTR_1126b22a0;
  _objc_alloc(PTR_PTR_1126b22a0);
  if (param_3 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e87af8;
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e87ad8;
  }
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9400;
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010500(puVar1,param_2,puVar2,0,0,0,1,in_x7,ppuVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e331d0; end: 106e332a3; +[SCMemoriesSnapClustererOption optionForSnapsTab:excludedEntrySources:] */

void FUN_106e331d0(undefined8 param_1,undefined8 param_2,int param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 in_x7;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126b22a0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  if (param_3 == 0) {
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9418;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e87b38;
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e87b18;
    ppuVar5 = param_4;
  }
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9400;
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c010500(puVar1,param_2,puVar2,0,0,0,1,in_x7,ppuVar4,ppuVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e332a4; end: 106e33317; +[SCMemoriesSnapClustererOption optionForSubscreenStories] */

void FUN_106e332a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b22a0;
  _objc_alloc(PTR_PTR_1126b22a0);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e87b58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010500(puVar1,param_2,puVar2,0,0,0,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e33318; end: 106e3338b; +[SCMemoriesSnapClustererOption optionForMEOTab] */

void FUN_106e33318(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b22a0;
  _objc_alloc(PTR_PTR_1126b22a0);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e87b78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010500(puVar1,param_2,puVar2,0,0,0,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e3338c; end: 106e33443; +[SCMemoriesSnapClustererOption optionForHMDScan:] */

void FUN_106e3338c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x7;
  undefined **ppuVar4;
  
  puVar1 = PTR_PTR_1126b22a0;
  _objc_alloc(PTR_PTR_1126b22a0);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e87b98);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111181310;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e87bb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010500(puVar1,param_2,puVar2,puVar3,param_3,0,0,in_x7,ppuVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e33444; end: 106e3344f; +[SCMemoriesSnapClustererOption optionForLensScanForNewport] */

void FUN_106e33444(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__optionForLensScanForMediaTypes__1125791c8,
             &PTR__OBJC_CLASS___NSConstantArray_111181328);
  return;
}



/* Entry: 106e33450; end: 106e3345b; +[SCMemoriesSnapClustererOption optionForLensScanForMalibu] */

void FUN_106e33450(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__optionForLensScanForMediaTypes__1125791c8,
             &PTR__OBJC_CLASS___NSConstantArray_111181340);
  return;
}



/* Entry: 106e3345c; end: 106e33543; +[SCMemoriesSnapClustererOption _optionForLensScanForMediaTypes:] */

void FUN_106e3345c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = 0x2398fe;
  func_0x00010b77ffc8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b22a0;
  _objc_alloc(PTR_PTR_1126b22a0);
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e87b98);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  uVar5 = param_3;
  uVar6 = uVar1;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e87bd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c010500(puVar2,param_2,puVar3,puVar4,0,0,0,in_x7,uVar5,uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e33544; end: 106e335d7; +[SCMemoriesSnapClustererOption optionForPickerPhotosOnly] */

void FUN_106e33544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b22a0;
  _objc_alloc(PTR_PTR_1126b22a0);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e87b98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_106e3944c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010500(puVar1,param_2,puVar2,puVar3,0,1,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e335d8; end: 106e3366b; +[SCMemoriesSnapClustererOption optionForPickerVideosOnly] */

void FUN_106e335d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b22a0;
  _objc_alloc(PTR_PTR_1126b22a0);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e87b98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_106e394dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010500(puVar1,param_2,puVar2,puVar3,0,1,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e3366c; end: 106e336f3; +[SCMemoriesSnapClustererOption optionForDirectorModeDraftsOnly] */

void FUN_106e3366c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x7;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126b22a0;
  _objc_alloc(PTR_PTR_1126b22a0);
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9478;
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e87bf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010500(puVar1,param_2,puVar2,0,0,0,0,in_x7,ppuVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e336f4; end: 106e337a3; +[SCMemoriesSnapClustererOption optionForEntries:] */

void FUN_106e336f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x7;
  undefined8 uVar3;
  
  func_0x00010c0b8620(param_3,param_2,&PTR___NSConcreteGlobalBlock_11097ede0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b22a0;
  _objc_alloc(PTR_PTR_1126b22a0);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  uVar3 = param_3;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e87c18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010500(puVar1,param_2,puVar2,0,0,0,0,in_x7,uVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e337a4; end: 106e337ab;  */

void FUN_106e337a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_entryId_1125c3628);
  return;
}



/* Entry: 106e337ac; end: 106e337b3; -[SCMemoriesSnapClustererOption evaluateWithEntry:] */

void FUN_106e337ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_evaluateWithObject__1125c4050);
  return;
}



/* Entry: 106e337b4; end: 106e337bb; -[SCMemoriesSnapClustererOption evaluateWithSnap:] */

void FUN_106e337b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_evaluateWithObject__1125c4050);
  return;
}



/* Entry: 106e337bc; end: 106e337c3; -[SCMemoriesSnapClustererOption entryPredicate] */

undefined8 FUN_106e337bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e337c4; end: 106e337cb; -[SCMemoriesSnapClustererOption snapPredicate] */

undefined8 FUN_106e337c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e337cc; end: 106e337d3; -[SCMemoriesSnapClustererOption isClusterChronological] */

undefined1 FUN_106e337cc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e337d4; end: 106e337db; -[SCMemoriesSnapClustererOption isClusterVideoOrImageOnly] */

undefined1 FUN_106e337d4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}


