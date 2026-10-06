/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cc72c0; end: 105cc7313; -[SCGalleryTabsController tabControllerRequestsNavigationToTab:] */

long FUN_105cc72c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfbdbc0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105cc7314; end: 105cc739f; -[SCGalleryTabsController tabControllerRequestsNavigationToTab:withAutoScrollItem:] */

void FUN_105cc7314(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94d80();
  _objc_release(uVar1);
  param_1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbdbc0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc73a0; end: 105cc740b; -[SCGalleryTabsController tabController:requestsSelectMode:isFromLongPress:] */

long FUN_105cc73a0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x1a9) == param_4) {
    return 1;
  }
  param_1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfbdbe0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105cc740c; end: 105cc7467; -[SCGalleryTabsController tabController:requestsAddToStorySelectModeForItem:] */

void FUN_105cc740c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    _objc_retain(param_4);
    param_1 = param_1 + 0x1b0;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfbdba0();
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cc7468; end: 105cc74ef; -[SCGalleryTabsController tabControllerDidChangeScrollContentOffsetWithTabController:contentOffset:] */

void FUN_105cc7468(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010c267700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_4 == lVar1) {
    func_0x00010c285e80(*(undefined8 *)(param_2 + 0x38));
  }
  param_2 = param_2 + 0x1b0;
  _objc_loadWeakRetained(param_2);
  func_0x00010bfbdb40(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cc74f0; end: 105cc754f; -[SCGalleryTabsController tabController:didChangeDisplayedContent:] */

void FUN_105cc74f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != *(long *)(param_1 + 0x1c0)) {
    return;
  }
  lVar1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfbdb80();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed71d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDisplayedTabControllers__112593618,1);
  return;
}



/* Entry: 105cc7550; end: 105cc76af; -[SCGalleryTabsController tabController:didChangeSelected:forGalleryItem:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105cc75dc */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_105cc7550(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar2 = param_3;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x10;
  uVar5 = uVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (uVar5 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(uVar2);
      }
      if (*(ulong *)(uVar9 * 8) != param_5) {
        func_0x00010bf351a0();
      }
      uVar9 = uVar9 + 1;
    } while (uVar5 != uVar9);
    uVar6 = 0x10;
    uVar5 = uVar2;
    func_0x00010bf52a60();
  }
  _objc_release(uVar2);
  lVar3 = param_3 + 0x1b0;
  _objc_loadWeakRetained();
  func_0x00010bfbdc20();
  _objc_release(lVar3);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(uVar6);
  uVar2 = param_5;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x10;
  uVar5 = uVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  puVar1 = PTR_s_changeSelected_forGallerySnapIte_1125aae18;
  while (PTR_s_changeSelected_forGallerySnapIte_1125aae18 = puVar1, uVar5 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(uVar2);
      }
      uVar10 = *(ulong *)(uVar9 * 8);
      if ((uVar10 != param_3) &&
         (uVar4 = uVar10, _objc_opt_respondsToSelector(uVar10,puVar1), (uVar4 & 1) != 0)) {
        func_0x00010bf351c0(uVar10);
      }
      uVar9 = uVar9 + 1;
    } while (uVar5 != uVar9);
    uVar7 = 0x10;
    uVar5 = uVar2;
    func_0x00010bf52a60();
    puVar1 = PTR_s_changeSelected_forGallerySnapIte_1125aae18;
  }
  _objc_release(uVar2);
  lVar3 = param_5 + 0x1b0;
  _objc_loadWeakRetained();
  func_0x00010bfbdc20();
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(uVar7);
  _objc_retain(param_8);
  dVar11 = 0.0;
  uVar2 = param_3;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  puVar1 = PTR_s_changeSelected_forItems_snapItem_1125aae20;
  while (PTR_s_changeSelected_forItems_snapItem_1125aae20 = puVar1, uVar5 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(uVar2);
      }
      uVar10 = *(ulong *)(uVar9 * 8);
      if ((uVar10 != param_5) &&
         (uVar4 = uVar10, _objc_opt_respondsToSelector(uVar10,puVar1), (uVar4 & 1) != 0)) {
        func_0x00010bf351e0(uVar10);
      }
      uVar9 = uVar9 + 1;
    } while (uVar5 != uVar9);
    uVar5 = uVar2;
    func_0x00010bf52a60();
    puVar1 = PTR_s_changeSelected_forItems_snapItem_1125aae20;
  }
  _objc_release(uVar2);
  lVar3 = param_3 + 0x1b0;
  _objc_loadWeakRetained();
  func_0x00010bfbdc20();
  _objc_release(lVar3);
  _objc_release(param_8);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar5 = *(ulong *)(param_5 + 0x38);
  func_0x00010c267700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == uVar5) {
    uVar5 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_isShowingRankedSearchResults_1125fd1f0);
    if (((uVar5 & 1) == 0) || (uVar5 = param_3, func_0x00010c07df80(), (int)uVar5 == 0)) {
      uVar6 = *(undefined8 *)(param_5 + 0x38);
      func_0x00010c267e00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar6);
      uVar5 = param_3;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 != 0) {
        lVar3 = param_5 + 0x10;
        _objc_loadWeakRetained(lVar3);
        lVar8 = lVar3;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetHeight();
        _objc_release(lVar8);
        _objc_release(lVar3);
        func_0x00010bf4d5e0(uVar5);
        if (dVar11 + dVar11 < param_2) {
          func_0x00010c23a640(*(undefined8 *)(param_5 + 0x38));
        }
      }
    }
    else {
      uVar5 = *(ulong *)(param_5 + 0x38);
      func_0x00010c267e00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cc76b0; end: 105cc7833; -[SCGalleryTabsController tabController:didChangeSelected:forGallerySnapItem:] */

void FUN_105cc76b0(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar2 = param_3;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x10;
  uVar5 = uVar2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  puVar1 = PTR_s_changeSelected_forGallerySnapIte_1125aae18;
  while (PTR_s_changeSelected_forGallerySnapIte_1125aae18 = puVar1, uVar5 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(uVar2);
      }
      uVar9 = *(ulong *)(uVar8 * 8);
      if ((uVar9 != param_5) &&
         (uVar3 = uVar9, _objc_opt_respondsToSelector(uVar9,puVar1), (uVar3 & 1) != 0)) {
        func_0x00010bf351c0(uVar9);
      }
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    uVar6 = 0x10;
    uVar5 = uVar2;
    func_0x00010bf52a60();
    puVar1 = PTR_s_changeSelected_forGallerySnapIte_1125aae18;
  }
  _objc_release(uVar2);
  lVar4 = param_3 + 0x1b0;
  _objc_loadWeakRetained();
  func_0x00010bfbdc20();
  _objc_release(lVar4);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(uVar6);
  _objc_retain(param_8);
  dVar10 = 0.0;
  uVar2 = param_5;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  puVar1 = PTR_s_changeSelected_forItems_snapItem_1125aae20;
  while (PTR_s_changeSelected_forItems_snapItem_1125aae20 = puVar1, uVar5 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(uVar2);
      }
      uVar9 = *(ulong *)(uVar8 * 8);
      if ((uVar9 != param_3) &&
         (uVar3 = uVar9, _objc_opt_respondsToSelector(uVar9,puVar1), (uVar3 & 1) != 0)) {
        func_0x00010bf351e0(uVar9);
      }
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    uVar5 = uVar2;
    func_0x00010bf52a60();
    puVar1 = PTR_s_changeSelected_forItems_snapItem_1125aae20;
  }
  _objc_release(uVar2);
  lVar4 = param_5 + 0x1b0;
  _objc_loadWeakRetained();
  func_0x00010bfbdc20();
  _objc_release(lVar4);
  _objc_release(param_8);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  uVar5 = *(ulong *)(param_3 + 0x38);
  func_0x00010c267700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_5 == uVar5) {
    uVar5 = param_5;
    _objc_opt_respondsToSelector(param_5,PTR_s_isShowingRankedSearchResults_1125fd1f0);
    if (((uVar5 & 1) == 0) || (uVar5 = param_5, func_0x00010c07df80(), (int)uVar5 == 0)) {
      uVar6 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010c267e00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar6);
      uVar5 = param_5;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 != 0) {
        lVar4 = param_3 + 0x10;
        _objc_loadWeakRetained(lVar4);
        lVar7 = lVar4;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetHeight();
        _objc_release(lVar7);
        _objc_release(lVar4);
        func_0x00010bf4d5e0(uVar5);
        if (dVar10 + dVar10 < param_2) {
          func_0x00010c23a640(*(undefined8 *)(param_3 + 0x38));
        }
      }
    }
    else {
      uVar5 = *(ulong *)(param_3 + 0x38);
      func_0x00010c267e00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105cc7834; end: 105cc79cf; -[SCGalleryTabsController tabController:didChangeSelected:forItems:snapItems:] */

void FUN_105cc7834(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  dVar10 = 0.0;
  uVar2 = param_3;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  puVar1 = PTR_s_changeSelected_forItems_snapItem_1125aae20;
  while (PTR_s_changeSelected_forItems_snapItem_1125aae20 = puVar1, uVar5 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(uVar2);
      }
      uVar9 = *(ulong *)(uVar8 * 8);
      if ((uVar9 != param_5) &&
         (uVar3 = uVar9, _objc_opt_respondsToSelector(uVar9,puVar1), (uVar3 & 1) != 0)) {
        func_0x00010bf351e0(uVar9);
      }
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    uVar5 = uVar2;
    func_0x00010bf52a60();
    puVar1 = PTR_s_changeSelected_forItems_snapItem_1125aae20;
  }
  _objc_release(uVar2);
  lVar4 = param_3 + 0x1b0;
  _objc_loadWeakRetained();
  func_0x00010bfbdc20();
  _objc_release(lVar4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar5 = *(ulong *)(param_5 + 0x38);
  func_0x00010c267700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == uVar5) {
    uVar5 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_isShowingRankedSearchResults_1125fd1f0);
    if (((uVar5 & 1) == 0) || (uVar5 = param_3, func_0x00010c07df80(), (int)uVar5 == 0)) {
      uVar6 = *(undefined8 *)(param_5 + 0x38);
      func_0x00010c267e00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar6);
      uVar5 = param_3;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 != 0) {
        lVar4 = param_5 + 0x10;
        _objc_loadWeakRetained(lVar4);
        lVar7 = lVar4;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetHeight();
        _objc_release(lVar7);
        _objc_release(lVar4);
        func_0x00010bf4d5e0(uVar5);
        if (dVar10 + dVar10 < param_2) {
          func_0x00010c23a640(*(undefined8 *)(param_5 + 0x38));
        }
      }
    }
    else {
      uVar5 = *(ulong *)(param_5 + 0x38);
      func_0x00010c267e00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cc79d0; end: 105cc7b0b; -[SCGalleryTabsController tabControllerWillBeginDragging:] */

void FUN_105cc79d0(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + 0x38);
  func_0x00010c267700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_5 == uVar1) {
    uVar1 = param_5;
    _objc_opt_respondsToSelector(param_5,PTR_s_isShowingRankedSearchResults_1125fd1f0);
    if (((uVar1 & 1) == 0) || (uVar1 = param_5, func_0x00010c07df80(), (int)uVar1 == 0)) {
      uVar2 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010c267e00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar2);
      uVar1 = param_5;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 != 0) {
        lVar3 = param_3 + 0x10;
        _objc_loadWeakRetained(lVar3);
        lVar4 = lVar3;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetHeight();
        _objc_release(lVar4);
        _objc_release(lVar3);
        func_0x00010bf4d5e0(uVar1);
        if (param_1 + param_1 < param_2) {
          func_0x00010c23a640(*(undefined8 *)(param_3 + 0x38));
        }
      }
    }
    else {
      uVar1 = *(ulong *)(param_3 + 0x38);
      func_0x00010c267e00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105cc7b0c; end: 105cc7b17; -[SCGalleryTabsController tabControllerDidEndDragging:willDecelerate:] */

void FUN_105cc7b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c267a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tabControllerDidEndDecelerating__1126778a8);
  return;
}



/* Entry: 105cc7b18; end: 105cc7b8b; -[SCGalleryTabsController tabControllerDidEndDecelerating:] */

void FUN_105cc7b18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c267700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (param_3 != lVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf75b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_didEndScrolling_1125bb078);
  return;
}



/* Entry: 105cc7b8c; end: 105cc7b8f; -[SCGalleryTabsController tabControllerDidBeginEditing:] */

void FUN_105cc7b8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be64af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyIsEditingChange_112576c58);
  return;
}



/* Entry: 105cc7b90; end: 105cc7b93; -[SCGalleryTabsController tabControllerDidEndEditing:] */

void FUN_105cc7b90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be64af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyIsEditingChange_112576c58);
  return;
}



/* Entry: 105cc7b94; end: 105cc7b9b; -[SCGalleryTabsController tabControllerTopInset:] */

undefined8 FUN_105cc7b94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105cc7b9c; end: 105cc7bdf; -[SCGalleryTabsController operaPresenterTopInset] */

undefined8 FUN_105cc7b9c(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x1b0;
  _objc_loadWeakRetained(param_2);
  func_0x00010bfcb480();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105cc7be0; end: 105cc7c23; -[SCGalleryTabsController tabControllerCollectionViewIsFullyVisible:] */

byte FUN_105cc7be0(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c070ea0();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010c070400();
    if ((uVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 0x1aa);
      goto LAB_105cc7c14;
    }
  }
  bVar2 = 0;
LAB_105cc7c14:
  return bVar2 & 1;
}



/* Entry: 105cc7c24; end: 105cc7c57; -[SCGalleryTabsController tabControllerDidPresentOpera:] */

void FUN_105cc7c24(long param_1)

{
  param_1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbdca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc7c58; end: 105cc7c8f; -[SCGalleryTabsController tabControllerDidDismissOpera:] */

void FUN_105cc7c58(long param_1)

{
  param_1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbdc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc7c90; end: 105cc7c9b; -[SCGalleryTabsController tabController:didTapEditStory:isCreatingStoryFromSelection:] */

void FUN_105cc7c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentStoryEditorForEntry_isCre_112621398,param_4,param_5);
  return;
}



/* Entry: 105cc7c9c; end: 105cc7cc3; -[SCGalleryTabsController displayedTabController] */

void FUN_105cc7c9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cc7cc4; end: 105cc7cdb; -[SCGalleryTabsController tabController:didUpdateBadged:] */

void FUN_105cc7cc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28ce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_updateWithTabControllers_badgedT_112680db0,
             *(undefined8 *)(param_1 + 0x20),param_3,param_4);
  return;
}



/* Entry: 105cc7cdc; end: 105cc7d07; -[SCGalleryTabsController tabControllerDidDismissDraftGrid:] */

void FUN_105cc7cdc(long param_1)

{
  param_1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbdc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc7d08; end: 105cc7d13; -[SCGalleryTabsController tabController:didTriggerCreateMashupForStory:] */

void FUN_105cc7d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7db90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_didTriggerCreateMashupForStory__1125bd088,param_4);
  return;
}



/* Entry: 105cc7d14; end: 105cc7d6f; -[SCGalleryTabsController tabControllerDidFinishFirstDataLoad:] */

void FUN_105cc7d14(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c267c60();
  if (param_3 == 3) {
    *(undefined1 *)(param_1 + 0x71) = 1;
    func_0x00010c0649a0(*(undefined8 *)(param_1 + 0x40));
    param_1 = param_1 + 0x1b0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c245a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cc7d70; end: 105cc7d97; -[SCGalleryTabsController seedCameraRollTabWithAssetIdentifier:] */

void FUN_105cc7d70(long param_1)

{
  func_0x00010c156f00(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c0649b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_initializePhotoLibraryFetcher_1125f6c78);
  return;
}



/* Entry: 105cc7d98; end: 105cc7d9f; -[SCGalleryTabsController numberOfSectionsInCollectionView:] */

undefined8 FUN_105cc7d98(void)

{
  return 1;
}



/* Entry: 105cc7da0; end: 105cc7da7; -[SCGalleryTabsController collectionView:numberOfItemsInSection:] */

void FUN_105cc7da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105cc7da8; end: 105cc7e7f; -[SCGalleryTabsController collectionView:cellForItemAtIndexPath:] */

void FUN_105cc7da8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e22938,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010be4eaa0(param_1,param_2,uVar3);
  uVar2 = uVar3;
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2115e0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cc7e80; end: 105cc7efb; -[SCGalleryTabsController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16] FUN_105cc7e80(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar3 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x28));
  _CGRectGetHeight();
  _objc_release(lVar2);
  _objc_release(lVar1);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 105cc7efc; end: 105cc8007; -[SCGalleryTabsController scrollViewDidScroll:] */

void FUN_105cc7efc(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  ulong param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_6);
  func_0x00010bee1ac0(param_4);
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + 0x28));
  dVar5 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_4 + 0x28));
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar1 = *(undefined8 *)(param_4 + 0x28);
  dVar6 = param_1 / param_3;
  func_0x00010c15b1c0(uVar1);
  func_0x00010c292b00(puVar2,param_5,uVar1);
  if (puVar2 == (undefined *)0x1) {
    uVar3 = *(ulong *)(param_4 + 0x158);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      func_0x00010bf4d5e0(*(undefined8 *)(param_4 + 0x28));
      dVar6 = (double)(long)(((dVar5 - param_3) - param_1) / param_3);
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
    }
  }
  uVar1 = *(undefined8 *)(param_4 + 0x30);
  uVar4 = param_6;
  func_0x00010c081660();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_6;
    func_0x00010c070ea0(param_6);
  }
  else {
    uVar4 = 1;
  }
  func_0x00010c28c7c0(dVar6,uVar1,param_5,uVar4);
  func_0x00010bf947e0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105cc8008; end: 105cc803b; -[SCGalleryTabsController scrollViewWillBeginDragging:] */

void FUN_105cc8008(long param_1,undefined8 param_2)

{
  func_0x00010bfe2b00(0,*(undefined8 *)(param_1 + 0x38),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bedf090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateScrollingTabs__1125955c8,1);
  return;
}



/* Entry: 105cc803c; end: 105cc804b; -[SCGalleryTabsController scrollViewDidEndDragging:willDecelerate:] */

void FUN_105cc803c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedf090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateScrollingTabs__1125955c8,0);
  return;
}



/* Entry: 105cc804c; end: 105cc8053; -[SCGalleryTabsController scrollViewDidEndDecelerating:] */

void FUN_105cc804c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateScrollingTabs__1125955c8,0);
  return;
}



/* Entry: 105cc8054; end: 105cc807b; -[SCGalleryTabsController scrollViewDidEndScrollingAnimation:] */

void FUN_105cc8054(long param_1)

{
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bed82f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFocusedDisplayedTabContro_112593a60);
  return;
}



/* Entry: 105cc807c; end: 105cc80ef; -[SCGalleryTabsController galleryTabBarsController:didSelectForTabController:] */

void FUN_105cc807c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94d80();
  _objc_release(uVar1);
  func_0x00010be9c060(param_1,param_2,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cc80f0; end: 105cc8133; -[SCGalleryTabsController _updateCloudSyncLoadingState] */

void FUN_105cc80f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076be0();
  func_0x00010bea5560(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cc8134; end: 105cc818b; -[SCGalleryTabsController cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

void FUN_105cc8134(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105cc818c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105cc818c; end: 105cc8193;  */

void FUN_105cc818c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed5590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateCloudSyncLoadingState_112592f08);
  return;
}



/* Entry: 105cc8194; end: 105cc8207; -[SCGalleryTabsController _handlePrivateGalleryManagerStateChange:] */

/* WARNING: Possible PIC construction at 0x000105cc81b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105cc81b8) */
/* WARNING: Removing unreachable block (ram,0x000105cc81c4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105cc8194(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((1 < param_3 - 2U) && (param_3 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed71b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDisplayedPrivateTabContro_112593610);
  return;
}



/* Entry: 105cc8208; end: 105cc820f; -[SCGalleryTabsController _updateDisplayedPrivateTabControllers] */

void FUN_105cc8208(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed71d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDisplayedTabControllers__112593618,1);
  return;
}



/* Entry: 105cc8210; end: 105cc827b; -[SCGalleryTabsController _pageHeight] */

double FUN_105cc8210(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    long param_5)

{
  double dVar1;
  double dVar2;
  
  func_0x00010c151ea0();
  dVar1 = param_1;
  func_0x00010c151ec0(param_5);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
  if (param_4 == 0.0) {
    param_4 = 0.0;
  }
  else {
    dVar2 = -param_1;
    if (0.0 <= param_1) {
      dVar2 = param_1;
    }
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
    param_4 = (dVar2 - dVar1) / param_4;
  }
  return param_4;
}



/* Entry: 105cc827c; end: 105cc828b; -[SCGalleryTabsController isViewLoaded] */

bool FUN_105cc827c(long param_1)

{
  return *(long *)(param_1 + 0x28) != 0;
}



/* Entry: 105cc828c; end: 105cc82a3; -[SCGalleryTabsController _loadedTabControllers] */

void FUN_105cc828c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__filteredTabControllers_block__112563320,*(undefined8 *)(param_1 + 0x18),
             &PTR___NSConcreteGlobalBlock_1108e4570);
  return;
}



/* Entry: 105cc82a4; end: 105cc8313; -[SCGalleryTabsController _loadTabController:] */

void FUN_105cc82a4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0834c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c09c7a0(param_3);
    func_0x00010c1facc0(param_3,param_2,*(undefined1 *)(param_1 + 0x1a9));
    func_0x00010be9d960(param_1,param_2,param_3);
    func_0x00010bee1a80(param_1);
    func_0x00010bee1ac0(param_1);
    func_0x00010bee1aa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cc8314; end: 105cc8477; -[SCGalleryTabsController _visibleTabControllers] */

void FUN_105cc8314(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0840e0(*(undefined8 *)(lStack_118 + lVar7 * 8));
        func_0x00010c0dfd40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar5);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_105cc8478;
    puStack_168 = &uStack_170;
    uStack_170 = 0;
    uStack_160 = 0x3032000000;
    pcStack_158 = FUN_105cc8544;
    uStack_150 = 0x105cc8554;
    uStack_148 = 0;
    puStack_140 = puVar1;
    puStack_138 = puVar4;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00010be0aca0();
    puVar4 = (undefined *)puStack_168[5];
    _objc_retain(puVar4);
    __Block_object_dispose(&uStack_170,8);
    _objc_release(uStack_148);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105cc8478; end: 105cc8543; -[SCGalleryTabsController _tabControllerWithTabType:] */

void FUN_105cc8478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105cc8544;
  uStack_30 = 0x105cc8554;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105cc855c;
  puStack_68 = &UNK_1108e4590;
  uStack_58 = param_3;
  puStack_48 = puStack_60;
  func_0x00010be0aca0(param_1,param_2,*(undefined8 *)(param_1 + 0x20),&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cc8544; end: 105cc855b;  */

void FUN_105cc8544(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105cc855c; end: 105cc85cb;  */

void FUN_105cc855c(long param_1,long param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c267c60();
  if (lVar2 == *(long *)(param_1 + 0x28)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
    *param_3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cc85cc; end: 105cc860f; -[SCGalleryTabsController _updateScrollingTabs:] */

void FUN_105cc85cc(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x60) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x60) = (char)param_3;
  if ((param_3 & 1) == 0) {
    func_0x00010bed82e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed71d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDisplayedTabControllers__112593618,1);
  return;
}



/* Entry: 105cc8610; end: 105cc872b; -[SCGalleryTabsController _newDisplayedTabControllers] */

undefined * FUN_105cc8610(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1 + 0x1b0;
  _objc_loadWeakRetained();
  puVar2 = puVar3;
  func_0x00010bfbdcc0();
  _objc_release(puVar3);
  if ((int)puVar2 == 0) {
    puVar3 = param_1;
    func_0x00010be16600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be16600();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  else if (*(long *)(param_1 + 0x1c0) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010c07b240();
  if ((int)puVar3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = param_2;
    func_0x00010c22f240(param_2);
  }
  _objc_release(param_2);
  return puVar3;
}



/* Entry: 105cc872c; end: 105cc87cb;  */

undefined8 FUN_105cc872c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c07b240();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c22f240(param_2);
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105cc87cc; end: 105cc885b; -[SCGalleryTabsController _scrollToDisplayedTabController:animated:] */

void FUN_105cc87cc(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  
  if ((param_3 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    lVar1 = param_1;
    func_0x00010be38e60();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) &&
       (func_0x00010c1525a0(*(undefined8 *)(param_1 + 0x28),param_2,lVar1,9,param_4),
       (param_4 & 1) == 0)) {
      func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x28));
      func_0x00010bed82e0(param_1);
      func_0x00010bee1ac0(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105cc885c; end: 105cc89eb; -[SCGalleryTabsController _newFocusedDisplayedTabController] */

/* WARNING: Possible PIC construction at 0x000105cc898c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105cc8990) */

ulong FUN_105cc885c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x1c0);
  if (lVar1 == 0) {
    func_0x00010bdf9440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    uVar6 = param_1;
  }
  else {
    func_0x00010c22f240();
    if ((int)lVar1 == 0) {
      uVar4 = *(ulong *)(param_1 + 0x18);
      _objc_retain(uVar4);
      uVar2 = uVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar2 != 0) {
        uVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar4);
          }
          uVar6 = *(ulong *)(uVar7 * 8);
          uVar3 = *(ulong *)(param_1 + 0x1c0);
          if (uVar6 == uVar3) {
            uVar3 = uVar6;
            func_0x00010c22f240();
            if ((uVar3 & 1) != 0) goto LAB_105cc89a0;
          }
          else {
            func_0x00010c267c60();
            if ((uVar3 == 5) && (uVar3 = uVar6, func_0x00010c267c60(), uVar3 == 6)) {
LAB_105cc89a0:
              _objc_retain(uVar6);
              _objc_release();
              goto LAB_105cc89b0;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar2 != uVar7);
        uVar2 = uVar4;
        func_0x00010bf52a60();
      }
      _objc_release(uVar4);
      uVar4 = *(ulong *)(param_1 + 0x20);
      goto code_r0x00010bfb1920;
    }
    uVar6 = *(ulong *)(param_1 + 0x1c0);
    uVar4 = uVar6;
    _objc_retain();
  }
LAB_105cc89b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar6;
  }
  ___stack_chk_fail();
  uVar4 = *(ulong *)(uVar4 + 0x20);
code_r0x00010bfb1920:
                    /* WARNING: Could not recover jumptable at 0x00010bfb1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_firstObject_1125c9ff0);
  return uVar4;
}



/* Entry: 105cc89ec; end: 105cc89f3; -[SCGalleryTabsController _defaultFocusedDisplayedTabController] */

void FUN_105cc89ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_firstObject_1125c9ff0);
  return;
}



/* Entry: 105cc89f4; end: 105cc8ccb; -[SCGalleryTabsController _updateDisplayedTabControllers:] */

void FUN_105cc89f4(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  bool bVar11;
  
  lVar3 = param_1;
  func_0x00010c0834c0();
  if ((int)lVar3 == 0) {
    return;
  }
  lVar3 = param_1;
  func_0x00010be62ee0();
  lVar5 = lVar3;
  func_0x00010bf529e0();
  if (lVar5 == 0) goto LAB_105cc8cb0;
  uVar4 = *(ulong *)(param_1 + 0x20);
  if ((lVar3 == 0 && uVar4 == 0) || (func_0x00010c071b60(), (uVar4 & 1) != 0)) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x78);
    func_0x00010c07aae0();
    if (iVar2 != 0) {
      bVar11 = true;
LAB_105cc8af8:
      lVar5 = *(long *)(param_1 + 0x78);
      func_0x00010bf60be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar1 = PTR_DAT_1126a50f0;
      if (lVar5 != 0) {
        lVar10 = *(long *)(param_1 + 0x1c0);
        _objc_retain(lVar10);
        lVar5 = lVar10;
        func_0x00010010fab4(lVar10,puVar1);
        _objc_release(lVar10);
        uVar6 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010bf60be0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar6;
        func_0x00010bfbd0e0();
        _objc_retainAutoreleasedReturnValue();
        if (((int)lVar5 == 0) || (lVar10 == 0)) {
          _objc_release(uVar6);
          uVar7 = *(undefined8 *)(param_1 + 0x1c0);
          func_0x00010bf00280();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar7;
          func_0x00010b5fd650();
          if ((int)uVar6 != 0) {
            uVar6 = *(undefined8 *)(param_1 + 0x1c0);
            func_0x00010bfbd0c0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(param_1 + 0x1c0);
            func_0x00010bfbd0a0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2882a0(*(undefined8 *)(param_1 + 0x78));
            _objc_release(uVar8);
            _objc_release(uVar6);
            _objc_release(uVar7);
            _objc_release(uVar9);
            goto LAB_105cc8c28;
          }
          _objc_release(uVar7);
        }
        else {
          func_0x00010be5e360(param_1);
          _objc_release(uVar9);
          uVar9 = uVar6;
        }
        _objc_release(uVar9);
      }
      if (!bVar11) goto LAB_105cc8c28;
    }
  }
  else {
    lVar5 = lVar3;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar5;
    _objc_release(uVar9);
    func_0x00010c128b60(*(undefined8 *)(param_1 + 0x28));
    lVar5 = param_1;
    func_0x00010be62fc0(param_1);
    func_0x00010c19e240(param_1);
    _objc_release(lVar5);
    lVar5 = param_1 + 0x1b0;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bf002a0(*(undefined8 *)(param_1 + 0x1c0));
    func_0x00010bfbdce0(lVar5);
    _objc_release(lVar5);
    uVar4 = *(ulong *)(param_1 + 0x78);
    func_0x00010c07aae0();
    if ((uVar4 & 1) != 0) {
      bVar11 = false;
      goto LAB_105cc8af8;
    }
LAB_105cc8c28:
    if ((param_3 != 0) && (*(long *)(param_1 + 0x1c0) != 0)) {
      func_0x00010be9c060(param_1);
    }
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bee1b00(param_1);
    func_0x00010bee19e0(param_1);
    func_0x00010bee1aa0(param_1);
    func_0x00010bee1b00(param_1);
  }
  func_0x00010bee1a80(param_1);
  func_0x00010bee1ac0(param_1);
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar5 = param_1;
    func_0x00010beca340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      func_0x00010c152800(param_1);
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
  }
LAB_105cc8cb0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105cc8ccc; end: 105cc8e73; -[SCGalleryTabsController _updateFocusedDisplayedTabController] */

void FUN_105cc8ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x00010bee1ac0();
  lVar4 = *(long *)(param_5 + 0x28);
  func_0x00010bf20c00(lVar4);
  uVar6 = param_1;
  _CGRectGetMidX();
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  func_0x00010bfed040(uVar6,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_5 + 0x20);
    lVar1 = lVar4;
    func_0x00010c0840e0(lVar4);
    func_0x00010c0dfd40(lVar5,param_6,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)(param_5 + 0x1c0) != lVar5) {
    func_0x00010c19e240(param_5,param_6,lVar5);
    func_0x00010bee1a80(param_5);
    func_0x00010bee1b00(param_5);
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    lVar1 = lVar4;
    func_0x00010c0840e0(lVar4);
    func_0x00010c28c7c0((double)lVar1,uVar6,param_6,1);
    lVar1 = param_5 + 0x1b0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar5;
    func_0x00010bf002a0(lVar5);
    func_0x00010bfbdce0(lVar1,param_6,param_5,lVar2);
    _objc_release(lVar1);
  }
  uVar6 = *(undefined8 *)(param_5 + 0xd8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x1c0);
  func_0x00010c267c60(uVar3);
  func_0x00010c187c80(uVar6,param_6,uVar3);
  _objc_release(uVar6);
  func_0x00010bed8300(param_5);
  uVar6 = *(undefined8 *)(param_5 + 0xe0);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x1c0);
  func_0x00010c267c60(uVar3);
  func_0x00010c24f3a0(uVar6,param_6,uVar3);
  _objc_release(uVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105cc8e74; end: 105cc8ebf; -[SCGalleryTabsController _updateFocusedDisplayedTabTypeForGalleryLogger] */

void FUN_105cc8e74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010c267c60(uVar2);
  func_0x000108dfcaa4();
  func_0x00010c2115c0(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cc8ec0; end: 105cc8f6f; -[SCGalleryTabsController setFocusedDisplayedTabController:] */

void FUN_105cc8ec0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x1c0);
  func_0x00010c267c60();
  lVar2 = param_3;
  func_0x00010c267c60();
  if (lVar1 != lVar2) {
    lVar2 = *(long *)(param_1 + 0x1c0);
    func_0x00010c0f2220();
    if ((lVar2 != 0) && (lVar2 = param_3, func_0x00010c0f2220(), lVar2 != 0)) {
      lVar1 = *(long *)(param_1 + 0x1c0);
      func_0x00010c0f2220();
      lVar2 = param_3;
      func_0x00010c0f2220();
      if (lVar1 != lVar2) {
        uVar3 = *(undefined8 *)(param_1 + 0xb8);
        lVar2 = param_3;
        func_0x00010c0f2220(param_3);
        func_0x00010c24fc40(uVar3,param_2,lVar2);
      }
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x1c0);
    *(long *)(param_1 + 0x1c0) = param_3;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cc8f70; end: 105cc907f; -[SCGalleryTabsController _updateTabControllersWithFocusedDisplayedTabController] */

void FUN_105cc8f70(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c19e220();
      puVar7 = puVar7 + 1;
    } while (puVar2 != puVar7);
    puVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[0x1a8] != '\x01') {
    func_0x00010be4ef80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c2237c0(*(undefined8 *)((long)puVar7 * 8));
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
      puVar2 = param_1;
      func_0x00010bf52a60();
    }
    goto LAB_105cc9320;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    if (*(long *)(param_1 + 0x1c0) == 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        lVar4 = *(long *)(param_1 + 0x20);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        goto LAB_105cc91c0;
      }
    }
    else {
      func_0x00010befa120(puVar2);
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0840e0(*(undefined8 *)(lVar10 * 8));
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar8);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    }
LAB_105cc91c0:
    _objc_release(lVar4);
  }
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_1);
      }
      uVar8 = *(undefined8 *)((long)puVar9 * 8);
      func_0x00010bf4b900(puVar2);
      func_0x00010c2237c0(uVar8);
      puVar9 = puVar9 + 1;
    } while (puVar7 != puVar9);
    puVar7 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  param_1 = puVar2;
LAB_105cc9320:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar7 = param_1;
    func_0x00010be4ef80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar7);
        }
        func_0x00010c1f7a00(0,0,*(undefined8 *)(param_1 + 0x1b8),0,*(undefined8 *)((long)puVar9 * 8)
                           );
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar7;
      func_0x00010bf52a60();
    }
  }
  else {
    puVar7 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar7);
    puVar2 = puVar7;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar7);
        }
        uVar6 = *(undefined8 *)((long)puVar9 * 8);
        uVar8 = uVar6;
        func_0x00010c0834c0();
        if ((int)uVar8 != 0) {
          func_0x00010c1f7a00(0,0,*(undefined8 *)(param_1 + 0x1b8),0,uVar6);
        }
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar7;
      func_0x00010bf52a60();
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar7 + 0x38),PTR_s_setTabController__112661f10,
             *(undefined8 *)(puVar7 + 0x1c0));
  return;
}



/* Entry: 105cc9080; end: 105cc939f; -[SCGalleryTabsController _updateTabControllersWithVisible] */

void FUN_105cc9080(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[0x1a8] != '\x01') {
    func_0x00010be4ef80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c2237c0(*(undefined8 *)((long)puVar6 * 8));
        puVar6 = puVar6 + 1;
      } while (puVar4 != puVar6);
      puVar4 = param_1;
      func_0x00010bf52a60();
    }
    goto LAB_105cc9320;
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225ec0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x1c0) == 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        goto LAB_105cc91c0;
      }
    }
    else {
      func_0x00010befa120(puVar4);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0840e0(*(undefined8 *)(lVar10 * 8));
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(uVar8);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
LAB_105cc91c0:
    _objc_release(lVar3);
  }
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar6 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_1);
      }
      uVar8 = *(undefined8 *)((long)puVar9 * 8);
      func_0x00010bf4b900(puVar4);
      func_0x00010c2237c0(uVar8);
      puVar9 = puVar9 + 1;
    } while (puVar6 != puVar9);
    puVar6 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  param_1 = puVar4;
LAB_105cc9320:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar6 = param_1;
    func_0x00010be4ef80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar6);
        }
        func_0x00010c1f7a00(0,0,*(undefined8 *)(param_1 + 0x1b8),0,*(undefined8 *)((long)puVar9 * 8)
                           );
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    }
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar6);
    puVar4 = puVar6;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar6);
        }
        uVar7 = *(undefined8 *)((long)puVar9 * 8);
        uVar8 = uVar7;
        func_0x00010c0834c0();
        if ((int)uVar8 != 0) {
          func_0x00010c1f7a00(0,0,*(undefined8 *)(param_1 + 0x1b8),0,uVar7);
        }
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar6 + 0x38),PTR_s_setTabController__112661f10,
             *(undefined8 *)(puVar6 + 0x1c0));
  return;
}



/* Entry: 105cc93a0; end: 105cc9567; -[SCGalleryTabsController _updateTabControllersWithScrollContentInset] */

void FUN_105cc93a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar5 = param_1;
    func_0x00010be4ef80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010c1f7a00(0,0,*(undefined8 *)(param_1 + 0x1b8),0,*(undefined8 *)(lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar5;
      func_0x00010bf52a60();
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar5);
    lVar3 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(undefined8 *)(lVar7 * 8);
        uVar2 = uVar6;
        func_0x00010c0834c0();
        if ((int)uVar2 != 0) {
          func_0x00010c1f7a00(0,0,*(undefined8 *)(param_1 + 0x1b8),0,uVar6);
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar5;
      func_0x00010bf52a60();
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar5 + 0x38),PTR_s_setTabController__112661f10,
             *(undefined8 *)(lVar5 + 0x1c0));
  return;
}



/* Entry: 105cc9568; end: 105cc9573; -[SCGalleryTabsController _updateTableIndexControllerWithFocusedDisplayedTabController] */

void FUN_105cc9568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2113b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setTabController__112661f10,
             *(undefined8 *)(param_1 + 0x1c0));
  return;
}



/* Entry: 105cc9574; end: 105cc9587; -[SCGalleryTabsController _highlightFocusedTabBarItem] */

void FUN_105cc9574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_updateWithTabControllers_highlig_112680db8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x1c0));
  return;
}



/* Entry: 105cc9588; end: 105cc95fb; -[SCGalleryTabsController _updateTabBar] */

void FUN_105cc9588(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be360c0();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010bfb1820();
  _objc_release(uVar1);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2825d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_unselectFirstTabBarVisually_11267e398);
    return;
  }
  return;
}



/* Entry: 105cc95fc; end: 105cc966b; -[SCGalleryTabsController _notifyIsEditingChange] */

void FUN_105cc95fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c071280();
  if ((uint)*(byte *)(param_1 + 0x61) == (uint)lVar1) {
    return;
  }
  *(char *)(param_1 + 0x61) = (char)lVar1;
  param_1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(param_1);
  if ((uint)lVar1 == 0) {
    func_0x00010bfbdc80();
  }
  else {
    func_0x00010bfbdc00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc966c; end: 105cc96d3; -[SCGalleryTabsController _interTabScenePathComponent:] */

long FUN_105cc966c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010be38e60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    lVar1 = param_1;
    func_0x00010c1554e0(param_1);
    lVar2 = param_1;
    func_0x00010c0840e0(param_1);
    lVar2 = lVar2 + lVar1 * 100;
  }
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 105cc96d4; end: 105cc976b; -[SCGalleryTabsController _filteredTabControllers:block:] */

void FUN_105cc96d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010bfaea20(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010befa160(puVar1,param_2,lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cc976c; end: 105cc97eb; -[SCGalleryTabsController _enumerateTabControllers:block:] */

void FUN_105cc976c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105cc97ec;
  puStack_30 = &UNK_1108e4600;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010bf97e80(param_3,param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cc97ec; end: 105cc97fb;  */

void FUN_105cc97ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000105cc97f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_4);
  return;
}



/* Entry: 105cc97fc; end: 105cc9843; -[SCGalleryTabsController _indexPathOfTabController:inTabControllers:] */

void FUN_105cc97fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010bfecde0();
  if (param_4 != 0x7fffffffffffffff) {
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_4,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cc9844; end: 105cc998b; -[SCGalleryTabsController presentStoryEditorForEntry:isCreatingStoryFromSelection:] */

void FUN_105cc9844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7140();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2115c0();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126c3b10;
  _objc_alloc(PTR_PTR_1126c3b10);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126c3b18;
  _objc_alloc(PTR_PTR_1126c3b18);
  func_0x00010c0101e0();
  _objc_release(param_3);
  func_0x00010be02ae0(param_1);
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cc998c; end: 105cc99d3; -[SCGalleryTabsController deeplinkWithDestinationInfo:] */

void FUN_105cc998c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c152800(param_1,param_2,3,0);
  func_0x00010bf68920(*(undefined8 *)(param_1 + 0x1c0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cc99d4; end: 105cc9ad3; -[SCGalleryTabsController storyEditorWillDismiss] */

void FUN_105cc99d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be02ae0();
  func_0x00010bed8300(param_1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bfbdf00(*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lVar2 + 0x98;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar2 = lVar2 + 0x98;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 105cc9ad4; end: 105cc9b4f; -[SCGalleryTabsController _dismissExistingStoryEditorScope] */

void FUN_105cc9ad4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x98;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x98;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cc9b50; end: 105cc9c3b; -[SCGalleryTabsController _presentFeaturedStoryNavigationGateUpsellIfNeeded] */

void FUN_105cc9b50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if ((*(long *)(param_1 + 0x178) == 0) && (lVar1 = param_1, func_0x00010beb4e60(), (int)lVar1 != 0)
     ) {
    puVar2 = PTR_PTR_1126c3b20;
    _objc_alloc();
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038ea0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x178);
    *(undefined **)(param_1 + 0x178) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c3b28;
    _objc_alloc(PTR_PTR_1126c3b28);
    func_0x00010c0589e0();
    uVar4 = *(undefined8 *)(param_1 + 0x170);
    func_0x00010bf21f80(uVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980(puVar2,param_2,uVar4);
    _objc_release(puVar2);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 105cc9c3c; end: 105cc9ca3; -[SCGalleryTabsController _shouldPresentMemoriesFeaturedStoryFullscreenUpsell] */

long FUN_105cc9c3c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x188);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
    return lVar1;
  }
  lVar1 = param_1;
  func_0x00010be0b540(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  *(undefined **)(param_1 + 0x188) = puVar2;
  _objc_release(uVar3);
  return lVar1;
}



/* Entry: 105cc9ca4; end: 105cc9e2f; -[SCGalleryTabsController _evaluateShouldPresentMemoriesFeaturedStoryFullscreenUpsell] */

long FUN_105cc9ca4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c072c20();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x128);
  func_0x00010c2572e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar5 == 0) {
    lVar4 = 0;
    goto LAB_105cc9d68;
  }
  lVar6 = lVar5;
  func_0x00010c08b180();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar6 == 0) || (lVar4 = lVar6, func_0x00010c079740(), (int)lVar4 == 0)) {
LAB_105cc9d4c:
    lVar4 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
    func_0x000108ec1bc4();
    if ((iVar1 == 0) || ((*(byte *)(param_1 + 0x180) & 1) != 0)) goto LAB_105cc9d4c;
    lVar4 = *(long *)(param_1 + 0x130);
    func_0x00010c28ee80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar7 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar7;
      func_0x00010c0c8a00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar8 == 0) {
        lVar4 = 0;
      }
      else {
        lVar9 = lVar8;
        func_0x00010c0e56a0(lVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar9;
        func_0x00010c083820();
        _objc_release(lVar9);
      }
      _objc_release(lVar8);
    }
    _objc_release(lVar7);
  }
  _objc_release(lVar6);
LAB_105cc9d68:
  _objc_release(lVar5);
  return lVar4;
}



/* Entry: 105cc9e30; end: 105cc9ebb; -[SCGalleryTabsController plusFullscreenUpsellPresentationCompleted] */

void FUN_105cc9e30(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c07aae0();
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c072c20();
    _objc_release(uVar3);
    if ((int)uVar2 != 0) {
      *(undefined1 *)(param_1 + 0x180) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0d6010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x78),PTR_s_navigateToNextGroupAfterDeferred_112613218);
      return;
    }
  }
  return;
}



/* Entry: 105cc9ebc; end: 105cc9edf; -[SCGalleryTabsController _isFeatured:] */

bool FUN_105cc9ebc(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0c90e0(param_3);
  return param_3 - 5U < 3;
}



/* Entry: 105cc9ee0; end: 105cc9f07; -[SCGalleryTabsController _memoriesOperaFeaturedStoriesOpenType:] */

long FUN_105cc9ee0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c0c90e0();
  lVar1 = param_3 + -4;
  if (2 < param_3 - 5U) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 105cc9f08; end: 105cc9f3f; -[SCGalleryTabsController _viewSource:] */

undefined8 FUN_105cc9f08(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0c90e0();
  if (param_3 - 5U < 3) {
    uVar1 = *(undefined8 *)(&UNK_10ddd02e8 + (param_3 - 5U) * 8);
  }
  else {
    uVar1 = 0x3a;
  }
  return uVar1;
}



/* Entry: 105cc9f40; end: 105cc9f77; -[SCGalleryTabsController _viewLocation:] */

undefined8 FUN_105cc9f40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0c90e0();
  if (param_3 - 5U < 3) {
    uVar1 = *(undefined8 *)(&UNK_10ddd0300 + (param_3 - 5U) * 8);
  }
  else {
    uVar1 = 0x37;
  }
  return uVar1;
}



/* Entry: 105cc9f78; end: 105cc9fd3; -[SCGalleryTabsController _vOperaCallsite:] */

undefined8 FUN_105cc9f78(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0c90e0();
    if (lVar1 - 1U < 8) {
      uVar2 = *(undefined8 *)(&UNK_10ddd0318 + (lVar1 - 1U) * 8);
      goto LAB_105cc9fbc;
    }
  }
  uVar2 = 0;
LAB_105cc9fbc:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105cc9fd4; end: 105cca383; -[SCGalleryTabsController _operaPresenterWithContext:] */

long FUN_105cc9fd4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  puVar9 = PTR_PTR_1126c3af8;
  _objc_opt_class(PTR_PTR_1126c3af8);
  _objc_opt_isKindOfClass(uVar8,puVar9);
  lVar7 = param_1;
  func_0x00010be40640();
  func_0x00010bee9d00();
  func_0x00010bee9740();
  func_0x00010be5f200();
  lVar6 = param_3;
  func_0x00010c0c90e0();
  if (lVar6 == 7) {
    func_0x00010c152800(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c117f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar1);
  func_0x00010bfca440();
  if ((int)lVar7 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_a8,param_1);
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110e84858;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105cca384;
    puStack_b8 = &UNK_110848ca8;
    _objc_copyWeak(auStack_b0,auStack_a8);
    ppuVar3 = &puStack_d0;
    func_0x00010bf51e00();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e84878;
    puStack_f8 = puVar9;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x105cca3dc;
    puStack_e0 = &UNK_1108434b0;
    ppuStack_90 = ppuVar3;
    _objc_copyWeak(auStack_d8,auStack_a8);
    ppuVar4 = &puStack_f8;
    func_0x00010bf51e00();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_88 = ppuVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  puVar5 = PTR_PTR_1126b2208;
  _objc_alloc(PTR_PTR_1126b2208);
  if (lVar6 != 7) {
    uVar8 = *(undefined8 *)(param_1 + 0xa8);
    lVar7 = param_1;
    func_0x00010bee74e0(param_1);
    func_0x000108ec17a8(uVar8,lVar7);
  }
  func_0x00010bff9720(puVar5);
  lVar6 = *(long *)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf22080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return lVar7;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 == 0) {
    lVar7 = 0;
  }
  else if (*(long *)(param_3 + 0x178) == 0) {
    lVar7 = param_3;
    func_0x00010beb4e60(param_3);
  }
  else {
    lVar7 = 1;
  }
  _objc_release(param_3);
  return lVar7;
}



/* Entry: 105cca384; end: 105cca40f;  */

long FUN_105cca384(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else if (*(long *)(param_1 + 0x178) == 0) {
    lVar1 = param_1;
    func_0x00010beb4e60(param_1);
  }
  else {
    lVar1 = 1;
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105cca410; end: 105cca54b; -[SCGalleryTabsController _maybeUpdateTabPlaylistForItemId:] */

void FUN_105cca410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c07aae0();
  puVar2 = PTR_DAT_1126a50f0;
  if ((iVar3 != 0) && ((*(byte *)(param_1 + 0x1ab) & 1) == 0)) {
    lVar7 = *(long *)(param_1 + 0x1c0);
    _objc_retain(lVar7);
    lVar4 = lVar7;
    func_0x00010010fab4(lVar7,puVar2);
    _objc_release(lVar7);
    puVar2 = PTR_DAT_1126a50f0;
    if (((int)lVar4 != 0) && (lVar7 != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x1c0);
      _objc_retain(uVar8);
      uVar5 = uVar8;
      func_0x00010010fab4(uVar8,puVar2);
      uVar1 = uVar8;
      if ((int)uVar5 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar8);
      uVar5 = uVar1;
      func_0x00010bfbdd60();
      if ((int)uVar5 != 0) {
        uVar5 = uVar1;
        func_0x00010bfbdd40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + 0x1c0);
        func_0x00010bfbd0c0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x1c0);
        func_0x00010bfbd0a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2882a0(*(undefined8 *)(param_1 + 0x78));
        _objc_release(uVar6);
        _objc_release(uVar8);
        _objc_release(uVar5);
      }
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cca54c; end: 105cca887; -[SCGalleryTabsController operaPresenterDidOpenViewWithItemId:snapLevelItemId:crFeaturedStory:isFromSnapFeed:] */

void FUN_105cca54c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x1c0);
    if (lVar1 == 0) {
      uVar9 = 0;
    }
    else {
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar7 = PTR_PTR_1126c3ae8;
      if (lVar1 == 0) {
        uVar8 = *(ulong *)(param_1 + 0x1c0);
        _objc_retain(uVar8);
        _objc_opt_class(puVar7);
        uVar9 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar7);
        uVar2 = uVar8;
        if ((uVar9 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar8);
        uVar9 = uVar2;
        func_0x00010c247e80(uVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010be5e360(param_1);
        uVar2 = *(ulong *)(param_1 + 0x1c0);
        func_0x00010bf40120();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x1c0);
        func_0x00010bfecfe0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c072c20();
        _objc_release(uVar4);
        uVar9 = param_1;
        if ((int)uVar5 == 0) {
          uVar8 = param_1;
          func_0x00010bee79e0();
          if ((int)uVar8 == 0) {
            uVar9 = 0;
          }
          else {
            uVar8 = uVar2;
            func_0x00010bfed1a0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar8;
            func_0x00010bf4b900();
            _objc_release(uVar8);
            if ((uVar6 & 1) == 0) {
              func_0x00010c1525a0(uVar2);
            }
            uVar8 = uVar2;
            func_0x00010bf33b60(uVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bebe720(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
          }
        }
        else {
          if ((*(long *)(param_1 + 0x80) != 0) &&
             (uVar8 = param_3, func_0x00010c0720c0(), (uVar8 & 1) == 0)) {
            uVar5 = *(undefined8 *)(param_1 + 0xf8);
            func_0x00010c269d40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c204ce0();
            _objc_release(uVar5);
            puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = *(undefined8 *)(param_1 + 0x90);
            *(undefined **)(param_1 + 0x90) = puVar7;
            _objc_release(uVar5);
          }
          if (param_5 == 0) {
            _objc_retain(param_3);
            uVar8 = param_3;
          }
          else {
            uVar8 = param_5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
          }
          uVar5 = *(undefined8 *)(param_1 + 0x80);
          *(ulong *)(param_1 + 0x80) = uVar8;
          _objc_release(uVar5);
          func_0x00010befa140(*(undefined8 *)(param_1 + 0x90));
          _objc_retain(param_4);
          uVar5 = *(undefined8 *)(param_1 + 0x88);
          *(undefined8 *)(param_1 + 0x88) = param_4;
          _objc_release(uVar5);
          func_0x00010bed7f60(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
    }
    puVar7 = PTR_PTR_1126c3b30;
    _objc_alloc(PTR_PTR_1126c3b30);
    lVar1 = param_1 + 0x1b0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfcb480();
    func_0x00010bff7280(puVar7);
    _objc_release(lVar1);
    _objc_release(uVar9);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105cca888; end: 105cca923; -[SCGalleryTabsController _validateIndexPathInBoundWithIndexPath:collectionView:] */

bool FUN_105cca888(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1554e0();
  lVar2 = param_4;
  func_0x00010c0df2e0();
  lVar3 = param_3;
  func_0x00010c0840e0(param_3);
  _objc_release(param_3);
  if (lVar1 < lVar2) {
    lVar2 = param_4;
    func_0x00010c0deec0(param_4,param_2,lVar1);
    bVar4 = lVar3 < lVar2;
  }
  else {
    bVar4 = false;
  }
  _objc_release(param_4);
  return bVar4;
}



/* Entry: 105cca924; end: 105ccaa7f; -[SCGalleryTabsController _updateFeaturedStoriesCarouselForCollectionView:indexPath:] */

void FUN_105cca924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1554e0(param_4);
  func_0x00010bfed020(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010010fab4();
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  func_0x00010bfed020(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152500(uVar1);
  func_0x00010c08cdc0(param_3);
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010bf33b60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bebe720(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ccaa80; end: 105ccaa87; -[SCGalleryTabsController operaPresenterDidOpenViewWithOperaItem:] */

undefined8 FUN_105ccaa80(void)

{
  return 0;
}



/* Entry: 105ccaa88; end: 105ccaadb; -[SCGalleryTabsController operaPresenterBeganDismiss] */

void FUN_105ccaa88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfbdd00();
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1070e0();
  func_0x000108df583c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ccaadc; end: 105ccab47; -[SCGalleryTabsController _sourceViewFromView:] */

void FUN_105ccaadc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a50e8);
  lVar2 = param_3;
  if ((param_3 == 0) || ((int)lVar1 == 0)) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c27ace0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105ccab48; end: 105ccab53; -[SCGalleryTabsController operaPresenterCancelledDismiss] */

void FUN_105ccab48(void)

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



/* Entry: 105ccab54; end: 105ccabab; -[SCGalleryTabsController operaPresenterDidPresent] */

void FUN_105ccab54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfbdca0();
  _objc_release(lVar1);
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c19e230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFocused__1126452a8,0);
    return;
  }
  return;
}



/* Entry: 105ccabac; end: 105ccade3; -[SCGalleryTabsController operaPresenterDidDismissItemId:snapLevelItemId:playbackItemIndex:crFeaturedStory:isFromSnapFeed:] */

void FUN_105ccabac(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  *(undefined1 *)(param_1 + 0x180) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar1);
  lVar3 = param_1 + 0x1b0;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfbdc60();
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c072c20();
  _objc_release(uVar4);
  if ((((int)uVar1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    if (param_6 == 0) {
      _objc_retain(param_3);
      lVar3 = param_3;
    }
    else {
      lVar3 = param_6;
      func_0x00010bfe5ec0(param_6);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204ce0();
    _objc_release(uVar1);
    _objc_release(lVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    func_0x00010c19e220(param_1);
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1070e0();
    func_0x000108df583c();
    _objc_release(lVar3);
    puVar2 = PTR_DAT_1126a50f0;
    uVar6 = *(undefined8 *)(param_1 + 0x1c0);
    _objc_retain(uVar6);
    uVar4 = uVar6;
    func_0x00010010fab4(uVar6,puVar2);
    uVar1 = uVar6;
    if ((int)uVar4 == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    func_0x00010bfbdd20(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(uVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ccade4; end: 105ccadeb; -[SCGalleryTabsController operaPresenterRequestMemoriesJumpToDreamTab] */

void FUN_105ccade4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c267ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_tabControllerRequestsNavigationT_1126778d8,0xe);
  return;
}



/* Entry: 105ccadec; end: 105ccae03; -[SCGalleryTabsController delegate] */

void FUN_105ccadec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ccae04; end: 105ccae0f; -[SCGalleryTabsController setDelegate:] */

void FUN_105ccae04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1b0,param_3);
  return;
}



/* Entry: 105ccae10; end: 105ccae17; -[SCGalleryTabsController tabsCollectionView] */

undefined8 FUN_105ccae10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


