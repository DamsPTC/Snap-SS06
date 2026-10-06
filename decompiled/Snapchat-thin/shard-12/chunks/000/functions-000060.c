/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ccc25c; end: 108ccc2ab; -[SCPreviewDrawingToolBarButtonItem _quitDrawing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccc25c(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277a78c) != 0) {
    return;
  }
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccc2ac; end: 108ccc497; -[SCPreviewDrawingToolBarButtonItem _setDrawingToolBarButtonItemSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccc2ac(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c084240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = 0x3fd99999a0000000;
  }
  else {
    uVar1 = param_2;
    func_0x00010c084240(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084100();
    _objc_release(uVar1);
  }
  uVar2 = param_2;
  func_0x00010bf1ff20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(uVar2);
      }
      uVar9 = *(ulong *)(uVar10 * 8);
      puVar3 = PTR_PTR_1126dba70;
      _objc_opt_class(PTR_PTR_1126dba70);
      uVar4 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar3);
      if ((uVar4 & 1) != 0) {
        func_0x00010c265740(param_1,uVar9);
      }
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar10);
    uVar1 = uVar2;
    func_0x00010bf52a60();
  }
  _objc_release(uVar2);
  func_0x00010c1cbc00(param_2);
  func_0x00010c084240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084120();
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = (long)_DAT_11277a7b0;
  if (*(long *)(param_4 + lVar5) != 0) {
    return;
  }
  puVar3 = PTR_PTR_1126dba78;
  func_0x00010bf57720();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + lVar5);
  *(undefined **)(param_4 + lVar5) = puVar3;
  _objc_release(uVar6);
  func_0x00010c23d620(*(undefined8 *)(param_4 + lVar5));
  func_0x00010c21e900(*(undefined8 *)(param_4 + lVar5));
  uVar6 = *(undefined8 *)(param_4 + lVar5);
  func_0x00010c160fc0(uVar6);
  func_0x000108ede7c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_4 + lVar5));
  _objc_release(uVar6);
  lVar8 = param_4;
  func_0x00010bf41160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(*(undefined8 *)(param_4 + lVar5));
  _objc_release(lVar8);
  func_0x00010c2226a0(*(undefined8 *)(param_4 + lVar5));
  func_0x00010c17f920(*(undefined8 *)(param_4 + lVar5));
  func_0x00010c08cdc0(*(undefined8 *)(param_4 + lVar5));
  lVar8 = (long)_DAT_11277a79c;
  uVar6 = *(undefined8 *)(param_4 + lVar5);
  if (*(long *)(param_4 + lVar8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d1450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_moveDropletToColor__112611f28);
    return;
  }
  func_0x00010c0d1420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_4 + lVar8);
  *(undefined8 *)(param_4 + lVar8) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 108ccc498; end: 108ccc5df; -[SCPreviewDrawingToolBarButtonItem _setupPaletteModelAndColorPickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccc498(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277a7b0;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126dba78;
  func_0x00010bf57720(PTR_PTR_1126dba78,param_2,*(undefined8 *)(param_1 + _DAT_11277a7a0));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c160fc0(uVar2);
  func_0x000108ede7c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bf41160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar4);
  func_0x00010c2226a0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c17f920(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar5));
  lVar4 = (long)_DAT_11277a79c;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  if (*(long *)(param_1 + lVar4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d1450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_moveDropletToColor__112611f28);
    return;
  }
  func_0x00010c0d1420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108ccc5e0; end: 108ccc683; -[SCPreviewDrawingToolBarButtonItem emojiPickerView:didChangeEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccc5e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar2 = (long)_DAT_11277a78c;
  lVar3 = *(long *)(param_1 + lVar2);
  lVar4 = (long)_DAT_11277a7c0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_4;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a79c);
  *(undefined8 *)(param_1 + _DAT_11277a79c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a7c4);
  *(undefined8 *)(param_1 + _DAT_11277a7c4) = 0;
  _objc_release(uVar1);
  func_0x00010c285760(*(undefined8 *)(param_1 + _DAT_11277a7b8),param_2,param_4);
  *(undefined8 *)(param_1 + lVar2) = 0;
  if (lVar3 != 0) {
    func_0x00010bed72e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108ccc684; end: 108ccc6ff; -[SCPreviewDrawingToolBarButtonItem emojiPickerViewLayoutChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccc684(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (param_3 != *(long *)(param_1 + _DAT_11277a7b4)) {
    return;
  }
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108ccc700;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010bf03420(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,0);
  return;
}



/* Entry: 108ccc700; end: 108ccc743;  */

void FUN_108ccc700(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c084240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ccc744; end: 108ccc7d7; -[SCPreviewDrawingToolBarButtonItem pickerViewDidPressInCompactMode:] */

void FUN_108ccc744(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010bea38e0(param_1);
  puVar1 = PTR_PTR_1126dba68;
  _objc_opt_class(PTR_PTR_1126dba68);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8a160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108ccc7d8; end: 108ccc8a3; -[SCPreviewDrawingToolBarButtonItem pickerView:hideOtherPickers:] */

void FUN_108ccc7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0;
  if (param_4 == 0) {
    uVar2 = 0x3fc999999999999a;
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108ccc8a4;
  puStack_60 = &UNK_11084d5f8;
  uStack_48 = (undefined1)param_4;
  uStack_58 = param_1;
  uStack_50 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fd3333333333333,uVar2,puVar1,param_2,2,&puStack_78,0);
  _objc_release(uStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 108ccc8a4; end: 108ccc9eb;  */

void FUN_108ccc8a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf1ff20();
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
      puVar4 = PTR_PTR_1126dba70;
      _objc_opt_class(PTR_PTR_1126dba70);
      uVar5 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar4);
      if (((uVar5 & 1) != 0) && (uVar7 != *(ulong *)(param_1 + 0x28))) {
        uVar9 = 0;
        if (*(char *)(param_1 + 0x30) == '\0') {
          uVar9 = 0x3ff0000000000000;
        }
        func_0x00010c1677c0(uVar9,uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108ccc9ec; end: 108ccca23; -[SCPreviewDrawingToolBarButtonItem drawingViewDidStartDrawing:] */

void FUN_108ccc9ec(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccca24; end: 108cccaa7; -[SCPreviewDrawingToolBarButtonItem drawingView:didEndDrawingWithStrokeSize:isResized:] */

void FUN_108ccca24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bee2ce0();
  uVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a0a0(param_1);
  _objc_release(uVar1);
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cccaa8; end: 108cccadf; -[SCPreviewDrawingToolBarButtonItem drawingViewDidStartPinchResize:] */

void FUN_108cccaa8(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cccae0; end: 108cccb17; -[SCPreviewDrawingToolBarButtonItem drawingViewDidFinishPinchResize:] */

void FUN_108cccae0(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cccb18; end: 108cccb67; -[SCPreviewDrawingToolBarButtonItem drawingView:didMoveToPoint:] */

void FUN_108cccb18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a0c0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cccb68; end: 108cccc53; -[SCPreviewDrawingToolBarButtonItem toolbarColorPickerView:didChangeColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cccb68(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_11277a7b0) == param_3) {
    lVar2 = (long)_DAT_11277a78c;
    lVar3 = *(long *)(param_1 + lVar2);
    lVar4 = (long)_DAT_11277a79c;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = param_4;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277a7c0);
    *(undefined8 *)(param_1 + _DAT_11277a7c0) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277a7c4);
    *(undefined8 *)(param_1 + _DAT_11277a7c4) = 0;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + lVar2) = 0;
    func_0x00010c284660(*(undefined8 *)(param_1 + _DAT_11277a7b8),param_2,
                        *(undefined8 *)(param_1 + lVar4));
    lVar4 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8a060();
    _objc_release(lVar4);
    if (*(long *)(param_1 + lVar2) != lVar3) {
      func_0x00010bed72e0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108cccc54; end: 108ccccb3; -[SCPreviewDrawingToolBarButtonItem toolbarColorPickerView:didTogglePaletteToType:selectedColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cccc54(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11277a7b0) != param_3) {
    return;
  }
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ccccb4; end: 108ccccd3; -[SCPreviewDrawingToolBarButtonItem delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccccb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a7bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ccccd4; end: 108cccce7; -[SCPreviewDrawingToolBarButtonItem setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccccd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a7bc,param_3);
  return;
}



/* Entry: 108cccce8; end: 108ccccf7; -[SCPreviewDrawingToolBarButtonItem snapImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cccce8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a7c4);
}



/* Entry: 108ccccf8; end: 108cccd37; -[SCPreviewDrawingToolBarButtonItem setSnapImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccccf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a7c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cccd38; end: 108cccd47; -[SCPreviewDrawingToolBarButtonItem selectedMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cccd38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a78c);
}



/* Entry: 108cccd48; end: 108cccd57; -[SCPreviewDrawingToolBarButtonItem drawingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cccd48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a7b8);
}



/* Entry: 108cccd58; end: 108cccd67; -[SCPreviewDrawingToolBarButtonItem strawButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cccd58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a7c8);
}



/* Entry: 108cccd68; end: 108cccda7; -[SCPreviewDrawingToolBarButtonItem setStrawButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cccd68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a7c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cccda8; end: 108cccdb7; -[SCPreviewDrawingToolBarButtonItem emoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cccda8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a7c0);
}



/* Entry: 108cccdb8; end: 108cccdd7; -[SCPreviewDrawingToolBarButtonItem colorPickerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cccdb8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277a7cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cccdd8; end: 108cccdeb; -[SCPreviewDrawingToolBarButtonItem setColorPickerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cccdd8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277a7cc,param_3);
  return;
}



/* Entry: 108cccdec; end: 108cccdfb; -[SCPreviewDrawingToolBarButtonItem colorPickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cccdec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a7b0);
}



/* Entry: 108cccdfc; end: 108ccce0b; -[SCPreviewDrawingToolBarButtonItem color] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cccdfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a79c);
}



/* Entry: 108ccce0c; end: 108ccce17; -[SCPreviewDrawingToolBarButtonItem setColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccce0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ccce18; end: 108cccefb; -[SCPreviewDrawingToolBarButtonItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ccce18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a79c,0);
  _objc_destroyWeak(param_1 + _DAT_11277a7cc);
  _objc_storeStrong(param_1 + _DAT_11277a7c8,0);
  _objc_storeStrong(param_1 + _DAT_11277a7b8,0);
  _objc_storeStrong(param_1 + _DAT_11277a7c4,0);
  _objc_destroyWeak(param_1 + _DAT_11277a7bc);
  _objc_destroyWeak(param_1 + _DAT_11277a7a4);
  _objc_storeStrong(param_1 + _DAT_11277a7b0,0);
  _objc_storeStrong(param_1 + _DAT_11277a798,0);
  _objc_storeStrong(param_1 + _DAT_11277a794,0);
  _objc_storeStrong(param_1 + _DAT_11277a7c0,0);
  _objc_storeStrong(param_1 + _DAT_11277a7b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a7a8,0);
  return;
}



/* Entry: 108cccefc; end: 108cccf5f; +[SCPreviewToolBarButtonItemImpl barButtonWithItemType:target:selector:] */

void FUN_108cccefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_alloc(param_1);
  func_0x00010bff6a00();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cccf60; end: 108cccfcf; +[SCPreviewToolBarButtonItemImpl barButtonWithItemType:iconStyle:target:selector:] */

void FUN_108cccf60(undefined8 param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  _objc_alloc(param_1);
  func_0x00010bff6a00();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cccfd0; end: 108cccfdb; +[SCPreviewToolBarButtonItemImpl accessoryButtonWithImageName:] */

void FUN_108cccfd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4044000000000000,param_1,PTR_s_accessoryButtonWithImageName_but_112598de8);
  return;
}



/* Entry: 108cccfdc; end: 108ccd05f; +[SCPreviewToolBarButtonItemImpl accessoryButtonWithImageName:buttonSize:] */

void FUN_108cccfdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6138;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c013de0(0,0,param_1,param_1);
  func_0x00010bde5120(param_1,param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ccd060; end: 108ccd137; +[SCPreviewToolBarButtonItemImpl accessoryButtonWithImageName:text:] */

void FUN_108ccd060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dba60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014760(0,0,0x4044000000000000,0x4044000000000000,puVar1,param_2,param_4,puVar2);
  _objc_release(param_4);
  _objc_release(puVar2);
  func_0x00010bde5120(0x4044000000000000,param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ccd138; end: 108ccd203; +[SCPreviewToolBarButtonItemImpl accessoryButtonWithImageName:titleText:loadingText:state:] */

void FUN_108ccd138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dba80;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c015040(0,0,0x4044000000000000,0x4044000000000000);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010bde5120(0x4044000000000000,param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ccd204; end: 108ccd28f; -[SCPreviewToolBarButtonItemImpl initWithBarButtonItemType:iconStyle:target:selector:] */

undefined8
FUN_108ccd204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_5);
  FUN_108ccddc4(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fd80(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108ccd290; end: 108ccd36f; -[SCPreviewToolBarButtonItemImpl initWithItemConfiguration:iconStyle:target:selector:] */

undefined1 *
FUN_108ccd290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fe348;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_5);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x50) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    *(undefined8 *)((long)puVar1 + 0x78) = param_4;
    uVar2 = param_3;
    func_0x00010beecf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ccd370; end: 108ccd3ab; -[SCPreviewToolBarButtonItemImpl itemType] */

undefined8 FUN_108ccd370(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0841c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c084c40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ccd3ac; end: 108ccd49b; -[SCPreviewToolBarButtonItemImpl previewToolButton] */

void FUN_108ccd3ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x80);
  if (lVar6 == 0) {
    puVar1 = PTR_PTR_1126dba88;
    _objc_alloc();
    lVar6 = param_1;
    func_0x00010c0841c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0841c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0bc160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c2c0(puVar1,param_2,lVar2,lVar4,*(undefined8 *)(param_1 + 0x78));
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar1;
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar6);
    *(undefined1 *)(param_1 + 8) = 1;
    func_0x00010c273620(param_1);
    lVar6 = *(long *)(param_1 + 0x80);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 108ccd49c; end: 108ccd49f; -[SCPreviewToolBarButtonItemImpl toolButton] */

void FUN_108ccd49c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c111f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_previewToolButton_112622200);
  return;
}



/* Entry: 108ccd4a0; end: 108ccd57f; -[SCPreviewToolBarButtonItemImpl toolLabel] */

void FUN_108ccd4a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x88);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar1;
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010c0841c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + 0x88),param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar4);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + 0x88),param_2,7);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + 0x88),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c213040(*(undefined8 *)(param_1 + 0x88),param_2,2);
    lVar4 = *(long *)(param_1 + 0x88);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108ccd580; end: 108ccd5bf; -[SCPreviewToolBarButtonItemImpl resizeButtonAnimationWithScale:isHighlighted:] */

void FUN_108ccd580(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c105f40(*(undefined8 *)(param_2 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010c0f8e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_2 + 0x80),
             PTR_s_performResizingAnimationWithScal_11261bda0,param_4);
  return;
}



/* Entry: 108ccd5c0; end: 108ccd617; -[SCPreviewToolBarButtonItemImpl setSelected:] */

void FUN_108ccd5c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 9) = param_3;
  lVar1 = param_1;
  func_0x00010c081360();
  if ((int)lVar1 != 0) {
    func_0x00010c273600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fadc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108ccd618; end: 108ccd66f; -[SCPreviewToolBarButtonItemImpl setAccessibilityLabel:] */

void FUN_108ccd618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c161020(*(undefined8 *)(param_1 + 0x80),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ccd670; end: 108ccd6c3; -[SCPreviewToolBarButtonItemImpl setDisabled:] */

void FUN_108ccd670(double param_1,long param_2,undefined8 param_3,uint param_4)

{
  *(char *)(param_2 + 0xc) = (char)param_4;
  func_0x00010c195460(*(undefined8 *)(param_2 + 0x80),param_3,param_4 ^ 1);
  func_0x00010bf01b40(param_2);
  if (0.0 < param_1) {
    func_0x00010bf01bc0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setAlpha__112637810);
    return;
  }
  return;
}



/* Entry: 108ccd6c4; end: 108ccd6e7; -[SCPreviewToolBarButtonItemImpl alphaForCurrentState] */

undefined8 FUN_108ccd6c4(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf80d20();
  uVar1 = 0x3fe0000000000000;
  if (param_1 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  return uVar1;
}



/* Entry: 108ccd6e8; end: 108ccd74b; -[SCPreviewToolBarButtonItemImpl setAlpha:] */

void FUN_108ccd6e8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_2 + 0x50) = param_1;
  lVar1 = param_2;
  func_0x00010c081360();
  if ((int)lVar1 != 0) {
    func_0x00010c273600(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 108ccd74c; end: 108ccd7a3; -[SCPreviewToolBarButtonItemImpl setSelectionStyle:] */

void FUN_108ccd74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x38) = param_3;
  lVar1 = param_1;
  func_0x00010c081360();
  if ((int)lVar1 != 0) {
    func_0x00010c111f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108ccd7a4; end: 108ccd7ab; -[SCPreviewToolBarButtonItemImpl hideTrashIcon] */

void FUN_108ccd7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe2c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_hideTrashIcon_1125d64e0);
  return;
}



/* Entry: 108ccd7ac; end: 108ccd7b3; -[SCPreviewToolBarButtonItemImpl showTrashIcon] */

void FUN_108ccd7ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23a9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_showTrashIcon_11266c490);
  return;
}



/* Entry: 108ccd7b4; end: 108ccd7bb; -[SCPreviewToolBarButtonItemImpl growTrashIcon] */

void FUN_108ccd7b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcf9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_growTrashIcon_1125d1820);
  return;
}



/* Entry: 108ccd7bc; end: 108ccd7c3; -[SCPreviewToolBarButtonItemImpl shrinkTrashIcon] */

void FUN_108ccd7bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23b3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_shrinkTrashIcon_11266c720);
  return;
}



/* Entry: 108ccd7c4; end: 108ccd7c7; -[SCPreviewToolBarButtonItemImpl viewForLayoutConstraint] */

void FUN_108ccd7c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c111f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_previewToolButton_112622200);
  return;
}



/* Entry: 108ccd7c8; end: 108ccd7cb; -[SCPreviewToolBarButtonItemImpl selectItemAnimationFinished] */

void FUN_108ccd7c8(void)

{
  return;
}



/* Entry: 108ccd7cc; end: 108ccd7cf; -[SCPreviewToolBarButtonItemImpl setUndoButtonEnabled:] */

void FUN_108ccd7cc(void)

{
  return;
}



/* Entry: 108ccd7d0; end: 108ccd7d3; -[SCPreviewToolBarButtonItemImpl parentToolbarBecameEnabled:] */

void FUN_108ccd7d0(void)

{
  return;
}



/* Entry: 108ccd7d4; end: 108ccd8c3; -[SCPreviewToolBarButtonItemImpl toolButtonDidLoad] */

void FUN_108ccd7d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010befbd60(*(undefined8 *)(param_1 + 0x80),param_2,param_1,
                      PTR_s_toolButtonTapped__11253cd98,0x40);
  func_0x00010c23d620(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c1677c0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x80));
  func_0x00010c1fadc0(*(undefined8 *)(param_1 + 0x80));
  lVar1 = param_1;
  func_0x00010c0841c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beecf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + 0x80));
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0841c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beecec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x80));
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c1fbac0(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010c1af010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_setIsAccessibilityElement__112649628,1);
  return;
}



/* Entry: 108ccd8c4; end: 108ccd953; -[SCPreviewToolBarButtonItemImpl toolButtonTapped:] */

void FUN_108ccd8c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c084ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c084140();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c084ba0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c084140(param_1);
      func_0x00010c0f8f20(lVar1,param_2,lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 108ccd954; end: 108ccd9a7; -[SCPreviewToolBarButtonItemImpl updateImage:animated:] */

void FUN_108ccd954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c081360();
  if ((int)lVar1 != 0) {
    func_0x00010c2865c0(*(undefined8 *)(param_1 + 0x80),param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ccd9a8; end: 108ccd9eb; -[SCPreviewToolBarButtonItemImpl updateSelectedImage:] */

void FUN_108ccd9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c081360();
  if ((int)lVar1 != 0) {
    func_0x00010c289a80(*(undefined8 *)(param_1 + 0x80),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ccd9ec; end: 108ccda27; -[SCPreviewToolBarButtonItemImpl setLoadingIndicatorVisible:] */

void FUN_108ccd9ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c081360();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1bedd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x80),PTR_s_setLoadingIndicatorVisible__11264d598,param_3);
    return;
  }
  return;
}



/* Entry: 108ccda28; end: 108ccdad3; +[SCPreviewToolBarButtonItemImpl _configureGrowingButton:withSize:imageName:] */

void FUN_108ccda28(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  param_1 = param_1 + -44.0;
  _objc_retain(param_4);
  func_0x00010bfe8220(puVar1,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(param_4,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c21d680(param_4,param_3,1);
  func_0x00010c1d4b80(param_4,param_3,1);
  func_0x00010c218d60(param_1,param_1,param_1,param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108ccdad4; end: 108ccdadb; -[SCPreviewToolBarButtonItemImpl itemConfig] */

undefined8 FUN_108ccdad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ccdadc; end: 108ccdaf3; -[SCPreviewToolBarButtonItemImpl itemDelegate] */

void FUN_108ccdadc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ccdaf4; end: 108ccdaff; -[SCPreviewToolBarButtonItemImpl setItemDelegate:] */

void FUN_108ccdaf4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 108ccdb00; end: 108ccdb07; -[SCPreviewToolBarButtonItemImpl itemAction] */

undefined8 FUN_108ccdb00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ccdb08; end: 108ccdb0f; -[SCPreviewToolBarButtonItemImpl setItemAction:] */

void FUN_108ccdb08(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108ccdb10; end: 108ccdb27; -[SCPreviewToolBarButtonItemImpl itemTarget] */

void FUN_108ccdb10(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ccdb28; end: 108ccdb33; -[SCPreviewToolBarButtonItemImpl setItemTarget:] */

void FUN_108ccdb28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 108ccdb34; end: 108ccdb3b; -[SCPreviewToolBarButtonItemImpl isToolButtonLoaded] */

undefined1 FUN_108ccdb34(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ccdb3c; end: 108ccdb43; -[SCPreviewToolBarButtonItemImpl setToolButtonLoaded:] */

void FUN_108ccdb3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108ccdb44; end: 108ccdb4b; -[SCPreviewToolBarButtonItemImpl selectionStyle] */

undefined8 FUN_108ccdb44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108ccdb4c; end: 108ccdb53; -[SCPreviewToolBarButtonItemImpl presentationStyle] */

undefined8 FUN_108ccdb4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108ccdb54; end: 108ccdb5b; -[SCPreviewToolBarButtonItemImpl setPresentationStyle:] */

void FUN_108ccdb54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 108ccdb5c; end: 108ccdb63; -[SCPreviewToolBarButtonItemImpl isSelected] */

undefined1 FUN_108ccdb5c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108ccdb64; end: 108ccdb6b; -[SCPreviewToolBarButtonItemImpl accessibilityLabel] */

undefined8 FUN_108ccdb64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108ccdb6c; end: 108ccdb73; -[SCPreviewToolBarButtonItemImpl allowsLongPress] */

undefined1 FUN_108ccdb6c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108ccdb74; end: 108ccdb7b; -[SCPreviewToolBarButtonItemImpl setAllowsLongPress:] */

void FUN_108ccdb74(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108ccdb7c; end: 108ccdb83; -[SCPreviewToolBarButtonItemImpl needBottomAccessoryAnimation] */

undefined1 FUN_108ccdb7c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108ccdb84; end: 108ccdb8b; -[SCPreviewToolBarButtonItemImpl setNeedBottomAccessoryAnimation:] */

void FUN_108ccdb84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 108ccdb8c; end: 108ccdb93; -[SCPreviewToolBarButtonItemImpl disabled] */

undefined1 FUN_108ccdb8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108ccdb94; end: 108ccdb9b; -[SCPreviewToolBarButtonItemImpl alpha] */

undefined8 FUN_108ccdb94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108ccdb9c; end: 108ccdba3; -[SCPreviewToolBarButtonItemImpl selectedVerticalOffset] */

undefined8 FUN_108ccdb9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108ccdba4; end: 108ccdbab; -[SCPreviewToolBarButtonItemImpl setSelectedVerticalOffset:] */

void FUN_108ccdba4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 108ccdbac; end: 108ccdbb3; -[SCPreviewToolBarButtonItemImpl leftAccessoryViews] */

undefined8 FUN_108ccdbac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108ccdbb4; end: 108ccdbbb; -[SCPreviewToolBarButtonItemImpl setLeftAccessoryViews:] */

void FUN_108ccdbb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ccdbbc; end: 108ccdbc3; -[SCPreviewToolBarButtonItemImpl bottomAccessoryViews] */

undefined8 FUN_108ccdbbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108ccdbc4; end: 108ccdbcb; -[SCPreviewToolBarButtonItemImpl setBottomAccessoryViews:] */

void FUN_108ccdbc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ccdbcc; end: 108ccdbd3; -[SCPreviewToolBarButtonItemImpl topAccessoryViews] */

undefined8 FUN_108ccdbcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108ccdbd4; end: 108ccdbdb; -[SCPreviewToolBarButtonItemImpl setTopAccessoryViews:] */

void FUN_108ccdbd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ccdbdc; end: 108ccdbe3; -[SCPreviewToolBarButtonItemImpl shouldStaySelectedOnFilterStacked] */

undefined1 FUN_108ccdbdc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 108ccdbe4; end: 108ccdbeb; -[SCPreviewToolBarButtonItemImpl setShouldStaySelectedOnFilterStacked:] */

void FUN_108ccdbe4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 108ccdbec; end: 108ccdbf3; -[SCPreviewToolBarButtonItemImpl iconStyle] */

undefined8 FUN_108ccdbec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108ccdbf4; end: 108ccdc23; -[SCPreviewToolBarButtonItemImpl setPreviewToolButton:] */

void FUN_108ccdbf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ccdc24; end: 108ccdc53; -[SCPreviewToolBarButtonItemImpl setToolLabel:] */

void FUN_108ccdc24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ccdc54; end: 108ccdccf; -[SCPreviewToolBarButtonItemImpl .cxx_destruct] */

void FUN_108ccdc54(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ccdcd0; end: 108ccdd03; -[SCPreviewToolBarFilterStackingLabeledGrowingButton initWithFrame:labelText:imageWidth:] */

void FUN_108ccdcd0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fe350;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame_labelText_imageWid_1125e2bb0);
  return;
}



/* Entry: 108ccdd04; end: 108ccdd73; -[SCPreviewToolBarFilterStackingLabeledGrowingButton shrink] */

void FUN_108ccdd04(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010bf2e3a0();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108ccdd74;
  puStack_30 = &UNK_110841f20;
  uStack_28 = param_1;
  func_0x00010bf02d00(0x3fe3333333333333,0,param_1,param_2,&puStack_48);
  return;
}


