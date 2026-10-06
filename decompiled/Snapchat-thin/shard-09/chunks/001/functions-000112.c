/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a13090; end: 106a13113; -[SCMemoriesStoryEditorHeaderCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13090(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f43c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  lVar2 = (long)_DAT_112755e6c;
  func_0x00010c256060(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c1ee2c0(*(undefined8 *)(param_1 + _DAT_112755e5c));
  func_0x00010bee28e0(param_1);
  return;
}



/* Entry: 106a13114; end: 106a131af; -[SCMemoriesStoryEditorHeaderCell _saveButton] */

void FUN_106a13114(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e67838);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x00010c23d620(puVar1);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__saveButtonTapped_112532aa0,0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a131b0; end: 106a131f3; -[SCMemoriesStoryEditorHeaderCell _loadingView] */

void FUN_106a131b0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc(PTR_PTR_1126aeff0);
  func_0x00010bfffb60();
  func_0x00010c23d620();
  func_0x00010c24dbc0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a131f4; end: 106a13313; -[SCMemoriesStoryEditorHeaderCell setViewModel:thumbnailGenerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a131f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112755e6c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c24eda0(*(undefined8 *)(param_1 + lVar3));
  uVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112755e5c;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c07d060();
  uVar2 = 0;
  if ((int)uVar1 == 0) {
    uVar2 = 3;
  }
  func_0x00010c1ee2c0(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c07d060(param_3);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3),param_2,(uint)uVar2 ^ 1);
  uVar2 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112755e60),param_2,uVar2);
  _objc_release(param_4);
  _objc_release(uVar2);
  func_0x00010bee28e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a13314; end: 106a133a7; -[SCMemoriesStoryEditorHeaderCell focusOnStoryNameTextFieldIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13314(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112755e5c;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  uVar3 = *(ulong *)(param_1 + lVar4);
  func_0x00010c082800();
  _objc_release(lVar1);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + lVar4);
    func_0x00010c073040();
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar4),PTR_s_becomeFirstResponder_1125a3810);
      return;
    }
  }
  return;
}



/* Entry: 106a133a8; end: 106a13703; -[SCMemoriesStoryEditorHeaderCell _updateTrailingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a133a8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar11 = (long)_DAT_112755e64;
  lVar2 = *(long *)(param_1 + lVar11);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar12 = *plStack_140;
    do {
      lVar13 = 0;
      do {
        if (*plStack_140 != lVar12) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c12c960(*(undefined8 *)(lStack_148 + lVar13 * 8));
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_150,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar3 = param_3;
  func_0x00010c07d200();
  lVar2 = param_1;
  if ((int)lVar3 == 0) {
    lVar3 = param_3;
    func_0x00010c07d060();
    if ((int)lVar3 != 0) {
      func_0x00010be98be0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106a134c4;
    }
  }
  else {
    func_0x00010be4f220();
    _objc_retainAutoreleasedReturnValue();
LAB_106a134c4:
    if (lVar2 != 0) {
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar11),param_2,lVar2);
      func_0x00010c219b60(lVar2,param_2,0);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar3 = lVar2;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0(lVar2);
      _CGRectGetWidth();
      lVar12 = lVar3;
      func_0x00010bf49420();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar2;
      lStack_110 = lVar12;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0(lVar2);
      _CGRectGetHeight();
      lVar4 = lVar13;
      func_0x00010bf49420();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      lStack_108 = lVar4;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010bf348e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010bf493a0(lVar5,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar2;
      lStack_100 = lVar7;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010bf34860(uVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar8;
      func_0x00010bf493a0(lVar8,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_f8 = lVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_110,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1,param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(lVar11);
      _objc_release(uVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(uVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar3);
      func_0x00010bfb68e0(lVar2);
      _CGRectGetWidth();
      func_0x00010c181140(*(undefined8 *)(param_1 + _DAT_112755e68));
      _objc_release(lVar2);
      goto LAB_106a136b8;
    }
  }
  func_0x00010c181140(0,*(undefined8 *)(param_1 + _DAT_112755e68));
LAB_106a136b8:
  func_0x00010c1cbf40(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  param_3 = param_3 + _DAT_112755e70;
  _objc_loadWeakRetained(param_3);
  func_0x00010c259920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a13704; end: 106a1373f; -[SCMemoriesStoryEditorHeaderCell _saveButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13704(long param_1)

{
  param_1 = param_1 + _DAT_112755e70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c259920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a13740; end: 106a13743; -[SCMemoriesStoryEditorHeaderCell thumbnailGenerator:didUpdateSnapThumbnailWithImage:snap:duration:] */

void FUN_106a13740(void)

{
  return;
}



/* Entry: 106a13744; end: 106a1374b; -[SCMemoriesStoryEditorHeaderCell thumbnailGenerator:didUpdateStoryThumbnailWithImage:snap:latestSnaps:duration:] */

void FUN_106a13744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea80b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setStoryThumbnailImage__1125879d0,param_4);
  return;
}



/* Entry: 106a1374c; end: 106a13753; -[SCMemoriesStoryEditorHeaderCell thumbnailGenerator:didFailToUpdateStoryThumbnailForSnap:] */

void FUN_106a1374c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea80b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setStoryThumbnailImage__1125879d0,0);
  return;
}



/* Entry: 106a13754; end: 106a13837; -[SCMemoriesStoryEditorHeaderCell _setStoryThumbnailImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112755e58;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (lVar2 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106a13838;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c27ac60(0x3fd3333333333333,puVar1,param_2,uVar3,0x500000,&puStack_60,0);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106a13838; end: 106a1384b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112755e58),
             PTR_s_setImage__1126481e8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106a1384c; end: 106a138af; -[SCMemoriesStoryEditorHeaderCell thumbnailGenerator:didLoadMiniThumbnail:snap:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1384c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = (long)_DAT_112755e58;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a138b0; end: 106a138b3; -[SCMemoriesStoryEditorHeaderCell setHighlighted:] */

void FUN_106a138b0(void)

{
  return;
}



/* Entry: 106a138b4; end: 106a138b7; -[SCMemoriesStoryEditorHeaderCell setSelected:selectOverlayImage:snapIds:] */

void FUN_106a138b4(void)

{
  return;
}



/* Entry: 106a138b8; end: 106a138bb; -[SCMemoriesStoryEditorHeaderCell setSelectMode:] */

void FUN_106a138b8(void)

{
  return;
}



/* Entry: 106a138bc; end: 106a138bf; -[SCMemoriesStoryEditorHeaderCell setSelectionOrderNumber:orderNumbersBySnapId:] */

void FUN_106a138bc(void)

{
  return;
}



/* Entry: 106a138c0; end: 106a1398f; -[SCMemoriesStoryEditorHeaderCell animateLongTapForTouchLocation:reverse:] */

void FUN_106a138c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar2 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar2 = 0x3fee666666666666;
  }
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = uVar2;
  func_0x00010bf03400(0x3fc999999999999a,puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106a13990; end: 106a13a0f;  */

void FUN_106a13990(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [48];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CGAffineTransformMakeScale
              (auStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
    lVar2 = lVar1;
    func_0x00010bf4dce0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106a13a10; end: 106a13a17; -[SCMemoriesStoryEditorHeaderCell interactionMode] */

undefined8 FUN_106a13a10(void)

{
  return 1;
}



/* Entry: 106a13a18; end: 106a13a27; -[SCMemoriesStoryEditorHeaderCell transitioningPosterFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755e58),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106a13a28; end: 106a13a37; -[SCMemoriesStoryEditorHeaderCell transitioningImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13a28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755e58),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106a13a38; end: 106a13a67; -[SCMemoriesStoryEditorHeaderCell transitioningExpandingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13a38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755e58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a13a68; end: 106a13a77; -[SCMemoriesStoryEditorHeaderCell setTransitioningInitialImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755e58),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 106a13a78; end: 106a13b9b; -[SCMemoriesStoryEditorHeaderCell textField:shouldChangeCharactersInRange:replacementString:] */

bool FUN_106a13a78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar3 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  lVar5 = param_6;
  func_0x00010c08fa60();
  uVar1 = (lVar4 - param_5) + lVar5;
  _objc_release(lVar3);
  uVar2 = uRam00000001133b8078;
  if ((uRam00000001133b8078 < uVar1) &&
     (lVar3 = param_6, func_0x00010bf2c4e0(param_6,param_2,1), (int)lVar3 != 0)) {
    lVar3 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010c260c20(lVar4,param_2,uRam00000001133b8078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_3,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar1 <= uVar2;
}



/* Entry: 106a13b9c; end: 106a13bd3; -[SCMemoriesStoryEditorHeaderCell textFieldDidBeginEditing:] */

void FUN_106a13b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c140de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a13bd4; end: 106a13cab; -[SCMemoriesStoryEditorHeaderCell textFieldDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c140de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)puVar2 != 0) {
    lVar3 = param_1 + _DAT_112755e70;
    _objc_loadWeakRetained(lVar3);
    uVar1 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259900(lVar3,param_2,param_1,uVar1);
    _objc_release(uVar1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a13cac; end: 106a13cc7; -[SCMemoriesStoryEditorHeaderCell textFieldShouldReturn:] */

undefined8 FUN_106a13cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c13a0e0(param_3);
  return 0;
}



/* Entry: 106a13cc8; end: 106a13d57; -[SCMemoriesStoryEditorHeaderCell _textFieldDidChange:] */

void FUN_106a13cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106a13d58;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03400(0x3fa999999999999a,puVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106a13d58; end: 106a13d5f;  */

void FUN_106a13d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 106a13d60; end: 106a13d83; -[SCMemoriesStoryEditorHeaderCell textDroppableView:proposalForDrop:] */

void FUN_106a13d60(void)

{
  _objc_alloc(PTR__OBJC_CLASS___UITextDropProposal_1126cfc48);
  func_0x00010c00e7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a13d84; end: 106a13d93; -[SCMemoriesStoryEditorHeaderCell disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106a13d84(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112755e54);
}



/* Entry: 106a13d94; end: 106a13da3; -[SCMemoriesStoryEditorHeaderCell setDisableMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13d94(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112755e54) = param_3;
  return;
}



/* Entry: 106a13da4; end: 106a13dc3; -[SCMemoriesStoryEditorHeaderCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13da4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112755e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a13dc4; end: 106a13dd7; -[SCMemoriesStoryEditorHeaderCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112755e70,param_3);
  return;
}



/* Entry: 106a13dd8; end: 106a13e63; -[SCMemoriesStoryEditorHeaderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a13dd8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112755e70);
  _objc_storeStrong(param_1 + _DAT_112755e6c,0);
  _objc_storeStrong(param_1 + _DAT_112755e68,0);
  _objc_storeStrong(param_1 + _DAT_112755e64,0);
  _objc_storeStrong(param_1 + _DAT_112755e5c,0);
  _objc_storeStrong(param_1 + _DAT_112755e60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755e58,0);
  return;
}



/* Entry: 106a13e64; end: 106a1419b; -[SCMemoriesStoryEditorSectionHeader initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106a13e64(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f43c8;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar3 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar16 = (long)_DAT_112755e74;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(puVar2);
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = *(long *)((long)puVar1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_88 = lVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar15;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar15);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    func_0x000108dfd5fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112755e74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1,0);
  return puVar1;
}



/* Entry: 106a1419c; end: 106a141af; -[SCMemoriesStoryEditorSectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1419c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755e74,0);
  return;
}



/* Entry: 106a141b0; end: 106a146ef; -[SCMemoriesStoryEditorSnapCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106a141b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 unaff_x20;
  long lVar12;
  long lVar13;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126f43d0;
  puVar10 = &uStack_b8;
  uStack_b8 = param_1;
  _objc_msgSendSuper2(puVar10,PTR_s_initWithFrame__1125e2948);
  lVar12 = 0;
  if (puVar10 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112755e78;
    uVar11 = *(undefined8 *)((long)puVar10 + lVar12);
    *(undefined **)((long)puVar10 + lVar12) = puVar1;
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)((long)puVar10 + lVar12);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar11);
    _objc_release(puVar1);
    func_0x00010befbd60(*(undefined8 *)((long)puVar10 + lVar12));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar10 + lVar12));
    puVar2 = puVar10;
    func_0x00010bf4dce0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar10 + lVar12));
    puStack_e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar11 = *(undefined8 *)((long)puVar10 + lVar12);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    lStack_c8 = uVar11;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar2;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar11;
    uVar3 = *(undefined8 *)((long)puVar10 + lVar12);
    lStack_d8 = uVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010bf4dce0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar11;
    uVar5 = *(undefined8 *)((long)puVar10 + lVar12);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar6;
    uVar7 = *(undefined8 *)((long)puVar10 + lVar12);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_e0);
    _objc_release(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar11);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(lStack_d8);
    _objc_release(puStack_d0);
    _objc_release(puStack_c0);
    _objc_release(lStack_c8);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar8 = puVar1;
    func_0x000106e3f464();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar13 = (long)_DAT_112755e7c;
    uVar11 = *(undefined8 *)((long)puVar10 + lVar13);
    *(undefined **)((long)puVar10 + lVar13) = puVar1;
    _objc_release(uVar11);
    _objc_release(puVar8);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar10 + lVar13));
    puVar2 = puVar10;
    func_0x00010bf4dce0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar10 + lVar13));
    puStack_e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar12 = *(long *)((long)puVar10 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    lStack_c8 = lVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar2;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_a8 = lVar12;
    uVar9 = *(undefined8 *)((long)puVar10 + lVar13);
    lStack_d8 = lVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010bf4dce0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar11;
    uVar3 = *(undefined8 *)((long)puVar10 + lVar13);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = uVar3;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = unaff_x20;
    uVar5 = *(undefined8 *)((long)puVar10 + lVar13);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_e0);
    _objc_release(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(unaff_x20);
    _objc_release(uVar3);
    _objc_release(uVar11);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar9);
    _objc_release(lStack_d8);
    _objc_release(puStack_d0);
    _objc_release(puStack_c0);
    lVar12 = lStack_c8;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar10;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_106a146f0;
  puStack_108 = PTR_PTR_1126f43d0;
  lStack_110 = lVar12;
  uStack_100 = unaff_x20;
  puStack_f8 = puVar10;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_110,PTR_s_prepareForReuse_112620008);
  puVar10 = *(undefined8 **)(lVar12 + _DAT_112755e7c);
  func_0x00010c1a7f60(puVar10);
  return puVar10;
}



/* Entry: 106a146f0; end: 106a14743; -[SCMemoriesStoryEditorSnapCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a146f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f43d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112755e7c));
  return;
}



/* Entry: 106a14744; end: 106a14923; -[SCMemoriesStoryEditorSnapCell setViewModel:thumbnailGenerator:memoriesStreamingManager:memoriesExperimentService:memoriesMonetizationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a14744(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c233f00();
  puStack_58 = PTR_PTR_1126f43d0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_configureWithSyncStatusGenerator_1125af898,0,param_4,param_5,
                      0,0,0,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  puStack_68 = PTR_PTR_1126f43d0;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_setSelectMode_disableMode__11265c560,0,0);
  uVar1 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar2 = uVar1;
  func_0x00010c230660();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c2226c0(param_1);
  }
  uVar1 = param_3;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010b5fa760();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000106e3f464();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_106e3f450();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = (long)_DAT_112755e7c;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c113000(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5fa088();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106a14924; end: 106a1498b; -[SCMemoriesStoryEditorSnapCell _deleteTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a14924(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_112755e80;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010bf34260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259940(lVar1,param_2,param_1,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a1498c; end: 106a14993; -[SCMemoriesStoryEditorSnapCell interactionMode] */

undefined8 FUN_106a1498c(void)

{
  return 1;
}



/* Entry: 106a14994; end: 106a149b3; -[SCMemoriesStoryEditorSnapCell storyEditorCellDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a14994(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112755e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a149b4; end: 106a149c7; -[SCMemoriesStoryEditorSnapCell setStoryEditorCellDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a149b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112755e80,param_3);
  return;
}



/* Entry: 106a149c8; end: 106a14a13; -[SCMemoriesStoryEditorSnapCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a149c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112755e80);
  _objc_storeStrong(param_1 + _DAT_112755e7c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755e78,0);
  return;
}



/* Entry: 106a14a14; end: 106a14ebf; -[SCMemoriesStoryEditorViewController initWithWithLogger:dataProvider:actionHandler:storyEditorDelegate:pageTracker:memoriesStreamingManager:circumstanceEngine:applicationLifecycleEvents:memoriesExperimentService:storageQuotaManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106a14a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f43d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 == (undefined8 *)0x0) goto LAB_106a14e24;
  func_0x00010c189400(puVar1);
  lVar7 = (long)_DAT_112755e84;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
  *(undefined8 *)((long)puVar1 + lVar7) = param_3;
  _objc_release(uVar2);
  lVar8 = (long)_DAT_112755e88;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
  *(undefined8 *)((long)puVar1 + lVar8) = param_4;
  _objc_release(uVar2);
  lVar7 = (long)_DAT_112755e8c;
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
  *(undefined8 *)((long)puVar1 + lVar7) = param_5;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
  func_0x00010c0ead40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  func_0x00010c1e1580(*(undefined8 *)((long)puVar1 + lVar7));
  _objc_storeWeak((long)puVar1 + (long)_DAT_112755e90,param_6);
  lVar7 = (long)_DAT_112755e94;
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
  *(undefined8 *)((long)puVar1 + lVar7) = param_7;
  _objc_release(uVar2);
  lVar7 = (long)_DAT_112755e98;
  _objc_retain(param_8);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
  *(undefined8 *)((long)puVar1 + lVar7) = param_8;
  _objc_release(uVar2);
  lVar7 = (long)_DAT_112755e9c;
  _objc_retain(param_9);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
  *(undefined8 *)((long)puVar1 + lVar7) = param_9;
  _objc_release(uVar2);
  lVar7 = (long)_DAT_112755ea0;
  _objc_retain(param_12);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
  *(undefined8 *)((long)puVar1 + lVar7) = param_12;
  _objc_release(uVar2);
  uVar2 = param_9;
  func_0x00010bf1f440();
  *(char *)((long)puVar1 + (long)_DAT_112755ea4) = (char)uVar2;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112755ea8);
  *(undefined **)((long)puVar1 + (long)_DAT_112755ea8) = puVar3;
  _objc_release(uVar2);
  ppuVar4 = *(undefined ***)((long)puVar1 + lVar8);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c259960();
  _objc_release(ppuVar4);
  if (ppuVar5 < (undefined **)0x2) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e1e6d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e6d8,0);
    _objc_retainAutoreleasedReturnValue();
LAB_106a14cac:
    func_0x00010c216240(puVar1);
    _objc_release(ppuVar4);
  }
  else if (ppuVar5 == (undefined **)0x2) {
    func_0x000107e9096c();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106a14cac;
  }
  lVar7 = (long)_DAT_112755eac;
  _objc_retain(param_11);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
  *(undefined8 *)((long)puVar1 + lVar7) = param_11;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112755eb0);
  *(undefined **)((long)puVar1 + (long)_DAT_112755eb0) = puVar3;
  _objc_release(uVar2);
  _objc_initWeak(auStack_78,puVar1);
  uVar2 = param_10;
  func_0x00010bf75dc0(param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  uVar6 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
LAB_106a14e24:
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



/* Entry: 106a14ec0; end: 106a14eeb;  */

void FUN_106a14ec0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a14eec; end: 106a14f57; -[SCMemoriesStoryEditorViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a14eec(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755e88);
  func_0x00010bf643e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f43d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a14f58; end: 106a153db; -[SCMemoriesStoryEditorViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a14f58(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f43d8;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c20eaa0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d0ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010befbd60(puVar1);
  puStack_a0 = puVar1;
  func_0x00010c160fc0(puVar1);
  lVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112755eb4;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar9);
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x000108dfd764();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar10);
  _objc_release(uVar9);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar11));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  dVar12 = 0.0;
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar11));
  func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_a8 = uVar10;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(-13.0 - dVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_88 = uVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b0);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uStack_a8);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar11));
  uVar9 = *(undefined8 *)(param_1 + _DAT_112755e88);
  func_0x00010bf643e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar9);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c178280();
  func_0x00010c18b5e0(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar2);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112755eb8));
  _objc_release(puVar7);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(param_1);
  _objc_release(puVar1);
  puVar8 = puStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puStack_e0 = &DAT_112755e88;
  pcStack_b8 = FUN_106a153dc;
  puStack_e8 = PTR_PTR_1126f43d8;
  puStack_f0 = puVar8;
  puStack_d8 = puVar1;
  puStack_d0 = puVar7;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_viewDidAppear__112684bd0);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(puVar8);
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar9 = *(undefined8 *)(puVar8 + _DAT_112755e94);
    func_0x00010c0f2220(puVar8);
    func_0x00010c24fc40(uVar9);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 106a153dc; end: 106a15477; -[SCMemoriesStoryEditorViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a153dc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f43d8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112755e94);
    func_0x00010c0f2220(param_1);
    func_0x00010c24fc40(uVar2);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 106a15478; end: 106a154d3; -[SCMemoriesStoryEditorViewController _pageHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106a15478(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                    long param_5)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112755eb8;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  if (param_4 == 0.0) {
    param_2 = 0.0;
  }
  else {
    func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar1));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
    param_2 = param_2 / param_4;
  }
  return param_2;
}



/* Entry: 106a154d4; end: 106a154e7; -[SCMemoriesStoryEditorViewController _keyboardWillShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a154d4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112755ebc) = 1;
  return;
}



/* Entry: 106a154e8; end: 106a154f7; -[SCMemoriesStoryEditorViewController _keyboardDidHide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a154e8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112755ebc) = 0;
  return;
}



/* Entry: 106a154f8; end: 106a155c3; -[SCMemoriesStoryEditorViewController _willDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a154f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755e88);
  func_0x00010bf643e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39f80();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bdc45c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0020(*(undefined8 *)(param_1 + _DAT_112755e8c));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a155c4;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(lVar2);
  return;
}



/* Entry: 106a155c4; end: 106a155fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a155c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112755e90;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c259980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a155fc; end: 106a158a7; -[SCMemoriesStoryEditorViewController _updatedActionModel:snapIdMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a155fc(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
LAB_106a15768:
    ppuVar3 = param_3;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0d3c80();
    _objc_release(ppuVar1);
    _objc_release(ppuVar3);
  }
  else {
    ppuVar3 = param_3;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf529e0();
    _objc_release(ppuVar3);
    if (ppuVar4 == (undefined **)0x0) goto LAB_106a15768;
    ppuVar4 = param_3;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (ppuVar3 != (undefined **)0x0) {
      ppuVar11 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar5 = *(undefined8 *)((long)ppuVar11 * 8);
        func_0x00010c241220(uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar1);
        _objc_release(lVar10);
        _objc_release(uVar5);
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar3 != ppuVar11);
      ppuVar3 = ppuVar4;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar1;
  }
  puVar6 = PTR_PTR_1126b2238;
  _objc_alloc();
  lVar10 = (long)_DAT_112755e88;
  lVar7 = *(long *)(param_1 + lVar10);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf643e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010c0ed4e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  func_0x00010c25b6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c010180();
  _objc_release(ppuVar1);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(ppuVar4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  if (lVar10 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c1beb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)((long)param_3 + (long)_DAT_112755eb4),PTR_s_setLoading__11264d500,1);
    return;
  }
  if (lVar10 == 1) {
    uVar5 = *(undefined8 *)((long)param_3 + (long)_DAT_112755eb4);
    param_3 = &PTR____CFConstantStringClassReference_110db7318;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7318,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar10 != 0) goto LAB_106a1593c;
    uVar5 = *(undefined8 *)((long)param_3 + (long)_DAT_112755eb4);
    func_0x000108dfd764();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216260(uVar5);
  _objc_release(param_3);
LAB_106a1593c:
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 106a158a8; end: 106a159e3; -[SCMemoriesStoryEditorViewController _transitionSaveButtonToState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a158a8(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c1beb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)((long)param_1 + (long)_DAT_112755eb4),PTR_s_setLoading__11264d500,1);
    return;
  }
  if (param_3 == 1) {
    uVar1 = *(undefined8 *)((long)param_1 + (long)_DAT_112755eb4);
    param_1 = &PTR____CFConstantStringClassReference_110db7318;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7318,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 0) goto LAB_106a1593c;
    uVar1 = *(undefined8 *)((long)param_1 + (long)_DAT_112755eb4);
    func_0x000108dfd764();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216260(uVar1);
  _objc_release(param_1);
LAB_106a1593c:
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 106a159e4; end: 106a159fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a159e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112755eb4),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106a159fc; end: 106a15a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a159fc(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = (long)_DAT_112755eb4;
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
    func_0x00010c076be0();
    if ((iVar1 != 0) && (*(long *)(param_1 + 0x28) == 3)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1beb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),PTR_s_setLoading__11264d500,0);
      return;
    }
  }
  return;
}



/* Entry: 106a15a58; end: 106a15a8b; -[SCMemoriesStoryEditorViewController _handleTap:] */

void FUN_106a15a58(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a15a8c; end: 106a15b37; -[SCMemoriesStoryEditorViewController _applicationDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a15a8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112755e88;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdde40();
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c078a20();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be03120(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be02290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss__11255e240,0);
    return;
  }
  return;
}



/* Entry: 106a15b38; end: 106a15b67; -[SCMemoriesStoryEditorViewController _dismiss:] */

void FUN_106a15b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010beeafa0();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,param_3,0);
  return;
}



/* Entry: 106a15b68; end: 106a15bcb; -[SCMemoriesStoryEditorViewController _dismissPresentedViewControllerIfNeeded] */

void FUN_106a15b68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c10f940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a15bcc; end: 106a15f1b; -[SCMemoriesStoryEditorViewController _displaySaveAlertIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a15bcc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    lVar11 = (long)_DAT_112755e88;
    uVar1 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar1;
    func_0x00010bfdde40();
    if ((int)uVar12 == 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar2;
      func_0x00010c078a20();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar12 != 0) {
        param_2 = 1;
        (**(code **)(param_3 + 0x10))(param_3);
        goto LAB_106a15e78;
      }
    }
    else {
      _objc_release(uVar1);
    }
    _objc_initWeak(auStack_90,param_1);
    puVar4 = PTR_PTR_1126aed70;
    ppuVar3 = &PTR____CFConstantStringClassReference_110db7318;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7318,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106a15f1c;
    puStack_a8 = &UNK_110953518;
    unaff_x27 = &puStack_c0;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_3);
    puStack_a0 = param_3;
    func_0x00010beff4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar5 = PTR_PTR_1126aed70;
    func_0x000108dfd794();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar8;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_106a16100;
    puStack_d8 = &UNK_110853c30;
    _objc_copyWeak(auStack_c8,auStack_90);
    _objc_retain(param_3);
    puStack_d0 = param_3;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar6 = PTR_PTR_1126aed78;
    _objc_alloc();
    ppuVar3 = &PTR____CFConstantStringClassReference_110db75f8;
    param_2 = 0;
    func_0x00010bcbeaa8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar3;
    func_0x000108dfd74c();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar4;
    puStack_80 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0();
    _objc_release(puVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar3);
    puVar8 = puVar6;
    func_0x00010c10eda0(param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puStack_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(puVar4);
    _objc_release(puStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    unaff_x28 = &puStack_f0;
  }
LAB_106a15e78:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x28 + 0x28));
  _objc_destroyWeak(unaff_x27 + 5);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(param_2);
  _objc_retain(puVar8);
  puVar4 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (puVar4 != (undefined *)0x0) {
    lVar11 = (long)_DAT_112755e88;
    uVar1 = *(undefined8 *)(puVar4 + lVar11);
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar1;
    func_0x00010bfdde40();
    if ((int)uVar12 == 0) {
      uVar9 = *(ulong *)(puVar4 + lVar11);
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c078a20();
      _objc_release(uVar9);
      _objc_release(uVar1);
      if ((uVar10 & 1) != 0) goto LAB_106a16034;
    }
    else {
      _objc_release(uVar1);
    }
    func_0x00010c1beb60(puVar8);
    _objc_retain(param_2);
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar12);
    func_0x00010be98f40(puVar4);
    _objc_release(uVar12);
    _objc_release(param_2);
  }
LAB_106a16034:
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(param_2);
  return;
}



/* Entry: 106a15f1c; end: 106a16067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a15f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar6 = (long)_DAT_112755e88;
    uVar2 = *(undefined8 *)(lVar1 + lVar6);
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfdde40();
    if ((int)uVar5 == 0) {
      uVar3 = *(ulong *)(lVar1 + lVar6);
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c078a20();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) != 0) goto LAB_106a16034;
    }
    else {
      _objc_release(uVar2);
    }
    func_0x00010c1beb60(param_3);
    _objc_retain(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    func_0x00010be98f40(lVar1);
    _objc_release(uVar5);
    _objc_release(param_2);
  }
LAB_106a16034:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106a16068; end: 106a160eb;  */

void FUN_106a16068(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bf84b00(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 106a160ec; end: 106a160ff;  */

void FUN_106a160ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106a160fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106a16100; end: 106a162cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a16100(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    func_0x00010bf84b00(param_2);
  }
  else {
    uVar2 = *(ulong *)(lVar1 + _DAT_112755e88);
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c078a20();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar6 = *(undefined8 *)(lVar1 + _DAT_112755e8c);
      lVar4 = lVar1;
      func_0x00010bdc45c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_2);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      func_0x00010bfd0020(uVar6);
      _objc_release(lVar4);
      _objc_release(uVar5);
      uVar5 = param_2;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      func_0x00010bf84b00(param_2);
    }
  }
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106a162cc; end: 106a162db;  */

void FUN_106a162cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106a162d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106a162dc; end: 106a1634f;  */

void FUN_106a162dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106a16350;
  puStack_30 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010bf84b00(uVar1,param_2,1,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 106a16350; end: 106a1636f;  */

void FUN_106a16350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106a1635c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106a16370; end: 106a164d7; -[SCMemoriesStoryEditorViewController _saveEdits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a16370(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010c1beb60(*(undefined8 *)(param_1 + _DAT_112755eb4),param_2,1);
  func_0x00010bdd4e00(param_1,param_2,1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112755e8c);
  lVar1 = param_1;
  func_0x00010bdc4600(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106a164d8;
  puStack_58 = &UNK_110858070;
  lStack_50 = param_1;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010bfd0020(uVar5,param_2,4,lVar1,&puStack_70);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112755e88);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0ed4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x000107e75140();
  _objc_release(uVar5);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112755eb8);
    puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128fa0(uVar5,param_2,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106a164d8; end: 106a16553;  */

void FUN_106a164d8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_initWeak(auStack_28,lVar2);
  _objc_retain();
  if (lVar2 != 0) {
    func_0x00010be17660(lVar2);
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,1);
    }
  }
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a16554; end: 106a165ef; -[SCMemoriesStoryEditorViewController _finishedSavingTemporaryEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a16554(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755e88);
  func_0x00010bf643e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139b60();
  _objc_release(uVar1);
  func_0x00010bdd4e00(param_1,param_2,0);
  func_0x00010becf0e0(param_1,param_2,3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755eb8);
  puVar2 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128fa0(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a165f0; end: 106a166f7; -[SCMemoriesStoryEditorViewController _blockAllUserInteractions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a165f0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112755ec0;
  lVar1 = *(long *)(param_1 + lVar4);
  if (param_3 == 0) {
    if (lVar1 == 0) {
      return;
    }
    uVar3 = 1;
  }
  else {
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      lVar1 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c013de0();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      _objc_release(lVar1);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
      _objc_release(puVar2);
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 106a166f8; end: 106a167cf; -[SCMemoriesStoryEditorViewController _saveEditsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a166f8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112755e88;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfdde40();
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar4 != 0) {
    func_0x00010c0bb900();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be98f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveEdits__112583d70,0);
    return;
  }
  uVar3 = uVar2;
  func_0x00010c078a20();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf643e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb900();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010becf0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionSaveButtonToState__1125915e0,3);
  return;
}



/* Entry: 106a167d0; end: 106a1688f; -[SCMemoriesStoryEditorViewController _moreTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a167d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_112755e88);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112755e8c);
    func_0x00010bdc45c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0020(uVar4,param_2,7,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a16890; end: 106a1698b; -[SCMemoriesStoryEditorViewController _operaPresenterScrollToSnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a16890(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  lVar6 = (long)_DAT_112755ec4;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 != 0) {
    func_0x00010c0840e0();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c1554e0(uVar2);
    func_0x00010bfed020(puVar3,param_2,lVar1 + -1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x00010c0840e0(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c1554e0(uVar2);
    func_0x00010bfed020(puVar4,param_2,lVar1 + 1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010be6dd40(param_1,param_2,*(undefined8 *)(param_1 + lVar6),param_3);
    if (((uVar5 & 1) == 0) &&
       (uVar5 = param_1, func_0x00010be6dd40(param_1,param_2,puVar3,param_3), (uVar5 & 1) == 0)) {
      func_0x00010be6dd40(param_1,param_2,puVar4,param_3);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a1698c; end: 106a16b73; -[SCMemoriesStoryEditorViewController _operaPresenterScrollToIndexPathIfNeeded:snapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a1698c(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = param_1;
  puVar5 = param_3;
  func_0x00010bddc460();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = lVar7;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar1);
          }
          uVar2 = *(undefined8 *)(lStack_128 + lVar11 * 8);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar2;
          puVar6 = (undefined8 *)param_4;
          func_0x00010c0720c0();
          _objc_release(uVar2);
          if ((int)uVar8 != 0) {
            lVar9 = (long)_DAT_112755ec4;
            _objc_retain(param_3);
            uVar8 = *(undefined8 *)(param_1 + lVar9);
            *(undefined1 **)(param_1 + lVar9) = param_3;
            _objc_release(uVar8);
            lVar9 = param_1;
            func_0x00010bebe740();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar9 != 0) goto LAB_106a16ae4;
            puVar6 = (undefined8 *)param_3;
            func_0x00010c1525a0(*(undefined8 *)(param_1 + _DAT_112755eb8),param_2,param_3,2,0);
            uVar8 = 1;
            goto LAB_106a16b14;
          }
          lVar11 = lVar11 + 1;
        } while (lVar9 != lVar11);
        lVar9 = lVar1;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
LAB_106a16ae4:
    uVar8 = 0;
LAB_106a16b14:
    _objc_release(lVar1);
    puVar5 = (undefined1 *)puVar6;
  }
  _objc_release(lVar7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  if (*(long *)(param_3 + _DAT_112755ec8) != 0) {
    puVar3 = puVar5;
    func_0x00010c0840e0();
    lVar7 = (long)_DAT_112755ea8;
    puVar4 = *(undefined1 **)(param_3 + lVar7);
    func_0x00010bf529e0();
    if (puVar3 < puVar4) {
      uVar8 = *(undefined8 *)(param_3 + lVar7);
      puVar3 = puVar5;
      func_0x00010c0840e0(puVar5);
      func_0x00010c0dfd40(uVar8,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106a16bf4;
    }
  }
  uVar8 = 0;
LAB_106a16bf4:
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return uVar8;
}



/* Entry: 106a16b74; end: 106a16c0f; -[SCMemoriesStoryEditorViewController _cellViewModelForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a16b74(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112755ec8) != 0) {
    uVar1 = param_3;
    func_0x00010c0840e0();
    lVar4 = (long)_DAT_112755ea8;
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      uVar1 = param_3;
      func_0x00010c0840e0(param_3);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106a16bf4;
    }
  }
  uVar3 = 0;
LAB_106a16bf4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106a16c10; end: 106a16c6f; -[SCMemoriesStoryEditorViewController _sourceViewOfOperaPresentingIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a16c10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112755eb8);
  func_0x00010bf33b60(uVar2,param_2,*(undefined8 *)(param_1 + _DAT_112755ec4));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a16c70; end: 106a16def; -[SCMemoriesStoryEditorViewController _getSnapCellViewModelsWithSectionCellViewModels:] */

void FUN_106a16c70(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      _objc_retain(puVar2);
      func_0x00010c0bff00(uVar5);
      _objc_release(puVar2);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106a16df0; end: 106a16dff;  */

void FUN_106a16df0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106a16e00; end: 106a16f43; -[SCMemoriesStoryEditorViewController _getSnapSectionCellViewModelsWithCellViewModels:] */

undefined * FUN_106a16e00(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_PTR_1126cfc28;
        func_0x00010c23f7a0(PTR_PTR_1126cfc28,param_2,*(undefined8 *)(lStack_118 + lVar5 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar3);
        _objc_release(puVar3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x74;
}



/* Entry: 106a16f44; end: 106a16f4b; -[SCMemoriesStoryEditorViewController pageViewName] */

undefined8 FUN_106a16f44(void)

{
  return 0x74;
}



/* Entry: 106a16f4c; end: 106a16feb; -[SCMemoriesStoryEditorViewController _cellSize] */

void FUN_106a16f4c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  return;
}



/* Entry: 106a16fec; end: 106a17043; -[SCMemoriesStoryEditorViewController _headerSize] */

undefined1  [16] FUN_106a16fec(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  auVar2._8_8_ = 0x4042800000000000;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 106a17044; end: 106a1732b; -[SCMemoriesStoryEditorViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a17044(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c82c0(0);
  uVar8 = 0x3ff0000000000000;
  func_0x00010c1c8300(0x3ff0000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014040(puVar2,param_2,puVar1);
  lVar7 = (long)_DAT_112755eb8;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar4);
  _objc_release(lVar5);
  func_0x00010c1b6de0(*(undefined8 *)(param_1 + lVar7),param_2,1);
  func_0x00010c1f7e20(*(undefined8 *)(param_1 + lVar7),param_2,1);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar7),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar7),param_2,0);
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar7),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar7),param_2,
                      &PTR____CFConstantStringClassReference_110e67918);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  puVar2 = PTR_PTR_1126cfc50;
  _objc_opt_class(PTR_PTR_1126cfc50);
  puVar3 = PTR_PTR_1126cfc50;
  _objc_opt_class(PTR_PTR_1126cfc50);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar4,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  puVar2 = PTR_PTR_1126cfc58;
  _objc_opt_class(PTR_PTR_1126cfc58);
  puVar3 = PTR_PTR_1126cfc58;
  _objc_opt_class(PTR_PTR_1126cfc58);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar4,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  puVar2 = PTR_PTR_1126cfc60;
  _objc_opt_class(PTR_PTR_1126cfc60);
  puVar3 = PTR_PTR_1126cfc60;
  _objc_opt_class(PTR_PTR_1126cfc60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar4,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  puVar2 = PTR_PTR_1126cfc68;
  _objc_opt_class(PTR_PTR_1126cfc68);
  uVar6 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  puVar3 = PTR_PTR_1126cfc68;
  _objc_opt_class(PTR_PTR_1126cfc68);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(uVar4,param_2,puVar2,uVar6,puVar3);
  _objc_release(puVar3);
  func_0x00010c1916a0(*(undefined8 *)(param_1 + lVar7),param_2,1);
  func_0x00010c191640(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  func_0x00010c192000(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  puVar2 = PTR_PTR_1126c3bb0;
  _objc_alloc();
  func_0x00010bfff900();
  lVar5 = (long)_DAT_112755ecc;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c2115c0(*(undefined8 *)(param_1 + lVar5),param_2,3);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010c181f80(0x4034000000000000,0,uVar8,0,*(undefined8 *)(param_1 + lVar7));
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106a1732c; end: 106a1741b; -[SCMemoriesStoryEditorViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_106a1732c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a1741c;
  uStack_40 = 0x106a1742c;
  _objc_retain(param_1);
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010be04d20(param_1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a1741c; end: 106a17433;  */

void FUN_106a1741c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a17434; end: 106a1749b;  */

void FUN_106a17434(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010beeafa0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  puStack_28 = PTR_PTR_1126f43d8;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didSelectDismissalActionWithHead_1125bc3f8,
                      *(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 106a1749c; end: 106a17587; -[SCMemoriesStoryEditorViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106a1749c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  
  _objc_retain(param_5);
  lVar5 = (long)_DAT_112755e88;
  uVar1 = *(undefined8 *)(param_3 + lVar5);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdde40();
  if ((int)uVar2 == 0) {
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c078a20();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      lVar5 = (long)_DAT_112755eb8;
      if (param_5 == *(long *)(param_3 + lVar5)) {
        func_0x00010bf4cdc0();
        func_0x00010befda00(*(undefined8 *)(param_3 + lVar5));
        bVar4 = param_2 + param_1 <= 0.0;
      }
      else {
        bVar4 = true;
      }
      goto LAB_106a17544;
    }
  }
  else {
    _objc_release(uVar1);
  }
  bVar4 = false;
LAB_106a17544:
  _objc_release(param_5);
  return bVar4;
}



/* Entry: 106a17588; end: 106a175ff; -[SCMemoriesStoryEditorViewController cardTransitionEndedWithView:transitionType:] */

void FUN_106a17588(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    func_0x00010beeafa0(param_1);
  }
  puStack_38 = PTR_PTR_1126f43d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_cardTransitionEndedWithView_tran_1125aa1a8,param_3,param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a17600; end: 106a17657; -[SCMemoriesStoryEditorViewController _isDragAndDropEnabledForIndexPath:] */

bool FUN_106a17600(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1554e0();
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    bVar2 = 0 < lVar1;
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 106a17658; end: 106a1765f; -[SCMemoriesStoryEditorViewController numberOfSectionsInCollectionView:] */

undefined8 FUN_106a17658(void)

{
  return 2;
}



/* Entry: 106a17660; end: 106a1767b; -[SCMemoriesStoryEditorViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a17660(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112755ea8);
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_count_1125b2420);
    return uVar1;
  }
  return 1;
}



/* Entry: 106a1767c; end: 106a17a4f; -[SCMemoriesStoryEditorViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a1767c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar9 = param_4;
  func_0x00010c1554e0();
  uVar4 = param_3;
  if (lVar9 == 0) {
    puVar5 = PTR_PTR_1126cfc60;
    _objc_opt_class(PTR_PTR_1126cfc60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c18b5e0(uVar4);
    lVar9 = (long)_DAT_112755e88;
    puVar5 = *(undefined **)(param_1 + lVar9);
    func_0x00010bf643e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfe0280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    uVar8 = uVar2;
    func_0x00010bf643e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf56040(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222840(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar8);
  }
  else {
    lVar9 = param_4;
    func_0x00010c0840e0();
    if (lVar9 != 0) {
      puVar5 = PTR_PTR_1126cfc50;
      _objc_opt_class(PTR_PTR_1126cfc50);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      uVar8 = *(undefined8 *)(param_1 + _DAT_112755ea8);
      func_0x00010c0840e0(param_4);
      func_0x00010c0dfd40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + _DAT_112755e88);
      func_0x00010c243680(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_112755e98);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_112755ea0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c077f00();
      func_0x00010c222860(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar8);
      func_0x00010c20cf40(uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0840e0();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(uVar4);
      goto LAB_106a17a14;
    }
    puVar5 = PTR_PTR_1126cfc58;
    _objc_opt_class(PTR_PTR_1126cfc58);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar7 = *(undefined **)(param_1 + _DAT_112755ea8);
    func_0x00010c0840e0(param_4);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126cfc20;
    _objc_opt_class(PTR_PTR_1126cfc20);
    puVar6 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar5);
    puVar5 = puVar7;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar7);
    if (puVar5 != (undefined *)0x0) {
      func_0x00010befb780(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(uVar4);
      _objc_release(puVar7);
    }
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0840e0();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(uVar4);
  }
  _objc_release(puVar6);
LAB_106a17a14:
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106a17a50; end: 106a17b2b; -[SCMemoriesStoryEditorViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_106a17a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x00010c0720c0(uVar1,param_2,param_4);
  if (((int)uVar1 == 0) || (lVar2 = param_5, func_0x00010c1554e0(), lVar2 != 1)) {
    uVar1 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126cfc68;
    _objc_opt_class(PTR_PTR_1126cfc68);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf6e120(param_3,param_2,param_4,puVar3,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a17b2c; end: 106a17b47; -[SCMemoriesStoryEditorViewController collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16] FUN_106a17b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long in_x4;
  undefined1 auVar1 [16];
  
  if (in_x4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be34df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__headerSize_11256ad18);
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}


