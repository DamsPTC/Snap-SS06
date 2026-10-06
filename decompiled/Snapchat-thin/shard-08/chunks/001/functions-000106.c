/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105db5798; end: 105db595f; -[SCPreviewFeatureStickerContainerImpl stickerContainingGesture:] */

void FUN_105db5798(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      uVar8 = 0;
LAB_105db5914:
      _objc_release(lVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befb9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_3 + 0x40),PTR_s_addStickerView__11259c818);
      return;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar4 = uVar8;
      func_0x00010c26c0a0();
      if ((int)uVar4 != 0) {
        uVar4 = uVar8;
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126bb2f0;
        _objc_opt_class(PTR_PTR_1126bb2f0);
        uVar6 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar5);
        _objc_release(uVar4);
        if ((uVar6 & 1) != 0) {
          uVar4 = uVar8;
          func_0x00010bf4dce0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c068560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c298040();
          _objc_release(uVar6);
          _objc_release(uVar4);
        }
        _objc_retain(uVar8);
        goto LAB_105db5914;
      }
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105db5960; end: 105db5967; -[SCPreviewFeatureStickerContainerImpl addStickerView:] */

void FUN_105db5960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befb9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_addStickerView__11259c818);
  return;
}



/* Entry: 105db5968; end: 105db596f; -[SCPreviewFeatureStickerContainerImpl stickerViewsWithType:] */

void FUN_105db5968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_stickerViewsWithType__112672ef0);
  return;
}



/* Entry: 105db5970; end: 105db5977; -[SCPreviewFeatureStickerContainerImpl animatedStickerCount] */

void FUN_105db5970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf037b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_animatedStickerCount_11259e790);
  return;
}



/* Entry: 105db5978; end: 105db597f; -[SCPreviewFeatureStickerContainerImpl stickerCount] */

void FUN_105db5978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_stickerCount_112672928);
  return;
}



/* Entry: 105db5980; end: 105db5987; -[SCPreviewFeatureStickerContainerImpl stickerViews] */

void FUN_105db5980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_stickerViews_112672ee8);
  return;
}



/* Entry: 105db5988; end: 105db5b17; -[SCPreviewFeatureStickerContainerImpl staticStickerViews] */

void FUN_105db5988(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x40);
  func_0x00010c252ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar5);
      }
      puVar7 = PTR_PTR_1126ba960;
      uVar9 = *(ulong *)(lVar10 * 8);
      _objc_retain(uVar9);
      _objc_opt_class(puVar7);
      uVar6 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar7);
      uVar1 = uVar9;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar9);
      if (uVar1 != 0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(uVar1);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar7 = *(undefined **)(lVar5 + 0x40);
    func_0x00010c2790a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105db5b18; end: 105db5b5f; -[SCPreviewFeatureStickerContainerImpl trackingStickerViews] */

void FUN_105db5b18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2790a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105db5b60; end: 105db5d4b; -[SCPreviewFeatureStickerContainerImpl stickerCaptionTexts] */

void FUN_105db5b60(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c253880();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c271a80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar7 = PTR_PTR_1126ba800;
      _objc_opt_class(PTR_PTR_1126ba800);
      uVar4 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar5 = uVar6;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar6);
      uVar6 = uVar5;
      func_0x00010bf62ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar6 = uVar5;
      func_0x00010c08fa60();
      if (uVar6 != 0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(uVar5);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c29b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_videoTrackedImagesForTrackingSti_112684858);
  return;
}



/* Entry: 105db5d4c; end: 105db5d53; -[SCPreviewFeatureStickerContainerImpl videoTrackedImagesForTrackingStickersWithCroppingAspectRatio:] */

void FUN_105db5d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_videoTrackedImagesForTrackingSti_112684858);
  return;
}



/* Entry: 105db5d54; end: 105db5d5b; -[SCPreviewFeatureStickerContainerImpl videoTrackedImagesForNonTrackingStickersWithCroppingAspectRatio:] */

void FUN_105db5d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29b8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_videoTrackedImagesForNonTracking_112684850);
  return;
}



/* Entry: 105db5d5c; end: 105db5d63; -[SCPreviewFeatureStickerContainerImpl trackingUpdateVersion] */

void FUN_105db5d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c279170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_trackingUpdateVersion_11267be80);
  return;
}



/* Entry: 105db5d64; end: 105db5d6b; -[SCPreviewFeatureStickerContainerImpl setTrackingUpdateVersion:] */

void FUN_105db5d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c219470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_setTrackingUpdateVersion__112663f40);
  return;
}



/* Entry: 105db5d6c; end: 105db5d73; -[SCPreviewFeatureStickerContainerImpl setMaxUniqueStickerId:] */

void FUN_105db5d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c38b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_setMaxUniqueStickerId__11264e850);
  return;
}



/* Entry: 105db5d74; end: 105db5dc7; -[SCPreviewFeatureStickerContainerImpl setTransform:] */

void FUN_105db5d74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c252ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 105db5dc8; end: 105db5e5b; -[SCPreviewFeatureStickerContainerImpl stickerViewDidUpdate:] */

void FUN_105db5dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba8a8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c240000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a3e0(puVar1,param_2,uVar2,param_3);
  _objc_release(uVar2);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2be0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105db5e5c; end: 105db5e63; -[SCPreviewFeatureStickerContainerImpl activatedStickersFuture] */

void FUN_105db5e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xf8),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 105db5e64; end: 105db5e67; -[SCPreviewFeatureStickerContainerImpl featureVideoTracking:willTrackView:] */

void FUN_105db5e64(void)

{
  return;
}



/* Entry: 105db5e68; end: 105db60af; -[SCPreviewFeatureStickerContainerImpl featureVideoTracking:didTrackView:] */

void FUN_105db5e68(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ba960;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c240000(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c280560(param_4);
    func_0x00010c0df780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c158480(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar4);
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    func_0x00010c0be120(uVar5);
    uVar3 = param_4;
    func_0x00010c081160();
    puVar2 = PTR_PTR_1126ba8a8;
    if (((int)uVar3 == 0) || (*(char *)(puStack_68 + 3) != '\x01')) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c240000(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a3e0(puVar2);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c240000(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12e540(puVar2);
      _objc_release(uVar4);
      puVar2 = PTR_PTR_1126ba8a8;
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c240000(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befb9a0(puVar2);
    }
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105db60b0; end: 105db60c3;  */

void FUN_105db60b0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105db60c4; end: 105db615f; -[SCPreviewFeatureStickerContainerImpl featureVideoTracking:didDisableTrackingForView:] */

void FUN_105db60c4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126ba8a8;
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c240000(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a3e0(puVar2);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105db6160; end: 105db6167; -[SCPreviewFeatureStickerContainerImpl staticStickersContainerView] */

void FUN_105db6160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_staticStickersContainerView_112672550);
  return;
}



/* Entry: 105db6168; end: 105db616f; -[SCPreviewFeatureStickerContainerImpl trackingStickersContainerView] */

void FUN_105db6168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2790b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_trackingStickersContainerView_11267be50);
  return;
}



/* Entry: 105db6170; end: 105db6177; -[SCPreviewFeatureStickerContainerImpl hasNonTrackingStaticSticker] */

void FUN_105db6170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd9810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_hasNonTrackingStaticSticker_1125d3fc0);
  return;
}



/* Entry: 105db6178; end: 105db617f; -[SCPreviewFeatureStickerContainerImpl hasNonTrackingAnimatedSticker] */

void FUN_105db6178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd97f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_hasNonTrackingAnimatedSticker_1125d3fb8);
  return;
}



/* Entry: 105db6180; end: 105db6187; -[SCPreviewFeatureStickerContainerImpl setStickersHiddenState:includeCustomSticker:] */

void FUN_105db6180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20bd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_setStickersHiddenState_includeCu_112660970);
  return;
}



/* Entry: 105db6188; end: 105db618f; -[SCPreviewFeatureStickerContainerImpl drawStaticStickersScreenshotImageInCurrentContextWithRect:] */

void FUN_105db6188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_drawStaticStickersScreenshotImag_1125c00a0);
  return;
}



/* Entry: 105db6190; end: 105db626b; -[SCPreviewFeatureStickerContainerImpl stickerContainer:stickerViewDidUpdate:] */

void FUN_105db6190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf4b900(uVar1,param_2,param_4);
  puVar3 = PTR_PTR_1126ba8a8;
  if ((int)uVar1 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c240000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a3e0(puVar3,param_2,uVar1,param_4);
    _objc_release(uVar1);
    param_1 = param_1 + 0x120;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfa2be0();
    _objc_release(param_1);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x70);
    if (uVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      *(undefined **)(param_1 + 0x70) = puVar3;
      _objc_release(uVar1);
      uVar2 = *(ulong *)(param_1 + 0x70);
    }
    func_0x00010bf4b900(uVar2,param_2,param_4);
    if ((uVar2 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x70),param_2,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105db626c; end: 105db6417; -[SCPreviewFeatureStickerContainerImpl didTapPreviewContainerView:] */

undefined8 FUN_105db626c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c253b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_105db63c8:
    uVar5 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = lVar1;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c232360();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((int)lVar4 == 0) goto LAB_105db63c8;
    }
    lVar2 = lVar1;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c232a60();
    if ((int)lVar3 != 0) {
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(lVar1);
      _objc_retain(lVar2);
      func_0x00010c268c00(lVar1);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x100));
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar2);
    uVar5 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105db6418; end: 105db656b;  */

void FUN_105db6418(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27dd80();
    _objc_release(lVar4);
    if (lVar5 == 6) {
      lVar5 = lVar3 + 0x50;
      _objc_loadWeakRetained(lVar5);
      _objc_retain();
      lVar4 = lVar5;
      func_0x00010bf21f60(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bfedfe0();
      func_0x00010c2afca0(lVar5,param_2,lVar6 + 1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar5);
      _objc_release(lVar5);
      lVar5 = lVar3 + 0x130;
      _objc_loadWeakRetained(lVar5);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c253880(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28abe0(lVar5,param_2,uVar1,uVar7);
      _objc_release(uVar7);
      _objc_release(lVar5);
    }
    puVar2 = PTR_PTR_1126ba8a8;
    uVar7 = *(undefined8 *)(lVar3 + 8);
    func_0x00010c240000(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a3e0(puVar2,param_2,uVar7,*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar7);
    lVar5 = lVar3 + 0x120;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bfa2be0();
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105db656c; end: 105db67c3; -[SCPreviewFeatureStickerContainerImpl didBeginLongPressInPreviewContainerView:] */

undefined8 FUN_105db656c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c253b80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar9 = 1;
    goto LAB_105db6790;
  }
  uVar2 = *(ulong *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa29c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfa1e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar5 = lVar1;
  func_0x00010c253880(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c271a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c0c6c20();
  _objc_release(lVar5);
  uVar4 = uVar3;
  func_0x00010c07a120();
  if (((uVar4 & 1) == 0) &&
     (uVar4 = uVar2, func_0x00010c071020(uVar2,param_2,lVar1), (uVar4 & 1) == 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c233bc0();
    _objc_release(uVar7);
    if ((int)uVar9 != 0) goto LAB_105db669c;
    uVar9 = 1;
  }
  else {
LAB_105db669c:
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bfa1ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    lVar5 = lVar1;
    func_0x00010c232a20(lVar1,param_2,param_3);
    if ((int)lVar5 != 0) {
      lVar5 = param_1;
      func_0x00010bdf5ec0(param_1,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010be41e40(param_1,param_2,lVar1);
      if (((int)lVar8 == 0) || (lVar8 = lVar5, func_0x00010bf529e0(), lVar8 == 0)) {
        uVar4 = uVar3;
        func_0x00010c07a120();
        if ((int)uVar4 != 0) {
          func_0x00010c109cc0(uVar3,param_2,lVar1);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x118) = 1;
        _objc_retain(lVar1);
        uVar7 = *(undefined8 *)(param_1 + 0x110);
        *(long *)(param_1 + 0x110) = lVar1;
        _objc_release(uVar7);
        func_0x00010c10d0a0(uVar9,param_2,lVar1,lVar5,param_1,0);
      }
      _objc_release(lVar5);
    }
    _objc_release(uVar9);
    uVar9 = 0;
  }
  _objc_release(lVar6);
  _objc_release(uVar2);
  _objc_release(uVar3);
LAB_105db6790:
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 105db67c4; end: 105db680f; -[SCPreviewFeatureStickerContainerImpl shouldBlockGesture:] */

uint FUN_105db67c4(long param_1)

{
  long lVar1;
  uint uVar2;
  
  func_0x00010c253b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c077fa0(param_1);
    uVar2 = (uint)lVar1 ^ 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105db6810; end: 105db68cf; -[SCPreviewFeatureStickerContainerImpl rectForCreativeToolsMenuSourceView:inView:] */

undefined8
FUN_105db6810(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  FUN_105db68d0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = *(undefined8 *)PTR__CGRectZero_110347608;
  }
  else {
    func_0x00010bf20c00(param_4);
    func_0x00010bf51460(param_4,param_3,param_5);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105db68d0; end: 105db6923;  */

void FUN_105db68d0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105db6924; end: 105db697b; -[SCPreviewFeatureStickerContainerImpl rotationForCreativeToolsMenuSourceView:] */

undefined8 FUN_105db6924(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_105db68d0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c141a80(param_4);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105db697c; end: 105db6a33; -[SCPreviewFeatureStickerContainerImpl creativeToolsMenuMetricsInfo] */

void FUN_105db697c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  if (*(long *)(param_1 + 0x110) == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1 + 0x130;
    _objc_loadWeakRetained();
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c253880(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c09a200(lVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c4440;
    func_0x00010c2553c0(PTR_PTR_1126c4440,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105db6a34; end: 105db6d1b; -[SCPreviewFeatureStickerContainerImpl _bitmojiKeyboardDidPasteBitmojiSticker:] */

void FUN_105db6a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb7bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ba800;
  _objc_alloc(PTR_PTR_1126ba800);
  uVar1 = param_3;
  func_0x00010bf419e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffd00(puVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126baa60;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010bf419e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf419e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fe20();
  _objc_release(uVar5);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c4a18;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010bf12e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfb7bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7c60();
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c29cde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_initWeak(auStack_68,param_1);
  uVar5 = uVar1;
  func_0x00010c0e0460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105db6d1c; end: 105db6df7;  */

void FUN_105db6d1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105db6df8; end: 105db6f13;  */

void FUN_105db6df8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126ba7a8;
    _objc_alloc(PTR_PTR_1126ba7a8);
    func_0x00010bffa520();
    puVar2 = PTR_PTR_1126ba960;
    _objc_alloc(PTR_PTR_1126ba960);
    func_0x00010c04c640();
    puVar3 = PTR_PTR_1126c3d58;
    _objc_opt_new(PTR_PTR_1126c3d58);
    func_0x00010c2aa4a0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b1340(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b0ec0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e80(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105db6f14; end: 105db6f17;  */

void FUN_105db6f14(void)

{
  return;
}



/* Entry: 105db6f18; end: 105db70eb; -[SCPreviewFeatureStickerContainerImpl _staticStickerPositions] */

double FUN_105db6f18(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
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
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar13 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c2554a0(lVar2,param_2,1,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar11 = *plStack_130;
    do {
      lVar12 = 0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(lVar2);
        }
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar10 = *(undefined8 *)(lStack_138 + lVar12 * 8);
        func_0x00010bf345e0(uVar10);
        func_0x00010bf345e0(uVar10);
        func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e28098);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar1,param_2,puVar5);
        _objc_release(puVar5);
        lVar12 = lVar12 + 1;
      } while (lVar8 != lVar12);
      lVar8 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_140,auStack_f8,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(lVar2);
  ppuVar3 = ppuVar1;
  func_0x00010bf529e0();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar4 = ppuVar1;
    func_0x00010bf51e00();
    ppuVar3 = ppuVar4;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar7 = &uStack_270;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    dVar13 = 0.0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puVar5 = ppuVar1[8];
    func_0x00010c2554a0(puVar5,param_2,1,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    if (puVar6 == (undefined *)0x0) {
      dVar14 = 0.0;
    }
    else {
      lVar8 = *plStack_260;
      dVar14 = 0.0;
      do {
        puVar9 = (undefined *)0x0;
        dVar15 = dVar14;
        do {
          if (*plStack_260 != lVar8) {
            _objc_enumerationMutation(puVar5);
          }
          func_0x00010c14e120(*(undefined8 *)(lStack_268 + (long)puVar9 * 8));
          dVar14 = dVar13;
          if (dVar13 <= dVar15) {
            dVar14 = dVar15;
          }
          puVar9 = puVar9 + 1;
          dVar15 = dVar14;
        } while (puVar6 != puVar9);
        puVar6 = puVar5;
        puVar7 = &uStack_270;
        func_0x00010bf52a60(puVar5,param_2,&uStack_270,auStack_228,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
      return dVar14;
    }
    ___stack_chk_fail();
    _objc_retain(puVar7);
    func_0x00010c12d360(*(undefined8 *)(puVar5 + 0x68),param_2,puVar7);
    uVar10 = *(undefined8 *)(puVar5 + 0x70);
    func_0x00010bf4b900(uVar10,param_2,puVar7);
    if ((int)uVar10 != 0) {
      func_0x00010c12d360(*(undefined8 *)(puVar5 + 0x70),param_2,puVar7);
      puVar6 = PTR_PTR_1126ba8a8;
      uVar10 = *(undefined8 *)(puVar5 + 8);
      func_0x00010c240000(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a3e0(puVar6,param_2,uVar10,puVar7);
      _objc_release(uVar10);
      puVar5 = puVar5 + 0x120;
      _objc_loadWeakRetained(puVar5);
      func_0x00010bfa2be0();
      _objc_release(puVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return dVar13;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return dVar13;
}



/* Entry: 105db70ec; end: 105db720b; -[SCPreviewFeatureStickerContainerImpl _maxStickerScale] */

double FUN_105db70ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c2554a0(lVar2,param_2,1,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    dVar9 = 0.0;
  }
  else {
    lVar6 = *plStack_110;
    dVar9 = 0.0;
    do {
      lVar7 = 0;
      dVar10 = dVar9;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c14e120(*(undefined8 *)(lStack_118 + lVar7 * 8));
        dVar9 = dVar8;
        if (dVar8 <= dVar10) {
          dVar9 = dVar10;
        }
        lVar7 = lVar7 + 1;
        dVar10 = dVar9;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      puVar5 = &uStack_120;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return dVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010c12d360(*(undefined8 *)(lVar2 + 0x68),param_2,puVar5);
  uVar4 = *(undefined8 *)(lVar2 + 0x70);
  func_0x00010bf4b900(uVar4,param_2,puVar5);
  if ((int)uVar4 != 0) {
    func_0x00010c12d360(*(undefined8 *)(lVar2 + 0x70),param_2,puVar5);
    puVar1 = PTR_PTR_1126ba8a8;
    uVar4 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c240000(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a3e0(puVar1,param_2,uVar4,puVar5);
    _objc_release(uVar4);
    lVar2 = lVar2 + 0x120;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfa2be0();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return dVar8;
}



/* Entry: 105db720c; end: 105db72bb; -[SCPreviewFeatureStickerContainerImpl _updateStickerAfterInsertAnimation:] */

void FUN_105db720c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf4b900(uVar2,param_2,param_3);
  if ((int)uVar2 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
    puVar1 = PTR_PTR_1126ba8a8;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c240000(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a3e0(puVar1,param_2,uVar2,param_3);
    _objc_release(uVar2);
    param_1 = param_1 + 0x120;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfa2be0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105db72bc; end: 105db733f; -[SCPreviewFeatureStickerContainerImpl _presentPinningTooltipIfNeededFromSticker:] */

void FUN_105db72bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb4f00();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa29c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10e8a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c1908a0(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105db7340; end: 105db738f; -[SCPreviewFeatureStickerContainerImpl _shouldPresentPinningTooltip] */

undefined8 FUN_105db7340(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c22fde0();
  if ((int)lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c22fe00(uVar3);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 105db7390; end: 105db74a3; -[SCPreviewFeatureStickerContainerImpl _isMenuSupportedForSticker:] */

undefined8 FUN_105db7390(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_3;
    func_0x00010c253880(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c271a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0c6c20();
    _objc_release(lVar4);
    uVar1 = uVar2;
    func_0x00010c077bc0();
    if ((uVar1 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c233bc0();
      _objc_release(uVar5);
    }
    else {
      uVar6 = 1;
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 105db74a4; end: 105db75a7; -[SCPreviewFeatureStickerContainerImpl _shouldPresentMenuHintForSticker:] */

undefined8 FUN_105db74a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c22fde0();
  _objc_release(lVar1);
  if ((((int)lVar2 == 0) ||
      (lVar1 = param_1, func_0x00010be41e40(param_1,param_2,param_3), (int)lVar1 == 0)) ||
     ((*(byte *)(param_1 + 0xc0) & 1) != 0)) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c07e920();
    if ((int)lVar2 == 0) {
      uVar3 = param_1 + 0x10;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010c07e880();
      _objc_release(uVar3);
      _objc_release(lVar1);
      if ((uVar4 & 1) == 0) {
        uVar3 = param_1 + 0x10;
        _objc_loadWeakRetained();
        uVar4 = uVar3;
        func_0x00010bf30e80();
        _objc_release(uVar3);
        if (uVar4 < 3) {
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c22fc60(uVar5);
          goto LAB_105db7504;
        }
      }
    }
    else {
      _objc_release(lVar1);
    }
    uVar5 = 1;
  }
LAB_105db7504:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105db75a8; end: 105db76eb; -[SCPreviewFeatureStickerContainerImpl _presentMenuHintIfNeededFromSticker:] */

void FUN_105db75a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb4e80();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bdf5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfa1ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010bf85800(uVar4);
      *(undefined1 *)(param_1 + 0xc0) = 1;
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(uVar4);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105db76ec; end: 105db772f;  */

void FUN_105db76ec(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c190720(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105db7730; end: 105db79a7; -[SCPreviewFeatureStickerContainerImpl _creativeToolsMenuActionsForSticker:] */

void FUN_105db7730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bab40;
  uVar1 = param_3;
  func_0x00010c253880(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee100();
  _objc_release(uVar1);
  if (puVar2 == (undefined *)0xb) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bfa1e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar1;
    FUN_105db8ce0(uVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa29c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    FUN_105db8b34(uVar5,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar2);
    lVar6 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,lVar6);
    _objc_release(lVar6);
    lVar7 = *(long *)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c253880(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c271a60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = auStack_68;
    _objc_loadWeakRetained(puVar10);
    lVar6 = lVar7;
    func_0x00010c0ca900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    if (lVar6 != 0) {
      func_0x00010befa160(puVar2);
    }
    puVar11 = puVar2;
    func_0x00010bf529e0();
    if (puVar11 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = puVar2;
      func_0x00010bf51e00(puVar2);
    }
    _objc_release(lVar6);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105db79a8; end: 105db7a97; -[SCPreviewFeatureStickerContainerImpl _timedStickerCount] */

undefined8 FUN_105db79a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2790a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001006372a4();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bf529e0(uVar3);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 105db7a98; end: 105db7b93; -[SCPreviewFeatureStickerContainerImpl _pinnedStickerCount] */

undefined8 FUN_105db7a98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2790a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001006372a4();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bf529e0(uVar3);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 105db7b94; end: 105db7bcb; -[SCPreviewFeatureStickerContainerImpl updateToolbarButtonImage:] */

void FUN_105db7b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c129090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadToolbarItemViewModel_112627e40);
  return;
}



/* Entry: 105db7bcc; end: 105db7c6b; -[SCPreviewFeatureStickerContainerImpl setToolbarItemViewModel:] */

void FUN_105db7bcc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x140);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x140);
    *(long *)(param_1 + 0x140) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105db7c6c; end: 105db7d97; -[SCPreviewFeatureStickerContainerImpl reloadToolbarItemViewModel] */

/* WARNING: Possible PIC construction at 0x000105db7d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105db7d7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105db7d0c) */
/* WARNING: Removing unreachable block (ram,0x000105db7d80) */
/* WARNING: Removing unreachable block (ram,0x000105db7d84) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105db7c6c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c273aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126c4388;
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126c3cc0;
      _objc_alloc(PTR_PTR_1126c3cc0);
      func_0x00010c039d00();
    }
    else {
      func_0x00010c273aa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c112060(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b5240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c216fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToolbarItemViewModel__112663610,puVar2);
  return;
}



/* Entry: 105db7d98; end: 105db7dbf; -[SCPreviewFeatureStickerContainerImpl toolbarItemViewModelObservable] */

void FUN_105db7d98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105db7dc0; end: 105db7dd7; -[SCPreviewFeatureStickerContainerImpl delegate] */

void FUN_105db7dc0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105db7dd8; end: 105db7de3; -[SCPreviewFeatureStickerContainerImpl setDelegate:] */

void FUN_105db7dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x120,param_3);
  return;
}



/* Entry: 105db7de4; end: 105db7deb; -[SCPreviewFeatureStickerContainerImpl maxUniqueStickerId] */

undefined8 FUN_105db7de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 105db7dec; end: 105db7e03; -[SCPreviewFeatureStickerContainerImpl stickerContainerLogger] */

void FUN_105db7dec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105db7e04; end: 105db7e0b; -[SCPreviewFeatureStickerContainerImpl imageDownloader] */

undefined8 FUN_105db7e04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 105db7e0c; end: 105db7e3b; -[SCPreviewFeatureStickerContainerImpl setImageDownloader:] */

void FUN_105db7e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105db7e3c; end: 105db7e43; -[SCPreviewFeatureStickerContainerImpl toolbarItemViewModel] */

undefined8 FUN_105db7e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 105db7e44; end: 105db7ff3; -[SCPreviewFeatureStickerContainerImpl .cxx_destruct] */

void FUN_105db7e44(long param_1)

{
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_destroyWeak(param_1 + 0x130);
  _objc_destroyWeak(param_1 + 0x120);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105db7ff4; end: 105db8547; -[SCPreviewFeatureStickerContainerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db7ff4(long param_1,undefined8 param_2)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lStack_170;
  long lStack_168;
  long lStack_150;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_1127364f0;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar19;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_1127364ec;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar19;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_1127364f8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar19;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  lVar19 = param_1;
  FUN_105db8548();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar19;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  lVar19 = param_1;
  FUN_105db8548();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar19;
  func_0x00010c29a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lStack_150 = 0;
    lVar19 = 0;
  }
  else {
    lStack_150 = param_1 + _DAT_1127364fc;
    _objc_loadWeakRetained();
    lVar19 = param_1 + _DAT_112736500;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar19;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar19);
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112736504;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar19;
  func_0x00010c0b82c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112736508;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lStack_170 = 0;
    lStack_168 = 0;
    lVar19 = 0;
  }
  else {
    lStack_168 = param_1 + _DAT_11273650c;
    _objc_loadWeakRetained();
    lStack_170 = param_1 + _DAT_112736510;
    _objc_loadWeakRetained();
    lVar19 = param_1 + _DAT_112736514;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar19;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112736518;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar19;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11273651c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar19;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_1127364f4;
    _objc_loadWeakRetained();
  }
  lVar18 = param_1 + _DAT_1127364e8;
  _objc_loadWeakRetained();
  lVar12 = lVar18;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112736524;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar18;
  func_0x00010c29b9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112736528;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar18;
  func_0x00010bf05d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105db856c;
  puStack_108 = &UNK_1108e9070;
  uStack_70 = 1;
  lStack_d0 = lStack_150;
  lStack_b0 = lStack_168;
  lStack_a8 = lStack_170;
  puVar15 = PTR_PTR_1126ae720;
  lStack_100 = lVar1;
  lStack_f8 = lVar19;
  lStack_f0 = lVar2;
  lStack_e8 = lVar3;
  lStack_e0 = lVar4;
  lStack_d8 = lVar5;
  lStack_c8 = lVar8;
  lStack_c0 = lVar6;
  lStack_b8 = lVar7;
  lStack_a0 = lVar9;
  lStack_98 = lVar10;
  lStack_90 = lVar11;
  lStack_88 = lVar12;
  lStack_80 = lVar13;
  lStack_78 = lVar14;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_120);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126c4a28;
  _objc_alloc(PTR_PTR_1126c4a28);
  func_0x00010c04c700();
  if (param_1 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(param_1 + _DAT_11273652c);
  }
  func_0x00010bf9d660(uVar17,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar19);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lStack_170);
  _objc_release(lStack_168);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lStack_150);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105db8548; end: 105db856b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db8548(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112736520);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105db856c; end: 105db867f;  */

void FUN_105db856c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    puVar10 = PTR_PTR_1126c4a20;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    puVar7 = PTR_PTR_1126bab38;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c254980();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0398c0(puVar10,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,puVar7,uVar8,uVar11,
                        uVar9,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                        *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                        *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                        *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105db8680; end: 105db87cf;  */

void FUN_105db8680(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
  _objc_retain(*(undefined8 *)(param_2 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0xa8));
  return;
}



/* Entry: 105db87d0; end: 105db88cb; -[SCPreviewFeatureStickerContainerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db87d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273652c,0);
  _objc_destroyWeak(param_1 + _DAT_112736528);
  _objc_destroyWeak(param_1 + _DAT_112736524);
  _objc_destroyWeak(param_1 + _DAT_1127364e8);
  _objc_destroyWeak(param_1 + _DAT_112736520);
  _objc_destroyWeak(param_1 + _DAT_11273651c);
  _objc_destroyWeak(param_1 + _DAT_112736518);
  _objc_destroyWeak(param_1 + _DAT_112736514);
  _objc_destroyWeak(param_1 + _DAT_112736510);
  _objc_destroyWeak(param_1 + _DAT_11273650c);
  _objc_destroyWeak(param_1 + _DAT_112736508);
  _objc_destroyWeak(param_1 + _DAT_112736504);
  _objc_destroyWeak(param_1 + _DAT_112736500);
  _objc_destroyWeak(param_1 + _DAT_1127364fc);
  _objc_destroyWeak(param_1 + _DAT_1127364f8);
  _objc_destroyWeak(param_1 + _DAT_1127364f4);
  _objc_destroyWeak(param_1 + _DAT_1127364f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127364ec);
  return;
}



/* Entry: 105db88cc; end: 105db8977; -[SCPreviewFeatureStickerContainerServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db88cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112736530;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112736538;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c253b20(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105db8978; end: 105db89bb; -[SCPreviewFeatureStickerContainerServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db8978(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112736538);
  _objc_destroyWeak(param_1 + _DAT_112736534);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736530);
  return;
}



/* Entry: 105db89bc; end: 105db8a67; -[SCPreviewFeatureStickerContainerToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db89bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11273653c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112736544;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c253b20(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105db8a68; end: 105db8aab; -[SCPreviewFeatureStickerContainerToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db8a68(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112736544);
  _objc_destroyWeak(param_1 + _DAT_112736540);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273653c);
  return;
}



/* Entry: 105db8aac; end: 105db8b1f; -[SCCreativeExpressionsManagerServices initWithManager:] */

undefined1 * FUN_105db8aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed160;
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



/* Entry: 105db8b20; end: 105db8b27; -[SCCreativeExpressionsManagerServices manager] */

undefined8 FUN_105db8b20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105db8b28; end: 105db8b33; -[SCCreativeExpressionsManagerServices .cxx_destruct] */

void FUN_105db8b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105db8b34; end: 105db8c8b;  */

void FUN_105db8b34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c07a120();
  if ((int)uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar4 = PTR_PTR_1126bab08;
    _objc_alloc(PTR_PTR_1126bab08);
    puVar2 = puVar4;
    func_0x000108cd47bc();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000108cd4834();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_2);
    func_0x00010c053120(puVar4);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_50);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105db8c8c; end: 105db8cdf;  */

void FUN_105db8c8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c278b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fc140(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105db8ce0; end: 105db8e4b;  */

void FUN_105db8ce0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c071020();
  if ((int)uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar4 = PTR_PTR_1126bab08;
    _objc_alloc(PTR_PTR_1126bab08);
    puVar2 = puVar4;
    func_0x000108cd47a4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_2);
    func_0x00010c053120(puVar4);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_50);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105db8e4c; end: 105db8e7f;  */

void FUN_105db8e4c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf969c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105db8e80; end: 105db9093;  */

void FUN_105db8e80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_2;
  func_0x00010c252440(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26c960();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bab08;
  if ((int)uVar2 == 0) {
    _objc_alloc(PTR_PTR_1126bab08);
    puVar4 = puVar3;
    func_0x000108cd47d4();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000108cd48b0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = auStack_80;
    _objc_copyWeak(puVar6,auStack_48);
    _objc_retain(param_2);
    func_0x00010c053120(puVar3);
    uVar1 = param_2;
  }
  else {
    _objc_alloc();
    puVar4 = puVar3;
    func_0x000108cd47ec();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000108cd48b0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105db9094;
    puStack_60 = &UNK_110841fb0;
    puVar6 = auStack_50;
    _objc_copyWeak(puVar6,auStack_48);
    _objc_retain(param_2);
    uStack_58 = param_2;
    func_0x00010c053120(puVar3);
    uVar1 = uStack_58;
  }
  _objc_release(uVar1);
  _objc_destroyWeak(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105db9094; end: 105db9143;  */

void FUN_105db9094(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c252440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ea60(lVar1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105db9144; end: 105db9203; -[SCPreviewFeatureSwipeDownDismissAnimator initWithPreviewView:previewConfiguration:animatorDelegate:] */

undefined1 *
FUN_105db9144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ed168;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_5);
    func_0x00010c219a60(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105db9204; end: 105db9283; -[SCPreviewFeatureSwipeDownDismissAnimator swipeableViewContentOffset] */

double FUN_105db9204(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar1 = param_3 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf345e0();
  param_3 = param_3 + 0x70;
  dVar3 = param_2;
  _objc_loadWeakRetained(param_3);
  lVar2 = param_3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(lVar1);
  return param_2 - dVar3;
}



/* Entry: 105db9284; end: 105db92a7; -[SCPreviewFeatureSwipeDownDismissAnimator hasReachedDismissalThreshold] */

bool FUN_105db9284(double param_1)

{
  func_0x00010c265400();
  return 100.0 <= param_1;
}



/* Entry: 105db92a8; end: 105db92c7; -[SCPreviewFeatureSwipeDownDismissAnimator dismissalDragProgress] */

double FUN_105db92a8(double param_1)

{
  func_0x00010c265400();
  return param_1 / 100.0;
}



/* Entry: 105db92c8; end: 105db934b; -[SCPreviewFeatureSwipeDownDismissAnimator setOverscrollThresholdForDismissalReached:] */

void FUN_105db92c8(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 0xb8) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xb8) = (char)param_3;
  uVar2 = 0;
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar1);
    uVar2 = 0x3ff0000000000000;
  }
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1677c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105db934c; end: 105db938b; -[SCPreviewFeatureSwipeDownDismissAnimator setTransitionState:] */

void FUN_105db934c(long param_1,undefined8 param_2,long param_3)

{
  *(long *)(param_1 + 0xc0) = param_3;
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010bf92380();
  }
  else {
    func_0x00010bf80c20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105db938c; end: 105db9393; -[SCPreviewFeatureSwipeDownDismissAnimator transitionState] */

undefined8 FUN_105db938c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105db9394; end: 105db939b; -[SCPreviewFeatureSwipeDownDismissAnimator finishInteractiveTransitionAnimation] */

void FUN_105db9394(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be17470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishTransitionAnimationFromIn_1125636b8,1)
  ;
  return;
}



/* Entry: 105db939c; end: 105db952f; -[SCPreviewFeatureSwipeDownDismissAnimator cancelTransitionAnimation] */

void FUN_105db939c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained();
  _objc_release();
  if ((lVar2 != 0) && (lVar2 = param_1, func_0x00010c27aa80(), lVar2 == 0)) {
    func_0x00010c219a60(param_1);
    func_0x00010c1d7ae0(param_1);
    lVar2 = param_1 + 0x70;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c29ce60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1 + 0x70;
    _objc_loadWeakRetained();
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105db9530;
    puStack_48 = &UNK_110842e18;
    lStack_40 = param_1;
    _objc_copyWeak(auStack_68,auStack_38);
    _objc_retain(lVar2);
    _objc_retain(lVar3);
    func_0x00010bf03440(0x3fd3333333333333,0,puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_38);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 105db9530; end: 105db969b;  */

void FUN_105db9530(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_3 + 0x20) + 0x70;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  lVar2 = *(long *)(param_3 + 0x20) + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 8);
  uVar5 = *(undefined8 *)(lVar3 + 0x10);
  lVar3 = lVar3 + 0x38;
  _objc_loadWeakRetained(lVar3);
  lVar2 = lVar3;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(uVar4,uVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  uVar5 = *(undefined8 *)(lVar3 + 0x30);
  lVar3 = lVar3 + 0x68;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c17a6a0(uVar4,uVar5);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_3 + 0x20);
  if (*(char *)(lVar3 + 0x80) == '\x01') {
    lVar3 = lVar3 + 0x38;
    _objc_loadWeakRetained(lVar3);
    lVar2 = lVar3;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_3 + 0x20);
  }
  lVar3 = lVar3 + 0x50;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105db969c; end: 105db97c7;  */

void FUN_105db969c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c27aa80(), lVar2 == 1)) {
    lVar2 = lVar1 + 0x48;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf04280();
    _objc_release(lVar2);
    if (((int)lVar3 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      func_0x00010bed1040(lVar1);
      lVar2 = lVar1 + 0x50;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c12c960();
      _objc_release(lVar2);
      lVar2 = lVar1 + 0x60;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c12c960();
      _objc_release(lVar2);
      func_0x00010c12c960(*(undefined8 *)(param_1 + 0x28));
      lVar2 = lVar1 + 0x68;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c12c960();
      _objc_release(lVar2);
      func_0x00010bf2e5a0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x20),param_2,0);
      lVar2 = lVar1 + 0x48;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf04220();
      _objc_release(lVar2);
      func_0x00010c219a60(lVar1,param_2,0);
      lVar2 = lVar1 + 0x78;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c195460();
      _objc_release(lVar2);
      func_0x00010bddfb00(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105db97c8; end: 105db9a43; -[SCPreviewFeatureSwipeDownDismissAnimator didPan:] */

void FUN_105db97c8(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_5);
  _objc_storeWeak(param_3 + 0x78,param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 != 1) {
    func_0x00010bdda460(param_3);
  }
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 - 3U < 3) {
    lVar1 = param_3 + 0x70;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 == 0) goto LAB_105db9a2c;
    lVar1 = param_3 + 0x48;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf04280();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) goto LAB_105db9a2c;
    lVar1 = param_3 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf04320();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bfdaee0();
    if ((int)lVar1 == 0) {
      func_0x00010bf2f380(param_3);
      goto LAB_105db9a2c;
    }
    param_3 = param_3 + 0x48;
    _objc_loadWeakRetained(param_3);
    func_0x00010bf04240();
  }
  else {
    if (lVar1 == 2) {
      lVar1 = param_3 + 0x70;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_3 + 0x70;
        _objc_loadWeakRetained(lVar1);
        lVar2 = lVar1;
        func_0x00010bf4b2a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27adc0(param_5);
        _objc_release(lVar2);
        _objc_release(lVar1);
        lVar1 = param_3 + 0x38;
        _objc_loadWeakRetained(lVar1);
        func_0x00010bf20c00();
        _CGRectGetHeight();
        dVar3 = (ABS(param_2) * 0.55 * param_1) / (param_1 + ABS(param_2) * 0.55);
        dVar4 = -dVar3;
        dVar5 = dVar4;
        if (0.0 <= param_2) {
          dVar5 = dVar3;
        }
        _objc_release(lVar1);
        if (0.0 < dVar5) {
          lVar1 = param_3 + 0x38;
          _objc_loadWeakRetained(lVar1);
          func_0x00010bf345e0();
          _objc_release(lVar1);
          lVar1 = param_3 + 0x70;
          _objc_loadWeakRetained(lVar1);
          lVar2 = lVar1;
          func_0x00010bf4b2a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf345e0();
          _objc_release(lVar2);
          _objc_release(lVar1);
          lVar1 = param_3 + 0x38;
          _objc_loadWeakRetained(lVar1);
          func_0x00010c17a6a0(dVar3,dVar5 + dVar4);
          _objc_release(lVar1);
          func_0x00010be49400(param_3);
        }
      }
      goto LAB_105db9a2c;
    }
    if (lVar1 != 1) goto LAB_105db9a2c;
    lVar1 = param_3 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf04300();
    _objc_release(lVar1);
    lVar1 = param_3 + 0x70;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c219a60(param_3);
      goto LAB_105db9a2c;
    }
    param_3 = param_3 + 0x48;
    _objc_loadWeakRetained(param_3);
    func_0x00010bf042a0();
  }
  _objc_release(param_3);
LAB_105db9a2c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105db9a44; end: 105db9d6b; -[SCPreviewFeatureSwipeDownDismissAnimator _setUpXButtonViewsIfNeeded] */

void FUN_105db9a44(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c14d100(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar2);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010c21e900(puVar2);
  func_0x00010c182220(puVar2);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar5);
  uVar10 = 0;
  func_0x00010c1739e0(0,0,0x404b000000000000,0x404b000000000000,puVar2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMidX();
  lVar3 = param_1 + 0x38;
  uVar11 = uVar10;
  _objc_loadWeakRetained(lVar3);
  lVar7 = lVar3;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMidY();
  func_0x00010c17a6a0(uVar10,uVar11,puVar2);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar10 = 0;
  func_0x00010c1739e0(0,0,0x4042000000000000,0x4042000000000000);
  func_0x00010bf20c00(puVar2);
  _CGRectGetMidX();
  uVar11 = uVar10;
  func_0x00010bf20c00(puVar2);
  _CGRectGetMidY();
  func_0x00010c17a6a0(uVar10,uVar11,puVar5);
  puVar9 = puVar5;
  func_0x00010c08c0e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4032000000000000);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar5);
  _objc_release(puVar9);
  func_0x00010c1c2ca0(puVar2);
  func_0x00010c1677c0(0,puVar5);
  _objc_storeWeak(param_1 + 0x58,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105db9d6c; end: 105dba1f3; -[SCPreviewFeatureSwipeDownDismissAnimator _layoutMiscViews] */

void FUN_105db9d6c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  
  func_0x00010bf84ea0();
  dVar7 = param_1;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar8 = dVar7 + (1.0 - param_1) * -50.0;
  func_0x00010c265400(param_2);
  dVar10 = dVar7;
  if (dVar7 <= 100.0) {
    dVar10 = 100.0;
  }
  lVar1 = param_2 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  lVar3 = param_2 + 0x50;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c17a6a0(dVar7 * 0.5,dVar8 + dVar10 * 0.5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar7 = 0.5;
  if (1.0 > param_1) {
    dVar7 = 0.0;
  }
  dVar7 = dVar7 + param_1 * 0.5;
  lVar1 = param_2 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1677c0(dVar7);
  _objc_release(lVar1);
  func_0x00010c1d7ae0(param_2,param_3,1.0 <= param_1);
  if (param_1 <= 1.0) {
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar7 = *(double *)(param_2 + 0x20) + param_1 * ((dVar7 + 50.0) - *(double *)(param_2 + 0x20));
    lVar1 = param_2 + 0x70;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + 0x38;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010c2be8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf512a0(0,dVar7,lVar3,param_3,lVar5);
    _objc_release(lVar5);
  }
  else {
    lVar1 = param_2 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar10 = dVar7 * 0.5;
    lVar3 = param_2 + 0x50;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar7 = dVar7 * 0.5;
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_2 + 0x50;
    _objc_loadWeakRetained(lVar1);
    lVar3 = param_2 + 0x38;
    _objc_loadWeakRetained(lVar3);
    lVar2 = lVar3;
    func_0x00010c2be8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf512a0(dVar10,dVar7,lVar1,param_3,lVar4);
  }
  lVar5 = param_2 + 0x38;
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  uVar9 = *(undefined8 *)(param_2 + 8);
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(uVar9,dVar7);
  _objc_release(lVar1);
  _objc_release(lVar5);
  dVar10 = 1.0;
  if ((param_1 <= 1.0) && (*(char *)(param_2 + 0x80) == '\x01')) {
    dVar10 = param_1 * 25.0;
    lVar1 = param_2 + 0x38;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar10);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_2 + 0x68;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar10);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    lVar1 = param_2 + 0x68;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf20c00();
    func_0x00010bf199e0(puVar6,param_3,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    lVar3 = param_2 + 0x68;
    _objc_loadWeakRetained(lVar3);
    lVar2 = lVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(puVar6);
    _objc_release(lVar1);
  }
  lVar1 = param_2 + 0x70;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2 + 0x38;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  lVar2 = param_2 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf51200(dVar10,dVar7,lVar4,param_3,lVar2);
  param_2 = param_2 + 0x68;
  _objc_loadWeakRetained(param_2);
  func_0x00010c17a6a0(dVar10,dVar7);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105dba1f4; end: 105dba387; -[SCPreviewFeatureSwipeDownDismissAnimator _undoModificationsOnPreviewView] */

void FUN_105dba1f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c16e440();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf1fbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c188e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dba388; end: 105dba393; -[SCPreviewFeatureSwipeDownDismissAnimator _cleanupTransitionReference] */

void FUN_105dba388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,0);
  return;
}



/* Entry: 105dba394; end: 105dbad8b; -[SCPreviewFeatureSwipeDownDismissAnimator _setUpTransitionContextContainerView:] */

void FUN_105dba394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010c29ce60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar2);
  _objc_release(puVar4);
  uVar5 = uVar3;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_5 + 0xa8);
  *(undefined8 *)(param_5 + 0xa8) = uVar5;
  _objc_release(uVar20);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar3);
  _objc_release(puVar4);
  uVar5 = param_7;
  func_0x00010c29ce60();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_7;
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaef80(param_7);
  func_0x00010c19f0e0(uVar5);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf20c00(uVar5);
  func_0x00010c013de0(puVar4);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4);
  _objc_release(puVar6);
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf62960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  bVar1 = lRam00000001138466f0 < 3;
  if (2 < lRam00000001138466f0 && lVar8 != 0) {
    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010bf20c00(puVar4);
    func_0x00010c013de0(puVar6);
    func_0x00010c182220();
    func_0x00010c16d4a0(puVar6);
    func_0x00010c1a9f00(puVar6);
    func_0x00010befbb60(puVar4);
    lVar7 = param_5 + 0x38;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c188e20();
    _objc_release(lVar7);
    _objc_release(puVar6);
  }
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained(lVar7);
  lVar9 = lVar7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  *(undefined8 *)(param_5 + 0x88) = param_1;
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained();
  lVar9 = lVar7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0bc300();
  *(char *)(param_5 + 0x98) = (char)lVar11;
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained();
  lVar9 = lVar7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0bc2a0();
  *(long *)(param_5 + 0xa0) = lVar11;
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained(lVar7);
  lVar9 = lVar7;
  func_0x00010bf1fbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01b40();
  *(undefined8 *)(param_5 + 0x90) = param_1;
  _objc_release(lVar9);
  _objc_release(lVar7);
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained(lVar7);
  lVar10 = lVar7;
  func_0x00010bf1fbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274560();
  lVar9 = param_5 + 0x38;
  _objc_loadWeakRetained(lVar9);
  lVar11 = lVar9;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(lVar7);
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained(lVar7);
  lVar9 = lVar7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained(lVar7);
  lVar9 = lVar7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained(lVar7);
  lVar9 = lVar7;
  func_0x00010bf1fbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(lVar9);
  _objc_release(lVar7);
  puVar13 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained(lVar7);
  lVar9 = lVar7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c013de0();
  _objc_release(lVar9);
  _objc_release(lVar7);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar13);
  _objc_release(puVar6);
  puVar6 = puVar13;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = 0xbfe0000000000000;
  func_0x00010c1fe7a0(0);
  _objc_release(puVar6);
  puVar6 = puVar13;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = 0x4000000000000000;
  func_0x00010c1fe840(0x4000000000000000);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar14 = puVar13;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(puVar14);
  _objc_release(puVar6);
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained(lVar7);
  lVar9 = lVar7;
  func_0x00010bf1fbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274560();
  puVar6 = puVar13;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar21);
  _objc_release(puVar6);
  _objc_release(lVar9);
  _objc_release(lVar7);
  puVar6 = puVar13;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(puVar13);
  puVar14 = puVar13;
  uVar23 = uVar21;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  puVar15 = puVar13;
  uVar22 = uVar23;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  func_0x00010bf199e0(uVar21,uVar24,param_3,param_4,uVar23,uVar22,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  puVar16 = puVar13;
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(puVar16);
  _objc_release(puVar6);
  _objc_release(puVar15);
  _objc_release(puVar14);
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (bVar1 || lVar8 == 0) {
    _objc_retain(puVar13);
    func_0x00010bf03400(0x3fb999999999999a,puVar6);
    _objc_release(puVar13);
  }
  puVar6 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lRam00000001138466f0 < 3) {
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c213180(puVar6);
  _objc_release(puVar14);
  func_0x00010c213040(puVar6);
  puVar14 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar6);
  _objc_release(puVar14);
  uVar17 = param_5 + 0x40;
  _objc_loadWeakRetained();
  uVar18 = uVar17;
  func_0x00010c0811c0();
  if ((uVar18 & 1) == 0) {
    uVar18 = param_5 + 0x40;
    _objc_loadWeakRetained(uVar18);
    uVar19 = uVar18;
    func_0x00010c06d080();
    func_0x000108ede828();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar6);
    _objc_release(uVar19);
  }
  else {
    func_0x000108ede6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar6);
  }
  _objc_release(uVar18);
  _objc_release(uVar17);
  func_0x00010c161020(puVar6);
  func_0x00010c23d620(puVar6);
  uVar23 = 0;
  func_0x00010c1677c0(puVar6);
  func_0x00010befbb60(uVar2);
  func_0x00010befbb60(uVar2);
  func_0x00010befbb60(uVar2);
  func_0x00010befbb60(uVar2);
  func_0x00010befbb60(uVar2);
  lVar7 = param_5 + 0x38;
  _objc_loadWeakRetained(lVar7);
  lVar10 = lVar7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  lVar9 = param_5 + 0x38;
  _objc_loadWeakRetained(lVar9);
  func_0x00010bf51200(uVar2);
  *(undefined8 *)(param_5 + 0x28) = uVar23;
  *(undefined8 *)(param_5 + 0x30) = uVar24;
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(lVar7);
  func_0x00010c17a6a0(*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30),puVar13);
  _objc_storeWeak(param_5 + 0x60,puVar4);
  _objc_storeWeak(param_5 + 0x70,param_7);
  _objc_storeWeak(param_5 + 0x50,puVar6);
  _objc_storeWeak(param_5 + 0x68,puVar13);
  _objc_release(puVar6);
  _objc_release(puVar13);
  _objc_release(lVar8);
  _objc_release(puVar4);
  _objc_release(uVar20);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  return;
}



/* Entry: 105dbad8c; end: 105dbadc7;  */

void FUN_105dbad8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3e99999a);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


