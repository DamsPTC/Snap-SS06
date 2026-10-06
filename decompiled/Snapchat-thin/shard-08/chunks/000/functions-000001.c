/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ba78a4; end: 105ba7937; -[SCFriendsFeedViewController didDismissModal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba78a4(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + _DAT_112730f34);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_1127313d0) = 0;
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105ba7938;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 105ba7938; end: 105ba793f;  */

void FUN_105ba7938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__tearDownSponsoredSnapModalIfNee_112590548);
  return;
}



/* Entry: 105ba7940; end: 105ba799f; -[SCFriendsFeedViewController sponsoredSnapPlaybackDidCompleteWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7940(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112730f2c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed8a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFriendsFeedVisibleCellsWi_112593c28,1)
  ;
  return;
}



/* Entry: 105ba79a0; end: 105ba7b0f; -[SCFriendsFeedViewController sponsoredSnapPlaybackWillBeginDismissingWithScope:transitionAnimator:] */

void FUN_105ba79a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_8);
  func_0x00010c2923e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0ebe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar2 = PTR_PTR_1126c2c40;
  _objc_opt_class(PTR_PTR_1126c2c40);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  if (uVar1 != 0) {
    func_0x00010bfa3900(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010bfa3ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c16f460(param_8);
    func_0x00010bf20c00(uVar3);
    uVar4 = param_8;
    func_0x00010c0f3c60(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar3);
    func_0x00010c16f4e0(param_8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 105ba7b10; end: 105ba7b13; -[SCFriendsFeedViewController sponsoredSnapPlaybackWillBeginPresentingWithScope:transitionAnimator:] */

void FUN_105ba7b10(void)

{
  return;
}



/* Entry: 105ba7b14; end: 105ba7d27; -[SCFriendsFeedViewController _feedCellForFeedId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7b14(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar7 = lVar2;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar2);
      }
      puVar3 = PTR_PTR_1126c2c78;
      uVar10 = *(ulong *)(lVar11 * 8);
      _objc_retain(uVar10);
      _objc_opt_class(puVar3);
      uVar4 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar3);
      uVar1 = uVar10;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar10);
      if (uVar1 != 0) {
        uVar4 = uVar10;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126c29a8;
        _objc_opt_class(PTR_PTR_1126c29a8);
        uVar5 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar3);
        uVar1 = uVar4;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar4);
        uVar4 = uVar1;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x000107cf92c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar1);
        if ((uVar6 & 1) != 0) goto LAB_105ba7cd8;
        _objc_release(uVar10);
      }
      lVar11 = lVar11 + 1;
    } while (lVar7 != lVar11);
    lVar7 = lVar2;
    func_0x00010bf52a60();
  }
  uVar10 = 0;
LAB_105ba7cd8:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_112731288;
  lVar7 = *(long *)(param_3 + lVar9);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_3 + lVar9));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ba7d28; end: 105ba7d7f; -[SCFriendsFeedViewController removeContentForCreatorId:playlistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7d28(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731288;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ba7d80; end: 105ba7d8f; -[SCFriendsFeedViewController sourceNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba7d80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127313d8);
}



/* Entry: 105ba7d90; end: 105ba7d9f; -[SCFriendsFeedViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba7d90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127311dc);
}



/* Entry: 105ba7da0; end: 105ba7daf; -[SCFriendsFeedViewController overlayItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba7da0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731490);
}



/* Entry: 105ba7db0; end: 105ba7dbf; -[SCFriendsFeedViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba7db0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273134c);
}



/* Entry: 105ba7dc0; end: 105ba7dff; -[SCFriendsFeedViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273134c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba7e00; end: 105ba7e3f; -[SCFriendsFeedViewController setEmptyFeedListPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273135c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba7e40; end: 105ba7e4f; -[SCFriendsFeedViewController dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba7e40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731204);
}



/* Entry: 105ba7e50; end: 105ba7e8f; -[SCFriendsFeedViewController setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731204;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba7e90; end: 105ba7e9f; -[SCFriendsFeedViewController tapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba7e90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127312ec);
}



/* Entry: 105ba7ea0; end: 105ba7edf; -[SCFriendsFeedViewController setTapGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127312ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba7ee0; end: 105ba7eef; -[SCFriendsFeedViewController delayedTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba7ee0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127312f0);
}



/* Entry: 105ba7ef0; end: 105ba7f2f; -[SCFriendsFeedViewController setDelayedTapGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127312f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba7f30; end: 105ba7f3f; -[SCFriendsFeedViewController longPressGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba7f30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127312e4);
}



/* Entry: 105ba7f40; end: 105ba7f7f; -[SCFriendsFeedViewController setLongPressGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127312e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba7f80; end: 105ba7f8f; -[SCFriendsFeedViewController doubleTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba7f80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127312e8);
}



/* Entry: 105ba7f90; end: 105ba7fcf; -[SCFriendsFeedViewController setDoubleTapGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127312e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba7fd0; end: 105ba7fdf; -[SCFriendsFeedViewController panGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba7fd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127312f4);
}



/* Entry: 105ba7fe0; end: 105ba801f; -[SCFriendsFeedViewController setPanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127312f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba8020; end: 105ba802f; -[SCFriendsFeedViewController topGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba8020(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731494);
}



/* Entry: 105ba8030; end: 105ba806f; -[SCFriendsFeedViewController setTopGradientView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba8030(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731494;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba8070; end: 105ba807f; -[SCFriendsFeedViewController scrollShadowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba8070(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273131c);
}



/* Entry: 105ba8080; end: 105ba80bf; -[SCFriendsFeedViewController setScrollShadowView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba8080(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273131c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba80c0; end: 105ba80cf; -[SCFriendsFeedViewController bottomGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba80c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731498);
}



/* Entry: 105ba80d0; end: 105ba810f; -[SCFriendsFeedViewController setBottomGradientView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba80d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731498;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba8110; end: 105ba811f; -[SCFriendsFeedViewController lastScrolledYOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba8110(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112730eb0);
}



/* Entry: 105ba8120; end: 105ba812f; -[SCFriendsFeedViewController setLastScrolledYOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba8120(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112730eb0) = param_1;
  return;
}



/* Entry: 105ba8130; end: 105ba813f; -[SCFriendsFeedViewController lastYOffsetBeforeScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba8130(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112730eb4);
}



/* Entry: 105ba8140; end: 105ba814f; -[SCFriendsFeedViewController setLastYOffsetBeforeScrolling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba8140(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112730eb4) = param_1;
  return;
}



/* Entry: 105ba8150; end: 105ba815f; -[SCFriendsFeedViewController viewHasAppeared] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105ba8150(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112730eb8);
}



/* Entry: 105ba8160; end: 105ba816f; -[SCFriendsFeedViewController setViewHasAppeared:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba8160(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112730eb8) = param_3;
  return;
}



/* Entry: 105ba8170; end: 105ba817f; -[SCFriendsFeedViewController selectedUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba8170(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273149c);
}



/* Entry: 105ba8180; end: 105ba818b; -[SCFriendsFeedViewController setSelectedUsername:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba8180(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105ba818c; end: 105ba81cb; -[SCFriendsFeedViewController setCardContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba818c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731384;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba81cc; end: 105ba81db; -[SCFriendsFeedViewController applyRoundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105ba81cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112730ebc);
}



/* Entry: 105ba81dc; end: 105ba81eb; -[SCFriendsFeedViewController setApplyRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba81dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112730ebc) = param_3;
  return;
}



/* Entry: 105ba81ec; end: 105ba81fb; -[SCFriendsFeedViewController scrollToTopButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba81ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127314a0);
}



/* Entry: 105ba81fc; end: 105ba823b; -[SCFriendsFeedViewController setScrollToTopButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba81fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127314a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba823c; end: 105ba824b; -[SCFriendsFeedViewController scrollToTopBottomConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba823c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127314a4);
}



/* Entry: 105ba824c; end: 105ba828b; -[SCFriendsFeedViewController setScrollToTopBottomConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba824c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127314a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba828c; end: 105ba829b; -[SCFriendsFeedViewController circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba828c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112730fd8);
}



/* Entry: 105ba829c; end: 105ba82db; -[SCFriendsFeedViewController setCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba829c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112730fd8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba82dc; end: 105ba82eb; -[SCFriendsFeedViewController playedStoryIdentifiers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba82dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112730f9c);
}



/* Entry: 105ba82ec; end: 105ba832b; -[SCFriendsFeedViewController setPlayedStoryIdentifiers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba82ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112730f9c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba832c; end: 105ba833b; -[SCFriendsFeedViewController storiesSourceSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba832c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731428);
}



/* Entry: 105ba833c; end: 105ba834b; -[SCFriendsFeedViewController setStoriesSourceSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba833c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112731428) = param_3;
  return;
}



/* Entry: 105ba834c; end: 105ba835b; -[SCFriendsFeedViewController numOfStoriesLeftToAutoLoadInFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ba834c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127311cc);
}



/* Entry: 105ba835c; end: 105ba836b; -[SCFriendsFeedViewController setNumOfStoriesLeftToAutoLoadInFeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba835c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127311cc) = param_3;
  return;
}



/* Entry: 105ba836c; end: 105ba989f; -[SCFriendsFeedViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba836c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112730f9c,0);
  _objc_storeStrong(param_1 + _DAT_112730fd8,0);
  _objc_storeStrong(param_1 + _DAT_1127314a4,0);
  _objc_storeStrong(param_1 + _DAT_1127314a0,0);
  _objc_storeStrong(param_1 + _DAT_112731384,0);
  _objc_storeStrong(param_1 + _DAT_11273149c,0);
  _objc_storeStrong(param_1 + _DAT_112731498,0);
  _objc_storeStrong(param_1 + _DAT_11273131c,0);
  _objc_storeStrong(param_1 + _DAT_112731494,0);
  _objc_storeStrong(param_1 + _DAT_1127312f4,0);
  _objc_storeStrong(param_1 + _DAT_1127312e8,0);
  _objc_storeStrong(param_1 + _DAT_1127312e4,0);
  _objc_storeStrong(param_1 + _DAT_1127312f0,0);
  _objc_storeStrong(param_1 + _DAT_1127312ec,0);
  _objc_storeStrong(param_1 + _DAT_112731204,0);
  _objc_storeStrong(param_1 + _DAT_11273135c,0);
  _objc_storeStrong(param_1 + _DAT_11273134c,0);
  _objc_storeStrong(param_1 + _DAT_112731490,0);
  _objc_storeStrong(param_1 + _DAT_1127311dc,0);
  _objc_storeStrong(param_1 + _DAT_1127313d8,0);
  _objc_storeStrong(param_1 + _DAT_112731480,0);
  _objc_storeStrong(param_1 + _DAT_112731130,0);
  _objc_storeStrong(param_1 + _DAT_11273136c,0);
  _objc_storeStrong(param_1 + _DAT_11273147c,0);
  _objc_storeStrong(param_1 + _DAT_11273112c,0);
  _objc_storeStrong(param_1 + _DAT_112731134,0);
  _objc_storeStrong(param_1 + _DAT_1127312d4,0);
  _objc_storeStrong(param_1 + _DAT_1127312d0,0);
  _objc_storeStrong(param_1 + _DAT_1127312cc,0);
  _objc_storeStrong(param_1 + _DAT_112731124,0);
  _objc_storeStrong(param_1 + _DAT_112731120,0);
  _objc_storeStrong(param_1 + _DAT_11273111c,0);
  _objc_storeStrong(param_1 + _DAT_112730fdc,0);
  _objc_storeStrong(param_1 + _DAT_112731168,0);
  _objc_storeStrong(param_1 + _DAT_112731164,0);
  _objc_storeStrong(param_1 + _DAT_112731160,0);
  _objc_storeStrong(param_1 + _DAT_11273115c,0);
  _objc_storeStrong(param_1 + _DAT_112731158,0);
  _objc_storeStrong(param_1 + _DAT_112731154,0);
  _objc_storeStrong(param_1 + _DAT_112731150,0);
  _objc_storeStrong(param_1 + _DAT_11273114c,0);
  _objc_storeStrong(param_1 + _DAT_112731148,0);
  _objc_storeStrong(param_1 + _DAT_112731144,0);
  _objc_storeStrong(param_1 + _DAT_112731140,0);
  _objc_storeStrong(param_1 + _DAT_11273113c,0);
  _objc_storeStrong(param_1 + _DAT_112731114,0);
  _objc_storeStrong(param_1 + _DAT_112731110,0);
  _objc_storeStrong(param_1 + _DAT_112731484,0);
  _objc_storeStrong(param_1 + _DAT_11273110c,0);
  _objc_storeStrong(param_1 + _DAT_112731118,0);
  _objc_storeStrong(param_1 + _DAT_112731108,0);
  _objc_storeStrong(param_1 + _DAT_112731104,0);
  _objc_storeStrong(param_1 + _DAT_1127312d8,0);
  _objc_storeStrong(param_1 + _DAT_112731310,0);
  _objc_storeStrong(param_1 + _DAT_112731100,0);
  _objc_storeStrong(param_1 + _DAT_1127310fc,0);
  _objc_storeStrong(param_1 + _DAT_11273139c,0);
  _objc_storeStrong(param_1 + _DAT_1127313f0,0);
  _objc_storeStrong(param_1 + _DAT_112730f24,0);
  _objc_storeStrong(param_1 + _DAT_11273117c,0);
  _objc_storeStrong(param_1 + _DAT_112731138,0);
  _objc_storeStrong(param_1 + _DAT_1127310e4,0);
  _objc_storeStrong(param_1 + _DAT_1127310e0,0);
  _objc_storeStrong(param_1 + _DAT_1127311fc,0);
  _objc_storeStrong(param_1 + _DAT_1127311f8,0);
  _objc_storeStrong(param_1 + _DAT_1127312c4,0);
  _objc_storeStrong(param_1 + _DAT_1127312c0,0);
  _objc_storeStrong(param_1 + _DAT_112730fd0,0);
  _objc_storeStrong(param_1 + _DAT_1127312b4,0);
  _objc_storeStrong(param_1 + _DAT_1127312c8,0);
  _objc_storeStrong(param_1 + _DAT_1127310dc,0);
  _objc_storeStrong(param_1 + _DAT_112731200,0);
  _objc_storeStrong(param_1 + _DAT_1127310d8,0);
  _objc_storeStrong(param_1 + _DAT_112731174,0);
  _objc_storeStrong(param_1 + _DAT_112731470,0);
  _objc_storeStrong(param_1 + _DAT_112731474,0);
  _objc_storeStrong(param_1 + _DAT_11273146c,0);
  _objc_storeStrong(param_1 + _DAT_1127310f8,0);
  _objc_storeStrong(param_1 + _DAT_112731408,0);
  _objc_storeStrong(param_1 + _DAT_1127311f4,0);
  _objc_storeStrong(param_1 + _DAT_1127312ac,0);
  _objc_storeStrong(param_1 + _DAT_1127313e8,0);
  _objc_storeStrong(param_1 + _DAT_112731450,0);
  _objc_storeStrong(param_1 + _DAT_1127312b0,0);
  _objc_storeStrong(param_1 + _DAT_1127312bc,0);
  _objc_storeStrong(param_1 + _DAT_112731464,0);
  _objc_destroyWeak(param_1 + _DAT_1127310d0);
  _objc_storeStrong(param_1 + _DAT_1127310cc,0);
  _objc_storeStrong(param_1 + _DAT_112731468,0);
  _objc_storeStrong(param_1 + _DAT_112731088,0);
  _objc_storeStrong(param_1 + _DAT_1127312a0,0);
  _objc_storeStrong(param_1 + _DAT_11273129c,0);
  _objc_storeStrong(param_1 + _DAT_112731298,0);
  _objc_storeStrong(param_1 + _DAT_1127310c8,0);
  _objc_storeStrong(param_1 + _DAT_1127312b8,0);
  _objc_storeStrong(param_1 + _DAT_11273116c,0);
  _objc_storeStrong(param_1 + _DAT_11273128c,0);
  _objc_storeStrong(param_1 + _DAT_112731288,0);
  _objc_storeStrong(param_1 + _DAT_1127310b0,0);
  _objc_storeStrong(param_1 + _DAT_1127310ac,0);
  _objc_storeStrong(param_1 + _DAT_1127310f0,0);
  _objc_storeStrong(param_1 + _DAT_1127313c0,0);
  _objc_storeStrong(param_1 + _DAT_112730f7c,0);
  _objc_storeStrong(param_1 + _DAT_112731294,0);
  _objc_storeStrong(param_1 + _DAT_112731290,0);
  _objc_storeStrong(param_1 + _DAT_1127310b4,0);
  _objc_storeStrong(param_1 + _DAT_1127310a8,0);
  _objc_storeStrong(param_1 + _DAT_1127310f4,0);
  _objc_storeStrong(param_1 + _DAT_1127310a4,0);
  _objc_storeStrong(param_1 + _DAT_112731338,0);
  _objc_storeStrong(param_1 + _DAT_1127313fc,0);
  _objc_storeStrong(param_1 + _DAT_1127310a0,0);
  _objc_storeStrong(param_1 + _DAT_1127310c4,0);
  _objc_storeStrong(param_1 + _DAT_11273109c,0);
  _objc_storeStrong(param_1 + _DAT_112731098,0);
  _objc_storeStrong(param_1 + _DAT_112731094,0);
  _objc_storeStrong(param_1 + _DAT_112731090,0);
  _objc_storeStrong(param_1 + _DAT_1127311c8,0);
  _objc_storeStrong(param_1 + _DAT_1127312a4,0);
  _objc_storeStrong(param_1 + _DAT_1127310b8,0);
  _objc_storeStrong(param_1 + _DAT_112731254,0);
  _objc_storeStrong(param_1 + _DAT_112731250,0);
  _objc_storeStrong(param_1 + _DAT_11273124c,0);
  _objc_storeStrong(param_1 + _DAT_112731084,0);
  _objc_storeStrong(param_1 + _DAT_11273107c,0);
  _objc_storeStrong(param_1 + _DAT_112731078,0);
  _objc_storeStrong(param_1 + _DAT_112731280,0);
  _objc_storeStrong(param_1 + _DAT_112731274,0);
  _objc_storeStrong(param_1 + _DAT_11273105c,0);
  _objc_storeStrong(param_1 + _DAT_112731270,0);
  _objc_storeStrong(param_1 + _DAT_11273126c,0);
  _objc_destroyWeak(param_1 + _DAT_112731268);
  _objc_storeStrong(param_1 + _DAT_112731264,0);
  _objc_storeStrong(param_1 + _DAT_112731438,0);
  _objc_storeStrong(param_1 + _DAT_112731058,0);
  _objc_storeStrong(param_1 + _DAT_112731054,0);
  _objc_storeStrong(param_1 + _DAT_112731050,0);
  _objc_storeStrong(param_1 + _DAT_11273104c,0);
  _objc_storeStrong(param_1 + _DAT_112731048,0);
  _objc_storeStrong(param_1 + _DAT_112731414,0);
  _objc_storeStrong(param_1 + _DAT_112731044,0);
  _objc_storeStrong(param_1 + _DAT_112731040,0);
  _objc_storeStrong(param_1 + _DAT_112731258,0);
  _objc_storeStrong(param_1 + _DAT_112731030,0);
  _objc_storeStrong(param_1 + _DAT_112731028,0);
  _objc_storeStrong(param_1 + _DAT_112731238,0);
  _objc_storeStrong(param_1 + _DAT_1127311c4,0);
  _objc_storeStrong(param_1 + _DAT_112731060,0);
  _objc_storeStrong(param_1 + _DAT_11273103c,0);
  _objc_storeStrong(param_1 + _DAT_112731038,0);
  _objc_storeStrong(param_1 + _DAT_112731034,0);
  _objc_storeStrong(param_1 + _DAT_112731260,0);
  _objc_storeStrong(param_1 + _DAT_11273125c,0);
  _objc_storeStrong(param_1 + _DAT_112731024,0);
  _objc_storeStrong(param_1 + _DAT_112731020,0);
  _objc_storeStrong(param_1 + _DAT_112731244,0);
  _objc_storeStrong(param_1 + _DAT_112731240,0);
  _objc_storeStrong(param_1 + _DAT_11273101c,0);
  _objc_storeStrong(param_1 + _DAT_112731018,0);
  _objc_storeStrong(param_1 + _DAT_112731334,0);
  _objc_storeStrong(param_1 + _DAT_1127313b8,0);
  _objc_storeStrong(param_1 + _DAT_1127313bc,0);
  _objc_storeStrong(param_1 + _DAT_1127311bc,0);
  _objc_storeStrong(param_1 + _DAT_11273133c,0);
  _objc_storeStrong(param_1 + _DAT_1127312a8,0);
  _objc_storeStrong(param_1 + _DAT_11273132c,0);
  _objc_destroyWeak(param_1 + _DAT_112730f3c);
  _objc_storeStrong(param_1 + _DAT_112730f38,0);
  _objc_storeStrong(param_1 + _DAT_11273130c,0);
  _objc_storeStrong(param_1 + _DAT_112731308,0);
  _objc_storeStrong(param_1 + _DAT_112731328,0);
  _objc_storeStrong(param_1 + _DAT_112731324,0);
  _objc_storeStrong(param_1 + _DAT_112731248,0);
  _objc_storeStrong(param_1 + _DAT_112731080,0);
  _objc_storeStrong(param_1 + _DAT_112731074,0);
  _objc_storeStrong(param_1 + _DAT_11273123c,0);
  _objc_storeStrong(param_1 + _DAT_112731070,0);
  _objc_storeStrong(param_1 + _DAT_112730fac,0);
  _objc_storeStrong(param_1 + _DAT_112730fa8,0);
  _objc_storeStrong(param_1 + _DAT_112730fa4,0);
  _objc_storeStrong(param_1 + _DAT_112731014,0);
  _objc_storeStrong(param_1 + _DAT_1127311f0,0);
  _objc_storeStrong(param_1 + _DAT_1127311e0,0);
  _objc_storeStrong(param_1 + _DAT_1127311ec,0);
  _objc_storeStrong(param_1 + _DAT_1127311e8,0);
  _objc_storeStrong(param_1 + _DAT_1127311e4,0);
  _objc_storeStrong(param_1 + _DAT_112730fa0,0);
  _objc_storeStrong(param_1 + _DAT_112730f84,0);
  _objc_storeStrong(param_1 + _DAT_112731010,0);
  _objc_storeStrong(param_1 + _DAT_11273102c,0);
  _objc_storeStrong(param_1 + _DAT_112731234,0);
  _objc_storeStrong(param_1 + _DAT_112731230,0);
  _objc_storeStrong(param_1 + _DAT_112731348,0);
  _objc_destroyWeak(param_1 + _DAT_112730ee4);
  _objc_storeStrong(param_1 + _DAT_112730ee0,0);
  _objc_storeStrong(param_1 + _DAT_112730fd4,0);
  _objc_storeStrong(param_1 + _DAT_112730f8c,0);
  _objc_storeStrong(param_1 + _DAT_11273122c,0);
  _objc_storeStrong(param_1 + _DAT_112731208,0);
  _objc_storeStrong(param_1 + _DAT_11273120c,0);
  _objc_storeStrong(param_1 + _DAT_112731358,0);
  _objc_storeStrong(param_1 + _DAT_112731434,0);
  _objc_storeStrong(param_1 + _DAT_112731350,0);
  _objc_storeStrong(param_1 + _DAT_112731210,0);
  _objc_storeStrong(param_1 + _DAT_1127313cc,0);
  _objc_storeStrong(param_1 + _DAT_112731228,0);
  _objc_storeStrong(param_1 + _DAT_112731224,0);
  _objc_storeStrong(param_1 + _DAT_112731400,0);
  _objc_storeStrong(param_1 + _DAT_11273121c,0);
  _objc_storeStrong(param_1 + _DAT_112731220,0);
  _objc_storeStrong(param_1 + _DAT_112731380,0);
  _objc_storeStrong(param_1 + _DAT_1127311d8,0);
  _objc_storeStrong(param_1 + _DAT_1127311d4,0);
  _objc_storeStrong(param_1 + _DAT_112731218,0);
  _objc_storeStrong(param_1 + _DAT_112731214,0);
  _objc_storeStrong(param_1 + _DAT_1127311d0,0);
  _objc_storeStrong(param_1 + _DAT_1127313dc,0);
  _objc_storeStrong(param_1 + _DAT_112731320,0);
  _objc_storeStrong(param_1 + _DAT_1127313d4,0);
  _objc_storeStrong(param_1 + _DAT_112730f98,0);
  _objc_storeStrong(param_1 + _DAT_11273145c,0);
  _objc_storeStrong(param_1 + _DAT_1127313f8,0);
  _objc_storeStrong(param_1 + _DAT_11273108c,0);
  _objc_storeStrong(param_1 + _DAT_11273137c,0);
  _objc_storeStrong(param_1 + _DAT_1127310ec,0);
  _objc_storeStrong(param_1 + _DAT_1127310e8,0);
  _objc_storeStrong(param_1 + _DAT_1127311b8,0);
  _objc_storeStrong(param_1 + _DAT_112731424,0);
  _objc_storeStrong(param_1 + _DAT_112731458,0);
  _objc_storeStrong(param_1 + _DAT_1127313b4,0);
  _objc_storeStrong(param_1 + _DAT_1127311ac,0);
  _objc_storeStrong(param_1 + _DAT_1127311b4,0);
  _objc_storeStrong(param_1 + _DAT_1127311a8,0);
  _objc_storeStrong(param_1 + _DAT_112731454,0);
  _objc_storeStrong(param_1 + _DAT_112731318,0);
  _objc_storeStrong(param_1 + _DAT_1127311a4,0);
  _objc_storeStrong(param_1 + _DAT_1127311a0,0);
  _objc_storeStrong(param_1 + _DAT_112731340,0);
  _objc_storeStrong(param_1 + _DAT_112731344,0);
  _objc_storeStrong(param_1 + _DAT_112731370,0);
  _objc_storeStrong(param_1 + _DAT_11273118c,0);
  _objc_storeStrong(param_1 + _DAT_112731354,0);
  _objc_storeStrong(param_1 + _DAT_112730ff8,0);
  _objc_storeStrong(param_1 + _DAT_112730ff4,0);
  _objc_storeStrong(param_1 + _DAT_1127313ec,0);
  _objc_storeStrong(param_1 + _DAT_1127313c8,0);
  _objc_storeStrong(param_1 + _DAT_11273119c,0);
  _objc_storeStrong(param_1 + _DAT_112731198,0);
  _objc_storeStrong(param_1 + _DAT_112731190,0);
  _objc_storeStrong(param_1 + _DAT_112731194,0);
  _objc_storeStrong(param_1 + _DAT_112731188,0);
  _objc_storeStrong(param_1 + _DAT_112731184,0);
  _objc_storeStrong(param_1 + _DAT_1127312dc,0);
  _objc_storeStrong(param_1 + _DAT_11273127c,0);
  _objc_storeStrong(param_1 + _DAT_112731278,0);
  _objc_storeStrong(param_1 + _DAT_11273106c,0);
  _objc_storeStrong(param_1 + _DAT_1127311c0,0);
  _objc_storeStrong(param_1 + _DAT_1127311b0,0);
  _objc_storeStrong(param_1 + _DAT_112730f5c,0);
  _objc_storeStrong(param_1 + _DAT_112730f58,0);
  _objc_storeStrong(param_1 + _DAT_112730f54,0);
  _objc_storeStrong(param_1 + _DAT_112730f50,0);
  _objc_storeStrong(param_1 + _DAT_112730f4c,0);
  _objc_storeStrong(param_1 + _DAT_112730f48,0);
  _objc_storeStrong(param_1 + _DAT_112730f44,0);
  _objc_storeStrong(param_1 + _DAT_112730f40,0);
  _objc_storeStrong(param_1 + _DAT_1127313e0,0);
  _objc_storeStrong(param_1 + _DAT_112730f34,0);
  _objc_storeStrong(param_1 + _DAT_112730f30,0);
  _objc_storeStrong(param_1 + _DAT_112730f2c,0);
  _objc_storeStrong(param_1 + _DAT_112731390,0);
  _objc_storeStrong(param_1 + _DAT_112731394,0);
  _objc_storeStrong(param_1 + _DAT_112730f28,0);
  _objc_storeStrong(param_1 + _DAT_112731304,0);
  _objc_storeStrong(param_1 + _DAT_112731300,0);
  _objc_storeStrong(param_1 + _DAT_1127312fc,0);
  _objc_storeStrong(param_1 + _DAT_1127312f8,0);
  _objc_storeStrong(param_1 + _DAT_11273144c,0);
  _objc_storeStrong(param_1 + _DAT_1127312e0,0);
  _objc_storeStrong(param_1 + _DAT_112731128,0);
  _objc_storeStrong(param_1 + _DAT_112731068,0);
  _objc_storeStrong(param_1 + _DAT_112731064,0);
  _objc_storeStrong(param_1 + _DAT_11273100c,0);
  _objc_storeStrong(param_1 + _DAT_112731004,0);
  _objc_storeStrong(param_1 + _DAT_112731284,0);
  _objc_storeStrong(param_1 + _DAT_112731000,0);
  _objc_storeStrong(param_1 + _DAT_112730fe0,0);
  _objc_storeStrong(param_1 + _DAT_112730fcc,0);
  _objc_storeStrong(param_1 + _DAT_112730fc8,0);
  _objc_destroyWeak(param_1 + _DAT_112730fc4);
  _objc_destroyWeak(param_1 + _DAT_112730fc0);
  _objc_storeStrong(param_1 + _DAT_112730fbc,0);
  _objc_destroyWeak(param_1 + _DAT_112730fb8);
  _objc_storeStrong(param_1 + _DAT_112730ff0,0);
  _objc_storeStrong(param_1 + _DAT_112730fec,0);
  _objc_storeStrong(param_1 + _DAT_112730fe8,0);
  _objc_storeStrong(param_1 + _DAT_112730fe4,0);
  _objc_storeStrong(param_1 + _DAT_112730fb4,0);
  _objc_storeStrong(param_1 + _DAT_112730fb0,0);
  _objc_storeStrong(param_1 + _DAT_1127310c0,0);
  _objc_storeStrong(param_1 + _DAT_112730ffc,0);
  _objc_storeStrong(param_1 + _DAT_112731178,0);
  _objc_storeStrong(param_1 + _DAT_1127310bc,0);
  _objc_storeStrong(param_1 + _DAT_112730f94,0);
  _objc_storeStrong(param_1 + _DAT_112730f90,0);
  _objc_storeStrong(param_1 + _DAT_112730f88,0);
  _objc_storeStrong(param_1 + _DAT_112730f80,0);
  _objc_storeStrong(param_1 + _DAT_112730f64,0);
  _objc_storeStrong(param_1 + _DAT_112730f60,0);
  _objc_storeStrong(param_1 + _DAT_112730f20,0);
  _objc_storeStrong(param_1 + _DAT_112730f1c,0);
  _objc_storeStrong(param_1 + _DAT_112730f18,0);
  _objc_storeStrong(param_1 + _DAT_112730f14,0);
  _objc_storeStrong(param_1 + _DAT_112730f74,0);
  _objc_storeStrong(param_1 + _DAT_112730f70,0);
  _objc_storeStrong(param_1 + _DAT_112730f6c,0);
  _objc_storeStrong(param_1 + _DAT_112730f68,0);
  _objc_storeStrong(param_1 + _DAT_112730f10,0);
  _objc_storeStrong(param_1 + _DAT_112730f0c,0);
  _objc_storeStrong(param_1 + _DAT_112730f08,0);
  _objc_storeStrong(param_1 + _DAT_112730f04,0);
  _objc_storeStrong(param_1 + _DAT_112731444,0);
  _objc_storeStrong(param_1 + _DAT_112730f00,0);
  _objc_storeStrong(param_1 + _DAT_112730f78,0);
  _objc_storeStrong(param_1 + _DAT_112730efc,0);
  _objc_storeStrong(param_1 + _DAT_112730ef8,0);
  _objc_storeStrong(param_1 + _DAT_112730ef4,0);
  _objc_storeStrong(param_1 + _DAT_112731008,0);
  _objc_storeStrong(param_1 + _DAT_112730ef0,0);
  _objc_storeStrong(param_1 + _DAT_112730eec,0);
  _objc_storeStrong(param_1 + _DAT_112730ee8,0);
  _objc_storeStrong(param_1 + _DAT_112730edc,0);
  _objc_storeStrong(param_1 + _DAT_112730ed4,0);
  _objc_storeStrong(param_1 + _DAT_112730ed0,0);
  _objc_storeStrong(param_1 + _DAT_112730ecc,0);
  _objc_storeStrong(param_1 + _DAT_112730ec8,0);
  _objc_storeStrong(param_1 + _DAT_112730ec4,0);
  _objc_storeStrong(param_1 + _DAT_112730ed8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112730ec0,0);
  return;
}



/* Entry: 105ba98a0; end: 105ba98df;  */

void FUN_105ba98a0(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_PTR_1126c2c40;
  _objc_retain();
  _objc_opt_class(puVar1);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  uVar3 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar1 = PTR_PTR_1126c29a8;
  _objc_retain(uVar3);
  _objc_opt_class(puVar1);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ba98e0; end: 105ba9927;  */

void FUN_105ba98e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000107cf9cc8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ba9928; end: 105ba993f;  */

void FUN_105ba9928(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105ba9940; end: 105ba997b;  */

void FUN_105ba9940(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_105bab278();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ba997c; end: 105ba9a8f;  */

void FUN_105ba997c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c27e300();
  _objc_release(lVar3);
  _objc_release();
  if (lVar1 == 1) {
    FUN_105bab278();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105ba9a90; end: 105baa5eb;  */

void FUN_105ba9a90(long param_1,undefined **param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined **ppuVar22;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010c0720c0();
  if ((((uVar3 & 1) == 0) && (uVar3 = uVar4, func_0x00010c0720c0(), (uVar3 & 1) == 0)) &&
     (uVar3 = uVar4, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
    ppuVar18 = &PTR____CFConstantStringClassReference_110f485b8;
    uVar3 = uVar4;
    func_0x00010c0720c0();
    if ((int)uVar3 != 0) {
      uVar19 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar19;
      func_0x00010bfd9160();
      _objc_release(uVar19);
      if ((int)uVar9 != 0) goto LAB_105ba9b38;
    }
    lVar20 = *(long *)(param_1 + 0x20);
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    func_0x00010c242200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar20);
    uVar3 = *(ulong *)(param_1 + 0x20);
    if (lVar21 == 0) {
      cVar1 = *(char *)(param_1 + 0x49);
      _objc_retain(uVar3);
      if (cVar1 == '\x01') {
        uVar7 = uVar3;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x000107cf95f0();
        _objc_release(uVar7);
        if ((int)uVar8 != 0) {
          uVar7 = uVar3;
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf509a0();
          if (uVar8 == 1) {
            _objc_release(uVar7);
          }
          else {
            uVar8 = uVar3;
            func_0x00010bef0c80();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar8;
            func_0x00010c07d980();
            _objc_release(uVar8);
            _objc_release(uVar7);
            if ((uVar14 & 1) != 0) goto LAB_105baa070;
          }
          uVar7 = uVar3;
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0cb940();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar8;
          func_0x000107cff0a4();
          _objc_release(uVar8);
          _objc_release(uVar7);
          if ((uVar14 & 1) == 0) {
            puStack_b8 = &uStack_c0;
            uStack_c0 = 0;
            uStack_b0 = 0x2020000000;
            uStack_a8 = 0;
            uVar7 = uVar3;
            func_0x00010bef0c80();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c0cb340();
            _objc_retainAutoreleasedReturnValue();
            puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_e8 = 0xc2000000;
            uStack_e0 = 0x105bab300;
            puStack_d8 = &UNK_1108d9e20;
            _objc_retain(uVar3);
            puStack_c8 = &uStack_c0;
            param_4 = &PTR___NSConcreteGlobalBlock_1108d9e50;
            param_5 = &PTR___NSConcreteGlobalBlock_1108d9e70;
            ppuVar18 = &puStack_f0;
            uStack_d0 = uVar3;
            func_0x00010c0bfe20(uVar8);
            _objc_release(uVar8);
            _objc_release(uVar7);
            bVar2 = *(byte *)(puStack_b8 + 3);
            _objc_release(uStack_d0);
            __Block_object_dispose(&uStack_c0,8);
            _objc_release();
            if ((bVar2 & 1) != 0) {
              func_0x00010b0aefcc();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar3;
              func_0x000107d05a0c();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar3);
              uVar3 = *(ulong *)(param_1 + 0x20);
              param_5 = *(undefined ***)(param_1 + 0x30);
              FUN_105baa5ec(uVar3,0,0,*(undefined8 *)(param_1 + 0x28),param_5);
              _objc_retainAutoreleasedReturnValue();
              lVar20 = *(long *)(param_1 + 0x38);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              lVar21 = lVar20;
              func_0x00010c2827c0();
              _objc_release(lVar20);
              puVar15 = PTR_PTR_1126b02a8;
              if (lVar21 == 2) {
                puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
                uStack_a0 = uVar3;
                uStack_98 = uVar7;
                func_0x00010bf0a140();
                _objc_retainAutoreleasedReturnValue();
                puVar15 = PTR_PTR_1126b02a8;
                _objc_alloc();
                ppuVar17 = (undefined **)PTR_PTR_1126c2908;
                _objc_alloc(PTR_PTR_1126c2908);
                func_0x00010bff2c00(0x3fb999999999999a,0x4008000000000000);
                ppuVar18 = &PTR____CFConstantStringClassReference_110eb8798;
                param_4 = ppuVar17;
                func_0x00010c01b460();
                lVar21 = *(long *)(*(long *)(param_1 + 0x40) + 8);
                ppuVar22 = *(undefined ***)(lVar21 + 0x28);
                *(undefined **)(lVar21 + 0x28) = puVar15;
              }
              else {
                uVar8 = uVar7;
                if (lVar21 != 3) {
                  uVar8 = uVar3;
                }
                _objc_retain(uVar8);
                _objc_alloc();
                ppuVar22 = (undefined **)PTR_PTR_1126c2928;
                _objc_alloc(PTR_PTR_1126c2928);
                puVar16 = *(undefined **)(param_1 + 0x20);
                func_0x00010bfa3d00();
                _objc_retainAutoreleasedReturnValue();
                ppuVar17 = (undefined **)PTR_PTR_1126c2dd0;
                _objc_alloc(PTR_PTR_1126c2dd0);
                func_0x00010c04f240(0x3fb999999999999a,0x4008000000000000);
                func_0x00010c0124a0(ppuVar22);
                ppuVar18 = &PTR____CFConstantStringClassReference_110eb87b8;
                param_4 = ppuVar22;
                func_0x00010c01b460();
                lVar21 = *(long *)(*(long *)(param_1 + 0x40) + 8);
                uVar9 = *(undefined8 *)(lVar21 + 0x28);
                *(undefined **)(lVar21 + 0x28) = puVar15;
                _objc_release(uVar9);
                _objc_release(uVar8);
              }
              _objc_release(ppuVar22);
              _objc_release(ppuVar17);
              _objc_release(puVar16);
              _objc_release(uVar3);
              _objc_release(uVar7);
            }
            goto LAB_105ba9d84;
          }
        }
      }
    }
    else {
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c242200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c067ec0();
      if ((int)uVar8 == 1) {
        uVar19 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar19;
        func_0x00010c07d980();
        if ((int)uVar9 != 0) {
          _objc_release(uVar19);
          goto LAB_105ba9e90;
        }
        cVar1 = *(char *)(param_1 + 0x48);
        _objc_release(uVar19);
        _objc_release(uVar7);
        _objc_release();
        if (cVar1 != '\x01') goto LAB_105ba9ea0;
        func_0x0001070b06c0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
LAB_105ba9e90:
        _objc_release(uVar7);
        _objc_release(uVar3);
LAB_105ba9ea0:
        lVar6 = *(long *)(param_1 + 0x20);
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = lVar6;
        func_0x00010c242200();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar21;
        func_0x00010c067fc0();
        _objc_release(lVar21);
        _objc_release(lVar6);
        if (lVar20 != 0) goto LAB_105ba9d84;
        uVar3 = uVar4;
        func_0x00010c0720c0();
        if ((int)uVar3 == 0) {
          ppuVar18 = param_2;
          func_0x00010c2420e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfdc680();
          puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar18);
          uVar19 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar19;
          func_0x00010bf866a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar19);
          puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bfb5aa0(0x4024000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar16;
          func_0x00010b0af02c();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x000107d05d70();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x0001070b06d8();
          _objc_retainAutoreleasedReturnValue();
          param_5 = *(undefined ***)(param_1 + 0x30);
          puVar12 = puVar10;
          func_0x000107d05d70();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_90 = puVar12;
          puStack_88 = puVar11;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR_PTR_1126b02a8;
          _objc_alloc();
          ppuVar22 = (undefined **)PTR_PTR_1126c2908;
          _objc_alloc();
          func_0x00010bff2c00(0x3fb999999999999a,0x4008000000000000);
          ppuVar18 = &PTR____CFConstantStringClassReference_110eb8798;
          param_4 = ppuVar22;
          func_0x00010c01b460();
          lVar21 = *(long *)(*(long *)(param_1 + 0x40) + 8);
          uVar19 = *(undefined8 *)(lVar21 + 0x28);
          *(undefined **)(lVar21 + 0x28) = puVar13;
          _objc_release(uVar19);
          _objc_release(ppuVar22);
          _objc_release(puVar10);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar16);
          _objc_release(uVar9);
          _objc_release(puVar15);
          goto LAB_105ba9d84;
        }
        func_0x00010b0af2e4();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar7 = uVar3;
      func_0x000107d05a0c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar15 = PTR_PTR_1126b02a8;
      _objc_alloc();
      ppuVar18 = &PTR____CFConstantStringClassReference_110eb87b8;
      ppuVar22 = (undefined **)PTR_PTR_1126c2928;
      _objc_alloc();
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126c2dd0;
      _objc_alloc();
      func_0x00010c04f240(0x3fb999999999999a,0x4008000000000000);
      func_0x00010c0124a0();
      param_4 = ppuVar22;
      func_0x00010c01b460();
      lVar21 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar19 = *(undefined8 *)(lVar21 + 0x28);
      *(undefined **)(lVar21 + 0x28) = puVar15;
      _objc_release(uVar19);
      _objc_release(ppuVar22);
      _objc_release(puVar16);
      _objc_release(uVar9);
      uVar3 = uVar7;
    }
LAB_105baa070:
    _objc_release(uVar3);
    goto LAB_105ba9d84;
  }
LAB_105ba9b38:
  puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107d0573c(uVar9,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    uVar3 = uVar4;
    func_0x00010c0720c0();
    if ((int)uVar3 != 0) {
      func_0x00010b0af2b4();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105ba9bb0;
    }
    func_0x00010b0af11c();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = *(long *)(param_1 + 0x20);
    param_5 = *(undefined ***)(param_1 + 0x30);
    FUN_105baa5ec(lVar21,puVar15,uVar9,*(undefined8 *)(param_1 + 0x28),param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b0af29c();
    _objc_retainAutoreleasedReturnValue();
LAB_105ba9bb0:
    lVar21 = 0;
  }
  uVar7 = uVar3;
  func_0x000107d05a80(uVar3,puVar15,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010b0af14c();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar8;
  func_0x000107d05a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar7;
  uStack_78 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar16;
  func_0x00010c0d3c80();
  _objc_release(puVar16);
  lVar20 = lVar21;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar20;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    _objc_release(lVar20);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2827c0();
    _objc_release(lVar5);
    _objc_release(lVar20);
    if (lVar6 != 0) {
      func_0x00010befa120(puVar10);
    }
  }
  puVar16 = PTR_PTR_1126b02a8;
  _objc_alloc();
  ppuVar22 = (undefined **)PTR_PTR_1126c2908;
  _objc_alloc();
  func_0x00010bff2c00(0x3fb999999999999a,0x4008000000000000);
  ppuVar18 = &PTR____CFConstantStringClassReference_110eb8798;
  param_4 = ppuVar22;
  func_0x00010c01b460();
  lVar20 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar19 = *(undefined8 *)(lVar20 + 0x28);
  *(undefined **)(lVar20 + 0x28) = puVar16;
  _objc_release(uVar19);
  _objc_release(ppuVar22);
  _objc_release(puVar10);
  _objc_release(uVar14);
  _objc_release(uVar7);
  _objc_release(lVar21);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(puVar15);
LAB_105ba9d84:
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = 8;
  __Block_object_dispose(&uStack_c0);
  __Unwind_Resume();
  _objc_retain(lVar21);
  _objc_retain(ppuVar18);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = param_2;
  func_0x000107cf94b0();
  _objc_release(param_2);
  if ((int)ppuVar22 == 0) {
    func_0x00010b0aeffc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_2 = &PTR____CFConstantStringClassReference_110e20678;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e20678,0);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar22 = param_2;
  if (lVar21 == 0 || ppuVar18 == (undefined **)0x0) {
    func_0x000107d05a0c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107d05a80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppuVar18);
  _objc_release(lVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar22);
  return;
}



/* Entry: 105baa5ec; end: 105baa70f;  */

void FUN_105baa5ec(undefined **param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x000107cf94b0();
  _objc_release(param_1);
  if ((int)ppuVar1 == 0) {
    func_0x00010b0aeffc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = &PTR____CFConstantStringClassReference_110e20678;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e20678,0);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar1 = param_1;
  if (param_2 == 0 || param_3 == 0) {
    func_0x000107d05a0c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107d05a80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105baa710; end: 105baa72b;  */

void FUN_105baa710(void)

{
  return;
}



/* Entry: 105baa72c; end: 105bab277;  */

void FUN_105baa72c(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_150;
  undefined **ppuStack_148;
  code *pcStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = &UNK_10f32d92b;
  func_0x0001000ba800();
  ppuVar2 = param_1;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x00010bf03fe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_1;
  func_0x00010bfdcc40();
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar4 = ppuVar2;
    func_0x00010bef0e60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1a0 = ppuVar5;
    func_0x000107cff8d0();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
  else {
    ppuStack_1a0 = (undefined **)0x0;
  }
  ppuVar4 = ppuVar3;
  func_0x00010c233dc0();
  _objc_retain(ppuVar2);
  ppuVar5 = ppuVar2;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c079cc0();
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar2;
  if ((int)ppuVar6 == 0) {
    if ((int)ppuVar4 != 0) {
      func_0x00010bfa3d00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126c2920;
      _objc_alloc(PTR_PTR_1126c2920);
      func_0x00010c00ea40(0x3fe0000000000000,0,0x3fe8000000000000,0x4014000000000000,0,
                          0x4044000000000000,0,0);
      puVar8 = PTR_PTR_1126c2960;
      _objc_alloc(PTR_PTR_1126c2960);
      func_0x00010c0124a0();
      puStack_1a8 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
      goto LAB_105baa9a4;
    }
    puStack_1a8 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
  }
  else {
    func_0x00010bfa3d00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c2920;
    _objc_alloc(PTR_PTR_1126c2920);
    func_0x00010c00ea40(0x3fe0000000000000,0,0x3fe8000000000000,0x4014000000000000,0,0,0,0);
    puVar8 = PTR_PTR_1126c2960;
    _objc_alloc(PTR_PTR_1126c2960);
    func_0x00010c0124a0();
    puStack_1a8 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
LAB_105baa9a4:
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar2);
  puVar7 = puStack_1a8;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  _objc_retain(ppuVar2);
  ppuStack_128 = (undefined **)0x0;
  ppuStack_148 = &puStack_150;
  puStack_150 = (undefined *)0x0;
  pcStack_140 = (code *)0x3032000000;
  pcStack_138 = FUN_105ba9928;
  ppuStack_130 = (undefined **)0x105ba9938;
  if ((int)puVar8 != 0) {
    ppuStack_128 = (undefined **)PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
  }
  ppuVar4 = ppuVar2;
  func_0x00010bef0e60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c10ac80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105bab3b0;
  puStack_b8 = &UNK_1108da0d0;
  ppuStack_d8 = &puStack_150;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_a0 = (undefined **)0xc2000000;
  pcStack_98 = FUN_105bab45c;
  pcStack_90 = (code *)&UNK_1108d9f30;
  ppuStack_80 = ppuStack_1a0;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105bab4a8;
  puStack_e0 = &UNK_1108da130;
  ppuStack_b0 = ppuStack_d8;
  ppuStack_88 = ppuStack_d8;
  func_0x00010c0bcd20();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  puVar9 = ppuStack_148[5];
  _objc_retain();
  __Block_object_dispose(&puStack_150,8);
  _objc_release(ppuStack_128);
  _objc_release(ppuVar2);
  ppuVar4 = param_1;
  func_0x00010bf2d6c0();
  ppuVar5 = ppuVar3;
  func_0x00010c233dc0();
  ppuVar6 = ppuVar3;
  func_0x00010c234ba0();
  _objc_retain(ppuVar2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar10 = (undefined *)0x0;
  ppuStack_a0 = &puStack_a8;
  puStack_a8 = (undefined *)0x0;
  pcStack_98 = (code *)0x3032000000;
  pcStack_90 = FUN_105ba9928;
  ppuStack_88 = (undefined **)0x105ba9938;
  if (((ulong)ppuVar5 & 1) == 0) {
    puVar10 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
  }
  ppuVar5 = ppuVar2;
  ppuStack_80 = (undefined **)puVar10;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar5;
  func_0x000100bf4a30();
  _objc_release(ppuVar5);
  if ((int)ppuVar11 == 0) {
    ppuVar5 = ppuVar2;
    func_0x00010bef0c80(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar5;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar7;
    ppuStack_148 = (undefined **)0xc2000000;
    pcStack_140 = FUN_105ba9a90;
    pcStack_138 = (code *)&UNK_1108d9c50;
    _objc_retain(ppuVar2);
    ppuStack_130 = ppuVar2;
    _objc_retain(param_5);
    ppuStack_128 = (undefined **)param_5;
    _objc_retain(param_6);
    ppuStack_120 = (undefined **)param_6;
    _objc_retain(param_3);
    ppuStack_110 = &puStack_a8;
    uStack_108._0_2_ = CONCAT11((char)ppuVar4,(char)ppuVar6);
    uStack_118 = param_3;
    func_0x00010c0bfe20(ppuVar11);
    _objc_release(ppuVar11);
    _objc_release(ppuVar5);
    _objc_release(uStack_118);
    _objc_release(ppuStack_120);
    _objc_release(ppuStack_128);
    ppuVar4 = ppuStack_130;
  }
  else {
    ppuVar4 = ppuVar2;
    func_0x00010bef0e60(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar7;
    ppuStack_148 = (undefined **)0xc2000000;
    pcStack_140 = FUN_105ba9940;
    pcStack_138 = (code *)&UNK_1108da0d0;
    ppuStack_130 = &puStack_a8;
    puStack_d0 = puVar7;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105ba997c;
    puStack_b8 = &UNK_1108da100;
    puStack_f8 = puVar7;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = (code *)0x105ba9a14;
    puStack_e0 = &UNK_1108da130;
    ppuStack_d8 = ppuStack_130;
    ppuStack_b0 = ppuStack_130;
    func_0x00010c0bcd20();
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar4);
  puVar10 = ppuStack_a0[5];
  _objc_retain(puVar10);
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(ppuStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(ppuVar2);
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar3);
  _objc_retain(param_2);
  _objc_retain(param_4);
  ppuVar4 = ppuVar3;
  func_0x00010c23fa80();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = (undefined *)0x0;
  pcStack_98 = (code *)0x3032000000;
  pcStack_90 = FUN_105ba9928;
  ppuStack_88 = (undefined **)0x105ba9938;
  ppuStack_80 = (undefined **)0x0;
  ppuVar5 = ppuVar2;
  ppuStack_a0 = &puStack_a8;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c079cc0();
  if (((ulong)ppuVar6 & 1) == 0) {
    _objc_release(ppuVar5);
LAB_105baaef8:
    ppuVar5 = ppuVar3;
    func_0x00010c233dc0();
    if ((int)ppuVar5 != 0) {
      uVar12 = param_4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010bf1f3c0();
      _objc_release(uVar12);
      if ((int)uVar13 != 0) {
        puVar8 = PTR_PTR_1126b02a8;
        _objc_alloc();
        puVar15 = PTR_PTR_1126c2950;
        _objc_alloc(PTR_PTR_1126c2950);
        func_0x00010c0460a0();
        func_0x00010c01b460();
        goto LAB_105baaf6c;
      }
    }
    if ((int)puVar8 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
    }
    ppuVar5 = ppuStack_a0;
    _objc_retain(puVar15);
    puVar14 = ppuVar5[5];
    ppuVar5[5] = puVar15;
    _objc_release(puVar14);
    if (((ulong)puVar8 & 1) == 0) goto LAB_105baafe0;
  }
  else {
    uVar12 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf1f3c0();
    _objc_release(uVar12);
    _objc_release(ppuVar5);
    if ((int)uVar13 == 0) goto LAB_105baaef8;
    puVar8 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar15 = PTR_PTR_1126c2950;
    _objc_alloc(PTR_PTR_1126c2950);
    func_0x00010c0460a0();
    func_0x00010c01b460();
LAB_105baaf6c:
    puVar14 = ppuStack_a0[5];
    ppuStack_a0[5] = puVar8;
    _objc_release(puVar14);
  }
  _objc_release(puVar15);
LAB_105baafe0:
  ppuVar5 = ppuVar2;
  func_0x00010bef0c80(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = puVar7;
  ppuStack_148 = (undefined **)0xc2000000;
  pcStack_140 = FUN_105bab60c;
  pcStack_138 = (code *)&UNK_1108d9fc0;
  _objc_retain(ppuVar3);
  ppuStack_110 = &puStack_a8;
  ppuStack_130 = ppuVar3;
  _objc_retain(ppuVar2);
  ppuStack_128 = ppuVar2;
  _objc_retain(ppuVar4);
  uStack_108 = ppuStack_1a0;
  ppuStack_120 = ppuVar4;
  uStack_100 = param_7;
  _objc_retain(param_2);
  uStack_118 = param_2;
  func_0x00010c0bfe20(ppuVar6);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  puVar15 = ppuStack_a0[5];
  _objc_retain(puVar15);
  _objc_release(uStack_118);
  _objc_release(ppuStack_120);
  _objc_release(ppuStack_128);
  _objc_release(ppuStack_130);
  __Block_object_dispose(&puStack_a8,8);
  _objc_release(ppuStack_80);
  _objc_release(ppuVar4);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar7 = PTR_PTR_1126c2dd8;
  _objc_alloc(PTR_PTR_1126c2dd8);
  func_0x00010c034840();
  puVar8 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar7);
  _objc_release(puVar15);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puStack_1a8);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105bab278; end: 105bab393;  */

void FUN_105bab278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar2 = PTR_PTR_1126c2930;
  _objc_alloc(PTR_PTR_1126c2930);
  func_0x00010c00ea60(0x3fe3333340000000,0,0x3fe0000000000000,0x3ff0000000000000);
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110eb87d8,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bab394; end: 105bab3af;  */

void FUN_105bab394(void)

{
  return;
}



/* Entry: 105bab3b0; end: 105bab45b;  */

void FUN_105bab3b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf28700();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar4 = param_2;
    func_0x00010bf28220();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    _objc_release();
    if (lVar2 == 1) {
      FUN_105bab560();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      *(long *)(lVar4 + 0x28) = lVar1;
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105bab45c; end: 105bab4a7;  */

void FUN_105bab45c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x28) == 1) {
    lVar1 = param_1;
    FUN_105bab560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105bab4a8; end: 105bab523;  */

void FUN_105bab4a8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar2 != 0) {
    FUN_105bab560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105bab524; end: 105bab55f;  */

void FUN_105bab524(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_105bab560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bab560; end: 105bab60b;  */

void FUN_105bab560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar2 = PTR_PTR_1126c2920;
  _objc_alloc(PTR_PTR_1126c2920);
  func_0x00010c00ea40(0x3fd3333340000000,0x3fb99999a0000000,0x3fe8000000000000,0x3fb99999a0000000,0,
                      0,0x3fd3333340000000,0);
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110eb8758,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bab60c; end: 105babb93;  */

void FUN_105bab60c(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010c233f80();
  if (iVar1 == 0) {
    uVar10 = param_3;
    if (*(long *)(param_2 + 0x30) == 0) {
      if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
        uVar7 = *(ulong *)(param_2 + 0x28);
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0cb940();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0720c0();
        if ((uVar9 & 1) != 0) {
          func_0x00010c0757e0();
          _objc_release(uVar8);
          _objc_release(uVar7);
          goto joined_r0x000105bab8f8;
        }
        _objc_release(uVar8);
        _objc_release(uVar7);
      }
    }
    else {
      func_0x00010c0757e0();
joined_r0x000105bab8f8:
      if ((uVar10 & 1) == 0) {
        uVar10 = param_3;
        func_0x00010c281c20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar10 == 0) goto LAB_105bab6ec;
        uVar10 = param_3;
        func_0x00010c2420e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfdc680();
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        puVar11 = PTR_PTR_1126b02a8;
        _objc_alloc();
        puVar4 = PTR_PTR_1126c2940;
        _objc_alloc(PTR_PTR_1126c2940);
        uVar5 = *(undefined8 *)(param_2 + 0x28);
        func_0x00010bef0c80(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_3;
        func_0x00010c281c20(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x30));
        uVar6 = *(undefined8 *)(param_2 + 0x30);
        func_0x00010bf65e40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f6280(*(undefined8 *)(param_2 + 0x30));
        func_0x00010c005480(param_1,puVar4);
        func_0x00010c01b460();
        lVar16 = *(long *)(*(long *)(param_2 + 0x40) + 8);
        uVar14 = *(undefined8 *)(lVar16 + 0x28);
        *(undefined **)(lVar16 + 0x28) = puVar11;
        _objc_release(uVar14);
        _objc_release(puVar4);
        _objc_release(uVar6);
        _objc_release(uVar10);
        _objc_release(uVar13);
        _objc_release(uVar5);
        goto LAB_105bab6e8;
      }
    }
    iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010c234ba0();
    if ((iVar1 == 0) || (*(long *)(param_2 + 0x48) != 0)) {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
      func_0x00010c234b80();
      if ((iVar1 != 0) && (*(long *)(param_2 + 0x48) == 0)) {
        puStack_c0 = &uStack_c8;
        uStack_c8 = 0;
        uStack_b8 = 0x2020000000;
        uStack_b0 = 0;
        uVar13 = *(undefined8 *)(param_2 + 0x28);
        func_0x00010bf96da0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_2 + 0x28);
        _objc_retain(uVar5);
        func_0x00010c0c0020(uVar13);
        _objc_release(uVar13);
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((*(byte *)(puStack_c0 + 3) & 1) == 0) {
          uVar13 = *(undefined8 *)(param_2 + 0x38);
          func_0x00010c269d40(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c071760();
          _objc_release(uVar13);
          if ((int)puVar2 != 0) {
            puVar2 = PTR_PTR_1126b02a8;
            _objc_alloc();
            puVar11 = PTR_PTR_1126c2948;
            _objc_alloc(PTR_PTR_1126c2948);
            uVar6 = *(undefined8 *)(param_2 + 0x38);
            func_0x00010c269d40(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = *(undefined8 *)(param_2 + 0x28);
            func_0x00010bfa3d00(uVar14);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = *(undefined8 *)(param_2 + 0x28);
            func_0x00010bef0c80(uVar12);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            func_0x00010bf50280();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c00f560(puVar11);
            func_0x00010c01b460();
            lVar16 = *(long *)(*(long *)(param_2 + 0x40) + 8);
            uVar15 = *(undefined8 *)(lVar16 + 0x28);
            *(undefined **)(lVar16 + 0x28) = puVar2;
            _objc_release(uVar15);
            _objc_release(puVar11);
            _objc_release(uVar13);
            _objc_release(uVar12);
            _objc_release(uVar14);
            _objc_release(uVar6);
          }
        }
        _objc_release(uVar5);
        __Block_object_dispose(&uStack_c8,8);
      }
      goto LAB_105bab6ec;
    }
    uVar13 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf96da0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105babb94;
    puStack_90 = &UNK_110855170;
    uStack_80 = *(undefined8 *)(param_2 + 0x40);
    puVar2 = *(undefined **)(param_2 + 0x28);
    _objc_retain(puVar2);
    puStack_88 = puVar2;
    func_0x00010c0c0020(uVar13);
    _objc_release(uVar13);
    puVar2 = puStack_88;
  }
  else {
    puVar11 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126c2938;
    _objc_alloc(PTR_PTR_1126c2938);
    puVar2 = *(undefined **)(param_2 + 0x28);
    func_0x00010bef0c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004b80(puVar4);
    func_0x00010c01b460();
    lVar16 = *(long *)(*(long *)(param_2 + 0x40) + 8);
    uVar13 = *(undefined8 *)(lVar16 + 0x28);
    *(undefined **)(lVar16 + 0x28) = puVar11;
    _objc_release(uVar13);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
LAB_105bab6e8:
  _objc_release(puVar2);
LAB_105bab6ec:
  _objc_release(param_3);
  return;
}



/* Entry: 105babb94; end: 105babe73;  */

void FUN_105babb94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010c105520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071760();
  _objc_release(uVar1);
  if ((int)puVar2 != 0) {
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar3 = PTR_PTR_1126c2948;
    _objc_alloc(PTR_PTR_1126c2948);
    uVar1 = param_2;
    func_0x00010c105520(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3d00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bef0c80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f560(puVar3);
    func_0x00010c01b460();
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar2;
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105babe74; end: 105babe8f;  */

void FUN_105babe74(void)

{
  return;
}



/* Entry: 105babe90; end: 105bac09b;  */

undefined *
FUN_105babe90(double param_1,long param_2,long param_3,undefined **param_4,undefined8 param_5,
             long param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c08fa60();
  puVar8 = (undefined *)0x0;
  if ((param_3 != 0) && (lVar1 != 0)) {
    _objc_retain(param_3);
    puVar10 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_retain(param_2);
    _objc_alloc();
    ppuVar9 = *(undefined ***)PTR__NSFontAttributeName_1103457f0;
    param_6 = 1;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840();
    _objc_release(puVar8);
    lVar1 = param_2;
    func_0x00010c11f420();
    param_4 = &PTR____CFConstantStringClassReference_110dc4f78;
    lVar2 = param_2;
    lVar5 = lVar4;
    func_0x00010c11f420();
    lVar6 = lVar5;
    _objc_release(param_2);
    if (lVar1 != 0x7fffffffffffffff) {
      func_0x00010c102de0(param_3);
      param_1 = param_1 + 1.0;
      lVar3 = param_3;
      func_0x00010bfb41c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      param_4 = ppuVar9;
      func_0x00010bef6f20(puVar10);
      _objc_release(lVar3);
      param_6 = lVar1;
      param_7 = lVar4;
    }
    lVar4 = lVar6;
    if (lVar2 != 0x7fffffffffffffff) {
      func_0x00010c102de0(param_3);
      lVar1 = param_3;
      func_0x00010bfb41c0(param_1 + 1.0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6f20(puVar10);
      _objc_release(lVar1);
      param_4 = ppuVar9;
      param_6 = lVar2;
      param_7 = lVar5;
    }
    puVar8 = puVar10;
    func_0x00010bf51e00();
    _objc_release(puVar10);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(lVar4);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar8 = &UNK_10f32d9fa;
  func_0x0001000ba800();
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_105bac324;
  uStack_108 = 0x105bac334;
  uStack_100 = 0;
  lVar1 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar4);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0c0020(lVar1);
  _objc_release(lVar1);
  puVar10 = (undefined *)puStack_120[5];
  _objc_retain(puVar10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(lVar4);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  func_0x0001000e2a84(puVar8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(lVar4);
  _objc_release(param_2);
  return puVar10;
}



/* Entry: 105bac09c; end: 105bac323;  */

undefined8
FUN_105bac09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = &UNK_10f32d9fa;
  func_0x0001000ba800();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105bac324;
  uStack_88 = 0x105bac334;
  uStack_80 = 0;
  uVar2 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0c0020(uVar2);
  _objc_release(uVar2);
  uVar2 = puStack_a0[5];
  _objc_retain(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105bac324; end: 105bac33b;  */

void FUN_105bac324(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105bac33c; end: 105bac5ff;  */

void FUN_105bac33c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar14 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(ulong *)(param_1 + 0x38);
  _objc_retain(param_2);
  _objc_retain(lVar14);
  _objc_retain(uVar1);
  _objc_retain(uVar13);
  _objc_retain(uVar2);
  puVar3 = &UNK_10f32d9a0;
  func_0x0001000ba800();
  uVar4 = uVar13;
  func_0x000107d05204(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  if (lVar14 == 0) {
    if (uVar2 != 0) {
      uVar5 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      if ((uVar6 & 1) != 0) goto LAB_105bac420;
    }
    func_0x00010901d924(param_2);
  }
  else {
    func_0x00010c25be80(lVar14);
  }
LAB_105bac420:
  uVar7 = uVar1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bfb9b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010901cdb0(param_2,puVar9);
  uVar11 = uVar8;
  func_0x00010901de3c(uVar8,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100bf0d4c(param_2,0);
  uVar12 = uVar7;
  func_0x00010bf86560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  uVar7 = uVar12;
  FUN_105babe90(uVar12,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c2de0;
  _objc_alloc();
  func_0x00010c23d0a0(uVar7);
  func_0x00010c0161c0();
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(uVar4);
  func_0x0001000e2a84(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar13);
  _objc_release(uVar1);
  _objc_release(lVar14);
  _objc_release(param_2);
  lVar14 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar13 = *(undefined8 *)(lVar14 + 0x28);
  *(undefined **)(lVar14 + 0x28) = puVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 105bac600; end: 105bacae7;  */

void FUN_105bac600(undefined8 param_1,double param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(undefined8 *)(param_3 + 0x20);
  puVar2 = *(undefined **)(param_3 + 0x28);
  lVar16 = *(long *)(param_3 + 0x48);
  lVar15 = *(long *)(param_3 + 0x30);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  _objc_retain(param_4);
  _objc_retain(uVar13);
  _objc_retain(puVar2);
  _objc_retain(lVar15);
  _objc_retain(uVar3);
  puVar4 = &UNK_10f32d9d0;
  func_0x0001000ba800();
  if ((lVar16 == 7) && (lVar15 != 0)) {
    lVar16 = lVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar16;
    func_0x00010bf1f3c0();
    uVar1 = (uint)lVar5 ^ 1;
    if (param_4 == 0) {
      uVar1 = 1;
    }
    if ((uVar1 & 1) == 0) {
      lVar5 = param_4;
      func_0x00010c2925c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar6);
      _objc_release(lVar16);
      if (lVar6 != 0) {
        puVar8 = puVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = &PTR____CFConstantStringClassReference_110f5f0f8;
        _objc_retain(uVar13);
        _objc_retain(puVar8);
        _objc_retain(&PTR____CFConstantStringClassReference_110f5f0f8);
        _objc_retain(uVar3);
        if ((puVar8 == (undefined *)0x0) || (func_0x00010c08fa60(), ppuVar17 == (undefined **)0x0))
        {
          puVar18 = (undefined *)0x0;
        }
        else {
          uVar9 = uVar3;
          func_0x000107d05204(0x402e000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR_PTR_1126ba270;
          _objc_alloc();
          dVar19 = 0.0;
          func_0x00010bffd140(0);
          if (puVar11 == (undefined *)0x0) {
            puVar18 = (undefined *)0x0;
          }
          else {
            uVar10 = uVar13;
            func_0x00010bfa3d00(uVar13);
            _objc_retainAutoreleasedReturnValue();
            puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar8;
            func_0x00010bfb97c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar18);
            _objc_release(uVar10);
            if (puVar12 == (undefined *)0x0) {
              puVar18 = (undefined *)0x0;
            }
            else {
              puVar7 = puVar12;
              FUN_105babe90(puVar12,uVar9);
              _objc_retainAutoreleasedReturnValue();
              if (puVar7 == (undefined *)0x0) {
                dVar20 = *(double *)PTR__CGSizeZero_110347620;
                dVar21 = *(double *)(PTR__CGSizeZero_110347620 + 8);
                dVar19 = dVar20;
                param_2 = dVar21;
              }
              else {
                func_0x00010c23d0a0(puVar7);
                dVar20 = *(double *)PTR__CGSizeZero_110347620;
                dVar21 = *(double *)(PTR__CGSizeZero_110347620 + 8);
              }
              puVar18 = PTR_PTR_1126c2de0;
              _objc_alloc();
              func_0x00010c0161c0((long)dVar19,(long)param_2,dVar20,dVar21);
              _objc_release(puVar7);
            }
            _objc_release(puVar12);
          }
          _objc_release(puVar11);
          _objc_release(uVar9);
        }
        _objc_release(uVar3);
        _objc_release(&PTR____CFConstantStringClassReference_110f5f0f8);
        _objc_release(puVar8);
        _objc_release(uVar13);
        goto LAB_105bac97c;
      }
    }
    else {
      _objc_release(lVar16);
    }
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar16 = param_4;
  func_0x000107cfa948();
  _objc_retainAutoreleasedReturnValue();
  if (lVar16 != 0) {
    func_0x00010befa120(puVar8);
  }
  uVar9 = uVar3;
  func_0x000107d05204(0x402e000000000000,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar13;
  func_0x00010bfa3d00(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar18;
  func_0x00010bfb97c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(puVar18);
  if (puVar11 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar12 = puVar11;
    FUN_105babe90(puVar11,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c2de0;
    _objc_alloc();
    func_0x00010c23d0a0(puVar12);
    func_0x00010c0161c0();
    _objc_release(puVar12);
  }
  _objc_release(puVar11);
  _objc_release(uVar9);
  _objc_release(lVar16);
LAB_105bac97c:
  _objc_release(puVar8);
  func_0x0001000e2a84(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar15);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(param_4);
  lVar15 = *(long *)(*(long *)(param_3 + 0x40) + 8);
  uVar13 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  ___stack_chk_fail(uVar13);
  func_0x0001000e2a84(puVar4);
  __Unwind_Resume(uVar13);
  return;
}



/* Entry: 105bacae8; end: 105bacaeb;  */

void FUN_105bacae8(void)

{
  return;
}



/* Entry: 105bacaec; end: 105bad2df;  */

undefined *
FUN_105bacaec(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_2a8;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  char *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = &UNK_10f32da26;
  func_0x0001000ba800();
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cb940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c0720c0();
  uStack_2a8 = param_4;
  if ((((uVar2 & 1) != 0) || (uVar2 = uVar3, func_0x000107cff210(), (uVar2 & 1) != 0)) ||
     (uVar2 = uVar3, func_0x00010c0720c0(), (int)uVar2 != 0)) {
    func_0x000107d0573c(param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105bacc04;
  }
  func_0x000107d05810(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x000100bf4a30();
  _objc_release(uVar2);
  uVar2 = param_4;
  if ((int)uVar5 == 0) {
    uVar5 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000107cfcd04();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((int)uVar7 == 0) goto LAB_105bacc04;
    uVar5 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0();
    if ((uVar7 & 1) == 0) {
      uVar7 = param_1;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0cb940();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c0720c0();
      if ((uVar9 & 1) != 0) {
        _objc_release(uVar8);
        _objc_release(uVar7);
        goto LAB_105bad18c;
      }
      uVar9 = param_1;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c0cb940();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c0720c0();
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((uVar11 & 1) == 0) goto LAB_105bacc04;
    }
    else {
LAB_105bad18c:
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    func_0x000107d0573c(param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = param_1;
    func_0x00010bef0e60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000107cff704();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((int)uVar7 == 0) goto LAB_105bacc04;
    uVar5 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000107cfe034();
    if ((uVar7 & 1) == 0) {
      func_0x000107d05810(param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107d0573c(param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uStack_2a8);
    _objc_release(uVar6);
    uStack_2a8 = uVar5;
  }
  _objc_release(uStack_2a8);
  uStack_2a8 = uVar2;
LAB_105bacc04:
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  uVar2 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9caa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c07c7e0();
  if ((int)uVar2 != 0) {
    func_0x00010c25be80();
  }
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105bac324;
  uStack_88 = 0x105bac334;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3010000000;
  pcStack_c0 = "";
  uStack_110 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uStack_118 = *(undefined8 *)PTR__CGSizeZero_110347620;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_105bac324;
  uStack_e8 = 0x105bac334;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3010000000;
  pcStack_120 = "";
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_105bac324;
  uStack_148 = 0x105bac334;
  uStack_140 = 0;
  puStack_190 = &uStack_198;
  uStack_198 = 0;
  uStack_188 = 0x3032000000;
  pcStack_180 = FUN_105bac324;
  uStack_178 = 0x105bac334;
  uStack_170 = 0;
  uVar2 = param_1;
  uStack_b8 = uStack_118;
  uStack_b0 = uStack_110;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(uVar3);
  _objc_retain(uStack_2a8);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(uVar3);
  _objc_retain(uStack_2a8);
  _objc_retain(param_2);
  func_0x00010c0c0020(uVar2);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c2de0;
  _objc_alloc(PTR_PTR_1126c2de0);
  func_0x00010c0161c0(puStack_d0[4],puStack_d0[5],puStack_130[4],puStack_130[5]);
  _objc_release(param_2);
  _objc_release(uStack_2a8);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(uStack_2a8);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_198,8);
  _objc_release(uStack_170);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(uVar3);
  _objc_release(uStack_2a8);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 105bad2e0; end: 105bad78f;  */

void FUN_105bad2e0(double param_1,double param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_4);
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_3 + 0x28);
    if (uVar1 != 0) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf1f3c0();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_105bad358;
    }
    func_0x00010901d924(param_4);
  }
  else {
    func_0x00010c25be80();
  }
LAB_105bad358:
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010bfb9b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010bf96da0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x000107cf94b0();
  uVar5 = uVar9;
  func_0x00010901de3c(uVar9,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100bf0d4c(param_4,0);
  uVar6 = uVar3;
  func_0x00010bf86560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  if (*(char *)(param_3 + 0x80) == '\x01') {
    uVar7 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c25be80(uVar7);
    uVar9 = uVar6;
    func_0x000105bad5f8(uVar6,uVar7,*(undefined8 *)(param_3 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_3 + 0x50) + 8);
    uVar7 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = uVar9;
    _objc_release(uVar7);
    puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_3 + 0x58) + 8);
    uVar9 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined **)(lVar11 + 0x28) = puVar8;
    _objc_release(uVar9);
    lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x58) + 8) + 0x28);
    if (*(long *)(*(long *)(*(long *)(param_3 + 0x50) + 8) + 0x28) == 0) {
      param_1 = *(double *)PTR__CGSizeZero_110347620;
      param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    else {
      func_0x00010c23d0a0();
    }
    dVar13 = (double)(long)param_2;
    lVar10 = *(long *)(*(long *)(param_3 + 0x60) + 8);
    dVar12 = (double)(long)param_1 + dVar13;
    if (dVar13 <= 0.0 || lVar11 == 0) {
      dVar12 = (double)(long)param_1;
    }
    *(double *)(lVar10 + 0x20) = dVar12;
    *(double *)(lVar10 + 0x28) = dVar13;
  }
  else {
    uVar9 = uVar6;
    FUN_105babe90(uVar6,*(undefined8 *)(param_3 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_3 + 0x50) + 8);
    uVar7 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = uVar9;
    _objc_release(uVar7);
    uVar9 = uVar6;
    FUN_105bad790(uVar6,*(undefined8 *)(param_3 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_3 + 0x68) + 8);
    uVar7 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = uVar9;
    _objc_release(uVar7);
    lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x58) + 8) + 0x28);
    if (*(long *)(*(long *)(*(long *)(param_3 + 0x50) + 8) + 0x28) == 0) {
      param_1 = *(double *)PTR__CGSizeZero_110347620;
      param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    else {
      func_0x00010c23d0a0();
    }
    dVar13 = (double)(long)param_2;
    dVar12 = (double)(long)param_1 + dVar13;
    if (dVar13 <= 0.0 || lVar11 == 0) {
      dVar12 = (double)(long)param_1;
    }
    lVar11 = *(long *)(*(long *)(param_3 + 0x60) + 8);
    *(double *)(lVar11 + 0x20) = dVar12;
    *(double *)(lVar11 + 0x28) = dVar13;
    func_0x00010c23d0a0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x68) + 8) + 0x28));
    lVar11 = *(long *)(*(long *)(param_3 + 0x70) + 8);
    *(double *)(lVar11 + 0x20) = dVar12;
    *(double *)(lVar11 + 0x28) = dVar13;
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    lVar11 = *(long *)(*(long *)(param_3 + 0x78) + 8);
    _objc_retain(uVar7);
    uVar9 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = uVar7;
    _objc_release(uVar9);
  }
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105bad790; end: 105bad833;  */

void FUN_105bad790(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010c11f420(param_1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c25cfc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_105babe90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105bad834; end: 105bad96f;  */

void FUN_105bad834(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  return;
}



/* Entry: 105bad970; end: 105badb67;  */

void FUN_105bad970(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb97a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(char *)(param_3 + 0x78) == '\x01') {
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c25be80(uVar2);
    uVar1 = uVar3;
    func_0x000105bad5f8(uVar3,uVar2,*(undefined8 *)(param_3 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_3 + 0x48) + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar1;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_3 + 0x50) + 8);
    uVar1 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
    _objc_release(uVar1);
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x50) + 8) + 0x28);
    if (*(long *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28) == 0) {
      param_1 = *(double *)PTR__CGSizeZero_110347620;
      param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    else {
      func_0x00010c23d0a0();
    }
    dVar8 = (double)(long)param_2;
    lVar5 = *(long *)(*(long *)(param_3 + 0x58) + 8);
    dVar7 = (double)(long)param_1 + dVar8;
    if (dVar8 <= 0.0 || lVar6 == 0) {
      dVar7 = (double)(long)param_1;
    }
    *(double *)(lVar5 + 0x20) = dVar7;
    *(double *)(lVar5 + 0x28) = dVar8;
  }
  else {
    uVar1 = uVar3;
    FUN_105babe90(uVar3,*(undefined8 *)(param_3 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_3 + 0x48) + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar1;
    _objc_release(uVar2);
    uVar1 = uVar3;
    FUN_105bad790(uVar3,*(undefined8 *)(param_3 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_3 + 0x60) + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar1;
    _objc_release(uVar2);
    func_0x00010c23d0a0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28));
    lVar6 = *(long *)(*(long *)(param_3 + 0x58) + 8);
    *(double *)(lVar6 + 0x20) = param_1;
    *(double *)(lVar6 + 0x28) = param_2;
    func_0x00010c23d0a0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x60) + 8) + 0x28));
    lVar6 = *(long *)(*(long *)(param_3 + 0x68) + 8);
    *(double *)(lVar6 + 0x20) = param_1;
    *(double *)(lVar6 + 0x28) = param_2;
    uVar2 = *(undefined8 *)(param_3 + 0x40);
    lVar6 = *(long *)(*(long *)(param_3 + 0x70) + 8);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105badb68; end: 105badc93;  */

void FUN_105badb68(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  return;
}



/* Entry: 105badc94; end: 105badc97;  */

void FUN_105badc94(void)

{
  return;
}



/* Entry: 105badc98; end: 105bade13;  */

void FUN_105badc98(long param_1,undefined *param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_2;
  func_0x00010bfb9a40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    lVar2 = param_1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      uVar3 = param_4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        uVar3 = param_3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfd3c20();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          puVar1 = PTR_PTR_1126c2de0;
          _objc_alloc(PTR_PTR_1126c2de0);
          uVar5 = param_5;
          func_0x00010c269d40(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0161c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                              *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),
                              *(undefined8 *)PTR__CGSizeZero_110347620,
                              *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1);
          _objc_release(uVar5);
          goto LAB_105badd0c;
        }
      }
    }
  }
  else {
    _objc_release();
  }
  _objc_retain(param_2);
  puVar1 = param_2;
LAB_105badd0c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105bade14; end: 105badf93;  */

void FUN_105bade14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105bac324;
  uStack_60 = 0x105bac334;
  uStack_58 = 0;
  uVar1 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar1);
  uVar1 = puStack_78[5];
  FUN_105badc98(uVar1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105badf94; end: 105badfd3;  */

void FUN_105badf94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105badfd4; end: 105badfdb;  */

void FUN_105badfd4(void)

{
  return;
}



/* Entry: 105badfdc; end: 105bae103;  */

void FUN_105badfdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c25c060();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf9c720(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf5e5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(lVar1);
    _objc_release(uVar2);
    _objc_release(lVar1);
    func_0x00010c073f40();
    puVar3 = PTR_PTR_1126c2de8;
    _objc_alloc(PTR_PTR_1126c2de8);
    func_0x00010c25c060(param_1);
    func_0x00010c073f40(param_1);
    func_0x00010c04e620(puVar3);
  }
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bae104; end: 105bae1a7;  */

ulong FUN_105bae104(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07fe80();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bef0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf9caa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07c7e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 105bae1a8; end: 105bae397;  */

void FUN_105bae1a8(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = &UNK_10f32da73;
  func_0x0001000ba800(&UNK_10f32da73);
  uVar2 = param_1;
  FUN_105bae104();
  if ((uVar2 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar3 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126c2a08;
    uVar2 = param_1;
    func_0x00010bef0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf9caa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25c2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x000105bcd210();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c2a10;
    _objc_alloc(PTR_PTR_1126c2a10);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0512a0(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(puVar5);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105bae398; end: 105bae4e3;  */

void FUN_105bae398(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = &UNK_10f32daa1;
  func_0x0001000ba800(&UNK_10f32daa1);
  uVar2 = param_1;
  func_0x000100bf39e4();
  if ((uVar2 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bef0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107cf6e3c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0f3e20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    uVar5 = uVar4;
    func_0x00010bf5b640(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105bae4e4; end: 105bae7cb;  */

void FUN_105bae4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = PTR_PTR_1126c2df0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010bfa3920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb9da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = param_3;
  func_0x00010bfba020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075e40(param_3);
  uVar4 = uVar1;
  func_0x00010beef160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c2a8aa0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c29a8;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f6e0();
  uVar9 = param_3;
  func_0x00010bfba020(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf50940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdcc40(param_3);
  uVar12 = param_3;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar13 = uVar12;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf50580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c232440();
  _objc_release(param_2);
  func_0x00010bffd200(puVar5);
  _objc_release(param_4);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105bae7cc; end: 105bae8bb;  */

void FUN_105bae7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f32dab8;
  func_0x0001000ba800(&UNK_10f32dab8);
  uVar2 = param_1;
  func_0x000100bf39e4();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x000107cf8fc0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105bae8bc; end: 105bae9a3;  */

void FUN_105bae8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c22d900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126c2df8;
  if (lVar2 == 0) {
    func_0x00010bf8d620(PTR_PTR_1126c2df8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1312a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105bae9a4; end: 105baeacf;  */

void FUN_105bae9a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105baead0;
  uStack_40 = 0x105baeae0;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105baead0; end: 105baeae7;  */

void FUN_105baead0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


