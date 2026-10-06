/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10686f350; end: 10686f357; -[SCMapCarouselVerticalScrollingView collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

undefined8 FUN_10686f350(void)

{
  return 0;
}



/* Entry: 10686f358; end: 10686f373; -[SCMapCarouselVerticalScrollingView collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16] FUN_10686f358(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf20c00();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 10686f374; end: 10686f393; -[SCMapCarouselVerticalScrollingView collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16]
FUN_10686f374(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf20c00(param_6);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 10686f394; end: 10686f39b; -[SCMapCarouselVerticalScrollingView collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_10686f394(void)

{
  return 0x401c000000000000;
}



/* Entry: 10686f39c; end: 10686f3a3; -[SCMapCarouselVerticalScrollingView collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8 FUN_10686f39c(void)

{
  return 0;
}



/* Entry: 10686f3a4; end: 10686f3df; -[SCMapCarouselVerticalScrollingView scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686f3a4(long param_1)

{
  param_1 = param_1 + _DAT_1127521f8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf32c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10686f3e0; end: 10686f447; -[SCMapCarouselVerticalScrollingView scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

void FUN_10686f3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce838;
  uVar2 = *(undefined8 *)(param_6 + 8);
  func_0x00010bdc9fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6ee20(uVar2,param_2,puVar1,param_4,param_3);
  *(undefined8 *)(param_6 + 8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10686f448; end: 10686f4a3; -[SCMapCarouselVerticalScrollingView _onPan:] */

void FUN_10686f448(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c252440();
  if (param_3 - 3U < 3) {
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10686f4a4; end: 10686f627; -[SCMapCarouselVerticalScrollingView gestureRecognizerShouldBegin:] */

undefined8
FUN_10686f4a4(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_5);
  func_0x00010c09ef00(param_5,param_4,param_3);
  dVar5 = param_2;
  func_0x00010c297a00(param_5,param_4,param_3);
  _objc_release(param_5);
  puVar1 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
  _objc_alloc_init(PTR__OBJC_CLASS___UIEvent_1126c5f58);
  uVar2 = param_3;
  func_0x00010bfe3a40(param_1,param_2,param_3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = param_3;
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df2e0();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0deec0();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c070780(uVar2,param_4,uVar4);
  _objc_release(uVar4);
  if ((int)uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010be43800();
    if (((int)uVar4 == 0) || (dVar5 <= 0.0)) {
      uVar3 = param_3;
      func_0x00010be437e0();
      uVar4 = 0;
      if (((int)uVar3 == 0) || (0.0 <= dVar5)) goto LAB_10686f604;
    }
    func_0x00010bf40120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
    _objc_release(param_3);
    uVar4 = 1;
  }
LAB_10686f604:
  _objc_release(uVar2);
  return uVar4;
}



/* Entry: 10686f628; end: 10686f62f; -[SCMapCarouselVerticalScrollingView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10686f628(void)

{
  return 1;
}



/* Entry: 10686f630; end: 10686f64f; -[SCMapCarouselVerticalScrollingView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686f630(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127521f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10686f650; end: 10686f663; -[SCMapCarouselVerticalScrollingView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686f650(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127521f8,param_3);
  return;
}



/* Entry: 10686f664; end: 10686f673; -[SCMapCarouselVerticalScrollingView collectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10686f664(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521f4);
}



/* Entry: 10686f674; end: 10686f6af; -[SCMapCarouselVerticalScrollingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686f674(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127521f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127521f8);
  return;
}



/* Entry: 10686f6b0; end: 10686f777; -[SCMapCarouselCollectionView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

long FUN_10686f6b0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_3 == lVar1) {
    uVar2 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c070780();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010c081660(param_1);
      goto LAB_10686f748;
    }
  }
  else {
    _objc_release(lVar1);
  }
  param_1 = 0;
LAB_10686f748:
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10686f778; end: 10686f78b; -[SCMapCarouselView init] */

void FUN_10686f778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1,
             PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 10686f78c; end: 10686fae7; -[SCMapCarouselView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10686f78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f38c8;
  puVar1 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar6 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112752208) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275220c) = 1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112752210) = 0xffffffffffffffff;
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2c00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112752214);
    *(undefined **)((long)puVar1 + (long)_DAT_112752214) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2c00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112752218);
    *(undefined **)((long)puVar1 + (long)_DAT_112752218) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar9 = (long)_DAT_11275221c;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_112752220;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_88 = puVar3;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar8);
    func_0x00010befbb60(puVar1);
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init();
    func_0x00010c1f7ac0();
    puVar2 = PTR_PTR_1126ce848;
    _objc_alloc();
    func_0x00010c014040(param_1,param_2,param_3,param_4);
    lVar10 = (long)_DAT_112752224;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar8);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,
                        *(undefined8 *)((long)puVar1 + lVar10));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(puVar2);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c167a20(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c167a00(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar10));
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    func_0x00010c126000(uVar8);
    func_0x00010c181fc0(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c128b60(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = puVar6;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  _objc_opt_respondsToSelector();
  _objc_release(puVar1);
  if (((ulong)puVar7 & 1) != 0) {
    func_0x00010bf6b020(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return puVar6;
  }
  return puVar1;
}



/* Entry: 10686fae8; end: 10686fb67; -[SCMapCarouselView _handleDismissTap] */

void FUN_10686fae8(ulong param_1)

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
    func_0x00010c0b8aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10686fb68; end: 10686fb97; -[SCMapCarouselView _widthForCellWithPadding:] */

double FUN_10686fb68(double param_1,double param_2,double param_3)

{
  func_0x00010bf20c00();
  return (param_3 + param_1 * -2.0) - param_2;
}



/* Entry: 10686fb98; end: 10686fda3; -[SCMapCarouselView _wrapView:padding:] */

void FUN_10686fb98(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c4b80;
  _objc_alloc_init(PTR_PTR_1126c4b80);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_6,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ce850;
  _objc_alloc_init(PTR_PTR_1126ce850);
  func_0x00010c0f0ba0(param_5);
  func_0x00010c1d7e40(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_6,puVar3);
  _objc_release(puVar3);
  func_0x00010beeae20(param_1,param_2,param_3,param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(0,0,param_1,puVar1);
  func_0x00010bf20c00(puVar1);
  dVar5 = param_4;
  func_0x00010bf20c00(param_7);
  param_4 = param_4 - dVar5;
  func_0x00010bf20c00(param_7);
  func_0x00010c19f0e0(0,param_4 - param_3,param_1,param_3 + dVar5,puVar2);
  func_0x00010bf20c00(param_7);
  func_0x00010c19f0e0((long)(param_2 * 0.5),0,param_1 - param_2,param_7);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010c0df640();
  _objc_release(param_5);
  if (lVar4 == 1) {
    func_0x00010bf20c00(param_7);
    func_0x00010c19f0e0(0,0,param_1,param_7);
  }
  func_0x00010c16d4a0(puVar2,param_6,0x12);
  func_0x00010c16d4a0(param_7,param_6,0x12);
  func_0x00010befbb60(puVar2,param_6,param_7);
  func_0x00010befbb60(puVar1,param_6,puVar2);
  _objc_release(puVar2);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10686fda4; end: 10686fe0b; -[SCMapCarouselView _numberOfScrollPaddingViewsPerSide] */

long FUN_10686fda4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0df640();
  _objc_release(lVar2);
  func_0x00010bfed7c0();
  lVar2 = lVar1 * 100;
  if (((uint)param_1 & (uint)(lVar1 != 1)) == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 10686fe0c; end: 10686fe5f; -[SCMapCarouselView _indexToRealViewIndex:] */

long FUN_10686fe0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0df640();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_3 / lVar2;
  }
  _objc_release(param_1);
  return param_3 - lVar1 * lVar2;
}



/* Entry: 10686fe60; end: 10686fe9f; -[SCMapCarouselView _indexToPreferredDisplayIndex:] */

long FUN_10686fe60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be65680();
  func_0x00010be38fa0(param_1,param_2,param_3);
  return param_1 + lVar1;
}



/* Entry: 10686fea0; end: 10686ff1b; -[SCMapCarouselView _isPreferredIndex:] */

bool FUN_10686fea0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = param_1;
  func_0x00010be65680();
  if (param_3 < lVar1) {
    bVar3 = false;
  }
  else {
    lVar1 = param_1;
    func_0x00010be65680(param_1);
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0df640();
    bVar3 = param_3 < lVar2 + lVar1;
    _objc_release(param_1);
  }
  return bVar3;
}



/* Entry: 10686ff1c; end: 10686ff8b; -[SCMapCarouselView _preferredIndexPathForIndexPath:] */

void FUN_10686ff1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_retain(param_3);
  func_0x00010c0840e0(param_3);
  func_0x00010be38f80(param_1);
  uVar2 = param_3;
  func_0x00010c1554e0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bfed030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_indexPathForItem_inSection__1125d8dd0,param_1,uVar2);
  return;
}



/* Entry: 10686ff8c; end: 10686ffdf; -[SCMapCarouselView _currentIndexPathUsingCenterPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ff8c(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112752224;
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bfed050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + param_3 * 0.5,0,*(undefined8 *)(param_4 + lVar1),
             PTR_s_indexPathForItemAtPoint__1125d8dd8);
  return;
}



/* Entry: 10686ffe0; end: 10687009b; -[SCMapCarouselView _viewAtIndexDidBeginToLoseFocus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10686ffe0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112752218);
  func_0x00010beeb780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar1 = PTR_DAT_1126a5688;
  if (uVar4 != 0) {
    _objc_retain(uVar4);
    uVar2 = uVar4;
    func_0x00010010fab4(uVar4,puVar1);
    uVar3 = uVar4;
    if ((int)uVar2 == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    if ((int)uVar2 != 0) {
      uVar3 = uVar4;
      _objc_opt_respondsToSelector(uVar4,PTR_s_didBeginToLoseFocus_1125ba430);
      _objc_release(uVar4);
      if ((uVar3 & 1) != 0) {
        func_0x00010bf72a20(uVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10687009c; end: 1068702d7; -[SCMapCarouselView _scrollToViewAtIndex:actionType:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687009c(ulong param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + (long)_DAT_112752228) & 1) != 0) {
    return;
  }
  uVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0df640();
  _objc_release(uVar2);
  if ((long)uVar6 <= (long)param_3) {
    return;
  }
  uVar2 = param_1;
  func_0x00010bf60bc0();
  if (param_3 != uVar2) {
    func_0x00010bf60bc0(param_1);
    func_0x00010bee92e0(param_1);
  }
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be76e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c1525a0(*(undefined8 *)(param_1 + (long)_DAT_112752224));
  *(ulong *)(param_1 + (long)_DAT_112752210) = param_3;
  lVar7 = (long)_DAT_11275222c;
  if (*(char *)(param_1 + lVar7) != '\x01') goto LAB_1068702ac;
  uVar6 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  _objc_opt_respondsToSelector();
  if ((uVar4 & 1) == 0) {
LAB_1068701f4:
    _objc_release(uVar6);
  }
  else {
    cVar1 = *(char *)(param_1 + lVar7);
    _objc_release(uVar6);
    if (cVar1 == '\x01') {
      uVar6 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b8a20();
      goto LAB_1068701f4;
    }
  }
  uVar6 = *(ulong *)(param_1 + (long)_DAT_112752218);
  func_0x00010beeb780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_DAT_1126a5688;
  if (uVar6 != 0) {
    _objc_retain(uVar6);
    uVar5 = uVar6;
    func_0x00010010fab4(uVar6,puVar3);
    uVar4 = uVar6;
    if ((int)uVar5 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar6);
    if ((int)uVar5 != 0) {
      uVar4 = uVar6;
      _objc_opt_respondsToSelector(uVar6,PTR_s_didGainFocus_1125bb5f8);
      _objc_release(uVar6);
      if ((uVar4 & 1) != 0) {
        func_0x00010bf77140(uVar6);
      }
    }
  }
  _objc_release(uVar6);
LAB_1068702ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068702d8; end: 1068702e3; -[SCMapCarouselView scrollToViewAtIndex:animated:] */

void FUN_1068702d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__scrollToViewAtIndex_actionType__112584a48,param_3,0,param_4);
  return;
}



/* Entry: 1068702e4; end: 1068703af; -[SCMapCarouselView reloadData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068702e4(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  lVar2 = param_3;
  func_0x00010bfed7c0();
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0df640();
    _objc_release(lVar2);
    if (lVar1 != 1) {
      lVar2 = (long)_DAT_112752224;
      goto LAB_106870394;
    }
  }
  func_0x00010c0f0ba0(param_3);
  dVar3 = param_1;
  func_0x00010c0f0ba0(param_3);
  dVar4 = param_1 * 2.0 - param_2;
  func_0x00010c0f0ba0(param_3);
  func_0x00010c0f0ba0(param_3);
  lVar2 = (long)_DAT_112752224;
  func_0x00010c181f80(0,dVar4,0,dVar3 * 2.0 - param_2,*(undefined8 *)(param_3 + lVar2));
LAB_106870394:
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + lVar2),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 1068703b0; end: 106870407; -[SCMapCarouselView viewForIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068703b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112752218);
  func_0x00010beeb780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106870408; end: 1068704d3; -[SCMapCarouselView currentViewIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106870408(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0df640();
  _objc_release(puVar1);
  if ((long)puVar2 < 1) {
    param_1 = (undefined *)0x0;
  }
  else {
    if (*(long *)(param_1 + _DAT_112752210) == -1) {
      puVar1 = param_1;
      func_0x00010bdf6ae0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020();
      _objc_retainAutoreleasedReturnValue();
    }
    if (puVar1 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar1;
      func_0x00010c0840e0(puVar1);
    }
    func_0x00010be38fa0(param_1,param_2,puVar2);
    _objc_release(puVar1);
  }
  return param_1;
}



/* Entry: 1068704d4; end: 106870523; -[SCMapCarouselView isUserInteracting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1068704d4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112752224;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c081660();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + lVar3);
    func_0x00010c070ea0();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c070410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_isDecelerating_1125f9b10);
      return uVar2;
    }
  }
  return 1;
}



/* Entry: 106870524; end: 10687053b; -[SCMapCarouselView setPadding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106870524(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_4 + _DAT_1127521fc);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 10687053c; end: 10687055b; -[SCMapCarouselView setInfiniteScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687053c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112752208) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112752208) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 10687055c; end: 10687056b; -[SCMapCarouselView setScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687055c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112752224),PTR_s_setScrollEnabled__11265b8f0);
  return;
}



/* Entry: 10687056c; end: 10687057b; -[SCMapCarouselView scrollEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687056c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112752224),PTR_s_isScrollEnabled_1125fcf08);
  return;
}



/* Entry: 10687057c; end: 10687058b; -[SCMapCarouselView setAlphaFadingEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687057c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275220c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bede190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePropertiesForVisibleCells_112595208);
  return;
}



/* Entry: 10687058c; end: 1068707cf; -[SCMapCarouselView setShowsDismissButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687058c(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  if (*(byte *)(param_1 + _DAT_112752230) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112752230) = (char)param_3;
  if (param_3 == 0) {
    lVar5 = (long)_DAT_112752234;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar5));
    puVar4 = *(undefined **)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4043000000000000,0x4043000000000000);
    lVar5 = (long)_DAT_112752234;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4033000000000000);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b08d8;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010085b3c8(0x4034000000000000,0x3fbeb851e0000000,0,0x3ff0000000000000,puVar4,uVar3,
                        puVar1);
    _objc_release(puVar1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11275221c));
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bea00(0x4028000000000000,0x4028000000000000,0x4008000000000000,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar2);
    func_0x00010c182220(puVar4);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c14c940(puVar4);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar5));
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bed6f40(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1068707d0; end: 106870a9b; -[SCMapCarouselView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068707d0(double param_1,double param_2,undefined8 param_3,double param_4,ulong param_5)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  ulong uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_108 = PTR_PTR_1126f38c8;
  puVar1 = &uStack_110;
  uStack_110 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 0.0;
  lVar11 = (long)_DAT_112752224;
  lVar2 = *(long *)(param_5 + lVar11);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar2);
      }
      puVar12 = *(ulong **)(lVar15 * 8);
      puVar3 = puVar12;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 == puVar3) {
        puVar12 = (ulong *)0x0;
LAB_1068709b0:
        _objc_release(lVar2);
        goto LAB_1068709b8;
      }
      puVar3 = puVar12;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c070780();
      _objc_release(puVar3);
      if ((int)puVar4 != 0) {
        uVar5 = *(ulong *)(param_5 + lVar11);
        func_0x00010bfecfa0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_5;
        func_0x00010bdf6ae0(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c071ae0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        if ((uVar7 & 1) == 0) {
          func_0x00010bf4dce0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1068709b0;
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar13 != lVar15);
    lVar13 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  uVar6 = param_5;
  func_0x00010bfed7c0();
  if ((uVar6 & 1) == 0) {
    func_0x00010c0f0ba0(param_5);
    func_0x00010c0f0ba0(param_5);
    dVar16 = param_2 * 0.5;
    dVar18 = dVar17 + dVar16;
    uVar6 = param_5;
    func_0x00010bf60bc0();
    if ((uVar6 == 0) && (dVar17 = dVar16, param_1 < dVar18)) {
LAB_106870a34:
      puVar12 = (ulong *)0x0;
      goto LAB_1068709b8;
    }
    uVar6 = param_5;
    func_0x00010bf60bc0();
    uVar7 = param_5;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c0df640();
    _objc_release(uVar7);
    dVar17 = dVar16;
    if (uVar6 == uVar5 - 1) {
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar11));
      _CGRectGetWidth();
      dVar17 = dVar16 - param_1;
      if (dVar17 < dVar18) goto LAB_106870a34;
    }
  }
  _objc_retain(puVar1);
  puVar12 = puVar1;
LAB_1068709b8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1e0 = PTR_PTR_1126f38c8;
  puStack_1e8 = puVar1;
  _objc_msgSendSuper2(&puStack_1e8,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(puVar1);
  func_0x00010bf20c00(puVar1);
  func_0x00010bf20c00(puVar1);
  func_0x00010bf20c00(puVar1);
  param_4 = param_4 + param_4;
  lVar13 = (long)_DAT_11275221c;
  func_0x00010c19f0e0(dVar17,param_2,param_3,param_4,*(undefined8 *)((long)puVar1 + lVar13));
  func_0x00010bf20c00(puVar1);
  func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + (long)_DAT_112752224));
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_1d8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184ba0;
  func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar13));
  func_0x00010c0df720(10.0 / param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1d0 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112752220;
  func_0x00010c1bff00(*(undefined8 *)((long)puVar1 + lVar14));
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar13));
  pcVar10 = *(char **)((long)puVar1 + lVar14);
  func_0x00010c19f0e0();
  if ((*(byte *)((long)puVar1 + (long)_DAT_11275222c) & 1) == 0) {
    func_0x00010bf60bc0(puVar1);
    func_0x00010c152960(puVar1);
    puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_208 = 0xc2000000;
    pcStack_200 = FUN_106870c7c;
    puStack_1f8 = &UNK_110842e18;
    pcVar10 = "APPSTORE";
    puStack_1f0 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_210);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(pcVar10 + 0x20) + (long)_DAT_11275222c) = 1;
  func_0x00010c128b60(*(undefined8 *)(pcVar10 + 0x20));
  _dispatch_time(0,100000000);
  func_0x00010058c530();
  return;
}



/* Entry: 106870a9c; end: 106870c7b; -[SCMapCarouselView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106870a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126f38c8;
  lStack_88 = param_5;
  _objc_msgSendSuper2(&lStack_88,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  param_4 = param_4 + param_4;
  lVar4 = (long)_DAT_11275221c;
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112752224));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184ba0;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
  func_0x00010c0df720(10.0 / param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112752220;
  func_0x00010c1bff00(*(undefined8 *)(param_5 + lVar5));
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
  pcVar3 = *(char **)(param_5 + lVar5);
  func_0x00010c19f0e0();
  if ((*(byte *)(param_5 + _DAT_11275222c) & 1) == 0) {
    func_0x00010bf60bc0(param_5);
    func_0x00010c152960(param_5);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106870c7c;
    puStack_98 = &UNK_110842e18;
    pcVar3 = "APPSTORE";
    lStack_90 = param_5;
    func_0x000100162d98("APPSTORE",&puStack_b0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(pcVar3 + 0x20) + (long)_DAT_11275222c) = 1;
  func_0x00010c128b60(*(undefined8 *)(pcVar3 + 0x20));
  _dispatch_time(0,100000000);
  func_0x00010058c530();
  return;
}



/* Entry: 106870c7c; end: 106870d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106870c7c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275222c) = 1;
  func_0x00010c128b60(*(undefined8 *)(param_1 + 0x20));
  _dispatch_time(0,100000000);
  func_0x00010058c530();
  return;
}



/* Entry: 106870d10; end: 106870d17;  */

void FUN_106870d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateDismissButton_112593578);
  return;
}



/* Entry: 106870d18; end: 106870dbb; -[SCMapCarouselView _updatePropertiesForCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106870d18(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_6);
  func_0x00010bfb68e0(param_6);
  _CGRectGetMidX();
  lVar1 = (long)_DAT_112752224;
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar1));
  dVar2 = 0.5;
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar1));
  dVar3 = ABS(param_1 - (dVar2 + param_3 * 0.5)) / (param_3 * 0.5);
  dVar2 = 1.0;
  if (dVar3 <= 1.0) {
    dVar2 = dVar3;
  }
  dVar2 = dVar2 + -1.0;
  _pow(dVar2,0x4014000000000000);
  func_0x00010bede160(dVar2 + 1.0,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106870dbc; end: 106870e17; -[SCMapCarouselView _updatePropertiesForCell:percentFromCenter:] */

void FUN_106870dbc(double param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf01ba0();
  if (param_2 != 0) {
    func_0x00010c1677c0(param_1 * -0.2 + 1.0,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106870e18; end: 106870f1b; -[SCMapCarouselView _updatePropertiesForVisibleCells] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106870e18(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 auStack_3b0 [5];
  undefined8 auStack_388 [5];
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_1b0;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = 0.0;
  lVar1 = *(long *)(param_5 + _DAT_112752224);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar1);
      }
      func_0x00010bede140(param_5);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = auStack_3b0;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112752234;
  lVar2 = lVar1;
  if (*(long *)(lVar1 + lVar11) == 0) goto LAB_106871438;
  lVar5 = (long)_DAT_11275221c;
  lVar2 = *(long *)(lVar1 + lVar5);
  func_0x00010bfb68e0();
  if (param_3 <= 0.0) goto LAB_106871438;
  lVar10 = (long)_DAT_112752224;
  lVar2 = *(long *)(lVar1 + lVar10);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar8 == 0) goto LAB_106871438;
  func_0x00010bfb68e0(*(undefined8 *)(lVar1 + lVar11));
  if (dVar13 == 0.0) {
    func_0x00010bfb68e0(*(undefined8 *)(lVar1 + lVar5));
    dVar13 = (param_3 + -38.0) * 0.5;
    param_3 = 38.0;
    param_2 = 0;
    param_4 = 0x4043000000000000;
    func_0x00010c19f0e0(dVar13,0,0x4043000000000000,0x4043000000000000,
                        *(undefined8 *)(lVar1 + lVar11));
  }
  func_0x00010bf4cdc0(*(undefined8 *)(lVar1 + lVar10));
  lVar2 = (long)_DAT_112752238;
  dVar16 = *(double *)(lVar1 + lVar2);
  dVar17 = dVar13;
  func_0x00010bf4cdc0(*(undefined8 *)(lVar1 + lVar10));
  *(double *)(lVar1 + lVar2) = dVar17;
  func_0x00010bfb68e0(*(undefined8 *)(lVar1 + lVar10));
  dVar14 = param_3;
  func_0x00010bf4cdc0(*(undefined8 *)(lVar1 + lVar10));
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  lVar2 = *(long *)(lVar1 + lVar10);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    dVar13 = dVar13 - dVar16;
    param_3 = param_3 * 0.5;
    dVar17 = dVar17 + param_3;
    lVar8 = *plStack_2e0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_2e0 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        lVar6 = *(long *)(lStack_2e8 + lVar12 * 8);
        uVar9 = *(undefined8 *)(lVar1 + lVar10);
        func_0x00010bfb68e0(lVar6);
        func_0x00010bf51460(uVar9);
        uVar3 = *(ulong *)(lVar1 + lVar11);
        dVar16 = param_3;
        func_0x00010bf345e0();
        _CGRectContainsPoint(param_3,param_2,dVar14,param_4,dVar16,param_2);
        if ((uVar3 & 1) != 0) {
          _objc_retain(lVar6);
          _objc_release();
          if (lVar6 == 0) goto LAB_106871438;
          lVar2 = (long)_DAT_11275223c;
          if (lVar6 != *(long *)(lVar1 + lVar2)) {
            if (*(long *)(lVar1 + lVar2) != 0) {
              lVar5 = lVar1;
              func_0x00010c152e00(lVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c18b5e0();
              _objc_release(lVar5);
            }
            _objc_retain(lVar6);
            uVar9 = *(undefined8 *)(lVar1 + lVar2);
            *(long *)(lVar1 + lVar2) = lVar6;
            _objc_release(uVar9);
          }
          lVar2 = lVar1;
          func_0x00010c152e00(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18b5e0();
          func_0x00010bf345e0(lVar6);
          dVar14 = ABS(param_3 - dVar17);
          dVar16 = 4.0;
          if (dVar14 <= 4.0) {
            func_0x00010bf01b40(*(undefined8 *)(lVar1 + lVar11));
            if (dVar14 != 1.0) {
              func_0x00010bed6f60(lVar1);
              puStack_318 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_310 = 0xc2000000;
              pcStack_308 = FUN_106871480;
              puStack_300 = &UNK_110842e18;
              lStack_2f8 = lVar1;
              func_0x00010bf03400(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
            }
            goto LAB_106871428;
          }
          dVar14 = 0.0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_328 = 0;
          uStack_330 = 0;
          lStack_358 = 0;
          uStack_360 = 0;
          uStack_348 = 0;
          plStack_350 = (long *)0x0;
          lVar8 = *(long *)(lVar1 + lVar10);
          func_0x00010c29fc60();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar8;
          func_0x00010bf52a60();
          if (lVar5 == 0) goto LAB_106871424;
          lVar10 = *plStack_350;
          goto LAB_106871204;
        }
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar2;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  goto LAB_106871430;
LAB_106871204:
  do {
    lVar12 = 0;
    do {
      if (*plStack_350 != lVar10) {
        _objc_enumerationMutation(lVar8);
      }
      lVar7 = *(long *)(lStack_358 + lVar12 * 8);
      if (lVar7 != lVar6) {
        func_0x00010bfb68e0(lVar7);
        dVar15 = dVar14;
        func_0x00010bfb68e0(lVar6);
        if (((dVar15 <= dVar14) || (0.0 <= dVar13)) ||
           (func_0x00010bf345e0(lVar6), dVar14 = dVar15, dVar15 <= dVar17)) {
          func_0x00010bfb68e0(lVar7);
          dVar14 = dVar15;
          func_0x00010bfb68e0(lVar6);
          if (((dVar15 <= dVar14) || (dVar13 <= 0.0)) ||
             (func_0x00010bf345e0(lVar6), dVar17 <= dVar14)) goto LAB_106871298;
        }
        _objc_retain(lVar7);
        _objc_release(lVar8);
        if (lVar7 == 0) goto LAB_106871428;
        lVar5 = lVar1;
        func_0x00010c152e00(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar1;
        func_0x00010c152e00(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2742e0(lVar5);
        dVar13 = dVar16;
        func_0x00010c2742e0(lVar8);
        func_0x00010bf01b40(*(undefined8 *)(lVar1 + lVar11));
        if (dVar16 == dVar13) {
          if (dVar14 != 1.0) {
            func_0x00010bed6f60(lVar1);
            uVar9 = 0x1068714b0;
            goto LAB_1068713dc;
          }
        }
        else if (dVar14 != 0.0) {
          uVar9 = 0x106871498;
          puVar4 = auStack_388;
LAB_1068713dc:
          *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
          puVar4[1] = 0xc2000000;
          puVar4[2] = uVar9;
          puVar4[3] = &UNK_110842e18;
          puVar4[4] = lVar1;
          func_0x00010bf03400(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
        }
        _objc_release(lVar8);
        _objc_release(lVar5);
        lVar8 = lVar7;
        goto LAB_106871424;
      }
LAB_106871298:
      lVar12 = lVar12 + 1;
    } while (lVar5 != lVar12);
    lVar5 = lVar8;
    func_0x00010bf52a60();
  } while (lVar5 != 0);
LAB_106871424:
  _objc_release(lVar8);
LAB_106871428:
  _objc_release(lVar2);
  lVar2 = lVar6;
LAB_106871430:
  _objc_release();
LAB_106871438:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(lVar2 + 0x20) + (long)_DAT_112752234),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106870f1c; end: 10687147f; -[SCMapCarouselView _updateDismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106870f1c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 auStack_2a0 [5];
  undefined8 auStack_278 [5];
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_a0;
  
  puVar3 = auStack_2a0;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112752234;
  lVar1 = param_5;
  if (*(long *)(param_5 + lVar8) == 0) goto LAB_106871438;
  lVar9 = (long)_DAT_11275221c;
  lVar1 = *(long *)(param_5 + lVar9);
  func_0x00010bfb68e0();
  if (param_3 <= 0.0) goto LAB_106871438;
  lVar7 = (long)_DAT_112752224;
  lVar1 = *(long *)(param_5 + lVar7);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf529e0();
  _objc_release();
  if (lVar10 == 0) goto LAB_106871438;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
  if (param_1 == 0.0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar9));
    param_1 = (param_3 + -38.0) * 0.5;
    param_3 = 38.0;
    param_2 = 0;
    param_4 = 0x4043000000000000;
    func_0x00010c19f0e0(param_1,0,0x4043000000000000,0x4043000000000000,
                        *(undefined8 *)(param_5 + lVar8));
  }
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar7));
  lVar1 = (long)_DAT_112752238;
  dVar14 = *(double *)(param_5 + lVar1);
  dVar15 = param_1;
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar7));
  *(double *)(param_5 + lVar1) = dVar15;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  dVar12 = param_3;
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar7));
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lVar1 = *(long *)(param_5 + lVar7);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    param_1 = param_1 - dVar14;
    param_3 = param_3 * 0.5;
    dVar15 = dVar15 + param_3;
    lVar10 = *plStack_1d0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1d0 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        lVar4 = *(long *)(lStack_1d8 + lVar11 * 8);
        uVar6 = *(undefined8 *)(param_5 + lVar7);
        func_0x00010bfb68e0(lVar4);
        func_0x00010bf51460(uVar6);
        uVar2 = *(ulong *)(param_5 + lVar8);
        dVar14 = param_3;
        func_0x00010bf345e0();
        _CGRectContainsPoint(param_3,param_2,dVar12,param_4,dVar14,param_2);
        if ((uVar2 & 1) != 0) {
          _objc_retain(lVar4);
          _objc_release();
          if (lVar4 == 0) goto LAB_106871438;
          lVar1 = (long)_DAT_11275223c;
          if (lVar4 != *(long *)(param_5 + lVar1)) {
            if (*(long *)(param_5 + lVar1) != 0) {
              lVar9 = param_5;
              func_0x00010c152e00(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c18b5e0();
              _objc_release(lVar9);
            }
            _objc_retain(lVar4);
            uVar6 = *(undefined8 *)(param_5 + lVar1);
            *(long *)(param_5 + lVar1) = lVar4;
            _objc_release(uVar6);
          }
          lVar1 = param_5;
          func_0x00010c152e00(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18b5e0();
          func_0x00010bf345e0(lVar4);
          dVar12 = ABS(param_3 - dVar15);
          dVar14 = 4.0;
          if (dVar12 <= 4.0) {
            func_0x00010bf01b40(*(undefined8 *)(param_5 + lVar8));
            if (dVar12 != 1.0) {
              func_0x00010bed6f60(param_5);
              puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_200 = 0xc2000000;
              pcStack_1f8 = FUN_106871480;
              puStack_1f0 = &UNK_110842e18;
              lStack_1e8 = param_5;
              func_0x00010bf03400(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
            }
            goto LAB_106871428;
          }
          dVar12 = 0.0;
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          lStack_248 = 0;
          uStack_250 = 0;
          uStack_238 = 0;
          plStack_240 = (long *)0x0;
          lVar10 = *(long *)(param_5 + lVar7);
          func_0x00010c29fc60();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar10;
          func_0x00010bf52a60();
          if (lVar9 == 0) goto LAB_106871424;
          lVar7 = *plStack_240;
          goto LAB_106871204;
        }
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
      lVar9 = lVar1;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  goto LAB_106871430;
LAB_106871204:
  do {
    lVar11 = 0;
    do {
      if (*plStack_240 != lVar7) {
        _objc_enumerationMutation(lVar10);
      }
      lVar5 = *(long *)(lStack_248 + lVar11 * 8);
      if (lVar5 != lVar4) {
        func_0x00010bfb68e0(lVar5);
        dVar13 = dVar12;
        func_0x00010bfb68e0(lVar4);
        if (((dVar13 <= dVar12) || (0.0 <= param_1)) ||
           (func_0x00010bf345e0(lVar4), dVar12 = dVar13, dVar13 <= dVar15)) {
          func_0x00010bfb68e0(lVar5);
          dVar12 = dVar13;
          func_0x00010bfb68e0(lVar4);
          if (((dVar13 <= dVar12) || (param_1 <= 0.0)) ||
             (func_0x00010bf345e0(lVar4), dVar15 <= dVar12)) goto LAB_106871298;
        }
        _objc_retain(lVar5);
        _objc_release(lVar10);
        if (lVar5 == 0) goto LAB_106871428;
        lVar9 = param_5;
        func_0x00010c152e00(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_5;
        func_0x00010c152e00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2742e0(lVar9);
        dVar15 = dVar14;
        func_0x00010c2742e0(lVar10);
        func_0x00010bf01b40(*(undefined8 *)(param_5 + lVar8));
        if (dVar14 == dVar15) {
          if (dVar12 != 1.0) {
            func_0x00010bed6f60(param_5);
            uVar6 = 0x1068714b0;
            goto LAB_1068713dc;
          }
        }
        else if (dVar12 != 0.0) {
          uVar6 = 0x106871498;
          puVar3 = auStack_278;
LAB_1068713dc:
          *puVar3 = PTR___NSConcreteStackBlock_11034bd00;
          puVar3[1] = 0xc2000000;
          puVar3[2] = uVar6;
          puVar3[3] = &UNK_110842e18;
          puVar3[4] = param_5;
          func_0x00010bf03400(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
        }
        _objc_release(lVar10);
        _objc_release(lVar9);
        lVar10 = lVar5;
        goto LAB_106871424;
      }
LAB_106871298:
      lVar11 = lVar11 + 1;
    } while (lVar9 != lVar11);
    lVar9 = lVar10;
    func_0x00010bf52a60();
  } while (lVar9 != 0);
LAB_106871424:
  _objc_release(lVar10);
LAB_106871428:
  _objc_release(lVar1);
  lVar1 = lVar4;
LAB_106871430:
  _objc_release();
LAB_106871438:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(lVar1 + 0x20) + (long)_DAT_112752234),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106871480; end: 1068714c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106871480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112752234),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1068714c8; end: 10687159f; -[SCMapCarouselView scrollingViewForCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068714c8(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112752224);
  func_0x00010bfecfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0840e0();
  func_0x00010be38fa0(param_1);
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0b8a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126ce840;
  _objc_retain(uVar3);
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068715a0; end: 10687163b; -[SCMapCarouselView _updateDismissButtonFrameForScrollingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068715a0(undefined8 param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  _objc_retain(param_6);
  func_0x00010c2742e0(param_6);
  func_0x00010bf51460(param_6);
  _objc_release(param_6);
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + _DAT_11275221c));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((param_3 + -38.0) * 0.5,param_2 + -38.0 + -20.0,0x4043000000000000,0x4043000000000000,
             *(undefined8 *)(param_4 + _DAT_112752234),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10687163c; end: 10687172f; -[SCMapCarouselView _wrappedViewInVisibleCellAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687163c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be76e00(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112752224);
  func_0x00010bf33b60(uVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106871730; end: 10687178f; -[SCMapCarouselView collectionView:numberOfItemsInSection:] */

long FUN_106871730(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0df640();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010be65680(param_1);
    lVar2 = lVar2 + param_1 * 2;
  }
  return lVar2;
}



/* Entry: 106871790; end: 10687179f; -[SCMapCarouselView collectionView:cellForItemAtIndexPath:] */

void FUN_106871790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_dequeueReusableCellWithReuseIden_1125b91d8,
             &PTR____CFConstantStringClassReference_110e22938);
  return;
}



/* Entry: 1068717a0; end: 106871917; -[SCMapCarouselView _snapshotCellView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068717a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
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
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c4b80;
  _objc_alloc();
  func_0x00010bfb68e0(param_7);
  func_0x00010c013de0();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar5 = param_7;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_e8;
  uVar10 = 0x10;
  uVar2 = uVar5;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar12 = *plStack_120;
    do {
      uVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(uVar5);
        }
        uVar11 = *(undefined8 *)(lStack_128 + uVar13 * 8);
        uVar10 = uVar11;
        func_0x00010c149300();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0(uVar11);
        func_0x00010c19f0e0(uVar10);
        func_0x00010befbb60(puVar1);
        _objc_release(uVar10);
        uVar13 = uVar13 + 1;
      } while (uVar2 != uVar13);
      puVar9 = auStack_e8;
      uVar10 = 0x10;
      uVar2 = uVar5;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    _objc_retain(uVar10);
    puVar3 = puVar9;
    func_0x00010bf4dce0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b7520();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bede140(param_7);
    func_0x00010c0840e0(uVar10);
    func_0x00010be38fa0(param_7);
    uVar5 = param_7;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0b8a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    lVar12 = (long)_DAT_112752214;
    uVar5 = *(ulong *)(param_7 + lVar12);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      func_0x00010c0f0ba0(param_7);
      uVar5 = param_7;
      func_0x00010beeb720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(*(undefined8 *)(param_7 + lVar12));
      func_0x00010c1d0560(*(undefined8 *)(param_7 + (long)_DAT_112752218));
    }
    uVar13 = uVar5;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar13 != 0) {
      uVar6 = uVar2;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar13);
      if (uVar5 != uVar6) {
        func_0x00010c0840e0(uVar10);
        uVar13 = param_7;
        func_0x00010be42d80();
        func_0x00010bebdb20(param_7);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        if ((int)uVar13 != 0) {
          uVar13 = uVar5;
          func_0x00010c262ca0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c262ca0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c261580();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7520();
          _objc_release(uVar7);
          _objc_release(uVar6);
          func_0x00010befbb60(uVar13);
          _objc_release(uVar13);
          uVar6 = param_7;
          param_7 = uVar5;
        }
        _objc_release(uVar6);
        uVar5 = param_7;
      }
    }
    func_0x00010bf20c00(puVar8);
    dVar14 = param_4;
    func_0x00010bf20c00(uVar5);
    puVar3 = puVar9;
    func_0x00010bf4dce0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bf20c00(uVar5);
    func_0x00010c19f0e0(0,param_4 - dVar14,param_3,uVar5);
    _objc_release(puVar3);
    func_0x00010c16d4a0(uVar5);
    puVar3 = puVar9;
    func_0x00010bf4dce0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c08cdc0(uVar5);
    puVar1 = PTR_DAT_1126a5688;
    _objc_retain(uVar2);
    uVar6 = uVar2;
    func_0x00010010fab4(uVar2,puVar1);
    uVar13 = uVar2;
    if ((int)uVar6 == 0) {
      uVar13 = 0;
    }
    _objc_retain(uVar13);
    _objc_release(uVar2);
    if (uVar13 != 0) {
      uVar13 = uVar2;
      _objc_opt_respondsToSelector(uVar2,PTR_s_willBeDisplayed_112687078);
      _objc_release(uVar2);
      if ((uVar13 & 1) != 0) {
        func_0x00010c2a5940(uVar2);
      }
    }
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar10);
    _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106871918; end: 106871c87; -[SCMapCarouselView collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106871918(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar2 = param_8;
  func_0x00010bf4dce0(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7520();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bede140(param_5);
  func_0x00010c0840e0(param_9);
  func_0x00010be38fa0(param_5);
  uVar5 = param_5;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c0b8a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar9 = (long)_DAT_112752214;
  uVar5 = *(ulong *)(param_5 + lVar9);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) {
    func_0x00010c0f0ba0(param_5);
    uVar5 = param_5;
    func_0x00010beeb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(*(undefined8 *)(param_5 + lVar9));
    func_0x00010c1d0560(*(undefined8 *)(param_5 + (long)_DAT_112752218));
  }
  uVar6 = uVar5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 != 0) {
    uVar7 = uVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar6);
    if (uVar5 != uVar7) {
      func_0x00010c0840e0(param_9);
      uVar6 = param_5;
      func_0x00010be42d80();
      func_0x00010bebdb20(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      if ((int)uVar6 != 0) {
        uVar6 = uVar5;
        func_0x00010c262ca0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c262ca0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7520();
        _objc_release(uVar8);
        _objc_release(uVar7);
        func_0x00010befbb60(uVar6);
        _objc_release(uVar6);
        uVar7 = param_5;
        param_5 = uVar5;
      }
      _objc_release(uVar7);
      uVar5 = param_5;
    }
  }
  func_0x00010bf20c00(param_7);
  dVar10 = param_4;
  func_0x00010bf20c00(uVar5);
  uVar2 = param_8;
  func_0x00010bf4dce0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bf20c00(uVar5);
  func_0x00010c19f0e0(0,param_4 - dVar10,param_3,uVar5);
  _objc_release(uVar2);
  func_0x00010c16d4a0(uVar5);
  uVar2 = param_8;
  func_0x00010bf4dce0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  func_0x00010c08cdc0(uVar5);
  puVar1 = PTR_DAT_1126a5688;
  _objc_retain(uVar4);
  uVar7 = uVar4;
  func_0x00010010fab4(uVar4,puVar1);
  uVar6 = uVar4;
  if ((int)uVar7 == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar4);
  if (uVar6 != 0) {
    uVar6 = uVar4;
    _objc_opt_respondsToSelector(uVar4,PTR_s_willBeDisplayed_112687078);
    _objc_release(uVar4);
    if ((uVar6 & 1) != 0) {
      func_0x00010c2a5940(uVar4);
    }
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106871c88; end: 106871c8f; -[SCMapCarouselView numberOfSectionsInCollectionView:] */

undefined8 FUN_106871c88(void)

{
  return 1;
}



/* Entry: 106871c90; end: 106871cef; -[SCMapCarouselView collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_106871c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  
  _objc_retain(param_7);
  func_0x00010c0f0ba0(param_5);
  func_0x00010beeae20(param_5);
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 106871cf0; end: 106871cf7; -[SCMapCarouselView collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_106871cf0(void)

{
  return 0;
}



/* Entry: 106871cf8; end: 106871cff; -[SCMapCarouselView collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8 FUN_106871cf8(void)

{
  return 0;
}



/* Entry: 106871d00; end: 106871dcb; -[SCMapCarouselView scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106871d00(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + (long)_DAT_112752228) = 1;
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf60bc0(param_1);
    func_0x00010c0b8a40(uVar1);
    _objc_release(uVar1);
  }
  func_0x00010bf60bc0(param_1);
  func_0x00010bee92e0(param_1);
  uVar1 = param_1;
  func_0x00010bdf6ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112752240);
  *(ulong *)(param_1 + (long)_DAT_112752240) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106871dcc; end: 106871def; -[SCMapCarouselView scrollViewDidScroll:] */

void FUN_106871dcc(undefined8 param_1)

{
  func_0x00010bede180();
                    /* WARNING: Could not recover jumptable at 0x00010bed6f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDismissButton_112593578);
  return;
}



/* Entry: 106871df0; end: 10687203f; -[SCMapCarouselView scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106871df0(double param_1,undefined8 param_2,double param_3,ulong param_4,undefined8 param_5
                  ,long param_6,double *param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar9 = param_1;
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar4 = param_6;
  func_0x00010bf8d060();
  func_0x00010c0f0ba0(param_4);
  func_0x00010beeae20(param_4);
  dVar10 = 0.0;
  dVar12 = 0.0;
  if (lVar4 != 0) {
    dVar12 = dVar9;
    func_0x00010bf4d5e0(param_6);
    dVar12 = dVar12 - dVar9;
  }
  func_0x00010bf20c00(param_4);
  lVar8 = (long)_DAT_112752224;
  lVar2 = *(long *)(param_4 + lVar8);
  func_0x00010c0deec0();
  if (0 < lVar2) {
    lVar2 = 0;
    dVar11 = dVar10;
    dVar13 = dVar9;
    if (lVar4 != 0) {
      dVar13 = -dVar9;
    }
    do {
      dVar10 = dVar12 - (double)(long)((param_3 - dVar9) * 0.5);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar10,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar3);
      lVar4 = *(long *)(param_4 + (long)_DAT_112752240);
      func_0x00010c0840e0();
      if (lVar2 != lVar4) {
        dVar10 = dVar11;
      }
      dVar12 = dVar13 + dVar12;
      lVar2 = lVar2 + 1;
      lVar4 = *(long *)(param_4 + lVar8);
      func_0x00010c0deec0();
      dVar11 = dVar10;
    } while (lVar2 < lVar4);
  }
  uVar5 = param_4;
  func_0x00010c0e8bc0();
  if ((uVar5 & 1) == 0) {
    dVar10 = *param_7;
    func_0x00010bf6ee20(dVar10,param_1,PTR_PTR_1126ce838);
  }
  else if (param_1 <= 0.0) {
    if (param_1 < 0.0) {
      dVar10 = dVar10 - dVar9;
    }
  }
  else {
    dVar10 = dVar9 + dVar10;
  }
  *param_7 = dVar10;
  uVar5 = param_4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  _objc_opt_respondsToSelector();
  _objc_release(uVar5);
  if ((uVar6 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_4 + lVar8);
    func_0x00010bfed040(dVar9 * 0.5 + *param_7,param_7[1],uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0();
    func_0x00010be38fa0(param_4);
    func_0x00010bf6b020(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b8a80();
    _objc_release(param_4);
    _objc_release(uVar7);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106872040; end: 1068721cf; -[SCMapCarouselView scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106872040(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  *(undefined1 *)(param_1 + _DAT_112752228) = 0;
  *(undefined8 *)(param_1 + _DAT_112752210) = 0xffffffffffffffff;
  lVar11 = (long)_DAT_112752240;
  if (*(long *)(param_1 + lVar11) == 0) {
    uVar8 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bdf6ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + lVar11);
    _objc_retain(lVar9);
    lVar3 = lVar2;
    func_0x00010c0840e0();
    lVar4 = lVar9;
    func_0x00010c0840e0();
    _objc_release(lVar9);
    uVar8 = 2;
    if (lVar4 <= lVar3) {
      uVar8 = lVar3 != lVar4;
    }
    uVar10 = *(ulong *)(param_1 + _DAT_112752218);
    func_0x00010c0840e0(*(undefined8 *)(param_1 + lVar11));
    lVar3 = param_1;
    func_0x00010beeb780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar1 = PTR_DAT_1126a5688;
    if (uVar10 != 0) {
      _objc_retain(uVar10);
      uVar5 = uVar10;
      func_0x00010010fab4(uVar10,puVar1);
      uVar6 = uVar10;
      if ((int)uVar5 == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar10);
      if ((int)uVar5 != 0) {
        uVar6 = uVar10;
        _objc_opt_respondsToSelector(uVar10,PTR_s_didCompletelyLoseFocus_1125baa00);
        _objc_release(uVar10);
        if ((uVar6 & 1) != 0) {
          func_0x00010bf74160(uVar10);
        }
      }
    }
    uVar7 = *(undefined8 *)(param_1 + lVar11);
    *(undefined8 *)(param_1 + lVar11) = 0;
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(lVar2);
  }
  lVar11 = param_1;
  func_0x00010bf60bc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be9c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__scrollToViewAtIndex_actionType__112584a48,lVar11,uVar8,0);
  return;
}



/* Entry: 1068721d0; end: 106872377; +[SCMapCarouselView destinationTargetForTargetContentOffset:velocity:destinations:] */

double FUN_1068721d0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar7 = param_1;
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf529e0();
  dVar5 = dVar7;
  dVar6 = param_1;
  if (lVar1 != 0) {
    lVar1 = param_5;
    func_0x00010bf529e0();
    lVar2 = param_5;
    func_0x00010bfb1920(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar5 = dVar7;
    _objc_release(lVar2);
    dVar6 = dVar7;
    if (lVar1 != 1) {
      dVar5 = 0.0;
      _objc_retain(param_5);
      lVar2 = param_5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (lVar2 != 0) {
        dVar7 = 1.79769313486232e+308;
        do {
          lVar4 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(param_5);
            }
            func_0x00010bf885a0(*(undefined8 *)(lVar4 * 8));
            if ((ABS(dVar5 - param_1) < dVar7 && (dVar5 <= param_1 || 0.0 <= param_2)) &&
                (param_1 <= dVar5 || (param_2 == 0.0 || 0.0 > param_2))) {
              dVar6 = dVar5;
              dVar7 = ABS(dVar5 - param_1);
            }
            lVar4 = lVar4 + 1;
          } while (lVar2 != lVar4);
          lVar2 = param_5;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(param_5);
    }
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bed6f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return dVar5;
  }
  return dVar6;
}



/* Entry: 106872378; end: 10687237b; -[SCMapCarouselView carouselVerticalScrollingViewTopCellFrameChanged:] */

void FUN_106872378(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDismissButtonFrameForScro_112593580);
  return;
}



/* Entry: 10687237c; end: 10687239b; -[SCMapCarouselView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687237c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112752244);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10687239c; end: 1068723af; -[SCMapCarouselView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687239c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112752244,param_3);
  return;
}



/* Entry: 1068723b0; end: 1068723cf; -[SCMapCarouselView dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068723b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112752248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068723d0; end: 1068723e3; -[SCMapCarouselView setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068723d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112752248,param_3);
  return;
}



/* Entry: 1068723e4; end: 1068723f3; -[SCMapCarouselView infiniteScrollEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1068723e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112752208);
}



/* Entry: 1068723f4; end: 106872403; -[SCMapCarouselView onlyScrollOneItemPerSwipe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1068723f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112752200);
}



/* Entry: 106872404; end: 106872413; -[SCMapCarouselView setOnlyScrollOneItemPerSwipe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106872404(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112752200) = param_3;
  return;
}



/* Entry: 106872414; end: 106872423; -[SCMapCarouselView alphaFadingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106872414(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275220c);
}



/* Entry: 106872424; end: 106872433; -[SCMapCarouselView showsDismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106872424(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112752230);
}



/* Entry: 106872434; end: 10687244b; -[SCMapCarouselView padding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106872434(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127521fc);
}



/* Entry: 10687244c; end: 106872503; -[SCMapCarouselView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687244c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752248);
  _objc_destroyWeak(param_1 + _DAT_112752244);
  _objc_storeStrong(param_1 + _DAT_11275223c,0);
  _objc_storeStrong(param_1 + _DAT_112752234,0);
  _objc_storeStrong(param_1 + _DAT_112752240,0);
  _objc_storeStrong(param_1 + _DAT_112752218,0);
  _objc_storeStrong(param_1 + _DAT_112752214,0);
  _objc_storeStrong(param_1 + _DAT_112752224,0);
  _objc_storeStrong(param_1 + _DAT_112752220,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275221c,0);
  return;
}



/* Entry: 106872504; end: 10687261b; -[SCMapCarouselWrapperView hitTest:withEvent:] */

void FUN_106872504(undefined8 param_1,double param_2,double param_3,double param_4,
                  undefined8 ****param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  
  ppppuVar3 = &pppuStack_70;
  _objc_retain(param_7);
  puVar1 = PTR_s_hitTest_withEvent__1125d6850;
  puStack_58 = PTR_PTR_1126f38d0;
  ppppuVar2 = &pppuStack_60;
  pppuStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,ppppuVar2,PTR_s_hitTest_withEvent__1125d6850,param_7);
  _objc_retainAutoreleasedReturnValue();
  ppppuVar4 = ppppuVar2;
  if (ppppuVar2 == param_5) {
    func_0x00010bf20c00(param_5);
    func_0x00010c0f0ba0(param_5);
    ppppuVar4 = param_5;
    if (param_3 <= param_4 - param_2) {
      func_0x00010bf20c00(param_5);
      _CGRectGetMidX();
      puStack_68 = PTR_PTR_1126f38d0;
      pppuStack_70 = param_5;
      _objc_msgSendSuper2(&pppuStack_70,puVar1,param_7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar2);
      ppppuVar4 = (undefined8 ****)0x0;
      ppppuVar2 = ppppuVar3;
      if (ppppuVar3 != param_5) {
        ppppuVar4 = param_5;
      }
    }
  }
  _objc_retain(ppppuVar4);
  _objc_release(ppppuVar2);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar4);
  return;
}



/* Entry: 10687261c; end: 106872633; -[SCMapCarouselWrapperView padding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10687261c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112752204);
}



/* Entry: 106872634; end: 10687264b; -[SCMapCarouselWrapperView setPadding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106872634(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_4 + _DAT_112752204);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  return;
}



/* Entry: 10687264c; end: 10687277f; -[SCMapSnapshotView composer_setViewport:snapshotView:] */

bool FUN_10687264c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  func_0x00010bf44740(param_4,param_3,&PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 3) {
    lVar2 = param_4;
    func_0x00010c0dfd40(param_4,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar3 = param_1;
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c0dfd40(param_4,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar4 = uVar3;
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c0dfd40(param_4,param_3,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar2);
    func_0x000108d31910(param_1,uVar3,uVar4,0x4039000000000000,0x40613ccccccccccc,0,0);
    func_0x00010c17a740(param_5,param_3,0);
  }
  _objc_release(param_4);
  _objc_release(param_5);
  return lVar1 == 3;
}



/* Entry: 106872780; end: 1068727b3; +[SCMapSnapshotView bindAttributes:] */

void FUN_106872780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_bindAttribute_invalidateLayoutOn_1125a41f8,
             &PTR____CFConstantStringClassReference_110e07eb8,0,
             &PTR___NSConcreteGlobalBlock_110944ae0,&PTR___NSConcreteGlobalBlock_110944b20);
  return;
}



/* Entry: 1068727b4; end: 1068727f7;  */

void FUN_1068727b4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1097a0(param_2);
  func_0x00010bf453c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068727f8; end: 1068727ff; -[SCMapSnapshotView willEnqueueIntoComposerPool] */

undefined8 FUN_1068727f8(void)

{
  return 1;
}



/* Entry: 106872800; end: 1068728bb; -[SCMapSnapshotView initWithFrame:snapshotCache:snapshotProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106872800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f38d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11275224c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112752250;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068728bc; end: 1068728c7; -[SCMapSnapshotView initWithFrame:snapshotProvider:] */

void FUN_1068728bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFrame_snapshotCache_snap_1125e2d40,0,param_3);
  return;
}



/* Entry: 1068728c8; end: 1068728db; -[SCMapSnapshotView initWithSnapshotProvider:] */

void FUN_1068728c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1,
             PTR_s_initWithFrame_snapshotProvider__1125e2d48);
  return;
}



/* Entry: 1068728dc; end: 106872947; -[SCMapSnapshotView setBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068728dc(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  double dVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f38d8;
  lStack_30 = param_5;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setBounds__11263a898);
  func_0x00010bf20c00(param_5);
  dVar2 = ((double *)(param_5 + _DAT_112752254))[1];
  bVar1 = false;
  if ((param_3 == *(double *)(param_5 + _DAT_112752254)) &&
     (bVar1 = false, !NAN(param_4) && !NAN(dVar2))) {
    bVar1 = param_4 == dVar2;
  }
  if (!bVar1) {
    func_0x00010bed9700(param_5);
  }
  return;
}



/* Entry: 106872948; end: 1068729b3; -[SCMapSnapshotView setFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106872948(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  double dVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f38d8;
  lStack_30 = param_5;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setFrame__112645658);
  func_0x00010bf20c00(param_5);
  dVar2 = ((double *)(param_5 + _DAT_112752254))[1];
  bVar1 = false;
  if ((param_3 == *(double *)(param_5 + _DAT_112752254)) &&
     (bVar1 = false, !NAN(param_4) && !NAN(dVar2))) {
    bVar1 = param_4 == dVar2;
  }
  if (!bVar1) {
    func_0x00010bed9700(param_5);
  }
  return;
}



/* Entry: 1068729b4; end: 106872a7b; -[SCMapSnapshotView traitCollectionDidChange:] */

void FUN_1068729b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_38 = PTR_PTR_1126f38d8;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar3,param_3);
  uVar1 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd64c0();
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf07b60();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x2) {
      func_0x00010bed9700(param_1);
    }
  }
  return;
}



/* Entry: 106872a7c; end: 106872b7f; -[SCMapSnapshotView setCenterCoordinate:zoomLevel:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106872a7c(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  
  _objc_retain(param_6);
  pdVar1 = (double *)(param_4 + _DAT_112752258);
  if (1.1920928955078125e-07 <= ABS(param_1 - *pdVar1)) {
    bVar2 = true;
  }
  else {
    bVar2 = 1.1920928955078125e-07 <= ABS(param_2 - pdVar1[1]);
  }
  lVar3 = (long)_DAT_11275225c;
  if (1.1920928955078125e-07 <= ABS(param_3 - *(double *)(param_4 + lVar3))) {
    bVar2 = true;
  }
  if (param_6 != 0) {
    if ((!bVar2) && (*(char *)(param_4 + _DAT_112752260) != '\x01')) {
      (**(code **)(param_6 + 0x10))(param_6);
      goto LAB_106872b60;
    }
    func_0x00010bdc7440(param_4,param_5,param_6);
  }
  if (bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    *(double *)(param_4 + lVar3) = param_3;
    func_0x00010bed9700(param_4);
  }
LAB_106872b60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106872b80; end: 106872bef; -[SCMapSnapshotView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106872b80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112752264;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c1a9f00(param_1,param_2,0);
  lVar2 = (long)_DAT_112752258;
  uVar1 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
  ((undefined8 *)(param_1 + lVar2))[1] =
       *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
  *(undefined8 *)(param_1 + lVar2) = uVar1;
  *(undefined8 *)(param_1 + _DAT_11275225c) = 0xbff0000000000000;
  return;
}



/* Entry: 106872bf0; end: 106872c8f; -[SCMapSnapshotView _addLoadingCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106872bf0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar5 = (long)_DAT_112752268;
    lVar4 = *(long *)(param_1 + lVar5);
    if (lVar4 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bffc4a0();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar1;
      _objc_release(uVar3);
      lVar4 = *(long *)(param_1 + lVar5);
    }
    lVar5 = param_3;
    func_0x00010bf51e00(param_3);
    lVar2 = lVar5;
    _objc_retainBlock();
    func_0x00010befa120(lVar4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106872c90; end: 1068730f7; -[SCMapSnapshotView _updateImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106872c90(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined1 *param_6)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined **unaff_x28;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar1 = (double *)(param_5 + _DAT_112752254);
  func_0x00010bf20c00();
  bVar4 = false;
  if ((*pdVar1 == param_3) && (bVar4 = false, !NAN(pdVar1[1]) && !NAN(param_4))) {
    bVar4 = pdVar1[1] == param_4;
  }
  if (!bVar4) {
    func_0x00010c1a9f00(param_5);
  }
  func_0x00010bf20c00(param_5);
  *pdVar1 = param_3;
  pdVar1[1] = param_4;
  lVar16 = (long)_DAT_112752264;
  func_0x00010bf2dba0(*(undefined8 *)(param_5 + lVar16));
  puVar7 = *(undefined **)(param_5 + lVar16);
  *(undefined8 *)(param_5 + lVar16) = 0;
  _objc_release();
  bVar4 = false;
  if ((*pdVar1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar4 = false, !NAN(pdVar1[1]) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar4 = pdVar1[1] == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if ((!bVar4) && (lVar13 = (long)_DAT_11275225c, 0.0 < *(double *)(param_5 + lVar13))) {
    pdVar2 = (double *)(param_5 + _DAT_112752258);
    dVar18 = ABS(*pdVar2);
    bVar4 = false;
    bVar5 = true;
    bVar6 = false;
    if (1.1920928955078125e-07 < ABS(pdVar2[1])) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(dVar18)) {
        bVar4 = dVar18 < 1.1920928955078125e-07;
        bVar5 = dVar18 == 1.1920928955078125e-07;
        bVar6 = false;
      }
    }
    if ((!bVar5 && bVar4 == bVar6) && (_CLLocationCoordinate2DIsValid(), (int)puVar7 != 0)) {
      dVar17 = *(double *)(param_5 + lVar13);
      dVar19 = *pdVar2;
      dVar20 = pdVar1[1];
      dVar18 = 0.0;
      if (0.0 <= dVar17) {
        dVar18 = dVar17;
      }
      dVar17 = (double)NEON_fminnm(dVar18,0x4039800000000000);
      _exp2(dVar17);
      dVar18 = -85.0511287798066;
      if (-85.0511287798066 <= dVar19) {
        dVar18 = dVar19;
      }
      dVar18 = (double)NEON_fminnm(dVar18,0x40554345b1a549d7);
      dVar18 = dVar18 * 0.017453292519943295;
      _cos(dVar18);
      dVar19 = 0.2617993877991494;
      _tan(0x3fd0c152382d7365);
      puVar7 = PTR_PTR_1126c5a00;
      _objc_alloc();
      func_0x00010bffd4e0(*pdVar2,pdVar2[1],0,0,
                          (dVar20 * ((dVar18 * 6.283185307179586 * 6378137.0) / (dVar17 * 512.0)) *
                          0.5) / dVar19);
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110dad4b8;
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110e62718;
      puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      puStack_a0 = puVar7;
      func_0x00010c2971c0(*pdVar1,pdVar1[1]);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_98 = puVar8;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      lVar13 = *(long *)(param_5 + _DAT_112752250);
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_b8,param_5);
      unaff_x28 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_1068730f8;
      puStack_d0 = &UNK_110841fb0;
      param_6 = auStack_b8;
      lStack_c8 = param_5;
      _objc_copyWeak(auStack_c0);
      ppuVar10 = &puStack_e8;
      _objc_retainBlock();
      if (lVar13 == 0) {
        *(undefined1 *)(param_5 + _DAT_112752260) = 1;
        uVar11 = *(undefined8 *)(param_5 + _DAT_11275224c);
        lVar14 = param_5;
        func_0x00010c279540();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puStack_120 = (undefined *)unaff_x28;
        uStack_118 = 0xc2000000;
        pcStack_110 = FUN_106873238;
        puStack_108 = &UNK_11086e938;
        unaff_x28 = &puStack_120;
        param_6 = auStack_b8;
        _objc_copyWeak(auStack_f0);
        _objc_retain(puVar9);
        puStack_100 = puVar9;
        _objc_retain(ppuVar10);
        ppuStack_f8 = ppuVar10;
        func_0x00010bfc0240(*pdVar1,pdVar1[1]);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(param_5 + lVar16);
        *(undefined8 *)(param_5 + lVar16) = uVar11;
        _objc_release(uVar12);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(lVar14);
        _objc_release(ppuStack_f8);
        _objc_release(puStack_100);
        _objc_destroyWeak(auStack_f0);
      }
      else {
        func_0x00010c1a9f00(param_5);
        (*(code *)ppuVar10[2])(ppuVar10);
      }
      _objc_release(ppuVar10);
      _objc_destroyWeak(auStack_c0);
      _objc_destroyWeak(auStack_b8);
      _objc_release(lVar13);
      _objc_release(puVar9);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x28 + 6);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    __Unwind_Resume();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = (long)_DAT_112752268;
    lVar16 = *(long *)(*(long *)(puVar7 + 0x20) + lVar14);
    func_0x00010bf51e00();
    puVar7 = puVar7 + 0x28;
    _objc_loadWeakRetained();
    if (puVar7 != (undefined *)0x0) {
      func_0x00010c12adc0(*(undefined8 *)(puVar7 + lVar14));
      puVar7[_DAT_112752260] = 0;
      _objc_retain(lVar16);
      lVar14 = lVar16;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (lVar14 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar16);
          }
          (**(code **)(*(long *)(lVar15 * 8) + 0x10))();
          lVar15 = lVar15 + 1;
        } while (lVar14 != lVar15);
        lVar14 = lVar16;
        func_0x00010bf52a60();
      }
      _objc_release(lVar16);
    }
    _objc_release(puVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain(param_6);
    lVar13 = lVar16 + 0x30;
    _objc_loadWeakRetained();
    if (lVar13 != 0) {
      uVar11 = *(undefined8 *)(lVar13 + _DAT_112752264);
      *(undefined8 *)(lVar13 + _DAT_112752264) = 0;
      _objc_release(uVar11);
      func_0x00010c1a9f00(lVar13);
      if ((param_6 != (undefined1 *)0x0) && (*(long *)(lVar13 + _DAT_112752250) != 0)) {
        func_0x00010c1d0560();
      }
      (**(code **)(*(long *)(lVar16 + 0x28) + 0x10))();
    }
    _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_6);
    return;
  }
  return;
}



/* Entry: 1068730f8; end: 106873237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068730f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112752268;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010bf51e00();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar5));
    *(undefined1 *)(param_1 + _DAT_112752260) = 0;
    _objc_retain(lVar2);
    lVar5 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        (**(code **)(*(long *)(lVar6 * 8) + 0x10))();
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      lVar5 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar4 = lVar2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(lVar4 + _DAT_112752264);
    *(undefined8 *)(lVar4 + _DAT_112752264) = 0;
    _objc_release(uVar3);
    func_0x00010c1a9f00(lVar4);
    if ((param_2 != 0) && (*(long *)(lVar4 + _DAT_112752250) != 0)) {
      func_0x00010c1d0560();
    }
    (**(code **)(*(long *)(lVar2 + 0x28) + 0x10))();
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106873238; end: 1068732cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106873238(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112752264);
    *(undefined8 *)(lVar1 + _DAT_112752264) = 0;
    _objc_release(uVar2);
    func_0x00010c1a9f00(lVar1);
    if (param_2 != 0) {
      if (*(long *)(lVar1 + _DAT_112752250) != 0) {
        func_0x00010c1d0560();
      }
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068732d0; end: 1068732df; -[SCMapSnapshotView zoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1068732d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275225c);
}



/* Entry: 1068732e0; end: 1068732f3; -[SCMapSnapshotView centerCoordinate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1068732e0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112752258);
}



/* Entry: 1068732f4; end: 106873353; -[SCMapSnapshotView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068732f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112752264,0);
  _objc_storeStrong(param_1 + _DAT_112752268,0);
  _objc_storeStrong(param_1 + _DAT_11275224c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112752250,0);
  return;
}



/* Entry: 106873354; end: 1068733cb; -[SCMapDefaultPersonLocationStringsProvider initWithCurrentUserId:] */

undefined1 * FUN_106873354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f38e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068733cc; end: 1068733e3; -[SCMapDefaultPersonLocationStringsProvider bitmojiLabelLastSeenFromPersonLocations:showAgo:] */

void FUN_1068733cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1bbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cd618,PTR_s_bitmojiLabelLastSeenFromPersonLo_1125a48a0,param_3,
             *(undefined8 *)(param_1 + 8),param_4);
  return;
}


