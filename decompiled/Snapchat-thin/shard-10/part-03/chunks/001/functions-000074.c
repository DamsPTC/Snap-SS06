/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e49768; end: 107e497a7; -[SCPreviewFeatureDirectorModeImpl tryToShowTimelineDraftEditFromMemoriesTooltip] */

undefined8 FUN_107e49768(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27cfa0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107e497a8; end: 107e4980b; -[SCPreviewFeatureDirectorModeImpl onDismissPreview] */

void FUN_107e497a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf20760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0e3c80(*(undefined8 *)(param_1 + 0x100));
  *(undefined1 *)(param_1 + 0xeb) = 1;
  return;
}



/* Entry: 107e4980c; end: 107e4982b; -[SCPreviewFeatureDirectorModeImpl shouldExitPreviewWithExitType:] */

byte FUN_107e4980c(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  
  if (param_3 == 1) {
    bVar1 = *(byte *)(param_1 + 0xe8) ^ 1;
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 107e4982c; end: 107e49833; -[SCPreviewFeatureDirectorModeImpl isPlaybackManuallyPaused] */

void FUN_107e4982c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_isPlaybackManuallyPaused_1125fc2f0);
  return;
}



/* Entry: 107e49834; end: 107e49883; -[SCPreviewFeatureDirectorModeImpl updateSnapCommonLoggingParamsBuilder:] */

void FUN_107e49834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289fe0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e49884; end: 107e49887; -[SCPreviewFeatureDirectorModeImpl multiSnapStateHandler] */

void FUN_107e49884(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2702d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_timelineSnapStateHandler_112679ad8);
  return;
}



/* Entry: 107e49888; end: 107e4992f; -[SCPreviewFeatureDirectorModeImpl isTemplate] */

undefined8 FUN_107e49888(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bfe0aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c240000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c080c60(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 107e49930; end: 107e49977; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidTapAddMore:] */

void FUN_107e49930(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be3fc60();
  param_1 = param_1 + 0xf8;
  _objc_loadWeakRetained(param_1);
  if ((int)lVar1 == 0) {
    func_0x00010bfa2800();
  }
  else {
    func_0x00010bfa27c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e49978; end: 107e49a5f; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:clipLevelEditEnabled:thumbnailsHidden:] */

void FUN_107e49978(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010bee0260(param_1,param_2,param_4);
  if ((int)param_4 == 0) {
    *(undefined8 *)(param_1 + 0xe0) = 2;
    func_0x00010be8ec80(param_1);
  }
  else {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_4 = 1;
    *(undefined8 *)(param_1 + 0xe0) = 1;
    func_0x00010be8ec00(param_1);
    func_0x00010be03860(param_1);
    func_0x00010beb8540(param_1);
    if (param_5 != 0) {
      func_0x00010bfa20a0(param_1,param_2,*(undefined8 *)(param_1 + 0x100),0);
      param_4 = 1;
    }
  }
  *(char *)(param_1 + 0xe8) = (char)param_4;
  return;
}



/* Entry: 107e49a60; end: 107e49bdf; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:updateEditedThumbnailForSegment:] */

void FUN_107e49a60(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010c2702c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x100);
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfecde0();
    _objc_release(lVar1);
    _objc_release(lVar2);
    if (lVar3 != 0x7fffffffffffffff) {
      lVar1 = param_2;
      func_0x00010c2702c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_107e49be0;
      puStack_70 = &UNK_110a0f360;
      lStack_68 = param_2;
      lStack_58 = lVar3;
      _objc_retain(param_5);
      uStack_60 = param_5;
      func_0x00010c0ef520(param_1 * 48.0,param_1 * 85.0,lVar1,param_3,lVar3,1,1,0,0,&puStack_88);
      _objc_release(puVar4);
      _objc_release(lVar1);
      _objc_release(uStack_60);
    }
  }
  _objc_release(param_5);
  return;
}



/* Entry: 107e49be0; end: 107e49c2b;  */

void FUN_107e49be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be1b860(uVar1,param_2,*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdce620(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e49c2c; end: 107e49c77; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:didChangeVisibility:] */

void FUN_107e49c2c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c173500();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea1c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setAllOtherPreviewBottomCompone_1125860b0,param_4 ^ 1);
  return;
}



/* Entry: 107e49c78; end: 107e49d8b; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:isPlaybackManuallyPaused:] */

void FUN_107e49c78(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126c4aa8;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c240640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c240d40(puVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 1;
  if (param_4 == 0) {
    uVar2 = 2;
  }
  func_0x00010c2b5720(puVar3,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c240640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107e49d8c; end: 107e49da7; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:didSeekToTime:] */

void FUN_107e49d8c(long param_1)

{
  if ((*(byte *)(param_1 + 0xe9) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xe9) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bea1c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAllOtherPreviewBottomCompone_1125860b0,1)
  ;
  return;
}



/* Entry: 107e49da8; end: 107e49db3; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidFinishSeeking:] */

void FUN_107e49da8(long param_1)

{
  *(undefined1 *)(param_1 + 0xe9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bea1c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAllOtherPreviewBottomCompone_1125860b0,0)
  ;
  return;
}



/* Entry: 107e49db4; end: 107e49ddb; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnails:didTrimSegment:] */

void FUN_107e49db4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be3ef00();
                    /* WARNING: Could not recover jumptable at 0x00010bee0270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSnapEditorStateForClipLev_112595a40,uVar1);
  return;
}



/* Entry: 107e49ddc; end: 107e49e7b; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidEnterReorderingMode:] */

void FUN_107e49ddc(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c2be8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8ec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__replaceNGSBottomActionBarWithQu_1125814a0)
    ;
    return;
  }
  return;
}



/* Entry: 107e49e7c; end: 107e49f6b; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidExitReorderingMode:] */

void FUN_107e49e7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0xe0) = 2;
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010be8ec80(param_1);
  lVar2 = *(long *)(param_1 + 0x100);
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c1581e0();
  _objc_release(lVar2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec3b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopVideoAndShowVideoIfNecessar_11258e880)
    ;
    return;
  }
  param_1 = param_1 + 0xf8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa2800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e49f6c; end: 107e49f77; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidStartUpdatingCollectionView:] */

void FUN_107e49f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19cc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setFinishAndCancelButtonVisible__112644d40,0);
  return;
}



/* Entry: 107e49f78; end: 107e49f83; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidFinishUpdatingCollectionView:] */

void FUN_107e49f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19cc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setFinishAndCancelButtonVisible__112644d40,1);
  return;
}



/* Entry: 107e49f84; end: 107e49faf; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidDeleteSegmentInReorder:] */

void FUN_107e49f84(long param_1,undefined8 param_2)

{
  func_0x00010c177fc0(*(undefined8 *)(param_1 + 0x20),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bec3b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopVideoAndShowVideoIfNecessar_11258e880);
  return;
}



/* Entry: 107e49fb0; end: 107e49fbb; -[SCPreviewFeatureDirectorModeImpl featureDirectorModeThumbnailsDidEndDroppingInReorder:] */

void FUN_107e49fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setCancelButtonVisible__11263ba10,1);
  return;
}



/* Entry: 107e49fbc; end: 107e4a12b; -[SCPreviewFeatureDirectorModeImpl _replaceNGSBottomActionBarWithQuickEditingBar] */

void FUN_107e49fbc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf20760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0da200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfecde0(lVar2,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 != 0x7fffffffffffffff) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c11e5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(lVar3,param_2,lVar5,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  func_0x00010bea6840(param_1,param_2,0);
  if (*(long *)(param_1 + 0xe0) == 1) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c236940();
  }
  else {
    if (*(long *)(param_1 + 0xe0) != 0) goto LAB_107e4a104;
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22ed00();
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
LAB_107e4a104:
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e4a12c; end: 107e4a37b; -[SCPreviewFeatureDirectorModeImpl _replaceQuickEditingBarWithNGSBottomActionBar] */

void FUN_107e4a12c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0da200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf20760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfecde0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0x7fffffffffffffff) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar6 = lVar3;
    func_0x00010c0da200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(lVar5,param_2,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ed00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236f80();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bea6840(param_1,param_2,1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar6 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c2702c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  if (lVar5 != 0) {
    uVar1 = 2;
  }
  func_0x00010c1fbac0(lVar4,param_2,uVar1);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf6e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107e4a37c; end: 107e4a3af; -[SCPreviewFeatureDirectorModeImpl videoPlaybackSession:didRenderFrameAtTime:] */

void FUN_107e4a37c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  uStack_20 = param_4[2];
  func_0x00010c0ff160(*(undefined8 *)(param_1 + 0x100),param_2,&uStack_30);
  return;
}



/* Entry: 107e4a3b0; end: 107e4a3b7; -[SCPreviewFeatureDirectorModeImpl videoPlaybackSessionDidStartRunning:] */

void FUN_107e4a3b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ff1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_playbackDidStartRunning_11261d688);
  return;
}



/* Entry: 107e4a3b8; end: 107e4a3bf; -[SCPreviewFeatureDirectorModeImpl videoPlaybackSessionDidStopRunning:] */

void FUN_107e4a3b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ff1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_playbackDidStopRunning_11261d690);
  return;
}



/* Entry: 107e4a3c0; end: 107e4a3c7; -[SCPreviewFeatureDirectorModeImpl videoPlaybackSessionDidPauseRunning:] */

void FUN_107e4a3c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ff150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_playbackDidPauseRunning_11261d670);
  return;
}



/* Entry: 107e4a3c8; end: 107e4a3cf; -[SCPreviewFeatureDirectorModeImpl videoPlaybackSessionDidResumeRunning:] */

void FUN_107e4a3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ff190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_playbackDidResumeRunning_11261d680);
  return;
}



/* Entry: 107e4a3d0; end: 107e4a5bb; -[SCPreviewFeatureDirectorModeImpl quickEditingBar] */

void FUN_107e4a3d0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar5;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar2 = PTR_PTR_1126d7ff8;
    _objc_opt_new();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar9);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c240000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x80);
  func_0x00010c23ef20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = lVar10;
    func_0x00010bf4b640(lVar10,param_2,uVar9);
    uVar1 = (uint)lVar5;
  }
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bfe0aa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c240000(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c080c60(uVar9,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar6);
  lVar10 = *(long *)(param_1 + 0xe0);
  if ((lVar10 == 2) || (lVar10 == 1)) {
    func_0x00010c18b7c0(*(undefined8 *)(param_1 + 0x20),param_2,
                        ((uVar1 | (uint)uVar8) ^ 0xffffffff) & 1);
    func_0x00010c177fc0(*(undefined8 *)(param_1 + 0x20),param_2,0);
    func_0x00010c1ac4c0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  }
  else if (lVar10 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c18b7c0(uVar9,param_2,0);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107e583e8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac4c0(uVar3,param_2,uVar9);
    _objc_release(uVar9);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 107e4a5bc; end: 107e4a5c3; -[SCPreviewFeatureDirectorModeImpl didTapPreviewQuickEditingCancelButton] */

void FUN_107e4a5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13c710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x100),PTR_s_restoreThumbnailsToInitialStateI_11262cbe0);
  return;
}



/* Entry: 107e4a5c4; end: 107e4a633; -[SCPreviewFeatureDirectorModeImpl didTapPreviewQuickEditingDeleteButton] */

void FUN_107e4a5c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be3fc60();
  if ((int)lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c1581e0();
    _objc_release(lVar2);
    if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010beb8a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showDeleteDraftAlert_11258bc40);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb8a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showDeleteSegmentAlert_11258bc48);
  return;
}



/* Entry: 107e4a634; end: 107e4a6d7; -[SCPreviewFeatureDirectorModeImpl didTapPreviewQuickEditingFinishButton] */

void FUN_107e4a634(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  if (lVar1 == 2) {
    param_1 = param_1 + 0xf8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfa2800();
  }
  else {
    if (lVar1 != 1) {
      if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9bab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 0x100),PTR_s_exitSegmentThumbnailsReordering_1125c4850)
        ;
        return;
      }
      return;
    }
    func_0x00010bf6e8a0(param_1);
    param_1 = *(long *)(param_1 + 0x90);
    func_0x00010c08f640(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d140();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e4a6d8; end: 107e4a783; -[SCPreviewFeatureDirectorModeImpl editingIndex] */

undefined8 FUN_107e4a6d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010c159f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0x7fffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c0c45a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c159f00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfecde0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  return uVar2;
}



/* Entry: 107e4a784; end: 107e4aa4f; -[SCPreviewFeatureDirectorModeImpl _updateSegmentEditedThumbnails] */

void FUN_107e4a784(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c2702c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 != 0) {
    dVar8 = 0.0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 0x100);
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    param_3 = &uStack_110;
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar5 = *plStack_100;
      do {
        lVar7 = 0;
        do {
          if (*plStack_100 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          func_0x00010bfa2160(param_1);
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        param_3 = &uStack_110;
        lVar2 = lVar1;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfccf80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c2702c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      param_3 = (undefined8 *)0x1;
      func_0x00010bfcd080(dVar8 * 48.0,dVar8 * 85.0,param_1);
      _objc_release(puVar3);
      _objc_release();
      lVar2 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar4 = uVar6;
  func_0x00010bfccf80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1b840(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(uVar4);
  lVar1 = *(long *)(lVar2 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2140c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 107e4aa50; end: 107e4ab2b; -[SCPreviewFeatureDirectorModeImpl _generateOverlayStateAtIndex:overlayImage:videoTrackedImages:] */

void FUN_107e4aa50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c2702c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13afa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1b840(param_1,param_2,uVar2,puVar3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107e4ab2c; end: 107e4b28b; -[SCPreviewFeatureDirectorModeImpl _generateOverlayState:segmentIndex:overlayImage:videoTrackedImages:] */

void FUN_107e4ab2c(double param_1,double param_2,long param_3,undefined *param_4,long param_5,
                  undefined *param_6,long param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  lStack_110 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = (undefined *)(param_3 + 0x40);
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar14;
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_3 + 0x90);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf926c0();
  _objc_release(uVar4);
  if ((int)uVar5 == 0) {
    lVar6 = param_5;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar6;
    func_0x00010bf52160();
  }
  else {
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_6;
    func_0x00010c071ae0();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      lVar16 = 0;
      goto LAB_107e4ac8c;
    }
    lVar6 = *(long *)(param_3 + 0x90);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar6;
    param_4 = param_6;
    FUN_107ffcb24();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar6);
LAB_107e4ac8c:
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010c2a0420();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_5;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c27e680();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar8;
  _objc_release(lVar7);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    puVar14 = PTR_PTR_1126b26d8;
    func_0x00010bf978e0(PTR_PTR_1126b26d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(puVar14);
  }
  lVar7 = lStack_108;
  lVar8 = lStack_108;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    lVar8 = lVar7;
    func_0x00010c0b8600(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(lVar8);
  }
  puVar14 = puVar3;
  puStack_128 = param_6;
  func_0x00010bf529e0();
  if (puVar14 == (undefined *)0x0) {
    lVar8 = 0;
  }
  else {
    puVar14 = PTR_PTR_1126b26e0;
    func_0x00010c29b780(PTR_PTR_1126b26e0);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_3 + 0x50);
    func_0x00010bf41e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
  }
  lVar1 = lStack_110;
  lVar9 = lVar8;
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    func_0x00010befa160(puVar2);
  }
  puVar14 = (undefined *)0x0;
  lVar9 = param_8;
  lStack_130 = lVar8;
  lStack_118 = lVar16;
  if (lVar1 != 0) {
    func_0x00010c23d0a0(lVar1);
    func_0x00010c23d0a0(lVar1);
    param_1 = param_1 / param_2;
    dVar18 = 0.0;
    dVar17 = 85.0;
    if (param_1 != 0.0) {
      if (param_1 == INFINITY) {
        dVar17 = 0.0;
        dVar18 = 48.0;
      }
      else {
        dVar17 = 85.0;
        dVar18 = param_1 * 85.0;
        if (48.0 <= dVar18) {
          dVar18 = 48.0;
          dVar17 = 48.0 / param_1;
        }
      }
    }
    param_1 = dVar18 / 48.0;
    puVar10 = PTR_PTR_1126b2700;
    _objc_alloc(PTR_PTR_1126b2700);
    func_0x00010c055500(0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000,0);
    puVar11 = PTR_PTR_1126c41f8;
    func_0x00010c252d00(PTR_PTR_1126c41f8);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126c4200;
    _objc_alloc();
    func_0x00010c02fc00(param_1,dVar17 / 85.0);
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    _objc_release(puVar14);
    _objc_release(puVar11);
    _objc_release(puVar10);
    lVar7 = lStack_108;
  }
  lVar16 = lStack_118;
  func_0x00010c29aae0(param_5);
  lVar8 = lVar9;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    puVar14 = PTR_PTR_1126b26f0;
    func_0x00010bf41e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar14);
  }
  if (lVar16 == 0) {
    uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    func_0x00010bf27a60(&uStack_d0,lVar16);
  }
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uVar12 = 0;
  _CGAffineTransformIsIdentity();
  puVar10 = puVar2;
  if ((lVar6 == 0) && ((uVar12 & 1) == 0)) {
    puVar14 = PTR_PTR_1126b26c8;
    func_0x00010c22b820();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar14;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar13;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    _objc_release(puVar13);
    lVar7 = lStack_108;
    _objc_release(puVar11);
    _objc_release(puVar14);
    lVar16 = lStack_118;
  }
  puVar2 = puVar10;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c4ac0;
    func_0x00010aefb9ac(PTR_PTR_1126c4ac0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010aefba04();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uStack_f8 = uStack_c8;
    uStack_100 = uStack_d0;
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    puVar14 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010aefba48(puVar2,puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar14);
    param_4 = puStack_120;
    func_0x00010aefba8c(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar14 = *(undefined **)(param_3 + 0xd8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar14;
    func_0x00010bf14000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar13 = puVar11;
    func_0x00010c274320();
    _objc_retainAutoreleasedReturnValue();
    if (puVar13 != (undefined *)0x0) {
      puVar15 = puVar11;
      func_0x00010bf20040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar13);
      puVar14 = (undefined *)0x0;
      if (puVar15 != (undefined *)0x0) {
        puVar14 = puVar11;
        func_0x00010c274320();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar11;
        puStack_98 = puVar14;
        func_0x00010bf20040();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_90 = puVar13;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        param_4 = puVar15;
        func_0x00010aefbad0(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar15);
        lVar7 = lStack_108;
        _objc_release(puVar13);
        _objc_release(puVar14);
      }
    }
    func_0x00010aefb9cc(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar2);
    lVar16 = lStack_118;
  }
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lStack_130);
  _objc_release(puVar10);
  _objc_release(lVar16);
  _objc_release(puStack_120);
  _objc_release(lVar9);
  _objc_release(lStack_110);
  _objc_release(puStack_128);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    pcStack_138 = FUN_107e4b28c;
    puStack_150 = puVar14;
    lStack_148 = param_5;
    puStack_140 = &stack0xfffffffffffffff0;
    if (param_4 == (undefined *)0x0) {
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
    }
    else {
      func_0x00010bfb13e0(&uStack_168,param_4);
    }
    func_0x00010c297200(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e4b28c; end: 107e4b2e3;  */

void FUN_107e4b28c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x00010bfb13e0(&uStack_38,param_2);
  }
  func_0x00010c297200(puVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e4b2e4; end: 107e4b2f3;  */

void FUN_107e4b2e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b26d8,PTR_s_entryWithLensId__1125c3800,param_2)
  ;
  return;
}



/* Entry: 107e4b2f4; end: 107e4b4cf; -[SCPreviewFeatureDirectorModeImpl _applyOverlayState:toSegment:] */

void FUN_107e4b2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain();
  _dispatch_group_create();
  _objc_initWeak(auStack_68,param_1);
  _dispatch_group_enter(uVar2);
  uVar3 = param_4;
  func_0x00010bfb13c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107e4b4d0;
  puStack_90 = &UNK_1108998a8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar2);
  uStack_88 = uVar2;
  _objc_retain(param_3);
  uVar4 = param_4;
  uStack_80 = param_3;
  _objc_retain(param_4);
  uStack_78 = param_4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107e4b6f8;
  puStack_c0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_b0,auStack_68);
  uStack_b8 = param_4;
  _objc_retain(param_4);
  func_0x000100bc0718(uVar2,PTR___dispatch_main_q_11034be20,&puStack_d8);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107e4b4d0; end: 107e4b6af;  */

void FUN_107e4b4d0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (((lVar1 == 0) || (param_2 == 0)) || (param_3 != 0)) {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    if (*(long *)(param_1 + 0x30) == 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bfb13e0(&uStack_90);
    }
    func_0x00010c297200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    func_0x00010bf08740(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar8);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a80(*(undefined8 *)(param_2 + 0x20));
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 107e4b6b0; end: 107e4b6f7;  */

void FUN_107e4b6b0(long param_1,undefined8 param_2)

{
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a80(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107e4b6f8; end: 107e4b7ab;  */

void FUN_107e4b6f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf8c600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a120(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193ac0(lVar2,param_2,puVar4,*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e4b7ac; end: 107e4b83f; -[SCPreviewFeatureDirectorModeImpl cameraModeOnboardingDialogPresenter:presentDialog:] */

void FUN_107e4b7ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(param_4);
  func_0x00010c274120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1903a0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237000();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e4b840; end: 107e4b967; -[SCPreviewFeatureDirectorModeImpl _subscrideOnFilterCarouselOrderProvider] */

void FUN_107e4b840(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0eca00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107e4b968; end: 107e4ba0b;  */

void FUN_107e4b968(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3a20(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107e4ba0c; end: 107e4ba53;  */

void FUN_107e4ba0c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26fe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e4ba54; end: 107e4bcfb; -[SCPreviewFeatureDirectorModeImpl _handleCarouselOrderChanged:] */

long FUN_107e4ba54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0xec) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2702c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c13afa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = lVar3;
    func_0x00010c27e680();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar8 != 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(param_3);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
      if (lVar2 != 0) {
        lVar8 = *plStack_120;
        do {
          lVar1 = 0;
          do {
            if (*plStack_120 != lVar8) {
              _objc_enumerationMutation(param_3);
            }
            uVar4 = *(undefined8 *)(lStack_128 + lVar1 * 8);
            func_0x00010bfadea0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar3;
            func_0x00010c27e680();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar4;
            func_0x00010c0720c0(uVar4,param_2,lVar6);
            *(char *)(param_1 + 0xec) = (char)uVar7;
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(uVar4);
            if ((*(byte *)(param_1 + 0xec) & 1) != 0) goto LAB_107e4bc0c;
            lVar1 = lVar1 + 1;
          } while (lVar2 != lVar1);
          lVar2 = param_3;
          func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
        } while (lVar2 != 0);
      }
LAB_107e4bc0c:
      _objc_release(param_3);
      if (*(char *)(param_1 + 0xec) == '\x01') {
        uVar7 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c130e20();
        _objc_release(uVar7);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0xf0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010c27e680();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13c3a0(uVar7,param_2,lVar8);
        _objc_release(lVar8);
        _objc_release(lVar2);
        _objc_release(uVar7);
        *(undefined1 *)(param_1 + 0xec) = 1;
      }
    }
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar2 = param_3 + 0x38;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010c243400();
  if (lVar8 == 7) {
    param_3 = param_3 + 0x38;
    _objc_loadWeakRetained(param_3);
    lVar3 = param_3;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010b5fac18();
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_release(param_3);
  }
  else {
    lVar8 = 0;
  }
  _objc_release(lVar2);
  return lVar8;
}



/* Entry: 107e4bcfc; end: 107e4bd9f; -[SCPreviewFeatureDirectorModeImpl _isDraftFromMemories] */

long FUN_107e4bcfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c243400();
  if (lVar4 == 7) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010b5fac18();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    lVar4 = 0;
  }
  _objc_release(lVar1);
  return lVar4;
}



/* Entry: 107e4bda0; end: 107e4bec3; -[SCPreviewFeatureDirectorModeImpl _showClipLevelEditsFTUEModalIfNecessary] */

void FUN_107e4bda0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c22f5c0();
  _objc_release(uVar7);
  _objc_release(uVar1);
  if (((int)uVar2 != 0) && (*(long *)(param_1 + 200) == 0)) {
    puVar3 = PTR_PTR_1126b00c8;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x000107e583a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000107e583b8();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 0xc0;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c031a40();
    uVar7 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar3;
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010c10ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 200),PTR_s_present_1126205a0);
    return;
  }
  return;
}



/* Entry: 107e4bec4; end: 107e4c1b3; -[SCPreviewFeatureDirectorModeImpl _showDeleteDraftAlert] */

void FUN_107e4bec4(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_98;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108edf248();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107e4c1b4;
  puStack_a8 = &UNK_1108482a8;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x00010b0af26c();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar4;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_107e4c290;
  puStack_d0 = &UNK_1108482a8;
  puVar10 = auStack_98;
  _objc_copyWeak(auStack_c8,puVar10);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000108edf200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar5;
  func_0x000108edf230();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar2;
  puStack_88 = puVar3;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c211b40(puVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237000();
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a0);
  puVar1 = auStack_98;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  puVar9 = puVar1;
  __Unwind_Resume(puVar1);
  pcStack_f8 = FUN_107e4c1b4;
  puStack_120 = puVar4;
  puStack_118 = puVar3;
  uStack_110 = uVar8;
  puStack_108 = puVar1;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_copyWeak(auStack_128,puVar9 + 0x20);
  func_0x00010bf84b00(puVar10);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar10);
  return;
}



/* Entry: 107e4c1b4; end: 107e4c25b;  */

void FUN_107e4c1b4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107e4c25c; end: 107e4c28f;  */

void FUN_107e4c25c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdf9ec0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e4c290; end: 107e4c337;  */

void FUN_107e4c290(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107e4c338; end: 107e4c37f;  */

void FUN_107e4c338(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0xf8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa2800();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e4c380; end: 107e4c38f;  */

void FUN_107e4c380(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107e4c390; end: 107e4c5d3; -[SCPreviewFeatureDirectorModeImpl _showDeleteSegmentAlert] */

void FUN_107e4c390(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_70;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108edf248();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107e4c5d4;
  puStack_80 = &UNK_1108482a8;
  puVar9 = auStack_70;
  _objc_copyWeak(auStack_78,puVar9);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108edf200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000108edf218();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c211b40(puVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237000();
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  puVar1 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  puVar8 = puVar1;
  __Unwind_Resume(puVar1);
  pcStack_a8 = FUN_107e4c5d4;
  puStack_d0 = puVar4;
  puStack_c8 = puVar3;
  puStack_c0 = puVar2;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_copyWeak(auStack_d8,puVar8 + 0x20);
  func_0x00010bf84b00(puVar9);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar9);
  return;
}



/* Entry: 107e4c5d4; end: 107e4c67b;  */

void FUN_107e4c5d4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107e4c67c; end: 107e4c6a7;  */

void FUN_107e4c67c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e4c6a8; end: 107e4c6b7;  */

void FUN_107e4c6a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107e4c6b8; end: 107e4c83f; -[SCPreviewFeatureDirectorModeImpl _deleteSelectedSegment] */

void FUN_107e4c6b8(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  bVar1 = *(byte *)(param_1 + 0xe8);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c159f00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e100();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c159f00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if ((bVar1 & 1) == 0) {
    func_0x00010c18ed00();
    _objc_release(uVar2);
    func_0x00010bf6c7a0(*(undefined8 *)(param_1 + 0x100));
  }
  else {
    func_0x00010c18ed00();
    _objc_release(uVar2);
    func_0x00010bf6c7a0(*(undefined8 *)(param_1 + 0x100));
    lVar3 = *(long *)(param_1 + 0x100);
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1581e0();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      lVar4 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar4);
      lVar3 = lVar4;
      func_0x00010c14a120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(lVar3);
      goto LAB_107e4c7a4;
    }
  }
  lVar4 = param_1 + 0xf8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bfa2800();
LAB_107e4c7a4:
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010be3fc60();
  if ((int)lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c08f640(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d140();
    _objc_release(uVar2);
    _objc_release(uVar5);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200f60();
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107e4c840; end: 107e4c86b; -[SCPreviewFeatureDirectorModeImpl _deleteDraftAndExitPreview] */

void FUN_107e4c840(long param_1)

{
  param_1 = param_1 + 0xf8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa2780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e4c86c; end: 107e4cb33; -[SCPreviewFeatureDirectorModeImpl _configPreviewView] */

void FUN_107e4c86c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107e4cb34;
  puStack_50 = &UNK_110a0f410;
  lStack_48 = param_1;
  func_0x0001006372a4(uVar5,&puStack_68);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar5);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0da200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bf20760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0xe0) != 1) {
    if (*(long *)(param_1 + 0xe0) == 0) {
      func_0x00010c1a7f60(lVar2);
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010bf20760();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c11e5c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar3);
      goto LAB_107e4ca78;
    }
    lVar1 = param_1;
    func_0x00010be3ef00();
    if ((int)lVar1 == 0) {
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010bf20760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720();
      _objc_release(lVar3);
      goto LAB_107e4ca78;
    }
  }
  func_0x00010c1a7f60(lVar2);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bf20760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c11e5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c236940();
LAB_107e4ca78:
  _objc_release(lVar1);
  func_0x00010bea6840(param_1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bf20760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(lVar3);
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf6e0();
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(uVar5);
  return;
}



/* Entry: 107e4cb34; end: 107e4cb5f;  */

void FUN_107e4cb34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c084c40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be44ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s__isToolSupportedByClipLevelEditi_11256ec50,param_2);
  return;
}



/* Entry: 107e4cb60; end: 107e4ccaf; -[SCPreviewFeatureDirectorModeImpl _setPreviewCarouselViewEnabled:] */

void FUN_107e4cb60(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c110940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c110940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010c110940();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 & 1) == 0) {
      func_0x00010c12d360(lVar4,param_2,lVar5);
    }
    else {
      func_0x00010c066b00();
    }
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 107e4ccb0; end: 107e4cdef; -[SCPreviewFeatureDirectorModeImpl _setAllOtherPreviewBottomComponentsHidden:] */

ulong FUN_107e4ccb0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
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
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf20760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf52a60(uVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (uVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      uVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(uVar2);
        }
        lVar3 = *(long *)(lStack_118 + uVar5 * 8);
        if (lVar3 != *(long *)(param_1 + 0x100)) {
          func_0x00010bf44580();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7f60();
          _objc_release(lVar3);
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
      uVar1 = uVar2;
      func_0x00010bf52a60(uVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar2;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(uVar2 + 0x100);
  func_0x00010c159f00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (ulong)(lVar4 != 0);
}



/* Entry: 107e4cdf0; end: 107e4ce27; -[SCPreviewFeatureDirectorModeImpl _isClipLevelEditing] */

bool FUN_107e4cdf0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010c159f00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107e4ce28; end: 107e4ceff; -[SCPreviewFeatureDirectorModeImpl _updateSnapEditorStateForClipLevelEditEnabled:] */

void FUN_107e4ce28(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107e4cf00;
  puStack_40 = &UNK_110a0f440;
  ppuVar1 = &puStack_58;
  lStack_38 = param_1;
  _objc_retainBlock();
  if (((param_3 & 1) == 0) || (func_0x00010bf8c7a0(), param_1 == 0x7fffffffffffffff)) {
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010c09e180();
    _objc_retainAutoreleasedReturnValue();
  }
  (*(code *)ppuVar1[2])(ppuVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 107e4cf00; end: 107e4d01b;  */

void FUN_107e4cf00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  func_0x00010c240640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c4aa8;
  func_0x00010c240d40(PTR_PTR_1126c4aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab840();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  func_0x00010c240640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e4d01c; end: 107e4d06f; -[SCPreviewFeatureDirectorModeImpl _stopVideoAndShowVideoIfNecessary] */

void FUN_107e4d01c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256e40();
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23ac40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e4d070; end: 107e4d087; -[SCPreviewFeatureDirectorModeImpl delegate] */

void FUN_107e4d070(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e4d088; end: 107e4d093; -[SCPreviewFeatureDirectorModeImpl setDelegate:] */

void FUN_107e4d088(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf8,param_3);
  return;
}



/* Entry: 107e4d094; end: 107e4d09b; -[SCPreviewFeatureDirectorModeImpl thumbnailsFeature] */

undefined8 FUN_107e4d094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 107e4d09c; end: 107e4d0a3; -[SCPreviewFeatureDirectorModeImpl thumbnailsViewController] */

undefined8 FUN_107e4d09c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 107e4d0a4; end: 107e4d21b; -[SCPreviewFeatureDirectorModeImpl .cxx_destruct] */

void FUN_107e4d0a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_destroyWeak(param_1 + 0xc0);
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
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e4d21c; end: 107e4d333; -[SCPreviewFeatureDirectorModeServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e4d21c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d8008;
  _objc_alloc(PTR_PTR_1126d8008);
  func_0x00010c00c940();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127705c0);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107e4d334; end: 107e4d7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e4d334(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
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
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined *puVar38;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar38 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1 + _DAT_112770570;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar38 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar38);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain();
    _objc_release(uVar2);
    puVar38 = PTR_PTR_1126d8000;
    _objc_alloc();
    lVar4 = param_1 + _DAT_112770574;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112770588;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c26fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112770580;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf71d60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_1127705a0;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf69900();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_1127705a4;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c29b6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_1127705a8;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c26a1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + _DAT_112770584;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1 + _DAT_1127705b8;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010c092a20();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1 + _DAT_112770590;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010bf324a0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1 + _DAT_112770594;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010c252540();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_1 + _DAT_11277058c;
    _objc_loadWeakRetained();
    lVar26 = param_1 + _DAT_11277057c;
    _objc_loadWeakRetained();
    lVar27 = param_1 + _DAT_112770598;
    _objc_loadWeakRetained();
    lVar28 = param_1 + _DAT_1127705ac;
    _objc_loadWeakRetained();
    lVar29 = lVar28;
    func_0x00010c273f60();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = param_1 + _DAT_1127705b0;
    _objc_loadWeakRetained();
    lVar31 = param_1 + _DAT_1127705b4;
    _objc_loadWeakRetained();
    lVar32 = lVar31;
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = param_1 + _DAT_112770578;
    _objc_loadWeakRetained();
    lVar34 = lVar33;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = param_1 + _DAT_11277059c;
    _objc_loadWeakRetained();
    lVar36 = param_1 + _DAT_1127705bc;
    _objc_loadWeakRetained();
    lVar37 = lVar36;
    func_0x00010c29f540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e200(puVar38);
    _objc_release(uVar1);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar38);
  return;
}



/* Entry: 107e4d7ac; end: 107e4d8cb; -[SCPreviewFeatureDirectorModeServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e4d7ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127705c0,0);
  _objc_destroyWeak(param_1 + _DAT_1127705bc);
  _objc_destroyWeak(param_1 + _DAT_1127705b8);
  _objc_destroyWeak(param_1 + _DAT_1127705b4);
  _objc_destroyWeak(param_1 + _DAT_1127705b0);
  _objc_destroyWeak(param_1 + _DAT_1127705ac);
  _objc_destroyWeak(param_1 + _DAT_1127705a8);
  _objc_destroyWeak(param_1 + _DAT_1127705a4);
  _objc_destroyWeak(param_1 + _DAT_1127705a0);
  _objc_destroyWeak(param_1 + _DAT_11277059c);
  _objc_destroyWeak(param_1 + _DAT_112770598);
  _objc_destroyWeak(param_1 + _DAT_112770594);
  _objc_destroyWeak(param_1 + _DAT_112770590);
  _objc_destroyWeak(param_1 + _DAT_11277058c);
  _objc_destroyWeak(param_1 + _DAT_112770588);
  _objc_destroyWeak(param_1 + _DAT_112770584);
  _objc_destroyWeak(param_1 + _DAT_112770580);
  _objc_destroyWeak(param_1 + _DAT_11277057c);
  _objc_destroyWeak(param_1 + _DAT_112770578);
  _objc_destroyWeak(param_1 + _DAT_112770574);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112770570);
  return;
}



/* Entry: 107e4d8cc; end: 107e4d977; -[SCPreviewFeatureDirectorModeServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e4d8cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127705c4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127705cc;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf7f1c0(lVar2);
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



/* Entry: 107e4d978; end: 107e4d9bb; -[SCPreviewFeatureDirectorModeServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e4d978(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127705cc);
  _objc_destroyWeak(param_1 + _DAT_1127705c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127705c4);
  return;
}



/* Entry: 107e4d9bc; end: 107e4de7f; -[SCTimelineSnapStateHandler initWithTimelineConfiguration:previewConfiguration:indexProvider:overlaySize:userSession:userInfoServices:previewCameraSourceOverlayService:overlayFormatServices:userTaggingFeature:previewABProvider:previewBlizzardLogger:targetTrajectoryFactory:snapDocEditor:snapDocManager:circumstanceEngine:stickerInjector:ctpItemViewService:snapDocConverterServices:snapDocEditorFactory:snapchatterFetcher:previewScopeServices:] */

undefined8 *
FUN_107e4d9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain();
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
  puStack_80 = PTR_PTR_1126fb658;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_6);
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1d,param_7);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_storeWeak(puVar1 + 0x1e,param_16);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_23;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_24;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    func_0x00010c180a40(puVar1);
  }
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
  return puVar1;
}



/* Entry: 107e4de80; end: 107e4e637; -[SCTimelineSnapStateHandler setConfiguration:] */

void FUN_107e4de80(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puVar9 = param_1 + 0xe0;
  _objc_loadWeakRetained();
  _objc_release();
  puVar2 = PTR_PTR_1126b00e8;
  if (puVar9 == param_3) goto LAB_107e4e5f4;
  puVar9 = param_3;
  func_0x00010c110b40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010c270220();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2525e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar9);
  if (puVar1 == param_1) {
    puVar2 = *(undefined **)(param_1 + 0xd0);
    func_0x00010bf529e0();
    puVar9 = param_3;
    func_0x00010c1581e0();
    if (*(long *)(param_1 + 0xd8) == 0) {
      lVar3 = *(long *)(param_1 + 0xd0);
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0xd0);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar4;
        func_0x00010bf51e00();
        uVar11 = *(undefined8 *)(param_1 + 0xd8);
        *(undefined8 *)(param_1 + 0xd8) = uVar12;
        _objc_release(uVar11);
        _objc_release(uVar4);
        puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_3;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar7 = PTR_PTR_1126c4908;
        _objc_alloc();
        if (puVar6 == (undefined *)0x0) {
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_120,puVar6);
        }
        func_0x00010c0522a0();
        param_4 = puVar7;
        func_0x00010c130f40(puVar13);
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puVar5 = puVar13;
        func_0x00010bf0a0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(param_1 + 0xd0);
        *(undefined **)(param_1 + 0xd0) = puVar8;
        _objc_release(uVar12);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar13);
      }
    }
    if (puVar2 != puVar9) goto LAB_107e4e084;
  }
  else {
LAB_107e4e084:
    puVar9 = param_3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
    }
    else {
      func_0x00010c27c900(&uStack_120,puVar2);
    }
    _objc_release(puVar2);
    _objc_release(puVar9);
    puVar9 = param_1 + 8;
    _objc_loadWeakRetained();
    puVar2 = puVar9;
    func_0x00010c070a20();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if ((int)puVar2 == 0) {
      if ((param_1[0x68] & 1) != 0) goto LAB_107e4e2f0;
      puVar2 = PTR_PTR_1126c4908;
      _objc_alloc();
      func_0x00010c0522a0();
      puVar5 = puVar2;
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar9 = PTR_PTR_1126c4908;
      _objc_alloc();
      func_0x00010c0522a0();
      uVar12 = *(undefined8 *)(param_1 + 0xd8);
      *(undefined **)(param_1 + 0xd8) = puVar9;
      _objc_release(uVar12);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = auStack_f0;
      puVar9 = puVar5;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (puVar9 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(puVar5);
          }
          puVar6 = param_1;
          func_0x00010be4f3c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar6);
          puVar13 = puVar13 + 1;
        } while (puVar9 != puVar13);
        param_4 = auStack_f0;
        puVar9 = puVar5;
        func_0x00010bf52a60();
      }
      _objc_release(puVar5);
      if ((param_1[0x68] == '\x01') &&
         (puVar9 = puVar2, func_0x00010bf529e0(), puVar9 != (undefined *)0x0)) {
        lVar3 = *(long *)(param_1 + 0xd0);
        func_0x00010bf529e0();
        if (lVar3 == 1) {
          puVar9 = *(undefined **)(param_1 + 0xd0);
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          param_4 = puVar9;
          func_0x00010c130f40(puVar2);
          _objc_release(puVar9);
        }
      }
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puVar5 = puVar2;
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar12 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined **)(param_1 + 0xd0) = puVar9;
    _objc_release(uVar12);
    _objc_release(puVar2);
  }
LAB_107e4e2f0:
  puVar9 = param_1 + 0xf0;
  _objc_loadWeakRetained();
  puVar2 = puVar9;
  func_0x00010bf926c0();
  _objc_release(puVar9);
  if ((int)puVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0xd0);
    func_0x00010bf529e0();
    if (lVar3 != -1) {
      puVar9 = (undefined *)0x0;
      do {
        puVar2 = *(undefined **)(param_1 + 0xd0);
        func_0x00010bf529e0();
        if (puVar9 == puVar2) {
          uVar12 = *(undefined8 *)(param_1 + 0xd8);
          _objc_retain(uVar12);
          puVar2 = PTR_PTR_1126affe8;
          func_0x00010bfccec0(PTR_PTR_1126affe8);
          _objc_retainAutoreleasedReturnValue();
LAB_107e4e3a8:
          puVar5 = param_1 + 0xf0;
          _objc_loadWeakRetained(puVar5);
          puVar13 = puVar5;
          func_0x00010bf8a040();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar13;
          func_0x00010c0d3c80();
          func_0x00010c191a20(uVar12);
          _objc_release(puVar6);
          _objc_release(puVar13);
          _objc_release(puVar5);
          puVar5 = param_1 + 8;
          _objc_loadWeakRetained();
          param_4 = puVar5;
          func_0x00010c07e840();
          _objc_release(puVar5);
          uVar4 = *(undefined8 *)(param_1 + 200);
          func_0x00010c2407e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c07bf40();
          _objc_release(uVar4);
          puVar5 = param_1 + 0xf0;
          _objc_loadWeakRetained(puVar5);
          puVar13 = puVar5;
          func_0x000108eb6800();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar13;
          func_0x00010c0d3c80();
          func_0x00010c20bc80(uVar12);
          _objc_release(puVar6);
          _objc_release(puVar13);
          _objc_release(puVar5);
          lVar10 = *(long *)(param_1 + 0xd8);
          func_0x00010bf0d660();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar10;
          func_0x00010c08fa60();
          _objc_release(lVar10);
          if (lVar3 == 0) {
            puVar5 = param_1 + 0xf0;
            _objc_loadWeakRetained();
            puVar13 = puVar5;
            func_0x000108eb6ce4();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            if (puVar13 != (undefined *)0x0) {
              func_0x00010c16b3a0(*(undefined8 *)(param_1 + 0xd8));
            }
            _objc_release(puVar13);
          }
          puVar13 = param_1 + 0xf0;
          _objc_loadWeakRetained();
          uVar4 = *(undefined8 *)(param_1 + 0xc0);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar13;
          func_0x000108e35f68(puVar13,uVar4,puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c0d3c80();
          puVar5 = puVar7;
          func_0x00010c178c80(uVar12);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(uVar4);
          _objc_release(puVar13);
          _objc_release(puVar2);
          _objc_release(uVar12);
        }
        else {
          puVar2 = param_1 + 0xf0;
          _objc_loadWeakRetained();
          puVar13 = puVar2;
          func_0x00010c09dea0();
          _objc_release(puVar2);
          if (puVar9 < puVar13 + 1) {
            uVar12 = *(undefined8 *)(param_1 + 0xd0);
            func_0x00010c0dfd40(uVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126affe8;
            func_0x00010c09e180(PTR_PTR_1126affe8);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107e4e3a8;
          }
        }
        puVar9 = puVar9 + 1;
        lVar3 = *(long *)(param_1 + 0xd0);
        func_0x00010bf529e0();
      } while (puVar9 < (undefined *)(lVar3 + 1U));
    }
  }
  _objc_storeWeak(param_1 + 0xe0,param_3);
  puVar9 = param_3;
  func_0x00010c28fca0();
  param_1[0x68] = puVar9 == (undefined *)0x1;
  if (*(long *)(param_1 + 0xd8) == 0) {
    puVar9 = param_1 + 0xf0;
    _objc_loadWeakRetained();
    _objc_release();
    if (puVar9 != (undefined *)0x0) goto LAB_107e4e5d0;
  }
  else {
LAB_107e4e5d0:
    puVar9 = param_1 + 0xe0;
    _objc_loadWeakRetained();
    func_0x00010bef9980();
    _objc_release(puVar9);
    puVar5 = param_1;
  }
  _objc_release(puVar1);
LAB_107e4e5f4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  if ((puVar5 != (undefined *)0x0) && (param_4 != (undefined *)0x0)) {
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)(param_3 + 0xd8);
    *(undefined **)(param_3 + 0xd8) = puVar5;
    _objc_release(uVar12);
    puVar9 = param_4;
    func_0x00010bf529e0();
    if (puVar9 != (undefined *)0x0) {
      puVar9 = param_4;
      func_0x00010bf51e00();
      uVar12 = *(undefined8 *)(param_3 + 0xd0);
      *(undefined **)(param_3 + 0xd0) = puVar9;
      _objc_release(uVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e4e638; end: 107e4e6b3; -[SCTimelineSnapStateHandler restoreEditingStatesFromGalleryWithGlobalState:localStates:] */

void FUN_107e4e638(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0xd8);
    *(long *)(param_1 + 0xd8) = param_3;
    _objc_release(uVar2);
    lVar1 = param_4;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      lVar1 = param_4;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)(param_1 + 0xd0);
      *(long *)(param_1 + 0xd0) = lVar1;
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e4e6b4; end: 107e4e8ff; -[SCTimelineSnapStateHandler maxUniqueStickerId] */

undefined * FUN_107e4e6b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long lVar12;
  long unaff_x27;
  long lVar13;
  long unaff_x28;
  long lVar14;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  long lStack_5b0;
  undefined1 *puStack_5a8;
  undefined *puStack_5a0;
  undefined1 uStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  undefined *puStack_578;
  undefined1 **ppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  long lStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_4a0 [128];
  undefined1 auStack_420 [128];
  undefined1 auStack_3a0 [128];
  long lStack_320;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar10 = *(long *)(param_1 + 0xd0);
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_230,auStack_f0,0x10);
  if (lVar4 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = (undefined *)0x0;
    unaff_x25 = *plStack_220;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_220 != unaff_x25) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x23 = *(long *)(lStack_228 + unaff_x26 * 8);
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = unaff_x23;
        func_0x00010bf52a60();
        if (lVar1 != 0) {
          unaff_x27 = *plStack_260;
          unaff_x24 = lVar1;
          do {
            unaff_x28 = 0;
            puVar6 = puVar9;
            do {
              if (*plStack_260 != unaff_x27) {
                _objc_enumerationMutation(unaff_x23);
              }
              puVar9 = *(undefined **)(lStack_268 + unaff_x28 * 8);
              func_0x00010c280560();
              if ((long)puVar9 <= (long)puVar6) {
                puVar9 = puVar6;
              }
              unaff_x28 = unaff_x28 + 1;
              puVar6 = puVar9;
            } while (unaff_x24 != unaff_x28);
            unaff_x24 = unaff_x23;
            func_0x00010bf52a60(unaff_x23,param_2,&uStack_270,auStack_170,0x10);
          } while (unaff_x24 != 0);
        }
        _objc_release(unaff_x23);
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x26 != lVar4);
      lVar4 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_230,auStack_f0,0x10);
    } while (lVar4 != 0);
    unaff_x22 = 0;
  }
  _objc_release(lVar10);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0xd8);
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    unaff_x22 = *plStack_2a0;
    do {
      unaff_x23 = 0;
      puVar6 = puVar9;
      do {
        if (*plStack_2a0 != unaff_x22) {
          _objc_enumerationMutation(lVar1);
        }
        puVar9 = *(undefined **)(lStack_2a8 + unaff_x23 * 8);
        func_0x00010c280560();
        if ((long)puVar9 <= (long)puVar6) {
          puVar9 = puVar6;
        }
        unaff_x23 = unaff_x23 + 1;
        puVar6 = puVar9;
      } while (lVar4 != unaff_x23);
      lVar4 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_2b0,auStack_1f0,0x10);
      lVar10 = 0;
    } while (lVar4 != 0);
  }
  lVar4 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar9;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_107e4e900;
  puVar7 = &uStack_560;
  lStack_320 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  plStack_4d0 = (long *)0x0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  lVar11 = *(long *)(lVar4 + 0xd0);
  lStack_310 = unaff_x28;
  lStack_308 = unaff_x27;
  lStack_300 = unaff_x26;
  lStack_2f8 = unaff_x25;
  lStack_2f0 = unaff_x24;
  lStack_2e8 = unaff_x23;
  lStack_2e0 = unaff_x22;
  lStack_2d8 = lVar10;
  lStack_2d0 = lVar1;
  puStack_2c8 = puVar9;
  puStack_2c0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar11);
  lVar10 = lVar11;
  func_0x00010bf52a60(lVar11,param_2,&uStack_4e0,auStack_3a0,0x10);
  if (lVar10 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = (undefined *)0x0;
    lVar1 = *plStack_4d0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_4d0 != lVar1) {
          _objc_enumerationMutation(lVar11);
        }
        lVar2 = *(long *)(lStack_4d8 + lVar12 * 8);
        lStack_518 = 0;
        uStack_520 = 0;
        uStack_508 = 0;
        plStack_510 = (long *)0x0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        func_0x00010bf8a020();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar13 = *plStack_510;
          do {
            lVar14 = 0;
            puVar6 = puVar9;
            do {
              if (*plStack_510 != lVar13) {
                _objc_enumerationMutation(lVar2);
              }
              puVar9 = *(undefined **)(lStack_518 + lVar14 * 8);
              func_0x00010c280560();
              if ((long)puVar9 <= (long)puVar6) {
                puVar9 = puVar6;
              }
              lVar14 = lVar14 + 1;
              puVar6 = puVar9;
            } while (lVar3 != lVar14);
            lVar3 = lVar2;
            func_0x00010bf52a60(lVar2,param_2,&uStack_520,auStack_420,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar10);
      lVar10 = lVar11;
      func_0x00010bf52a60(lVar11,param_2,&uStack_4e0,auStack_3a0,0x10);
    } while (lVar10 != 0);
    unaff_x22 = 0;
  }
  _objc_release(lVar11);
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  lStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  plStack_550 = (long *)0x0;
  lVar4 = *(long *)(lVar4 + 0xd8);
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = SUB81(auStack_4a0,0);
  lVar10 = lVar4;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    unaff_x22 = *plStack_550;
    do {
      lVar1 = 0;
      puVar6 = puVar9;
      do {
        if (*plStack_550 != unaff_x22) {
          _objc_enumerationMutation(lVar4);
        }
        puVar9 = *(undefined **)(lStack_558 + lVar1 * 8);
        func_0x00010c280560();
        if ((long)puVar9 <= (long)puVar6) {
          puVar9 = puVar6;
        }
        lVar1 = lVar1 + 1;
        puVar6 = puVar9;
      } while (lVar10 != lVar1);
      uVar8 = SUB81(auStack_4a0,0);
      lVar10 = lVar4;
      puVar7 = &uStack_560;
      func_0x00010bf52a60();
      lVar11 = 0;
    } while (lVar10 != 0);
  }
  lVar10 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_320) {
    return puVar9;
  }
  ___stack_chk_fail();
  pcStack_568 = FUN_107e4eb4c;
  lStack_590 = unaff_x22;
  lStack_588 = lVar11;
  lStack_580 = lVar4;
  puStack_578 = puVar9;
  ppuStack_570 = &puStack_2c0;
  _objc_retain(puVar7);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar5 = (undefined1 *)puVar7;
  func_0x00010bf529e0(puVar7);
  func_0x00010bf0a0e0(puVar9,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_5d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_5c8 = 0xc2000000;
  uStack_5c0 = 0x107e4ec34;
  puStack_5b8 = &UNK_110a0f4a0;
  lStack_5b0 = lVar10;
  puStack_5a8 = (undefined1 *)puVar7;
  puStack_5a0 = puVar9;
  uStack_598 = uVar8;
  _objc_retain();
  _objc_retain(puVar7);
  func_0x00010be46300(lVar10,param_2,puVar7,&puStack_5d0);
  puVar6 = puVar9;
  func_0x00010bf51e00(puVar9);
  _objc_release(puStack_5a0);
  _objc_release(puStack_5a8);
  _objc_release(puVar9);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 107e4e900; end: 107e4eb4b; -[SCTimelineSnapStateHandler maxDrawingStrokeUniqueId] */

undefined * FUN_107e4e900(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  long lStack_300;
  undefined1 *puStack_2f8;
  undefined *puStack_2f0;
  undefined1 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar6 = &uStack_2b0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar9 = *(long *)(param_1 + 0xd0);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_230,auStack_f0,0x10);
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = (undefined *)0x0;
    lVar10 = *plStack_220;
    do {
      lVar11 = 0;
      do {
        if (*plStack_220 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        lVar2 = *(long *)(lStack_228 + lVar11 * 8);
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        func_0x00010bf8a020();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar12 = *plStack_260;
          do {
            lVar13 = 0;
            puVar5 = puVar8;
            do {
              if (*plStack_260 != lVar12) {
                _objc_enumerationMutation(lVar2);
              }
              puVar8 = *(undefined **)(lStack_268 + lVar13 * 8);
              func_0x00010c280560();
              if ((long)puVar8 <= (long)puVar5) {
                puVar8 = puVar5;
              }
              lVar13 = lVar13 + 1;
              puVar5 = puVar8;
            } while (lVar3 != lVar13);
            lVar3 = lVar2;
            func_0x00010bf52a60(lVar2,param_2,&uStack_270,auStack_170,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar1);
      lVar1 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_230,auStack_f0,0x10);
    } while (lVar1 != 0);
    unaff_x22 = 0;
  }
  _objc_release(lVar9);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  lVar10 = *(long *)(param_1 + 0xd8);
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = SUB81(auStack_1f0,0);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x22 = *plStack_2a0;
    do {
      lVar9 = 0;
      puVar5 = puVar8;
      do {
        if (*plStack_2a0 != unaff_x22) {
          _objc_enumerationMutation(lVar10);
        }
        puVar8 = *(undefined **)(lStack_2a8 + lVar9 * 8);
        func_0x00010c280560();
        if ((long)puVar8 <= (long)puVar5) {
          puVar8 = puVar5;
        }
        lVar9 = lVar9 + 1;
        puVar5 = puVar8;
      } while (lVar1 != lVar9);
      uVar7 = SUB81(auStack_1f0,0);
      lVar1 = lVar10;
      puVar6 = &uStack_2b0;
      func_0x00010bf52a60();
      lVar9 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = lVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_107e4eb4c;
  lStack_2e0 = unaff_x22;
  lStack_2d8 = lVar9;
  lStack_2d0 = lVar10;
  puStack_2c8 = puVar8;
  puStack_2c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar4 = (undefined1 *)puVar6;
  func_0x00010bf529e0(puVar6);
  func_0x00010bf0a0e0(puVar8,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_320 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_318 = 0xc2000000;
  uStack_310 = 0x107e4ec34;
  puStack_308 = &UNK_110a0f4a0;
  lStack_300 = lVar1;
  puStack_2f8 = (undefined1 *)puVar6;
  puStack_2f0 = puVar8;
  uStack_2e8 = uVar7;
  _objc_retain();
  _objc_retain(puVar6);
  func_0x00010be46300(lVar1,param_2,puVar6,&puStack_320);
  puVar5 = puVar8;
  func_0x00010bf51e00(puVar8);
  _objc_release(puStack_2f0);
  _objc_release(puStack_2f8);
  _objc_release(puVar8);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 107e4eb4c; end: 107e4ecef; -[SCTimelineSnapStateHandler editingStatesForTimeRanges:withGlobalAndLocalStateResolved:] */

void FUN_107e4eb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107e4ec34;
  puStack_58 = &UNK_110a0f4a0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  puStack_40 = puVar2;
  uStack_38 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010be46300(param_1,param_2,param_3,&puStack_70);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puStack_40);
  _objc_release(uStack_48);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107e4ecf0; end: 107e4edf7; -[SCTimelineSnapStateHandler editingStateAtIndex:withGlobalAndLocalStateResolved:] */

void FUN_107e4ecf0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  if (*(long *)(param_1 + 0xd8) == 0) {
    func_0x00010c09df80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_4 & 1) != 0) {
      lVar3 = param_1;
      func_0x00010c13afa0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107e4ed94;
    }
    func_0x00010c09df80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = lVar2;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_107e4ed94:
  lVar1 = param_1 + 0xe0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf04920();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    func_0x00010becf500(param_1,param_2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107e4edf8; end: 107e4ee93;  */

bool FUN_107e4edf8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    _objc_retain(param_2);
    func_0x00010bf4d840(&uStack_50,param_2);
    func_0x00010c27c900(&uStack_80,param_2);
    _objc_release(param_2);
  }
  uStack_98 = uStack_30;
  uStack_a0 = uStack_38;
  uStack_90 = uStack_28;
  uStack_b8 = uStack_60;
  uStack_c0 = uStack_68;
  uStack_b0 = uStack_58;
  puVar1 = &uStack_a0;
  _CMTimeCompare(puVar1,&uStack_c0);
  return (int)puVar1 != 0;
}



/* Entry: 107e4ee94; end: 107e4ee9b; -[SCTimelineSnapStateHandler editingStateToSaveAtIndex:] */

void FUN_107e4ee94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_editingStateAtIndex_withGlobalAn_1125c0bb8,param_3,0);
  return;
}



/* Entry: 107e4ee9c; end: 107e4ef17; -[SCTimelineSnapStateHandler hasEditsAtIndex:] */

/* WARNING: Possible PIC construction at 0x000107e4eedc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e4eee0) */
/* WARNING: Removing unreachable block (ram,0x000107e4eef0) */

void FUN_107e4ee9c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0xd0);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + 0xd0));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfd68d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107e4ef18; end: 107e4f4f3; -[SCTimelineSnapStateHandler resolvedClipEditingStateAtIndex:] */

void FUN_107e4ef18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010c09e180();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = *(undefined **)(param_1 + 0xd0);
  if (*(long *)(param_1 + 0xd8) == 0) {
    func_0x00010bfb1920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf51e00();
  }
  else {
    func_0x00010c14da60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be61540(param_1);
    _objc_release(puVar4);
    puVar2 = *(undefined **)(param_1 + 0xd8);
    func_0x00010bf51e00();
    lVar3 = *(long *)(param_1 + 0xd0);
    func_0x00010c14da60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
    }
    else {
      func_0x00010c26f040(&uStack_78,lVar3);
    }
    func_0x00010c214c20(puVar2);
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0xf0;
    _objc_loadWeakRetained();
    lVar5 = lVar3;
    func_0x00010bf926c0();
    _objc_release(lVar3);
    if ((int)lVar5 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c14da60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4);
      _objc_release(uVar10);
      _objc_release(uVar6);
      puVar11 = puVar2;
      func_0x00010c2553e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4);
    }
    else {
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained(lVar3);
      lVar5 = lVar3;
      func_0x00010c07e840();
      _objc_release(lVar3);
      uVar6 = *(undefined8 *)(param_1 + 200);
      func_0x00010c2407e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010c07bf40();
      _objc_release(uVar6);
      lVar3 = param_1 + 0xf0;
      _objc_loadWeakRetained(lVar3);
      lVar7 = lVar3;
      func_0x000108eb6800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4);
      _objc_release(lVar7);
      _objc_release(lVar3);
      puVar11 = (undefined *)(param_1 + 0xf0);
      _objc_loadWeakRetained(puVar11);
      uVar6 = *(undefined8 *)(param_1 + 0x88);
      puVar8 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar11;
      func_0x000108eb6800(puVar11,uVar6,puVar8,lVar5,uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    _objc_release(puVar11);
    func_0x00010c20bc80(puVar2);
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c14da60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar6);
    puVar8 = puVar2;
    func_0x00010bf308c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar11);
    _objc_release(puVar8);
    func_0x00010c178c80(puVar2);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0xf0;
    _objc_loadWeakRetained();
    lVar5 = lVar3;
    func_0x00010bf926c0();
    _objc_release(lVar3);
    if ((int)lVar5 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c14da60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010bf8a020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar8);
      _objc_release(uVar10);
      _objc_release(uVar6);
      puVar9 = puVar2;
      func_0x00010bf8a020(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar8);
    }
    else {
      puVar9 = (undefined *)(param_1 + 0xf0);
      _objc_loadWeakRetained(puVar9);
      puVar12 = puVar9;
      func_0x00010bf8a040();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c0d3c80();
      _objc_release(puVar8);
      _objc_release(puVar12);
      _objc_release(puVar9);
      puVar9 = (undefined *)(param_1 + 0xf0);
      _objc_loadWeakRetained(puVar9);
      puVar8 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar9;
      func_0x00010bf8a040(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar8);
      puVar8 = puVar13;
    }
    _objc_release(puVar9);
    func_0x00010c191a20(puVar2);
    uVar6 = *(undefined8 *)(param_1 + 200);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010bf926c0();
    _objc_release(uVar6);
    if ((int)uVar10 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c14da60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010bf5c9c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 200);
      func_0x00010c240000(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      FUN_107ffcb24(uVar6,puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    _objc_release(uVar6);
    func_0x00010c186260(puVar2);
    puVar9 = puVar2;
    func_0x00010bef0d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar9 == (undefined *)0x0) {
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c14da60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar14;
      func_0x00010bf16100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16f3c0(puVar2);
      _objc_release(uVar6);
      _objc_release(uVar14);
    }
    func_0x00010c1b3ee0(puVar2);
    _objc_release(uVar10);
    _objc_release(puVar8);
    _objc_release(puVar11);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e4f4f4; end: 107e4f513; -[SCTimelineSnapStateHandler hasEditAtClipIndex:editType:uniqueId:] */

bool FUN_107e4f4f4(long param_1)

{
  func_0x00010be169c0();
  return param_1 != 0x7fffffffffffffff;
}



/* Entry: 107e4f514; end: 107e4f6af; -[SCTimelineSnapStateHandler moveEditToGlobalAtClipIndex:editType:uniqueId:] */

void FUN_107e4f514(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0xd0);
  func_0x00010bf529e0();
  if (uVar1 <= param_3) {
    return;
  }
  lVar2 = param_1;
  func_0x00010be169c0(param_1,param_2,param_3,param_4,param_5);
  if (lVar2 == 0x7fffffffffffffff) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c14da60(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 2) {
    uVar4 = uVar3;
    func_0x00010c2553e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c2553e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c2553e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 != 1) goto LAB_107e4f698;
    uVar4 = uVar3;
    func_0x00010bf308c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010bf308c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010bf308c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010befa120();
  _objc_release(uVar4);
  _objc_release(uVar5);
LAB_107e4f698:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107e4f6b0; end: 107e4f837; -[SCTimelineSnapStateHandler _findIndexOfEditAtClipIndex:editType:uniqueId:] */

undefined8 FUN_107e4f6b0(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    return 0x7fffffffffffffff;
  }
  uVar1 = *(ulong *)(param_1 + 0xd0);
  func_0x00010bf529e0();
  uVar4 = 0x7fffffffffffffff;
  if (uVar1 <= param_3) {
    return 0x7fffffffffffffff;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c14da60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0x7fffffffffffffff;
  uVar3 = uVar2;
  if (param_4 == 1) {
    func_0x00010bf308c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
  }
  else {
    if (param_4 != 2) goto LAB_107e4f7f0;
    func_0x00010c2553e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
  }
  _objc_release(uVar3);
  uVar4 = puStack_58[3];
LAB_107e4f7f0:
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uVar2);
  return uVar4;
}



/* Entry: 107e4f838; end: 107e4f8df;  */

void FUN_107e4f838(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  func_0x00010c280560();
  if (param_2 == *(long *)(param_1 + 0x28)) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 107e4f8e0; end: 107e4faa3; -[SCTimelineSnapStateHandler drawingStrokeHistoryForDrawItemSelected:clipsStateEditingType:forSegmentIndex:] */

void FUN_107e4f8e0(undefined *param_1,undefined8 param_2,int param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = param_1 + 0xf0;
  _objc_loadWeakRetained();
  puVar1 = puVar4;
  func_0x00010bf926c0();
  _objc_release(puVar4);
  if ((int)puVar1 == 0) {
    if ((param_3 == 0) || (param_4 == 0)) {
      func_0x00010c13afa0(param_1,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_4 != 2) {
        puVar4 = *(undefined **)(param_1 + 0xd8);
        func_0x00010bf8a020(puVar4);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107e4fa78;
      }
      param_1 = *(undefined **)(param_1 + 0xd0);
      func_0x00010c14da60(param_1,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = param_1;
    func_0x00010bf8a020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    if ((param_3 == 0) ||
       (puVar1 = PTR____NSArray0__struct_11034ab48, (param_4 & 0xfffffffffffffffd) == 0)) {
      puVar4 = param_1 + 0xf0;
      _objc_loadWeakRetained(puVar4);
      puVar2 = PTR_PTR_1126affe8;
      func_0x00010c09e180(PTR_PTR_1126affe8,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010bf8a040(puVar4,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar4);
    }
    puVar4 = puVar1;
    if ((param_3 == 0) || (param_4 < 2)) {
      param_1 = param_1 + 0xf0;
      _objc_loadWeakRetained(param_1);
      puVar2 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf8a040(param_1,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09f80(puVar1,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_1);
    }
  }
LAB_107e4fa78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e4faa4; end: 107e4fbb7; -[SCTimelineSnapStateHandler didChangeStaticCaption:] */

void FUN_107e4faa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  lVar1 = *(long *)(param_1 + 0xd8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = puStack_90;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107e4fbb8;
    puStack_50 = &UNK_110a0f550;
    _objc_retain(param_3);
    lVar2 = lVar1;
    uStack_48 = param_3;
    func_0x00010bf04920(lVar1,param_2,&puStack_68);
    _objc_release(lVar1);
    _objc_release(uStack_48);
  }
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107e4fbf0;
  puStack_78 = &UNK_110a0f580;
  uStack_70 = param_3;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be4f340(param_1,param_2,1);
  func_0x00010bed74a0(param_1,param_2,&puStack_90,lVar2,lVar1);
  _objc_release(uStack_70);
  _objc_release(param_3);
  return;
}



/* Entry: 107e4fbb8; end: 107e4fbef;  */

bool FUN_107e4fbb8(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c280560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c280560(lVar1);
  return param_2 == lVar1;
}



/* Entry: 107e4fbf0; end: 107e4fd6f;  */

void FUN_107e4fbf0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf308c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar3 = uVar1;
  func_0x00010bfaea20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf308c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c26ba60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf6ce80();
  if ((uVar1 & 1) == 0) {
    puVar4 = PTR_PTR_1126c4438;
    func_0x00010bf301e0();
    _objc_release(uVar3);
    if ((int)puVar4 == 0) goto LAB_107e4fd44;
    uVar3 = param_2;
    func_0x00010bf308c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c252440(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
LAB_107e4fd44:
  _objc_release(uVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e4fd70; end: 107e4fda7;  */

bool FUN_107e4fd70(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c280560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c280560(lVar1);
  return param_2 == lVar1;
}


