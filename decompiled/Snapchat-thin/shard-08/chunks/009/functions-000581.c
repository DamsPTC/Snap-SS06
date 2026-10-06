/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10670ad20; end: 10670ad47; -[SCLensExplorerTablessPageCoordinator scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

void FUN_10670ad20(long param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*param_4 - *(double *)(param_1 + 0x20) != 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1fb430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setSelectedPageIndex__11265c730,*(undefined8 *)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea1dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setAnimatingToIndex__112586118,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10670ad48; end: 10670ad4f; -[SCLensExplorerTablessPageCoordinator scrollViewDidEndScrollingAnimation:] */

void FUN_10670ad48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fb430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setSelectedPageIndex__11265c730,*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10670ad50; end: 10670ade7; -[SCLensExplorerTablessPageCoordinator _setAnimatingToIndex:] */

void FUN_10670ad50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0df0c0();
  _objc_release(lVar1);
  if ((param_3 == *(long *)(param_1 + 0x30)) && (*(long *)(param_1 + 0x18) != param_3)) {
    func_0x00010be64a20(param_1,param_2,*(long *)(param_1 + 0x18),lVar2);
  }
  if ((*(long *)(param_1 + 0x18) != param_3) && (param_3 != *(long *)(param_1 + 0x30))) {
    func_0x00010be64a00(param_1,param_2,param_3,lVar2);
  }
  *(long *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10670ade8; end: 10670ae37; -[SCLensExplorerTablessPageCoordinator _notifyIfNeededDisplayPageAtIndex:pageCount:] */

void FUN_10670ade8(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  if (param_3 < param_4) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0f0e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10670ae38; end: 10670ae87; -[SCLensExplorerTablessPageCoordinator _notifyIfNeededHidePageAtIndex:pageCount:] */

void FUN_10670ae38(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  if (param_3 < param_4) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0f0e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10670ae88; end: 10670aecb; -[SCLensExplorerTablessPageCoordinator _notifyIfNeededSelectedPageAtIndex:pageCount:] */

void FUN_10670ae88(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f0e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10670aecc; end: 10670aed3; -[SCLensExplorerTablessPageCoordinator selectedPageIndex] */

undefined8 FUN_10670aecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10670aed4; end: 10670aeff; -[SCLensExplorerTablessPageCoordinator .cxx_destruct] */

void FUN_10670aed4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10670af00; end: 10670b027; -[SCLensExplorerTrayNavigationViewController initWithTrayViewController:container:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10670af00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar1 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f2a58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e9c0);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e9c0) = puVar3;
    _objc_release(uVar7);
    _objc_release(puVar2);
    unaff_x22 = (long)_DAT_11274e9c4;
    _objc_retain(param_4);
    uVar7 = *(undefined8 *)((long)puVar1 + unaff_x22);
    *(undefined8 *)((long)puVar1 + unaff_x22) = param_4;
    _objc_release(uVar7);
  }
  func_0x00010c189400(puVar1);
  _objc_release(param_4);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10670b028;
  puStack_98 = PTR_PTR_1126f2a58;
  lStack_a0 = lVar4;
  lStack_90 = unaff_x22;
  puStack_88 = (undefined1 *)puVar1;
  uStack_80 = param_4;
  lStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_viewDidLoad_112684cd8);
  lVar5 = lVar4;
  func_0x00010c29bf00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11274e9c4;
  func_0x00010befbb60();
  _objc_release(lVar5);
  func_0x00010c14c940(*(undefined8 *)(lVar4 + lVar8));
  uVar7 = *(undefined8 *)(lVar4 + lVar8);
  puVar6 = *(undefined1 **)(lVar4 + _DAT_11274e9c0);
  func_0x00010c089820(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980(uVar7);
  _objc_release(puVar6);
  return puVar6;
}



/* Entry: 10670b028; end: 10670b0d7; -[SCLensExplorerTrayNavigationViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670b028(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2a58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11274e9c4;
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c14c940(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274e9c0);
  func_0x00010c089820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10670b0d8; end: 10670b107; -[SCLensExplorerTrayNavigationViewController pushViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670b0d8(long param_1)

{
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11274e9c0));
                    /* WARNING: Could not recover jumptable at 0x00010be7f050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentTopInStack_11257d5b0);
  return;
}



/* Entry: 10670b108; end: 10670b153; -[SCLensExplorerTrayNavigationViewController popViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670b108(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274e9c0;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf529e0();
  if (1 < uVar1) {
    func_0x00010c12cd60(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010be7f050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentTopInStack_11257d5b0);
    return;
  }
  return;
}



/* Entry: 10670b154; end: 10670b163; -[SCLensExplorerTrayNavigationViewController viewControllersCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670b154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e9c0),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10670b164; end: 10670b1bf; -[SCLensExplorerTrayNavigationViewController popToRootViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670b164(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274e9c0;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf529e0();
  if (1 < uVar1) {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c12d520(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010be7f050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentTopInStack_11257d5b0);
    return;
  }
  return;
}



/* Entry: 10670b1c0; end: 10670b1cf; -[SCLensExplorerTrayNavigationViewController topViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670b1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c089830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e9c0),PTR_s_lastObject_112600018);
  return;
}



/* Entry: 10670b1d0; end: 10670b1d3; -[SCLensExplorerTrayNavigationViewController childViewControllerForStatusBarStyle] */

void FUN_10670b1d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c275150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_topViewController_11267ae78);
  return;
}



/* Entry: 10670b1d4; end: 10670b1d7; -[SCLensExplorerTrayNavigationViewController childViewControllerForStatusBarHidden] */

void FUN_10670b1d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c275150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_topViewController_11267ae78);
  return;
}



/* Entry: 10670b1d8; end: 10670b253; -[SCLensExplorerTrayNavigationViewController _presentTopInStack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670b1d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = (long)_DAT_11274e9c4;
    func_0x00010bf6f440(*(undefined8 *)(param_1 + lVar2),param_2,0);
    func_0x00010bf0c980(*(undefined8 *)(param_1 + lVar2),param_2,lVar1);
    func_0x00010c1cbec0(param_1);
    func_0x00010c2210a0(lVar1,param_2,*(undefined1 *)(param_1 + _DAT_11274e9c8),
                        *(undefined1 *)(param_1 + _DAT_11274e9cc));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10670b254; end: 10670b2b3; -[SCLensExplorerTrayNavigationViewController setVerticalScrollEnabled:horizontalScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670b254(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + _DAT_11274e9c8) = param_3;
  *(undefined1 *)(param_1 + _DAT_11274e9cc) = param_4;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2210a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10670b2b4; end: 10670b373; -[SCLensExplorerTrayNavigationViewController tray:canUseGestureToExpandOrCollapse:] */

ulong FUN_10670b2b4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c275140();
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
  _objc_opt_respondsToSelector(uVar1,PTR_s_tray_canUseGestureToExpandOrColl_11267c658);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c27b0c0(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10670b374; end: 10670b41f; -[SCLensExplorerTrayNavigationViewController scrollViewForTray:] */

void FUN_10670b374(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c275140();
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
  _objc_opt_respondsToSelector(uVar1,PTR_s_scrollViewForTray__112632508);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar1;
    func_0x00010c152ba0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10670b420; end: 10670b4c7; -[SCLensExplorerTrayNavigationViewController trayCanExpandWhenScrollAtBottom:] */

ulong FUN_10670b420(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010c275140();
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
  _objc_opt_respondsToSelector(uVar1,PTR_s_trayCanExpandWhenScrollAtBottom__11267c680);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c27b160(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10670b4c8; end: 10670b5bf; -[SCLensExplorerTrayNavigationViewController reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670b4c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + _DAT_11274e9c0);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c137fe0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar4 + _DAT_11274e9c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar4 + _DAT_11274e9c4,0);
  return;
}



/* Entry: 10670b5c0; end: 10670b5ff; -[SCLensExplorerTrayNavigationViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670b5c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e9c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e9c4,0);
  return;
}



/* Entry: 10670b600; end: 10670b657; -[SCLensExplorerFailureView initWithFrame:styleOverride:] */

undefined1 * FUN_10670b600(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2a60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c229660(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10670b658; end: 10670ba17; -[SCLensExplorerFailureView setupStackViewWithStyle:] */

void FUN_10670b658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010befbb60(param_1,param_2,puVar1);
  uVar2 = param_1;
  func_0x00010be5c440(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be5b420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  uVar6 = param_1;
  func_0x00010be5c4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60(puVar1,param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010bef6d60(puVar1,param_2,puVar4);
  func_0x00010bef6d60(puVar1,param_2,uVar2);
  func_0x00010bef6d60(puVar1,param_2,puVar5);
  func_0x00010bef6d60(puVar1,param_2,uVar3);
  func_0x00010c166c00(puVar1,param_2,3);
  puVar22 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_a0 = puVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  puStack_98 = puVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493a0(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  puStack_90 = puVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf493a0(puVar15,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  puStack_88 = puVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf49420(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar5;
  puStack_80 = puVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar22,param_2,puVar21);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(param_1);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar22 = PTR_PTR_1126aea58;
  _objc_opt_new(PTR_PTR_1126aea58);
  puVar1 = puVar22;
  func_0x00010c21ad00();
  func_0x00010670df70();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar22,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(puVar22,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 10670ba18; end: 10670ba7b; -[SCLensExplorerFailureView _makeTitleLabel] */

void FUN_10670ba18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new(PTR_PTR_1126aea58);
  puVar2 = puVar1;
  func_0x00010c21ad00();
  func_0x00010670df70();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10670ba7c; end: 10670bb37; -[SCLensExplorerFailureView _makeSubtitleLabelWithStyle:] */

void FUN_10670ba7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new(PTR_PTR_1126aea58);
  puVar2 = puVar1;
  func_0x00010c21ad00();
  func_0x00010670df88();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c1bdb00(puVar1,param_2,0);
  func_0x00010c213040(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10670bb38; end: 10670bbe3; -[SCLensExplorerFailureView _makeActionButton] */

void FUN_10670bb38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c20eaa0();
  func_0x00010670dfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s_action_1125990d0,0x40);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e82d38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10670bbe4; end: 10670bc43; -[SCLensExplorerFailureView action] */

void FUN_10670bbe4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0e6100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0e6100();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10670bc44; end: 10670bc53; -[SCLensExplorerFailureView onRetry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10670bc44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e9d0);
}



/* Entry: 10670bc54; end: 10670bc5f; -[SCLensExplorerFailureView setOnRetry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670bc54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10670bc60; end: 10670bc73; -[SCLensExplorerFailureView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670bc60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e9d0,0);
  return;
}



/* Entry: 10670bc74; end: 10670bc77; -[SCLensExplorerNullHeaderActionButtonProviderFactory actionButtonProviderWithRouter:] */

void FUN_10670bc74(void)

{
  return;
}



/* Entry: 10670bc78; end: 10670bc7f; -[SCLensExplorerNullHeaderActionButtonProviderFactory headerActionButtonAvalible] */

undefined8 FUN_10670bc78(void)

{
  return 0;
}



/* Entry: 10670bc80; end: 10670bc87; -[SCLensExplorerNullHeaderActionButtonProviderFactory headerActionButton] */

undefined8 FUN_10670bc80(void)

{
  return 0;
}



/* Entry: 10670bc88; end: 10670bcf7; -[SCLensExplorerLoadingView initWithFrame:styleOverride:] */

undefined1 * FUN_10670bc88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2a68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beac8e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010beadcc0(puVar1);
    func_0x00010beabac0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10670bcf8; end: 10670bd8b; -[SCLensExplorerLoadingView _setupFailureViewWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670bcf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274e9d4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126cd470;
    _objc_alloc();
    func_0x00010c014f60(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10670bd8c; end: 10670be0b; -[SCLensExplorerLoadingView _setupLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670bd8c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar3 = (long)_DAT_11274e9d8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10670be0c; end: 10670c0ab; -[SCLensExplorerLoadingView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670be0c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_11274e9d4;
  lVar2 = *(long *)(param_1 + lVar17);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0xc051800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11274e9d8;
  uVar10 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(param_1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar17);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1d3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_11274e9d4),PTR_s_setOnRetry__1126526b0);
  return;
}



/* Entry: 10670c0ac; end: 10670c0bb; -[SCLensExplorerLoadingView setOnRetry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e9d4),PTR_s_setOnRetry__1126526b0);
  return;
}



/* Entry: 10670c0bc; end: 10670c0cb; -[SCLensExplorerLoadingView onRetry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c0bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e9d4),PTR_s_onRetry_112617258);
  return;
}



/* Entry: 10670c0cc; end: 10670c183; -[SCLensExplorerLoadingView setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c0cc(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 1) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11274e9d8));
    uVar1 = 1;
    uVar2 = 1;
  }
  else if (param_3 == 3) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11274e9d8));
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    if (param_3 != 2) goto LAB_10670c168;
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11274e9d8));
    uVar2 = 0;
    uVar1 = 1;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274e9d4),param_2,uVar1);
  func_0x00010c1a7f60(param_1,param_2,uVar2);
LAB_10670c168:
  *(int *)(param_1 + _DAT_11274e9dc) = param_3;
  return;
}



/* Entry: 10670c184; end: 10670c193; -[SCLensExplorerLoadingView state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10670c184(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11274e9dc);
}



/* Entry: 10670c194; end: 10670c1d3; -[SCLensExplorerLoadingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c194(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e9d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e9d8,0);
  return;
}



/* Entry: 10670c1d4; end: 10670c2c3; -[SCLensExplorerContentViewV2 initWithFrame:collectionViewLayout:contentInsets:bottomSafeAreaInsetEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10670c1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar2 = &uStack_80;
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126f2a70;
  uStack_80 = param_9;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11274e9e0);
    *puVar1 = param_5;
    puVar1[1] = param_6;
    puVar1[2] = param_7;
    puVar1[3] = param_8;
    *(undefined1 *)((long)puVar2 + (long)_DAT_11274e9e4) = param_12;
    func_0x00010c228680(puVar2);
    func_0x00010c228ec0(puVar2);
  }
  _objc_release(param_11);
  return (undefined1 *)puVar2;
}



/* Entry: 10670c2c4; end: 10670c3b7; -[SCLensExplorerContentViewV2 setupCollectionViewWithLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c2c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c014040();
  _objc_release(param_3);
  lVar3 = (long)_DAT_11274e9e8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c181fc0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed5690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCollectionViewContentInse_112592f48);
  return;
}



/* Entry: 10670c3b8; end: 10670c48b; -[SCLensExplorerContentViewV2 _updateCollectionViewContentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c3b8(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  puVar1 = (undefined8 *)(param_4 + _DAT_11274e9e0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  dVar7 = (double)puVar1[2];
  uVar6 = puVar1[3];
  if (*(char *)(param_4 + _DAT_11274e9e4) == '\x01') {
    lVar2 = param_4;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010c148fc0(param_4);
    }
    else {
      lVar3 = param_4;
      func_0x00010c2a71e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c148fc0();
      _objc_release(lVar3);
    }
    dVar7 = dVar7 + param_3;
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar4,uVar5,dVar7,uVar6,*(undefined8 *)(param_4 + _DAT_11274e9e8),
             PTR_s_setContentInset__11263e200);
  return;
}



/* Entry: 10670c48c; end: 10670c52f; -[SCLensExplorerContentViewV2 setupLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c48c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar3 = (long)_DAT_11274e9ec;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c09d0c0(PTR_PTR_1126cc910);
  func_0x00010c19f0e0(0,0,param_1,param_1,*(undefined8 *)(param_2 + lVar3));
  func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c1a8560(*(undefined8 *)(param_2 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_addSubview__11259c880,*(undefined8 *)(param_2 + lVar3));
  return;
}



/* Entry: 10670c530; end: 10670c5a7; -[SCLensExplorerContentViewV2 layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c530(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2a70;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  lVar1 = (long)_DAT_11274e9e8;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + _DAT_11274e9ec));
  return;
}



/* Entry: 10670c5a8; end: 10670c603; -[SCLensExplorerContentViewV2 safeAreaInsetsDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c5a8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2a70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_safeAreaInsetsDidChange_11252f690);
  if (*(char *)(param_1 + _DAT_11274e9e4) == '\x01') {
    func_0x00010bed5680(param_1);
  }
  return;
}



/* Entry: 10670c604; end: 10670c65f; -[SCLensExplorerContentViewV2 didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c604(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2a70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  if (*(char *)(param_1 + _DAT_11274e9e4) == '\x01') {
    func_0x00010bed5680(param_1);
  }
  return;
}



/* Entry: 10670c660; end: 10670c693; -[SCLensExplorerContentViewV2 showLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c660(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274e9ec;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 10670c694; end: 10670c6a3; -[SCLensExplorerContentViewV2 hideLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e9ec),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 10670c6a4; end: 10670c6b3; -[SCLensExplorerContentViewV2 collectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10670c6a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e9e8);
}



/* Entry: 10670c6b4; end: 10670c6f3; -[SCLensExplorerContentViewV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670c6b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e9e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e9ec,0);
  return;
}



/* Entry: 10670c6f4; end: 10670cbef;  */

void FUN_10670c6f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_384;
  long lStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined1 uStack_361;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined4 uStack_348;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined1 uStack_2e9;
  undefined **ppuStack_2e8;
  undefined4 uStack_2e0;
  undefined2 uStack_2d0;
  byte bStack_2ce;
  byte bStack_2cd;
  undefined1 *puStack_2b0;
  undefined ***pppuStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined4 uStack_260;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined1 *puStack_1c8;
  undefined ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined1 uStack_108;
  byte bStack_107;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126ccc98);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_201;
  FUN_10671e028();
  uStack_270 = 0xf;
  uStack_260 = 0x100;
  _objc_retain(param_2);
  ppuStack_278 = &PTR_SUB_110862760;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  puStack_230 = (undefined *)0x0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  uStack_1e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_1f8 = 10;
  uStack_1e8 = 0x100;
  ppuStack_200 = &PTR_SUB_110862700;
  uStack_1b0 = 0;
  puStack_1b8 = (undefined *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  plStack_198 = (long *)0x0;
  puVar3 = &uStack_2e9;
  uStack_248 = param_2;
  puStack_1c8 = puVar2;
  pppuStack_1c0 = &ppuStack_278;
  FUN_10671e1a0();
  uStack_358 = 0xf;
  uStack_348 = 0x100;
  ppuStack_360 = &PTR_SUB_110862958;
  uStack_320 = 0;
  uStack_328 = 0;
  lStack_310 = 0;
  lStack_318 = 0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  plStack_2f8 = (long *)0x0;
  bStack_2ce = puVar3[0x1a];
  bStack_2cd = puVar3[0x1b];
  uStack_2e0 = 10;
  uStack_2d0 = 0x100;
  ppuStack_2e8 = &PTR_SUB_110881e20;
  plStack_280 = (long *)0x0;
  lStack_298 = 0;
  lStack_2a0 = 0;
  plStack_288 = (long *)0x0;
  uStack_290 = 0;
  bStack_176 = (byte)uStack_1e6 | bStack_2ce;
  bStack_175 = uStack_1e6._1_1_ & bStack_2cd;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_1108629c8;
  pppuStack_150 = &ppuStack_2e8;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar2 = &uStack_361;
  uStack_330 = param_3;
  puStack_2b0 = puVar3;
  pppuStack_2a8 = &ppuStack_360;
  pppuStack_158 = &ppuStack_200;
  func_0x00010671e400();
  bStack_105 = bStack_175 & puVar2[0x1b];
  bStack_107 = (uStack_178._1_1_ | puVar2[0x19]) & 1;
  bStack_106 = (bStack_176 | puVar2[0x1a]) & 1;
  uStack_118 = 4;
  uStack_108 = 0;
  ppuStack_120 = &PTR_SUB_1108629c8;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_380 = 0;
  lStack_378 = 0;
  uStack_370 = 0;
  uStack_384 = 0;
  puVar4 = &uStack_b0;
  pppuStack_e8 = &ppuStack_190;
  puStack_e0 = puVar2;
  func_0x0001000e77a0(puVar4,&ppuStack_120,&lStack_380,&uStack_384);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_380 != 0) {
    lStack_378 = lStack_380;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_280;
  ppuStack_2e8 = &PTR_SUB_110881e20;
  plStack_280 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_288;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a0 != 0) {
    lStack_298 = lStack_2a0;
    __ZdlPv();
  }
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_SUB_110862958;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_318 != 0) {
    lStack_310 = lStack_318;
    __ZdlPv();
  }
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_SUB_110862700;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e8 = &puStack_1b8;
  func_0x000100105004(&ppuStack_2e8);
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_SUB_110862760;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_2e8 = &puStack_230;
  func_0x000100105004(&ppuStack_2e8);
  _objc_release(uStack_248);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10670cbf0; end: 10670ce37;  */

void FUN_10670cbf0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126ccdf0);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_106729e70();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  ppuStack_178 = &PTR_SUB_110862958;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_110881e20;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  uStack_148 = param_2;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_110881e20;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_110862958;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10670ce38; end: 10670d4d7;  */

void FUN_10670ce38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined4 uStack_7bc;
  undefined8 *puStack_7b8;
  undefined8 *puStack_7b0;
  undefined8 uStack_7a8;
  undefined **ppuStack_7a0;
  undefined4 uStack_798;
  undefined4 uStack_788;
  long *plStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long *plStack_740;
  long *plStack_738;
  undefined1 uStack_729;
  undefined **ppuStack_728;
  undefined4 uStack_720;
  undefined2 uStack_710;
  byte bStack_70e;
  byte bStack_70d;
  undefined1 *puStack_6f0;
  undefined ***pppuStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  long *plStack_6c8;
  long *plStack_6c0;
  undefined **ppuStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6a0;
  undefined ***pppuStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_670;
  long lStack_668;
  undefined8 uStack_660;
  long *plStack_658;
  long *plStack_650;
  undefined1 uStack_641;
  undefined **ppuStack_640;
  undefined4 uStack_638;
  undefined2 uStack_628;
  undefined2 uStack_626;
  undefined1 *puStack_608;
  undefined ***pppuStack_600;
  long lStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined **ppuStack_5d0;
  undefined4 uStack_5c8;
  undefined2 uStack_5b8;
  byte bStack_5b6;
  byte bStack_5b5;
  undefined ***pppuStack_598;
  undefined ***pppuStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long *plStack_570;
  long *plStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined *puStack_510;
  undefined ***pppuStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined8 *puStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  undefined1 *puStack_4c0;
  code *pcStack_4b8;
  long lStack_4a8;
  undefined4 uStack_4a0;
  undefined1 uStack_499;
  long lStack_498;
  long lStack_490;
  undefined8 uStack_488;
  long lStack_480;
  long lStack_478;
  undefined **ppuStack_468;
  undefined4 uStack_460;
  undefined4 uStack_450;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long *plStack_408;
  long *plStack_400;
  undefined1 uStack_3f1;
  undefined **ppuStack_3f0;
  undefined4 uStack_3e8;
  undefined2 uStack_3d8;
  byte bStack_3d6;
  byte bStack_3d5;
  undefined1 *puStack_3b8;
  undefined ***pppuStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined **ppuStack_380;
  undefined4 uStack_378;
  undefined4 uStack_368;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long lStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined1 uStack_309;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined2 uStack_2f0;
  undefined2 uStack_2ee;
  undefined1 *puStack_2d0;
  undefined ***pppuStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined2 uStack_280;
  byte bStack_27e;
  byte bStack_27d;
  undefined ***pppuStack_260;
  undefined ***pppuStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined **ppuStack_228;
  undefined4 uStack_220;
  undefined4 uStack_210;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined1 uStack_1b1;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_198;
  undefined2 uStack_196;
  undefined1 *puStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined **ppuStack_140;
  undefined4 uStack_138;
  undefined2 uStack_128;
  byte bStack_126;
  byte bStack_125;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  alStack_78[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  lStack_4a8 = param_1;
  _objc_opt_class(PTR_PTR_1126ccdf0);
  if (param_1 == 0) {
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_d0,param_1);
  }
  puVar3 = &uStack_1b1;
  FUN_106729e70();
  uStack_220 = 0xf;
  uStack_210 = 0x100;
  ppuStack_228 = &PTR_SUB_110862958;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_1d8 = 0;
  lStack_1e0 = 0;
  plStack_1c8 = (long *)0x0;
  uStack_1d0 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_196 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_1a8 = 10;
  uStack_198 = 0x100;
  ppuStack_1b0 = &PTR_SUB_110881e20;
  pppuStack_170 = &ppuStack_228;
  lStack_160 = 0;
  lStack_168 = 0;
  plStack_150 = (long *)0x0;
  uStack_158 = 0;
  plStack_148 = (long *)0x0;
  puVar4 = &uStack_309;
  uStack_1f8 = param_2;
  puStack_178 = puVar3;
  FUN_106729fb4();
  uStack_378 = 0xf;
  uStack_368 = 0x100;
  ppuStack_380 = &PTR_SUB_110862958;
  uStack_340 = 0;
  uStack_348 = 0;
  lStack_330 = 0;
  lStack_338 = 0;
  plStack_320 = (long *)0x0;
  uStack_328 = 0;
  uStack_350 = 0;
  plStack_318 = (long *)0x0;
  uStack_2ee = *(undefined2 *)(puVar4 + 0x1a);
  uStack_300 = 9;
  uStack_2f0 = 0x100;
  ppuStack_308 = &PTR_SUB_110881e20;
  pppuStack_2c8 = &ppuStack_380;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  plStack_2a0 = (long *)0x0;
  puVar3 = &uStack_3f1;
  puStack_2d0 = puVar4;
  FUN_10672a0fc();
  uStack_460 = 0xf;
  uStack_450 = 0x100;
  _objc_retain(param_3);
  ppuStack_468 = &PTR_SUB_110862760;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  plStack_408 = (long *)0x0;
  uStack_410 = 0;
  plStack_400 = (long *)0x0;
  bStack_3d6 = puVar3[0x1a];
  bStack_3d5 = puVar3[0x1b];
  uStack_3e8 = 10;
  uStack_3d8 = 0x100;
  ppuStack_3f0 = &PTR_SUB_110862700;
  pppuStack_3b0 = &ppuStack_468;
  uStack_3a0 = 0;
  uStack_3a8 = 0;
  plStack_390 = (long *)0x0;
  uStack_398 = 0;
  plStack_388 = (long *)0x0;
  bStack_27e = (byte)uStack_2ee | bStack_3d6;
  bStack_27d = uStack_2ee._1_1_ | bStack_3d5;
  uStack_290 = 5;
  uStack_280 = 0x100;
  ppuStack_298 = &PTR_SUB_1108629c8;
  pppuStack_260 = &ppuStack_308;
  plStack_230 = (long *)0x0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  uStack_248 = 0;
  lStack_250 = 0;
  bStack_125 = bStack_27d & uStack_196._1_1_;
  bStack_126 = bStack_27e | (byte)uStack_196;
  uStack_138 = 4;
  uStack_128 = 0x100;
  ppuStack_140 = &PTR_SUB_1108629c8;
  pppuStack_108 = &ppuStack_1b0;
  pppuStack_100 = &ppuStack_298;
  plStack_d8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_f8 = 0;
  puVar4 = &uStack_499;
  uStack_438 = param_3;
  puStack_3b8 = puVar3;
  pppuStack_258 = &ppuStack_3f0;
  FUN_106729fb4();
  puStack_98 = *(undefined8 **)(puVar4 + 0x10);
  uStack_90 = puVar4[0x19];
  uStack_8f = puVar4[0x18];
  uStack_80 = *(undefined8 *)(puVar4 + 0x28);
  uStack_8c = 0;
  pcStack_88 = FUN_10670de18;
  lStack_490 = 0;
  uStack_488 = 0;
  lStack_498 = 0;
  func_0x000100c435d0(&lStack_498,&puStack_98,alStack_78,1);
  func_0x000100c436b8(&lStack_480,&lStack_498);
  uStack_4a0 = 0;
  puVar5 = &uStack_d0;
  pppuVar9 = &ppuStack_140;
  plVar10 = &lStack_480;
  func_0x0001000e77a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  lVar2 = lStack_4a8;
  if (lStack_480 != 0) {
    lStack_478 = lStack_480;
    __ZdlPv();
  }
  if (lStack_498 != 0) {
    lStack_490 = lStack_498;
    __ZdlPv();
  }
  plVar1 = plStack_d8;
  ppuStack_140 = &PTR_SUB_1108629c8;
  plStack_d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_e0;
  plStack_e0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_f8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_230;
  ppuStack_298 = &PTR_SUB_1108629c8;
  plStack_230 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_250 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_388;
  ppuStack_3f0 = &PTR_SUB_110862700;
  plStack_388 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_390;
  plStack_390 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_98 = &uStack_3a8;
  func_0x000100105004(&puStack_98);
  plVar1 = plStack_400;
  ppuStack_468 = &PTR_SUB_110862760;
  plStack_400 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_408;
  plStack_408 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_98 = &uStack_420;
  func_0x000100105004(&puStack_98);
  _objc_release(uStack_438);
  plVar1 = plStack_2a0;
  ppuStack_308 = &PTR_SUB_110881e20;
  plStack_2a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2a8;
  plStack_2a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  plVar1 = plStack_318;
  ppuStack_380 = &PTR_SUB_110862958;
  plStack_318 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_320;
  plStack_320 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_338 != 0) {
    lStack_330 = lStack_338;
    __ZdlPv();
  }
  plVar1 = plStack_148;
  ppuStack_1b0 = &PTR_SUB_110881e20;
  plStack_148 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_168 != 0) {
    lStack_160 = lStack_168;
    __ZdlPv();
  }
  plVar1 = plStack_1c0;
  ppuStack_228 = &PTR_SUB_110862958;
  plStack_1c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1c8;
  plStack_1c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1e0 != 0) {
    lStack_1d8 = lStack_1e0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_a8);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(param_3);
  lVar7 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_78[0]) {
    ___stack_chk_fail();
    _objc_release(&uStack_3a8);
    if (lStack_480 != 0) {
      lStack_478 = lStack_480;
      __ZdlPv();
    }
    if (lStack_498 != 0) {
      lStack_490 = lStack_498;
      __ZdlPv();
    }
    func_0x000105007830(&ppuStack_140);
    func_0x000105007830(&ppuStack_298);
    func_0x0001050048c0(&ppuStack_3f0);
    func_0x000105004938(&ppuStack_468);
    func_0x0001053b6b38(&ppuStack_308);
    func_0x0001050077c0(&ppuStack_380);
    func_0x0001053b6b38(&ppuStack_1b0);
    func_0x0001050077c0(&ppuStack_228);
    func_0x000104d96620(&uStack_d0);
    _objc_release(param_3);
    _objc_release(lStack_4a8);
    lVar8 = lVar7;
    __Unwind_Resume();
    puStack_510 = &UNK_1108629b8;
    puStack_500 = &UNK_1108626f0;
    puStack_4f8 = &UNK_110862750;
    puStack_4f0 = &UNK_110881e10;
    puStack_4e8 = &UNK_110862948;
    lStack_4c8 = lVar2;
    pcStack_4b8 = FUN_10670d4d8;
    pppuStack_508 = &ppuStack_3f0;
    puStack_4e0 = &uStack_3a8;
    lStack_4d8 = lVar7;
    uStack_4d0 = param_3;
    puStack_4c0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(plVar10);
    _objc_opt_class(PTR_PTR_1126ccdf0);
    if (lVar8 == 0) {
      uStack_530 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_560,lVar8);
    }
    puVar3 = &uStack_641;
    FUN_106729e70();
    uStack_6b0 = 0xf;
    uStack_6a0 = 0x100;
    ppuStack_6b8 = &PTR_SUB_110862958;
    uStack_678 = 0;
    uStack_680 = 0;
    lStack_668 = 0;
    lStack_670 = 0;
    plStack_658 = (long *)0x0;
    uStack_660 = 0;
    plStack_650 = (long *)0x0;
    uStack_626 = *(undefined2 *)(puVar3 + 0x1a);
    uStack_638 = 10;
    uStack_628 = 0x100;
    ppuStack_640 = &PTR_SUB_110881e20;
    lStack_5f0 = 0;
    lStack_5f8 = 0;
    plStack_5e0 = (long *)0x0;
    uStack_5e8 = 0;
    plStack_5d8 = (long *)0x0;
    puVar4 = &uStack_729;
    pppuStack_688 = pppuVar9;
    puStack_608 = puVar3;
    pppuStack_600 = &ppuStack_6b8;
    FUN_10672a0fc();
    uStack_798 = 0xf;
    uStack_788 = 0x100;
    _objc_retain(plVar10);
    ppuStack_7a0 = &PTR_SUB_110862760;
    uStack_760 = 0;
    uStack_768 = 0;
    uStack_750 = 0;
    uStack_758 = 0;
    plStack_740 = (long *)0x0;
    uStack_748 = 0;
    plStack_738 = (long *)0x0;
    bStack_70e = puVar4[0x1a];
    bStack_70d = puVar4[0x1b];
    uStack_720 = 10;
    uStack_710 = 0x100;
    ppuStack_728 = &PTR_SUB_110862700;
    pppuStack_590 = &ppuStack_728;
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    plStack_6c8 = (long *)0x0;
    uStack_6d0 = 0;
    plStack_6c0 = (long *)0x0;
    bStack_5b6 = (byte)uStack_626 | bStack_70e;
    bStack_5b5 = uStack_626._1_1_ & bStack_70d;
    uStack_5c8 = 4;
    uStack_5b8 = 0x100;
    ppuStack_5d0 = &PTR_SUB_1108629c8;
    pppuStack_598 = &ppuStack_640;
    plStack_568 = (long *)0x0;
    plStack_570 = (long *)0x0;
    uStack_578 = 0;
    uStack_580 = 0;
    lStack_588 = 0;
    puStack_7b8 = (undefined8 *)0x0;
    puStack_7b0 = (undefined8 *)0x0;
    uStack_7a8 = 0;
    uStack_7bc = 0;
    puVar5 = &uStack_560;
    plStack_770 = plVar10;
    puStack_6f0 = puVar4;
    pppuStack_6e8 = &ppuStack_7a0;
    func_0x0001000e77a0(puVar5,&ppuStack_5d0,&puStack_7b8,&uStack_7bc);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (puStack_7b8 != (undefined8 *)0x0) {
      puStack_7b0 = puStack_7b8;
      __ZdlPv();
    }
    plVar1 = plStack_568;
    ppuStack_5d0 = &PTR_SUB_1108629c8;
    plStack_568 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_570;
    plStack_570 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_588 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_6c0;
    ppuStack_728 = &PTR_SUB_110862700;
    plStack_6c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_6c8;
    plStack_6c8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_7b8 = &uStack_6e0;
    func_0x000100105004(&puStack_7b8);
    plVar1 = plStack_738;
    ppuStack_7a0 = &PTR_SUB_110862760;
    plStack_738 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_740;
    plStack_740 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_7b8 = &uStack_758;
    func_0x000100105004(&puStack_7b8);
    _objc_release(plStack_770);
    plVar1 = plStack_5d8;
    ppuStack_640 = &PTR_SUB_110881e20;
    plStack_5d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_5e0;
    plStack_5e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_5f8 != 0) {
      lStack_5f0 = lStack_5f8;
      __ZdlPv();
    }
    plVar1 = plStack_650;
    ppuStack_6b8 = &PTR_SUB_110862958;
    plStack_650 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_658;
    plStack_658 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_670 != 0) {
      lStack_668 = lStack_670;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_538);
    _objc_release(uStack_548);
    _objc_release(uStack_550);
    _objc_release(plVar10);
    _objc_release(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10670d4d8; end: 10670d923;  */

void FUN_10670d4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_30c;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126ccdf0);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_191;
  FUN_106729e70();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  ppuStack_208 = &PTR_SUB_110862958;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_110881e20;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar3 = &uStack_279;
  uStack_1d8 = param_2;
  puStack_158 = puVar2;
  pppuStack_150 = &ppuStack_208;
  FUN_10672a0fc();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  _objc_retain(param_3);
  ppuStack_2f0 = &PTR_SUB_110862760;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar3[0x1a];
  bStack_25d = puVar3[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_SUB_110862700;
  pppuStack_e0 = &ppuStack_278;
  uStack_228 = 0;
  uStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  puStack_308 = (undefined8 *)0x0;
  puStack_300 = (undefined8 *)0x0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar4 = &uStack_b0;
  uStack_2c0 = param_3;
  puStack_240 = puVar3;
  pppuStack_238 = &ppuStack_2f0;
  func_0x0001000e77a0(puVar4,&ppuStack_120,&puStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puStack_308 != (undefined8 *)0x0) {
    puStack_300 = puStack_308;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_SUB_110862700;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_308 = &uStack_230;
  func_0x000100105004(&puStack_308);
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_SUB_110862760;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_308 = &uStack_2a8;
  func_0x000100105004(&puStack_308);
  _objc_release(uStack_2c0);
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_110881e20;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862958;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10670d924; end: 10670de17;  */

undefined8 * FUN_10670d924(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined8 **ppuVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  byte bStack_3a2;
  byte bStack_3a1;
  undefined8 *puStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  undefined1 *puStack_380;
  code *pcStack_378;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 uStack_349;
  undefined **appuStack_348 [3];
  byte bStack_32e;
  byte bStack_32d;
  undefined8 auStack_300 [3];
  long *plStack_2e8;
  long *plStack_2e0;
  undefined **ppuStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2c0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  long *plStack_270;
  undefined1 uStack_261;
  undefined **ppuStack_260;
  undefined4 uStack_258;
  undefined2 uStack_248;
  byte bStack_246;
  byte bStack_245;
  undefined1 *puStack_228;
  undefined ***pppuStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined **ppuStack_1f0;
  undefined4 uStack_1e8;
  undefined2 uStack_1d8;
  byte bStack_1d6;
  byte bStack_1d5;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126ccdf0);
  if (param_1 == 0) {
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_180,param_1);
  }
  puVar5 = &uStack_261;
  FUN_106729e70();
  uStack_2d0 = 0xf;
  uStack_2c0 = 0x100;
  ppuStack_2d8 = &PTR_SUB_110862958;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  plStack_278 = (long *)0x0;
  uStack_280 = 0;
  plStack_270 = (long *)0x0;
  bVar2 = puVar5[0x1a];
  bVar3 = puVar5[0x1b];
  uStack_258 = 10;
  uStack_248 = 0x100;
  ppuStack_260 = &PTR_SUB_110881e20;
  pppuStack_220 = &ppuStack_2d8;
  lStack_210 = 0;
  lStack_218 = 0;
  plStack_200 = (long *)0x0;
  uStack_208 = 0;
  plStack_1f8 = (long *)0x0;
  puVar6 = &uStack_349;
  uStack_2a8 = param_2;
  bStack_246 = bVar2;
  bStack_245 = bVar3;
  puStack_228 = puVar5;
  FUN_10672a0fc(puVar6);
  _objc_retain(param_3);
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_368 = 0;
  lVar7 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x0001004c2bb4(&uStack_368,lVar7);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar16 = *plStack_130;
    do {
      lVar17 = 0;
      do {
        if (*plStack_130 != lVar16) {
          _objc_enumerationMutation(param_3);
        }
        uVar15 = *(undefined8 *)(lStack_138 + lVar17 * 8);
        _objc_retain(uVar15);
        uStack_100 = uVar15;
        func_0x0001004c2d3c(&uStack_368,&uStack_100);
        _objc_release(uStack_100);
        lVar17 = lVar17 + 1;
      } while (lVar7 != lVar17);
      lVar7 = param_3;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  func_0x0001004c2e3c(appuStack_348,0xc,puVar6,&uStack_368);
  bStack_1d5 = bVar3 & bStack_32d;
  bStack_1d6 = (bVar2 | bStack_32e) & 1;
  uStack_1e8 = 4;
  uStack_1d8 = 0x100;
  ppuStack_1f0 = &PTR_SUB_1108629c8;
  pppuStack_1b8 = &ppuStack_260;
  uStack_1a0 = 0;
  lStack_1a8 = 0;
  plStack_190 = (long *)0x0;
  uStack_198 = 0;
  plStack_188 = (long *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_140 = uStack_140 & 0xffffffff00000000;
  puVar8 = &uStack_180;
  pppuVar11 = &ppuStack_1f0;
  ppuVar12 = &puStack_f8;
  pppuStack_1b0 = appuStack_348;
  func_0x0001000e77a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (puStack_f8 != (undefined8 *)0x0) {
    puStack_f0 = puStack_f8;
    __ZdlPv();
  }
  plVar4 = plStack_188;
  ppuStack_1f0 = &PTR_SUB_1108629c8;
  plStack_188 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_190;
  plStack_190 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_1a8 != 0) {
    __ZdlPv();
  }
  plVar4 = plStack_2e0;
  appuStack_348[0] = &PTR_SUB_110862700;
  plStack_2e0 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_2e8;
  plStack_2e8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  puStack_f8 = auStack_300;
  func_0x000100105004(&puStack_f8);
  puStack_f8 = &uStack_368;
  func_0x000100105004(&puStack_f8);
  plVar4 = plStack_1f8;
  ppuStack_260 = &PTR_SUB_110881e20;
  plStack_1f8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_200;
  plStack_200 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar4 = plStack_270;
  ppuStack_2d8 = &PTR_SUB_110862958;
  plStack_270 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = plStack_278;
  plStack_278 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (lStack_290 != 0) {
    lStack_288 = lStack_290;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_158);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(param_3);
  lVar7 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (puStack_f8 != (undefined8 *)0x0) {
    puStack_f0 = puStack_f8;
    __ZdlPv();
  }
  func_0x000105007830(&ppuStack_1f0);
  func_0x0001050048c0(appuStack_348);
  puStack_f8 = &uStack_368;
  func_0x000100105004(&puStack_f8);
  func_0x0001053b6b38(&ppuStack_260);
  func_0x0001050077c0(&ppuStack_2d8);
  func_0x000104d96620(&uStack_180);
  _objc_release(param_3);
  _objc_release(param_1);
  __Unwind_Resume(lVar7);
  lVar16 = lVar7;
  func_0x000104bd46a0();
  pcStack_378 = FUN_10670de18;
  puStack_3a0 = puVar8;
  lStack_398 = lVar7;
  lStack_390 = param_3;
  lStack_388 = param_1;
  puStack_380 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(pppuVar11);
  lVar7 = lVar16;
  (*(code *)ppuVar12)(lVar16,&bStack_3a1);
  pppuVar10 = pppuVar11;
  (*(code *)ppuVar12)(pppuVar11,&bStack_3a2);
  uVar13 = 2;
  if (bStack_3a2 == 0) {
    uVar13 = 0;
  }
  if (bStack_3a1 == 0) {
    uVar13 = 1;
  }
  uVar14 = 1;
  if (lVar7 <= (long)pppuVar10) {
    uVar14 = 2;
  }
  uVar1 = 0;
  if ((long)pppuVar10 <= lVar7) {
    uVar1 = uVar14;
  }
  uVar14 = uVar13;
  if ((bStack_3a2 & 1) == 0) {
    uVar14 = uVar1;
  }
  if ((bStack_3a1 & 1) == 0) {
    uVar13 = uVar14;
  }
  _objc_release(pppuVar11);
  _objc_release(lVar16);
  return (undefined8 *)(ulong)uVar13;
}



/* Entry: 10670de18; end: 10670dec7;  */

undefined4 FUN_10670de18(long param_1,long param_2,code *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bStack_32;
  byte bStack_31;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  (*param_3)(param_1,&bStack_31);
  lVar3 = param_2;
  (*param_3)(param_2,&bStack_32);
  uVar4 = 2;
  if (bStack_32 == 0) {
    uVar4 = 0;
  }
  if (bStack_31 == 0) {
    uVar4 = 1;
  }
  uVar5 = 1;
  if (lVar2 <= lVar3) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (lVar3 <= lVar2) {
    uVar1 = uVar5;
  }
  uVar5 = uVar4;
  if ((bStack_32 & 1) == 0) {
    uVar5 = uVar1;
  }
  if ((bStack_31 & 1) == 0) {
    uVar4 = uVar5;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10670dec8; end: 10670e0bf;  */

void FUN_10670dec8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5a598;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e5a598,
                      &PTR____CFConstantStringClassReference_110e5a5b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10670e0c0; end: 10670e1e3; -[SCLensExplorerLoggingConfiguration initWithSectionIdentifier:pageName:renderStrategy:isFullPage:isLensCollectionCategoryPage:sectionPosition:] */

undefined1 *
FUN_10670e0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

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
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f2a78;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10670e1e4; end: 10670e207; -[SCLensExplorerLoggingConfiguration copyWithZone:] */

undefined8 FUN_10670e1e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10670e208; end: 10670e29f; -[SCLensExplorerLoggingConfiguration hash] */

undefined8 * FUN_10670e208(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10670e370:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10670e37c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[5];
            if (puVar6 != (undefined8 *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_10670e37c;
            }
            goto LAB_10670e370;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10670e37c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10670e2a0; end: 10670e397; -[SCLensExplorerLoggingConfiguration isEqual:] */

long FUN_10670e2a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10670e370:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10670e37c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10670e37c;
            }
            goto LAB_10670e370;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10670e37c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10670e398; end: 10670e39f; -[SCLensExplorerLoggingConfiguration sectionIdentifier] */

undefined8 FUN_10670e398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10670e3a0; end: 10670e3a7; -[SCLensExplorerLoggingConfiguration pageName] */

undefined8 FUN_10670e3a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10670e3a8; end: 10670e3af; -[SCLensExplorerLoggingConfiguration renderStrategy] */

undefined8 FUN_10670e3a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10670e3b0; end: 10670e3b7; -[SCLensExplorerLoggingConfiguration isFullPage] */

undefined1 FUN_10670e3b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10670e3b8; end: 10670e3bf; -[SCLensExplorerLoggingConfiguration isLensCollectionCategoryPage] */

undefined1 FUN_10670e3b8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10670e3c0; end: 10670e3c7; -[SCLensExplorerLoggingConfiguration sectionPosition] */

undefined8 FUN_10670e3c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10670e3c8; end: 10670e40f; -[SCLensExplorerLoggingConfiguration .cxx_destruct] */

void FUN_10670e3c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10670e410; end: 10670e4bb; -[SCLensExplorerLensAnimationViewModel initWithAnimation:images:] */

undefined1 *
FUN_10670e410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2a80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10670e4bc; end: 10670e4df; -[SCLensExplorerLensAnimationViewModel copyWithZone:] */

undefined8 FUN_10670e4bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10670e4e0; end: 10670e553; -[SCLensExplorerLensAnimationViewModel hash] */

undefined8 * FUN_10670e4e0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10670e5d4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10670e5e0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10670e5e0;
        }
        goto LAB_10670e5d4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10670e5e0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10670e554; end: 10670e5fb; -[SCLensExplorerLensAnimationViewModel isEqual:] */

long FUN_10670e554(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10670e5d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10670e5e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10670e5e0;
        }
        goto LAB_10670e5d4;
      }
    }
    lVar3 = 0;
  }
LAB_10670e5e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10670e5fc; end: 10670e603; -[SCLensExplorerLensAnimationViewModel animation] */

undefined8 FUN_10670e5fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10670e604; end: 10670e60b; -[SCLensExplorerLensAnimationViewModel images] */

undefined8 FUN_10670e604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10670e60c; end: 10670e63b; -[SCLensExplorerLensAnimationViewModel .cxx_destruct] */

void FUN_10670e60c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10670e63c; end: 10670e8ff; -[SCLensExplorerLensCellViewModel initWithLensItem:cellType:creatorUserName:lensName:lensInfoInsets:lensInfoLabelsSpacing:fullCellSize:previewSize:attributionIconSize:iconFrame:previewImage:iconImage:attributionIcon:isFadeGradientShown:isLongPressActionSupported:isCreatorPageEnabled:isAttributionShown:isIconShown:isSelected:isSponsoredAttributionShown:viewCount:shouldShowName:isScpExclusive:] */

undefined8 *
FUN_10670e63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined4 param_25,undefined4 param_26,undefined8 param_27,undefined4 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_24);
  _objc_retain(param_27);
  puStack_b0 = PTR_PTR_1126f2a88;
  puVar1 = &uStack_b8;
  uStack_b8 = param_8;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    puVar1[4] = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[0x12] = param_1;
    puVar1[0x13] = param_2;
    puVar1[0x14] = param_3;
    puVar1[0x15] = param_4;
    puVar1[7] = param_5;
    puVar1[0xc] = param_6;
    puVar1[0xd] = param_7;
    puVar1[0xe] = param_16;
    puVar1[0xf] = param_17;
    puVar1[0x10] = param_18;
    puVar1[0x11] = param_19;
    puVar1[0x16] = param_20;
    puVar1[0x17] = param_21;
    puVar1[0x18] = param_22;
    puVar1[0x19] = param_23;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_25;
    *(undefined1 *)((long)puVar1 + 9) = param_25._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_25._2_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_25._3_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_26;
    *(undefined1 *)((long)puVar1 + 0xd) = param_26._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_26._2_1_;
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xf) = (undefined1)param_28;
    *(undefined1 *)(puVar1 + 2) = param_28._1_1_;
  }
  _objc_release(param_27);
  _objc_release(param_24);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  return puVar1;
}



/* Entry: 10670e900; end: 10670e923; -[SCLensExplorerLensCellViewModel copyWithZone:] */

undefined8 FUN_10670e900(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10670e924; end: 10670ec03; -[SCLensExplorerLensCellViewModel hash] */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010670edd0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 * FUN_10670e924(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  uint3 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  double dVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  byte bVar15;
  undefined1 uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 in_register_00005005;
  byte bVar20;
  undefined1 in_register_00005007;
  undefined6 uVar21;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  undefined8 *puVar10;
  
  uVar21 = (undefined6)((ulong)param_1 >> 0x10);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bfde980();
  uStack_120 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  uStack_128 = uVar7;
  func_0x00010bfde980();
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uStack_118 = uVar8;
  func_0x00010bfde980();
  uVar13 = ~*(ulong *)(param_2 + 0x90) + *(ulong *)(param_2 + 0x90) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_108 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_108 = uStack_108 ^ uStack_108 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0x98) + *(ulong *)(param_2 + 0x98) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_100 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_100 = uStack_100 ^ uStack_100 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0xa0) + *(ulong *)(param_2 + 0xa0) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_f8 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_f8 = uStack_f8 ^ uStack_f8 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0xa8) + *(ulong *)(param_2 + 0xa8) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_f0 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_f0 = uStack_f0 ^ uStack_f0 >> 0x16;
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  uVar13 = ~*(ulong *)(param_2 + 0x38) + *(ulong *)(param_2 + 0x38) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_e8 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_e8 = uStack_e8 ^ uStack_e8 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0x60) + *(ulong *)(param_2 + 0x60) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_e0 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_e0 = uStack_e0 ^ uStack_e0 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0x68) + *(ulong *)(param_2 + 0x68) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_d8 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_d8 = uStack_d8 ^ uStack_d8 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0x70) + *(ulong *)(param_2 + 0x70) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_d0 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_d0 = uStack_d0 ^ uStack_d0 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0x78) + *(ulong *)(param_2 + 0x78) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_c8 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_c8 = uStack_c8 ^ uStack_c8 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0x80) + *(ulong *)(param_2 + 0x80) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_c0 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_c0 = uStack_c0 ^ uStack_c0 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0x88) + *(ulong *)(param_2 + 0x88) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_b8 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_b8 = uStack_b8 ^ uStack_b8 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0xb0) + *(ulong *)(param_2 + 0xb0) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_b0 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_b0 = uStack_b0 ^ uStack_b0 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0xb8) + *(ulong *)(param_2 + 0xb8) * 0x40000;
  uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uStack_a8 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uVar13 = ~*(ulong *)(param_2 + 0xc0) + *(ulong *)(param_2 + 0xc0) * 0x40000;
  uVar1 = ~*(ulong *)(param_2 + 200) + *(ulong *)(param_2 + 200) * 0x40000;
  uVar12 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
  uVar13 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_a0 = (uVar12 ^ uVar12 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uStack_98 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uStack_110 = uVar7;
  func_0x00010bfde980();
  uVar7 = *(undefined8 *)(param_2 + 0x48);
  uStack_90 = uVar8;
  func_0x00010bfde980();
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  uStack_88 = uVar7;
  func_0x00010bfde980();
  uVar4 = *(undefined4 *)(param_2 + 8);
  bVar15 = (byte)uVar4;
  uVar16 = (undefined1)((uint)uVar4 >> 8);
  bVar17 = (byte)((uint)uVar4 >> 0x10);
  bVar18 = (byte)((uint)uVar4 >> 0x18);
  bVar20 = bVar18 & 1;
  uVar2 = CONCAT12(uVar16,(ushort)bVar15) & 0x1ff01;
  bVar19 = (byte)(uVar2 >> 0x10);
  uStack_60 = (ulong)bVar20;
  uStack_68 = (ulong)(bVar17 & 1);
  uStack_70 = (ulong)bVar19;
  uStack_78 = (ulong)(byte)uVar2;
  uStack_58 = (ulong)*(byte *)(param_2 + 0xc);
  uStack_50 = (ulong)*(byte *)(param_2 + 0xd);
  uStack_48 = (ulong)*(byte *)(param_2 + 0xe);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uStack_80 = uVar8;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_2 + 0xf);
  uStack_30 = (ulong)*(byte *)(param_2 + 0x10);
  puVar9 = &uStack_128;
  uStack_40 = uVar7;
  func_0x000100505190(puVar9,0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  if (puVar9 == param_4) {
LAB_10670ee84:
    puVar14 = (undefined8 *)0x1;
  }
  else {
    puVar14 = (undefined8 *)0x0;
    if ((puVar9 == (undefined8 *)0x0) || (param_4 == (undefined8 *)0x0)) goto LAB_10670ee88;
    puVar14 = puVar9;
    _objc_opt_class(puVar9);
    puVar10 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar14);
    iVar6 = (int)puVar10;
    if (((((ulong)puVar10 & 1) != 0) &&
        ((((puVar9[4] == param_4[4] && (*(char *)(puVar9 + 1) == *(char *)(param_4 + 1))) &&
          (*(char *)((long)puVar9 + 9) == *(char *)((long)param_4 + 9))) &&
         ((*(char *)((long)puVar9 + 10) == *(char *)((long)param_4 + 10) &&
          (*(char *)((long)puVar9 + 0xb) == *(char *)((long)param_4 + 0xb))))))) &&
       ((*(char *)((long)puVar9 + 0xc) == *(char *)((long)param_4 + 0xc) &&
        (((*(char *)((long)puVar9 + 0xd) == *(char *)((long)param_4 + 0xd) &&
          (*(char *)((long)puVar9 + 0xe) == *(char *)((long)param_4 + 0xe))) &&
         ((*(char *)((long)puVar9 + 0xf) == *(char *)((long)param_4 + 0xf) &&
          (*(char *)(puVar9 + 2) == *(char *)(param_4 + 2))))))))) {
      lVar11 = -(ulong)((double)puVar9[0x14] == (double)param_4[0x14]);
      uVar3 = NEON_uminv(CONCAT17((char)(-(ulong)((double)puVar9[0x15] == (double)param_4[0x15]) >>
                                        8),CONCAT16((char)-(ulong)((double)puVar9[0x15] ==
                                                                  (double)param_4[0x15]),
                                                    CONCAT15((char)((ulong)lVar11 >> 8),
                                                             CONCAT14((char)lVar11,
                                                                      CONCAT13((char)(-(ulong)((
                                                  double)puVar9[0x13] == (double)param_4[0x13]) >> 8
                                                  ),CONCAT12((char)-(ulong)((double)puVar9[0x13] ==
                                                                           (double)param_4[0x13]),
                                                             -(ushort)((double)puVar9[0x12] ==
                                                                      (double)param_4[0x12]))))))),2
                        );
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS((double)puVar9[7] - (double)param_4[7]);
        if ((dVar5 < 2.2250738585072014e-308) ||
           (dVar5 < ABS((double)puVar9[7] + (double)param_4[7]) * 2.220446049250313e-16)) {
          puVar14 = (undefined8 *)0x0;
          if ((((double)puVar9[0xc] != (double)param_4[0xc]) ||
              ((((double)puVar9[0xd] != (double)param_4[0xd] ||
                (puVar14 = (undefined8 *)0x0, (double)puVar9[0xe] != (double)param_4[0xe])) ||
               ((double)puVar9[0xf] != (double)param_4[0xf])))) ||
             ((puVar14 = (undefined8 *)0x0, (double)puVar9[0x10] != (double)param_4[0x10] ||
              ((double)puVar9[0x11] != (double)param_4[0x11])))) goto LAB_10670ee88;
          _CGRectEqualToRect(CONCAT17(in_register_00005007,
                                      CONCAT16(bVar20,CONCAT15(in_register_00005005,
                                                               CONCAT14(bVar19,CONCAT13(bVar18,
                                                  CONCAT12(bVar17,CONCAT11(uVar16,bVar15))))))),
                             CONCAT62(uVar21,(short)lVar11),puVar9[0x18],puVar9[0x19],param_4[0x16],
                             param_4[0x17],param_4[0x18],param_4[0x19]);
          if (((((iVar6 != 0) &&
                (((lVar11 = puVar9[3], lVar11 == param_4[3] ||
                  (func_0x00010c071ae0(), (int)lVar11 != 0)) &&
                 ((lVar11 = puVar9[5], lVar11 == param_4[5] ||
                  (func_0x00010c071ae0(), (int)lVar11 != 0)))))) &&
               ((lVar11 = puVar9[6], lVar11 == param_4[6] ||
                (func_0x00010c071ae0(), (int)lVar11 != 0)))) &&
              ((lVar11 = puVar9[8], lVar11 == param_4[8] ||
               (func_0x00010c071ae0(), (int)lVar11 != 0)))) &&
             (((lVar11 = puVar9[9], lVar11 == param_4[9] ||
               (func_0x00010c071ae0(), (int)lVar11 != 0)) &&
              ((lVar11 = puVar9[10], lVar11 == param_4[10] ||
               (func_0x00010c071ae0(), (int)lVar11 != 0)))))) {
            puVar14 = (undefined8 *)puVar9[0xb];
            if (puVar14 != (undefined8 *)param_4[0xb]) {
              func_0x00010c071ae0();
              goto LAB_10670ee88;
            }
            goto LAB_10670ee84;
          }
        }
      }
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_10670ee88:
  _objc_release(param_4);
  return puVar14;
}



/* Entry: 10670ec04; end: 10670eea3; -[SCLensExplorerLensCellViewModel isEqual:] */

long FUN_10670ec04(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10670ee84:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10670ee88;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    iVar2 = (int)uVar4;
    if ((((uVar4 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
          (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
       ((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
        (((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
          (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) &&
         ((*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf) &&
          ((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
           (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0xa8) ==
                                                 *(double *)(param_3 + 0xa8)),
                                        CONCAT24(-(ushort)(*(double *)(param_1 + 0xa0) ==
                                                          *(double *)(param_3 + 0xa0)),
                                                 CONCAT22(-(ushort)(*(double *)(param_1 + 0x98) ==
                                                                   *(double *)(param_3 + 0x98)),
                                                          -(ushort)(*(double *)(param_1 + 0x90) ==
                                                                   *(double *)(param_3 + 0x90))))),2
                              ), (uVar6 & 1) != 0)))))))))) {
      dVar1 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      if ((dVar1 < 2.2250738585072014e-308) ||
         (dVar1 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16)) {
        lVar5 = 0;
        if (((((*(double *)(param_1 + 0x60) != *(double *)(param_3 + 0x60)) ||
              (*(double *)(param_1 + 0x68) != *(double *)(param_3 + 0x68))) ||
             (lVar5 = 0, *(double *)(param_1 + 0x70) != *(double *)(param_3 + 0x70))) ||
            ((*(double *)(param_1 + 0x78) != *(double *)(param_3 + 0x78) ||
             (lVar5 = 0, *(double *)(param_1 + 0x80) != *(double *)(param_3 + 0x80))))) ||
           (*(double *)(param_1 + 0x88) != *(double *)(param_3 + 0x88))) goto LAB_10670ee88;
        _CGRectEqualToRect((short)*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                           *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                           *(undefined8 *)(param_3 + 0xb0),*(undefined8 *)(param_3 + 0xb8),
                           *(undefined8 *)(param_3 + 0xc0),*(undefined8 *)(param_3 + 200));
        if (((((iVar2 != 0) &&
              ((lVar5 = *(long *)(param_1 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
             ((lVar5 = *(long *)(param_1 + 0x28), lVar5 == *(long *)(param_3 + 0x28) ||
              (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
            ((((lVar5 = *(long *)(param_1 + 0x30), lVar5 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
              ((lVar5 = *(long *)(param_1 + 0x40), lVar5 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
             ((lVar5 = *(long *)(param_1 + 0x48), lVar5 == *(long *)(param_3 + 0x48) ||
              (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
           ((lVar5 = *(long *)(param_1 + 0x50), lVar5 == *(long *)(param_3 + 0x50) ||
            (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
          lVar5 = *(long *)(param_1 + 0x58);
          if (lVar5 != *(long *)(param_3 + 0x58)) {
            func_0x00010c071ae0();
            goto LAB_10670ee88;
          }
          goto LAB_10670ee84;
        }
      }
    }
    lVar5 = 0;
  }
LAB_10670ee88:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 10670eea4; end: 10670eeab; -[SCLensExplorerLensCellViewModel lensItem] */

undefined8 FUN_10670eea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10670eeac; end: 10670eeb3; -[SCLensExplorerLensCellViewModel cellType] */

undefined8 FUN_10670eeac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10670eeb4; end: 10670eebb; -[SCLensExplorerLensCellViewModel creatorUserName] */

undefined8 FUN_10670eeb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10670eebc; end: 10670eec3; -[SCLensExplorerLensCellViewModel lensName] */

undefined8 FUN_10670eebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10670eec4; end: 10670eecf; -[SCLensExplorerLensCellViewModel lensInfoInsets] */

undefined8 FUN_10670eec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10670eed0; end: 10670eed7; -[SCLensExplorerLensCellViewModel lensInfoLabelsSpacing] */

undefined8 FUN_10670eed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10670eed8; end: 10670eedf; -[SCLensExplorerLensCellViewModel fullCellSize] */

undefined1  [16] FUN_10670eed8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x60);
}



/* Entry: 10670eee0; end: 10670eee7; -[SCLensExplorerLensCellViewModel previewSize] */

undefined1  [16] FUN_10670eee0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x70);
}



/* Entry: 10670eee8; end: 10670eeef; -[SCLensExplorerLensCellViewModel attributionIconSize] */

undefined1  [16] FUN_10670eee8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x80);
}



/* Entry: 10670eef0; end: 10670eefb; -[SCLensExplorerLensCellViewModel iconFrame] */

undefined8 FUN_10670eef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10670eefc; end: 10670ef03; -[SCLensExplorerLensCellViewModel previewImage] */

undefined8 FUN_10670eefc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10670ef04; end: 10670ef0b; -[SCLensExplorerLensCellViewModel iconImage] */

undefined8 FUN_10670ef04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10670ef0c; end: 10670ef13; -[SCLensExplorerLensCellViewModel attributionIcon] */

undefined8 FUN_10670ef0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10670ef14; end: 10670ef1b; -[SCLensExplorerLensCellViewModel isFadeGradientShown] */

undefined1 FUN_10670ef14(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10670ef1c; end: 10670ef23; -[SCLensExplorerLensCellViewModel isLongPressActionSupported] */

undefined1 FUN_10670ef1c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}


