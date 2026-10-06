/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d54604; end: 105d54653; -[SCPreviewFeatureCreativeToolsDurationImpl editingDidEndForTool:durationEditingWillBegin:] */

void FUN_105d54604(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  if (((param_4 & 1) == 0) && (*(long *)(param_1 + 0x60) != 0)) {
    func_0x00010bdced40(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105d54654; end: 105d54787; -[SCPreviewFeatureCreativeToolsDurationImpl isDurationEditingSupportedForTool:] */

uint FUN_105d54654(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain(param_4);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c083340();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    uVar5 = 0;
    goto LAB_105d54768;
  }
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010be63560(param_2,param_3,param_4);
  lVar3 = lVar1;
  func_0x00010c071040();
  if ((int)lVar3 == 0) {
LAB_105d54720:
    uVar5 = 0;
  }
  else if ((lVar2 - 3U < 2) || (lVar2 == 1)) {
    param_2 = param_2 + 0x28;
    _objc_loadWeakRetained(param_2);
    lVar2 = param_2;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c06e820();
    _objc_release(lVar2);
    _objc_release(param_2);
    uVar5 = (uint)lVar3 ^ 1;
  }
  else {
    if (lVar2 != 0) goto LAB_105d54720;
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276200();
    uVar5 = (uint)(1.0 < param_1);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
LAB_105d54768:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 105d54788; end: 105d547c7; -[SCPreviewFeatureCreativeToolsDurationImpl configureWithView:] */

void FUN_105d54788(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d547c8; end: 105d547cb; -[SCPreviewFeatureCreativeToolsDurationImpl playbackTimeRangesForToolsDurationController:] */

void FUN_105d547c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be74f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playbackSegments_11257ad60);
  return;
}



/* Entry: 105d547cc; end: 105d54893; -[SCPreviewFeatureCreativeToolsDurationImpl toolsDurationController:didUpdateTrimmedTimeRange:] */

void FUN_105d547cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_48 = param_4[3];
  uStack_50 = param_4[2];
  uStack_38 = param_4[5];
  uStack_40 = param_4[4];
  func_0x00010bee3500(param_1,param_2,&uStack_60);
  puVar2 = PTR_DAT_1126a51e0;
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x00010010fab4(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010bf87a60();
  if ((int)uVar3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    uStack_50 = param_4[2];
    func_0x00010c28ae60();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 105d54894; end: 105d548f3; -[SCPreviewFeatureCreativeToolsDurationImpl toolsDurationController:didSeekToTime:] */

void FUN_105d54894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_30 = param_4[2];
  _CMTimeGetSeconds(&uStack_40);
  func_0x00010c256600(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 105d548f4; end: 105d54927; -[SCPreviewFeatureCreativeToolsDurationImpl toolsDurationControllerFinishedSeeking:] */

void FUN_105d548f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d54928; end: 105d5492b; -[SCPreviewFeatureCreativeToolsDurationImpl toolsDurationControllerCompleteButtonTapped:] */

void FUN_105d54928(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exitDurationEditingMode_1125c4770);
  return;
}



/* Entry: 105d5492c; end: 105d54acf; -[SCPreviewFeatureCreativeToolsDurationImpl toolsDurationControllerTextToSpeechButtonTapped:] */

void FUN_105d5492c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_DAT_1126a51e0;
  lVar5 = *(long *)(param_1 + 0x80);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010010fab4(lVar5,puVar2);
  lVar1 = lVar5;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar5);
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar3 = lVar5;
    func_0x00010bf87a60();
    if ((int)lVar3 == 0) {
      lVar3 = param_3;
      func_0x00010c158160();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x00010c27c900(&uStack_80,lVar3);
      }
      _objc_copyWeak(auStack_88,auStack_48);
      func_0x00010bfc0400(lVar5);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_88);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12eaa0();
      _objc_release(uVar4);
      func_0x00010c1b5000(*(undefined8 *)(param_1 + 0x78));
    }
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105d54ad0; end: 105d54b3b;  */

void FUN_105d54ad0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1b5000(*(undefined8 *)(param_1 + 0x78));
    if (*(char *)(param_1 + 0xb8) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19a9a0();
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d54b3c; end: 105d54b3f; -[SCPreviewFeatureCreativeToolsDurationImpl toolsDurationController:didChangeSelectedTimeSlice:] */

void FUN_105d54b3c(void)

{
  return;
}



/* Entry: 105d54b40; end: 105d54b43; -[SCPreviewFeatureCreativeToolsDurationImpl toolsDurationController:didSelectTimeSlice:] */

void FUN_105d54b40(void)

{
  return;
}



/* Entry: 105d54b44; end: 105d54b4b; -[SCPreviewFeatureCreativeToolsDurationImpl featureType] */

undefined8 FUN_105d54b44(void)

{
  return 3;
}



/* Entry: 105d54b4c; end: 105d54ccb; -[SCPreviewFeatureCreativeToolsDurationImpl _setupTextToSpeechInitialStateWithSegment:] */

void FUN_105d54b4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_DAT_1126a51e0;
  lVar4 = *(long *)(param_1 + 0x80);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010010fab4(lVar4,puVar2);
  lVar1 = lVar4;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar4);
  if (lVar1 != 0) {
    lVar3 = lVar4;
    func_0x00010c233160();
    if ((int)lVar3 != 0) {
      _objc_initWeak(auStack_48,param_1);
      if (param_3 == 0) {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x00010c27c900(&uStack_80,param_3);
      }
      _objc_copyWeak(auStack_88,auStack_48);
      func_0x00010bfc0400(lVar4);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_48);
    }
    func_0x00010c2345e0(lVar4);
    func_0x00010c1b4fe0(*(undefined8 *)(param_1 + 0x78));
    func_0x00010c233160(lVar4);
    func_0x00010c1b5000(*(undefined8 *)(param_1 + 0x78));
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105d54ccc; end: 105d54d27;  */

void FUN_105d54ccc(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0xb8) == '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a9a0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d54d28; end: 105d54d8b; -[SCPreviewFeatureCreativeToolsDurationImpl _setElementsHiddenForDurationEditing:] */

void FUN_105d54d28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c193ee0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d54d8c; end: 105d54dfb; -[SCPreviewFeatureCreativeToolsDurationImpl _editingWillBeginForTool:] */

void FUN_105d54d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c081160();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c279100();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d54dfc; end: 105d54e73; -[SCPreviewFeatureCreativeToolsDurationImpl _removeTrajectoryForTool:] */

void FUN_105d54dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c278b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf80c80(uVar2,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d54e74; end: 105d55053; -[SCPreviewFeatureCreativeToolsDurationImpl _setupCreativeToolsDurationCollectionViewController] */

void FUN_105d54e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (*(long *)(param_5 + 0x78) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c4478;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010bfff9a0(puVar1,param_6,puVar2);
  uVar8 = *(undefined8 *)(param_5 + 0x78);
  *(undefined **)(param_5 + 0x78) = puVar1;
  _objc_release(uVar8);
  _objc_release(puVar2);
  lVar3 = param_5 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c185a60();
  _objc_release(lVar3);
  lVar3 = param_5 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf5af40();
  uVar8 = *(undefined8 *)(param_5 + 0x78);
  func_0x00010c29bf00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar8);
  _objc_release(lVar3);
  lVar3 = param_5 + 8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + 0x78);
  func_0x00010c29bf00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5 + 8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(lVar4,param_6,uVar8,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c189840(*(undefined8 *)(param_5 + 0x78),param_6,param_5);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x78),param_6,param_5);
  uVar8 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 105d55054; end: 105d5528f; -[SCPreviewFeatureCreativeToolsDurationImpl _setNonEditingTouchControllablesAlpha:] */

void FUN_105d55054(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x23;
  ulong unaff_x24;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  long lStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
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
  undefined8 auStack_168 [16];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uVar1 = *(ulong *)(param_2 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bfa1b20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010beffc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf52a60(uVar3,param_3,&uStack_1b0,auStack_e8,0x10);
  if (uVar1 != 0) {
    unaff_x23 = *plStack_1a0;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_1a0 != unaff_x23) {
          _objc_enumerationMutation(uVar3);
        }
        uVar9 = *(ulong *)(lStack_1a8 + unaff_x24 * 8);
        uVar2 = uVar9;
        func_0x00010c071ae0(uVar9,param_3,*(undefined8 *)(param_2 + 0x50));
        if ((uVar2 & 1) == 0) {
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1677c0(param_1);
          _objc_release(uVar9);
        }
        unaff_x24 = unaff_x24 + 1;
      } while (uVar1 != unaff_x24);
      uVar1 = uVar3;
      func_0x00010bf52a60(uVar3,param_3,&uStack_1b0,auStack_e8,0x10);
    } while (uVar1 != 0);
  }
  _objc_release(uVar3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uVar3 = *(ulong *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar7 = auStack_168;
  uVar2 = uVar1;
  func_0x00010bf52a60(uVar1,param_3,&uStack_1f0,puVar7,0x10);
  if (uVar2 != 0) {
    unaff_x23 = *plStack_1e0;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_1e0 != unaff_x23) {
          _objc_enumerationMutation(uVar1);
        }
        uVar9 = *(ulong *)(lStack_1e8 + unaff_x24 * 8);
        uVar3 = uVar9;
        func_0x00010c071ae0(uVar9,param_3,*(undefined8 *)(param_2 + 0x50));
        if ((uVar3 & 1) == 0) {
          func_0x00010c1677c0(param_1,uVar9);
        }
        unaff_x24 = unaff_x24 + 1;
      } while (uVar2 != unaff_x24);
      puVar7 = auStack_168;
      uVar2 = uVar1;
      puVar6 = &uStack_1f0;
      func_0x00010bf52a60(uVar1,param_3,&uStack_1f0,puVar7,0x10);
      uVar3 = 0;
    } while (uVar2 != 0);
  }
  uVar2 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_105d55290;
  uVar8 = *(undefined8 *)(uVar2 + 0x90);
  uStack_230 = unaff_x24;
  lStack_228 = unaff_x23;
  uStack_220 = uVar9;
  uStack_218 = uVar3;
  uStack_210 = uVar1;
  lStack_208 = param_2;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)puVar6;
  func_0x00010c278b80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar6;
  func_0x00010c07d6e0(puVar6);
  _objc_release(puVar6);
  uStack_258 = puVar7[1];
  uStack_260 = *puVar7;
  uStack_248 = puVar7[3];
  uStack_250 = puVar7[2];
  uStack_238 = puVar7[5];
  uStack_240 = puVar7[4];
  func_0x00010bf083a0(uVar8,param_3,puVar4,&uStack_260,(uint)puVar5 ^ 1);
  _objc_release(puVar4);
  _objc_release(uVar8);
  return;
}



/* Entry: 105d55290; end: 105d55343; -[SCPreviewFeatureCreativeToolsDurationImpl _applyTimingToTool:timeRange:] */

void FUN_105d55290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c278b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c07d6e0(param_3);
  _objc_release(param_3);
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_58 = param_4[3];
  uStack_60 = param_4[2];
  uStack_48 = param_4[5];
  uStack_50 = param_4[4];
  func_0x00010bf083a0(uVar3,param_2,uVar1,&uStack_70,(uint)uVar2 ^ 1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 105d55344; end: 105d553e7; -[SCPreviewFeatureCreativeToolsDurationImpl _applyTrajectoryStateToTool:trajectoryState:] */

void FUN_105d55344(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [48];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276200();
  FUN_105d553e8(auStack_60,param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
  func_0x00010bdcece0(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 105d553e8; end: 105d55613;  */

void FUN_105d553e8(double param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  dVar6 = param_1;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c26f000(&uStack_70,uVar1);
  }
  uVar2 = param_3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010c26f000(&uStack_90,uVar2);
  }
  uVar3 = param_3;
  func_0x00010bf529e0();
  uVar5 = param_3;
  if (uVar3 < 3) {
    uVar3 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c27a460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (dVar6 != 0.0) goto LAB_105d55580;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
    }
    else {
      func_0x00010c26f000(&uStack_a8,uVar5);
    }
    uStack_68 = uStack_a0;
    uStack_70 = uStack_a8;
    uStack_60 = uStack_98;
    _CMTimeMakeWithSeconds(&uStack_a8,param_1,0x78);
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    uStack_80 = uStack_98;
  }
  else {
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
    }
    else {
      func_0x00010c26f000(&uStack_a8,uVar5);
    }
    uStack_68 = uStack_a0;
    uStack_70 = uStack_a8;
    uStack_60 = uStack_98;
  }
  _objc_release(uVar5);
LAB_105d55580:
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_b0 = uStack_80;
  uStack_d8 = uStack_68;
  uStack_e0 = uStack_70;
  uStack_d0 = uStack_60;
  _CMTimeSubtract(&uStack_a8,&uStack_c0,&uStack_e0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_b0 = uStack_60;
  uStack_d8 = uStack_a0;
  uStack_e0 = uStack_a8;
  uStack_d0 = uStack_98;
  _CMTimeRangeMake(param_2,&uStack_c0,&uStack_e0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105d55614; end: 105d5570f; -[SCPreviewFeatureCreativeToolsDurationImpl _playbackSegments] */

void FUN_105d55614(undefined *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar7 = &puStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x18);
  func_0x00010bf51e00();
  puVar2 = (undefined *)0x0;
  puVar3 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    unaff_x22 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x22;
    func_0x00010bf5e820();
    puVar2 = unaff_x22;
    _objc_release();
    if (unaff_x21 != (undefined *)0x7fffffffffffffff) {
      puVar2 = *(undefined **)(param_1 + 0x18);
      func_0x00010bf529e0();
      if (unaff_x21 < puVar2) {
        param_1 = *(undefined **)(param_1 + 0x18);
        func_0x00010c0dfd40(param_1,param_2,unaff_x21);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_40 = param_1;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar2 = param_1;
        _objc_release();
        param_3 = (undefined1 *)ppuVar7;
        unaff_x21 = puVar3;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_105d55710;
  puStack_70 = unaff_x22;
  puStack_68 = unaff_x21;
  puStack_60 = param_1;
  puStack_58 = puVar3;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar3 = puVar2 + 0x28;
  _objc_loadWeakRetained();
  _objc_retain();
  puVar1 = puVar3;
  func_0x00010bf30e80();
  if (puVar1 == (undefined *)0x3) {
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
  else {
    puVar1 = puVar3;
    func_0x00010bf30e80();
    _objc_release(puVar3);
    _objc_release(puVar3);
    if (puVar1 != (undefined *)0x4) goto LAB_105d557a8;
  }
  puVar3 = puVar2 + 0x10;
  _objc_loadWeakRetained(puVar3);
  func_0x00010c1c9a00();
  _objc_release(puVar3);
LAB_105d557a8:
  puVar3 = puVar2 + 0x28;
  _objc_loadWeakRetained();
  puVar1 = puVar3;
  func_0x00010bf30e80();
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x1) {
    uVar4 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d25e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287da0();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  puVar3 = puVar2 + 0x28;
  _objc_loadWeakRetained();
  puVar1 = puVar3;
  func_0x00010bf30e80();
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    uVar5 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined1 *)0x0) {
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_a0,puVar6);
    }
    func_0x00010c28b5e0(uVar5,param_2,&uStack_a0);
    _objc_release(puVar6);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d55710; end: 105d558ab; -[SCPreviewFeatureCreativeToolsDurationImpl _updateVideoTimeRanges:] */

void FUN_105d55710(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  if (lVar2 == 3) {
    _objc_release(lVar1);
    _objc_release(lVar1);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf30e80();
    _objc_release(lVar1);
    _objc_release(lVar1);
    if (lVar2 != 4) goto LAB_105d557a8;
  }
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1c9a00();
  _objc_release(lVar1);
LAB_105d557a8:
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d25e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287da0();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_60,lVar1);
    }
    func_0x00010c28b5e0(uVar4,param_2,&uStack_60);
    _objc_release(lVar1);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d558ac; end: 105d55a3b; -[SCPreviewFeatureCreativeToolsDurationImpl _updateVideoTimeRangesWithTrimmedTimeRange:] */

void FUN_105d558ac(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = param_1;
  func_0x00010be74f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_105dde99c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bde14e0();
  if (puVar1 == (undefined *)0x7fffffffffffffff) {
    puVar3 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf5e820();
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x7fffffffffffffff) goto LAB_105d55a0c;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    puVar6 = (undefined *)0x0;
    do {
      if (puVar1 == puVar6) {
        puVar5 = puVar2;
        func_0x00010bfb1920(puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010befa120(puVar3);
      _objc_release(puVar5);
      puVar6 = puVar6 + 1;
      puVar5 = *(undefined **)(param_1 + 0x18);
      func_0x00010bf529e0();
    } while (puVar6 < puVar5);
  }
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = puVar1;
LAB_105d55a0c:
  func_0x00010bee34e0(param_1);
  _objc_release(puVar2);
  return;
}



/* Entry: 105d55a3c; end: 105d56697; -[SCPreviewFeatureCreativeToolsDurationImpl _segment] */

void FUN_105d55a3c(double param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  code *pcStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
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
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
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
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar8 = param_2 + 8;
  _objc_loadWeakRetained(lVar8);
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(lVar8);
  puVar10 = PTR_DAT_1126a51e0;
  uVar11 = *(undefined8 *)(param_2 + 0x80);
  _objc_retain(uVar11);
  uVar2 = uVar11;
  func_0x00010010fab4(uVar11,puVar10);
  uVar1 = uVar11;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar11);
  uVar2 = uVar1;
  func_0x00010c2345e0();
  dVar13 = 0.5786666870117188;
  if ((int)uVar2 == 0) {
    dVar13 = 0.7093333601951599;
  }
  dVar13 = (param_1 * dVar13) / 40.0;
  uVar3 = (ulong)(uint)(int)dVar13;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff240();
  _objc_release(uVar2);
  _CMTimeMakeWithSeconds(&uStack_c0,0,0x78);
  _CMTimeMakeWithSeconds(&uStack_130,uVar3,0x78);
  _CMTimeRangeMake(&uStack_2a0,&uStack_c0,&uStack_130);
  uVar3 = param_2;
  func_0x00010be74f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_2c8 = &uStack_2d0;
  uStack_2d0 = 0;
  uStack_2c0 = 0x3032000000;
  pcStack_2b8 = FUN_105d56698;
  uStack_2b0 = 0x105d566a8;
  uStack_2a8 = 0;
  puStack_2f8 = &uStack_300;
  uStack_300 = 0;
  uStack_2f0 = 0x3032000000;
  pcStack_2e8 = FUN_105d56698;
  uStack_2e0 = 0x105d566a8;
  uStack_2d8 = 0;
  lVar8 = param_2 + 0x28;
  _objc_loadWeakRetained();
  _objc_retain();
  lVar4 = lVar8;
  func_0x00010bf30e80();
  if (lVar4 == 3) {
    _objc_release(lVar8);
    _objc_release(lVar8);
  }
  else {
    lVar4 = lVar8;
    func_0x00010bf30e80();
    _objc_release(lVar8);
    _objc_release(lVar8);
    if (lVar4 != 4) goto LAB_105d55c84;
  }
  lVar8 = param_2 + 0x28;
  _objc_loadWeakRetained(lVar8);
  lVar4 = lVar8;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_328 = 0xc2000000;
  pcStack_320 = FUN_105d566b0;
  puStack_318 = &UNK_1108e5978;
  puStack_310 = &uStack_2d0;
  puStack_308 = &uStack_300;
  func_0x000107fb2258();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
LAB_105d55c84:
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010c2991a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uStack_298;
  uStack_c0 = uStack_2a0;
  uStack_a8 = uStack_288;
  uStack_b0 = uStack_290;
  uStack_98 = uStack_278;
  uStack_a0 = uStack_280;
  uVar6 = param_2;
  func_0x00010c26dbe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uStack_280;
  func_0x00010c0ff1e0();
  _objc_release(uVar11);
  uVar7 = *(ulong *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010bf5e820();
  _objc_release(uVar7);
  if (uVar12 != 0x7fffffffffffffff) {
    uVar7 = *(ulong *)(param_2 + 0x18);
    func_0x00010bf529e0();
    if (uVar12 < uVar7) {
      lVar8 = *(long *)(param_2 + 0x18);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_c0,lVar8);
      }
      _objc_release(lVar8);
      uStack_128 = uStack_a0;
      uStack_130 = uStack_a8;
      uStack_120 = uStack_98;
      uVar2 = uStack_a8;
      _CMTimeGetSeconds(&uStack_130);
    }
  }
  _CMTimeMakeWithSeconds(&uStack_c0,0,0x78);
  _CMTimeMakeWithSeconds(&uStack_130,uVar2,0x78);
  _CMTimeRangeMake(&uStack_360,&uStack_c0,&uStack_130);
  uStack_388 = uStack_358;
  uStack_390 = uStack_360;
  uStack_378 = uStack_348;
  uStack_380 = uStack_350;
  uStack_368 = uStack_338;
  uStack_370 = uStack_340;
  uVar12 = param_2;
  uVar2 = uStack_340;
  func_0x00010bde14e0();
  if ((uVar12 != 0x7fffffffffffffff) && (uVar7 = uVar3, func_0x00010bf529e0(), uVar12 < uVar7)) {
    uVar12 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar12 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_c0,uVar12);
    }
    uStack_388 = uStack_b8;
    uStack_390 = uStack_c0;
    uStack_378 = uStack_a8;
    uStack_380 = uStack_b0;
    uStack_368 = uStack_98;
    uStack_370 = uStack_a0;
    uVar2 = uStack_a0;
    _objc_release(uVar12);
  }
  lVar8 = *(long *)(param_2 + 0x60);
  if (lVar8 != 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276200(uVar11);
    _objc_retain(uVar3);
    FUN_105d553e8(uVar2,&uStack_c0,lVar8);
    uStack_d8 = uStack_b8;
    uStack_e0 = uStack_c0;
    uStack_d0 = uStack_b0;
    uStack_128 = uStack_b8;
    uStack_130 = uStack_c0;
    uStack_118 = uStack_a8;
    uStack_120 = uStack_b0;
    uStack_108 = uStack_98;
    uStack_110 = uStack_a0;
    _CMTimeRangeGetEnd(&uStack_f8,&uStack_130);
    uStack_148 = uStack_d8;
    uStack_150 = uStack_e0;
    uStack_140 = uStack_d0;
    uStack_168 = uStack_a0;
    uStack_170 = uStack_a8;
    uStack_160 = uStack_98;
    uVar15 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar14 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar2 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uVar12 = uVar3;
    uStack_190 = uVar14;
    uStack_188 = uVar15;
    uStack_180 = uVar2;
    func_0x00010bf529e0();
    if (uVar12 != 0) {
      uVar12 = 0;
      do {
        uVar7 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (uVar7 == 0) {
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_130,uVar7);
        }
        _objc_release(uVar7);
        uStack_1e8 = uStack_188;
        uStack_1f0 = uStack_190;
        uStack_1e0 = uStack_180;
        uStack_238 = uStack_110;
        uStack_240 = uStack_118;
        uStack_230 = uStack_108;
        _CMTimeRangeMake(&uStack_1c0,&uStack_1f0,&uStack_240);
        uStack_1e8 = uStack_188;
        uStack_1f0 = uStack_190;
        uStack_1e0 = uStack_180;
        uStack_238 = uStack_110;
        uStack_240 = uStack_118;
        uStack_230 = uStack_108;
        _CMTimeAdd(&uStack_190,&uStack_1f0,&uStack_240);
        if (uVar12 == 0) {
          uStack_1e8 = uStack_d8;
          uStack_1f0 = uStack_e0;
          uStack_1e0 = uStack_d0;
          uStack_238 = uStack_128;
          uStack_240 = uStack_130;
          uStack_230 = uStack_120;
          puVar9 = &uStack_1f0;
          _CMTimeCompare(puVar9,&uStack_240);
          if (-1 < (int)puVar9) goto LAB_105d56004;
          uStack_1e8 = uStack_128;
          uStack_1f0 = uStack_130;
          uStack_1d8 = uStack_118;
          uStack_1e0 = uStack_120;
          uStack_1c8 = uStack_108;
          uStack_1d0 = uStack_110;
          uStack_238 = uStack_f0;
          uStack_240 = uStack_f8;
          uStack_230 = uStack_e8;
          puVar9 = &uStack_1f0;
          uStack_150 = uVar14;
          uStack_148 = uVar15;
          uStack_140 = uVar2;
          _CMTimeRangeContainsTime(puVar9,&uStack_240);
          if ((int)puVar9 != 0) {
            uStack_238 = uStack_128;
            uStack_240 = uStack_130;
            uStack_230 = uStack_120;
            uStack_268 = uStack_d8;
            uStack_270 = uStack_e0;
            uStack_260 = uStack_d0;
            _CMTimeSubtract(&uStack_1f0,&uStack_240,&uStack_270);
            uStack_238 = uStack_a0;
            uStack_240 = uStack_a8;
            uStack_230 = uStack_98;
            uStack_268 = uStack_1e8;
            uStack_270 = uStack_1f0;
            uStack_260 = uStack_1e0;
            _CMTimeSubtract(&uStack_170,&uStack_240,&uStack_270);
            break;
          }
        }
        else {
LAB_105d56004:
          uVar7 = uVar3;
          func_0x00010bf529e0();
          if (uVar12 == uVar7 - 1) {
            uStack_1e8 = uStack_128;
            uStack_1f0 = uStack_130;
            uStack_1d8 = uStack_118;
            uStack_1e0 = uStack_120;
            uStack_1c8 = uStack_108;
            uStack_1d0 = uStack_110;
            _CMTimeRangeGetEnd(&uStack_240,&uStack_1f0);
            uStack_1e8 = uStack_f0;
            uStack_1f0 = uStack_f8;
            uStack_1e0 = uStack_e8;
            puVar9 = &uStack_1f0;
            _CMTimeCompare(puVar9,&uStack_240);
            if (-1 < (int)puVar9) {
              if (uVar12 == 0) {
LAB_105d56408:
                uStack_1e8 = uStack_128;
                uStack_1f0 = uStack_130;
                uStack_1d8 = uStack_118;
                uStack_1e0 = uStack_120;
                uStack_1c8 = uStack_108;
                uStack_1d0 = uStack_110;
                uStack_238 = uStack_d8;
                uStack_240 = uStack_e0;
                uStack_230 = uStack_d0;
                puVar9 = &uStack_1f0;
                _CMTimeRangeContainsTime(puVar9,&uStack_240);
                if ((int)puVar9 != 0) {
                  uStack_238 = uStack_d8;
                  uStack_240 = uStack_e0;
                  uStack_230 = uStack_d0;
                  uStack_268 = uStack_128;
                  uStack_270 = uStack_130;
                  uStack_260 = uStack_120;
                  _CMTimeSubtract(&uStack_1f0,&uStack_240,&uStack_270);
                  uStack_238 = uStack_1b8;
                  uStack_240 = uStack_1c0;
                  uStack_230 = uStack_1b0;
                  uStack_268 = uStack_1e8;
                  uStack_270 = uStack_1f0;
                  uStack_260 = uStack_1e0;
                  _CMTimeAdd(&uStack_150,&uStack_240,&uStack_270);
                }
              }
              else {
                uVar12 = uVar3;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                if (uVar12 == 0) {
                  uStack_1d8 = 0;
                  uStack_1e0 = 0;
                  uStack_1c8 = 0;
                  uStack_1d0 = 0;
                  uStack_1e8 = 0;
                  uStack_1f0 = 0;
                }
                else {
                  func_0x00010bdc1120(&uStack_1f0,uVar12);
                }
                _objc_release(uVar12);
                uStack_200 = uStack_d0;
                uStack_238 = uStack_1e8;
                uStack_240 = uStack_1f0;
                uStack_228 = uStack_1d8;
                uStack_230 = uStack_1e0;
                uStack_218 = uStack_1c8;
                uStack_220 = uStack_1d0;
                uStack_208 = uStack_d8;
                uStack_210 = uStack_e0;
                uStack_268 = uStack_128;
                uStack_270 = uStack_130;
                uStack_258 = uStack_118;
                uStack_260 = uStack_120;
                uStack_248 = uStack_108;
                uStack_250 = uStack_110;
                puVar10 = PTR_PTR_1126c4498;
                func_0x00010c081900();
                if ((int)puVar10 == 0) goto LAB_105d56408;
                uStack_148 = uStack_1b8;
                uStack_150 = uStack_1c0;
                uStack_140 = uStack_1b0;
              }
              uStack_1e8 = uStack_1b8;
              uStack_1f0 = uStack_1c0;
              uStack_1d8 = uStack_1a8;
              uStack_1e0 = uStack_1b0;
              uStack_1c8 = uStack_198;
              uStack_1d0 = uStack_1a0;
              _CMTimeRangeGetEnd(&uStack_240,&uStack_1f0);
              uStack_1e8 = uStack_148;
              uStack_1f0 = uStack_150;
              uStack_1e0 = uStack_140;
              _CMTimeSubtract(&uStack_170,&uStack_240,&uStack_1f0);
              break;
            }
          }
          uStack_1e8 = uStack_128;
          uStack_1f0 = uStack_130;
          uStack_1d8 = uStack_118;
          uStack_1e0 = uStack_120;
          uStack_1c8 = uStack_108;
          uStack_1d0 = uStack_110;
          uStack_238 = uStack_d8;
          uStack_240 = uStack_e0;
          uStack_230 = uStack_d0;
          puVar9 = &uStack_1f0;
          _CMTimeRangeContainsTime(puVar9,&uStack_240);
          if ((int)puVar9 == 0) {
            uStack_1e8 = uStack_128;
            uStack_1f0 = uStack_130;
            uStack_1d8 = uStack_118;
            uStack_1e0 = uStack_120;
            uStack_1c8 = uStack_108;
            uStack_1d0 = uStack_110;
            uStack_238 = uStack_f0;
            uStack_240 = uStack_f8;
            uStack_230 = uStack_e8;
            puVar9 = &uStack_1f0;
            _CMTimeRangeContainsTime(puVar9,&uStack_240);
            if ((int)puVar9 != 0) {
              uStack_238 = uStack_f0;
              uStack_240 = uStack_f8;
              uStack_230 = uStack_e8;
              uStack_268 = uStack_128;
              uStack_270 = uStack_130;
              uStack_260 = uStack_120;
              _CMTimeSubtract(&uStack_1f0,&uStack_240,&uStack_270);
              uStack_268 = uStack_1b8;
              uStack_270 = uStack_1c0;
              uStack_260 = uStack_1b0;
              uStack_208 = uStack_1e8;
              uStack_210 = uStack_1f0;
              uStack_200 = uStack_1e0;
              _CMTimeAdd(&uStack_240,&uStack_270,&uStack_210);
              uStack_268 = uStack_238;
              uStack_270 = uStack_240;
              uStack_260 = uStack_230;
              uStack_208 = uStack_148;
              uStack_210 = uStack_150;
              uStack_200 = uStack_140;
              _CMTimeSubtract(&uStack_170,&uStack_270,&uStack_210);
              break;
            }
            uVar7 = uVar3;
            func_0x00010bf529e0();
            if ((uVar12 != 0) && (1 < uVar7)) {
              uVar7 = uVar3;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              if (uVar7 == 0) {
                uStack_1d8 = 0;
                uStack_1e0 = 0;
                uStack_1c8 = 0;
                uStack_1d0 = 0;
                uStack_1e8 = 0;
                uStack_1f0 = 0;
              }
              else {
                func_0x00010bdc1120(&uStack_1f0,uVar7);
              }
              _objc_release(uVar7);
              uStack_200 = uStack_d0;
              uStack_238 = uStack_1e8;
              uStack_240 = uStack_1f0;
              uStack_228 = uStack_1d8;
              uStack_230 = uStack_1e0;
              uStack_218 = uStack_1c8;
              uStack_220 = uStack_1d0;
              uStack_208 = uStack_d8;
              uStack_210 = uStack_e0;
              uStack_268 = uStack_128;
              uStack_270 = uStack_130;
              uStack_258 = uStack_118;
              uStack_260 = uStack_120;
              uStack_248 = uStack_108;
              uStack_250 = uStack_110;
              puVar10 = PTR_PTR_1126c4498;
              func_0x00010c081900();
              if ((int)puVar10 == 0) {
                uStack_200 = uStack_e8;
                uStack_238 = uStack_1e8;
                uStack_240 = uStack_1f0;
                uStack_228 = uStack_1d8;
                uStack_230 = uStack_1e0;
                uStack_218 = uStack_1c8;
                uStack_220 = uStack_1d0;
                uStack_208 = uStack_f0;
                uStack_210 = uStack_f8;
                uStack_268 = uStack_128;
                uStack_270 = uStack_130;
                uStack_258 = uStack_118;
                uStack_260 = uStack_120;
                uStack_248 = uStack_108;
                uStack_250 = uStack_110;
                puVar10 = PTR_PTR_1126c4498;
                func_0x00010c0818e0();
                if (((ulong)puVar10 & 1) != 0) {
                  uStack_238 = uStack_1b8;
                  uStack_240 = uStack_1c0;
                  uStack_228 = uStack_1a8;
                  uStack_230 = uStack_1b0;
                  uStack_218 = uStack_198;
                  uStack_220 = uStack_1a0;
                  _CMTimeRangeGetEnd(&uStack_270,&uStack_240);
                  uStack_208 = uStack_110;
                  uStack_210 = uStack_118;
                  uStack_200 = uStack_108;
                  _CMTimeSubtract(&uStack_240,&uStack_270,&uStack_210);
                  uStack_268 = uStack_238;
                  uStack_270 = uStack_240;
                  uStack_260 = uStack_230;
                  uStack_208 = uStack_148;
                  uStack_210 = uStack_150;
                  uStack_200 = uStack_140;
                  _CMTimeSubtract(&uStack_170,&uStack_270,&uStack_210);
                  break;
                }
              }
              else {
                uStack_148 = uStack_1b8;
                uStack_150 = uStack_1c0;
                uStack_140 = uStack_1b0;
              }
            }
          }
          else {
            uStack_238 = uStack_d8;
            uStack_240 = uStack_e0;
            uStack_230 = uStack_d0;
            uStack_268 = uStack_128;
            uStack_270 = uStack_130;
            uStack_260 = uStack_120;
            _CMTimeSubtract(&uStack_1f0,&uStack_240,&uStack_270);
            uStack_238 = uStack_1b8;
            uStack_240 = uStack_1c0;
            uStack_230 = uStack_1b0;
            uStack_268 = uStack_1e8;
            uStack_270 = uStack_1f0;
            uStack_260 = uStack_1e0;
            _CMTimeAdd(&uStack_150,&uStack_240,&uStack_270);
          }
        }
        uVar7 = uVar3;
        func_0x00010bf529e0();
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar7);
    }
    uStack_128 = uStack_148;
    uStack_130 = uStack_150;
    uStack_120 = uStack_140;
    uStack_1b8 = uStack_168;
    uStack_1c0 = uStack_170;
    uStack_1b0 = uStack_160;
    _CMTimeRangeMake(&uStack_3c0,&uStack_130,&uStack_1c0);
    _objc_release(uVar3);
    uStack_388 = uStack_3b8;
    uStack_390 = uStack_3c0;
    uStack_378 = uStack_3a8;
    uStack_380 = uStack_3b0;
    uStack_368 = uStack_398;
    uStack_370 = uStack_3a0;
    _objc_release(uVar11);
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = 0;
    _objc_release(uVar2);
  }
  puVar10 = PTR_PTR_1126c4480;
  _objc_alloc(PTR_PTR_1126c4480);
  uStack_b8 = uStack_358;
  uStack_c0 = uStack_360;
  uStack_a8 = uStack_348;
  uStack_b0 = uStack_350;
  uStack_98 = uStack_338;
  uStack_a0 = uStack_340;
  uStack_128 = uStack_388;
  uStack_130 = uStack_390;
  uStack_118 = uStack_378;
  uStack_120 = uStack_380;
  uStack_108 = uStack_368;
  uStack_110 = uStack_370;
  func_0x00010c029e20((float)dVar13);
  _objc_release(uVar6);
  __Block_object_dispose(&uStack_300,8);
  _objc_release(uStack_2d8);
  __Block_object_dispose(&uStack_2d0,8);
  _objc_release(uStack_2a8);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105d56698; end: 105d566af;  */

void FUN_105d56698(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d566b0; end: 105d56723;  */

void FUN_105d566b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d56724; end: 105d56a0f; -[SCPreviewFeatureCreativeToolsDurationImpl thumbnailFuturesForVideoAsset:thumbnailCount:mediaTimeRange:thumbnailOverrides:thumbnailOverrideTimeRanges:] */

void FUN_105d56724(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(param_7 + 0x20);
  dVar9 = *(double *)(param_7 + 0x18);
  uStack_80 = *(undefined8 *)(param_7 + 0x28);
  dStack_90 = dVar9;
  _CMTimeGetSeconds(&dStack_90);
  if (0 < (long)param_6) {
    uVar8 = 0;
    param_2 = (double)(long)param_6;
    dVar10 = dVar9 / param_2;
    do {
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      dVar9 = dVar10 * (double)uVar8;
      _CMTimeMakeWithSeconds(&dStack_90,dVar9,0x78);
      func_0x00010c297200(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar4);
      uVar8 = uVar8 + 1;
    } while (param_6 != uVar8);
  }
  lVar2 = param_3 + 0x28;
  _objc_loadWeakRetained();
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010bf30e80();
  if (lVar3 == 3) {
    _objc_release(lVar2);
    _objc_release(lVar2);
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf30e80();
    _objc_release(lVar2);
    _objc_release(lVar2);
    if (lVar3 != 4) {
      puVar6 = *(undefined **)(param_3 + 0x20);
      func_0x00010c269d40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c0d25e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c26dba0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d569b8;
    }
  }
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x000107fb2238();
  _objc_release(puVar4);
  puVar6 = PTR_PTR_1126c4268;
  func_0x00010aefb480(PTR_PTR_1126c4268);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010aefb4f8();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010aefb53c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(dVar9,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010aefb608(puVar6,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010aefb718(puVar6,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010aefb75c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = *(undefined **)(param_3 + 0x98);
  func_0x00010c269d40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010aefb4a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bfc05a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
LAB_105d569b8:
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105d56a10; end: 105d56acb; -[SCPreviewFeatureCreativeToolsDurationImpl _newUpdateHandlerWithTool:] */

undefined * FUN_105d56a10(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *unaff_x21;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf8b1a0();
  puVar1 = PTR_DAT_1126a51c0;
  if (lVar2 == 1) {
    unaff_x21 = PTR_PTR_1126c4490;
    _objc_alloc_init(PTR_PTR_1126c4490);
  }
  else if (lVar2 == 0) {
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    lVar2 = param_3;
    if ((int)lVar3 == 0) {
      lVar2 = 0;
    }
    _objc_retain(lVar2);
    _objc_release(param_3);
    unaff_x21 = PTR_PTR_1126c4488;
    _objc_alloc(PTR_PTR_1126c4488);
    func_0x00010bffc540();
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return unaff_x21;
}



/* Entry: 105d56acc; end: 105d56c63; -[SCPreviewFeatureCreativeToolsDurationImpl _clipEditingSegmentIndex] */

undefined8 FUN_105d56acc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  if (lVar2 == 3) {
    _objc_release(lVar1);
    _objc_release(lVar1);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf30e80();
    _objc_release(lVar1);
    _objc_release(lVar1);
    if (lVar2 != 4) {
      return 0x7fffffffffffffff;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c240640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5e3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0x7fffffffffffffff;
  func_0x00010c0be120(uVar5);
  uVar6 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar5);
  return uVar6;
}



/* Entry: 105d56c64; end: 105d56c87;  */

void FUN_105d56c64(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x7fffffffffffffff;
  return;
}



/* Entry: 105d56c88; end: 105d56c9f; -[SCPreviewFeatureCreativeToolsDurationImpl delegate] */

void FUN_105d56c88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d56ca0; end: 105d56cab; -[SCPreviewFeatureCreativeToolsDurationImpl setDelegate:] */

void FUN_105d56ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 105d56cac; end: 105d56cb3; -[SCPreviewFeatureCreativeToolsDurationImpl isEditing] */

undefined1 FUN_105d56cac(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}



/* Entry: 105d56cb4; end: 105d56cbb; -[SCPreviewFeatureCreativeToolsDurationImpl isTouchControlGestureInProgress] */

undefined1 FUN_105d56cb4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb9);
}



/* Entry: 105d56cbc; end: 105d56ddb; -[SCPreviewFeatureCreativeToolsDurationImpl .cxx_destruct] */

void FUN_105d56cbc(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105d56ddc; end: 105d56ef3; -[SCPreviewFeatureCreativeToolsDurationServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d56ddc(long param_1)

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
  puVar2 = PTR_PTR_1126c44a8;
  _objc_alloc(PTR_PTR_1126c44a8);
  func_0x00010c006880();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112735554);
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



/* Entry: 105d56ef4; end: 105d5725b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d56ef4(long param_1)

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
  undefined *puVar28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar28 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1 + _DAT_112735520;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar28 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar28);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain();
    _objc_release(uVar2);
    puVar28 = PTR_PTR_1126c44a0;
    _objc_alloc();
    lVar4 = param_1 + _DAT_112735534;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112735540;
    _objc_loadWeakRetained();
    lVar7 = param_1 + _DAT_112735530;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c2647e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_11273552c;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_112735528;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010beffa20();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_11273553c;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c068880();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_112735548;
    _objc_loadWeakRetained();
    lVar16 = param_1 + _DAT_112735524;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c0b82c0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_112735538;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c29b9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_112735544;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c29b6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_112735550;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c29a9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_1 + _DAT_11273553c;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010c08ae00();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1 + _DAT_11273554c;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010c26c8e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060f80(puVar28);
    _objc_release(uVar1);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return;
}



/* Entry: 105d5725c; end: 105d57327; -[SCPreviewFeatureCreativeToolsDurationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5725c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735554,0);
  _objc_destroyWeak(param_1 + _DAT_112735550);
  _objc_destroyWeak(param_1 + _DAT_11273554c);
  _objc_destroyWeak(param_1 + _DAT_112735548);
  _objc_destroyWeak(param_1 + _DAT_112735544);
  _objc_destroyWeak(param_1 + _DAT_112735540);
  _objc_destroyWeak(param_1 + _DAT_11273553c);
  _objc_destroyWeak(param_1 + _DAT_112735538);
  _objc_destroyWeak(param_1 + _DAT_112735534);
  _objc_destroyWeak(param_1 + _DAT_112735530);
  _objc_destroyWeak(param_1 + _DAT_11273552c);
  _objc_destroyWeak(param_1 + _DAT_112735528);
  _objc_destroyWeak(param_1 + _DAT_112735524);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735520);
  return;
}



/* Entry: 105d57328; end: 105d573d3; -[SCPreviewFeatureCreativeToolsDurationServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d57328(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735558;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11273555c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf5af00(lVar2);
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



/* Entry: 105d573d4; end: 105d5740b; -[SCPreviewFeatureCreativeToolsDurationServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d573d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273555c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735558);
  return;
}



/* Entry: 105d5740c; end: 105d57543; -[SCPreviewFeatureCreativeToolsMenuImpl initWithVideoPlaybackFeature:previewConfiguration:galleryConfigurationProvider:blizzardServices:creativeExpressionsManager:] */

undefined1 *
FUN_105d5740c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ed008;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126ec0();
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d57544; end: 105d5754b; -[SCPreviewFeatureCreativeToolsMenuImpl responderChainPriority] */

undefined8 FUN_105d57544(void)

{
  return 0x7fffffff;
}



/* Entry: 105d5754c; end: 105d575af; -[SCPreviewFeatureCreativeToolsMenuImpl dealloc] */

void FUN_105d5754c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282180();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ed008;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105d575b0; end: 105d575bb; -[SCPreviewFeatureCreativeToolsMenuImpl presentMenuFromSourceView:withActions:completion:] */

void FUN_105d575b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentMenuFromSourceView_withAc_112620e48,param_3,param_4,0,param_5);
  return;
}



/* Entry: 105d575bc; end: 105d5777f; -[SCPreviewFeatureCreativeToolsMenuImpl presentMenuFromSourceView:withActions:presenter:completion:] */

void FUN_105d575bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2d6a0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6160();
    _objc_release(uVar3);
    if (*(long *)(param_1 + 0x48) == 0) {
      func_0x00010be7c740(param_1);
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010bf82f60(uVar3);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d57780; end: 105d577b7;  */

void FUN_105d57780(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d577b8; end: 105d5786f; -[SCPreviewFeatureCreativeToolsMenuImpl isMenuSupported] */

ulong FUN_105d577b8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  _objc_release(lVar1);
  if (lVar2 - 3U < 2 || lVar2 == 1) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06e820();
    _objc_release(lVar1);
    _objc_release(param_1);
    uVar3 = (ulong)((uint)lVar2 ^ 1);
  }
  else if (lVar2 == 0) {
    uVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(uVar4);
    uVar3 = uVar4;
    func_0x00010c083340();
    _objc_release(uVar4);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 105d57870; end: 105d5787b; -[SCPreviewFeatureCreativeToolsMenuImpl dismissMenu] */

void FUN_105d57870(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be025b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissAndResumePlayback_resetS_11255e308,1,1);
  return;
}



/* Entry: 105d5787c; end: 105d579c3; -[SCPreviewFeatureCreativeToolsMenuImpl displayHintAnchoredOnView:completion:] */

void FUN_105d5787c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x70) == 0) {
    func_0x00010bdee7e0(param_1);
  }
  func_0x00010beae180(param_1);
  func_0x00010bdcadc0(param_1);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c150360(0x4008000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
  _objc_release(uVar2);
  if (param_4 != 0) {
    func_0x00010beb4b40(param_1);
    (**(code **)(param_4 + 0x10))(param_4,param_1);
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d579c4; end: 105d579f3;  */

void FUN_105d579c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe2340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d579f4; end: 105d57acb; -[SCPreviewFeatureCreativeToolsMenuImpl hideMenuHintWithCompletion:] */

void FUN_105d579f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010c1677c0(0x3fe3333333333333);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105d57acc;
    puStack_40 = &UNK_110842e18;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105d57adc;
    puStack_70 = &UNK_110858070;
    lStack_68 = param_1;
    lStack_38 = param_1;
    _objc_retain(param_3);
    uStack_60 = param_3;
    func_0x00010bf03420(0x3fc99999a0000000,puVar1,param_2,&puStack_58,&puStack_88);
    _objc_release(uStack_60);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d57acc; end: 105d57adb;  */

void FUN_105d57acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d57adc; end: 105d57b1b;  */

void FUN_105d57adc(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105d57b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105d57b1c; end: 105d57b7f; -[SCPreviewFeatureCreativeToolsMenuImpl touchControlGestureDidBeginForTouchTarget:] */

void FUN_105d57b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x50) != '\x01') {
    return;
  }
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
  if ((int)param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be025b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__dismissAndResumePlayback_resetS_11255e308,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf83db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissMenu_1125be910);
  return;
}



/* Entry: 105d57b80; end: 105d57c07; -[SCPreviewFeatureCreativeToolsMenuImpl touchControlGestureDidEndForTouchTarget:trashContainsGesture:] */

void FUN_105d57b80(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
  if ((int)uVar2 != 0) {
    if (param_4 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      lVar1 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c10d0a0(param_1,param_2,param_3,uVar2,lVar1,0);
      _objc_release(lVar1);
    }
    else {
      func_0x00010bf83da0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d57c08; end: 105d57c57; -[SCPreviewFeatureCreativeToolsMenuImpl configureWithView:] */

void FUN_105d57c08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a51e8);
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    _objc_storeWeak(param_1 + 8,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d57c58; end: 105d57ed7; -[SCPreviewFeatureCreativeToolsMenuImpl _presentMenuFromSourceView:withActions:presenter:completion:] */

void FUN_105d57c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_9);
  func_0x00010bfe2340(param_5);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + 0x38);
  *(undefined8 *)(param_5 + 0x38) = param_7;
  _objc_release(uVar1);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_5 + 0x58);
  *(undefined8 *)(param_5 + 0x58) = param_8;
  _objc_release(uVar1);
  _objc_storeWeak(param_5 + 0x40,param_9);
  _objc_release(param_9);
  uVar6 = 0xc2000000;
  uVar1 = param_8;
  func_0x00010c0b8600(param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c44b0;
  _objc_alloc();
  func_0x00010bff0b00();
  uVar5 = *(undefined8 *)(param_5 + 0x48);
  *(undefined **)(param_5 + 0x48) = puVar2;
  _objc_release(uVar5);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x48));
  if (param_9 == 0) {
    uVar5 = *(undefined8 *)(param_5 + 0x48);
    lVar4 = param_5 + 8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c10c760(uVar5);
  }
  else {
    lVar4 = param_5 + 0x40;
    _objc_loadWeakRetained(lVar4);
    lVar3 = param_5 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c124500(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar4 = param_5 + 0x40;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c141be0();
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_5 + 0x48);
    lVar4 = param_5 + 8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c10c780(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),uVar6,param_2,
                        param_3,param_4,uVar5);
  }
  _objc_release(param_10);
  _objc_release(lVar4);
  *(undefined1 *)(param_5 + 0x50) = 1;
  func_0x00010be52100(param_5);
  uVar5 = *(undefined8 *)(param_5 + 0x48);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105d57ed8; end: 105d57ee3;  */

void FUN_105d57ed8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf5e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__creativeToolsMenuActionToPopove_11255b140,
             param_2);
  return;
}



/* Entry: 105d57ee4; end: 105d57fdf; -[SCPreviewFeatureCreativeToolsMenuImpl _dismissAndResumePlayback:resetSourceView:] */

void FUN_105d57ee4(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010be520c0();
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf82f60(uVar1);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dae0();
    _objc_release(uVar1);
  }
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar1);
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105d57fe0; end: 105d57ffb;  */

void FUN_105d57fe0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  *(undefined1 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105d57ffc; end: 105d58027; -[SCPreviewFeatureCreativeToolsMenuImpl willExecuteAction:] */

void FUN_105d57ffc(undefined8 param_1)

{
  func_0x00010be520e0();
                    /* WARNING: Could not recover jumptable at 0x00010be025b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissAndResumePlayback_resetS_11255e308,0,1);
  return;
}



/* Entry: 105d58028; end: 105d5802b; -[SCPreviewFeatureCreativeToolsMenuImpl didExecuteAction:] */

void FUN_105d58028(void)

{
  return;
}



/* Entry: 105d5802c; end: 105d58057; -[SCPreviewFeatureCreativeToolsMenuImpl didTapPreviewContainerView:] */

undefined8 FUN_105d5802c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010bf83da0();
    return 0;
  }
  return 1;
}



/* Entry: 105d58058; end: 105d5806b; -[SCPreviewFeatureCreativeToolsMenuImpl didProcessTapInPreviewContainerView:] */

void FUN_105d58058(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf83db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissMenu_1125be910);
    return;
  }
  return;
}



/* Entry: 105d5806c; end: 105d58073; -[SCPreviewFeatureCreativeToolsMenuImpl featureType] */

undefined8 FUN_105d5806c(void)

{
  return 2;
}



/* Entry: 105d58074; end: 105d581d7; -[SCPreviewFeatureCreativeToolsMenuImpl _creativeToolsMenuActionToPopoverMenuAction:] */

void FUN_105d58074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126c44b8;
  _objc_alloc(PTR_PTR_1126c44b8);
  uVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c053100(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d581d8; end: 105d5825f;  */

void FUN_105d581d8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf440c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c232ba0();
  if (iVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dae0();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105d58260; end: 105d58333; -[SCPreviewFeatureCreativeToolsMenuImpl _createHintLabel] */

void FUN_105d58260(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x70));
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c21ad00(uVar3);
  func_0x000108cd478c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x70));
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0x70));
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_setUserInteractionEnabled__112665468,0);
  return;
}



/* Entry: 105d58334; end: 105d583cb; -[SCPreviewFeatureCreativeToolsMenuImpl _shouldOverrideShowMenuHint] */

uint FUN_105d58334(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar1 = param_1;
  func_0x00010c077bc0();
  if ((int)lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0811c0();
    _objc_release(lVar1);
    uVar3 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010c07e920();
    if ((uVar4 & 1) == 0) {
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c07e880();
      uVar5 = (uint)lVar1;
      _objc_release(param_1);
    }
    else {
      uVar5 = 1;
    }
    _objc_release(uVar3);
    uVar5 = (uint)lVar2 | uVar5;
  }
  return uVar5 & 1;
}



/* Entry: 105d583cc; end: 105d58443; -[SCPreviewFeatureCreativeToolsMenuImpl _animateInMenuHint] */

void FUN_105d583cc(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x70));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105d58444;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03400(0x3fc99999a0000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  return;
}



/* Entry: 105d58444; end: 105d58457;  */

void FUN_105d58444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe3333333333333,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d58458; end: 105d586cf; -[SCPreviewFeatureCreativeToolsMenuImpl _setupMenuHintAnchoredOnView:] */

void FUN_105d58458(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  func_0x00010bf20c00(param_7);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf51460(param_1,param_2,param_3,param_4,param_7,param_6,lVar1);
  _objc_release(param_7);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_5 + 0x70);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010befbb60();
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_6,
                        *(undefined8 *)(param_5 + 0x78));
  }
  uVar2 = *(undefined8 *)(param_5 + 0x70);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  dVar14 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  uVar13 = uVar2;
  func_0x00010bf493c0(dVar14 + -5.0,uVar2,param_6,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + 0x70);
  uStack_98 = uVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5 + 8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  uVar7 = uVar4;
  func_0x00010bf493c0(uVar4,param_6,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_98,2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_5 + 0x78);
  *(undefined **)(param_5 + 0x78) = puVar8;
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(uVar2);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_6,
                      *(undefined8 *)(param_5 + 0x78));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = puVar8;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar8 + 0x60);
  *(undefined **)(puVar8 + 0x60) = puVar9;
  _objc_release(uVar13);
  _CACurrentMediaTime();
  *(double *)(puVar8 + 0x68) = param_1;
  puVar9 = puVar8 + 0x30;
  _objc_loadWeakRetained();
  puVar10 = puVar9;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  if (puVar11 != (undefined *)0x0) {
    puVar9 = PTR_PTR_1126c44c0;
    _objc_opt_new(PTR_PTR_1126c44c0);
    func_0x00010c1db720();
    func_0x00010c1db7c0(puVar9,param_6,9);
    func_0x00010c206fa0(puVar9,param_6,5);
    puVar8 = puVar8 + 0x10;
    _objc_loadWeakRetained();
    puVar10 = puVar8;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar10;
    func_0x00010c08fa60();
    if (puVar8 != (undefined *)0x0) {
      func_0x00010c179280(puVar9,param_6,puVar10);
    }
    func_0x00010c0b2e60(puVar11,param_6,puVar9);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 105d586d0; end: 105d587e3; -[SCPreviewFeatureCreativeToolsMenuImpl _logCreativeToolsPickerOpen] */

void FUN_105d586d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(long *)(param_2 + 0x60) = lVar1;
  _objc_release(uVar5);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x68) = param_1;
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126c44c0;
    _objc_opt_new(PTR_PTR_1126c44c0);
    func_0x00010c1db720();
    func_0x00010c1db7c0(puVar4,param_3,9);
    func_0x00010c206fa0(puVar4,param_3,5);
    param_2 = param_2 + 0x10;
    _objc_loadWeakRetained();
    lVar1 = param_2;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c179280(puVar4,param_3,lVar1);
    }
    func_0x00010c0b2e60(lVar3,param_3,puVar4);
    _objc_release(lVar1);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105d587e4; end: 105d58917; -[SCPreviewFeatureCreativeToolsMenuImpl _logCreativeToolsPickerClose] */

void FUN_105d587e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126c44c8;
      _objc_opt_new(PTR_PTR_1126c44c8);
      func_0x00010c1db720();
      func_0x00010c1db7c0(puVar4,param_2,9);
      func_0x00010c206fa0(puVar4,param_2,5);
      lVar3 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar1 = lVar3;
      func_0x00010bf311e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar1;
      func_0x00010c08fa60();
      if (lVar3 != 0) {
        func_0x00010c179280(puVar4,param_2,lVar1);
      }
      dVar6 = *(double *)(param_1 + 0x68);
      if (0.0 < dVar6) {
        _CACurrentMediaTime();
        func_0x00010c222d40(dVar6 - *(double *)(param_1 + 0x68),puVar4);
      }
      func_0x00010c0b2e60(lVar2,param_2,puVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
      _objc_release(uVar5);
      *(undefined8 *)(param_1 + 0x68) = 0;
      _objc_release(lVar1);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105d58918; end: 105d58bbf; -[SCPreviewFeatureCreativeToolsMenuImpl _logCreativeToolsPickerItemPickForAction:] */

void FUN_105d58918(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126bac00;
      _objc_opt_new();
      func_0x00010c1db720();
      func_0x00010c1db7c0(puVar4);
      func_0x00010c206fa0(puVar4);
      lVar3 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar1 = lVar3;
      func_0x00010bf311e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar1;
      func_0x00010c08fa60();
      if (lVar3 != 0) {
        func_0x00010c179280(puVar4);
      }
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained();
      lVar5 = param_1;
      func_0x00010010fab4();
      lVar3 = param_1;
      if ((int)lVar5 == 0) {
        lVar3 = 0;
      }
      _objc_retain(lVar3);
      _objc_release(param_1);
      lVar5 = lVar3;
      func_0x00010bf5b000(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_retain(puVar4);
      _objc_retain(puVar4);
      func_0x00010c0bce80(lVar5);
      uVar6 = param_3;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x000108cd47a4();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c071ae0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      if ((int)uVar8 == 0) {
        uVar6 = param_3;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x000108cd47bc();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010c071ae0();
        _objc_release(uVar7);
        _objc_release(uVar6);
        if ((int)uVar8 != 0) {
          func_0x00010c2269c0(puVar4);
        }
      }
      else {
        func_0x00010c227020(puVar4);
      }
      func_0x00010c0b2e60(lVar2);
      _objc_release(puVar4);
      _objc_release(puVar4);
      _objc_release(lVar5);
      _objc_release(lVar1);
      _objc_release(puVar4);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d58bc0; end: 105d58bcb;  */

void FUN_105d58bc0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c178870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setCaptionStyle__11263bc38,param_2);
  return;
}



/* Entry: 105d58bcc; end: 105d58c2f;  */

void FUN_105d58bcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bac08;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c20baa0();
  _objc_release(param_2);
  func_0x00010c1b5fe0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d58c30; end: 105d58c47; -[SCPreviewFeatureCreativeToolsMenuImpl delegate] */

void FUN_105d58c30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d58c48; end: 105d58c53; -[SCPreviewFeatureCreativeToolsMenuImpl setDelegate:] */

void FUN_105d58c48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 105d58c54; end: 105d58d07; -[SCPreviewFeatureCreativeToolsMenuImpl .cxx_destruct] */

void FUN_105d58c54(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105d58d08; end: 105d58f1b; -[SCPreviewFeatureCreativeToolsMenuServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d58d08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127355a4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar7;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127355a8;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar7;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127355ac;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar7;
  func_0x00010c0b82c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127355b0;
    _objc_loadWeakRetained();
  }
  puVar4 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105d58f1c;
  puStack_78 = &UNK_1108e6fd8;
  _objc_retain(lVar2);
  lStack_70 = lVar2;
  _objc_retain(lVar1);
  lStack_68 = lVar1;
  _objc_retain(lVar7);
  lStack_60 = lVar7;
  _objc_retain(lVar3);
  lStack_58 = lVar3;
  func_0x00010bf11fe0(puVar4,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c44d8;
  _objc_alloc(PTR_PTR_1126c44d8);
  func_0x00010c0068a0();
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127355b4);
  }
  func_0x00010bf9d660(uVar6,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lStack_58);
  _objc_release(lStack_60);
  _objc_release(lStack_68);
  _objc_release(lStack_70);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105d58f1c; end: 105d58fb7;  */

void FUN_105d58f1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126c44d0;
  _objc_alloc(PTR_PTR_1126c44d0);
  puVar3 = PTR_DAT_1126a51f8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar5 = uVar2;
  func_0x00010010fab4(uVar2,puVar3);
  uVar1 = uVar2;
  if ((int)uVar5 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c061000(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d58fb8; end: 105d59017; -[SCPreviewFeatureCreativeToolsMenuServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d58fb8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127355b4,0);
  _objc_destroyWeak(param_1 + _DAT_1127355b0);
  _objc_destroyWeak(param_1 + _DAT_1127355ac);
  _objc_destroyWeak(param_1 + _DAT_1127355a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127355a4);
  return;
}



/* Entry: 105d59018; end: 105d590c3; -[SCPreviewFeatureCreativeToolsMenuServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d59018(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127355b8;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127355c0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf5afe0(lVar2);
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



/* Entry: 105d590c4; end: 105d59107; -[SCPreviewFeatureCreativeToolsMenuServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d590c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127355c0);
  _objc_destroyWeak(param_1 + _DAT_1127355bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127355b8);
  return;
}



/* Entry: 105d59108; end: 105d5918f; -[SCPopover init] */

undefined1 * FUN_105d59108(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed010;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bdec5e0(puVar1);
    func_0x00010bdebd80(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105d59190; end: 105d591a3; -[SCPopover presentInView:fromSourceView:completion:] */

void FUN_105d59190(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_1,
             PTR_s_presentInView_insetBy_fromSource_112620c08);
  return;
}



/* Entry: 105d591a4; end: 105d5928f; -[SCPopover presentInView:insetBy:fromSourceView:completion:] */

void FUN_105d591a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  uVar2 = param_2;
  uVar3 = param_3;
  uVar4 = param_4;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bf20c00(param_8);
  func_0x00010bf51460(param_8,param_6,param_7);
  _objc_release(param_8);
  func_0x00010c10c780(param_1,param_2,param_3,param_4,uVar1,uVar2,uVar3,uVar4,param_5,param_6,
                      param_7,param_9);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105d59290; end: 105d593ef; -[SCPopover presentInView:insetBy:fromSourceRect:rotatedBy:completion:] */

void FUN_105d59290(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  double dVar1;
  undefined8 in_stack_00000000;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  dVar1 = param_1;
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010bf01b40(*(undefined8 *)(param_9 + 0x10));
  if (dVar1 == 1.0) {
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_105d593f0;
    puStack_d8 = &UNK_1108e7008;
    lStack_d0 = param_9;
    _objc_retain(param_11);
    uStack_78 = in_stack_00000000;
    uStack_c8 = param_11;
    dStack_b8 = param_1;
    uStack_b0 = param_2;
    uStack_a8 = param_3;
    uStack_a0 = param_4;
    uStack_98 = param_5;
    uStack_90 = param_6;
    uStack_88 = param_7;
    uStack_80 = param_8;
    _objc_retain(param_12);
    uStack_c0 = param_12;
    func_0x00010bf82f60(param_9,param_10,&puStack_f0);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
  }
  else {
    func_0x00010be7be40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  return;
}



/* Entry: 105d593f0; end: 105d5942f;  */

void FUN_105d593f0(long param_1,undefined8 param_2)

{
  func_0x00010be7be40(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105d59430; end: 105d594f3; -[SCPopover dismiss:] */

void FUN_105d59430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105d594b4;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bdcaea0(param_1,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105d594f4; end: 105d5955b; -[SCPopover setBackgroundColor:] */

void FUN_105d594f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c16e440(uVar2,param_2,param_3);
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d5955c; end: 105d59593; -[SCPopover view] */

void FUN_105d5955c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    func_0x00010bdf57c0();
    lVar1 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d59594; end: 105d595bb; -[SCPopover backgroundColor] */

void FUN_105d59594(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d595bc; end: 105d59793; -[SCPopover _presentInView:insetBy:fromSourceRect:rotatedBy:completion:] */

void FUN_105d595bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [64];
  
  _objc_retain(param_12);
  uVar2 = *(undefined8 *)(param_9 + 0x10);
  _objc_retain(param_11);
  func_0x00010c12c960(uVar2);
  lVar1 = param_9;
  func_0x00010c29bf00(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar1);
  func_0x00010be5bb80(param_1,param_2,param_3,param_4,param_9,param_10,param_11);
  func_0x00010be5c340(param_5,param_6,param_7,param_8,param_9);
  FUN_105d5b460(auStack_b0);
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010be5bf80(param_1,param_2,param_3,param_4,param_9,param_10,auStack_b0);
  func_0x00010be5b7a0(param_1,param_2,param_3,param_4,uVar2,uVar3,param_9);
  func_0x00010c19f0e0(*(undefined8 *)(param_9 + 0x10));
  func_0x00010c1677c0(0,*(undefined8 *)(param_9 + 0x10));
  func_0x00010be92780(uVar2,uVar3,param_9);
  func_0x00010befbb60(param_11,param_10,*(undefined8 *)(param_9 + 0x10));
  _objc_release(param_11);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105d59794;
  puStack_c0 = &UNK_110849530;
  uStack_b8 = param_12;
  _objc_retain(param_12);
  func_0x00010bdcad80(param_9,param_10,&puStack_d8);
  _objc_release(uStack_b8);
  _objc_release(param_12);
  return;
}



/* Entry: 105d59794; end: 105d597a7;  */

void FUN_105d59794(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105d597a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105d597a8; end: 105d598ef; -[SCPopover _animateIn:] */

void FUN_105d597a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  func_0x00010c2559c0(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d598f0;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010c00ea00(0x3fb999999999999a);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_70,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_3);
  func_0x00010bef78c0(uVar2);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  return;
}


