/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d30550; end: 105d3067b; -[SCPreviewFeatureBatchCaptureImpl _onDeleteSegmentAtIndex:] */

void FUN_105d30550(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar2 = param_1;
  func_0x00010bf16b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c4280;
  _objc_opt_class(PTR_PTR_1126c4280);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf0b7e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0899c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f0c0(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c120480(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0899c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f0c0(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d3067c; end: 105d306b7; -[SCPreviewFeatureBatchCaptureImpl didTapPreviewContainerView:] */

uint FUN_105d3067c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf16da0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf6e8a0();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105d306b8; end: 105d306f7; -[SCPreviewFeatureBatchCaptureImpl _batchCaptureConfiguration] */

void FUN_105d306b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d306f8; end: 105d3073b; -[SCPreviewFeatureBatchCaptureImpl _batchCaptureSegments] */

void FUN_105d306f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdd2cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d3073c; end: 105d30783; -[SCPreviewFeatureBatchCaptureImpl _editingSegment] */

void FUN_105d3073c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be3fdc0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010bf8c7e0(uVar2);
    func_0x00010bf16b60(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d30784; end: 105d307a7; -[SCPreviewFeatureBatchCaptureImpl _isEditingSegment] */

bool FUN_105d30784(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x168);
  func_0x00010bf8c7e0(lVar1);
  return lVar1 != 0x7fffffffffffffff;
}



/* Entry: 105d307a8; end: 105d3081b; -[SCPreviewFeatureBatchCaptureImpl _outputOverlaySize] */

undefined1  [16]
FUN_105d307a8(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  param_5 = param_5 + 0x18;
  _objc_loadWeakRetained(param_5);
  func_0x00010bf4cf40();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  _objc_release(param_5);
  auVar2._8_8_ = param_4 * param_1;
  auVar2._0_8_ = param_3 * param_1;
  return auVar2;
}



/* Entry: 105d3081c; end: 105d30963; -[SCPreviewFeatureBatchCaptureImpl _updateCurrentSegmentThumbnails] */

void FUN_105d3081c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x168);
  func_0x00010bf8c7e0();
  if (uVar1 < 0x7fffffffffffffff) {
    lVar2 = *(long *)(param_1 + 0x168);
    func_0x00010bf8c820();
    if (-1 < lVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x168);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(uVar5);
      func_0x00010bdd2d00(param_1);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(uVar5);
    }
  }
  return;
}



/* Entry: 105d30964; end: 105d30a63;  */

void FUN_105d30964(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x168);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfecde0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0x7fffffffffffffff) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105d30a64;
      puStack_60 = &UNK_110844b80;
      lStack_58 = param_1;
      _objc_retain(param_2);
      uStack_50 = param_2;
      lStack_48 = lVar3;
      func_0x000100162d98("APPSTORE",&puStack_78);
      _objc_release(uStack_50);
    }
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 105d30a64; end: 105d30a77;  */

void FUN_105d30a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2855f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x168),
             PTR_s_updateEditedThumbnails_forSegmen_11267efa0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105d30a78; end: 105d30b47; -[SCPreviewFeatureBatchCaptureImpl _didDeleteSegmentAtIndexPath:] */

void FUN_105d30a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  _objc_retain(param_3);
  func_0x00010bf46560(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5b00();
  _objc_release(uVar3);
  func_0x00010bedee20(param_1);
  lVar1 = param_1 + 0x160;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa1a80();
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdd2d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  param_1 = param_1 + 0x160;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa19a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d30b48; end: 105d30c47; -[SCPreviewFeatureBatchCaptureImpl _showTryonFailTooltipIfNeededForSegmentIndex:] */

void FUN_105d30b48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010c12ebc0(*(undefined8 *)(param_1 + 0x168));
  if (param_3 < 0x7fffffffffffffff) {
    uVar1 = param_1;
    func_0x00010bdd2d60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c14da60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x00010c27cde0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0819c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if ((uVar3 != 0) && (uVar1 = uVar3, func_0x00010bf1f3c0(), (uVar1 & 1) == 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x168);
        func_0x000108cebd70();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23a8e0(uVar4,param_2,param_3,uVar1);
        _objc_release(uVar1);
      }
      _objc_release(uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105d30c48; end: 105d30d9b; -[SCPreviewFeatureBatchCaptureImpl _updateSaveButtonState] */

void FUN_105d30c48(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = param_1;
  func_0x00010be07020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108e00d3c();
  if (uVar1 == 0) {
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + 0x168);
    func_0x00010bf46560(lVar5);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar3 == 0) {
      func_0x00010c282500();
    }
    else {
      func_0x00010c07d080();
    }
    lVar6 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5b00();
    _objc_release(lVar7);
    goto LAB_105d30d74;
  }
  if ((int)uVar3 == 0) {
    _objc_release(uVar2);
LAB_105d30d08:
    func_0x00010c07d080(uVar1);
    lVar5 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = param_1;
    func_0x00010be345a0(param_1,param_2,uVar1);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) goto LAB_105d30d08;
    lVar5 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1f5b00();
LAB_105d30d74:
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d30d9c; end: 105d30dfb; -[SCPreviewFeatureBatchCaptureImpl _hasSavedGallerySnapsForSegment:] */

bool FUN_105d30d9c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bfbcc20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf16cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 105d30dfc; end: 105d30e97; -[SCPreviewFeatureBatchCaptureImpl _getCurrentEditingState] */

void FUN_105d30dfc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010be3fdc0();
  if ((int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x168);
    func_0x00010bf8c7e0(uVar2);
    func_0x00010bf8c820(*(undefined8 *)(param_1 + 0x168));
    uVar3 = *(undefined8 *)(param_1 + 0x170);
    func_0x00010c0d2420(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d30e98; end: 105d30f2f; -[SCPreviewFeatureBatchCaptureImpl _editingStateForPlayingSegment] */

void FUN_105d30e98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5fa80();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c0d2420(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d30f30; end: 105d3105f; -[SCPreviewFeatureBatchCaptureImpl _updateFilterStackingToolButtonWithSnapState:] */

void FUN_105d30f30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) goto LAB_105d31048;
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c42b0;
  lVar1 = param_3;
  func_0x00010bfaee40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dee00(puVar4,param_2,lVar1);
  _objc_release(lVar1);
  if ((param_3 == 0) || (puVar4 < (undefined *)0x2)) {
    if (lVar3 != 0) {
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c2737a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc80();
      _objc_release(lVar1);
      goto LAB_105d31038;
    }
  }
  else {
    param_1 = param_1 + 0x160;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfa1b00();
LAB_105d31038:
    _objc_release(param_1);
  }
  _objc_release(lVar3);
LAB_105d31048:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d31060; end: 105d31167; -[SCPreviewFeatureBatchCaptureImpl _shouldShowTimerForVideo] */

undefined8 FUN_105d31060(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [24];
  double dStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010bdd2d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar2 != 1) {
    return 0;
  }
  func_0x00010bdd2d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126c4280;
  _objc_opt_class(PTR_PTR_1126c4280);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010c09e0e0(auStack_60,uVar2);
    uStack_78 = uStack_40;
    dStack_80 = dStack_48;
    uStack_70 = uStack_38;
    _CMTimeGetSeconds(&dStack_80);
    if (dStack_48 <= 10.0) {
      uVar5 = 1;
      goto LAB_105d31148;
    }
  }
  uVar5 = 0;
LAB_105d31148:
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 105d31168; end: 105d3135f; -[SCPreviewFeatureBatchCaptureImpl _toggleTimerToolButton] */

void FUN_105d31168(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0x168) == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010be07020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar1;
    func_0x00010c083320();
    if ((int)uVar7 == 0) {
      uVar7 = 1;
    }
    else {
      uVar7 = param_1;
      func_0x00010beb6720();
    }
  }
  uVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c42b8;
  _objc_opt_class(PTR_PTR_1126c42b8);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  if ((uVar2 == 0) || ((uVar7 & 1) != 0)) {
    if ((int)uVar7 != 0) {
      if (uVar1 == 0) goto LAB_105d312c0;
      if (uVar2 == 0) {
        uVar7 = *(ulong *)(param_1 + 0xb8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        func_0x00010bf599c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        func_0x00010bea8680(param_1);
        if (uVar2 != 0) {
          lVar8 = param_1 + 0x18;
          _objc_loadWeakRetained(lVar8);
          lVar9 = lVar8;
          func_0x00010c2737a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0669c0();
          goto LAB_105d31264;
        }
      }
      else {
        func_0x00010bea8680(param_1);
        uVar2 = uVar4;
      }
    }
  }
  else {
    lVar8 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc80();
    uVar2 = uVar4;
LAB_105d31264:
    _objc_release(lVar9);
    _objc_release(lVar8);
  }
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129080();
  _objc_release(uVar6);
LAB_105d312c0:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d31360; end: 105d31583; -[SCPreviewFeatureBatchCaptureImpl _setTimerButtonItem:forSegment:] */

void FUN_105d31360(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c083320();
  puVar5 = PTR_PTR_1126c4280;
  puVar3 = PTR_PTR_1126c4270;
  if ((int)uVar1 == 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar3);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    uVar1 = param_4;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    puVar5 = PTR_PTR_1126c42c0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar1 == 0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_58,param_4);
    }
    _CMTimeGetSeconds(&uStack_58);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084f00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214da0(param_3);
    _objc_release(puVar5);
    _objc_release(puVar3);
    func_0x00010c215da0(param_3);
  }
  else {
    _objc_retain(param_4);
    _objc_opt_class(puVar5);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar5);
    uVar1 = param_4;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    uVar4 = uVar1;
    func_0x00010c075780();
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf80f20();
      _objc_release(uVar2);
    }
    puVar3 = PTR_PTR_1126c42c0;
    func_0x00010c084f00(PTR_PTR_1126c42c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214da0(param_3);
    _objc_release(puVar3);
    func_0x00010c215da0(param_3);
    uVar1 = param_3;
    func_0x00010c26f400(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c075760();
    func_0x00010c1c8c60(param_3);
  }
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105d31584; end: 105d31723; -[SCPreviewFeatureBatchCaptureImpl _toggleAttachmentToolButton:] */

void FUN_105d31584(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((param_3 & 1) == 0) {
    if (lVar4 == 0) {
      return;
    }
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    param_1 = lVar2;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc80();
  }
  else {
    lVar2 = param_1;
    func_0x00010be1e3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar5 = *(long *)(param_1 + 200);
      func_0x00010c269d40(lVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s__toolbarButtonTapped__11252d108;
      lVar3 = lVar2;
      func_0x00010bf0d660(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010bf5a120(lVar5,param_2,param_1,puVar1,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar5);
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010c2737a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0669c0();
      _objc_release(lVar3);
    }
    else {
      param_1 = lVar2;
      func_0x00010bf0d660(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fadc0(lVar4,param_2,param_1 != 0);
    }
  }
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d31724; end: 105d31773; -[SCPreviewFeatureBatchCaptureImpl _toolbarButtonTapped:] */

void FUN_105d31724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1a20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d31774; end: 105d3177b; -[SCPreviewFeatureBatchCaptureImpl deleteAllSegments] */

void FUN_105d31774(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf9d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__deleteAllSegmentsWithDiscardMet_11255c0e8,0xffffffffffffffff);
  return;
}



/* Entry: 105d3177c; end: 105d317eb; -[SCPreviewFeatureBatchCaptureImpl _deleteAllSegmentsWithDiscardMethod:] */

void FUN_105d3177c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b5e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x160;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa19a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d317ec; end: 105d31877; -[SCPreviewFeatureBatchCaptureImpl shouldShowDiscardWarning] */

bool FUN_105d317ec(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = param_1;
  func_0x00010bdd2d60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (uVar3 < 2) {
    bVar1 = false;
  }
  else {
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c282500();
    bVar1 = lVar6 != 0;
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 105d31878; end: 105d31b87; -[SCPreviewFeatureBatchCaptureImpl showDiscardWarningWithPreviewExitType:] */

void FUN_105d31878(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **unaff_x27;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  func_0x00010c233620();
  if ((int)puVar3 != 0) {
    puVar3 = auStack_80;
    _objc_initWeak(puVar3,param_1);
    puVar4 = PTR_PTR_1126af180;
    func_0x00010b0af26c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 4;
    if (param_3 != 5) {
      uVar2 = 0xffffffffffffffff;
    }
    uVar1 = 2;
    if (param_3 != 1) {
      uVar1 = uVar2;
    }
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105d31b88;
    puStack_98 = &UNK_1108d37a0;
    unaff_x27 = &puStack_b0;
    _objc_copyWeak(auStack_90,auStack_80);
    uStack_88 = uVar1;
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar5 = puVar4;
    func_0x00010c160fc0(puVar4);
    puVar6 = PTR_PTR_1126af180;
    func_0x000108ede780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c160fc0(puVar6);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    puVar3 = param_1;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c282500();
    _objc_release(puVar3);
    _objc_release(param_1);
    puVar8 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x000108ede708();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar10 = puVar9;
    if ((long)puVar7 < 2) {
      func_0x000108ede6f0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar10;
    }
    else {
      func_0x000108ede6d8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar4;
    puStack_70 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar8);
    _objc_release(puVar11);
    if (1 < (long)puVar7) {
      _objc_release(puVar5);
    }
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_90);
    puVar3 = auStack_80;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 4);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained();
  if (puVar3 != (undefined1 *)0x0) {
    func_0x00010bdf9d20(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105d31b88; end: 105d31bc3;  */

void FUN_105d31b88(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdf9d20(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d31bc4; end: 105d31bd3;  */

void FUN_105d31bc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105d31bd4; end: 105d31beb; -[SCPreviewFeatureBatchCaptureImpl delegate] */

void FUN_105d31bd4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x160);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d31bec; end: 105d31bf7; -[SCPreviewFeatureBatchCaptureImpl setDelegate:] */

void FUN_105d31bec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x160,param_3);
  return;
}



/* Entry: 105d31bf8; end: 105d31bff; -[SCPreviewFeatureBatchCaptureImpl batchCaptureViewController] */

undefined8 FUN_105d31bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 105d31c00; end: 105d31c07; -[SCPreviewFeatureBatchCaptureImpl batchCaptureStateHandler] */

undefined8 FUN_105d31c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 105d31c08; end: 105d31c0f; -[SCPreviewFeatureBatchCaptureImpl savingConfiguration] */

undefined8 FUN_105d31c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 105d31c10; end: 105d31c17; -[SCPreviewFeatureBatchCaptureImpl galleryConfiguration] */

undefined8 FUN_105d31c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 105d31c18; end: 105d31c47; -[SCPreviewFeatureBatchCaptureImpl setGalleryConfiguration:] */

void FUN_105d31c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d31c48; end: 105d31e8b; -[SCPreviewFeatureBatchCaptureImpl .cxx_destruct] */

void FUN_105d31c48(long param_1)

{
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_destroyWeak(param_1 + 0x160);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
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
  _objc_storeStrong(param_1 + 0xc0,0);
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
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d31e8c; end: 105d3202b; -[SCPreviewFeatureBatchCaptureServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d31e8c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_112734e28;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = 1;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c42d0;
  _objc_alloc(PTR_PTR_1126c42d0);
  func_0x00010bff73e0();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112734eb4);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  return;
}



/* Entry: 105d3202c; end: 105d327cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d3202c(long param_1,undefined8 param_2)

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
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  undefined8 uVar68;
  undefined *puVar69;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x30) != '\x01')) {
    puVar69 = (undefined *)0x0;
  }
  else {
    puVar69 = PTR_PTR_1126c42c8;
    _objc_alloc();
    lVar2 = lVar1 + _DAT_112734e4c;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112734e84;
    _objc_loadWeakRetained();
    lVar5 = lVar1 + _DAT_112734e50;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + _DAT_112734e30;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1 + _DAT_112734e48;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar68 = *(undefined8 *)(param_1 + 0x20);
    lVar13 = lVar1 + _DAT_112734e54;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar1 + _DAT_112734e7c;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bf982e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar1 + _DAT_112734e38;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar1 + _DAT_112734ea8;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010bfbdac0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar1 + _DAT_112734e3c;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010c127e00();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar1 + _DAT_112734e94;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010bf69900();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar1 + _DAT_112734e34;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010bef1320();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar1 + _DAT_112734e40;
    _objc_loadWeakRetained();
    lVar29 = lVar1 + _DAT_112734e44;
    _objc_loadWeakRetained();
    lVar30 = lVar1 + _DAT_112734e88;
    _objc_loadWeakRetained();
    lVar31 = lVar1 + _DAT_112734e58;
    _objc_loadWeakRetained();
    lVar32 = lVar31;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar1 + _DAT_112734e8c;
    _objc_loadWeakRetained();
    lVar34 = lVar33;
    func_0x00010c243b20();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = lVar1 + _DAT_112734e8c;
    _objc_loadWeakRetained();
    lVar36 = lVar35;
    func_0x00010c243b00();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = lVar1 + _DAT_112734e5c;
    _objc_loadWeakRetained();
    lVar38 = lVar37;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = lVar1 + _DAT_112734e60;
    _objc_loadWeakRetained();
    lVar40 = lVar39;
    func_0x00010bf07a40();
    _objc_retainAutoreleasedReturnValue();
    lVar41 = lVar1 + _DAT_112734e64;
    _objc_loadWeakRetained();
    lVar42 = lVar41;
    func_0x00010c252540();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = lVar1 + _DAT_112734e68;
    _objc_loadWeakRetained();
    lVar44 = lVar43;
    func_0x00010c2705e0();
    _objc_retainAutoreleasedReturnValue();
    lVar45 = lVar1 + _DAT_112734e98;
    _objc_loadWeakRetained();
    lVar46 = lVar1 + _DAT_112734e2c;
    _objc_loadWeakRetained();
    lVar47 = lVar46;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = lVar1 + _DAT_112734e6c;
    _objc_loadWeakRetained();
    lVar49 = lVar48;
    func_0x00010c293d00();
    _objc_retainAutoreleasedReturnValue();
    lVar50 = lVar1 + _DAT_112734e70;
    _objc_loadWeakRetained();
    lVar51 = lVar50;
    func_0x00010c29f540();
    _objc_retainAutoreleasedReturnValue();
    lVar52 = lVar1 + _DAT_112734e74;
    _objc_loadWeakRetained();
    lVar53 = lVar52;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar54 = lVar1 + _DAT_112734e9c;
    _objc_loadWeakRetained();
    lVar55 = lVar54;
    func_0x00010c29b6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar56 = lVar1 + _DAT_112734ea0;
    _objc_loadWeakRetained();
    lVar57 = lVar1 + _DAT_112734e78;
    _objc_loadWeakRetained();
    lVar58 = lVar57;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    lVar59 = lVar1 + _DAT_112734e90;
    _objc_loadWeakRetained();
    lVar60 = lVar59;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    lVar61 = lVar1 + _DAT_112734ea4;
    _objc_loadWeakRetained();
    lVar62 = lVar61;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    lVar63 = lVar1 + _DAT_112734e80;
    _objc_loadWeakRetained();
    lVar64 = lVar1 + _DAT_112734eac;
    _objc_loadWeakRetained();
    lVar65 = lVar64;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    lVar66 = lVar1 + _DAT_112734eb0;
    _objc_loadWeakRetained();
    lVar67 = lVar66;
    func_0x00010c27d8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff5bc0(puVar69,param_2,lVar3,lVar4,lVar6,lVar8,lVar12,uVar68,lVar14,lVar16,lVar18,
                        lVar20,lVar22,lVar25,lVar27,lVar28,lVar29,lVar30,lVar32,lVar34,lVar36,lVar38
                        ,lVar40,lVar42,lVar44,lVar45,lVar47,lVar49,lVar51,lVar53,lVar55,lVar56,
                        lVar58,lVar60,lVar62,lVar63,lVar65,lVar67);
    _objc_release(lVar67);
    _objc_release(lVar66);
    _objc_release(lVar65);
    _objc_release(lVar64);
    _objc_release(lVar63);
    _objc_release(lVar62);
    _objc_release(lVar61);
    _objc_release(lVar60);
    _objc_release(lVar59);
    _objc_release(lVar58);
    _objc_release(lVar57);
    _objc_release(lVar56);
    _objc_release(lVar55);
    _objc_release(lVar54);
    _objc_release(lVar53);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar50);
    _objc_release(lVar49);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(lVar46);
    _objc_release(lVar45);
    _objc_release(lVar44);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
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
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar69);
  return;
}



/* Entry: 105d327cc; end: 105d3299f; -[SCPreviewFeatureBatchCaptureServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d327cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734eb4,0);
  _objc_destroyWeak(param_1 + _DAT_112734eb0);
  _objc_destroyWeak(param_1 + _DAT_112734eac);
  _objc_destroyWeak(param_1 + _DAT_112734ea8);
  _objc_destroyWeak(param_1 + _DAT_112734ea4);
  _objc_destroyWeak(param_1 + _DAT_112734ea0);
  _objc_destroyWeak(param_1 + _DAT_112734e9c);
  _objc_destroyWeak(param_1 + _DAT_112734e98);
  _objc_destroyWeak(param_1 + _DAT_112734e94);
  _objc_destroyWeak(param_1 + _DAT_112734e90);
  _objc_destroyWeak(param_1 + _DAT_112734e8c);
  _objc_destroyWeak(param_1 + _DAT_112734e88);
  _objc_destroyWeak(param_1 + _DAT_112734e84);
  _objc_destroyWeak(param_1 + _DAT_112734e80);
  _objc_destroyWeak(param_1 + _DAT_112734e7c);
  _objc_destroyWeak(param_1 + _DAT_112734e78);
  _objc_destroyWeak(param_1 + _DAT_112734e74);
  _objc_destroyWeak(param_1 + _DAT_112734e70);
  _objc_destroyWeak(param_1 + _DAT_112734e6c);
  _objc_destroyWeak(param_1 + _DAT_112734e68);
  _objc_destroyWeak(param_1 + _DAT_112734e64);
  _objc_destroyWeak(param_1 + _DAT_112734e60);
  _objc_destroyWeak(param_1 + _DAT_112734e5c);
  _objc_destroyWeak(param_1 + _DAT_112734e58);
  _objc_destroyWeak(param_1 + _DAT_112734e54);
  _objc_destroyWeak(param_1 + _DAT_112734e50);
  _objc_destroyWeak(param_1 + _DAT_112734e4c);
  _objc_destroyWeak(param_1 + _DAT_112734e48);
  _objc_destroyWeak(param_1 + _DAT_112734e44);
  _objc_destroyWeak(param_1 + _DAT_112734e40);
  _objc_destroyWeak(param_1 + _DAT_112734e3c);
  _objc_destroyWeak(param_1 + _DAT_112734e38);
  _objc_destroyWeak(param_1 + _DAT_112734e34);
  _objc_destroyWeak(param_1 + _DAT_112734e30);
  _objc_destroyWeak(param_1 + _DAT_112734e2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734e28);
  return;
}



/* Entry: 105d329a0; end: 105d32a4b; -[SCPreviewFeatureBatchCaptureServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d329a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734eb8;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734ec0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf16700(lVar2);
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



/* Entry: 105d32a4c; end: 105d32a8f; -[SCPreviewFeatureBatchCaptureServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d32a4c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734ec0);
  _objc_destroyWeak(param_1 + _DAT_112734ebc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734eb8);
  return;
}



/* Entry: 105d32a90; end: 105d32b4b; -[SCPreviewFeatureBounceImpl initWithConfiguration:videoPlayback:previewVideoProviderServices:] */

undefined1 *
FUN_105d32a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ecf78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d32b4c; end: 105d32b53; -[SCPreviewFeatureBounceImpl responderChainPriority] */

undefined8 FUN_105d32b4c(void)

{
  return 0x7fffffff;
}



/* Entry: 105d32b54; end: 105d32b5f; -[SCPreviewFeatureBounceImpl configureWithView:] */

void FUN_105d32b54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105d32b60; end: 105d32c33; -[SCPreviewFeatureBounceImpl isCurrentVideoBounceable] */

bool FUN_105d32b60(float param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c083340();
  if ((int)lVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar4 = param_2 + 8;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010c233c60();
    if ((uVar5 & 1) == 0) {
      lVar3 = param_2 + 8;
      _objc_loadWeakRetained();
      lVar6 = lVar3;
      func_0x00010c2485a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        param_2 = param_2 + 0x10;
        _objc_loadWeakRetained(param_2);
        func_0x00010c299220();
        bVar1 = 15.0 <= param_1;
        _objc_release(param_2);
      }
      else {
        bVar1 = false;
      }
      _objc_release(lVar6);
      _objc_release(lVar3);
    }
    else {
      bVar1 = false;
    }
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 105d32c34; end: 105d32d4b; -[SCPreviewFeatureBounceImpl startBounceAtSeconds:isPaused:] */

void FUN_105d32c34(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010010fab4(lVar3,PTR_DAT_1126a51c8);
  lVar1 = lVar3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  lVar2 = lVar1;
  func_0x00010c2634c0();
  if ((int)lVar2 != 0) {
    if (param_4 == 0) {
      lVar2 = param_2 + 0x10;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c13dae0();
      _objc_release(lVar2);
      func_0x00010c2634c0(lVar1);
      func_0x00010c2363c0(param_1,param_2);
    }
    else {
      func_0x00010c12b500(param_2);
      param_2 = param_2 + 0x10;
      _objc_loadWeakRetained(param_2);
      func_0x00010c256600(param_1);
      _objc_release(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d32d4c; end: 105d32e0f; -[SCPreviewFeatureBounceImpl showBounceVideoWithBounceOffset:toolbarItemSupportsBounce:completion:] */

void FUN_105d32d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_5);
  uVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d32e10;
  puStack_68 = &UNK_1108af7e0;
  uStack_60 = param_2;
  uStack_58 = param_5;
  uStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_5);
  func_0x00010bf20820(uVar1,param_3,param_2,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 105d32e10; end: 105d32eaf;  */

void FUN_105d32e10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x30) != 0) {
    func_0x00010c173820(*(undefined8 *)(param_1 + 0x30));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_58 = FUN_105d32eb0;
    puStack_50 = &UNK_11086d2d8;
    lStack_48 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(lStack_48 + 0x30);
    uStack_60 = 0xc2000000;
    uStack_38 = *(undefined1 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    uStack_40 = uVar1;
    func_0x00010bfbf160(uVar2,param_2,&puStack_68);
    _objc_release(uStack_40);
  }
  return;
}



/* Entry: 105d32eb0; end: 105d3301b;  */

void FUN_105d32eb0(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((param_2 == 0) || ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    lVar6 = *(long *)(param_1 + 0x20) + 0x10;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c13dae0();
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c1104a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010bf207c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c29aec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c20ebe0();
    _objc_release(lVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar6 = *(long *)(param_1 + 0x20) + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar4 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c25e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221d20(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = *(long *)(param_1 + 0x20) + 0x10;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c23ac20();
    _objc_release(lVar6);
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010bf6b020(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20840();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 105d3301c; end: 105d33137; -[SCPreviewFeatureBounceImpl removeBounceVideoForNewBounceIncoming:] */

void FUN_105d3301c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c25e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010c12b520(*(undefined8 *)(param_1 + 0x30));
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c20ebe0();
      _objc_release(lVar1);
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar2 = param_1 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c29ae80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c221d20(lVar1,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c23ac20();
      _objc_release(lVar1);
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      func_0x00010bf20860();
    }
    else {
      func_0x00010bf20880();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105d33138; end: 105d33207; -[SCPreviewFeatureBounceImpl bounceOffset] */

void FUN_105d33138(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar3 = lVar4;
  func_0x00010010fab4(lVar4,PTR_DAT_1126a51c8);
  lVar2 = lVar4;
  if ((int)lVar3 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  _objc_release(lVar4);
  lVar3 = lVar2;
  func_0x00010c2634c0();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (((int)lVar3 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    func_0x00010bf208a0();
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d33208; end: 105d33257; -[SCPreviewFeatureBounceImpl isPlayingAboveMinimumFramerateThreshhold] */

undefined8 FUN_105d33208(float param_1,long param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 + 0x10;
  _objc_loadWeakRetained(param_2);
  func_0x00010c299220();
  uVar1 = 0x3ff0000000000000;
  if (param_1 < 15.0) {
    uVar1 = 0;
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105d33258; end: 105d3326f; -[SCPreviewFeatureBounceImpl delegate] */

void FUN_105d33258(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d33270; end: 105d3327b; -[SCPreviewFeatureBounceImpl setDelegate:] */

void FUN_105d33270(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105d3327c; end: 105d33283; -[SCPreviewFeatureBounceImpl state] */

undefined8 FUN_105d3327c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105d33284; end: 105d332b3; -[SCPreviewFeatureBounceImpl setState:] */

void FUN_105d33284(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d332b4; end: 105d33303; -[SCPreviewFeatureBounceImpl .cxx_destruct] */

void FUN_105d332b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105d33304; end: 105d3349b; -[SCPreviewFeatureBounceServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d33304(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112734edc;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar6;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112734ee0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar6;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112734ee4;
    _objc_loadWeakRetained();
  }
  puVar3 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d3349c;
  puStack_68 = &UNK_1108e66c0;
  uStack_48 = 1;
  _objc_retain(lVar1);
  lStack_60 = lVar1;
  lStack_58 = lVar2;
  lStack_50 = lVar6;
  func_0x00010bf11fe0(puVar3,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c42e0;
  _objc_alloc(PTR_PTR_1126c42e0);
  func_0x00010bff94a0();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112734ee8);
  }
  func_0x00010bf9d660(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lStack_60);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105d3349c; end: 105d3351b;  */

void FUN_105d3349c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar3 = PTR_PTR_1126c42d8;
    _objc_alloc(PTR_PTR_1126c42d8);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c001fa0(puVar3,param_2,uVar1,uVar2,*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar2);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d3351c; end: 105d3356f; -[SCPreviewFeatureBounceServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d3351c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734ee8,0);
  _objc_destroyWeak(param_1 + _DAT_112734ee4);
  _objc_destroyWeak(param_1 + _DAT_112734ee0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734edc);
  return;
}



/* Entry: 105d33570; end: 105d3361b; -[SCPreviewFeatureBounceServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d33570(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734eec;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734ef4;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf207a0(lVar2);
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



/* Entry: 105d3361c; end: 105d3365f; -[SCPreviewFeatureBounceServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d3361c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734ef4);
  _objc_destroyWeak(param_1 + _DAT_112734ef0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734eec);
  return;
}



/* Entry: 105d33660; end: 105d336fb; -[SCPreviewCTLensPerfectSelfieBlizzardLogger initWithUserBlizzardLogger:previewConfiguration:] */

undefined1 *
FUN_105d33660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecf80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d336fc; end: 105d33823; -[SCPreviewCTLensPerfectSelfieBlizzardLogger logEditStartWithAction:] */

void FUN_105d336fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  _objc_retain();
  _objc_release(uVar6);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c243320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126bac30;
  _objc_opt_new(PTR_PTR_1126bac30);
  func_0x00010c1939c0();
  func_0x00010c1939a0(puVar5,param_2,param_3);
  func_0x00010c185a80(puVar5,param_2,lVar1);
  func_0x00010c205660(puVar5,param_2,lVar3);
  func_0x00010c179280(puVar5,param_2,lVar4);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c0b2e60(uVar6,param_2,puVar5);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105d33824; end: 105d33947; -[SCPreviewCTLensPerfectSelfieBlizzardLogger logEditEndCancelled:] */

void FUN_105d33824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c243320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126c42e8;
    _objc_opt_new(PTR_PTR_1126c42e8);
    func_0x00010c1939c0();
    func_0x00010c185a80(puVar5,param_2,lVar6);
    func_0x00010c178260(puVar5,param_2,param_3);
    func_0x00010c205660(puVar5,param_2,lVar3);
    func_0x00010c179280(puVar5,param_2,lVar4);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 105d33948; end: 105d3394f; -[SCPreviewCTLensPerfectSelfieBlizzardLogger creativeToolsEditSessionId] */

undefined8 FUN_105d33948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105d33950; end: 105d33987; -[SCPreviewCTLensPerfectSelfieBlizzardLogger .cxx_destruct] */

void FUN_105d33950(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d33988; end: 105d33adf; -[SCPreviewCTLensPerfectSelfieFreemiumGate initWithPreviewScopeServices:tierCheckService:lensPlusFreemiumService:plusSubscribeScopeExposer:plusSubscribeScopeServices:freemiumFlowEnabled:] */

undefined1 *
FUN_105d33988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ecf88;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d33ae0; end: 105d33c17; -[SCPreviewCTLensPerfectSelfieFreemiumGate eligibilityToStartGenerationForLens:] */

undefined8 FUN_105d33ae0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 1;
  uVar2 = uVar1;
  func_0x00010c076640();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    (**(code **)(lVar3 + 0x10))();
    uVar7 = 0;
    if ((param_3 != 0) && ((int)lVar3 != 0)) {
      lVar3 = param_3;
      func_0x00010c095e40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfb7600();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfceb20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        func_0x00010bfc5d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        uVar1 = uVar2;
        func_0x00010c0736c0();
        uVar7 = 2;
        if ((int)uVar1 == 0) {
          uVar7 = 0;
        }
        _objc_release(uVar2);
      }
    }
  }
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105d33c18; end: 105d33c33; -[SCPreviewCTLensPerfectSelfieFreemiumGate isUserEligibleToStartGenerationForLens:] */

bool FUN_105d33c18(long param_1)

{
  func_0x00010bf8d340();
  return param_1 != 0;
}



/* Entry: 105d33c34; end: 105d33ca3; -[SCPreviewCTLensPerfectSelfieFreemiumGate claimFreemiumTryForLens:] */

undefined8 FUN_105d33c34(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf39b20();
    _objc_release(param_3);
    _objc_release(uVar2);
    return uVar1;
  }
  return 0;
}



/* Entry: 105d33ca4; end: 105d33d2f; -[SCPreviewCTLensPerfectSelfieFreemiumGate freemiumGroupIdForLens:] */

void FUN_105d33ca4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bfc5d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar2 = uVar1;
    func_0x00010bfceb20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d33d30; end: 105d33db7; -[SCPreviewCTLensPerfectSelfieFreemiumGate presentLensPlusSubscribePageForLens:] */

void FUN_105d33d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105d33db8;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105d33db8; end: 105d34017;  */

void FUN_105d33db8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar2 == 0) && (*(long *)(param_1 + 0x28) != 0)) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfc5d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126c42f0;
      _objc_alloc(PTR_PTR_1126c42f0);
      uVar3 = uVar4;
      func_0x00010bfd6d60(uVar4);
      uVar6 = uVar4;
      func_0x00010bfceb20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffd0a0(puVar5,param_2,0,0,0,uVar3,uVar6,0,0);
      _objc_release(uVar6);
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      func_0x00010c240640(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c27ed00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c0cfd00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar7);
      puVar9 = PTR_PTR_1126b1da8;
      _objc_alloc(PTR_PTR_1126b1da8);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c094540(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04abe0(puVar9,param_2,0x77,0,0x3a,uVar3,0x40,puVar5);
      _objc_release(uVar3);
      lVar2 = *(long *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      puVar10 = PTR_PTR_1126b5af8;
      func_0x00010c095b40(PTR_PTR_1126b5af8,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23e60(uVar3,param_2,uVar8,puVar9,lVar2,4,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 105d34018; end: 105d3405f; -[SCPreviewCTLensPerfectSelfieFreemiumGate plusSubscribeDidDismiss] */

void FUN_105d34018(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105d34060; end: 105d340bf; -[SCPreviewCTLensPerfectSelfieFreemiumGate .cxx_destruct] */

void FUN_105d34060(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d340c0; end: 105d34123; -[SCPreviewCTLensPerfectSelfieMetricsLogger init] */

undefined1 * FUN_105d340c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ecf90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c42f8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105d34124; end: 105d3412f; -[SCPreviewCTLensPerfectSelfieMetricsLogger logTapToGenerate] */

void FUN_105d34124(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110aca3b8,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 105d34130; end: 105d3413b; -[SCPreviewCTLensPerfectSelfieMetricsLogger logGenerationStarted] */

void FUN_105d34130(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110aca318,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 105d3413c; end: 105d34147; -[SCPreviewCTLensPerfectSelfieMetricsLogger logGenerationSuccess] */

void FUN_105d3413c(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110aca368,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 105d34148; end: 105d3415b; -[SCPreviewCTLensPerfectSelfieMetricsLogger logRemoteGenerationFailure] */

/* WARNING: Removing unreachable block (ram,0x000108ee22fc) */

void FUN_105d34148(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110de7698;
  puVar6 = (undefined1 *)0x1;
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  _objc_retain(&PTR____CFConstantStringClassReference_110de7698);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110de7698);
    ppuVar2 = ppuVar3;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110de7698);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110de7698);
    func_0x000107c278b8(auStack_60,ppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_110aca278;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110aca278,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110de7698);
  _objc_release(&PTR____CFConstantStringClassReference_110de7698);
  __Unwind_Resume();
  puStack_88 = &LAB_108ee240c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  if (ppuVar3 != (undefined **)0x0) {
    plVar8 = (long *)ppuVar3[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f5275d1;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x000107c278b8(auStack_e0,ppuVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar5 = (undefined **)&UNK_110aca2c8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110aca2c8,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    ppuVar4 = ppuVar3;
    __Unwind_Resume();
    puStack_128 = (undefined1 *)&uStack_140;
    puStack_108 = &LAB_108ee2580;
    if (ppuVar4 != (undefined **)0x0) {
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      ppuStack_120 = ppuVar3;
      ppuStack_118 = ppuVar2;
      ppuStack_110 = &puStack_90;
      (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_110aca318,&uStack_140,ppuVar5);
      func_0x000107c278ac(&puStack_128);
    }
    return;
  }
  return;
}



/* Entry: 105d3415c; end: 105d3416f; -[SCPreviewCTLensPerfectSelfieMetricsLogger logLensUnavailableFailure] */

/* WARNING: Removing unreachable block (ram,0x000108ee22fc) */

void FUN_105d3415c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e28f38;
  puVar6 = (undefined1 *)0x1;
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  _objc_retain(&PTR____CFConstantStringClassReference_110e28f38);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e28f38);
    ppuVar2 = ppuVar3;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e28f38);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e28f38);
    func_0x000107c278b8(auStack_60,ppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_110aca278;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110aca278,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110e28f38);
  _objc_release(&PTR____CFConstantStringClassReference_110e28f38);
  __Unwind_Resume();
  puStack_88 = &LAB_108ee240c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  if (ppuVar3 != (undefined **)0x0) {
    plVar8 = (long *)ppuVar3[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f5275d1;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x000107c278b8(auStack_e0,ppuVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar5 = (undefined **)&UNK_110aca2c8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110aca2c8,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    ppuVar4 = ppuVar3;
    __Unwind_Resume();
    puStack_128 = (undefined1 *)&uStack_140;
    puStack_108 = &LAB_108ee2580;
    if (ppuVar4 != (undefined **)0x0) {
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      ppuStack_120 = ppuVar3;
      ppuStack_118 = ppuVar2;
      ppuStack_110 = &puStack_90;
      (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_110aca318,&uStack_140,ppuVar5);
      func_0x000107c278ac(&puStack_128);
    }
    return;
  }
  return;
}



/* Entry: 105d34170; end: 105d34183; -[SCPreviewCTLensPerfectSelfieMetricsLogger logConfigurationFailure] */

/* WARNING: Removing unreachable block (ram,0x000108ee22fc) */

void FUN_105d34170(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110df9f78;
  puVar6 = (undefined1 *)0x1;
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  _objc_retain(&PTR____CFConstantStringClassReference_110df9f78);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110df9f78);
    ppuVar2 = ppuVar3;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110df9f78);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110df9f78);
    func_0x000107c278b8(auStack_60,ppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_110aca278;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110aca278,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110df9f78);
  _objc_release(&PTR____CFConstantStringClassReference_110df9f78);
  __Unwind_Resume();
  puStack_88 = &LAB_108ee240c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  if (ppuVar3 != (undefined **)0x0) {
    plVar8 = (long *)ppuVar3[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f5275d1;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x000107c278b8(auStack_e0,ppuVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar5 = (undefined **)&UNK_110aca2c8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110aca2c8,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    ppuVar4 = ppuVar3;
    __Unwind_Resume();
    puStack_128 = (undefined1 *)&uStack_140;
    puStack_108 = &LAB_108ee2580;
    if (ppuVar4 != (undefined **)0x0) {
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      ppuStack_120 = ppuVar3;
      ppuStack_118 = ppuVar2;
      ppuStack_110 = &puStack_90;
      (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_110aca318,&uStack_140,ppuVar5);
      func_0x000107c278ac(&puStack_128);
    }
    return;
  }
  return;
}



/* Entry: 105d34184; end: 105d34197; -[SCPreviewCTLensPerfectSelfieMetricsLogger logPaywallGated] */

/* WARNING: Removing unreachable block (ram,0x000108ee2470) */

void FUN_105d34184(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e28f58;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  _objc_retain(&PTR____CFConstantStringClassReference_110e28f58);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e28f58);
    ppuVar2 = ppuVar3;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e28f58);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e28f58);
    func_0x000107c278b8(auStack_60,ppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_110aca2c8;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110aca2c8,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(&PTR____CFConstantStringClassReference_110e28f58);
    _objc_release(&PTR____CFConstantStringClassReference_110e28f58);
    ppuVar4 = ppuVar3;
    __Unwind_Resume();
    puStack_a8 = (undefined1 *)&uStack_c0;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e28f58;
    puStack_88 = &LAB_108ee2580;
    if (ppuVar4 != (undefined **)0x0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      ppuStack_a0 = ppuVar3;
      puStack_90 = &stack0xfffffffffffffff0;
      (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_110aca318,&uStack_c0,ppuVar2);
      func_0x000107c278ac(&puStack_a8);
    }
    return;
  }
  return;
}



/* Entry: 105d34198; end: 105d341ab; -[SCPreviewCTLensPerfectSelfieMetricsLogger logGenerationCancelledByUserTap] */

/* WARNING: Removing unreachable block (ram,0x000108ee2188) */

void FUN_105d34198(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e28f78;
  puVar6 = (undefined1 *)0x1;
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  _objc_retain(&PTR____CFConstantStringClassReference_110e28f78);
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e28f78);
    ppuVar2 = ppuVar3;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e28f78);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e28f78);
    func_0x000107c278b8(auStack_60,ppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_110aca228;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110aca228,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110e28f78);
  _objc_release(&PTR____CFConstantStringClassReference_110e28f78);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  puStack_88 = &LAB_108ee2298;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar2;
  puVar8 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  if (ppuVar3 != (undefined **)0x0) {
    plVar9 = (long *)ppuVar3[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f5275d1;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x000107c278b8(auStack_e0,ppuVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar5 = (undefined **)&UNK_110aca278;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110aca278,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    __Unwind_Resume();
    puStack_108 = &LAB_108ee240c;
    lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar2 = ppuVar5;
    ppuStack_110 = &puStack_90;
    _objc_retain(ppuVar5);
    if (ppuVar3 != (undefined **)0x0) {
      plVar9 = (long *)ppuVar3[1];
      _objc_retain(ppuVar5);
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar3 = (undefined **)&UNK_10f5275d1;
      }
      else {
        ppuVar3 = ppuVar5;
        _objc_retainAutorelease(ppuVar5);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar5);
      func_0x000107c278b8(auStack_160,ppuVar3);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
      ppuVar2 = (undefined **)&UNK_110aca2c8;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110aca2c8,&uStack_180,puVar8);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x000107c278ac(&puStack_168);
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
      }
    }
    ppuVar3 = ppuVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
      ___stack_chk_fail();
      _objc_release(ppuVar5);
      _objc_release(ppuVar5);
      ppuVar4 = ppuVar3;
      __Unwind_Resume();
      puStack_1a8 = (undefined1 *)&uStack_1c0;
      puStack_188 = &LAB_108ee2580;
      if (ppuVar4 != (undefined **)0x0) {
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        ppuStack_1a0 = ppuVar3;
        ppuStack_198 = ppuVar5;
        pppuStack_190 = &ppuStack_110;
        (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_110aca318,&uStack_1c0,ppuVar2);
        func_0x000107c278ac(&puStack_1a8);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105d341ac; end: 105d341bf; -[SCPreviewCTLensPerfectSelfieMetricsLogger logGenerationCancelledByCarouselSwitch] */

/* WARNING: Removing unreachable block (ram,0x000108ee2188) */

void FUN_105d341ac(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e28f98;
  puVar6 = (undefined1 *)0x1;
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  _objc_retain(&PTR____CFConstantStringClassReference_110e28f98);
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e28f98);
    ppuVar2 = ppuVar3;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e28f98);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e28f98);
    func_0x000107c278b8(auStack_60,ppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_110aca228;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110aca228,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110e28f98);
  _objc_release(&PTR____CFConstantStringClassReference_110e28f98);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  puStack_88 = &LAB_108ee2298;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar2;
  puVar8 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  if (ppuVar3 != (undefined **)0x0) {
    plVar9 = (long *)ppuVar3[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f5275d1;
    }
    else {
      ppuVar3 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x000107c278b8(auStack_e0,ppuVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar5 = (undefined **)&UNK_110aca278;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110aca278,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    __Unwind_Resume();
    puStack_108 = &LAB_108ee240c;
    lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar2 = ppuVar5;
    ppuStack_110 = &puStack_90;
    _objc_retain(ppuVar5);
    if (ppuVar3 != (undefined **)0x0) {
      plVar9 = (long *)ppuVar3[1];
      _objc_retain(ppuVar5);
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar3 = (undefined **)&UNK_10f5275d1;
      }
      else {
        ppuVar3 = ppuVar5;
        _objc_retainAutorelease(ppuVar5);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar5);
      func_0x000107c278b8(auStack_160,ppuVar3);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
      ppuVar2 = (undefined **)&UNK_110aca2c8;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110aca2c8,&uStack_180,puVar8);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x000107c278ac(&puStack_168);
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
      }
    }
    ppuVar3 = ppuVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
      ___stack_chk_fail();
      _objc_release(ppuVar5);
      _objc_release(ppuVar5);
      ppuVar4 = ppuVar3;
      __Unwind_Resume();
      puStack_1a8 = (undefined1 *)&uStack_1c0;
      puStack_188 = &LAB_108ee2580;
      if (ppuVar4 != (undefined **)0x0) {
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        ppuStack_1a0 = ppuVar3;
        ppuStack_198 = ppuVar5;
        pppuStack_190 = &ppuStack_110;
        (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_110aca318,&uStack_1c0,ppuVar2);
        func_0x000107c278ac(&puStack_1a8);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105d341c0; end: 105d341cb; -[SCPreviewCTLensPerfectSelfieMetricsLogger .cxx_destruct] */

void FUN_105d341c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d341cc; end: 105d34603; -[SCPreviewFeatureCTLensPerfectSelfieImpl initWithPreviewABServices:creativeToolsABServices:previewConfiguration:previewScopeServices:dirtyFrameProvider:imagePlayback:filterOverlayComposition:toolLensController:carouselController:asyncTaskCompletionAnnouncer:previewCommonLoggingServices:ctLensCoordinator:inLensCreationDataServices:freemiumGate:blizzardLogger:] */

undefined8 *
FUN_105d341cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126ecf98;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[1];
    puVar2[1] = uVar3;
    _objc_release(uVar5);
    uVar3 = param_4;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[2];
    puVar2[2] = uVar3;
    _objc_release(uVar5);
    uVar1 = (undefined1)puVar2[2];
    func_0x00010c07af20();
    *(undefined1 *)(puVar2 + 0x16) = uVar1;
    _objc_storeWeak(puVar2 + 5,param_5);
    _objc_retain(param_6);
    uVar3 = puVar2[7];
    puVar2[7] = param_6;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 6,param_7);
    _objc_retain(param_8);
    uVar3 = puVar2[8];
    puVar2[8] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[9];
    puVar2[9] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[3];
    puVar2[3] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[10];
    puVar2[10] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_17;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c4300;
    _objc_alloc_init();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x23];
    puVar2[0x23] = puVar4;
    _objc_release(uVar3);
    func_0x00010be25de0(puVar2);
    func_0x00010be65ca0(puVar2);
    _objc_initWeak(auStack_80,puVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[0x22];
    puVar2[0x22] = puVar4;
    _objc_release(uVar3);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010befa300(param_5);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105d34604; end: 105d3462f;  */

void FUN_105d34604(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c129080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d34630; end: 105d3466f; -[SCPreviewFeatureCTLensPerfectSelfieImpl configureWithView:] */

void FUN_105d34630(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x20,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d34670; end: 105d34673; -[SCPreviewFeatureCTLensPerfectSelfieImpl activate] */

void FUN_105d34670(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeCarouselSelection_112577110);
  return;
}



/* Entry: 105d34674; end: 105d3468b; -[SCPreviewFeatureCTLensPerfectSelfieImpl editCount] */

ulong FUN_105d34674(ulong param_1)

{
  func_0x00010c079d60();
  return param_1 & 0xffffffff;
}



/* Entry: 105d3468c; end: 105d3469f; -[SCPreviewFeatureCTLensPerfectSelfieImpl isPerfectSelfieLensApplied] */

bool FUN_105d3468c(long param_1)

{
  return (*(ulong *)(param_1 + 0x98) & 0xfffffffffffffffe) == 2;
}



/* Entry: 105d346a0; end: 105d346b3; -[SCPreviewFeatureCTLensPerfectSelfieImpl isPerfectSelfieEditing] */

bool FUN_105d346a0(long param_1)

{
  return *(long *)(param_1 + 0x98) - 1U < 2;
}



/* Entry: 105d346b4; end: 105d347cb; -[SCPreviewFeatureCTLensPerfectSelfieImpl isFeatureEnabled] */

undefined8 FUN_105d346b4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = param_1;
  func_0x0001007f8afc();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  if ((int)uVar2 == 0) {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c070a20();
    if ((int)lVar4 == 0) {
      uVar2 = param_1 + 0x28;
      _objc_loadWeakRetained();
      uVar5 = uVar2;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c07f160();
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(lVar3);
      _objc_release(uVar1);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      uVar1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010c075080();
      if ((uVar2 & 1) != 0) {
        lVar3 = param_1 + 0x28;
        _objc_loadWeakRetained();
        lVar4 = lVar3;
        func_0x00010c134300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        _objc_release(uVar1);
        if (lVar4 != 0) {
          return 0;
        }
        uVar7 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c07af50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_isPreviewPerfectSelfieEnabled_1125fc5e0);
        return uVar7;
      }
    }
    else {
      _objc_release(lVar3);
    }
  }
  _objc_release(uVar1);
  return 0;
}



/* Entry: 105d347cc; end: 105d3485b; -[SCPreviewFeatureCTLensPerfectSelfieImpl toolbarItemConfiguration] */

void FUN_105d347cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010becd160();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c4010;
  _objc_alloc(PTR_PTR_1126c4010);
  puVar2 = puVar1;
  func_0x000108edf278();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020380(puVar1,param_2,0x14,param_1,param_1,
                      &PTR____CFConstantStringClassReference_110e29058,
                      &PTR____CFConstantStringClassReference_110e28fb8,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d3485c; end: 105d34903; -[SCPreviewFeatureCTLensPerfectSelfieImpl handleCTLensButtonTap] */

void FUN_105d3485c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105d34904;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105d34904; end: 105d3492f;  */

void FUN_105d34904(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2dd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d34930; end: 105d34937; -[SCPreviewFeatureCTLensPerfectSelfieImpl state] */

undefined8 FUN_105d34930(void)

{
  return 0;
}



/* Entry: 105d34938; end: 105d34a23; -[SCPreviewFeatureCTLensPerfectSelfieImpl _handlePerfectSelfieButtonTap] */

void FUN_105d34938(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be97390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__revertPerfectSelfie_112583680);
    return;
  }
  if (lVar3 != 2) {
    if (lVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bddabf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelPerfectSelfieGeneration_112554498)
      ;
      return;
    }
    if ((*(char *)(param_1 + 0xb0) == '\x01') && (*(long *)(param_1 + 0xf8) != 0)) {
      lVar4 = *(long *)(param_1 + 0xf0);
      lVar1 = *(long *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar4 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010be85ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reApplyCachedResult_11257f150);
        return;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bec0fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startPerfectSelfieGeneration_11258dd90);
    return;
  }
  return;
}


