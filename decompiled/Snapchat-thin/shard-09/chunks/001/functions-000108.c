/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a01e14; end: 106a01e6b; -[SCGalleryStoriesTabV2Controller selectedGalleryItems] */

void FUN_106a01e14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 106a01e6c; end: 106a01e73; -[SCGalleryStoriesTabV2Controller selectedSnapItems] */

void FUN_106a01e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15a030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_selectedSnapItems_112634228);
  return;
}



/* Entry: 106a01e74; end: 106a01e7b; -[SCGalleryStoriesTabV2Controller orderedSelectedSnapItems] */

void FUN_106a01e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eccf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_orderedSelectedSnapItems_112618d50);
  return;
}



/* Entry: 106a01e7c; end: 106a020b3; -[SCGalleryStoriesTabV2Controller selectedItemCount] */

undefined ** FUN_106a01e7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c15a020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR___NSConcreteGlobalBlock_1109530f8;
  lVar3 = lVar2;
  func_0x000100504554();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar10 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar4 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar10);
        }
        lVar12 = *(long *)(lVar11 * 8);
        lVar5 = lVar12;
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        ppuVar8 = (undefined **)PTR_DAT_1126a4ec0;
        func_0x00010010fab4();
        lVar7 = lVar5;
        if ((int)lVar6 == 0) {
          lVar7 = 0;
        }
        _objc_retain(lVar7);
        _objc_release(lVar5);
        if (lVar7 != 0) {
          lVar7 = lVar12;
          func_0x00010bf97060(lVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar2;
          func_0x00010bf4b900();
          _objc_release(lVar7);
          _objc_release(lVar5);
          if ((int)lVar6 != 0) {
            func_0x00010bf343c0(lVar12);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar12;
            func_0x00010bf529e0();
            lVar13 = lVar7 + lVar13;
            _objc_release(lVar12);
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar10;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar10);
  lVar1 = lVar3;
  func_0x000107e2e2c8(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(ppuVar8,PTR_s_snap_11266d6b0);
    return ppuVar8;
  }
  return (undefined **)(lVar1 + lVar13);
}



/* Entry: 106a020b4; end: 106a020bb;  */

void FUN_106a020b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 106a020bc; end: 106a020c3; -[SCGalleryStoriesTabV2Controller scrollToGalleryItem:animated:] */

void FUN_106a020bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_scrollToItem_animated__112632370);
  return;
}



/* Entry: 106a020c4; end: 106a020cb; -[SCGalleryStoriesTabV2Controller isDragging] */

void FUN_106a020c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c070eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_isDragging_1125f9db8)
  ;
  return;
}



/* Entry: 106a020cc; end: 106a020d3; -[SCGalleryStoriesTabV2Controller isTracking] */

void FUN_106a020cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c081670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_isTracking_1125fdfa8)
  ;
  return;
}



/* Entry: 106a020d4; end: 106a020db; -[SCGalleryStoriesTabV2Controller isEditing] */

undefined8 FUN_106a020d4(void)

{
  return 0;
}



/* Entry: 106a020dc; end: 106a020e7; -[SCGalleryStoriesTabV2Controller endEditing] */

void FUN_106a020dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_endEditing__1125c2ba8,1);
  return;
}



/* Entry: 106a020e8; end: 106a020ef; -[SCGalleryStoriesTabV2Controller isInLineSearchable] */

undefined8 FUN_106a020e8(void)

{
  return 1;
}



/* Entry: 106a020f0; end: 106a020f7; -[SCGalleryStoriesTabV2Controller shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController] */

undefined8 FUN_106a020f0(void)

{
  return 1;
}



/* Entry: 106a020f8; end: 106a020ff; -[SCGalleryStoriesTabV2Controller shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController] */

undefined8 FUN_106a020f8(void)

{
  return 1;
}



/* Entry: 106a02100; end: 106a02103; -[SCGalleryStoriesTabV2Controller deeplinkToOperaWithDestinationInfo:] */

void FUN_106a02100(void)

{
  return;
}



/* Entry: 106a02104; end: 106a02107; -[SCGalleryStoriesTabV2Controller galleryViewWillAppear] */

void FUN_106a02104(void)

{
  return;
}



/* Entry: 106a02108; end: 106a0210b; -[SCGalleryStoriesTabV2Controller galleryViewDidAppear] */

void FUN_106a02108(void)

{
  return;
}



/* Entry: 106a0210c; end: 106a0220f; -[SCGalleryStoriesTabV2Controller galleryViewDidDisappear] */

void FUN_106a0210c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double in_d3;
  double dVar7;
  
  func_0x00010bf3fa00(*(undefined8 *)(param_1 + 0x80),param_2,*(undefined8 *)(param_1 + 0x88));
  func_0x00010c128b60(*(undefined8 *)(param_1 + 0x20));
  dVar5 = *(double *)(param_1 + 0x70);
  dVar6 = *(double *)(param_1 + 0xb8);
  dVar7 = -dVar6;
  if (0.0 <= dVar6) {
    dVar7 = dVar6;
  }
  dVar7 = dVar5 - dVar7;
  func_0x00010c064580(*(undefined8 *)(param_1 + 0x20));
  dVar7 = dVar7 - dVar5;
  if (((dVar7 != 0.0) || (lVar1 = param_1, func_0x00010c0834c0(), (int)lVar1 != 0)) &&
     (func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x20)), in_d3 != 0.0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfbd160();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c3300(dVar7 / in_d3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  dVar5 = *(double *)(param_1 + 0xb8);
  dVar7 = -dVar5;
  if (0.0 <= dVar5) {
    dVar7 = dVar5;
  }
  func_0x00010c064580(*(undefined8 *)(param_1 + 0x20));
  *(double *)(param_1 + 0x70) = dVar7 + dVar5;
  return;
}



/* Entry: 106a02210; end: 106a02213; -[SCGalleryStoriesTabV2Controller didTriggerCreateMashupForStory:] */

void FUN_106a02210(void)

{
  return;
}



/* Entry: 106a02214; end: 106a02217; -[SCGalleryStoriesTabV2Controller didTriggerRefetchLatestFeaturedStories] */

void FUN_106a02214(void)

{
  return;
}



/* Entry: 106a02218; end: 106a0221f; -[SCGalleryStoriesTabV2Controller pageViewName] */

undefined8 FUN_106a02218(void)

{
  return 0x83;
}



/* Entry: 106a02220; end: 106a023df; -[SCGalleryStoriesTabV2Controller scrollViewDidScroll:] */

void FUN_106a02220(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be65000();
  lVar3 = *(long *)(param_3 + 0x20);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
LAB_106a02398:
      _objc_release(lVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
      lVar3 = lVar3 + 0xa8;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c267b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
    lVar10 = 0;
    do {
      uVar11 = param_2;
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
        uVar11 = param_2;
      }
      uVar9 = *(undefined8 *)(param_3 + 0x88);
      func_0x00010c0840e0(*(undefined8 *)(lVar10 * 8));
      func_0x00010c0dfd40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(ulong *)(param_3 + 0x20);
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cfb90;
      _objc_opt_class(PTR_PTR_1126cfb90);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar1 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      if (uVar1 == 0) {
        _objc_release(uVar9);
        goto LAB_106a02398;
      }
      func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 0x20));
      param_2 = uVar11;
      func_0x00010c0f0be0(uVar9);
      func_0x00010c152b40(uVar11,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar9);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106a023e0; end: 106a02413; -[SCGalleryStoriesTabV2Controller scrollViewWillBeginDragging:] */

void FUN_106a023e0(long param_1)

{
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a02414; end: 106a02457; -[SCGalleryStoriesTabV2Controller scrollViewDidEndDragging:willDecelerate:] */

void FUN_106a02414(long param_1)

{
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a02458; end: 106a0248b; -[SCGalleryStoriesTabV2Controller scrollViewDidEndDecelerating:] */

void FUN_106a02458(long param_1)

{
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a0248c; end: 106a0259b; -[SCGalleryStoriesTabV2Controller scrollViewDidEndScrollingAnimation:] */

void FUN_106a0248c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar7 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf51e00();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x58));
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        (**(code **)(*(long *)(lStack_108 + lVar9 * 8) + 0x10))();
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      puVar7 = &uStack_110;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  uVar3 = *(undefined8 *)(lVar1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c8be0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0653c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c07d540();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if ((int)uVar6 != 0) {
    uVar6 = *(undefined8 *)(lVar1 + 0x90);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0c8be0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0653c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af060();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106a0259c; end: 106a02683; -[SCGalleryStoriesTabV2Controller _logSelectSearchResultEntryIfNeeded:] */

void FUN_106a0259c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0653c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07d540();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0c8be0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0653c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af060();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a02684; end: 106a0276b; -[SCGalleryStoriesTabV2Controller _logSelectSearchResultSnapIfNeeded:] */

void FUN_106a02684(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0653c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07d540();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0c8be0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0653c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af080();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a0276c; end: 106a027ef; -[SCGalleryStoriesTabV2Controller _pageHeight] */

double FUN_106a0276c(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    long param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_5 + 0x78);
  dVar2 = *(double *)(param_5 + 0xb8);
  func_0x00010c064580(*(undefined8 *)(param_5 + 0x20));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
  if (param_4 == 0.0) {
    param_4 = 0.0;
  }
  else {
    dVar1 = -dVar3;
    if (0.0 <= dVar3) {
      dVar1 = dVar3;
    }
    dVar3 = -dVar2;
    if (0.0 <= dVar2) {
      dVar3 = dVar2;
    }
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
    param_4 = ((dVar1 - dVar3) - param_1) / param_4;
  }
  return param_4;
}



/* Entry: 106a027f0; end: 106a0286f; -[SCGalleryStoriesTabV2Controller _notifyScrollContentOffsetChange] */

void FUN_106a027f0(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010c151ea0();
  if (*(double *)(param_2 + 0x78) != param_1) {
    dVar1 = -param_1;
    if (0.0 <= param_1) {
      dVar1 = param_1;
    }
    dVar2 = *(double *)(param_2 + 0x70);
    if (*(double *)(param_2 + 0x70) <= dVar1) {
      dVar2 = dVar1;
    }
    *(double *)(param_2 + 0x70) = dVar2;
    *(double *)(param_2 + 0x78) = param_1;
    param_2 = param_2 + 0xa8;
    _objc_loadWeakRetained(param_2);
    func_0x00010c2679c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106a02870; end: 106a028b7; -[SCGalleryStoriesTabV2Controller _updateWithScrollContentInset] */

void FUN_106a02870(long param_1)

{
  func_0x00010c1f7ba0(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                      *(undefined8 *)(param_1 + 0x20));
  func_0x00010bde7cc0(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),param_1);
  func_0x00010c181f80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be65010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyScrollContentOffsetChange_112576da0);
  return;
}



/* Entry: 106a028b8; end: 106a028eb; -[SCGalleryStoriesTabV2Controller _indexWithOffset:] */

long FUN_106a028b8(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0840e0(param_3);
  func_0x00010bdc9ea0(param_1);
  return param_3 - param_1;
}



/* Entry: 106a028ec; end: 106a0293b; -[SCGalleryStoriesTabV2Controller _allItemsOffset] */

undefined8 FUN_106a028ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c124d20(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110953138,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7b70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106a0293c; end: 106a0299f;  */

void FUN_106a0293c(undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c067fc0(param_2);
  uVar2 = param_3;
  func_0x00010c27dd80();
  _objc_release(param_3);
  if ((uVar2 & 0xfffffffffffffffd) != 0) {
    param_2 = param_2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 106a029a0; end: 106a02b67; -[SCGalleryStoriesTabV2Controller _galleryItemIdToSnapsMap] */

void FUN_106a029a0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar9 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar9);
      }
      lVar10 = *(long *)(lVar11 * 8);
      lVar4 = lVar10;
      func_0x00010bf97060();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010010fab4();
      lVar6 = lVar4;
      if ((int)lVar5 == 0) {
        lVar6 = 0;
      }
      _objc_retain(lVar6);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010bfbd0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      func_0x00010bf00920();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c08fa60();
      if ((lVar6 != 0) && (lVar6 = lVar10, func_0x00010bf529e0(), lVar6 != 0)) {
        func_0x00010c1d0640(puVar2);
      }
      _objc_release(lVar10);
      _objc_release(lVar4);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  puVar7 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfaea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + 0x88),PTR_s_filteredArrayUsingBlock__1125c9430,
             &PTR___NSConcreteGlobalBlock_110953178);
  return;
}



/* Entry: 106a02b68; end: 106a02b77; -[SCGalleryStoriesTabV2Controller _regularStoryViewModels] */

void FUN_106a02b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_filteredArrayUsingBlock__1125c9430,
             &PTR___NSConcreteGlobalBlock_110953178);
  return;
}



/* Entry: 106a02b78; end: 106a02b97;  */

bool FUN_106a02b78(undefined8 param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == 0;
}



/* Entry: 106a02b98; end: 106a02be3; -[SCGalleryStoriesTabV2Controller _regularStoryGalleryEntries] */

void FUN_106a02b98(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be8a180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a02be4; end: 106a02beb;  */

void FUN_106a02be4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_entry_1125c35c0);
  return;
}



/* Entry: 106a02bec; end: 106a02c8b; -[SCGalleryStoriesTabV2Controller _regularStoryGalleryItems] */

void FUN_106a02bec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be8a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a02c8c; end: 106a02c93; -[SCGalleryStoriesTabV2Controller collectionView:numberOfItemsInSection:] */

void FUN_106a02c8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106a02c94; end: 106a02d4b; -[SCGalleryStoriesTabV2Controller _cellClassForViewModel:] */

void FUN_106a02c94(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *unaff_x20;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c27dd80();
  if (lVar2 - 1U < 2) {
    unaff_x20 = PTR_PTR_1126cfb78;
    _objc_opt_class(PTR_PTR_1126cfb78);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    ppuVar1 = &PTR_PTR_1126cfb70;
    if (lVar3 != 2) {
      ppuVar1 = &PTR_PTR_1126c3960;
    }
    unaff_x20 = *ppuVar1;
    _objc_opt_class(unaff_x20);
    _objc_retain();
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 106a02d4c; end: 106a030db; -[SCGalleryStoriesTabV2Controller collectionView:cellForItemAtIndexPath:] */

void FUN_106a02d4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar17 = *(undefined8 *)(param_3 + 0x88);
  func_0x00010c0840e0(param_6);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bddc1a0(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bf6e0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126cfb90;
  _objc_retain(uVar3);
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c18b5e0(uVar3);
    lVar2 = param_3 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c181a60(uVar3);
    _objc_release(lVar2);
    func_0x00010c1fb8a0(uVar3);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0840e0();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(uVar3);
  _objc_release(puVar4);
  if (*(char *)(param_3 + 0xa3) == '\x01') {
    func_0x00010c27dd80();
  }
  uVar6 = *(undefined8 *)(param_3 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c9ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010bf4cdc0(param_5);
  uVar9 = *(undefined8 *)(param_3 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010bf8c280();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_3 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0c8900();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_3 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c0c88e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222780(param_2,uVar3);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar9);
  if (*(char *)(param_3 + 0xa0) == '\x01') {
    func_0x00010c24eda0(uVar3);
  }
  _objc_retain(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar17);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106a030dc; end: 106a03187; -[SCGalleryStoriesTabV2Controller collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_106a030dc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_6);
  func_0x00010bfb68e0(param_4);
  _CGRectGetWidth();
  param_1 = param_1 + -5.0;
  dVar3 = param_1 + -5.0;
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  uVar1 = param_6;
  func_0x00010c0840e0(param_6);
  _objc_release(param_6);
  func_0x00010c0dfd40(uVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddc1a0(param_2,param_3,uVar2);
  func_0x00010bf33e60();
  _objc_release(uVar2);
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 106a03188; end: 106a0329f; -[SCGalleryStoriesTabV2Controller collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_106a03188(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cfb90;
  _objc_opt_class(PTR_PTR_1126cfb90);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126cfb78;
    _objc_opt_class(PTR_PTR_1126cfb78);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010c18e9e0(param_4);
    }
  }
  else {
    func_0x00010c1fb080(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0xa1) == '\x01') {
    uVar2 = param_4;
    func_0x00010c262ca0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cda0();
    _objc_release(uVar2);
    puVar1 = PTR_DAT_1126a56c8;
    _objc_retain(param_4);
    uVar3 = param_4;
    func_0x00010010fab4(param_4,puVar1);
    uVar2 = param_4;
    if ((int)uVar3 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_4);
    if (uVar2 != 0) {
      func_0x00010c24eda0(param_4);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a032a0; end: 106a032fb; -[SCGalleryStoriesTabV2Controller collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_106a032a0(void)

{
  long lVar1;
  long lVar2;
  long in_x3;
  
  _objc_retain(in_x3);
  lVar2 = in_x3;
  func_0x00010010fab4(in_x3,PTR_DAT_1126a56c8);
  lVar1 = in_x3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c256060(in_x3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 106a032fc; end: 106a03347; -[SCGalleryStoriesTabV2Controller collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:] */

void FUN_106a032fc(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  _objc_retain(in_x3);
  uVar1 = in_x3;
  func_0x00010c262ca0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cda0();
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a03348; end: 106a033eb; -[SCGalleryStoriesTabV2Controller collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_106a03348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)PTR__UICollectionElementKindSectionFooter_110345af8;
  func_0x00010c0720c0(uVar1,param_2,param_4);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf6e120(param_3,param_2,param_4,&PTR____CFConstantStringClassReference_110e676b8,
                        param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a033ec; end: 106a0343f; -[SCGalleryStoriesTabV2Controller collectionView:layout:referenceSizeForFooterInSection:] */

undefined1  [16]
FUN_106a033ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_2 + 0xa2) == '\x01') {
    func_0x00010c2a5040(param_4);
    uVar1 = param_1;
    func_0x00010bfe0640(PTR_PTR_1126cfb80);
  }
  else {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar1 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 106a03440; end: 106a0344f; -[SCGalleryStoriesTabV2Controller collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16] FUN_106a03440(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 106a03450; end: 106a034df; -[SCGalleryStoriesTabV2Controller galleryCollectionViewHelper:itemAtIndexPath:] */

void FUN_106a03450(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0840e0();
  if (-1 < (long)uVar1) {
    uVar1 = param_4;
    func_0x00010c0840e0();
    uVar2 = *(ulong *)(param_1 + 0x88);
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x88);
      uVar1 = param_4;
      func_0x00010c0840e0(param_4);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106a034c4;
    }
  }
  uVar3 = 0;
LAB_106a034c4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106a034e0; end: 106a034e3; -[SCGalleryStoriesTabV2Controller _galleryItems] */

void FUN_106a034e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_allItems_11259da48);
  return;
}



/* Entry: 106a034e4; end: 106a03567; -[SCGalleryStoriesTabV2Controller _galleryItem:] */

void FUN_106a034e4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010be38fc0();
  func_0x00010be1a320();
  _objc_retainAutoreleasedReturnValue();
  if ((((long)uVar1 < 0) || (uVar2 = param_1, func_0x00010bf529e0(), uVar2 <= uVar1)) ||
     (uVar2 = param_1, func_0x00010bf529e0(), uVar2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0dfd40(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a03568; end: 106a0356f; -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:galleryItemAtIndexPath:] */

void FUN_106a03568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1a2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__galleryItem__112564258,param_4);
  return;
}



/* Entry: 106a03570; end: 106a0369f; -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:snapsForEntry:] */

void FUN_106a03570(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  func_0x00010bf97200(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfecfe0(param_1,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf8fd80();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar5 != 0) {
    puVar8 = PTR____NSArray0__struct_11034ab48;
    if (lVar1 == 0) goto LAB_106a03680;
    lVar6 = *(long *)(param_1 + 0x88);
    func_0x00010bf529e0();
    lVar7 = lVar1;
    func_0x00010c0840e0();
    puVar8 = PTR____NSArray0__struct_11034ab48;
    if (lVar6 <= lVar7) goto LAB_106a03680;
  }
  puVar9 = *(undefined **)(param_1 + 0x88);
  lVar7 = lVar1;
  func_0x00010c0840e0(lVar1);
  func_0x00010c0dfd40(puVar9,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010bf00920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
LAB_106a03680:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106a036a0; end: 106a03707; -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:shouldChangeSelectedAtIndexPath:] */

undefined8
FUN_106a036a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be1a2e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010b5fc5e4(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106a03708; end: 106a03763; -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:didChangeSelected:forItem:] */

void FUN_106a03708(long param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2677a0();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a03764; end: 106a037bf; -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:didChangeSelected:forSnapItem:] */

void FUN_106a03764(long param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2677c0();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a037c0; end: 106a0383b; -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:didChangeSelected:forItems:snapItems:] */

void FUN_106a037c0(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2677e0();
  _objc_release(in_x5);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a0383c; end: 106a039e3; -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:didTapItemAtIndexPath:] */

void FUN_106a0383c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010bf94800(uVar5);
  uVar6 = *(ulong *)(param_1 + 0x88);
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126cfb98;
  _objc_opt_class(PTR_PTR_1126cfb98);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar6;
  func_0x00010c27dd80();
  if (uVar4 - 1 < 2) {
    func_0x00010be7ed60(param_1);
  }
  else if (uVar4 == 0) {
    uVar4 = uVar6;
    func_0x00010bf00920(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58560(param_1);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = uVar6;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010b5fc5e4();
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      uVar4 = uVar6;
      func_0x00010bf97060(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107e006c8(param_1,uVar4);
      _objc_release(uVar4);
      _objc_release(param_1);
    }
    else {
      func_0x00010beccb60(param_1);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 106a039e4; end: 106a03ae7; -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:handleLongPress:itemAtIndexPath:] */

void FUN_106a039e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf94800(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cfb98;
  _objc_opt_class(PTR_PTR_1126cfb98);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126cfb98;
  _objc_opt_class(PTR_PTR_1126cfb98);
  uVar4 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar3);
  if ((uVar4 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c0840e0(param_5);
    func_0x00010c0dfd40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2bca0(param_1);
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a03ae8; end: 106a03bcb; -[SCGalleryStoriesTabV2Controller memoriesCollectionViewSelectionHelper:overrideTapHandlingAtIndexPath:] */

undefined8 FUN_106a03ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(param_4);
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126cfb98;
  _objc_opt_class(PTR_PTR_1126cfb98);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126cfb90;
  _objc_opt_class(PTR_PTR_1126cfb90);
  uVar4 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar3);
  if ((uVar4 & 1) != 0) {
    func_0x00010beccb60(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar5);
  return 1;
}



/* Entry: 106a03bcc; end: 106a03c0b; -[SCGalleryStoriesTabV2Controller memoriesCollectionViewIsFullyVisible:] */

long FUN_106a03bcc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c267980();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106a03c0c; end: 106a03df3; -[SCGalleryStoriesTabV2Controller operaPresenterDidOpenViewWithItemId:snapLevelItemId:crFeaturedStory:isFromSnapFeed:] */

void FUN_106a03c0c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfecfe0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar8 = 0;
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0x20);
      func_0x00010bfed1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010bf4b900();
      _objc_release(uVar2);
      if ((uVar8 & 1) == 0) {
        lVar3 = lVar1;
        func_0x00010c0840e0();
        lVar7 = *(long *)(param_1 + 0x20);
        func_0x00010c1554e0(lVar1);
        func_0x00010c0deec0();
        if (lVar3 < lVar7) {
          func_0x00010c1525a0(*(undefined8 *)(param_1 + 0x20));
          func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x20));
        }
      }
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cfb90;
      _objc_opt_class(PTR_PTR_1126cfb90);
      uVar8 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar6);
      uVar2 = uVar4;
      if ((uVar8 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      if (uVar2 == 0) {
        uVar8 = 0;
      }
      else {
        uVar5 = uVar4;
        func_0x00010bf33ba0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == 0) {
          uVar8 = uVar4;
          func_0x00010c27ace0(uVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar8 = uVar5;
          func_0x00010c247ea0(uVar5);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar5);
      }
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
    puVar6 = PTR_PTR_1126c3b30;
    _objc_alloc(PTR_PTR_1126c3b30);
    param_1 = param_1 + 0xa8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0eafa0();
    func_0x00010bff7280(puVar6);
    _objc_release(param_1);
    _objc_release(uVar8);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a03df4; end: 106a03efb; -[SCGalleryStoriesTabV2Controller operaPresenterDidOpenViewWithOperaItem:] */

void FUN_106a03df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106a03efc;
  uStack_30 = 0x106a03f0c;
  uStack_28 = 0;
  func_0x00010c0bfe40(param_3);
  func_0x00010c0eaec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106a03efc; end: 106a03f13;  */

void FUN_106a03efc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a03f14; end: 106a03f53;  */

void FUN_106a03f14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a03f54; end: 106a03f5b;  */

void FUN_106a03f54(void)

{
  return;
}



/* Entry: 106a03f5c; end: 106a03f8f; -[SCGalleryStoriesTabV2Controller operaPresenterBeganDismiss] */

void FUN_106a03f5c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1070e0();
  func_0x000108df583c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a03f90; end: 106a03f9b; -[SCGalleryStoriesTabV2Controller operaPresenterCancelledDismiss] */

void FUN_106a03f90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07f8c0();
  _objc_release(puVar1);
  if ((int)puVar2 != 1) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106a03f9c; end: 106a03ff3; -[SCGalleryStoriesTabV2Controller operaPresenterDidPresent] */

void FUN_106a03f9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c267aa0();
  _objc_release(lVar1);
  if (*(char *)(param_1 + 0xa0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c19e230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFocused__1126452a8,0);
    return;
  }
  return;
}



/* Entry: 106a03ff4; end: 106a0406b; -[SCGalleryStoriesTabV2Controller operaPresenterDidDismissItemId:snapLevelItemId:playbackItemIndex:crFeaturedStory:isFromSnapFeed:] */

void FUN_106a03ff4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2679e0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a0a0();
  _objc_release(uVar2);
  if (*(char *)(param_1 + 0xa0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c19e230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFocused__1126452a8,1);
    return;
  }
  return;
}



/* Entry: 106a0406c; end: 106a040cb; -[SCGalleryStoriesTabV2Controller operaPresenterOverrideTransitionModeForItem:] */

undefined8 FUN_106a0406c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (param_3 == 2) {
    uVar1 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf607c0();
    _objc_release(uVar2);
  }
  return uVar1;
}



/* Entry: 106a040cc; end: 106a041ff; -[SCGalleryStoriesTabV2Controller _handleLongPress:cell:viewModel:] */

void FUN_106a040cc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_4 != 0) && (param_5 != 0)) && (func_0x00010c252440(), param_3 == 1)) {
    lVar2 = param_5;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80(param_5);
      func_0x00010c0f2220(param_1);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained();
      func_0x00010c10af00(uVar4);
      _objc_release(param_1);
      _objc_release(uVar4);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a04200; end: 106a043c7; -[SCGalleryStoriesTabV2Controller _toggleExpand:cell:] */

void FUN_106a04200(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c272880(param_3);
  func_0x00010bf7e1a0(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c072360(param_3);
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf7d980(param_4);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      puVar4 = PTR_PTR_1126cfb90;
      _objc_opt_class(PTR_PTR_1126cfb90);
      uVar5 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar4);
      if ((uVar5 & 1) != 0) {
        func_0x00010c069de0(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f8420(*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x20));
  return;
}



/* Entry: 106a043c8; end: 106a04423;  */

void FUN_106a043c8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a04424;
  puStack_20 = &UNK_110842e18;
  func_0x00010c0f8420(*(undefined8 *)(lStack_18 + 0x20),param_2,&puStack_38,0);
  return;
}



/* Entry: 106a04424; end: 106a0445b;  */

void FUN_106a04424(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a0445c; end: 106a04657; -[SCGalleryStoriesTabV2Controller _selectSnapViewModel:forStoryCell:viewModel:] */

void FUN_106a0445c(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined1 *param_5,undefined *param_6,undefined *param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
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
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  puVar9 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_6);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
  func_0x00010c158e00();
  if (iVar1 != 0) {
    puVar2 = param_6;
    func_0x00010bf343c0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    if (puVar13 < (undefined *)0x2) {
      lVar12 = *(long *)(param_2 + 0x88);
      puVar2 = param_6;
      func_0x00010bfecde0();
      if (lVar12 == 0x7fffffffffffffff) goto LAB_106a0460c;
      uVar10 = *(undefined8 *)(param_2 + 0x30);
      param_5 = (undefined1 *)0x0;
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined8 *)puVar2;
      func_0x00010c272bc0(uVar10);
    }
    else {
      param_1 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      puVar2 = param_4;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      param_5 = auStack_f0;
      puVar9 = (undefined *)0x10;
      puVar13 = puVar2;
      func_0x00010bf52a60();
      if (puVar13 != (undefined *)0x0) {
        lVar12 = *plStack_120;
        do {
          puVar9 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar12) {
              _objc_enumerationMutation(puVar2);
            }
            uVar10 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
            uVar11 = *(undefined8 *)(param_2 + 0x30);
            puVar3 = param_6;
            func_0x00010bf97060();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010b6f8630(uVar10,puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c272be0(uVar11);
            _objc_release(uVar10);
            _objc_release(puVar3);
            puVar9 = puVar9 + 1;
          } while (puVar13 != puVar9);
          param_5 = auStack_f0;
          puVar9 = (undefined *)0x10;
          puVar13 = puVar2;
          puVar8 = &uStack_130;
          func_0x00010bf52a60();
        } while (puVar13 != (undefined *)0x0);
      }
    }
    _objc_release(puVar2);
    puVar2 = (undefined *)puVar8;
  }
LAB_106a0460c:
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(param_5);
  _objc_retain(puVar9);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar4 = param_5;
  func_0x00010c06ece0();
  if (((ulong)puVar4 & 1) == 0) {
    puVar13 = param_4 + 8;
    _objc_loadWeakRetained(puVar13);
    puVar4 = param_5;
    func_0x00010c113000(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e00710(puVar13,puVar4);
    _objc_release(puVar4);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_4 + 0x30);
    func_0x00010c158e00();
    if (iVar1 != 0) {
      func_0x00010be9dc20(param_4);
      goto LAB_106a048dc;
    }
    puVar4 = param_5;
    func_0x00010c113000(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58560(param_4);
    _objc_release(puVar4);
    puVar13 = PTR_DAT_1126a50e8;
    _objc_retain(param_7);
    puVar3 = param_7;
    func_0x00010010fab4(param_7,puVar13);
    _objc_release(param_7);
    puVar13 = (undefined *)0x0;
    if ((param_7 != (undefined *)0x0) && ((int)puVar3 != 0)) {
      puVar13 = param_7;
      func_0x00010c27ad00();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = puVar9;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010010fab4();
    puVar3 = puVar5;
    if ((int)puVar6 == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar5);
    if (puVar3 != (undefined *)0x0) {
      puVar6 = puVar9;
      func_0x00010bf00920();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_4 + 0x90);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_5;
      func_0x00010c113000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_4 + 8;
      _objc_loadWeakRetained();
      func_0x00010be6f200(param_4);
      uVar10 = param_1;
      func_0x00010c0f2220();
      param_4 = param_4 + 0xa8;
      _objc_loadWeakRetained(param_4);
      func_0x00010c0eafa0();
      func_0x00010c10d5a0(param_1,uVar10,uVar11);
      _objc_release(param_4);
      _objc_release(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(uVar11);
      _objc_release(puVar6);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar13);
LAB_106a048dc:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar9);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a04658; end: 106a04923; -[SCGalleryStoriesTabV2Controller storyCell:didSelectSnapViewModel:viewModel:snapCell:fromView:] */

void FUN_106a04658(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar3 = param_5;
  func_0x00010c06ece0();
  if ((uVar3 & 1) == 0) {
    lVar9 = param_2 + 8;
    _objc_loadWeakRetained(lVar9);
    uVar3 = param_5;
    func_0x00010c113000(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e00710(lVar9,uVar3);
    _objc_release(uVar3);
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_2 + 0x30);
    func_0x00010c158e00();
    if (iVar2 != 0) {
      func_0x00010be9dc20(param_2);
      goto LAB_106a048dc;
    }
    uVar3 = param_5;
    func_0x00010c113000(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58560(param_2);
    _objc_release(uVar3);
    puVar1 = PTR_DAT_1126a50e8;
    _objc_retain(param_7);
    lVar4 = param_7;
    func_0x00010010fab4(param_7,puVar1);
    _objc_release(param_7);
    lVar9 = 0;
    if ((param_7 != 0) && ((int)lVar4 != 0)) {
      lVar9 = param_7;
      func_0x00010c27ad00();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_6;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010010fab4();
    lVar4 = lVar5;
    if ((int)lVar6 == 0) {
      lVar4 = 0;
    }
    _objc_retain(lVar4);
    _objc_release(lVar5);
    if (lVar4 != 0) {
      lVar6 = param_6;
      func_0x00010bf00920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + 0x90);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_5;
      func_0x00010c113000();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2 + 8;
      _objc_loadWeakRetained();
      func_0x00010be6f200(param_2);
      uVar10 = param_1;
      func_0x00010c0f2220();
      param_2 = param_2 + 0xa8;
      _objc_loadWeakRetained(param_2);
      func_0x00010c0eafa0();
      func_0x00010c10d5a0(param_1,uVar10,uVar7);
      _objc_release(param_2);
      _objc_release(lVar5);
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(lVar6);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar9);
LAB_106a048dc:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a04924; end: 106a04a2b; -[SCGalleryStoriesTabV2Controller storyCell:didLongPress:snapViewModel:viewModel:fromView:] */

void FUN_106a04924(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (param_6 != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c158e00();
    lVar2 = param_4;
    func_0x00010c252440();
    if (iVar1 == 0) {
      if (lVar2 != 1) goto LAB_106a049fc;
      puVar3 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar3);
      lVar2 = param_1 + 0xa8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c267940();
      _objc_release(lVar2);
    }
    else if (lVar2 != 1) goto LAB_106a049fc;
    func_0x00010be9dc20(param_1,param_2,param_5,param_3,param_6);
  }
LAB_106a049fc:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a04a2c; end: 106a04aaf; -[SCGalleryStoriesTabV2Controller storyCell:didTapShowAll:reload:] */

void FUN_106a04a2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bf7e1a0(*(undefined8 *)(param_1 + 0x80),param_2,param_4);
  if (param_5 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106a04ab0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,0)
    ;
  }
  return;
}



/* Entry: 106a04ab0; end: 106a04b0b;  */

void FUN_106a04ab0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a04b0c;
  puStack_20 = &UNK_110842e18;
  func_0x00010c0f8420(*(undefined8 *)(lStack_18 + 0x20),param_2,&puStack_38,0);
  return;
}



/* Entry: 106a04b0c; end: 106a04b43;  */

void FUN_106a04b0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a04b44; end: 106a04b4f; -[SCGalleryStoriesTabV2Controller storyCell:didBeginEditing:] */

void FUN_106a04b44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_4);
  return;
}



/* Entry: 106a04b50; end: 106a04b57; -[SCGalleryStoriesTabV2Controller storyCellIsTabFocused:] */

undefined1 FUN_106a04b50(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa1);
}



/* Entry: 106a04b58; end: 106a04e97; -[SCGalleryStoriesTabV2Controller storyCell:didTapStory:] */

void FUN_106a04b58(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = param_5;
  func_0x00010bf97060(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58520(param_2);
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010bf00920(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58560(param_2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010c06ece0();
  if ((int)lVar3 != 0) {
    func_0x00010bf94800(*(undefined8 *)(param_2 + 0x18));
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bfecfa0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    iVar2 = (int)*(undefined8 *)(param_2 + 0x30);
    func_0x00010c158e00();
    puVar1 = PTR_DAT_1126a50e8;
    if (iVar2 == 0) {
      _objc_retain(param_4);
      uVar6 = param_4;
      func_0x00010010fab4(param_4,puVar1);
      uVar14 = param_4;
      if ((int)uVar6 == 0) {
        uVar14 = 0;
      }
      _objc_retain(uVar14);
      _objc_release(param_4);
      uVar6 = uVar14;
      func_0x00010c27ad00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar14;
      func_0x00010c27ace0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      lVar4 = param_5;
      func_0x00010bf97060();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010010fab4();
      lVar3 = lVar4;
      if ((int)lVar8 == 0) {
        lVar3 = 0;
      }
      _objc_retain(lVar3);
      _objc_release(lVar4);
      if (lVar3 != 0) {
        lVar3 = param_5;
        func_0x00010bf00920();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_2;
        func_0x00010be8a160();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bfecde0();
        if (lVar9 != 0x7fffffffffffffff) {
          uVar10 = *(undefined8 *)(param_2 + 0x90);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = param_2;
          func_0x00010be1a300();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar3;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar12;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = param_2 + 8;
          _objc_loadWeakRetained();
          func_0x00010be6f200(param_2);
          uVar14 = param_1;
          func_0x00010c0f2220();
          param_2 = param_2 + 0xa8;
          _objc_loadWeakRetained(param_2);
          func_0x00010c0eafa0();
          func_0x00010c10d5c0(param_1,uVar14,uVar10);
          _objc_release(param_2);
          _objc_release(lVar9);
          _objc_release(lVar13);
          _objc_release(lVar12);
          _objc_release(lVar11);
          _objc_release(uVar10);
        }
        _objc_release(lVar8);
        _objc_release(lVar3);
        _objc_release(lVar4);
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      func_0x00010c272bc0(*(undefined8 *)(param_2 + 0x30));
    }
    _objc_release(uVar5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a04e98; end: 106a04ed7; -[SCGalleryStoriesTabV2Controller storyCellIsCollectionViewFullyVisible:] */

long FUN_106a04e98(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c267980();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106a04ed8; end: 106a04ee7; -[SCGalleryStoriesTabV2Controller storyCell:handleLongPress:viewModel:] */

void FUN_106a04ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleLongPress_cell_viewModel__1125688c8,param_4,param_3);
  return;
}



/* Entry: 106a04ee8; end: 106a04f3b; -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTriggerAddToStory:item:] */

void FUN_106a04ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c267920();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a04f3c; end: 106a05123; -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTapEntry:item:fromView:] */

void FUN_106a04f3c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_4;
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_retain(param_5);
    lVar9 = param_4;
    func_0x00010bfbd0e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfecfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x00010c0840e0();
      uVar3 = *(ulong *)(param_1 + 0x88);
      func_0x00010bf529e0();
      if (uVar2 < uVar3) {
        uVar11 = *(undefined8 *)(param_1 + 0x88);
        func_0x00010c0840e0(uVar1);
        func_0x00010c0dfd40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar11;
        func_0x00010bf00920();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be58560(param_1);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar11);
      }
    }
    func_0x00010bf94800(*(undefined8 *)(param_1 + 0x18));
    puVar6 = PTR_PTR_1126c3a10;
    _objc_alloc(PTR_PTR_1126c3a10);
    func_0x00010c02a9c0();
    lVar7 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar7);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = 0;
    func_0x00010c267720(lVar7);
    _objc_release(param_5);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar9);
  lVar7 = lVar9;
  func_0x00010010fab4(lVar9,PTR_DAT_1126a4ec8);
  lVar10 = lVar9;
  if ((int)lVar7 == 0) {
    lVar10 = 0;
  }
  _objc_retain(lVar10);
  if (lVar10 != 0) {
    param_4 = param_4 + 0xa8;
    _objc_loadWeakRetained(param_4);
    func_0x00010c2678a0();
    _objc_release(param_4);
  }
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 106a05124; end: 106a051a7; -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTapEditStory:item:fromView:] */

void FUN_106a05124(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010010fab4(param_4,PTR_DAT_1126a4ec8);
  lVar1 = param_4;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    param_1 = param_1 + 0xa8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2678a0();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a051a8; end: 106a051ab; -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTapViewSnapsFromView:] */

void FUN_106a051a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7ed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentSubscreenStoryFromView__11257d4f8);
  return;
}



/* Entry: 106a051ac; end: 106a052eb; -[SCGalleryStoriesTabV2Controller _presentSubscreenStoryFromView:] */

void FUN_106a051ac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cfb98;
  _objc_opt_class(PTR_PTR_1126cfb98);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c27dd80();
  if (uVar3 == 2) {
    uVar3 = uVar1;
    func_0x00010c29d560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25fbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf97060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf977c0();
    uVar6 = uVar3;
    func_0x00010bf97060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7ac80(param_1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else if (uVar3 == 1) {
    func_0x00010be7b560(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a052ec; end: 106a053df; -[SCGalleryStoriesTabV2Controller _presentFavoriteSnapsStory] */

void FUN_106a052ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2115c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c160(uVar3,param_2,lVar4,param_1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106a053e0; end: 106a0551f; -[SCGalleryStoriesTabV2Controller _presentConsolidatedAutoSavedStoryWithSubscreenStoryTitle:entrySource:customStoryEntryExternalId:] */

void FUN_106a053e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfbd160();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2115c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf49180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10bb80(uVar2,param_2,lVar3,param_1,param_4 == 0,param_5,param_3,uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a05520; end: 106a055bb; -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTapRemoveStories] */

void FUN_106a05520(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe2200();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be04350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayConsolidatedStoriesMySto_11255ea70);
  return;
}



/* Entry: 106a055bc; end: 106a055bf; -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTriggerCreateMashupForStory:] */

void FUN_106a055bc(void)

{
  return;
}



/* Entry: 106a055c0; end: 106a055c3; -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTriggerRefetchLatestFeaturedStories] */

void FUN_106a055c0(void)

{
  return;
}



/* Entry: 106a055c4; end: 106a055c7; -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTriggerResetAllFeaturedStoriesViewProgress] */

void FUN_106a055c4(void)

{
  return;
}



/* Entry: 106a055c8; end: 106a055cb; -[SCGalleryStoriesTabV2Controller memoriesActionMenuHelperDidTriggerInspectOriginalSnapsWithSnap:] */

void FUN_106a055c8(void)

{
  return;
}



/* Entry: 106a055cc; end: 106a05937; -[SCGalleryStoriesTabV2Controller _displayConsolidatedStoriesMyStoryOnboardingAlertIfNeeded] */

void FUN_106a055cc(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6aa0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = *(undefined **)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49180();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c08f260();
  _objc_release(puVar5);
  _objc_release();
  if (puVar6 != (undefined *)0x0) {
    puVar4 = auStack_90;
    _objc_initWeak(puVar4,param_1);
    puVar7 = PTR_PTR_1126aed70;
    func_0x000108dfd98c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106a05938;
    puStack_a0 = &UNK_1108482a8;
    unaff_x26 = &puStack_b8;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar8 = PTR_PTR_1126aed70;
    func_0x000108dfd9a4();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar5;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_106a05a40;
    puStack_c8 = &UNK_1108482a8;
    unaff_x27 = &puStack_e0;
    param_2 = auStack_90;
    _objc_copyWeak(auStack_c0,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar6 == (undefined *)0x1) {
      func_0x000108dfd95c();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
    }
    else {
      func_0x000108dfd974();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    puVar4 = PTR_PTR_1126aed78;
    _objc_alloc();
    puVar6 = puVar4;
    func_0x000108dfd9bc();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar7;
    puStack_80 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0();
    _objc_release(puVar9);
    _objc_release(puVar6);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_98);
    puVar4 = auStack_90;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 4);
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(param_2);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained();
  if (puVar4 != (undefined *)0x0) {
    uVar1 = *(undefined8 *)(puVar4 + 0x90);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a8280();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(puVar4 + 0x90);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c8e80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121e00();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf84b00(param_2);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


