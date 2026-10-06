/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ddcd40; end: 105ddcd6f; -[SCCreativeToolsDurationCollectionViewController setIsTextToSpeechButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddcd40(long param_1)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112736a44));
                    /* WARNING: Could not recover jumptable at 0x00010bed5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateConstraints_112593058);
  return;
}



/* Entry: 105ddcd70; end: 105ddcd7f; -[SCCreativeToolsDurationCollectionViewController isTextToSpeechButtonHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddcd70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112736a44),PTR_s_isHidden_1125fad18);
  return;
}



/* Entry: 105ddcd80; end: 105ddce2f; -[SCCreativeToolsDurationCollectionViewController setIsTextToSpeechButtonSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddcd80(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = 0xd4;
  if (param_3 == 0) {
    uVar3 = 0xd5;
  }
  uVar1 = 0xd4;
  if (param_3 != 0) {
    uVar1 = 0xd5;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112736a44;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfe90c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ddce30; end: 105ddce77; -[SCCreativeToolsDurationCollectionViewController isTimeSliceSelectionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ddce30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112736a4c);
  FUN_105ddce78(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c081100();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105ddce78; end: 105ddcf33;  */

void FUN_105ddce78(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_retain();
  func_0x00010bfed020(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0d88;
  _objc_retain(uVar3);
  _objc_opt_class(puVar2);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ddcf34; end: 105ddcfaf; -[SCCreativeToolsDurationCollectionViewController enableTimeSliceSelectionWithTimeSlice:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddcf34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112736a4c);
  FUN_105ddce78(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb620();
  func_0x00010c215080(uVar1,param_2,1,param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 105ddcfb0; end: 105ddcff7; -[SCCreativeToolsDurationCollectionViewController disableTimeSliceSelectionAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddcfb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112736a4c);
  FUN_105ddce78(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ddcff8; end: 105ddd0db; -[SCCreativeToolsDurationCollectionViewController preferredContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105ddcff8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = (long)_DAT_112736a4c;
  uVar1 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08c980(uVar1,param_6,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010c23d0a0(uVar3);
  func_0x00010c23d0a0(uVar3);
  func_0x00010c23d0a0(uVar3);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
  _objc_release(uVar3);
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_1 + param_3 + -30.0;
  return auVar5;
}



/* Entry: 105ddd0dc; end: 105ddd0df; -[SCCreativeToolsDurationCollectionViewController startEnterEditingModeWithThumbnailsHidden:] */

void FUN_105ddd0dc(void)

{
  return;
}



/* Entry: 105ddd0e0; end: 105ddd0e3; -[SCCreativeToolsDurationCollectionViewController revealThumbnails] */

void FUN_105ddd0e0(void)

{
  return;
}



/* Entry: 105ddd0e4; end: 105ddd0eb; -[SCCreativeToolsDurationCollectionViewController deselectSelectedSegmentIfAny] */

undefined8 FUN_105ddd0e4(void)

{
  return 0;
}



/* Entry: 105ddd0ec; end: 105ddd0ef; -[SCCreativeToolsDurationCollectionViewController exitSegmentThumbnailsReordering] */

void FUN_105ddd0ec(void)

{
  return;
}



/* Entry: 105ddd0f0; end: 105ddd0f3; -[SCCreativeToolsDurationCollectionViewController restoreThumbnailsToInitialStateInReorder] */

void FUN_105ddd0f0(void)

{
  return;
}



/* Entry: 105ddd0f4; end: 105ddd0ff; -[SCCreativeToolsDurationCollectionViewController preferredHeight] */

undefined8 FUN_105ddd0f4(void)

{
  return 0x404f000000000000;
}



/* Entry: 105ddd100; end: 105ddd103; -[SCCreativeToolsDurationCollectionViewController componentView] */

void FUN_105ddd100(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_view_1126849e8);
  return;
}



/* Entry: 105ddd104; end: 105ddd36b; -[SCCreativeToolsDurationCollectionViewController videoPlaybackSession:didRenderFrameAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105ddd104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_f0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_e0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lVar1 = param_1 + _DAT_112736a54;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c100520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        if (*(long *)(lStack_128 + lVar6 * 8) == 0) {
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_160);
        }
        uStack_188 = uStack_158;
        uStack_190 = uStack_160;
        uStack_178 = uStack_148;
        uStack_180 = uStack_150;
        uStack_168 = uStack_138;
        uStack_170 = uStack_140;
        uStack_1a8 = param_4[1];
        uStack_1b0 = *param_4;
        uStack_1a0 = param_4[2];
        puVar3 = &uStack_190;
        _CMTimeRangeContainsTime(puVar3,&uStack_1b0);
        if ((int)puVar3 != 0) {
          uStack_1a8 = uStack_158;
          uStack_1b0 = uStack_160;
          uStack_1a0 = uStack_150;
          uStack_1c8 = uStack_e8;
          uStack_1d0 = uStack_f0;
          uStack_1c0 = uStack_e0;
          _CMTimeSubtract(&uStack_190,&uStack_1b0,&uStack_1d0);
          uStack_1c8 = param_4[1];
          uStack_1d0 = *param_4;
          uStack_1c0 = param_4[2];
          uStack_1e8 = uStack_188;
          uStack_1f0 = uStack_190;
          uStack_1e0 = uStack_180;
          _CMTimeSubtract(&uStack_1b0,&uStack_1d0,&uStack_1f0);
          uVar4 = *(undefined8 *)(param_1 + _DAT_112736a4c);
          FUN_105ddce78(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uStack_1c8 = uStack_1a8;
          uStack_1d0 = uStack_1b0;
          uStack_1c0 = uStack_1a0;
          func_0x00010c288960();
          _objc_release(uVar4);
          goto LAB_105ddd324;
        }
        uStack_188 = uStack_e8;
        uStack_190 = uStack_f0;
        uStack_180 = uStack_e0;
        uStack_1a8 = uStack_140;
        uStack_1b0 = uStack_148;
        uStack_1a0 = uStack_138;
        _CMTimeAdd(&uStack_f0,&uStack_190,&uStack_1b0);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_105ddd324:
  _objc_release(lVar2);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    return 1;
  }
  return lVar2;
}



/* Entry: 105ddd36c; end: 105ddd373; -[SCCreativeToolsDurationCollectionViewController collectionView:numberOfItemsInSection:] */

undefined8 FUN_105ddd36c(void)

{
  return 1;
}



/* Entry: 105ddd374; end: 105ddd3f3; -[SCCreativeToolsDurationCollectionViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddd374(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2a558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedf5e0(param_1,param_2,param_3,*(undefined8 *)(param_1 + _DAT_112736a48));
  func_0x00010c202160(param_3,param_2,*(undefined1 *)(param_1 + _DAT_112736a40));
  func_0x00010c18b5e0(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105ddd3f4; end: 105ddd48f; -[SCCreativeToolsDurationCollectionViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105ddd3f4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_112736a48);
  _objc_retain(param_7);
  func_0x00010bf529e0(uVar1);
  dVar2 = (double)param_1;
  uVar1 = 0x4044000000000000;
  dVar3 = dVar2 * 40.0;
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  _CGRectGetHeight(dVar2,uVar1,param_3,param_4);
  auVar4._8_8_ = dVar2;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 105ddd490; end: 105ddd4a3; -[SCCreativeToolsDurationCollectionViewController collectionView:layout:insetForSectionAtIndex:] */

undefined8 FUN_105ddd490(void)

{
  return 0;
}



/* Entry: 105ddd4a4; end: 105ddd50b; -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didSeekToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddd4a4(long param_1)

{
  param_1 = param_1 + _DAT_112736a58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c273ca0();
  _objc_release(param_1);
  return;
}



/* Entry: 105ddd50c; end: 105ddd643; -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didTrimSegmentToRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddd50c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126c4480;
  _objc_retain(param_4);
  _objc_alloc();
  lVar4 = (long)_DAT_112736a48;
  if (*(long *)(param_2 + lVar4) == 0) {
    param_1 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uVar2 = 0;
  }
  else {
    func_0x00010c0c6b60(&uStack_80);
    uVar2 = *(undefined8 *)(param_2 + lVar4);
  }
  func_0x00010bf529e0(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c26db80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = param_5[1];
  uStack_b0 = *param_5;
  uStack_98 = param_5[3];
  uStack_a0 = param_5[2];
  uStack_88 = param_5[5];
  uStack_90 = param_5[4];
  func_0x00010c029e20(param_1,puVar1,param_3,&uStack_80,&uStack_b0,uVar2);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bedf5e0(param_2,param_3,param_4,*(undefined8 *)(param_2 + lVar4));
  _objc_release(param_4);
  param_2 = param_2 + _DAT_112736a58;
  _objc_loadWeakRetained(param_2);
  uStack_78 = param_5[1];
  uStack_80 = *param_5;
  uStack_68 = param_5[3];
  uStack_70 = param_5[2];
  uStack_58 = param_5[5];
  uStack_60 = param_5[4];
  func_0x00010c273ce0();
  _objc_release(param_2);
  return;
}



/* Entry: 105ddd644; end: 105ddd67f; -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCellFinishedSeeking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddd644(long param_1)

{
  param_1 = param_1 + _DAT_112736a58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c273d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ddd680; end: 105ddd683; -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCellDidPressDelete:] */

void FUN_105ddd680(void)

{
  return;
}



/* Entry: 105ddd684; end: 105ddd68b; -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCellShouldShowDeleteButton:] */

undefined8 FUN_105ddd684(void)

{
  return 0;
}



/* Entry: 105ddd68c; end: 105ddd693; -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCellShouldHandleTouch:] */

undefined8 FUN_105ddd68c(void)

{
  return 1;
}



/* Entry: 105ddd694; end: 105ddd697; -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didChangeStartTime:] */

void FUN_105ddd694(void)

{
  return;
}



/* Entry: 105ddd698; end: 105ddd69b; -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didChangeEndTime:] */

void FUN_105ddd698(void)

{
  return;
}



/* Entry: 105ddd69c; end: 105ddd703; -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddd69c(long param_1)

{
  param_1 = param_1 + _DAT_112736a58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c273c80();
  _objc_release(param_1);
  return;
}



/* Entry: 105ddd704; end: 105ddd76b; -[SCCreativeToolsDurationCollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddd704(long param_1)

{
  param_1 = param_1 + _DAT_112736a58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c273cc0();
  _objc_release(param_1);
  return;
}



/* Entry: 105ddd76c; end: 105dddd43; -[SCCreativeToolsDurationCollectionViewController _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ddd76c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  double dVar7;
  double extraout_d1;
  double extraout_d1_00;
  undefined1 auVar9 [16];
  
  puVar1 = PTR_PTR_1126c4b88;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar5 = (long)_DAT_112736a4c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar2);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x4019999a;
  uVar8 = 0;
  func_0x00010c207c40();
  _objc_release(uVar4);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c182c20(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_opt_class(PTR_PTR_1126b0d88);
  func_0x00010c126000(uVar4);
  puVar1 = PTR_PTR_1126b6138;
  _objc_opt_new();
  lVar5 = (long)_DAT_112736a50;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe90c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe6ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe6ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  auVar9 = NEON_fmov(0x3fe0000000000000,8);
  dVar7 = (double)(float)(int)((40.0 - (double)CONCAT44(uVar8,uVar6)) * auVar9._0_8_);
  _objc_release(uVar4);
  func_0x00010c1aa420(SUB84(dVar7,0),(double)(float)(int)((40.0 - extraout_d1) * auVar9._8_8_),
                      *(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010b83340c(0x34);
  func_0x00010c23ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar5));
  uVar6 = SUB84(dVar7,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  func_0x00010c17a6a0(uVar6,dVar7 * 0.5,*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  uVar8 = 0x40340000;
  func_0x00010c1842e0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126b6138;
  _objc_opt_new();
  lVar5 = (long)_DAT_112736a44;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe90c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe6ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe6ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar7 = (double)(float)(int)((40.0 - (double)CONCAT44(uVar8,uVar6)) * auVar9._0_8_);
  _objc_release(uVar4);
  func_0x00010c1aa420(SUB84(dVar7,0),(double)(float)(int)((40.0 - extraout_d1_00) * auVar9._8_8_),
                      *(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar5));
  uVar6 = SUB84(dVar7,0);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  func_0x00010c17a6a0(uVar6,dVar7 * 0.5,*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bed5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateConstraints_112593058);
  return;
}



/* Entry: 105dddd44; end: 105dde62b; -[SCCreativeToolsDurationCollectionViewController _updateConstraints] */

/* WARNING: Possible PIC construction at 0x000105dde658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105dde65c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dddd44(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  float fVar42;
  
  lVar36 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdf8280();
  lVar39 = (long)_DAT_112736a4c;
  uVar1 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = lVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = (long)_DAT_112736a50;
  uVar16 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf348e0(uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112736a5c);
  *(undefined **)(param_1 + _DAT_112736a5c) = puVar27;
  _objc_release(uVar37);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar40);
  _objc_release(lVar2);
  _objc_release(uVar1);
  lVar40 = (long)_DAT_112736a44;
  uVar16 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar16;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar23;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar40);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  fVar42 = 0.0;
  uVar19 = uVar25;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar37;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + _DAT_112736a48));
  uVar12 = uVar28;
  func_0x00010bf49420((double)fVar42 * 40.0);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar18;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar30;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar31;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar33;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar34;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar41);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = lVar5;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar35;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + _DAT_112736a60);
  *(undefined **)(param_1 + _DAT_112736a60) = puVar27;
  _objc_release(uVar38);
  _objc_release(uVar7);
  _objc_release(lVar40);
  _objc_release(lVar5);
  _objc_release(uVar35);
  _objc_release(uVar11);
  _objc_release(uVar34);
  _objc_release(uVar3);
  _objc_release(uVar33);
  _objc_release(uVar1);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar4);
  _objc_release(lVar13);
  _objc_release(lVar14);
  _objc_release(uVar30);
  _objc_release(uVar8);
  _objc_release(lVar17);
  _objc_release(lVar18);
  _objc_release(uVar29);
  _objc_release(uVar12);
  _objc_release(uVar28);
  _objc_release(uVar15);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(uVar37);
  _objc_release(uVar19);
  _objc_release(uVar25);
  _objc_release(uVar22);
  _objc_release(uVar23);
  _objc_release(uVar24);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar26);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(uVar16);
  func_0x00010c074c20();
  puVar27 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar36) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf65bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_deactivateConstraints__1125b70a0,
             *(undefined8 *)(puVar27 + _DAT_112736a5c));
  return;
}



/* Entry: 105dde62c; end: 105dde677; -[SCCreativeToolsDurationCollectionViewController _deactivateConstraints] */

/* WARNING: Possible PIC construction at 0x000105dde658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105dde65c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dde62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf65bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_deactivateConstraints__1125b70a0,
             *(undefined8 *)(param_1 + _DAT_112736a5c));
  return;
}



/* Entry: 105dde678; end: 105dde6b3; -[SCCreativeToolsDurationCollectionViewController _completeButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dde678(long param_1)

{
  param_1 = param_1 + _DAT_112736a58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c273d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dde6b4; end: 105dde72f; -[SCCreativeToolsDurationCollectionViewController _ttsButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dde6b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112736a58;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c273d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105dde730; end: 105dde85b; -[SCCreativeToolsDurationCollectionViewController _updateSegmentCell:withSegment:] */

void FUN_105dde730(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x00010c182980(param_3,param_2,&uStack_90);
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010c0c6b60(&uStack_60,param_4);
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    func_0x00010c182980(param_3,param_2,&uStack_90);
    func_0x00010c27c900(&uStack_c0,param_4);
  }
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  func_0x00010c21a5e0(param_3,param_2,&uStack_90);
  lVar1 = param_4;
  func_0x00010c26db80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214080(param_3,param_2,lVar1);
  _objc_release(lVar1);
  _CMTimeMakeWithSeconds(&uStack_d8,0x3fe0000000000000,10);
  uStack_88 = uStack_d0;
  uStack_90 = uStack_d8;
  uStack_80 = uStack_c8;
  func_0x00010c1c83e0(param_3,param_2,&uStack_90);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105dde85c; end: 105dde87b; -[SCCreativeToolsDurationCollectionViewController dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dde85c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112736a54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dde87c; end: 105dde88f; -[SCCreativeToolsDurationCollectionViewController setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dde87c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112736a54,param_3);
  return;
}



/* Entry: 105dde890; end: 105dde8af; -[SCCreativeToolsDurationCollectionViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dde890(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112736a58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dde8b0; end: 105dde8c3; -[SCCreativeToolsDurationCollectionViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dde8b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112736a58,param_3);
  return;
}



/* Entry: 105dde8c4; end: 105dde8d3; -[SCCreativeToolsDurationCollectionViewController segment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dde8c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736a48);
}



/* Entry: 105dde8d4; end: 105dde8e3; -[SCCreativeToolsDurationCollectionViewController isTextToSpeechButtonSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105dde8d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112736a3c);
}



/* Entry: 105dde8e4; end: 105dde8f3; -[SCCreativeToolsDurationCollectionViewController isSecondsGuidanceEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105dde8e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112736a40);
}



/* Entry: 105dde8f4; end: 105dde903; -[SCCreativeToolsDurationCollectionViewController setIsSecondsGuidanceEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dde8f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112736a40) = param_3;
  return;
}



/* Entry: 105dde904; end: 105dde99b; -[SCCreativeToolsDurationCollectionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dde904(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736a48,0);
  _objc_destroyWeak(param_1 + _DAT_112736a58);
  _objc_destroyWeak(param_1 + _DAT_112736a54);
  _objc_storeStrong(param_1 + _DAT_112736a60,0);
  _objc_storeStrong(param_1 + _DAT_112736a5c,0);
  _objc_storeStrong(param_1 + _DAT_112736a44,0);
  _objc_storeStrong(param_1 + _DAT_112736a50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112736a4c,0);
  return;
}



/* Entry: 105dde99c; end: 105ddef97;  */

undefined *
FUN_105dde99c(undefined *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *unaff_x20;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 auStack_f8 [16];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (((((*(byte *)((long)param_2 + 0xc) & 1) != 0) && ((*(byte *)((long)param_2 + 0x24) & 1) != 0))
      && (param_2[5] == 0)) &&
     ((-1 < (long)param_2[3] &&
      (puVar6 = param_1, func_0x00010bf529e0(), puVar3 = PTR____NSArray0__struct_11034ab48,
      puVar6 != (undefined *)0x0)))) {
    unaff_x20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(param_1);
    param_3 = &uStack_150;
    param_4 = auStack_f8;
    param_5 = (undefined8 *)0x10;
    puVar3 = param_1;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar7 = *plStack_140;
      do {
        puVar6 = (undefined *)0x0;
        do {
          if (*plStack_140 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          lVar4 = *(long *)(lStack_148 + (long)puVar6 * 8);
          if (lVar4 == 0) {
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
          }
          else {
            func_0x00010bdc1120(&uStack_180,lVar4);
          }
          uStack_1d8 = uStack_108;
          uStack_1e0 = uStack_110;
          uStack_1d0 = uStack_100;
          uStack_278 = uStack_160;
          uStack_280 = uStack_168;
          uStack_270 = uStack_158;
          _CMTimeRangeMake(&uStack_1b0,&uStack_1e0,&uStack_280);
          uStack_1d8 = uStack_108;
          uStack_1e0 = uStack_110;
          uStack_1d0 = uStack_100;
          uStack_278 = uStack_160;
          uStack_280 = uStack_168;
          uStack_270 = uStack_158;
          _CMTimeAdd(&uStack_110,&uStack_1e0,&uStack_280);
          uStack_1d8 = uStack_1a8;
          uStack_1e0 = uStack_1b0;
          uStack_1c8 = uStack_198;
          uStack_1d0 = uStack_1a0;
          uStack_1b8 = uStack_188;
          uStack_1c0 = uStack_190;
          _CMTimeRangeGetEnd(&uStack_280,&uStack_1e0);
          uStack_1d8 = param_2[1];
          uStack_1e0 = *param_2;
          uStack_1d0 = param_2[2];
          puVar1 = &uStack_1e0;
          _CMTimeCompare(puVar1,&uStack_280);
          if ((int)puVar1 < 0) {
            uStack_1d8 = param_2[1];
            uStack_1e0 = *param_2;
            uStack_1c8 = param_2[3];
            uStack_1d0 = param_2[2];
            uStack_1b8 = param_2[5];
            uStack_1c0 = param_2[4];
            _CMTimeRangeGetEnd(&uStack_280,&uStack_1e0);
            uStack_1d8 = uStack_1a8;
            uStack_1e0 = uStack_1b0;
            uStack_1d0 = uStack_1a0;
            puVar1 = &uStack_280;
            _CMTimeCompare(puVar1,&uStack_1e0);
            if (0 < (int)puVar1) {
              uStack_1d8 = uStack_1a8;
              uStack_1e0 = uStack_1b0;
              uStack_1c8 = uStack_198;
              uStack_1d0 = uStack_1a0;
              uStack_1b8 = uStack_188;
              uStack_1c0 = uStack_190;
              uStack_278 = param_2[1];
              uStack_280 = *param_2;
              uStack_270 = param_2[2];
              puVar1 = &uStack_1e0;
              _CMTimeRangeContainsTime(puVar1,&uStack_280);
              if ((int)puVar1 == 0) {
                uStack_1d8 = param_2[1];
                uStack_1e0 = *param_2;
                uStack_1c8 = param_2[3];
                uStack_1d0 = param_2[2];
                uStack_1b8 = param_2[5];
                uStack_1c0 = param_2[4];
                _CMTimeRangeGetEnd(&uStack_280,&uStack_1e0);
                uStack_1d8 = uStack_1a8;
                uStack_1e0 = uStack_1b0;
                uStack_1c8 = uStack_198;
                uStack_1d0 = uStack_1a0;
                uStack_1b8 = uStack_188;
                uStack_1c0 = uStack_190;
                puVar1 = &uStack_1e0;
                _CMTimeRangeContainsTime(puVar1,&uStack_280);
                if ((int)puVar1 != 0) {
                  uStack_1d8 = uStack_1a8;
                  uStack_1e0 = uStack_1b0;
                  uStack_1c8 = uStack_198;
                  uStack_1d0 = uStack_1a0;
                  uStack_1b8 = uStack_188;
                  uStack_1c0 = uStack_190;
                  _CMTimeRangeGetEnd(&uStack_280,&uStack_1e0);
                  uStack_1d8 = param_2[1];
                  uStack_1e0 = *param_2;
                  uStack_1c8 = param_2[3];
                  uStack_1d0 = param_2[2];
                  uStack_1b8 = param_2[5];
                  uStack_1c0 = param_2[4];
                  _CMTimeRangeGetEnd(&uStack_210,&uStack_1e0);
                  _CMTimeSubtract(&uStack_1f8,&uStack_280,&uStack_210);
                  uStack_1d8 = uStack_190;
                  uStack_1e0 = uStack_198;
                  uStack_1d0 = uStack_188;
                  uStack_278 = uStack_1f0;
                  uStack_280 = uStack_1f8;
                  uStack_270 = uStack_1e8;
                  _CMTimeSubtract(&uStack_210,&uStack_1e0,&uStack_280);
                  uStack_278 = uStack_178;
                  uStack_280 = uStack_180;
                  uStack_270 = uStack_170;
                  uStack_228 = uStack_208;
                  uStack_230 = uStack_210;
                  uStack_220 = uStack_200;
                  _CMTimeRangeMake(&uStack_1e0,&uStack_280,&uStack_230);
                  uStack_278 = uStack_1d8;
                  uStack_280 = uStack_1e0;
                  uStack_268 = uStack_1c8;
                  uStack_270 = uStack_1d0;
                  uStack_258 = uStack_1b8;
                  uStack_260 = uStack_1c0;
                  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSValue_1126afdf8;
                  func_0x00010c297240();
                  _objc_retainAutoreleasedReturnValue();
                  param_3 = puVar1;
                  func_0x00010befa120(unaff_x20);
                  _objc_release(puVar1);
                  goto LAB_105ddeec8;
                }
                func_0x00010befa120(unaff_x20);
              }
              else {
                uStack_1d8 = param_2[1];
                uStack_1e0 = *param_2;
                uStack_1d0 = param_2[2];
                uStack_278 = uStack_1a8;
                uStack_280 = uStack_1b0;
                uStack_270 = uStack_1a0;
                _CMTimeSubtract(&uStack_1f8,&uStack_1e0,&uStack_280);
                uStack_1d8 = uStack_178;
                uStack_1e0 = uStack_180;
                uStack_1d0 = uStack_170;
                uStack_278 = uStack_1f0;
                uStack_280 = uStack_1f8;
                uStack_270 = uStack_1e8;
                _CMTimeAdd(&uStack_210,&uStack_1e0,&uStack_280);
                uStack_1d8 = param_2[1];
                uStack_1e0 = *param_2;
                uStack_1c8 = param_2[3];
                uStack_1d0 = param_2[2];
                uStack_1b8 = param_2[5];
                uStack_1c0 = param_2[4];
                _CMTimeRangeGetEnd(&uStack_280,&uStack_1e0);
                uStack_1d8 = uStack_1a8;
                uStack_1e0 = uStack_1b0;
                uStack_1c8 = uStack_198;
                uStack_1d0 = uStack_1a0;
                uStack_1b8 = uStack_188;
                uStack_1c0 = uStack_190;
                puVar1 = &uStack_1e0;
                _CMTimeRangeContainsTime(puVar1,&uStack_280);
                if ((int)puVar1 == 0) {
                  uStack_1d8 = uStack_160;
                  uStack_1e0 = uStack_168;
                  uStack_1d0 = uStack_158;
                  uStack_278 = uStack_1f0;
                  uStack_280 = uStack_1f8;
                  uStack_270 = uStack_1e8;
                  _CMTimeSubtract(&uStack_230,&uStack_1e0,&uStack_280);
                }
                else {
                  uStack_228 = param_2[4];
                  uStack_230 = param_2[3];
                  uStack_220 = param_2[5];
                }
                uStack_278 = uStack_208;
                uStack_280 = uStack_210;
                uStack_270 = uStack_200;
                uStack_248 = uStack_228;
                uStack_250 = uStack_230;
                uStack_240 = uStack_220;
                _CMTimeRangeMake(&uStack_1e0,&uStack_280,&uStack_250);
                uStack_278 = uStack_1d8;
                uStack_280 = uStack_1e0;
                uStack_268 = uStack_1c8;
                uStack_270 = uStack_1d0;
                uStack_258 = uStack_1b8;
                uStack_260 = uStack_1c0;
                puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSValue_1126afdf8;
                func_0x00010c297240();
                _objc_retainAutoreleasedReturnValue();
                param_3 = puVar2;
                func_0x00010befa120(unaff_x20);
                _objc_release(puVar2);
                if ((int)puVar1 != 0) goto LAB_105ddeec8;
              }
            }
          }
          puVar6 = puVar6 + 1;
        } while (puVar3 != puVar6);
        param_3 = &uStack_150;
        param_4 = auStack_f8;
        param_5 = (undefined8 *)0x10;
        puVar3 = param_1;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
LAB_105ddeec8:
    _objc_release(param_1);
    puVar3 = unaff_x20;
    func_0x00010bf529e0();
    puVar6 = param_1;
    func_0x00010bf529e0();
    if (puVar3 < puVar6) {
      puVar3 = unaff_x20;
      func_0x00010bf529e0();
      puVar6 = param_1;
      func_0x00010bf529e0();
      if (puVar6 != puVar3) {
        uVar5 = 0;
        uStack_288 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
        uStack_290 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
        uStack_298 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
        uStack_2a0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
        uStack_2a8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
        uStack_2b0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
        do {
          uStack_178 = uStack_288;
          uStack_180 = uStack_290;
          uStack_168 = uStack_298;
          uStack_170 = uStack_2a0;
          uStack_158 = uStack_2a8;
          uStack_160 = uStack_2b0;
          puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x00010c297240();
          _objc_retainAutoreleasedReturnValue();
          param_3 = puVar1;
          func_0x00010befa120(unaff_x20);
          _objc_release(puVar1);
          uVar5 = uVar5 + 1;
          puVar6 = param_1;
          func_0x00010bf529e0();
        } while (uVar5 < (ulong)((long)puVar6 - (long)puVar3));
      }
    }
    puVar3 = unaff_x20;
    func_0x00010bf51e00(unaff_x20);
    _objc_release(unaff_x20);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    pcStack_2b8 = FUN_105ddef98;
    uStack_318 = param_4[1];
    uStack_320 = *param_4;
    uStack_308 = param_4[3];
    uStack_310 = param_4[2];
    uStack_2f8 = param_4[5];
    uStack_300 = param_4[4];
    puStack_2d0 = unaff_x20;
    puStack_2c8 = param_1;
    puStack_2c0 = &stack0xfffffffffffffff0;
    _CMTimeRangeGetEnd(&uStack_2e8,&uStack_320);
    uStack_318 = param_3[1];
    uStack_320 = *param_3;
    uStack_310 = param_3[2];
    uStack_338 = uStack_2e0;
    uStack_340 = uStack_2e8;
    uStack_330 = uStack_2d8;
    puVar1 = &uStack_320;
    _CMTimeCompare(puVar1,&uStack_340);
    if ((int)puVar1 < 1) {
      puVar3 = (undefined *)0x0;
    }
    else {
      uStack_318 = param_3[1];
      uStack_320 = *param_3;
      uStack_310 = param_3[2];
      uStack_338 = param_5[1];
      uStack_340 = *param_5;
      uStack_330 = param_5[2];
      puVar1 = &uStack_320;
      _CMTimeCompare(puVar1,&uStack_340);
      puVar3 = (undefined *)((ulong)puVar1 >> 0x1f & 1);
    }
    return puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 105ddef98; end: 105ddf047; +[SCCreativeToolsDurationHelpers isTrimmedTimeRangeStart:betweenPreviousSegment:andCurrentSegment:] */

ulong FUN_105ddef98(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_58 = param_4[3];
  uStack_60 = param_4[2];
  uStack_48 = param_4[5];
  uStack_50 = param_4[4];
  _CMTimeRangeGetEnd(&uStack_38,&uStack_70);
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  uStack_88 = uStack_30;
  uStack_90 = uStack_38;
  uStack_80 = uStack_28;
  puVar1 = &uStack_70;
  _CMTimeCompare(puVar1,&uStack_90);
  if ((int)puVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uStack_68 = param_3[1];
    uStack_70 = *param_3;
    uStack_60 = param_3[2];
    uStack_88 = param_5[1];
    uStack_90 = *param_5;
    uStack_80 = param_5[2];
    puVar1 = &uStack_70;
    _CMTimeCompare(puVar1,&uStack_90);
    uVar2 = (ulong)puVar1 >> 0x1f & 1;
  }
  return uVar2;
}



/* Entry: 105ddf048; end: 105ddf0f7; +[SCCreativeToolsDurationHelpers isTrimmedTimeRangeEnd:betweenPreviousSegment:andCurrentSegment:] */

ulong FUN_105ddf048(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_58 = param_4[3];
  uStack_60 = param_4[2];
  uStack_48 = param_4[5];
  uStack_50 = param_4[4];
  _CMTimeRangeGetEnd(&uStack_38,&uStack_70);
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  uStack_88 = uStack_30;
  uStack_90 = uStack_38;
  uStack_80 = uStack_28;
  puVar1 = &uStack_70;
  _CMTimeCompare(puVar1,&uStack_90);
  if ((int)puVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uStack_68 = param_3[1];
    uStack_70 = *param_3;
    uStack_60 = param_3[2];
    uStack_88 = param_5[1];
    uStack_90 = *param_5;
    uStack_80 = param_5[2];
    puVar1 = &uStack_70;
    _CMTimeCompare(puVar1,&uStack_90);
    uVar2 = (ulong)puVar1 >> 0x1f & 1;
  }
  return uVar2;
}



/* Entry: 105ddf0f8; end: 105ddf1b7; -[SCCreativeToolsDurationSegment initWithMediaTimeRange:trimmedTimeRange:count:thumbnailFutures:] */

undefined1 *
FUN_105ddf0f8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ed1d8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4[1];
    uVar3 = *param_4;
    uVar5 = param_4[3];
    uVar4 = param_4[2];
    uVar6 = param_4[4];
    *(undefined8 *)((long)puVar1 + 0x40) = param_4[5];
    *(undefined8 *)((long)puVar1 + 0x38) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    uVar2 = param_5[1];
    uVar3 = *param_5;
    uVar5 = param_5[3];
    uVar4 = param_5[2];
    uVar6 = param_5[4];
    *(undefined8 *)((long)puVar1 + 0x70) = param_5[5];
    *(undefined8 *)((long)puVar1 + 0x68) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x60) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x58) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar3;
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    uVar3 = param_6;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 105ddf1b8; end: 105ddf1db; -[SCCreativeToolsDurationSegment copyWithZone:] */

undefined8 FUN_105ddf1b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105ddf1dc; end: 105ddf2fb; -[SCCreativeToolsDurationSegment isEqual:] */

undefined8 FUN_105ddf1dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
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
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105ddf2d0:
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105ddf2dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_105ddf2dc;
    }
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    uStack_40 = *(undefined8 *)(param_1 + 0x38);
    uStack_88 = *(undefined8 *)(param_3 + 0x20);
    uStack_90 = *(undefined8 *)(param_3 + 0x18);
    uStack_78 = *(undefined8 *)(param_3 + 0x30);
    uStack_80 = *(undefined8 *)(param_3 + 0x28);
    uStack_68 = *(undefined8 *)(param_3 + 0x40);
    uStack_70 = *(undefined8 *)(param_3 + 0x38);
    puVar3 = &uStack_60;
    _CMTimeRangeEqual(puVar3,&uStack_90);
    if ((int)puVar3 != 0) {
      uStack_58 = *(undefined8 *)(param_1 + 0x50);
      uStack_60 = *(undefined8 *)(param_1 + 0x48);
      uStack_48 = *(undefined8 *)(param_1 + 0x60);
      uStack_50 = *(undefined8 *)(param_1 + 0x58);
      uStack_38 = *(undefined8 *)(param_1 + 0x70);
      uStack_40 = *(undefined8 *)(param_1 + 0x68);
      uStack_88 = *(undefined8 *)(param_3 + 0x50);
      uStack_90 = *(undefined8 *)(param_3 + 0x48);
      uStack_78 = *(undefined8 *)(param_3 + 0x60);
      uStack_80 = *(undefined8 *)(param_3 + 0x58);
      uStack_68 = *(undefined8 *)(param_3 + 0x70);
      uStack_70 = *(undefined8 *)(param_3 + 0x68);
      puVar3 = &uStack_60;
      _CMTimeRangeEqual(puVar3,&uStack_90);
      if ((((int)puVar3 != 0) && (*(float *)(param_1 + 8) == *(float *)(param_3 + 8))) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) goto LAB_105ddf2d0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c071ae0(uVar4);
  }
LAB_105ddf2dc:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105ddf2fc; end: 105ddf313; -[SCCreativeToolsDurationSegment mediaTimeRange] */

void FUN_105ddf2fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[5] = *(undefined8 *)(param_2 + 0x40);
  param_1[4] = uVar1;
  return;
}



/* Entry: 105ddf314; end: 105ddf32b; -[SCCreativeToolsDurationSegment trimmedTimeRange] */

void FUN_105ddf314(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[5] = *(undefined8 *)(param_2 + 0x70);
  param_1[4] = uVar1;
  return;
}



/* Entry: 105ddf32c; end: 105ddf333; -[SCCreativeToolsDurationSegment thumbnailFutures] */

undefined8 FUN_105ddf32c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105ddf334; end: 105ddf33b; -[SCCreativeToolsDurationSegment count] */

undefined4 FUN_105ddf334(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105ddf33c; end: 105ddf343; -[SCCreativeToolsDurationSegment setCount:] */

void FUN_105ddf33c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 105ddf344; end: 105ddf34f; -[SCCreativeToolsDurationSegment .cxx_destruct] */

void FUN_105ddf344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105ddf350; end: 105ddf4bf; -[SCPreviewFeatureVideoTrackingImpl initWithVideoTrackingServices:videoPlayback:videoObjectTracker:previewConfiguration:bounceFeature:snapCrop:] */

undefined1 *
FUN_105ddf350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ed1e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ddf4c0; end: 105ddf4c7; -[SCPreviewFeatureVideoTrackingImpl responderChainPriority] */

undefined8 FUN_105ddf4c0(void)

{
  return 0x7fffffff;
}



/* Entry: 105ddf4c8; end: 105ddf897; -[SCPreviewFeatureVideoTrackingImpl pinView:originalScale:atPoint:completion:] */

void FUN_105ddf4c8(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  dVar12 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bdd8ce0(param_4,param_5,param_6);
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c278f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf20c00(uVar2);
  _CGRectGetWidth();
  dVar13 = dVar12;
  func_0x00010b816218();
  dVar14 = (double)(long)(dVar12 * dVar13) / dVar13;
  func_0x00010bf20c00(uVar2);
  _CGRectGetHeight();
  dVar12 = dVar13;
  func_0x00010b816218();
  dVar13 = (double)(long)(dVar13 * dVar12) / dVar12;
  if (param_1 <= 0.0) {
    func_0x00010c14e120(param_6);
    param_1 = dVar12;
  }
  func_0x00010c1f5fe0(param_1,param_6);
  func_0x00010be78ba0(param_4,param_5,param_6,uVar2);
  param_2 = param_2 / dVar14;
  param_3 = param_3 / dVar13;
  puVar3 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  func_0x00010c14e120(param_6);
  dVar12 = param_1;
  func_0x00010c141a80(param_6);
  func_0x00010c055500(param_2,param_3,param_1,dVar12,puVar3);
  func_0x00010bf20c00(param_6);
  func_0x00010c14e120(param_6);
  param_2 = param_2 * param_1 * 1.2;
  dVar11 = param_2 / dVar14;
  func_0x00010bf20c00(param_6);
  func_0x00010c14e120(param_6);
  param_2 = param_2 * dVar12 * 1.2;
  dVar12 = param_2 / dVar13;
  func_0x00010c27ada0(param_6);
  func_0x00010c27ada0(param_6);
  lVar4 = *(long *)(param_4 + 0x28);
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010bf208a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = (ulong)(lVar8 != 0);
  _objc_release();
  _objc_release(lVar4);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276200();
  func_0x00010b73c82c(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_4 + 8);
  func_0x00010bfe8740(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c29b920();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_4 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    func_0x00010c088c00(&uStack_a8,lVar8);
  }
  uVar9 = uVar1;
  func_0x00010c0d8d00(dVar11,dVar12,param_2 / dVar14,param_3 / dVar13,uVar1,param_5,uVar7,puVar3,
                      &uStack_a8);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc920();
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_4 + 8);
  func_0x00010c26a1e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0d9260();
  _objc_release(uVar1);
  _objc_release(uVar5);
  func_0x00010bf921e0(param_6,param_5,uVar7);
  func_0x00010bdd8cc0(param_4,param_5,param_6);
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7);
  }
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 105ddf898; end: 105ddfbab; -[SCPreviewFeatureVideoTrackingImpl applyDurationToView:timeRange:shouldKeepScale:] */

void FUN_105ddf898(long param_1,undefined8 param_2,undefined8 param_3,double *param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined1 auStack_98 [24];
  
  _objc_retain(param_3);
  func_0x00010bdd8ce0(param_1,param_2,param_3);
  dStack_c8 = param_4[1];
  dVar7 = *param_4;
  dStack_c0 = param_4[2];
  dStack_d0 = dVar7;
  _CMTimeGetSeconds(&dStack_d0);
  dStack_c8 = param_4[1];
  dStack_d0 = *param_4;
  dStack_b8 = param_4[3];
  dStack_c0 = param_4[2];
  dStack_a8 = param_4[5];
  dVar8 = param_4[4];
  dStack_b0 = dVar8;
  _CMTimeRangeGetEnd(auStack_98,&dStack_d0);
  _CMTimeGetSeconds(auStack_98);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  dVar9 = dVar8;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276200();
  dVar10 = dVar9;
  _objc_release(uVar1);
  if ((0.0 < dVar7) || (dVar8 < dVar9)) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c278f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bf20c00(uVar1);
    _CGRectGetWidth();
    dVar13 = dVar10;
    func_0x00010b816218();
    dVar12 = (double)(long)(dVar10 * dVar13) / dVar13;
    func_0x00010bf20c00(uVar1);
    _CGRectGetHeight();
    dVar10 = dVar13;
    func_0x00010b816218();
    dVar11 = (double)(long)(dVar13 * dVar10);
    dVar13 = dVar11 / dVar10;
    func_0x00010be78ba0(param_1,param_2,param_3,uVar1);
    func_0x00010c27ada0(param_3);
    dVar12 = dVar10 / dVar12;
    func_0x00010c27ada0(param_3);
    dVar11 = dVar11 / dVar13;
    puVar3 = PTR_PTR_1126b2700;
    _objc_alloc(PTR_PTR_1126b2700);
    func_0x00010c141a80(param_3);
    func_0x00010c055500(dVar12,dVar11,0,dVar10,puVar3);
    puVar4 = PTR_PTR_1126b2700;
    _objc_alloc(PTR_PTR_1126b2700);
    func_0x00010c27ada0(puVar3);
    dVar10 = dVar12;
    dVar13 = 1.0;
    if (param_5 != 0) {
      func_0x00010c14e120(param_3);
      dVar13 = dVar10;
    }
    func_0x00010c141a80(puVar3);
    func_0x00010c055500(dVar12,dVar11,dVar13,dVar10,puVar4);
    lVar5 = param_1;
    func_0x00010becc080(dVar9,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf921e0(param_3,param_2,lVar5);
    lVar6 = lVar5;
    func_0x00010c26a1a0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    if (0.0 < dVar7) {
      _CMTimeMakeWithSeconds(&dStack_d0,0,0x78);
      func_0x00010befc620(lVar6,param_2,puVar3,&dStack_d0);
    }
    _CMTimeMakeWithSeconds(&dStack_d0,dVar7,0x78);
    func_0x00010befc620(lVar6,param_2,puVar4,&dStack_d0);
    if (dVar8 < dVar9) {
      _CMTimeMakeWithSeconds(&dStack_d0,dVar8,0x78);
      func_0x00010befc620(lVar6,param_2,puVar3,&dStack_d0);
    }
    func_0x00010bdd8cc0(param_1,param_2,param_3);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  else {
    if (param_5 != 0) {
      func_0x00010c14e120(0x3ff0000000000000,param_3);
    }
    func_0x00010c1f5fe0(param_3);
    func_0x00010bf80c80(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ddfbac; end: 105ddfd8b; -[SCPreviewFeatureVideoTrackingImpl applyDurationToAutoCaptionView:timeRange:] */

void FUN_105ddfbac(long param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  undefined1 auStack_78 [24];
  
  _objc_retain(param_3);
  dStack_a8 = param_4[1];
  dVar6 = *param_4;
  dStack_a0 = param_4[2];
  dStack_b0 = dVar6;
  _CMTimeGetSeconds(&dStack_b0);
  dStack_a8 = param_4[1];
  dStack_b0 = *param_4;
  dStack_98 = param_4[3];
  dStack_a0 = param_4[2];
  dStack_88 = param_4[5];
  dVar7 = param_4[4];
  dStack_90 = dVar7;
  _CMTimeRangeGetEnd(auStack_78,&dStack_b0);
  _CMTimeGetSeconds(auStack_78);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  dVar8 = dVar7;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276200();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010becc080(dVar8,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf921e0(param_3,param_2,lVar2);
  puVar3 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  uVar1 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar9 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  func_0x00010c055500(uVar1,uVar9,0,0);
  puVar4 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  func_0x00010c055500(uVar1,uVar9,0x3ff0000000000000,0);
  lVar5 = lVar2;
  func_0x00010c26a1a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  if (0.0 < dVar6) {
    _CMTimeMakeWithSeconds(&dStack_b0,0,0x78);
    func_0x00010befc620(lVar5,param_2,puVar3,&dStack_b0);
  }
  _CMTimeMakeWithSeconds(&dStack_b0,dVar6,0x78);
  func_0x00010befc620(lVar5,param_2,puVar4,&dStack_b0);
  _CMTimeMakeWithSeconds(&dStack_b0,dVar7,0x78);
  func_0x00010befc620(lVar5,param_2,puVar3,&dStack_b0);
  func_0x00010bdd8cc0(param_1,param_2,param_3);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105ddfd8c; end: 105ddff87; -[SCPreviewFeatureVideoTrackingImpl disableVideoTrackingForView:] */

void FUN_105ddfd8c(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c081660();
  if ((int)uVar1 != 0) {
    func_0x00010bf80b80(param_5);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_retain(param_5);
    _objc_opt_class(puVar2);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    func_0x00010c27ada0(uVar1);
    dVar6 = param_1;
    func_0x00010b816218();
    dVar9 = dVar6;
    func_0x00010b816218();
    func_0x00010bdd8ca0(param_3);
    if (uVar1 != 0) {
      dVar9 = (double)(long)(param_2 * dVar9) / dVar9;
      uVar4 = *(undefined8 *)(param_3 + 0x18);
      dVar6 = (double)(long)(param_1 * dVar6) / dVar6;
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c278f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010bf512a0(dVar6,dVar9,uVar5);
      dVar8 = dVar6;
      func_0x00010b816218();
      dVar7 = (double)(long)(dVar6 * dVar8) / dVar8;
      func_0x00010b816218();
      dVar8 = (double)(long)(dVar9 * dVar8) / dVar8;
      uVar3 = param_5;
      func_0x00010c262ca0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51200(dVar7,dVar8);
      dVar6 = dVar7;
      _objc_release(uVar3);
      func_0x00010b816218();
      dVar9 = (double)(long)(dVar7 * dVar6) / dVar6;
      func_0x00010b816218();
      func_0x00010c219b80(dVar9,(double)(long)(dVar8 * dVar6) / dVar6,param_5);
      func_0x00010bdf62e0(param_3);
      dVar6 = dVar9;
      func_0x00010c14e120(param_5);
      dVar9 = dVar9 * dVar6;
      func_0x00010c1f5fe0(dVar9,param_5);
      func_0x00010bdf62c0(param_3);
      dVar6 = dVar9;
      func_0x00010c141a80(param_5);
      func_0x00010c1ee7a0(dVar9 + dVar6,param_5);
      _objc_release(uVar5);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105ddff88; end: 105ddffff; -[SCPreviewFeatureVideoTrackingImpl registerListener:] */

void FUN_105ddff88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010c102e00(lVar1,param_2,uVar3);
      if (lVar1 == param_3) goto LAB_105ddffec;
      uVar3 = uVar3 + 1;
      uVar2 = *(ulong *)(param_1 + 0x38);
      func_0x00010bf529e0();
    } while (uVar3 < uVar2);
  }
  func_0x00010befaaa0(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
LAB_105ddffec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105de0000; end: 105de007b; -[SCPreviewFeatureVideoTrackingImpl removeListener:] */

void FUN_105de0000(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010c102e00(lVar1,param_2,uVar3);
      if (lVar1 == param_3) {
        func_0x00010c12dc20(*(undefined8 *)(param_1 + 0x38),param_2,uVar3);
        break;
      }
      uVar3 = uVar3 + 1;
      uVar2 = *(ulong *)(param_1 + 0x38);
      func_0x00010bf529e0();
    } while (uVar3 < uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105de007c; end: 105de01b3; -[SCPreviewFeatureVideoTrackingImpl _timedTrajectoryManagerWithTotalContentDuraiton:] */

void FUN_105de007c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010b73c8a8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe8740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29b920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0d9200(uVar6,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc920();
  _objc_release(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c26a1e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0d9260();
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105de01b4; end: 105de02eb; -[SCPreviewFeatureVideoTrackingImpl _croppingStateScale] */

undefined8 FUN_105de01b4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_2 + 0x30);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe6060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c14e120(lVar4);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fea0();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  return param_1;
}



/* Entry: 105de02ec; end: 105de0423; -[SCPreviewFeatureVideoTrackingImpl _croppingStateRotation] */

undefined8 FUN_105de02ec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_2 + 0x30);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe6060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c141a80(lVar4);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fe40();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  return param_1;
}



/* Entry: 105de0424; end: 105de04bb; -[SCPreviewFeatureVideoTrackingImpl _prepareMovableTrackingViewForTracking:inContainerView:] */

void FUN_105de0424(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  
  _objc_retain(param_4);
  func_0x00010bddc620(param_2,param_3,param_4,param_5);
  func_0x00010c219b80(param_4);
  func_0x00010bdf62e0(param_2);
  dVar1 = param_1;
  func_0x00010c14e120(param_4);
  dVar1 = dVar1 / param_1;
  func_0x00010c1f5fe0(dVar1,param_4);
  func_0x00010bdf62c0(param_2);
  dVar2 = dVar1;
  func_0x00010c141a80(param_4);
  func_0x00010c1ee7a0(dVar2 - dVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105de04bc; end: 105de0597; -[SCPreviewFeatureVideoTrackingImpl _centerForTrackingView:inContainerView:] */

undefined1  [16]
FUN_105de04bc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c27ada0(param_5);
  dVar4 = param_1;
  func_0x00010b816218();
  dVar3 = (double)(long)(param_1 * dVar4) / dVar4;
  func_0x00010b816218();
  dVar4 = (double)(long)(param_2 * dVar4) / dVar4;
  uVar1 = param_5;
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bf51200(dVar3,dVar4,param_6,param_4,uVar1);
  dVar2 = dVar3;
  _objc_release(param_6);
  _objc_release(uVar1);
  func_0x00010b816218();
  dVar3 = (double)(long)(dVar3 * dVar2) / dVar2;
  func_0x00010b816218();
  auVar5._8_8_ = (double)(long)(dVar4 * dVar2) / dVar2;
  auVar5._0_8_ = dVar3;
  return auVar5;
}



/* Entry: 105de0598; end: 105de06cf; -[SCPreviewFeatureVideoTrackingImpl _callListenersForWillTrackView:] */

void FUN_105de0598(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
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
  long lStack_58;
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa30c0();
  _objc_release(lVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010bfa30c0(*(undefined8 *)(lStack_118 + lVar7 * 8),param_2,param_1,param_3);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar5;
      puVar2 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  lVar1 = param_3 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa30a0();
  _objc_release(lVar1);
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  lVar5 = *(long *)(param_3 + 0x38);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_230;
    do {
      lVar7 = 0;
      do {
        if (*plStack_230 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010bfa30a0(*(undefined8 *)(lStack_238 + lVar7 * 8),param_2,param_3,puVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar5;
      puVar4 = &uStack_240;
      func_0x00010bf52a60(lVar5,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puVar3 = (undefined1 *)((long)puVar2 + 0x40);
  _objc_loadWeakRetained(puVar3);
  func_0x00010bfa3080();
  _objc_release(puVar3);
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  lVar5 = *(long *)((long)puVar2 + 0x38);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_360,auStack_318,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_350;
    do {
      lVar7 = 0;
      do {
        if (*plStack_350 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010bfa3080(*(undefined8 *)(lStack_358 + lVar7 * 8),param_2,puVar2,puVar4);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_360,auStack_318,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained((undefined1 *)((long)puVar4 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105de06d0; end: 105de0807; -[SCPreviewFeatureVideoTrackingImpl _callListenersForDidTrackView:] */

void FUN_105de06d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa30a0();
  _objc_release(lVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010bfa30a0(*(undefined8 *)(lStack_118 + lVar5 * 8),param_2,param_1,param_3);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      puVar2 = &uStack_120;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  lVar1 = param_3 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa3080();
  _objc_release(lVar1);
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  lVar3 = *(long *)(param_3 + 0x38);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_230;
    do {
      lVar5 = 0;
      do {
        if (*plStack_230 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010bfa3080(*(undefined8 *)(lStack_238 + lVar5 * 8),param_2,param_3,puVar2);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained((undefined1 *)((long)puVar2 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105de0808; end: 105de093f; -[SCPreviewFeatureVideoTrackingImpl _callListenersForDidDisableTrackingView:] */

void FUN_105de0808(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa3080();
  _objc_release(lVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bfa3080(*(undefined8 *)(lStack_118 + lVar4 * 8),param_2,param_1,param_3);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_3 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105de0940; end: 105de0957; -[SCPreviewFeatureVideoTrackingImpl delegate] */

void FUN_105de0940(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105de0958; end: 105de0963; -[SCPreviewFeatureVideoTrackingImpl setDelegate:] */

void FUN_105de0958(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105de0964; end: 105de09d3; -[SCPreviewFeatureVideoTrackingImpl .cxx_destruct] */

void FUN_105de0964(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105de09d4; end: 105de0aeb; -[SCPreviewFeatureVideoTrackingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de09d4(long param_1)

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
  puVar2 = PTR_PTR_1126c4ba0;
  _objc_alloc(PTR_PTR_1126c4ba0);
  func_0x00010c061280();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112736aa8);
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



/* Entry: 105de0aec; end: 105de0d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de0aec(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_70;
  
  puVar1 = PTR_PTR_1126c4b98;
  _objc_alloc();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    uStack_70 = 0;
  }
  else {
    uStack_70 = lVar2 + _DAT_112736a98;
    _objc_loadWeakRetained();
  }
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  FUN_105de0d38();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  FUN_105de0d38();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c29a700();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar10 = 0;
  if (lVar9 != 0) {
    lVar10 = lVar9 + _DAT_112736a94;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar10;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar12 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = lVar12 + _DAT_112736aa0;
    _objc_loadWeakRetained(lVar15);
  }
  lVar13 = lVar15;
  func_0x00010bf207a0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112736aa4;
    _objc_loadWeakRetained(lVar16);
  }
  lVar14 = lVar16;
  func_0x00010c23fc40(lVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0612a0(puVar1,param_2,uStack_70,lVar5,lVar8,lVar11,lVar13,lVar14);
  _objc_release(lVar14);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar15);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uStack_70);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105de0d38; end: 105de0d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de0d38(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112736a9c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105de0d5c; end: 105de0dc7; -[SCPreviewFeatureVideoTrackingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de0d5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736aa8,0);
  _objc_destroyWeak(param_1 + _DAT_112736aa4);
  _objc_destroyWeak(param_1 + _DAT_112736aa0);
  _objc_destroyWeak(param_1 + _DAT_112736a9c);
  _objc_destroyWeak(param_1 + _DAT_112736a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736a94);
  return;
}



/* Entry: 105de0dc8; end: 105de0e73; -[SCPreviewFeatureVideoTrackingServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de0dc8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112736aac;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112736ab4;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c29b9c0(lVar2);
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



/* Entry: 105de0e74; end: 105de0eb7; -[SCPreviewFeatureVideoTrackingServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de0e74(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112736ab4);
  _objc_destroyWeak(param_1 + _DAT_112736ab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736aac);
  return;
}



/* Entry: 105de0eb8; end: 105de0f63; -[SCPreviewGenericAssetsRegistryImpl init] */

undefined1 * FUN_105de0eb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed1e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105de0f64; end: 105de0fdf; -[SCPreviewGenericAssetsRegistryImpl genericAssetForAssetType:] */

void FUN_105de0f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105de0fe0; end: 105de101b; -[SCPreviewGenericAssetsRegistryImpl allGenericAssetMedias] */

void FUN_105de0fe0(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105de101c; end: 105de1077; -[SCPreviewGenericAssetsRegistryImpl allSnapAssetsForGenericAssets] */

void FUN_105de101c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar1);
  uVar2 = uVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105de1078; end: 105de117b; -[SCPreviewGenericAssetsRegistryImpl upsertLocalGenericAsset:assetType:] */

void FUN_105de1078(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c4ba8;
  func_0x00010bf0b0e0(PTR_PTR_1126c4ba8);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  uVar3 = param_4;
  func_0x00010b697c6c(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4,param_2,uVar3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar3);
  _os_unfair_lock_unlock(param_1 + 8);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de117c; end: 105de123b; -[SCPreviewGenericAssetsRegistryImpl removeAssetForAssetType:] */

void FUN_105de117c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar2);
  _os_unfair_lock_unlock(param_1 + 8);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105de123c; end: 105de13df; -[SCPreviewGenericAssetsRegistryImpl setSnapAssets:assetCloudFilesByAssetType:] */

void FUN_105de123c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar6 = (uint)*(undefined8 *)(lVar8 * 8);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf0b760();
      if (uVar6 < 0x16) {
        func_0x00010b697928();
      }
      func_0x00010c0df780(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7);
      _objc_release(puVar3);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = param_4;
  func_0x00010c0ba440(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(uVar5);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf0afd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c4ba8,PTR_s_assetCloudFileWithAssetCloudFile_1125a0598);
  return;
}



/* Entry: 105de13e0; end: 105de13eb;  */

void FUN_105de13e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0afd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c4ba8,PTR_s_assetCloudFileWithAssetCloudFile_1125a0598);
  return;
}



/* Entry: 105de13ec; end: 105de1457; -[SCPreviewGenericAssetsRegistryImpl setGenericAssetsForMultiSnapEditingState:] */

void FUN_105de13ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if ((lVar1 != 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    _os_unfair_lock_lock(param_1 + 8);
    lVar1 = param_3;
    func_0x00010c0d3c80();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105de1458; end: 105de145f; -[SCPreviewGenericAssetsRegistryImpl genericAssetUpdates] */

undefined8 FUN_105de1458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105de1460; end: 105de148f; -[SCPreviewGenericAssetsRegistryImpl setGenericAssetUpdates:] */

void FUN_105de1460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105de1490; end: 105de14cb; -[SCPreviewGenericAssetsRegistryImpl .cxx_destruct] */

void FUN_105de1490(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105de14cc; end: 105de1543; -[SCPreviewGenericAssetsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de14cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c4bb0;
  _objc_alloc_init(PTR_PTR_1126c4bb0);
  puVar2 = PTR_PTR_1126c4bb8;
  _objc_alloc(PTR_PTR_1126c4bb8);
  func_0x00010c03dcc0();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112736acc);
  }
  func_0x00010bf9d660(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105de1544; end: 105de157f; -[SCPreviewGenericAssetsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105de1544(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736acc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736ac8);
  return;
}



/* Entry: 105de1580; end: 105de1a03; -[SCPreviewCommonLogger initWithPreviewScope:lensLoggerServices:memoriesLegacyLoggerServices:memoriesDataObjectStorageService:snapDocEditorServices:userLocationServices:] */

undefined8 *
FUN_105de1580(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ed1f0;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 == (undefined8 *)0x0) goto LAB_105de19b0;
  uVar3 = param_3;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf429e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c4588;
  if (uVar3 == 0) {
    uVar5 = uVar3;
    func_0x0001008e4748();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = puVar2[1];
    puVar2[1] = uVar5;
  }
  else {
    uVar13 = uVar1;
    func_0x00010bf429e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23f8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar2[1];
    puVar2[1] = puVar4;
    _objc_release(uVar9);
  }
  puVar12 = puVar2 + 1;
  _objc_release(uVar13);
  _objc_release(uVar3);
  uVar10 = *puVar12;
  uVar9 = param_4;
  func_0x00010c094e60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_8;
  func_0x00010c292d20(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c960(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar9);
  func_0x00010c284180(*puVar12);
  func_0x00010c28a760(*puVar12);
  func_0x00010c2892c0(*puVar12);
  func_0x00010c286760(*puVar12);
  uVar3 = param_5;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  if (uVar13 == 0) {
    uVar3 = uVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (uVar13 != 0) {
      uVar9 = *puVar12;
      uVar3 = uVar1;
      func_0x00010c2440e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar3;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010c2440e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0c7f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107fdf418(uVar9,uVar13,uVar8);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar13);
      goto LAB_105de198c;
    }
  }
  else {
    uVar11 = *puVar12;
    uVar3 = uVar1;
    func_0x00010c2440e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_6;
    func_0x00010c0c8780(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf5f400(uVar5);
    uVar8 = uVar5;
    func_0x00010c0c7580(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fdcfb8(uVar11,uVar13,0,uVar6,uVar7,uVar8,param_7);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar13);
    _objc_release(uVar3);
    uVar3 = uVar5;
    func_0x00010bf8a880();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      func_0x00010c2acb20(*puVar12);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
LAB_105de198c:
    _objc_release(uVar3);
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
LAB_105de19b0:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105de1a04; end: 105de1a0b; -[SCPreviewCommonLogger paramsBuilder] */

undefined8 FUN_105de1a04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105de1a0c; end: 105de1a3b; -[SCPreviewCommonLogger setParamsBuilder:] */

void FUN_105de1a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105de1a3c; end: 105de1a47; -[SCPreviewCommonLogger .cxx_destruct] */

void FUN_105de1a3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


