/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d4f764; end: 105d4f83f; -[SCPreviewFeatureCaptionImpl didTapPreviewContainerView:] */

undefined8 FUN_105d4f764(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf308a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf5e800();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x1a8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bfa1e20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c081580();
      _objc_release(uVar5);
      _objc_release(uVar3);
      if ((int)uVar4 != 0) goto LAB_105d4f7b8;
    }
    uVar5 = 1;
  }
  else {
    _objc_release();
LAB_105d4f7b8:
    func_0x00010beca6e0(param_1,param_2,param_3);
    uVar5 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105d4f840; end: 105d4f8f3; -[SCPreviewFeatureCaptionImpl didProcessTapInPreviewContainerView:] */

void FUN_105d4f840(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13ca20();
  if (lVar1 == 1) {
    uVar2 = *(ulong *)(param_1 + 0x1a8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071280();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      lVar1 = param_3;
      func_0x00010bfc1a80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beca6e0(param_1,param_2,lVar1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d4f8f4; end: 105d4faff; -[SCPreviewFeatureCaptionImpl didBeginLongPressInPreviewContainerView:] */

undefined8 FUN_105d4f8f4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf5e800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar7 = 1;
    goto LAB_105d4fadc;
  }
  uVar1 = param_1;
  func_0x00010bf308a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bfa1ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar2;
    func_0x00010c077bc0();
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    if ((int)uVar7 == 0) {
      func_0x00010bfa29c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar7 = uVar5;
      func_0x00010c07a120();
      if (((int)uVar7 != 0) && (uVar6 = uVar1, func_0x00010c07a120(), (int)uVar6 != 0)) {
        uVar6 = uVar1;
        func_0x00010c26ba60(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c109cc0(uVar5,param_2,uVar6);
        _objc_release(uVar6);
        goto LAB_105d4fab8;
      }
      uVar7 = 1;
    }
    else {
      func_0x00010bfa1e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar5;
      func_0x00010c071020(uVar5,param_2,uVar1);
      uVar6 = uVar1;
      func_0x00010c07a120();
      uVar7 = 1;
      if (((uVar6 & 1) != 0) || ((int)uVar3 != 0)) {
        _objc_retain(uVar1);
        uVar7 = *(undefined8 *)(param_1 + 0x210);
        *(ulong *)(param_1 + 0x210) = uVar1;
        _objc_release(uVar7);
        uVar6 = uVar1;
        func_0x00010c26ba60(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_1;
        func_0x00010bdf5ea0(param_1,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10d0a0(uVar2,param_2,uVar6,uVar4,param_1,0);
        _objc_release(uVar4);
        _objc_release(uVar6);
        *(undefined1 *)(param_1 + 0x241) = 1;
LAB_105d4fab8:
        uVar7 = 0;
      }
    }
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_105d4fadc:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105d4fb00; end: 105d4fbdf; -[SCPreviewFeatureCaptionImpl shouldBlockGesture:] */

long FUN_105d4fb00(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010bf308a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
LAB_105d4fbb8:
    lVar4 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    lVar3 = param_1;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      if ((uVar2 & 1) == 0) goto LAB_105d4fbb8;
      func_0x00010bf8c1c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf2f860();
    }
    else {
      func_0x00010bf8c1c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf2f840();
    }
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105d4fbe0; end: 105d4fc07; -[SCPreviewFeatureCaptionImpl staticCaptionsContainerView] */

void FUN_105d4fbe0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d4fc08; end: 105d4fc2f; -[SCPreviewFeatureCaptionImpl trackingCaptionsContainerView] */

void FUN_105d4fc08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d4fc30; end: 105d4fc37; -[SCPreviewFeatureCaptionImpl featureType] */

undefined8 FUN_105d4fc30(void)

{
  return 0;
}



/* Entry: 105d4fc38; end: 105d50053; -[SCPreviewFeatureCaptionImpl snapEditor:updateLoggingWithBuilder:] */

void FUN_105d4fc38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf30440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa060(param_4,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf304c0(param_1);
  func_0x00010c2aa0a0(param_4,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf307a0(param_1);
  func_0x00010c2aa0e0(param_4,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf2fd60(param_1);
  func_0x00010c2aa120(param_4,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c26fe20(param_1);
  func_0x00010c2aa0c0(param_4,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010beffc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf2fd20(lVar1,param_2,lVar2);
  func_0x00010c2bac00(param_4,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c252aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9fe0(param_4,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010beffc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c252ae0(lVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba000(param_4,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf30220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa040(param_4,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c278d00(param_1);
  func_0x00010c2aa100(param_4,param_2,0 < lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c4448;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010bf30480();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf30460(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf303e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf303c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf30260();
  lVar7 = param_1;
  func_0x00010bfd4760(param_1);
  lVar8 = param_1;
  func_0x00010bf300e0();
  func_0x00010c0fc3e0();
  uVar9 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x00010bffc660(puVar4,param_2,lVar1,lVar2,lVar3,lVar5,lVar6,lVar7,(char)lVar8);
  _objc_release(uVar12);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar12 = 0;
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x1f0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010c077360();
    if ((int)uVar12 == 0) {
      uVar12 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x1f0);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c0b62c0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010beffc40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c0b62e0(uVar11,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(uVar11);
      _objc_release(uVar10);
    }
    _objc_release(uVar9);
  }
  func_0x00010c284200(*(undefined8 *)(param_1 + 0x178),param_2,param_4,puVar4,uVar12);
  _objc_release(uVar12);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d50054; end: 105d5015b; -[SCPreviewFeatureCaptionImpl snapEditor:didTapBackFromTool:] */

bool FUN_105d50054(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  if (param_4 == 2) {
    lVar1 = param_1;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bf5e800(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bdda060(param_1,param_2,lVar1);
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        lVar1 = param_1 + 0x18;
        _objc_loadWeakRetained(lVar1);
        lVar2 = lVar1;
        func_0x00010c2737a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126ae750;
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fb220(lVar2,param_2,puVar3,1);
        _objc_release(puVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        func_0x00010bf5e800(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c255ee0();
        _objc_release(param_1);
      }
    }
  }
  return param_4 == 2;
}



/* Entry: 105d5015c; end: 105d501bf; -[SCPreviewFeatureCaptionImpl snapEditor:willInitiateExportWithType:] */

void FUN_105d5015c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bddb4a0(param_1,param_2,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c178bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_setCaptionUsedTimestamp_11263bd18);
    return;
  }
  return;
}



/* Entry: 105d501c0; end: 105d501c7; -[SCPreviewFeatureCaptionImpl responderChainPriority] */

undefined8 FUN_105d501c0(void)

{
  return 2;
}



/* Entry: 105d501c8; end: 105d5021b; -[SCPreviewFeatureCaptionImpl hasOnlyPrePreviewEdits] */

long FUN_105d501c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x208);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c071ae0(lVar2,param_2,lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 105d5021c; end: 105d5025f; -[SCPreviewFeatureCaptionImpl editCount] */

undefined8 FUN_105d5021c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bddb4a0(param_1,param_2,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105d50260; end: 105d502db; -[SCPreviewFeatureCaptionImpl _canStopEditingCaption:] */

uint FUN_105d50260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c4438;
  _objc_retain(param_3);
  func_0x00010bf301e0(puVar1,param_2,param_3);
  uVar2 = param_3;
  func_0x00010bf8c1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf2f800(uVar2);
  _objc_release(uVar2);
  return ((uint)puVar1 | (uint)uVar3 ^ 0xffffffff) & 1;
}



/* Entry: 105d502dc; end: 105d502df; -[SCPreviewFeatureCaptionImpl _assertCaptionOfTrackableView:] */

void FUN_105d502dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf30110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_captionOfTrackableView__1125a99e8);
  return;
}



/* Entry: 105d502e0; end: 105d5050b; -[SCPreviewFeatureCaptionImpl _captionsIncludingStatic:tracking:] */

undefined * FUN_105d502e0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x1a0);
    func_0x00010c261580(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
    _objc_release(uVar6);
  }
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x198);
    func_0x00010c261580(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
    _objc_release(uVar6);
  }
  _objc_retain(puVar5);
  puVar7 = puVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar5);
      }
      puVar3 = PTR_DAT_1126a51d0;
      lVar10 = *(long *)((long)puVar11 * 8);
      _objc_retain(lVar10);
      lVar8 = lVar10;
      func_0x00010010fab4(lVar10,puVar3);
      lVar1 = lVar10;
      if ((int)lVar8 == 0) {
        lVar1 = 0;
      }
      _objc_retain(lVar1);
      _objc_release(lVar10);
      if (lVar1 != 0) {
        lVar8 = lVar10;
        func_0x00010bf2fba0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar8 != 0) {
          func_0x00010bf2fba0(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(lVar10);
        }
      }
      _objc_release(lVar1);
      puVar11 = puVar11 + 1;
    } while (puVar7 != puVar11);
    puVar7 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  puVar7 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  puVar4 = puVar4 + 0x250;
  _objc_loadWeakRetained(puVar4);
  _objc_release();
  return (undefined *)(ulong)(puVar4 != (undefined *)0x0);
}



/* Entry: 105d5050c; end: 105d5053b; -[SCPreviewFeatureCaptionImpl _multiSnapV2Applied] */

bool FUN_105d5050c(long param_1)

{
  param_1 = param_1 + 0x250;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 105d5053c; end: 105d5057f; -[SCPreviewFeatureCaptionImpl _updateCaptionStylesFromMemoriesWithArray:] */

void FUN_105d5053c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284220(*(undefined8 *)(param_1 + 0x90),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d50580; end: 105d5069b; -[SCPreviewFeatureCaptionImpl _resetNonEditingCaption] */

void FUN_105d50580(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bddb4a0(param_1,param_2,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      func_0x00010c071280();
      if ((uVar5 & 1) == 0) {
        func_0x00010bf6b840(param_1);
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar1;
  func_0x00010bf5e800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c06e960();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c166c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 0x150),PTR_s_setAlignmentButtonHidden__112637528,lVar4);
  return;
}



/* Entry: 105d5069c; end: 105d506ff; -[SCPreviewFeatureCaptionImpl _updateAlignmentButtonVisibility] */

void FUN_105d5069c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf5e800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c06e960();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c166c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x150),PTR_s_setAlignmentButtonHidden__112637528,lVar3);
  return;
}



/* Entry: 105d50700; end: 105d507bb; -[SCPreviewFeatureCaptionImpl _updateDurationButtonVisibility] */

void FUN_105d50700(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c071020(uVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c192da0(*(undefined8 *)(param_1 + 0x150),param_2,(uint)uVar4 ^ 1);
  lVar3 = param_1;
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed7380(param_1,param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105d507bc; end: 105d507fb; -[SCPreviewFeatureCaptionImpl _updateDurationButtonAlphaWithCaption:] */

void FUN_105d507bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4438;
  func_0x00010bf301e0();
  uVar2 = 0x3ff0000000000000;
  if ((int)puVar1 == 0) {
    uVar2 = 0x3fb999999999999a;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c192d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,*(undefined8 *)(param_1 + 0x150),PTR_s_setDurationButtonAlpha__112642580);
  return;
}



/* Entry: 105d507fc; end: 105d508ef; -[SCPreviewFeatureCaptionImpl _updateTextToSpeechButtonAppearance] */

void FUN_105d507fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x1d8);
  lVar1 = param_1;
  func_0x00010bf5e800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26c960(uVar3,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x1d8);
  lVar1 = param_1;
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d800(uVar4,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c213800(*(undefined8 *)(param_1 + 0x150),param_2,(uint)uVar4 ^ 1);
  func_0x00010c213820(*(undefined8 *)(param_1 + 0x150),param_2,uVar3);
  lVar1 = param_1;
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee1de0(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d508f0; end: 105d5092f; -[SCPreviewFeatureCaptionImpl _updateTextToSpeechButtonAlphaWithCaption:] */

void FUN_105d508f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4438;
  func_0x00010bf301e0();
  uVar2 = 0x3ff0000000000000;
  if ((int)puVar1 == 0) {
    uVar2 = 0x3fb999999999999a;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2137f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,*(undefined8 *)(param_1 + 0x150),PTR_s_setTextToSpeechButtonAlpha__112662820);
  return;
}



/* Entry: 105d50930; end: 105d50a43; -[SCPreviewFeatureCaptionImpl _updateBackgroundButtonVisibility] */

void FUN_105d50930(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bf5e800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010befd420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c16e400(*(undefined8 *)(param_1 + 0x150),param_2,lVar4 == 0);
  lVar1 = param_1;
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x150);
  lVar1 = lVar3;
  func_0x00010c25e260(lVar3);
  func_0x00010c16e420(uVar5,param_2,lVar1);
  lVar1 = param_1;
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed3a20(param_1,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105d50a44; end: 105d50a83; -[SCPreviewFeatureCaptionImpl _updateBackgroundButtonAlphaWithCaption:] */

void FUN_105d50a44(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4438;
  func_0x00010bf301e0();
  uVar2 = 0x3ff0000000000000;
  if ((int)puVar1 == 0) {
    uVar2 = 0x3fb999999999999a;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16e3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,*(undefined8 *)(param_1 + 0x150),PTR_s_setBackgroundButtonAlpha__112639318);
  return;
}



/* Entry: 105d50a84; end: 105d50bd3; -[SCPreviewFeatureCaptionImpl _updateMagicCaptionButtonVisibility:] */

/* WARNING: Possible PIC construction at 0x000105d50b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d50b14) */
/* WARNING: Removing unreachable block (ram,0x000105d50b18) */
/* WARNING: Removing unreachable block (ram,0x000105d50b50) */
/* WARNING: Removing unreachable block (ram,0x000105d50b74) */
/* WARNING: Removing unreachable block (ram,0x000105d50bc0) */
/* WARNING: Removing unreachable block (ram,0x000105d50b78) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105d50a84(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c078580();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1f0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c077360();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x150);
    uVar5 = (uint)uVar4 ^ 1;
  }
  else {
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x150);
    uVar5 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1c1690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setMagicCaptionButtonHidden__11264dfc8,uVar5);
  return;
}



/* Entry: 105d50bd4; end: 105d50d83; -[SCPreviewFeatureCaptionImpl _creativeToolsMenuActionsForCaption:] */

void FUN_105d50bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  FUN_105db8ce0(uVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c720(puVar1);
  uVar5 = param_3;
  func_0x00010c07a120();
  if ((int)uVar5 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa29c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    FUN_105db8b34(uVar5,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  iVar7 = (int)*(undefined8 *)(param_1 + 0x1d8);
  uVar5 = param_3;
  func_0x00010c252440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d800();
  _objc_release(uVar5);
  if (iVar7 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x1d8);
    FUN_105db8e80(uVar5,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar1);
    _objc_release(uVar5);
  }
  puVar6 = puVar1;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105d50d84; end: 105d50d8b; -[SCPreviewFeatureCaptionImpl _logUserInteraction] */

void FUN_105d50d84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logEventWithLoggingState__1125724c8,5);
  return;
}



/* Entry: 105d50d8c; end: 105d50d97; -[SCPreviewFeatureCaptionImpl _logEventWithLoggingState:] */

void FUN_105d50d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logEventWithLoggingState_openAc_1125724e0,param_3,0,0);
  return;
}



/* Entry: 105d50d98; end: 105d50d9f; -[SCPreviewFeatureCaptionImpl _logEventWithLoggingState:openAction:] */

void FUN_105d50d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logEventWithLoggingState_openAc_1125724e0,param_3,param_4,0);
  return;
}



/* Entry: 105d50da0; end: 105d50dab; -[SCPreviewFeatureCaptionImpl _logEventWithLoggingState:mentionUserIds:] */

void FUN_105d50da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logEventWithLoggingState_openAc_1125724e0,param_3,0,param_4);
  return;
}



/* Entry: 105d50dac; end: 105d50fb3; -[SCPreviewFeatureCaptionImpl _logEventWithLoggingState:openAction:mentionUserIds:] */

void FUN_105d50dac(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 < 3) {
    if (param_3 == 0) {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      goto LAB_105d50f94;
    }
    if (param_3 == 1) {
      if (((*(ulong *)(param_1 + 0x1c8) & 0xfffffffffffffffb) == 0) &&
         (lVar2 = param_4, func_0x00010c08fa60(), lVar2 != 0)) {
        func_0x00010c293a40(*(undefined8 *)(param_1 + 0x170),param_2,1,param_4);
        *(undefined8 *)(param_1 + 0x1c8) = 1;
      }
      goto LAB_105d50f94;
    }
    if ((param_3 != 2) || (*(long *)(param_1 + 0x1c8) != 1)) goto LAB_105d50f94;
    if (*(char *)(param_1 + 0x158) == '\x01') {
      lVar2 = param_1;
      func_0x00010bf5e800();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010bf303a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar1 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        lVar2 = param_1;
        func_0x00010bf5e800(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar2;
        func_0x00010bf303a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf956a0(uVar3,param_2,lVar1,0);
        _objc_release(lVar1);
        _objc_release(lVar2);
      }
    }
    func_0x00010c292100(*(undefined8 *)(param_1 + 0x170),param_2,1);
    uVar3 = 2;
  }
  else if (param_3 == 3) {
    if (*(long *)(param_1 + 0x1c8) != 5 && *(long *)(param_1 + 0x1c8) != 2) goto LAB_105d50f94;
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c250e60();
    _objc_release(lVar2);
    uVar3 = 3;
  }
  else if (param_3 == 4) {
    if (*(long *)(param_1 + 0x1c8) != 3) goto LAB_105d50f94;
    func_0x00010c2920c0(*(undefined8 *)(param_1 + 0x170),param_2,1,param_5);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf956c0();
    _objc_release(lVar2);
    uVar3 = 4;
  }
  else {
    if ((param_3 != 5) || (*(long *)(param_1 + 0x1c8) != 2)) goto LAB_105d50f94;
    func_0x00010c2929c0(*(undefined8 *)(param_1 + 0x170),param_2,1);
    uVar3 = 5;
  }
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
LAB_105d50f94:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d50fb4; end: 105d5106b; -[SCPreviewFeatureCaptionImpl _removeCaptionFromPlaybackLayer:] */

void FUN_105d50fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1e0);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = param_3;
    func_0x00010c0ff520(param_3);
    func_0x00010c0594e0(puVar2,param_2,uVar3);
    uVar3 = param_3;
    func_0x00010c0ff520();
    if ((int)uVar3 != -1) {
      lVar4 = *(long *)(param_1 + 0x1e0);
      func_0x00010c0ff640(lVar4,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        func_0x00010bf6c5a0(*(undefined8 *)(param_1 + 0x1e0),param_2,puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(lVar4);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d5106c; end: 105d51183; -[SCPreviewFeatureCaptionImpl _updateCaptionFromPlaybackLayer:] */

void FUN_105d5106c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1e0);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010c0ff520(param_3);
    func_0x00010c01e540(puVar2);
    uVar4 = param_3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x000108e3761c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x1e0);
    _objc_retain(uVar3);
    func_0x00010c288840(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d51184; end: 105d5122b;  */

void FUN_105d51184(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c118b40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1e5020(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5cc00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1863a0(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d5122c; end: 105d5136f; -[SCPreviewFeatureCaptionImpl _addPlaybackLayerWithCaption:] */

void FUN_105d5122c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1e0);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000108e3761c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x1e0);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c240640(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf5ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    func_0x00010c282760(uVar7);
    func_0x00010c1dd660(param_3);
    param_1 = param_1 + 0x250;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf736c0();
    _objc_release(param_1);
    _objc_release(uVar7);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d51370; end: 105d51373; -[SCPreviewFeatureCaptionImpl featureVideoTracking:willTrackView:] */

void FUN_105d51370(void)

{
  return;
}



/* Entry: 105d51374; end: 105d513b7; -[SCPreviewFeatureCaptionImpl featureVideoTracking:didTrackView:] */

void FUN_105d51374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf30100(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bed4d40(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d513b8; end: 105d513fb; -[SCPreviewFeatureCaptionImpl featureVideoTracking:didDisableTrackingForView:] */

void FUN_105d513b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf30100(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bed4d40(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d513fc; end: 105d51407; -[SCPreviewFeatureCaptionImpl didUpdateLoadingState:isLoading:] */

void FUN_105d513fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c16b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x150),PTR_s_setMagicCaptionButtonIsLoading__11264dfd0,
             param_4);
  return;
}



/* Entry: 105d51408; end: 105d5146f; -[SCPreviewFeatureCaptionImpl didGenerateCaptionWithProvider:caption:] */

void FUN_105d51408(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(param_4);
  func_0x00010c212f20(uVar1,param_2,param_4);
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2740();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d51470; end: 105d51487; -[SCPreviewFeatureCaptionImpl delegate] */

void FUN_105d51470(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d51488; end: 105d51493; -[SCPreviewFeatureCaptionImpl setDelegate:] */

void FUN_105d51488(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x248,param_3);
  return;
}



/* Entry: 105d51494; end: 105d514ab; -[SCPreviewFeatureCaptionImpl multiSnapDelegate] */

void FUN_105d51494(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d514ac; end: 105d514b7; -[SCPreviewFeatureCaptionImpl setMultiSnapDelegate:] */

void FUN_105d514ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x250,param_3);
  return;
}



/* Entry: 105d514b8; end: 105d514bf; -[SCPreviewFeatureCaptionImpl captionMenuOpened] */

undefined1 FUN_105d514b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x241);
}



/* Entry: 105d514c0; end: 105d514d7; -[SCPreviewFeatureCaptionImpl parentViewControllerDelegate] */

void FUN_105d514c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 600);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d514d8; end: 105d514e3; -[SCPreviewFeatureCaptionImpl setParentViewControllerDelegate:] */

void FUN_105d514d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 600,param_3);
  return;
}



/* Entry: 105d514e4; end: 105d514eb; -[SCPreviewFeatureCaptionImpl toolbarItemViewModel] */

undefined8 FUN_105d514e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x260);
}



/* Entry: 105d514ec; end: 105d51753; -[SCPreviewFeatureCaptionImpl .cxx_destruct] */

void FUN_105d514ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_destroyWeak(param_1 + 600);
  _objc_destroyWeak(param_1 + 0x250);
  _objc_destroyWeak(param_1 + 0x248);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
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



/* Entry: 105d51754; end: 105d5202b; -[SCPreviewFeatureCaptionServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d51754(long param_1,undefined8 param_2)

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
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lStack_1f8;
  long lStack_1f0;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
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
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_1127353e4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar31;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_1127353e0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar31;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_1127353e8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar31;
  func_0x00010bf2fe40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  lVar31 = param_1;
  FUN_105d5202c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar31;
  func_0x00010bf30080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  lVar31 = param_1;
  FUN_105d5202c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar31;
  func_0x00010c08ae00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_1127353f0;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar31;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar31);
  lVar31 = param_1;
  FUN_105d5202c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar31;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_1127353f4;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar31;
  func_0x00010c293d00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_1127353f8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar31;
  func_0x00010c293d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bfba560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_1127353fc;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar31;
  func_0x00010c1299a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112735400;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar31;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112735404;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar31;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112735408;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar31;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11273540c;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar31;
  func_0x00010c0b82c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112735410;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar31;
  func_0x00010c29b9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lStack_1f8 = 0;
    lStack_1f0 = 0;
    lVar31 = 0;
  }
  else {
    lStack_1f0 = param_1 + _DAT_112735414;
    _objc_loadWeakRetained();
    lStack_1f8 = param_1 + _DAT_112735418;
    _objc_loadWeakRetained();
    lVar31 = param_1 + _DAT_112735420;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar31;
  func_0x00010c26c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112735424;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar31;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112735428;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar31;
  func_0x00010c0b6320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11273542c;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar31;
  func_0x00010c071800();
  _objc_release(lVar31);
  lVar31 = param_1;
  func_0x000105d52050();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar31;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  lVar31 = param_1;
  func_0x000105d52050();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar31;
  func_0x00010c29a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112735434;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar31;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112735438;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar31;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar31);
  if (param_1 == 0) {
    lVar32 = 0;
    lVar31 = 0;
    lVar29 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11273543c;
    _objc_loadWeakRetained();
    lVar32 = param_1 + _DAT_11273541c;
    _objc_loadWeakRetained();
    lVar29 = param_1 + _DAT_112735440;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar29;
  func_0x00010bfe8080();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar30;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  _objc_release(lVar29);
  if (param_1 == 0) {
    lVar29 = 0;
    lVar30 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112735444;
    _objc_loadWeakRetained();
    lVar30 = param_1 + _DAT_112735448;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar30;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11273544c;
    _objc_loadWeakRetained();
  }
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_170 = FUN_105d52074;
  puStack_168 = &UNK_1108e6ed8;
  uStack_70 = (undefined1)lVar19;
  uStack_178 = 0xc2000000;
  lStack_e8 = lStack_1f0;
  lStack_e0 = lStack_1f8;
  puVar26 = PTR_PTR_1126ae720;
  lStack_160 = lVar1;
  lStack_158 = lVar2;
  lStack_150 = lVar3;
  lStack_148 = lVar4;
  lStack_140 = lVar5;
  lStack_138 = lVar7;
  lStack_130 = lVar6;
  lStack_128 = lVar9;
  lStack_120 = lVar10;
  lStack_118 = lVar11;
  lStack_110 = lVar8;
  lStack_108 = lVar12;
  lStack_100 = lVar13;
  lStack_f8 = lVar14;
  lStack_f0 = lVar15;
  lStack_d8 = lVar17;
  lStack_d0 = lVar16;
  lStack_c8 = lVar18;
  lStack_c0 = lVar20;
  lStack_b8 = lVar21;
  lStack_b0 = lVar22;
  lStack_a8 = lVar23;
  lStack_a0 = lVar31;
  lStack_98 = lVar32;
  lStack_90 = lVar24;
  lStack_88 = lVar29;
  lStack_80 = lVar25;
  lStack_78 = lVar30;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_180);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126c4458;
  _objc_alloc(PTR_PTR_1126c4458);
  func_0x00010bffc500();
  if (param_1 == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = *(undefined8 *)(param_1 + _DAT_112735450);
  }
  func_0x00010bf9d660(uVar28,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(lVar30);
  _objc_release(lVar25);
  _objc_release(lVar29);
  _objc_release(lVar24);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar18);
  _objc_release(lVar16);
  _objc_release(lVar17);
  _objc_release(lStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105d5202c; end: 105d52073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d5202c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127353ec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d52074; end: 105d52303;  */

void FUN_105d52074(void)

{
  _objc_alloc(PTR_PTR_1126c4450);
  func_0x00010c05e1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d52304; end: 105d52483; -[SCPreviewFeatureCaptionServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d52304(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735450,0);
  _objc_destroyWeak(param_1 + _DAT_11273544c);
  _objc_destroyWeak(param_1 + _DAT_112735448);
  _objc_destroyWeak(param_1 + _DAT_112735444);
  _objc_destroyWeak(param_1 + _DAT_112735440);
  _objc_destroyWeak(param_1 + _DAT_11273543c);
  _objc_destroyWeak(param_1 + _DAT_112735438);
  _objc_destroyWeak(param_1 + _DAT_112735434);
  _objc_destroyWeak(param_1 + _DAT_112735430);
  _objc_destroyWeak(param_1 + _DAT_11273542c);
  _objc_destroyWeak(param_1 + _DAT_112735428);
  _objc_destroyWeak(param_1 + _DAT_112735424);
  _objc_destroyWeak(param_1 + _DAT_112735420);
  _objc_destroyWeak(param_1 + _DAT_11273541c);
  _objc_destroyWeak(param_1 + _DAT_112735418);
  _objc_destroyWeak(param_1 + _DAT_112735414);
  _objc_destroyWeak(param_1 + _DAT_112735410);
  _objc_destroyWeak(param_1 + _DAT_11273540c);
  _objc_destroyWeak(param_1 + _DAT_112735408);
  _objc_destroyWeak(param_1 + _DAT_112735404);
  _objc_destroyWeak(param_1 + _DAT_112735400);
  _objc_destroyWeak(param_1 + _DAT_1127353fc);
  _objc_destroyWeak(param_1 + _DAT_1127353f8);
  _objc_destroyWeak(param_1 + _DAT_1127353f4);
  _objc_destroyWeak(param_1 + _DAT_1127353f0);
  _objc_destroyWeak(param_1 + _DAT_1127353ec);
  _objc_destroyWeak(param_1 + _DAT_1127353e8);
  _objc_destroyWeak(param_1 + _DAT_1127353e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127353e0);
  return;
}



/* Entry: 105d52484; end: 105d5252f; -[SCPreviewFeatureCaptionServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d52484(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735454;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11273545c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf2fba0(lVar2);
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



/* Entry: 105d52530; end: 105d52573; -[SCPreviewFeatureCaptionServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d52530(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273545c);
  _objc_destroyWeak(param_1 + _DAT_112735458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735454);
  return;
}



/* Entry: 105d52574; end: 105d5261f; -[SCPreviewFeatureCaptionToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d52574(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735460;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735468;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf2fba0(lVar2);
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



/* Entry: 105d52620; end: 105d52663; -[SCPreviewFeatureCaptionToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d52620(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735468);
  _objc_destroyWeak(param_1 + _DAT_112735464);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735460);
  return;
}



/* Entry: 105d52664; end: 105d526d7; -[SCMagicCaptionServices initWithMagicCaptionProvider:] */

undefined1 * FUN_105d52664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecfe8;
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



/* Entry: 105d526d8; end: 105d526df; -[SCMagicCaptionServices magicCaptionProvider] */

undefined8 FUN_105d526d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d526e0; end: 105d526eb; -[SCMagicCaptionServices .cxx_destruct] */

void FUN_105d526e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d526ec; end: 105d52803; -[SCPreviewFeatureCommerceStickerImpl initWithAttachmentToolV2ScopeExposer:stickerContainer:onDemandResourceDownloader:itemViewService:] */

undefined1 *
FUN_105d526ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ecff0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d52804; end: 105d5280b; -[SCPreviewFeatureCommerceStickerImpl responderChainPriority] */

undefined8 FUN_105d52804(void)

{
  return 0x7fffffff;
}



/* Entry: 105d5280c; end: 105d5291b; -[SCPreviewFeatureCommerceStickerImpl presentPicker] */

void FUN_105d5280c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0f3d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar3,param_2,lVar2,1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126c4460;
    _objc_alloc(PTR_PTR_1126c4460);
    func_0x00010c0567c0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar4);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 105d5291c; end: 105d5293b; -[SCPreviewFeatureCommerceStickerImpl attachmentToolScopeWantsToDismiss:attachments:] */

void FUN_105d5291c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105d5293c; end: 105d52a13; -[SCPreviewFeatureCommerceStickerImpl selectedAttachments] */

void FUN_105d5293c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c255480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x000100817178(uVar2,&PTR___NSConcreteGlobalBlock_1108e6f28);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d52a14; end: 105d52a2b; -[SCPreviewFeatureCommerceStickerImpl parentViewControllerDelegate] */

void FUN_105d52a14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d52a2c; end: 105d52a37; -[SCPreviewFeatureCommerceStickerImpl setParentViewControllerDelegate:] */

void FUN_105d52a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105d52a38; end: 105d52a93; -[SCPreviewFeatureCommerceStickerImpl .cxx_destruct] */

void FUN_105d52a38(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d52a94; end: 105d52c1b; -[SCPreviewFeatureCommerceStickerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d52a94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11273548c;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar7;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf91320();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_initWeak(auStack_48,param_1);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = (undefined1)lVar3;
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c4470;
  _objc_alloc(PTR_PTR_1126c4470);
  func_0x00010c000040();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11273549c);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105d52c1c; end: 105d52d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d52c1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x28) != '\x01')) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126c4468;
    _objc_alloc(PTR_PTR_1126c4468);
    uVar9 = *(undefined8 *)(lVar1 + _DAT_1127354a0);
    lVar7 = (long)_DAT_112735490;
    _objc_retain(uVar9);
    lVar7 = lVar1 + lVar7;
    _objc_loadWeakRetained(lVar7);
    lVar2 = lVar7;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + _DAT_112735494;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf89340();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + _DAT_112735498;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4be0(puVar8,param_2,uVar9,lVar2,lVar4,lVar6);
    _objc_release(uVar9);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar7);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105d52d64; end: 105d52ddf; -[SCPreviewFeatureCommerceStickerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d52d64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127354a0,0);
  _objc_storeStrong(param_1 + _DAT_11273549c,0);
  _objc_destroyWeak(param_1 + _DAT_112735498);
  _objc_destroyWeak(param_1 + _DAT_112735494);
  _objc_destroyWeak(param_1 + _DAT_112735490);
  _objc_destroyWeak(param_1 + _DAT_11273548c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735488);
  return;
}



/* Entry: 105d52de0; end: 105d52e8b; -[SCPreviewFeatureCommerceStickerServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d52de0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127354a4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127354ac;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf426c0(lVar2);
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



/* Entry: 105d52e8c; end: 105d52ecf; -[SCPreviewFeatureCommerceStickerServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d52e8c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127354ac);
  _objc_destroyWeak(param_1 + _DAT_1127354a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127354a4);
  return;
}



/* Entry: 105d52ed0; end: 105d52f73; -[SCCreativeToolsDurationCaptionUpdateHandler initWithCaption:textToSpeechFeature:] */

undefined1 *
FUN_105d52ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecff8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d52f74; end: 105d52f7b; -[SCCreativeToolsDurationCaptionUpdateHandler isDurationEditingSupportedInCaptureMode:] */

undefined8 FUN_105d52f74(void)

{
  return 1;
}



/* Entry: 105d52f7c; end: 105d52f83; -[SCCreativeToolsDurationCaptionUpdateHandler previewUserInteractionStateType] */

undefined8 FUN_105d52f7c(void)

{
  return 8;
}



/* Entry: 105d52f84; end: 105d52f8b; -[SCCreativeToolsDurationCaptionUpdateHandler previewLatencyLoggerToolType] */

undefined8 FUN_105d52f84(void)

{
  return 10;
}



/* Entry: 105d52f8c; end: 105d53037; -[SCCreativeToolsDurationCaptionUpdateHandler shouldShowTextToSpeechUI] */

undefined8 FUN_105d52f8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c26c940();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    _objc_release(uVar1);
    if (lVar4 == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c252440(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf2d800(uVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105d53038; end: 105d530e3; -[SCCreativeToolsDurationCaptionUpdateHandler shouldSetTextToSpeechButtonSelected] */

undefined8 FUN_105d53038(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c26c940();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    _objc_release(uVar1);
    if (lVar4 == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c252440(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c26c960(uVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105d530e4; end: 105d5318f; -[SCCreativeToolsDurationCaptionUpdateHandler doesTextToSpeechPreviewExist] */

undefined8 FUN_105d530e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c26c940();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    _objc_release(uVar1);
    if (lVar4 == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c252440(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c26c9c0(uVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105d53190; end: 105d5322b; -[SCCreativeToolsDurationCaptionUpdateHandler commitTextToSpeechPreview] */

void FUN_105d53190(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26c940();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c252440(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42840(uVar2,param_2,uVar1);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105d5322c; end: 105d53373; -[SCCreativeToolsDurationCaptionUpdateHandler generateTextToSpeechPreviewWithStartOffset:completion:] */

void FUN_105d5322c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26c940();
  if ((int)uVar2 != 0) {
    lVar4 = *(long *)(param_1 + 8);
    _objc_release(uVar1);
    if (lVar4 == 0) goto LAB_105d53354;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c252440(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c26c960(uVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c252440(uVar3);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar2 == 0) {
      uStack_58 = param_3[1];
      uStack_60 = *param_3;
      uStack_50 = param_3[2];
      func_0x00010c136a80(uVar1,param_2,uVar3,&uStack_60,param_4);
    }
    else {
      uStack_58 = param_3[1];
      uStack_60 = *param_3;
      uStack_50 = param_3[2];
      func_0x00010bfc03c0(uVar1,param_2,uVar3,&uStack_60,param_4);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
LAB_105d53354:
  _objc_release(param_4);
  return;
}



/* Entry: 105d53374; end: 105d533f3; -[SCCreativeToolsDurationCaptionUpdateHandler shouldIgnoreSnapdocUpdates:] */

void FUN_105d53374(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26c940();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c231000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105d533f4; end: 105d53423; -[SCCreativeToolsDurationCaptionUpdateHandler .cxx_destruct] */

void FUN_105d533f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d53424; end: 105d5342b; -[SCCreativeToolsDurationStickerUpdateHandler isDurationEditingSupportedInCaptureMode:] */

undefined8 FUN_105d53424(void)

{
  return 1;
}



/* Entry: 105d5342c; end: 105d53433; -[SCCreativeToolsDurationStickerUpdateHandler previewUserInteractionStateType] */

undefined8 FUN_105d5342c(void)

{
  return 10;
}



/* Entry: 105d53434; end: 105d5343b; -[SCCreativeToolsDurationStickerUpdateHandler previewLatencyLoggerToolType] */

undefined8 FUN_105d53434(void)

{
  return 0xc;
}



/* Entry: 105d5343c; end: 105d53737; -[SCPreviewFeatureCreativeToolsDurationImpl initWithVideoPlayback:previewConfiguration:previewScopeServices:swipeDownDismiss:stickerContainerFeature:alignmentFeature:userInteractionStateLogger:videoTrackingServices:creativeExpressionsManager:videoTracking:thumbnailGenerator:videoPlaybackControls:latencyLogger:textToSpeechFeature:] */

undefined8 *
FUN_105d5343c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126ed000;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_9);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_11;
    _objc_release(uVar2);
    uVar2 = puVar1[0x11];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126ec0();
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_14;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x15,param_15);
    _objc_retain(param_16);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_16;
    _objc_release(uVar2);
  }
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
  return puVar1;
}



/* Entry: 105d53738; end: 105d5373f; -[SCPreviewFeatureCreativeToolsDurationImpl responderChainPriority] */

undefined8 FUN_105d53738(void)

{
  return 0x7fffffff;
}



/* Entry: 105d53740; end: 105d537a3; -[SCPreviewFeatureCreativeToolsDurationImpl dealloc] */

void FUN_105d53740(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282180();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ed000;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105d537a4; end: 105d537cb; -[SCPreviewFeatureCreativeToolsDurationImpl tool] */

void FUN_105d537a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d537cc; end: 105d53853; -[SCPreviewFeatureCreativeToolsDurationImpl updateEditingTool:] */

void FUN_105d537cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (((param_3 != 0) && (*(char *)(param_1 + 0xb8) == '\x01')) &&
     (lVar1 = *(long *)(param_1 + 0x50), lVar1 != 0)) {
    func_0x00010c280560();
    lVar2 = param_3;
    func_0x00010c280560();
    if (lVar1 == lVar2) {
      uVar3 = *(ulong *)(param_1 + 0x50);
      func_0x00010c071ae0(uVar3,param_2,param_3);
      if ((uVar3 & 1) == 0) {
        _objc_retain(param_3);
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        *(long *)(param_1 + 0x50) = param_3;
        _objc_release(uVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d53854; end: 105d53c4f; -[SCPreviewFeatureCreativeToolsDurationImpl enterDurationEditingModeWithTool:] */

void FUN_105d53854(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be63560();
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar1;
  _objc_release(uVar6);
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1121c0(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c293a40(lVar1);
  _objc_release(lVar1);
  lVar1 = param_1 + 0xc0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa1e80();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a9a0();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0600();
  _objc_release(uVar6);
  func_0x00010beabda0(param_1);
  func_0x00010bea39c0(param_1);
  uVar6 = param_3;
  func_0x00010c081660();
  if ((int)uVar6 != 0) {
    func_0x00010be07080(param_1);
    func_0x00010be8dbc0(param_1);
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    _CMTimeMakeWithSeconds(&uStack_c0,0,0x78);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276200();
    _CMTimeMakeWithSeconds(auStack_88,0x78);
    _CMTimeRangeMake(&uStack_70,&uStack_c0,auStack_88);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c07e620();
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    uStack_98 = uStack_48;
    uStack_a0 = uStack_50;
    func_0x00010bf92200(uVar6);
    _objc_release(lVar1);
    _objc_release(uVar6);
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf30e80();
  _objc_release(lVar1);
  if (lVar2 == 3) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c26fe60(uVar6);
    _objc_release(uVar6);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf60b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x10,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d24a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar4;
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be9d4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa9a0(*(undefined8 *)(param_1 + 0x78));
  if (lVar1 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_70,lVar1);
  }
  func_0x00010bee3500(param_1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf5af20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010beb06e0(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar6);
  func_0x00010bea5ee0(0x3fd6666666666666,param_1);
  lVar2 = param_1 + 0xc0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfa1e40();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1121c0(*(undefined8 *)(param_1 + 0x80));
  _objc_release(param_3);
  func_0x00010c292100(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105d53c50; end: 105d54373; -[SCPreviewFeatureCreativeToolsDurationImpl exitDurationEditingMode] */

void FUN_105d53c50(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar6 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c111500(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c250e60(lVar6);
  _objc_release(lVar6);
  func_0x00010bea39c0(param_1);
  lVar6 = param_1 + 8;
  _objc_loadWeakRetained(lVar6);
  lVar2 = lVar6;
  func_0x00010bf5af20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar6;
  func_0x00010bf30e80();
  _objc_release(lVar6);
  if (lVar2 == 3) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c270440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c2700e0(uVar5);
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar5);
  func_0x00010bee34e0(param_1);
  _objc_release(uVar5);
  lVar6 = *(long *)(param_1 + 0x78);
  func_0x00010c158160();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_210,lVar6);
  }
  uVar7 = param_1;
  func_0x00010be74f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_68 = uStack_208;
  uStack_70 = uStack_210;
  uStack_60 = uStack_200;
  uStack_b8 = uStack_208;
  uStack_c0 = uStack_210;
  uStack_a8 = uStack_1f8;
  uStack_b0 = uStack_200;
  uStack_98 = uStack_1e8;
  uStack_a0 = uStack_1f0;
  _CMTimeRangeGetEnd(&uStack_88,&uStack_c0);
  uStack_118 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_120 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_110 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_f8 = uStack_1f0;
  uStack_100 = uStack_1f8;
  uStack_f0 = uStack_1e8;
  uVar12 = uVar7;
  uStack_e0 = uStack_120;
  uStack_d8 = uStack_118;
  uStack_d0 = uStack_110;
  func_0x00010bf529e0();
  if (uVar12 != 0) {
    uVar12 = 0;
    do {
      uVar8 = uVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar8 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_c0,uVar8);
      }
      _objc_release(uVar8);
      uStack_198 = uStack_118;
      uStack_1a0 = uStack_120;
      uStack_190 = uStack_110;
      uStack_168 = uStack_a0;
      uStack_170 = uStack_a8;
      uStack_160 = uStack_98;
      _CMTimeRangeMake(&uStack_150,&uStack_1a0,&uStack_170);
      uStack_198 = uStack_118;
      uStack_1a0 = uStack_120;
      uStack_190 = uStack_110;
      uStack_168 = uStack_a0;
      uStack_170 = uStack_a8;
      uStack_160 = uStack_98;
      _CMTimeAdd(&uStack_120,&uStack_1a0,&uStack_170);
      uVar8 = uVar7;
      func_0x00010bf529e0();
      if (uVar12 == uVar8 - 1) {
        uStack_198 = uStack_148;
        uStack_1a0 = uStack_150;
        uStack_188 = uStack_138;
        uStack_190 = uStack_140;
        uStack_178 = uStack_128;
        uStack_180 = uStack_130;
        _CMTimeRangeGetEnd(&uStack_170,&uStack_1a0);
        uStack_198 = uStack_80;
        uStack_1a0 = uStack_88;
        uStack_190 = uStack_78;
        puVar9 = &uStack_1a0;
        _CMTimeCompare(puVar9,&uStack_170);
        if ((int)puVar9 < 0) goto LAB_105d53f20;
        uStack_198 = uStack_148;
        uStack_1a0 = uStack_150;
        uStack_188 = uStack_138;
        uStack_190 = uStack_140;
        uStack_178 = uStack_128;
        uStack_180 = uStack_130;
        uStack_168 = uStack_68;
        uStack_170 = uStack_70;
        uStack_160 = uStack_60;
        puVar9 = &uStack_1a0;
        _CMTimeRangeContainsTime(puVar9,&uStack_170);
        if ((int)puVar9 != 0) {
          uStack_168 = uStack_68;
          uStack_170 = uStack_70;
          uStack_160 = uStack_60;
          uStack_1b8 = uStack_148;
          uStack_1c0 = uStack_150;
          uStack_1b0 = uStack_140;
          _CMTimeSubtract(&uStack_1a0,&uStack_170,&uStack_1c0);
          uStack_168 = uStack_b8;
          uStack_170 = uStack_c0;
          uStack_160 = uStack_b0;
          uStack_1b8 = uStack_198;
          uStack_1c0 = uStack_1a0;
          uStack_1b0 = uStack_190;
          _CMTimeAdd(&uStack_e0,&uStack_170,&uStack_1c0);
        }
        uStack_198 = uStack_b8;
        uStack_1a0 = uStack_c0;
        uStack_188 = uStack_a8;
        uStack_190 = uStack_b0;
        uStack_178 = uStack_98;
        uStack_180 = uStack_a0;
        _CMTimeRangeGetEnd(&uStack_170,&uStack_1a0);
        uStack_198 = uStack_d8;
        uStack_1a0 = uStack_e0;
        uStack_190 = uStack_d0;
        puVar9 = &uStack_170;
        puVar11 = &uStack_1a0;
LAB_105d54148:
        _CMTimeSubtract(&uStack_100,puVar9,puVar11);
        break;
      }
LAB_105d53f20:
      uStack_198 = uStack_148;
      uStack_1a0 = uStack_150;
      uStack_188 = uStack_138;
      uStack_190 = uStack_140;
      uStack_178 = uStack_128;
      uStack_180 = uStack_130;
      uStack_168 = uStack_68;
      uStack_170 = uStack_70;
      uStack_160 = uStack_60;
      puVar9 = &uStack_1a0;
      _CMTimeRangeContainsTime(puVar9,&uStack_170);
      if ((int)puVar9 == 0) {
        uStack_198 = uStack_148;
        uStack_1a0 = uStack_150;
        uStack_188 = uStack_138;
        uStack_190 = uStack_140;
        uStack_178 = uStack_128;
        uStack_180 = uStack_130;
        uStack_168 = uStack_80;
        uStack_170 = uStack_88;
        uStack_160 = uStack_78;
        puVar9 = &uStack_1a0;
        _CMTimeRangeContainsTime(puVar9,&uStack_170);
        if ((int)puVar9 != 0) {
          uStack_168 = uStack_80;
          uStack_170 = uStack_88;
          uStack_160 = uStack_78;
          uStack_1b8 = uStack_148;
          uStack_1c0 = uStack_150;
          uStack_1b0 = uStack_140;
          _CMTimeSubtract(&uStack_1a0,&uStack_170,&uStack_1c0);
          uStack_1b8 = uStack_b8;
          uStack_1c0 = uStack_c0;
          uStack_1b0 = uStack_b0;
          uStack_1d8 = uStack_198;
          uStack_1e0 = uStack_1a0;
          uStack_1d0 = uStack_190;
          _CMTimeAdd(&uStack_170,&uStack_1c0,&uStack_1e0);
          uStack_1b8 = uStack_168;
          uStack_1c0 = uStack_170;
          uStack_1b0 = uStack_160;
          uStack_1d8 = uStack_d8;
          uStack_1e0 = uStack_e0;
          uStack_1d0 = uStack_d0;
          puVar9 = &uStack_1c0;
          puVar11 = &uStack_1e0;
          goto LAB_105d54148;
        }
      }
      else {
        uStack_168 = uStack_68;
        uStack_170 = uStack_70;
        uStack_160 = uStack_60;
        uStack_1b8 = uStack_148;
        uStack_1c0 = uStack_150;
        uStack_1b0 = uStack_140;
        _CMTimeSubtract(&uStack_1a0,&uStack_170,&uStack_1c0);
        uStack_168 = uStack_b8;
        uStack_170 = uStack_c0;
        uStack_160 = uStack_b0;
        uStack_1b8 = uStack_198;
        uStack_1c0 = uStack_1a0;
        uStack_1b0 = uStack_190;
        _CMTimeAdd(&uStack_e0,&uStack_170,&uStack_1c0);
      }
      uVar12 = uVar12 + 1;
      uVar8 = uVar7;
      func_0x00010bf529e0();
    } while (uVar12 < uVar8);
  }
  uStack_148 = uStack_d8;
  uStack_150 = uStack_e0;
  uStack_140 = uStack_d0;
  uStack_198 = uStack_f8;
  uStack_1a0 = uStack_100;
  uStack_190 = uStack_f0;
  _CMTimeRangeMake(&uStack_c0,&uStack_150,&uStack_1a0);
  _objc_release(uVar7);
  _objc_release(uVar7);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar5);
  func_0x00010bea5ee0(0x3ff0000000000000,param_1);
  if (lVar6 == 0) {
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
  }
  else {
    func_0x00010c0c6b60(&uStack_150,lVar6);
    func_0x00010c27c900(&uStack_1a0,lVar6);
  }
  puVar9 = &uStack_150;
  _CMTimeRangeEqual(puVar9,&uStack_1a0);
  if ((int)puVar9 == 0) {
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    func_0x00010bdcece0(param_1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a9a0();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0600();
  _objc_release(uVar5);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x78));
  puVar1 = PTR_DAT_1126a51e0;
  uVar13 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar13);
  uVar10 = uVar13;
  func_0x00010010fab4(uVar13,puVar1);
  uVar5 = uVar13;
  if ((int)uVar10 == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar13);
  uVar10 = uVar5;
  func_0x00010c2345e0();
  if ((int)uVar10 != 0) {
    func_0x00010bf42820(uVar5);
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  lVar2 = param_1 + 0xc0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfa1e60();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1121c0(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c292040(lVar2);
  _objc_release(lVar2);
  lVar2 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c111500(*(undefined8 *)(param_1 + 0x80));
  func_0x00010bf956c0(lVar2);
  _objc_release(lVar2);
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar6);
  return;
}



/* Entry: 105d54374; end: 105d5438f; -[SCPreviewFeatureCreativeToolsDurationImpl isTouchControlGestureEnabledForTouchTarget:] */

undefined8 FUN_105d54374(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_isEqual__1125fa0c8);
    return uVar1;
  }
  return 1;
}



/* Entry: 105d54390; end: 105d5448f; -[SCPreviewFeatureCreativeToolsDurationImpl touchControlGestureDidBeginForTouchTarget:] */

void FUN_105d54390(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    uVar5 = param_3;
    func_0x00010010fab4(param_3,PTR_DAT_1126a51d8);
    uVar1 = param_3;
    if ((int)uVar5 == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    uVar5 = uVar1;
    func_0x00010c081160();
    if ((int)uVar5 != 0) {
      *(undefined1 *)(param_1 + 0xb9) = 1;
      uVar5 = uVar1;
      func_0x00010bf8b180();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = uVar5;
      _objc_release(uVar4);
      lVar3 = param_1;
      func_0x00010be63560();
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      *(long *)(param_1 + 0x80) = lVar3;
      _objc_release(uVar5);
      puVar2 = PTR_DAT_1126a51e0;
      uVar6 = *(undefined8 *)(param_1 + 0x80);
      _objc_retain(uVar6);
      uVar4 = uVar6;
      func_0x00010010fab4(uVar6,puVar2);
      uVar5 = uVar6;
      if ((int)uVar4 == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar6);
      func_0x00010c231000(uVar5);
      _objc_release(uVar5);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d54490; end: 105d545af; -[SCPreviewFeatureCreativeToolsDurationImpl touchControlGestureDidFinishForTouchTarget:trashContainsGesture:] */

void FUN_105d54490(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (((*(byte *)(param_1 + 0xb8) & 1) == 0) && (*(long *)(param_1 + 0x58) != 0)) {
    lVar3 = param_3;
    func_0x00010010fab4(param_3,PTR_DAT_1126a51d8);
    lVar1 = param_3;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    if (((param_4 & 1) == 0) && (lVar1 != 0)) {
      func_0x00010c2790e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdced40(param_1);
      _objc_release(uVar4);
      puVar2 = PTR_DAT_1126a51e0;
      uVar6 = *(undefined8 *)(param_1 + 0x80);
      _objc_retain(uVar6);
      uVar5 = uVar6;
      func_0x00010010fab4(uVar6,puVar2);
      uVar4 = uVar6;
      if ((int)uVar5 == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar6);
      func_0x00010c231000(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = 0;
      _objc_release(uVar5);
      _objc_release(uVar4);
      *(undefined1 *)(param_1 + 0xb9) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      _objc_release(uVar4);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d545b0; end: 105d54603; -[SCPreviewFeatureCreativeToolsDurationImpl editingWillBeginForTool:] */

void FUN_105d545b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be63560(param_1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar1;
  _objc_release(uVar2);
  func_0x00010be07080(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


