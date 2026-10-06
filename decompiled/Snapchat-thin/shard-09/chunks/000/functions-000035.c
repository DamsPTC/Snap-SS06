/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10686c7a8; end: 10686c8cb; -[SCMapCarouselItemView existingBottomAccessoryViewOfClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10686c7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + _DAT_11275219c);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      uVar6 = 0;
LAB_10686c888:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
        return uVar6;
      }
      ___stack_chk_fail();
      return *(ulong *)(lVar5 + _DAT_112752190);
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar6 = *(ulong *)(lVar7 * 8);
      uVar3 = uVar6;
      _objc_opt_isKindOfClass(uVar6,param_3);
      if ((uVar3 & 1) != 0) {
        _objc_retain(uVar6);
        goto LAB_10686c888;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10686c8cc; end: 10686c8db; -[SCMapCarouselItemView titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c8cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112752190);
}



/* Entry: 10686c8dc; end: 10686c8eb; -[SCMapCarouselItemView subtitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c8dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112752194);
}



/* Entry: 10686c8ec; end: 10686c8fb; -[SCMapCarouselItemView subtitleLeadingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c8ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521ac);
}



/* Entry: 10686c8fc; end: 10686c90b; -[SCMapCarouselItemView titleTrailingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c8fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521a8);
}



/* Entry: 10686c90c; end: 10686c91b; -[SCMapCarouselItemView thumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c90c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521a4);
}



/* Entry: 10686c91c; end: 10686c92b; -[SCMapCarouselItemView trailingAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c91c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521a0);
}



/* Entry: 10686c92c; end: 10686c93b; -[SCMapCarouselItemView bottomAccessoryViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c92c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275219c);
}



/* Entry: 10686c93c; end: 10686c94b; -[SCMapCarouselItemView stretchableBottomAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c93c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521b4);
}



/* Entry: 10686c94c; end: 10686c95b; -[SCMapCarouselItemView mainContentDefaultHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c94c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521b8);
}



/* Entry: 10686c95c; end: 10686c96b; -[SCMapCarouselItemView thumbnailViewDimension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c95c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521c0);
}



/* Entry: 10686c96c; end: 10686c97b; -[SCMapCarouselItemView setThumbnailViewDimension:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686c96c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127521c0) = param_1;
  return;
}



/* Entry: 10686c97c; end: 10686c98b; -[SCMapCarouselItemView layoutDensity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c97c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521b0);
}



/* Entry: 10686c98c; end: 10686c99b; -[SCMapCarouselItemView onTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c98c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521c4);
}



/* Entry: 10686c99c; end: 10686c9a7; -[SCMapCarouselItemView setOnTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686c99c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10686c9a8; end: 10686c9b7; -[SCMapCarouselItemView onLongPress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c9a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521c8);
}



/* Entry: 10686c9b8; end: 10686c9c3; -[SCMapCarouselItemView setOnLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686c9b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10686c9c4; end: 10686c9d3; -[SCMapCarouselItemView onTapBottomAccessory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686c9c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521cc);
}



/* Entry: 10686c9d4; end: 10686c9df; -[SCMapCarouselItemView setOnTapBottomAccessory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686c9d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10686c9e0; end: 10686caef; -[SCMapCarouselItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686c9e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127521cc,0);
  _objc_storeStrong(param_1 + _DAT_1127521c8,0);
  _objc_storeStrong(param_1 + _DAT_1127521c4,0);
  _objc_storeStrong(param_1 + _DAT_1127521b4,0);
  _objc_storeStrong(param_1 + _DAT_11275219c,0);
  _objc_storeStrong(param_1 + _DAT_1127521a0,0);
  _objc_storeStrong(param_1 + _DAT_1127521a4,0);
  _objc_storeStrong(param_1 + _DAT_1127521a8,0);
  _objc_storeStrong(param_1 + _DAT_1127521ac,0);
  _objc_storeStrong(param_1 + _DAT_112752194,0);
  _objc_storeStrong(param_1 + _DAT_112752190,0);
  _objc_storeStrong(param_1 + _DAT_1127521bc,0);
  _objc_storeStrong(param_1 + _DAT_112752198,0);
  _objc_storeStrong(param_1 + _DAT_1127521d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275218c,0);
  return;
}



/* Entry: 10686caf0; end: 10686cba7; -[SCMapCarouselItemCell content] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686caf0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112752188;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ce830;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    func_0x00010c1cbe20(param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10686cba8; end: 10686cc17; -[SCMapCarouselItemCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686cba8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f38a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112752188));
  _objc_release(lVar1);
  return;
}



/* Entry: 10686cc18; end: 10686cc67; -[SCMapCarouselItemCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686cc18(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f38a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c139960(*(undefined8 *)(param_1 + _DAT_112752188));
  return;
}



/* Entry: 10686cc68; end: 10686cc7b; -[SCMapCarouselItemCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686cc68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112752188,0);
  return;
}



/* Entry: 10686cc7c; end: 10686cd9b; -[SCMapCarouselContainerView initWithFrame:allowsDismissal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10686cc7c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f38b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127521d4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127521d4) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ce838;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar4 = (long)_DAT_1127521d8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1d7e40(0x402e000000000000,0x4024000000000000,0x4028000000000000,
                        *(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    if (param_3 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      func_0x00010c050900();
      func_0x00010c18b5e0();
      func_0x00010bef9040(puVar1);
      _objc_release(puVar3);
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10686cd9c; end: 10686cdf3; -[SCMapCarouselContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686cd9c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f38b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_1127521d8));
  return;
}



/* Entry: 10686cdf4; end: 10686ce03; -[SCMapCarouselContainerView padding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686cdf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f0bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_padding_112619d00);
  return;
}



/* Entry: 10686ce04; end: 10686ce13; -[SCMapCarouselContainerView setPadding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ce04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d7e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_setPadding__1126539b8);
  return;
}



/* Entry: 10686ce14; end: 10686ce23; -[SCMapCarouselContainerView scrollEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ce14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c151ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_scrollEnabled_112632218);
  return;
}



/* Entry: 10686ce24; end: 10686ce33; -[SCMapCarouselContainerView setScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ce24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_setScrollEnabled__11265b8f0);
  return;
}



/* Entry: 10686ce34; end: 10686ce43; -[SCMapCarouselContainerView wraparoundScrollEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ce34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfed7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_infiniteScrollEnabled_1125d8fb8);
  return;
}



/* Entry: 10686ce44; end: 10686ce53; -[SCMapCarouselContainerView setWraparoundScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ce44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ac310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_setInfiniteScrollEnabled__112648ae8);
  return;
}



/* Entry: 10686ce54; end: 10686ce63; -[SCMapCarouselContainerView onlyScrollOneItemPerSwipe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ce54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_onlyScrollOneItemPerSwipe_112617d08);
  return;
}



/* Entry: 10686ce64; end: 10686ce73; -[SCMapCarouselContainerView setOnlyScrollOneItemPerSwipe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ce64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_setOnlyScrollOneItemPerSwipe__112652d10
            );
  return;
}



/* Entry: 10686ce74; end: 10686ce83; -[SCMapCarouselContainerView setShowsDismissButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ce74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2025b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_setShowsDismissButton__11265e390);
  return;
}



/* Entry: 10686ce84; end: 10686ce93; -[SCMapCarouselContainerView showsDismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ce84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_showsDismissButton_11266c6d8);
  return;
}



/* Entry: 10686ce94; end: 10686cea3; -[SCMapCarouselContainerView viewForPageAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ce94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_viewForIndex__112684d90);
  return;
}



/* Entry: 10686cea4; end: 10686ceab; -[SCMapCarouselContainerView setPages:] */

void FUN_10686cea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d8af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setPages_visiblePageIndex__112653ce0,param_3,0);
  return;
}



/* Entry: 10686ceac; end: 10686d023; -[SCMapCarouselContainerView setPages:visiblePageIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ceac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10686d024;
  uStack_50 = 0x10686d034;
  lVar1 = lVar3;
  func_0x00010c29cec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127521d4;
  lStack_48 = lVar1;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar2);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_1127521d8));
  func_0x00010c152640(param_1);
  _dispatch_time(0,100000000);
  func_0x00010058c530();
  __Block_object_dispose(&uStack_70,8);
  _objc_release(lStack_48);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10686d024; end: 10686d04f;  */

void FUN_10686d024(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10686d050; end: 10686d05f; -[SCMapCarouselContainerView numberOfViewsInMapCarouselView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686d050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d4),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10686d060; end: 10686d0ff; -[SCMapCarouselContainerView mapCarouselView:viewForIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686d060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_1127521d4);
  func_0x00010c0dfd40(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29cec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010bf20c00(param_3);
    func_0x00010c19f0e0(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10686d100; end: 10686d19b; -[SCMapCarouselContainerView mapCarouselView:didShowViewAtIndex:actionType:] */

void FUN_10686d100(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b89c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10686d19c; end: 10686d21b; -[SCMapCarouselContainerView mapCarouselViewShouldBeDismissed:] */

void FUN_10686d19c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b89e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10686d21c; end: 10686d22b; -[SCMapCarouselContainerView visiblePageIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686d21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_currentViewIndex_1125b5c98);
  return;
}



/* Entry: 10686d22c; end: 10686d233; -[SCMapCarouselContainerView setVisiblePageIndex:] */

void FUN_10686d22c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_scrollToPageAtIndex_animated__1126323b0,param_3,0);
  return;
}



/* Entry: 10686d234; end: 10686d243; -[SCMapCarouselContainerView scrollToPageAtIndex:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686d234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_scrollToViewAtIndex_animated__112632478
            );
  return;
}



/* Entry: 10686d244; end: 10686d253; -[SCMapCarouselContainerView isUserCurrentlyInteracting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686d244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0827d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521d8),PTR_s_isUserInteracting_1125fe400);
  return;
}



/* Entry: 10686d254; end: 10686d3ab; -[SCMapCarouselContainerView _handlePanGesture:] */

void FUN_10686d254(undefined8 param_1,double param_2,undefined8 param_3,double param_4,ulong param_5
                  ,undefined8 param_6,long param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auStack_70 [48];
  
  _objc_retain(param_7);
  func_0x00010c27adc0(param_7);
  dVar4 = -SQRT(ABS(param_2));
  if (0.0 <= param_2) {
    dVar4 = param_2;
  }
  lVar1 = param_7;
  func_0x00010c252440();
  if (lVar1 - 1U < 2) {
    _CGAffineTransformMakeTranslation(auStack_70,0,dVar4);
    func_0x00010c219960(param_5);
    goto LAB_10686d38c;
  }
  if (1 < lVar1 - 4U) {
    if (lVar1 != 3) goto LAB_10686d38c;
    func_0x00010c297a00(param_7);
    if ((0.0 <= param_2) && (func_0x00010bf20c00(param_5), param_4 * 0.5 <= dVar4 + param_2)) {
      uVar2 = param_5;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        func_0x00010bf6b020(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b89e0();
        _objc_release(param_5);
      }
      goto LAB_10686d38c;
    }
  }
  func_0x00010bebf160(param_5);
LAB_10686d38c:
  _objc_release(param_7);
  return;
}



/* Entry: 10686d3ac; end: 10686d3ff; -[SCMapCarouselContainerView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_10686d3ac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ce840;
  _objc_opt_class(PTR_PTR_1126ce840);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return (uint)uVar2 & 1;
}



/* Entry: 10686d400; end: 10686d47b; -[SCMapCarouselContainerView animateInWithCompletion:] */

void FUN_10686d400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_d3;
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
  
  _objc_retain(param_3);
  func_0x00010bf20c00(param_1);
  _CGAffineTransformMakeTranslation(&uStack_50,0,in_d3);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(param_1,param_2,&uStack_80);
  func_0x00010bebf160(param_1,param_2,0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10686d47c; end: 10686d487; -[SCMapCarouselContainerView animateOutWithCompletion:] */

void FUN_10686d47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebf170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__springToHidden_completion__11258d600,1,param_3);
  return;
}



/* Entry: 10686d488; end: 10686d563; -[SCMapCarouselContainerView _springToHidden:completion:] */

void FUN_10686d488(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  double in_d3;
  double dVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined1 auStack_70 [40];
  double dStack_48;
  
  _objc_retain(param_4);
  dVar1 = 0.0;
  if (param_3 != 0) {
    func_0x00010bf20c00(param_1);
    dVar1 = in_d3;
  }
  func_0x00010c27a460(auStack_70,param_1);
  func_0x00010bf20c00(param_1);
  uStack_98 = 0xc2000000;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = FUN_10686d564;
  puStack_88 = &UNK_110848c48;
  uStack_80 = param_1;
  dStack_78 = dVar1;
  func_0x00010bf03440(ABS((dVar1 - dStack_48) / in_d3) * 0.25,0,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,6,&puStack_a0,param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 10686d564; end: 10686d5b3;  */

void FUN_10686d564(long param_1,undefined8 param_2)

{
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
  
  _CGAffineTransformMakeTranslation(&uStack_50,0,*(undefined8 *)(param_1 + 0x28));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 10686d5b4; end: 10686d5c3; -[SCMapCarouselContainerView pages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686d5b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521d4);
}



/* Entry: 10686d5c4; end: 10686d5e3; -[SCMapCarouselContainerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686d5c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127521dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10686d5e4; end: 10686d5f7; -[SCMapCarouselContainerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686d5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127521dc,param_3);
  return;
}



/* Entry: 10686d5f8; end: 10686d643; -[SCMapCarouselContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686d5f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127521dc);
  _objc_storeStrong(param_1 + _DAT_1127521d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127521d8,0);
  return;
}



/* Entry: 10686d644; end: 10686d6cf; -[SCMapCarouselPageView initWithSections:allowsDismissal:] */

undefined1 *
FUN_10686d644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f38b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame_allowsDismissal__1125e2968,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1f9780(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10686d6d0; end: 10686daa7; -[SCMapCarouselPageView setSections:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686d6d0(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar8 = (long)_DAT_1127521e0;
  lVar10 = *(long *)(param_1 + lVar8);
  _objc_retain(lVar10);
  lVar12 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      lVar15 = *(long *)(lVar13 * 8);
      lVar3 = lVar15;
      func_0x00010c142300();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      puVar6 = PTR_s_setHeightUpdatesObserver__112647988;
      while (PTR_s_setHeightUpdatesObserver__112647988 = puVar6, lVar4 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar3);
          }
          uVar16 = *(ulong *)(lVar11 * 8);
          uVar5 = uVar16;
          param_2 = puVar6;
          _objc_opt_respondsToSelector(uVar16,puVar6);
          if ((uVar5 & 1) != 0) {
            func_0x00010c1a7da0(uVar16);
          }
          lVar11 = lVar11 + 1;
        } while (lVar4 != lVar11);
        lVar4 = lVar3;
        func_0x00010bf52a60();
        puVar6 = PTR_s_setHeightUpdatesObserver__112647988;
      }
      _objc_release(lVar3);
      func_0x00010c18b5e0(lVar15);
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar12);
    lVar12 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  lVar12 = param_3;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + lVar8);
  *(long *)(param_1 + lVar8) = lVar12;
  _objc_release(uVar9);
  lVar12 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127521e4;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(long *)(param_1 + lVar10) = lVar12;
  _objc_release(uVar9);
  lVar8 = param_1;
  func_0x00010bdc9f80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar6 = PTR_s_setHeightUpdatesObserver__112647988;
  while (PTR_s_setHeightUpdatesObserver__112647988 = puVar6, lVar12 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar16 = *(ulong *)(lVar13 * 8);
      uVar5 = uVar16;
      param_2 = puVar6;
      _objc_opt_respondsToSelector(uVar16,puVar6);
      if ((uVar5 & 1) != 0) {
        func_0x00010c1a7da0(uVar16);
      }
      lVar13 = lVar13 + 1;
    } while (lVar12 != lVar13);
    lVar12 = lVar8;
    func_0x00010bf52a60();
    puVar6 = PTR_s_setHeightUpdatesObserver__112647988;
  }
  _objc_release(lVar8);
  func_0x00010be89260(param_1);
  _objc_retain(param_3);
  lVar12 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c18b5e0(*(undefined8 *)(lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar12 != lVar8);
    lVar12 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  lVar12 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(lVar12);
  func_0x00010c284920(param_1);
  uVar14 = *(undefined8 *)(param_1 + lVar10);
  lVar12 = (long)_DAT_1127521e8;
  _objc_retain(uVar14);
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  *(undefined8 *)(param_1 + lVar12) = uVar14;
  _objc_release(uVar9);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c142300(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_2;
  func_0x00010bf51e00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10686daa8; end: 10686dae7;  */

void FUN_10686daa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c142300(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf51e00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10686dae8; end: 10686dc13; -[SCMapCarouselPageView mapCarouselSectionNeedsReload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686dae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_1127521e0);
  func_0x00010bfecde0(lVar1,param_2,param_3);
  if (lVar1 != 0x7fffffffffffffff) {
    lVar6 = (long)_DAT_1127521e4;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0d3c80();
    uVar3 = param_3;
    func_0x00010c142300(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf51e00();
    func_0x00010c1d04c0(uVar2,param_2,uVar5,lVar1);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar3;
    _objc_release(uVar5);
    func_0x00010be89260(param_1);
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128fa0(param_1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10686dc14; end: 10686dc23; -[SCMapCarouselPageView numberOfSectionsInCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686dc14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521e4),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10686dc24; end: 10686dc6f; -[SCMapCarouselPageView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686dc24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127521e4);
  func_0x00010c0dfd40(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10686dc70; end: 10686dd57; -[SCMapCarouselPageView collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686dc70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127521e4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  uVar2 = uVar3;
  func_0x00010c0dfd40(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar1 = uVar2;
  func_0x00010c13fda0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10686dd58; end: 10686de07; -[SCMapCarouselPageView collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686dd58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127521e4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010c1554e0(param_5);
  func_0x00010c0dfd40(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0840e0(param_5);
  _objc_release(param_5);
  uVar2 = uVar3;
  func_0x00010c0dfd40(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c284300(uVar2,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10686de08; end: 10686de7b; -[SCMapCarouselPageView collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_10686de08(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  func_0x00010bde2480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    func_0x00010bf75860(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10686de7c; end: 10686deb7; -[SCMapCarouselPageView collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_10686de7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0720c0(param_4,param_2,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)param_4 != 0) {
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10686deb8; end: 10686deef; -[SCMapCarouselPageView collectionView:layout:insetForSectionAtIndex:] */

undefined8 FUN_10686deb8(void)

{
  long in_x4;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  if (0 < in_x4) {
    puVar1 = (undefined8 *)&UNK_10dde19c0;
  }
  return *puVar1;
}



/* Entry: 10686def0; end: 10686e043; -[SCMapCarouselPageView _registerCellClasses] */

void FUN_10686def0(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = 0;
  uVar5 = param_1;
  func_0x00010bdc9f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar5);
      }
      uVar6 = *(undefined8 *)(uVar7 * 8);
      uVar3 = param_1;
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33960(uVar6);
      func_0x00010c13fda0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c126000(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar3);
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
    uVar2 = uVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = uVar5;
  func_0x00010bde2480();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    func_0x00010bf40120(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010c069540(uVar8,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10686e044; end: 10686e0db; -[SCMapCarouselPageView additionalScrollSnappingOffsetsForItemAtIndexPath:] */

void FUN_10686e044(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010bde2480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf40120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(param_2);
    uVar2 = uVar1;
    func_0x00010c069540(param_1,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10686e0dc; end: 10686e1d3; -[SCMapCarouselPageView collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_10686e0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_6);
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  func_0x00010c156b00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c1554e0(param_6);
  uVar2 = param_2;
  func_0x00010c0dfd40(param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c142300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c0840e0(param_6);
  _objc_release(param_6);
  uVar4 = uVar1;
  func_0x00010c0dfd40(uVar1,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe08e0(param_1);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10686e1d4; end: 10686e1e3; -[SCMapCarouselPageView collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16] FUN_10686e1d4(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 10686e1e4; end: 10686e2db; -[SCMapCarouselPageView verticalPeekHeight] */

undefined8 FUN_10686e1e4(double param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar1 = param_2;
  func_0x00010bdc9f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40120(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
    dVar4 = 0.0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = param_1;
    func_0x00010bfe08e0(param_1);
    dVar4 = dVar4 + 0.0;
    _objc_release(uVar2);
  }
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (1 < uVar2) {
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe08e0(param_1);
    dVar4 = dVar4 + param_1 * 0.5;
    _objc_release(uVar2);
  }
  uVar3 = NEON_fminnm(dVar4,0x4069000000000000);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10686e2dc; end: 10686e2e7; -[SCMapCarouselPageView didCompletelyLoseFocus] */

void FUN_10686e2dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollToItemAtIndex_animated__112632378,0,1);
  return;
}



/* Entry: 10686e2e8; end: 10686e2ff; -[SCMapCarouselPageView _allRows] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686e2e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127521e4),PTR_s_flatMap__1125ca340,
             &PTR___NSConcreteGlobalBlock_110944aa0);
  return;
}



/* Entry: 10686e300; end: 10686e327;  */

void FUN_10686e300(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10686e328; end: 10686e42b; -[SCMapCarouselPageView _committedRowForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686e328(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127521e8;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c1554e0();
  if (uVar2 < uVar1) {
    uVar5 = *(ulong *)(param_1 + lVar6);
    uVar2 = param_3;
    func_0x00010c1554e0(param_3);
    func_0x00010c0dfd40(uVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf529e0();
    uVar1 = param_3;
    func_0x00010c142240();
    _objc_release(uVar5);
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      uVar2 = param_3;
      func_0x00010c1554e0(param_3);
      func_0x00010c0dfd40(uVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c142240(param_3);
      uVar4 = uVar3;
      func_0x00010c0dfd40(uVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      goto LAB_10686e40c;
    }
  }
  uVar4 = 0;
LAB_10686e40c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10686e42c; end: 10686e513; -[SCMapCarouselPageView mapCarouselRowHeightDidChange:] */

void FUN_10686e42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc9f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf408e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(uVar1);
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10686e514; end: 10686e523; -[SCMapCarouselPageView sections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686e514(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521e0);
}



/* Entry: 10686e524; end: 10686e583; -[SCMapCarouselPageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686e524(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127521e0,0);
  _objc_storeStrong(param_1 + _DAT_1127521e8,0);
  _objc_storeStrong(param_1 + _DAT_1127521e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127521ec,0);
  return;
}



/* Entry: 10686e584; end: 10686e74f; -[SCMapCarouselVerticalScrollingView initWithFrame:allowsDismissal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10686e584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126f38c0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    puVar3 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
    func_0x00010c014040(param_1,param_2,param_3,param_4);
    lVar5 = (long)_DAT_1127521f4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c167a20(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar4);
    func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,
                        *(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    if (param_7 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      func_0x00010c050900();
      func_0x00010c18b5e0();
      func_0x00010bef9040(puVar1);
      _objc_release(puVar2);
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10686e750; end: 10686e887; -[SCMapCarouselVerticalScrollingView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686e750(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f38c0;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  lVar1 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2 + -20.0,param_3,param_4 + 40.0);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  lVar2 = (long)_DAT_1127521f0;
  dVar4 = *(double *)(param_5 + lVar2);
  _objc_release(lVar1);
  uVar3 = 0x3e80000000000000;
  if (1.1920928955078125e-07 < ABS(param_1 - dVar4)) {
    func_0x00010c128b60(param_5);
  }
  lVar1 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  *(undefined8 *)(param_5 + lVar2) = uVar3;
  _objc_release(lVar1);
  return;
}



/* Entry: 10686e888; end: 10686ea27; -[SCMapCarouselVerticalScrollingView hitTest:withEvent:] */

void FUN_10686e888(undefined8 param_1,double param_2,undefined1 *param_3)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  double dVar6;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppuVar1 = &puStack_60;
  puStack_58 = PTR_PTR_1126f38c0;
  dVar6 = param_2;
  puStack_60 = param_3;
  _objc_msgSendSuper2(&puStack_60,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar1 == (undefined1 **)puVar5) {
    puVar5 = param_3;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c0df2e0();
    if (puVar2 == (undefined1 *)0x0) {
      _objc_release(puVar5);
    }
    else {
      puVar2 = param_3;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0deec0();
      _objc_release(puVar2);
      _objc_release(puVar5);
      if (puVar3 != (undefined1 *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_3;
        func_0x00010bf40120(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        func_0x00010c08c980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        func_0x00010bf40120(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0(puVar2);
        func_0x00010bf51460(param_3);
        _objc_release(param_3);
        _objc_release(puVar2);
        _objc_release(puVar4);
        if (dVar6 <= param_2) goto LAB_10686e8f4;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
  else {
LAB_10686e8f4:
    _objc_retain(ppuVar1);
    puVar5 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10686ea28; end: 10686eb1b; -[SCMapCarouselVerticalScrollingView topCellFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10686ea28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127521f4;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010bf408e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf51460(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar4),param_6,
                      param_5);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10686eb1c; end: 10686eba7; -[SCMapCarouselVerticalScrollingView updateContentInset] */

void FUN_10686eb1c(undefined8 param_1)

{
  undefined8 uVar1;
  double dVar2;
  double in_d3;
  double dVar3;
  
  uVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar2 = -20.0;
  func_0x00010be35040(param_1);
  dVar3 = (in_d3 + -20.0) - dVar2;
  func_0x00010c298fe0(param_1);
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(dVar3 - dVar2,0,0x4034000000000000,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10686eba8; end: 10686ec17; -[SCMapCarouselVerticalScrollingView verticalPeekHeight] */

undefined8 FUN_10686eba8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0deec0();
  _objc_release(lVar1);
  if (0 < lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010be35070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s__heightForItemAtIndex_inSection__11256adb8,0,0);
    return param_1;
  }
  return 0;
}



/* Entry: 10686ec18; end: 10686ec1f; -[SCMapCarouselVerticalScrollingView additionalScrollSnappingOffsetsForItemAtIndexPath:] */

undefined8 FUN_10686ec18(void)

{
  return 0;
}



/* Entry: 10686ec20; end: 10686ec27; -[SCMapCarouselVerticalScrollingView _scrollDestinationsForTopsOfCells] */

void FUN_10686ec20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollDestinationsIncludingAddi_112584948,0)
  ;
  return;
}



/* Entry: 10686ec28; end: 10686ec2f; -[SCMapCarouselVerticalScrollingView _allScrollDestinations] */

void FUN_10686ec28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollDestinationsIncludingAddi_112584948,1)
  ;
  return;
}



/* Entry: 10686ec30; end: 10686ef0f; -[SCMapCarouselVerticalScrollingView _scrollDestinationsIncludingAdditionalInternalSnapPoints:] */

undefined * FUN_10686ec30(double param_1,double param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar10 = param_3;
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  param_1 = -param_1;
  _objc_release(lVar10);
  lVar10 = param_3;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0df2e0();
  _objc_release(lVar10);
  if (0 < lVar11) {
    lVar10 = 0;
    do {
      lVar11 = param_3;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar11;
      func_0x00010c0deec0();
      _objc_release(lVar11);
      if (0 < lVar2) {
        lVar11 = 0;
        do {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          dVar12 = param_1;
          func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_4,puVar3);
          _objc_release(puVar3);
          if (param_5 != 0) {
            dVar12 = 0.0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            lStack_138 = 0;
            uStack_140 = 0;
            uStack_128 = 0;
            plStack_130 = (long *)0x0;
            puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
            func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_4,lVar11,lVar10);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_3;
            func_0x00010befd400(param_3,param_4,puVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            lVar5 = lVar4;
            func_0x00010bf52a60(lVar4,param_4,&uStack_140,auStack_100,0x10);
            if (lVar5 != 0) {
              lVar7 = *plStack_130;
              do {
                lVar8 = 0;
                do {
                  if (*plStack_130 != lVar7) {
                    _objc_enumerationMutation(lVar4);
                  }
                  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010bf885a0(*(undefined8 *)(lStack_138 + lVar8 * 8));
                  dVar12 = param_1 + dVar12;
                  func_0x00010c0df720(puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar1,param_4,puVar3);
                  _objc_release(puVar3);
                  lVar8 = lVar8 + 1;
                } while (lVar5 != lVar8);
                lVar5 = lVar4;
                func_0x00010bf52a60(lVar4,param_4,&uStack_140,auStack_100,0x10);
              } while (lVar5 != 0);
            }
            _objc_release(lVar4);
          }
          func_0x00010be35060(param_3,param_4,lVar11,lVar10);
          param_1 = param_1 + dVar12 + 7.0;
          lVar11 = lVar11 + 1;
        } while (lVar11 != lVar2);
      }
      lVar10 = lVar10 + 1;
      lVar11 = param_3;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar11;
      func_0x00010c0df2e0();
      _objc_release(lVar11);
    } while (lVar10 < lVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_4,puVar3);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = puVar3;
  func_0x00010be9be60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(puVar6);
  puVar6 = puVar3;
  func_0x00010bf40120(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  if (param_1 + -20.0 <= param_2) {
    func_0x00010bf40120(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    puVar9 = (undefined *)(ulong)(param_2 <= param_1 + 20.0);
    _objc_release(puVar3);
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar6);
  _objc_release(puVar1);
  return puVar9;
}



/* Entry: 10686ef10; end: 10686efdf; -[SCMapCarouselVerticalScrollingView _isScrolledToTop] */

bool FUN_10686ef10(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar1 = param_3;
  func_0x00010be9be60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  if (param_1 + -20.0 <= param_2) {
    func_0x00010bf40120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    bVar3 = param_2 <= param_1 + 20.0;
    _objc_release(param_3);
  }
  else {
    bVar3 = false;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return bVar3;
}



/* Entry: 10686efe0; end: 10686f0af; -[SCMapCarouselVerticalScrollingView _isScrolledToBottom] */

bool FUN_10686efe0(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar1 = param_3;
  func_0x00010be9be60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  if (param_1 + -20.0 <= param_2) {
    func_0x00010bf40120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    bVar3 = param_2 <= param_1 + 20.0;
    _objc_release(param_3);
  }
  else {
    bVar3 = false;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return bVar3;
}



/* Entry: 10686f0b0; end: 10686f16f; -[SCMapCarouselVerticalScrollingView _heightForItemAtIndex:inSection:] */

undefined8
FUN_10686f0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40480(param_3,param_4,uVar2,uVar4,puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_2;
}



/* Entry: 10686f170; end: 10686f203; -[SCMapCarouselVerticalScrollingView _heightForHeader] */

undefined8
FUN_10686f170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40360(param_3,param_4,uVar1,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_2;
}



/* Entry: 10686f204; end: 10686f263; -[SCMapCarouselVerticalScrollingView reloadData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686f204(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(lVar1);
  func_0x00010c284920(param_1);
  param_1 = param_1 + _DAT_1127521f8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf32c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10686f264; end: 10686f337; -[SCMapCarouselVerticalScrollingView scrollToItemAtIndex:animated:] */

void FUN_10686f264(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010be9be60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = lVar2;
    func_0x00010bf529e0();
    param_4 = param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU);
    uVar1 = lVar3 - 1U;
    if (param_4 <= lVar3 - 1U) {
      uVar1 = param_4;
    }
    func_0x00010bf40120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0dfd40(lVar2,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c182300(0,param_1,param_2,param_3,param_5);
    _objc_release(lVar3);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10686f338; end: 10686f33f; -[SCMapCarouselVerticalScrollingView numberOfSectionsInCollectionView:] */

undefined8 FUN_10686f338(void)

{
  return 1;
}



/* Entry: 10686f340; end: 10686f347; -[SCMapCarouselVerticalScrollingView collectionView:numberOfItemsInSection:] */

undefined8 FUN_10686f340(void)

{
  return 0;
}



/* Entry: 10686f348; end: 10686f34f; -[SCMapCarouselVerticalScrollingView collectionView:cellForItemAtIndexPath:] */

undefined8 FUN_10686f348(void)

{
  return 0;
}


