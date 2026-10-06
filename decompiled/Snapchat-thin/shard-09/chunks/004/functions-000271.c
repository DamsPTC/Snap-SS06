/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106cd8170; end: 106cd820b; -[SCGallerySnapsTabController selectedGalleryItems] */

void FUN_106cd8170(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c159700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c1599e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106cd820c; end: 106cd8213; -[SCGallerySnapsTabController selectedSnapItems] */

void FUN_106cd820c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15a030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xe0),PTR_s_selectedSnapItems_112634228);
  return;
}



/* Entry: 106cd8214; end: 106cd821b; -[SCGallerySnapsTabController orderedSelectedSnapItems] */

void FUN_106cd8214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eccf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xe0),PTR_s_orderedSelectedSnapItems_112618d50);
  return;
}



/* Entry: 106cd821c; end: 106cd8223; -[SCGallerySnapsTabController scrollToGalleryItem:animated:] */

void FUN_106cd821c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_scrollToItem_animated__112632370);
  return;
}



/* Entry: 106cd8224; end: 106cd822f; -[SCGallerySnapsTabController scrollToTop] */

void FUN_106cd8224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1528f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_scrollToTopWithAnimated__112632458,0);
  return;
}



/* Entry: 106cd8230; end: 106cd8237; -[SCGallerySnapsTabController scrollBarTopOffset] */

undefined8 FUN_106cd8230(void)

{
  return 0;
}



/* Entry: 106cd8238; end: 106cd823f; -[SCGallerySnapsTabController isDragging] */

void FUN_106cd8238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c070eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_isDragging_1125f9db8)
  ;
  return;
}



/* Entry: 106cd8240; end: 106cd8247; -[SCGallerySnapsTabController isTracking] */

void FUN_106cd8240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c081670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_isTracking_1125fdfa8)
  ;
  return;
}



/* Entry: 106cd8248; end: 106cd824f; -[SCGallerySnapsTabController isEditing] */

undefined8 FUN_106cd8248(void)

{
  return 0;
}



/* Entry: 106cd8250; end: 106cd825b; -[SCGallerySnapsTabController endEditing] */

void FUN_106cd8250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endEditing__1125c2ba8,1);
  return;
}



/* Entry: 106cd825c; end: 106cd8263; -[SCGallerySnapsTabController isInLineSearchable] */

undefined8 FUN_106cd825c(void)

{
  return 1;
}



/* Entry: 106cd8264; end: 106cd826b; -[SCGallerySnapsTabController isShowingRankedSearchResults] */

void FUN_106cd8264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07df90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_isShowingRankedSearchResults_1125fd1f0);
  return;
}



/* Entry: 106cd826c; end: 106cd8273; -[SCGallerySnapsTabController shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController] */

undefined8 FUN_106cd826c(void)

{
  return 1;
}



/* Entry: 106cd8274; end: 106cd827b; -[SCGallerySnapsTabController shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController] */

undefined8 FUN_106cd8274(void)

{
  return 1;
}



/* Entry: 106cd827c; end: 106cd82fb; -[SCGallerySnapsTabController deeplinkToOperaWithDestinationInfo:] */

void FUN_106cd827c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106cd82fc;
  puStack_20 = &UNK_110848678;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106cd835c;
  puStack_48 = &UNK_1108450c8;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c0d40(param_3,param_2,&puStack_38,&puStack_60,&PTR___NSConcreteGlobalBlock_1109748f0
                     );
  return;
}



/* Entry: 106cd82fc; end: 106cd83a3;  */

void FUN_106cd82fc(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126d2130;
    func_0x00010c272280(PTR_PTR_1126d2130,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf90e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdf90d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s__deeplinkToGridLocationOnRegular_11255bdd0,param_2);
  return;
}



/* Entry: 106cd83a4; end: 106cd83a7;  */

void FUN_106cd83a4(void)

{
  return;
}



/* Entry: 106cd83a8; end: 106cd83ab; -[SCGallerySnapsTabController galleryViewWillAppear] */

void FUN_106cd83a8(void)

{
  return;
}



/* Entry: 106cd83ac; end: 106cd86e3; -[SCGallerySnapsTabController galleryViewDidAppear] */

void FUN_106cd83ac(undefined8 param_1,undefined8 param_2,double param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_4 + 0x30) == 0) {
    puVar1 = PTR_PTR_1126b0870;
    _objc_alloc_init();
    uVar13 = *(undefined8 *)(param_4 + 0x30);
    *(undefined **)(param_4 + 0x30) = puVar1;
    _objc_release(uVar13);
    func_0x00010c1d96a0(*(undefined8 *)(param_4 + 0x30));
    func_0x00010c219b60(*(undefined8 *)(param_4 + 0x30));
    func_0x00010c1a7f60(*(undefined8 *)(param_4 + 0x30));
    func_0x00010befbb60(*(undefined8 *)(param_4 + 0x20));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_4 + 0x30);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar13 = uVar2;
    func_0x00010bf493c0(-10.0 - param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_4 + 0x30);
    uStack_88 = uVar13;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010bf34860(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_4 + 0x30);
    uStack_80 = uVar6;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c2a5060(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493c0(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_4 + 0x30);
    uStack_78 = uVar9;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0720(PTR_PTR_1126b50b8);
    uVar11 = uVar10;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar13);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,param_4);
    puVar1 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106cd86e4;
    puStack_a0 = &UNK_1108434b0;
    unaff_x20 = &puStack_b8;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c0f7fc0(puVar1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_98);
    param_4 = auStack_90;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(param_4);
  param_4 = param_4 + 0x20;
  _objc_loadWeakRetained(param_4);
  func_0x00010be0d3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106cd86e4; end: 106cd870f;  */

void FUN_106cd86e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0d3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cd8710; end: 106cd87b7; -[SCGallerySnapsTabController _exposeSpectaclesStatusBarScope] */

void FUN_106cd8710(undefined8 param_1)

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
  pcStack_40 = FUN_106cd87b8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106cd87b8; end: 106cd894b;  */

void FUN_106cd87b8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = lVar1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar2);
    _objc_release(lVar3);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106cd894c;
    puStack_60 = &UNK_110845cb0;
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    ppuVar4 = &puStack_78;
    _objc_retainBlock(ppuVar4);
    uVar5 = *(undefined8 *)(lVar1 + 0x108);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c248a40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf23a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(lVar1 + 0x108);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c248a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106cd894c; end: 106cd89db;  */

void FUN_106cd894c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126aead0;
    _objc_alloc(PTR_PTR_1126aead0);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e4c0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106cd89dc; end: 106cd8af7; -[SCGallerySnapsTabController galleryViewDidDisappear] */

void FUN_106cd89dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double in_d3;
  double dVar6;
  
  dVar5 = *(double *)(param_1 + 0x280);
  dVar6 = -dVar5;
  if (0.0 <= dVar5) {
    dVar6 = dVar5;
  }
  dVar6 = *(double *)(param_1 + 0xe8) - dVar6;
  if ((dVar6 != 0.0) || (lVar1 = param_1, func_0x00010c0834c0(), (int)lVar1 != 0)) {
    func_0x00010c07b240();
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
    if (in_d3 != 0.0) {
      uVar2 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfbd160();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c3300(dVar6 / in_d3);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  dVar5 = *(double *)(param_1 + 0x280);
  dVar6 = -dVar5;
  if (0.0 <= dVar5) {
    dVar6 = dVar5;
  }
  *(double *)(param_1 + 0xe8) = dVar6;
  if (*(long *)(param_1 + 0xf8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfb4e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0xf8),PTR_s_forceReRankStories_1125cad30);
    return;
  }
  return;
}



/* Entry: 106cd8af8; end: 106cd8b1b; -[SCGallerySnapsTabController pageViewName] */

undefined8 FUN_106cd8af8(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c07b240();
  uVar1 = 0x7d;
  if (param_1 == 0) {
    uVar1 = 0x6c;
  }
  return uVar1;
}



/* Entry: 106cd8b1c; end: 106cd900b; -[SCGallerySnapsTabController indexPathForId:itemLevelIdentifier:] */

void FUN_106cd8b1c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uStack_1d0;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_106cd900c;
  uStack_100 = 0x106cd901c;
  uStack_f8 = 0;
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x3032000000;
  pcStack_138 = FUN_106cd900c;
  uStack_130 = 0x106cd901c;
  uStack_128 = 0;
  if (*(long *)(param_1 + 0xd0) != 0) {
    func_0x00010c1554e0();
    lVar2 = param_1;
    func_0x00010bdc9720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c156980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be2a0();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010bfa3240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = puStack_118[5];
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar11 = (undefined *)0x0;
      goto LAB_106cd8f3c;
    }
  }
  else {
    _objc_release(lVar1);
  }
  if (puStack_118[5] == 0) {
    uVar4 = *(ulong *)(param_1 + 0xa8);
    func_0x00010bfa3240();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_opt_class(PTR_PTR_1126d2138);
    func_0x00010be22640();
    uVar4 = uVar5;
    func_0x00010b5fd798(uVar5,param_3);
    if (uVar4 == 0x7fffffffffffffff) {
      lVar2 = param_4;
      func_0x00010c08fa60();
      if (lVar2 != 0) {
        for (uStack_1d0 = 0; uVar4 = uVar5, func_0x00010bf529e0(), uStack_1d0 < uVar4;
            uStack_1d0 = uStack_1d0 + 1) {
          uVar6 = uVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar11 = PTR_PTR_1126bf7e0;
          _objc_opt_class(PTR_PTR_1126bf7e0);
          uVar7 = uVar6;
          _objc_opt_isKindOfClass(uVar6,puVar11);
          uVar4 = uVar6;
          if ((uVar7 & 1) == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar6);
          uVar8 = uVar4;
          func_0x00010c0fa980();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (uVar7 != 0) {
            uVar10 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(uVar8);
              }
              uVar9 = *(undefined8 *)(uVar10 * 8);
              func_0x00010c09da80();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar9;
              func_0x00010c0720c0();
              _objc_release(uVar9);
              if ((int)uVar3 != 0) {
                puVar11 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
                func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar8);
                _objc_release(uVar4);
                _objc_release(uVar6);
                goto LAB_106cd8f34;
              }
              uVar10 = uVar10 + 1;
            } while (uVar7 != uVar10);
            uVar7 = uVar8;
            func_0x00010bf52a60();
          }
          _objc_release(uVar8);
          _objc_release(uVar4);
          _objc_release(uVar6);
        }
      }
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_106cd8f34:
    _objc_release(uVar5);
  }
  else {
    lVar2 = puStack_148[5];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar3 = puStack_148[5];
      func_0x00010c0e00e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
    puVar11 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010c1554e0(*(undefined8 *)(param_1 + 0xd0));
    func_0x00010bfed020(puVar11);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106cd8f3c:
  __Block_object_dispose(&uStack_150,8);
  _objc_release(uStack_128);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_150,8);
  lVar2 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  return;
}



/* Entry: 106cd900c; end: 106cd902b;  */

void FUN_106cd900c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106cd902c; end: 106cd909f;  */

void FUN_106cd902c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106cd90a0; end: 106cd9113;  */

void FUN_106cd90a0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfa34e0();
  lVar2 = param_2;
  if (lVar1 == 1) {
    func_0x00010bf53c00(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 0) {
    func_0x00010bf4c440(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106cd9114; end: 106cd9347; -[SCGallerySnapsTabController setVisible:] */

void FUN_106cd9114(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined **unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_1;
  if ((uint)(byte)param_1[0x268] != (uint)param_3) {
    param_1[0x268] = (char)param_3;
    func_0x00010c2237c0(*(undefined8 *)(param_1 + 0xf8));
    func_0x00010bddfde0(param_1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar3);
          }
          lVar7 = *(long *)(lStack_128 + lVar9 * 8);
          func_0x00010bdc5de0(param_1);
          puVar2 = PTR_DAT_1126a56c8;
          _objc_retain(lVar7);
          lVar5 = lVar7;
          func_0x00010010fab4(lVar7,puVar2);
          lVar1 = lVar7;
          if ((int)lVar5 == 0) {
            lVar1 = 0;
          }
          _objc_retain(lVar1);
          _objc_release(lVar7);
          if (lVar1 != 0) {
            if (param_1[0x268] == '\x01') {
              func_0x00010c24eda0(lVar7);
            }
            else {
              func_0x00010c256060(lVar7);
            }
          }
          _objc_release(lVar1);
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    func_0x00010c0834c0();
    unaff_x20 = (undefined **)param_3;
    if (((uint)param_3 & (uint)puVar6) == 1) {
      _objc_initWeak(auStack_138,param_1);
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_106cd9348;
      puStack_148 = &UNK_110849200;
      _objc_copyWeak(auStack_140,auStack_138);
      func_0x00010be71620(param_1);
      _objc_destroyWeak(auStack_140);
      puVar6 = auStack_138;
      _objc_destroyWeak();
      unaff_x20 = &puStack_160;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x20 + 0x20));
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  puVar6 = puVar6 + 0x20;
  _objc_loadWeakRetained();
  if (puVar6 != (undefined1 *)0x0) {
    func_0x00010bdcb7a0(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106cd9348; end: 106cd937b;  */

void FUN_106cd9348(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcb7a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cd937c; end: 106cd93d3; -[SCGallerySnapsTabController setLoading:] */

void FUN_106cd937c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x26a) != param_3) {
    *(char *)(param_1 + 0x26a) = (char)param_3;
    lVar1 = param_1;
    func_0x00010c0834c0();
    if (((int)lVar1 != 0) && (*(char *)(param_1 + 0x268) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010be71630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__performBatchedUpdateWithAnimate_112579f28,1,0);
      return;
    }
  }
  return;
}



/* Entry: 106cd93d4; end: 106cd95c7; -[SCGallerySnapsTabController _setupWithPlugins:] */

void FUN_106cd93d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_88 [8];
  ulong uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  uVar7 = 0;
  while( true ) {
    uVar3 = *(ulong *)(param_1 + 0x88);
    func_0x00010bf529e0();
    if (uVar3 <= uVar7) break;
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar1);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c0dfd40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_78);
    uVar6 = uVar1;
    uStack_80 = uVar7;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar5);
    func_0x00010befa120(puVar2);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_88);
    uVar7 = uVar7 + 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar2;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 106cd95c8; end: 106cd9677;  */

void FUN_106cd95c8(long param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106cd9678;
  puStack_50 = &UNK_110842a68;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  uStack_48 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106cd9678; end: 106cd96df;  */

void FUN_106cd9678(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1d04c0(*(undefined8 *)(lVar1 + 0x90),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x30));
    lVar2 = lVar1;
    func_0x00010c0834c0();
    if (((int)lVar2 != 0) && (*(char *)(lVar1 + 0x268) == '\x01')) {
      func_0x00010be71620(lVar1,param_2,1,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cd96e0; end: 106cd9803; -[SCGallerySnapsTabController updateGroups:] */

void FUN_106cd96e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 200);
  if (lVar2 != 0) {
    uVar1 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    _objc_release(uVar1);
    if ((int)lVar2 != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar1 = *(undefined8 *)(param_1 + 0xf8);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010bf224c0(uVar1);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106cd9804; end: 106cd9873;  */

void FUN_106cd9804(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c0ead40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286380();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cd9874; end: 106cd9877; -[SCGallerySnapsTabController reloadBanner] */

void FUN_106cd9874(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupBannerPlugin_112588508);
  return;
}



/* Entry: 106cd9878; end: 106cd987f; -[SCGallerySnapsTabController forceReload] */

void FUN_106cd9878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb4e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_forceReload_1125cad38);
  return;
}



/* Entry: 106cd9880; end: 106cd9887; -[SCGallerySnapsTabController forceUpdateFeaturedStoriesViewModel] */

void FUN_106cd9880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb5130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_forceUpdateFeaturedStoriesViewMo_1125cadf0);
  return;
}



/* Entry: 106cd9888; end: 106cd98bf; -[SCGallerySnapsTabController _setupWithBannerPlugins:] */

void FUN_106cd9888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beaad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupBannerPlugin_112588508);
  return;
}



/* Entry: 106cd98c0; end: 106cd9acf; -[SCGallerySnapsTabController _setupBannerPlugin] */

void FUN_106cd98c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  ppuVar7 = &puStack_150;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar9 = *(long *)(param_1 + 0x1e0);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        lVar3 = *(long *)(lStack_118 + lVar11 * 8);
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(lVar3);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar9;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  _objc_initWeak(auStack_128,param_1);
  puVar4 = PTR_PTR_1126ae558;
  func_0x00010beffb40();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_106cd9ad0;
  puStack_138 = &UNK_1108434e0;
  puVar5 = auStack_130;
  puVar6 = auStack_128;
  _objc_copyWeak();
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_128);
  __Unwind_Resume();
  _objc_retain(puVar6);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if ((((puVar6 != (undefined1 *)0x0) && (puVar1 != (undefined *)0x0)) &&
      (puVar5 = puVar6, func_0x00010bf529e0(), ppuVar7 == (undefined **)0x0)) &&
     (puVar5 != (undefined1 *)0x0)) {
    puVar5 = puVar6;
    FUN_106cebf9c();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar1 + 0xa0);
    *(undefined1 **)(puVar1 + 0xa0) = puVar5;
    _objc_release(uVar8);
    func_0x00010bed3e80(puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106cd9ad0; end: 106cd9b5b;  */

void FUN_106cd9ad0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((((param_2 != 0) && (param_1 != 0)) && (lVar1 = param_2, func_0x00010bf529e0(), param_3 == 0))
     && (lVar1 != 0)) {
    lVar1 = param_2;
    FUN_106cebf9c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    *(long *)(param_1 + 0xa0) = lVar1;
    _objc_release(uVar2);
    func_0x00010bed3e80(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cd9b5c; end: 106cd9c4f; -[SCGallerySnapsTabController _operaPresenterFindIndexPathForSnapId:] */

void FUN_106cd9b5c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    func_0x00010c0840e0();
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c1554e0(uVar2);
    func_0x00010bfed020(puVar3,param_2,lVar1 + -1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    lVar1 = *(long *)(param_1 + 0xd0);
    func_0x00010c0840e0(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c1554e0(uVar2);
    func_0x00010bfed020(puVar4,param_2,lVar1 + 1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010be6dd40(param_1,param_2,*(undefined8 *)(param_1 + 0xd0),param_3);
    if (((uVar5 & 1) == 0) &&
       (uVar5 = param_1, func_0x00010be6dd40(param_1,param_2,puVar3,param_3), (uVar5 & 1) == 0)) {
      func_0x00010be6dd40(param_1,param_2,puVar4,param_3);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cd9c50; end: 106cd9e37; -[SCGallerySnapsTabController _operaPresenterScrollToIndexPathIfNeeded:snapId:] */

bool FUN_106cd9c50(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar10 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = param_1;
  puVar9 = param_3;
  func_0x00010bebda40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    bVar1 = false;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = lVar7;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          uVar4 = *(undefined8 *)(lStack_128 + lVar12 * 8);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          if ((int)uVar5 != 0) {
            lVar3 = param_1;
            puVar10 = (undefined8 *)param_3;
            func_0x00010bee79c0();
            if ((int)lVar3 == 0) goto LAB_106cd9db0;
            _objc_retain(param_3);
            uVar5 = *(undefined8 *)(param_1 + 0xd0);
            *(undefined1 **)(param_1 + 0xd0) = param_3;
            _objc_release(uVar5);
            lVar3 = param_1;
            func_0x00010bebe740();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar3 != 0) goto LAB_106cd9db0;
            puVar10 = (undefined8 *)param_3;
            func_0x00010c1525a0(*(undefined8 *)(param_1 + 0x28),param_2,param_3,2,0);
            bVar1 = true;
            goto LAB_106cd9db4;
          }
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        lVar3 = lVar2;
        puVar10 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
LAB_106cd9db0:
    bVar1 = false;
LAB_106cd9db4:
    _objc_release(lVar2);
    puVar9 = (undefined1 *)puVar10;
  }
  _objc_release(lVar7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    puVar6 = puVar9;
    func_0x00010c1554e0();
    lVar7 = *(long *)(param_3 + 0x28);
    func_0x00010c0df2e0();
    puVar8 = puVar9;
    func_0x00010c0840e0(puVar9);
    _objc_release(puVar9);
    if ((long)puVar6 < lVar7) {
      lVar7 = *(long *)(param_3 + 0x28);
      func_0x00010c0deec0(lVar7,param_2,puVar6);
      bVar1 = (long)puVar8 < lVar7;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return bVar1;
}



/* Entry: 106cd9e38; end: 106cd9ebf; -[SCGallerySnapsTabController _validateIndexPathInBoundWithIndexPath:] */

bool FUN_106cd9e38(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c1554e0();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c0df2e0();
  lVar4 = param_3;
  func_0x00010c0840e0(param_3);
  _objc_release(param_3);
  if (lVar2 < lVar3) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c0deec0(lVar3,param_2,lVar2);
    bVar1 = lVar4 < lVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106cd9ec0; end: 106cd9f0f; -[SCGallerySnapsTabController _sourceViewOfOperaPresentingIndex] */

void FUN_106cd9ec0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf33b60(uVar2,param_2,*(undefined8 *)(param_1 + 0xd0));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cd9f10; end: 106cd9faf; -[SCGallerySnapsTabController _scrollToPresentingIndexIfNeeded] */

void FUN_106cd9f10(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106cd9fb0;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x000100c749e0(0x3d4ccccd,"APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 106cd9fb0; end: 106cd9ffb;  */

void FUN_106cd9fb0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bee79c0(lVar1,param_2,*(undefined8 *)(lVar1 + 0xd0));
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1525b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
               PTR_s_scrollToItemAtIndexPath_atScroll_112632388,
               *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0),2,0);
    return;
  }
  return;
}



/* Entry: 106cd9ffc; end: 106cda07b; -[SCGallerySnapsTabController operaPresenterWillOpenViewWithOperaItem:] */

void FUN_106cd9ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106cda07c;
  puStack_20 = &UNK_110953598;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106cda0f0;
  puStack_48 = &UNK_110850cc8;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bfe40(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_1109749c0,&puStack_60
                     );
  return;
}



/* Entry: 106cda07c; end: 106cda0eb;  */

void FUN_106cda07c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be802a0(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be6dd00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106cda0ec; end: 106cda0ef;  */

void FUN_106cda0ec(void)

{
  return;
}



/* Entry: 106cda0f0; end: 106cda14f;  */

void FUN_106cda0f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6dd00(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cda150; end: 106cda1cb; -[SCGallerySnapsTabController operaPresenterDidOpenView] */

void FUN_106cda150(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c3b30;
  _objc_alloc(PTR_PTR_1126c3b30);
  lVar2 = param_1;
  func_0x00010bebe740(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x270;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eafa0();
  func_0x00010bff7280(puVar1,param_2,lVar2);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cda1cc; end: 106cda223; -[SCGallerySnapsTabController operaPresenterDidPresent] */

void FUN_106cda1cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x270;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c267aa0();
  _objc_release(lVar1);
  if (*(char *)(param_1 + 0x268) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c19e230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFocused__1126452a8,0);
    return;
  }
  return;
}



/* Entry: 106cda224; end: 106cda293; -[SCGallerySnapsTabController operaPresenterDidDismiss] */

void FUN_106cda224(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x270;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2679e0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _objc_release(uVar2);
  if (*(char *)(param_1 + 0x268) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c19e230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFocused__1126452a8,1);
    return;
  }
  return;
}



/* Entry: 106cda294; end: 106cda29b; -[SCGallerySnapsTabController operaPresenterOverrideTransitionMode] */

undefined8 FUN_106cda294(void)

{
  return 4;
}



/* Entry: 106cda29c; end: 106cda3b3; -[SCGallerySnapsTabController _prioritizeTransferIfNeeded:] */

void FUN_106cda29c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c6c20();
  if ((uVar1 - 2 < 0xb) && (uVar1 = param_3, func_0x00010c079e60(), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x110);
      func_0x00010c248440();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219880(uVar2);
      _objc_release(puVar3);
      _objc_release(uVar1);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bee3f60();
                    /* WARNING: Could not recover jumptable at 0x00010be65010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__notifyScrollContentOffsetChange_112576da0);
  return;
}



/* Entry: 106cda3b4; end: 106cda3d7; -[SCGallerySnapsTabController scrollViewDidScroll:] */

void FUN_106cda3b4(undefined8 param_1)

{
  func_0x00010bee3f60();
                    /* WARNING: Could not recover jumptable at 0x00010be65010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyScrollContentOffsetChange_112576da0);
  return;
}



/* Entry: 106cda3d8; end: 106cda413; -[SCGallerySnapsTabController scrollViewWillBeginDragging:] */

void FUN_106cda3d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x270;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c267b20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be0e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fadeOutSpectaclesStatusBar_1125611c8);
  return;
}



/* Entry: 106cda414; end: 106cda47b; -[SCGallerySnapsTabController scrollViewDidEndDragging:willDecelerate:] */

void FUN_106cda414(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = param_1 + 0x270;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c267a20();
  _objc_release(lVar1);
  func_0x00010bed50e0(param_1);
  if ((param_4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0df70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fadeInSpectaclesStatusBar_112561178);
  return;
}



/* Entry: 106cda47c; end: 106cda4bf; -[SCGallerySnapsTabController scrollViewDidEndDecelerating:] */

void FUN_106cda47c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x270;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c267a00();
  _objc_release(lVar1);
  func_0x00010bed50e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be0df70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fadeInSpectaclesStatusBar_112561178);
  return;
}



/* Entry: 106cda4c0; end: 106cda5cf; -[SCGallerySnapsTabController scrollViewDidEndScrollingAnimation:] */

void FUN_106cda4c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0xd8);
  func_0x00010bf51e00();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xd8));
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))();
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  if ((*(long *)(lVar2 + 0xa0) != 0) && (lVar3 = lVar2, func_0x00010be44360(), (int)lVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be2c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s__handleMonetizationBannerAfterSc_112568b40);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be26410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s__handleBannerAfterScrolling_1125672a0);
  return;
}



/* Entry: 106cda5d0; end: 106cda613; -[SCGallerySnapsTabController _updateViewsFromScrolling] */

void FUN_106cda5d0(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0xa0) != 0) && (lVar1 = param_1, func_0x00010be44360(), (int)lVar1 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x00010be2c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleMonetizationBannerAfterSc_112568b40)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be26410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleBannerAfterScrolling_1125672a0);
  return;
}



/* Entry: 106cda614; end: 106cda83f; -[SCGallerySnapsTabController _handleBannerAfterScrolling] */

void FUN_106cda614(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if (*(long *)(param_1 + 0x150) != 0) {
    puVar1 = *(undefined **)(param_1 + 0xa0);
    func_0x00010c27ec40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfe1a40();
    if (((ulong)puVar2 & 1) == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar1);
        return;
      }
      goto LAB_106cda83c;
    }
    lVar3 = *(long *)(param_1 + 0x150);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x20);
    _objc_release();
    _objc_release();
    puVar2 = puVar1;
    if (((lVar3 == lVar5) && (*(long *)(param_1 + 0x158) != 0)) && (*(long *)(param_1 + 0x160) != 0)
       ) {
      dVar6 = *(double *)(param_1 + 0x40);
      dVar7 = dVar6;
      if (dVar6 <= 0.0) {
        dVar7 = 0.0;
      }
      func_0x00010c151ea0();
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      puVar2 = param_1;
      if (dVar7 != dVar6) {
        if (dVar6 <= dVar7) {
          if (dVar7 <= dVar6) goto LAB_106cda694;
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar1);
          _objc_release(puVar2);
          puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf65be0(puVar1);
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf65be0(puVar1);
          _objc_release(puVar2);
          puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar1);
        }
        _objc_release();
      }
    }
  }
LAB_106cda694:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
LAB_106cda83c:
  ___stack_chk_fail();
  if (puVar2[0x169] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be2c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2c6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106cda840; end: 106cda853; -[SCGallerySnapsTabController _handleMonetizationBannerAfterScrolling] */

void FUN_106cda840(long param_1)

{
  if (*(char *)(param_1 + 0x169) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be2c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleMonetizationBannerAfterSc_112568b50)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2c6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleMonetizationBannerAfterSc_112568b48);
  return;
}



/* Entry: 106cda854; end: 106cdad6f; -[SCGallerySnapsTabController _handleMonetizationBannerAfterScrollingLegacy] */

void FUN_106cda854(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  if (*(long *)(param_2 + 0x150) != 0) {
    puVar1 = *(undefined **)(param_2 + 0xa0);
    func_0x00010c27ec40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfe1a40();
    if (((ulong)puVar2 & 1) == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar1);
        return;
      }
      goto LAB_106cdad6c;
    }
    lVar3 = *(long *)(param_2 + 0x150);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_2 + 0x20);
    _objc_release();
    _objc_release();
    if ((((lVar3 == lVar7) && (*(long *)(param_2 + 0x158) != 0)) &&
        (*(long *)(param_2 + 0x160) != 0)) && ((param_2[0x26b] & 1) == 0)) {
      uVar4 = *(ulong *)(param_2 + 0x260);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f3c0();
      _objc_release(uVar4);
      if ((uVar5 & 1) == 0) {
        dVar8 = *(double *)(param_2 + 0x40);
        dVar9 = dVar8;
        if (dVar8 <= 0.0) {
          dVar9 = 0.0;
        }
        puVar1 = param_2;
        func_0x00010c151ea0();
        if (dVar8 <= 0.0) {
          dVar8 = 0.0;
        }
        if (dVar9 != dVar8) {
          if (dVar8 <= dVar9) {
            if ((dVar8 < dVar9) && (param_2[0x168] == '\x01')) {
              puVar1 = *(undefined **)(param_2 + 0x150);
              func_0x00010bf01b40();
              if (dVar8 < 1.0) {
                param_2[0x168] = 0;
                puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
                puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010beef8c0(puVar1);
                _objc_release(puVar2);
                puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
                puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf65be0(puVar1);
                _objc_release(puVar2);
                goto LAB_106cdad64;
              }
            }
          }
          else if ((param_2[0x168] & 1) == 0) {
            puVar1 = *(undefined **)(param_2 + 0x150);
            func_0x00010bf01b40();
            if (0.0 < dVar8) {
              param_2[0x168] = 1;
              puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
              puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf65be0(puVar1);
              _objc_release(puVar2);
              puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
              puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010beef8c0(puVar1);
              _objc_release(puVar2);
              goto LAB_106cdad64;
            }
          }
        }
      }
      else {
        puVar1 = param_2;
        func_0x00010c151ea0();
        if (param_1 <= 0.0) {
          param_1 = 0.0;
        }
        if (param_1 <= 20.0) {
          if (param_2[0x168] != 0) {
            puVar1 = *(undefined **)(param_2 + 0x150);
            func_0x00010bf01b40();
            if (param_1 < 1.0) {
              param_2[0x168] = 0;
              puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
              puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010beef8c0(puVar1);
              _objc_release(puVar2);
              puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
              puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf65be0(puVar1);
              _objc_release(puVar2);
              goto LAB_106cdad64;
            }
          }
        }
        else if ((param_2[0x168] & 1) == 0) {
          puVar1 = *(undefined **)(param_2 + 0x150);
          func_0x00010bf01b40();
          if (0.0 < param_1) {
            param_2[0x168] = 1;
            puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf65be0(puVar1);
            _objc_release(puVar2);
            puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef8c0(puVar1);
            _objc_release(puVar2);
LAB_106cdad64:
            puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
            func_0x00010bf03400(0x3fd3333333333333);
          }
        }
      }
    }
  }
  puVar2 = puVar1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
LAB_106cdad6c:
  ___stack_chk_fail();
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(puVar2 + 0x20) + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(puVar2 + 0x20) + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106cdad70; end: 106cdae3f;  */

void FUN_106cdad70(long param_1)

{
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106cdae40; end: 106cdaf6f; -[SCGallerySnapsTabController _handleMonetizationBannerAfterScrollingWithScrollStateFix] */

void FUN_106cdae40(double param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  if (*(long *)(param_2 + 0x150) != 0) {
    uVar4 = *(ulong *)(param_2 + 0xa0);
    func_0x00010c27ec40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfe1a40();
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
    lVar6 = *(long *)(param_2 + 0x150);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_2 + 0x20);
    _objc_release();
    _objc_release(uVar4);
    if ((((lVar6 == lVar7) && (*(long *)(param_2 + 0x158) != 0)) &&
        (*(long *)(param_2 + 0x160) != 0)) && ((*(byte *)(param_2 + 0x26b) & 1) == 0)) {
      uVar4 = *(ulong *)(param_2 + 0x260);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f3c0();
      _objc_release(uVar4);
      if ((uVar5 & 1) == 0) {
        dVar8 = *(double *)(param_2 + 0x40);
        dVar9 = dVar8;
        if (dVar8 <= 0.0) {
          dVar9 = 0.0;
        }
        func_0x00010c151ea0(param_2);
        if (dVar8 <= 0.0) {
          dVar8 = 0.0;
        }
        if (dVar9 == dVar8) {
          return;
        }
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar8) && !NAN(dVar9)) {
          bVar1 = dVar8 < dVar9;
          bVar2 = dVar8 == dVar9;
          bVar3 = false;
        }
      }
      else {
        func_0x00010c151ea0(param_2);
        if (param_1 <= 0.0) {
          param_1 = 0.0;
        }
        bVar3 = NAN(param_1);
        bVar2 = param_1 == 20.0;
        bVar1 = param_1 < 20.0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bea5b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s__setMonetizationBannerHidden__112587088,!bVar2 && bVar1 == bVar3);
      return;
    }
  }
  return;
}



/* Entry: 106cdaf70; end: 106cdafb7; -[SCGallerySnapsTabController _sectionInsetTop] */

undefined8 FUN_106cdaf70(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c156120();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106cdafb8; end: 106cdafef; -[SCGallerySnapsTabController _contentInsetsWithInsets:] */

double FUN_106cdafb8(double param_1)

{
  func_0x000107e857e4();
  return param_1 + 2.0;
}



/* Entry: 106cdaff0; end: 106cdb047; -[SCGallerySnapsTabController _updateWithScrollContentInset] */

void FUN_106cdaff0(long param_1)

{
  func_0x00010c1f7ba0(*(undefined8 *)(param_1 + 0x280),*(undefined8 *)(param_1 + 0x288),
                      *(undefined8 *)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x298),
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010bde7cc0(*(undefined8 *)(param_1 + 0x280),*(undefined8 *)(param_1 + 0x288),
                      *(undefined8 *)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x298),param_1);
  func_0x00010c181f80(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be65010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyScrollContentOffsetChange_112576da0);
  return;
}



/* Entry: 106cdb048; end: 106cdb0cb; -[SCGallerySnapsTabController _notifyScrollContentOffsetChange] */

void FUN_106cdb048(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010c151ea0();
  if (*(double *)(param_2 + 0x40) != param_1) {
    *(double *)(param_2 + 0x40) = param_1;
    dVar1 = -param_1;
    if (0.0 <= param_1) {
      dVar1 = param_1;
    }
    dVar2 = *(double *)(param_2 + 0xe8);
    if (*(double *)(param_2 + 0xe8) <= dVar1) {
      dVar2 = dVar1;
    }
    *(double *)(param_2 + 0xe8) = dVar2;
    param_2 = param_2 + 0x270;
    _objc_loadWeakRetained(param_2);
    func_0x00010c2679c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106cdb0cc; end: 106cdb10f; -[SCGallerySnapsTabController _notifyDisplayedContentDidChange] */

void FUN_106cdb0cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x270;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf529e0(uVar2);
  func_0x00010c267780(lVar1,param_2,param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cdb110; end: 106cdb36f; -[SCGallerySnapsTabController _updateCellsScreenPosition] */

void FUN_106cdb110(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_5;
  if (*(char *)(param_5 + 0x269) == '\x01') {
    uVar2 = *(ulong *)(param_5 + 0x28);
    func_0x00010c070ea0();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_5 + 0x28);
      func_0x00010c070400();
      if ((uVar2 & 1) == 0) {
        uVar2 = *(ulong *)(param_5 + 0x28);
        func_0x00010bfed1a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
        dVar11 = param_1;
        func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
        _CGRectGetHeight();
        _CGRectInset(param_1,param_2,param_3,param_4,0,dVar11 * 0.25);
        uVar9 = param_2;
        uVar14 = param_3;
        uVar16 = param_4;
        func_0x00010bddfde0(param_5);
        dVar11 = 0.0;
        _objc_retain(uVar2);
        uVar3 = uVar2;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (uVar3 != 0) {
          uVar10 = 0;
          do {
            dVar12 = dVar11;
            uVar13 = uVar9;
            uVar15 = uVar14;
            uVar17 = uVar16;
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(uVar2);
              dVar12 = dVar11;
              uVar13 = uVar9;
              uVar15 = uVar14;
              uVar17 = uVar16;
            }
            uVar4 = *(undefined8 *)(param_5 + 0x28);
            func_0x00010c08c980(uVar4);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = *(long *)(param_5 + 0x28);
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010010fab4();
            dVar11 = dVar12;
            uVar9 = uVar13;
            uVar14 = uVar15;
            uVar16 = uVar17;
            if (lVar5 != 0 && (int)lVar6 != 0) {
              func_0x00010bfb68e0(uVar4);
              dVar11 = param_1;
              uVar9 = param_2;
              uVar14 = param_3;
              uVar16 = param_4;
              _CGRectContainsRect(param_1,param_2,param_3,param_4,dVar12,uVar13,uVar15,uVar17);
              func_0x00010bdf9980(param_5);
              func_0x00010c29d2c0(lVar5);
            }
            func_0x00010bdc5de0(param_5);
            _objc_release(lVar5);
            _objc_release(uVar4);
            uVar10 = uVar10 + 1;
          } while (uVar3 != uVar10);
          uVar3 = uVar2;
          func_0x00010bf52a60();
        }
        _objc_release(uVar2);
        func_0x00010bdcb7a0(param_5);
        _objc_release();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(uVar2 + 0x138);
  *(undefined **)(uVar2 + 0x138) = puVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 106cdb370; end: 106cdb3ab; -[SCGallerySnapsTabController _clearAppearingHeaderSet] */

void FUN_106cdb370(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  *(undefined **)(param_1 + 0x138) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106cdb3ac; end: 106cdb4a7; -[SCGallerySnapsTabController _addAllVisibleHeaderCells] */

void FUN_106cdb3ac(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar8 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_100;
    do {
      lVar11 = 0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bdc5de0(param_1);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar2;
      puVar8 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar4 = PTR_PTR_1126d2140;
  _objc_opt_class(PTR_PTR_1126d2140);
  puVar5 = (undefined1 *)puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar4);
  puVar1 = (undefined1 *)puVar8;
  if (((ulong)puVar5 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 != (undefined1 *)0x0) {
    uVar10 = *(undefined8 *)(lVar2 + 0x138);
    puVar5 = (undefined1 *)puVar8;
    func_0x00010bfc3ca0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar10);
    _objc_release(puVar5);
  }
  puVar4 = PTR_PTR_1126cfc70;
  _objc_retain(puVar8);
  _objc_opt_class(puVar4);
  puVar6 = (undefined1 *)puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar4);
  puVar5 = (undefined1 *)puVar8;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar8);
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)puVar8;
    func_0x00010bfc3ca0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar6 != (undefined1 *)0x0) &&
       (puVar7 = puVar6, func_0x00010c08fa60(), puVar7 != (undefined1 *)0x0)) {
      func_0x00010befa120(*(undefined8 *)(lVar2 + 0x138));
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 106cdb4a8; end: 106cdb5c3; -[SCGallerySnapsTabController _addAppearingSectionTitleIfNeededForCell:] */

void FUN_106cdb4a8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d2140;
  _objc_opt_class(PTR_PTR_1126d2140);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x138);
    uVar3 = param_3;
    func_0x00010bfc3ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126cfc70;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar3 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  if (uVar3 != 0) {
    uVar4 = param_3;
    func_0x00010bfc3ca0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar4 != 0) && (uVar5 = uVar4, func_0x00010c08fa60(), uVar5 != 0)) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x138));
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cdb5c4; end: 106cdb5ff; -[SCGallerySnapsTabController _announceClusterAppearingIfNeeded] */

void FUN_106cdb5c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x138);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3e7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xf8),PTR_s_clusterTitlesDidAppear__1125ad390,
               *(undefined8 *)(param_1 + 0x138));
    return;
  }
  return;
}



/* Entry: 106cdb600; end: 106cdb67f; -[SCGallerySnapsTabController _delayForStreamingPrefetchSec] */

double FUN_106cdb600(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = 0.0;
  if (0.0 < *(double *)(param_1 + 0xe8)) {
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    fVar3 = 0.0;
    func_0x00010bfb2cc0(0);
    dVar4 = (double)fVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  return dVar4;
}



/* Entry: 106cdb680; end: 106cdb6eb; -[SCGallerySnapsTabController _fadeOutSpectaclesStatusBar] */

void FUN_106cdb680(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_106cdb6ec;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  }
  return;
}



/* Entry: 106cdb6ec; end: 106cdb6fb;  */

void FUN_106cdb6ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106cdb6fc; end: 106cdb767; -[SCGallerySnapsTabController _fadeInSpectaclesStatusBar] */

void FUN_106cdb6fc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_106cdb768;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  }
  return;
}



/* Entry: 106cdb768; end: 106cdb777;  */

void FUN_106cdb768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106cdb778; end: 106cdb7f3; -[SCGallerySnapsTabController plusSubscribeDidDismiss] */

void FUN_106cdb778(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x1f0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x1f0;
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



/* Entry: 106cdb7f4; end: 106cdb91b; -[SCGallerySnapsTabController gallerySnapsTabDataSource:didUpdateFeaturedStoriesViewModel:] */

void FUN_106cdb7f4(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c07b240();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010bfe1ec0();
    if (((uVar1 & 1) == 0) && (param_4 != *(long *)(param_1 + 0xa8))) {
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)(param_1 + 0xa8);
      *(long *)(param_1 + 0xa8) = param_4;
      _objc_release(uVar2);
      uVar1 = param_1;
      func_0x00010c0834c0();
      if (((int)uVar1 != 0) && (*(char *)(param_1 + 0x268) == '\x01')) {
        _objc_initWeak(auStack_38,param_1);
        _objc_copyWeak(auStack_40,auStack_38);
        func_0x00010be71620(param_1);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
      }
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cdb91c; end: 106cdb99b;  */

void FUN_106cdb91c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x120) != 0)) {
    lVar1 = param_1;
    func_0x00010be28120();
    if ((int)lVar1 == 0) {
      ppuVar3 = &PTR_PTR_110ac58c8;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = 0;
      _objc_release(uVar2);
      ppuVar3 = &PTR_PTR_110ac58b8;
    }
    func_0x00010bfb0140(PTR_PTR_1126b24e0,param_2,&PTR____CFConstantStringClassReference_110ef89f8,
                        *ppuVar3,*(undefined8 *)(param_1 + 0x250));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cdb99c; end: 106cdbdf7; -[SCGallerySnapsTabController gallerySnapsTabDataSource:didUpdateClusterViewModels:isUpdatingFromReclustering:] */

void FUN_106cdb99c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined1 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  ulong uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = param_4;
    func_0x00010bf51e00();
    uVar2 = param_3;
    func_0x00010c09ff40();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_countByEnumeratingWithState_obje_1125b2440);
    if ((uVar4 & 1) != 0) {
      dVar13 = *(double *)(param_1 + 0x218);
      if (dVar13 == -1.0) {
        _CACurrentMediaTime();
        *(double *)(param_1 + 0x218) = dVar13;
        func_0x00010bfb10a0(param_3);
        dVar14 = *(double *)(param_1 + 0x210);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        uVar7 = param_3;
        func_0x00010c0de680();
        *(undefined8 *)(param_1 + 0x228) = uVar7;
        lVar11 = param_1;
        func_0x00010be65460(param_1);
        _objc_retainAutoreleasedReturnValue();
        FUN_106cefbbc(*(undefined8 *)(param_1 + 0x118),lVar11,puVar6,
                      (long)((dVar13 - dVar14) * 1000.0));
        FUN_106cefdec(*(undefined8 *)(param_1 + 0x118),lVar11,puVar6,
                      (long)((*(double *)(param_1 + 0x218) - dVar13) * 1000.0));
        _objc_release(lVar11);
        _objc_release(puVar6);
      }
      puStack_128 = &uStack_130;
      uStack_130 = 0;
      uStack_120 = 0x2020000000;
      uStack_118 = 0;
      lStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      _objc_retain(uVar1);
      uVar4 = uVar1;
      func_0x00010bf52a60();
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      if (uVar4 != 0) {
        lVar11 = *plStack_160;
        do {
          uVar10 = 0;
          do {
            if (*plStack_160 != lVar11) {
              _objc_enumerationMutation(uVar1);
            }
            uVar12 = *(ulong *)(lStack_168 + uVar10 * 8);
            if (uVar12 != 0) {
              puVar6 = PTR_PTR_1126b2690;
              _objc_opt_class(PTR_PTR_1126b2690);
              uVar8 = uVar12;
              _objc_opt_isKindOfClass(uVar12,puVar6);
              if ((uVar8 & 1) != 0) {
                func_0x00010c156980(uVar12);
                _objc_retainAutoreleasedReturnValue();
                puStack_1a0 = puVar5;
                uStack_198 = 0xc2000000;
                pcStack_190 = FUN_106cdbdfc;
                puStack_188 = &UNK_110974a20;
                _objc_retain(puVar3);
                puStack_178 = &uStack_130;
                puStack_1c8 = puVar5;
                uStack_1c0 = 0xc2000000;
                pcStack_1b8 = FUN_106cdbf90;
                puStack_1b0 = &UNK_110974a50;
                puStack_180 = puVar3;
                _objc_retain(puVar3);
                puStack_1a8 = puVar3;
                func_0x00010c0be2a0(uVar12);
                _objc_release(uVar12);
                _objc_release(puStack_1a8);
                _objc_release(puStack_180);
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar4 != uVar10);
          uVar4 = uVar1;
          func_0x00010bf52a60();
        } while (uVar4 != 0);
      }
      _objc_release(uVar1);
      if ((*(char *)(param_1 + 600) == '\x01') && (*(char *)(puStack_128 + 3) == '\x01')) {
        *(undefined1 *)(param_1 + 600) = 0;
      }
      puVar6 = puVar3;
      func_0x00010bf51e00();
      puStack_210 = puVar5;
      uStack_208 = 0xc2000000;
      pcStack_200 = FUN_106cdc0f4;
      puStack_1f8 = &UNK_1108b0960;
      _objc_retain(uVar1);
      uStack_1f0 = uVar1;
      _objc_retain(puVar6);
      ppuVar9 = &puStack_210;
      puStack_1e8 = puVar6;
      lStack_1e0 = param_1;
      uStack_1d8 = uVar2;
      uStack_1d0 = param_5;
      _objc_retainBlock(ppuVar9);
      func_0x0001000d76cc("APPSTORE",ppuVar9);
      _objc_release(ppuVar9);
      _objc_release(puStack_1e8);
      _objc_release(uStack_1f0);
      _objc_release(puVar6);
      __Block_object_dispose(&uStack_130,8);
    }
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_130,8);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 106cdbdf8; end: 106cdbdfb;  */

void FUN_106cdbdf8(void)

{
  return;
}



/* Entry: 106cdbdfc; end: 106cdbf7f;  */

void FUN_106cdbdfc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar6 = *(undefined8 *)(lVar5 * 8);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar7);
      func_0x00010c0bff00(uVar6);
      _objc_release(uVar7);
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar2 != 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + 0x20),PTR_s_addObject__11259c1f0,lVar3);
  return;
}



/* Entry: 106cdbf80; end: 106cdbf8f;  */

void FUN_106cdbf80(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106cdbf90; end: 106cdc0f3;  */

void FUN_106cdbf90(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_168 [8];
  undefined1 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  ulong uStack_138;
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
  func_0x00010bf51e00();
  if (param_2 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = param_2,
       _objc_opt_respondsToSelector(param_2,PTR_s_countByEnumeratingWithState_obje_1125b2440),
       (uVar3 & 1) != 0)) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      _objc_retain(param_2);
      uVar3 = param_2;
      func_0x00010bf52a60();
      if (uVar3 != 0) {
        lVar6 = *plStack_110;
        do {
          uVar7 = 0;
          do {
            if (*plStack_110 != lVar6) {
              _objc_enumerationMutation(param_2);
            }
            uVar4 = *(undefined8 *)(lStack_118 + uVar7 * 8);
            unaff_x22 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010bf0af00(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(unaff_x22);
            _objc_release(uVar4);
            uVar7 = uVar7 + 1;
          } while (uVar3 != uVar7);
          uVar3 = param_2;
          func_0x00010bf52a60();
          unaff_x21 = 0;
        } while (uVar3 != 0);
      }
      _objc_release(param_2);
    }
  }
  uVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106cdc0f4;
  uVar7 = *(ulong *)(uVar3 + 0x20);
  if ((uVar7 != 0) && (*(long *)(uVar3 + 0x28) != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_150 = unaff_x22;
    uStack_148 = unaff_x21;
    lStack_140 = param_1;
    uStack_138 = param_2;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_opt_isKindOfClass(uVar7,puVar2);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar3 + 0x28);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_opt_isKindOfClass(uVar7,puVar2);
      if ((uVar7 & 1) != 0) {
        uVar5 = *(undefined8 *)(uVar3 + 0x20);
        lVar6 = *(long *)(uVar3 + 0x30);
        _objc_retain(uVar5);
        uVar4 = *(undefined8 *)(lVar6 + 0x68);
        *(undefined8 *)(lVar6 + 0x68) = uVar5;
        _objc_release(uVar4);
        *(undefined8 *)(*(long *)(uVar3 + 0x30) + 0x70) = *(undefined8 *)(uVar3 + 0x38);
        uVar4 = *(undefined8 *)(uVar3 + 0x28);
        func_0x00010bf51e00();
        uVar5 = *(undefined8 *)(*(long *)(uVar3 + 0x30) + 0x80);
        *(undefined8 *)(*(long *)(uVar3 + 0x30) + 0x80) = uVar4;
        _objc_release(uVar5);
        iVar1 = (int)*(undefined8 *)(uVar3 + 0x30);
        func_0x00010c0834c0();
        lVar6 = *(long *)(uVar3 + 0x30);
        if ((iVar1 == 0) || ((*(byte *)(lVar6 + 0x268) & 1) == 0)) {
          if (*(char *)(uVar3 + 0x40) == '\x01') {
            func_0x00010be64840(lVar6);
            lVar6 = *(long *)(uVar3 + 0x30);
          }
                    /* WARNING: Could not recover jumptable at 0x00010be56cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (lVar6,PTR_s__logPageLoadMetricsForPageLoadCo_1125734d0);
          return;
        }
        _objc_initWeak(auStack_158);
        uVar4 = *(undefined8 *)(uVar3 + 0x30);
        _objc_copyWeak(auStack_168,auStack_158);
        uStack_160 = *(undefined1 *)(uVar3 + 0x40);
        func_0x00010be71620(uVar4);
        _objc_destroyWeak(auStack_168);
        _objc_destroyWeak(auStack_158);
      }
    }
  }
  return;
}



/* Entry: 106cdc0f4; end: 106cdc27b;  */

void FUN_106cdc0f4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  if ((uVar4 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_opt_isKindOfClass(uVar4,puVar2);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x28);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_opt_isKindOfClass(uVar4,puVar2);
      if ((uVar4 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        lVar6 = *(long *)(param_1 + 0x30);
        _objc_retain(uVar5);
        uVar3 = *(undefined8 *)(lVar6 + 0x68);
        *(undefined8 *)(lVar6 + 0x68) = uVar5;
        _objc_release(uVar3);
        *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70) = *(undefined8 *)(param_1 + 0x38);
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf51e00();
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x80);
        *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x80) = uVar3;
        _objc_release(uVar5);
        iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
        func_0x00010c0834c0();
        lVar6 = *(long *)(param_1 + 0x30);
        if ((iVar1 == 0) || ((*(byte *)(lVar6 + 0x268) & 1) == 0)) {
          if (*(char *)(param_1 + 0x40) == '\x01') {
            func_0x00010be64840(lVar6);
            lVar6 = *(long *)(param_1 + 0x30);
          }
                    /* WARNING: Could not recover jumptable at 0x00010be56cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (lVar6,PTR_s__logPageLoadMetricsForPageLoadCo_1125734d0);
          return;
        }
        _objc_initWeak(auStack_38);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        _objc_copyWeak(auStack_48,auStack_38);
        uStack_40 = *(undefined1 *)(param_1 + 0x40);
        func_0x00010be71620(uVar3);
        _objc_destroyWeak(auStack_48);
        _objc_destroyWeak(auStack_38);
      }
    }
  }
  return;
}



/* Entry: 106cdc27c; end: 106cdc307;  */

void FUN_106cdc27c(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be65000(lVar1);
    func_0x00010be56cc0(lVar1);
    if ((param_2 != 0) && (*(char *)(param_1 + 0x28) == '\x01')) {
      func_0x00010be64840(lVar1);
      func_0x00010bddfde0(lVar1);
      func_0x00010bdc5d20(lVar1);
      func_0x00010bdcb7a0(lVar1);
      func_0x00010bed3e80(lVar1);
      func_0x00010be5a020(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cdc308; end: 106cdc65b; -[SCGallerySnapsTabController gallerySnapsTabDataSource:didUpdateSnapsGroupViewModels:] */

void FUN_106cdc308(undefined **param_1,undefined1 *param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_278;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  puVar1 = param_1[0xf];
  param_1[0xf] = param_4;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(param_4);
  puStack_278 = param_4;
  func_0x00010bf52a60();
  pcVar8 = (code *)param_1;
  if (puStack_278 != (undefined *)0x0) {
    lVar5 = *plStack_1c0;
    pcVar8 = FUN_106cdc65c;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_1c0 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        lVar2 = *(long *)(lStack_1c8 + (long)puVar7 * 8);
        lStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        plStack_200 = (long *)0x0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        func_0x00010bf343c0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar10 = *plStack_200;
          do {
            lVar9 = 0;
            do {
              if (*plStack_200 != lVar10) {
                _objc_enumerationMutation(lVar2);
              }
              uVar11 = *(undefined8 *)(lStack_208 + lVar9 * 8);
              puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_230 = 0xc2000000;
              pcStack_228 = FUN_106cdc65c;
              puStack_220 = &UNK_110953548;
              _objc_retain(puVar1);
              puStack_218 = puVar1;
              func_0x00010c0bff00(uVar11);
              _objc_release(puStack_218);
              lVar9 = lVar9 + 1;
            } while (lVar3 != lVar9);
            lVar3 = lVar2;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        puVar7 = puVar7 + 1;
      } while (puVar7 != puStack_278);
      puStack_278 = param_4;
      func_0x00010bf52a60();
    } while (puStack_278 != (undefined *)0x0);
  }
  _objc_release(param_4);
  puVar7 = puVar1;
  func_0x00010bf51e00();
  puVar6 = param_1[0x10];
  param_1[0x10] = puVar7;
  _objc_release(puVar6);
  ppuVar4 = param_1;
  func_0x00010c0834c0();
  if (((int)ppuVar4 == 0) || (((ulong)param_1[0x4d] & 1) == 0)) {
    func_0x00010be64840(param_1);
    func_0x00010be56cc0(param_1);
  }
  else {
    _objc_initWeak(auStack_240,param_1);
    puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_260 = 0xc2000000;
    pcStack_258 = FUN_106cdc66c;
    puStack_250 = &UNK_110849200;
    pcVar8 = (code *)&puStack_268;
    param_2 = auStack_240;
    _objc_copyWeak(auStack_248,param_2);
    func_0x00010be71620(param_1);
    _objc_destroyWeak(auStack_248);
    _objc_destroyWeak(auStack_240);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined **)((long)pcVar8 + 0x20));
  _objc_destroyWeak(auStack_240);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106cdc65c; end: 106cdc66b;  */

void FUN_106cdc65c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106cdc66c; end: 106cdc6b7;  */

void FUN_106cdc66c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be56cc0(param_1);
    func_0x00010be65000(param_1);
    func_0x00010be64840(param_1);
    func_0x00010bed3e80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cdc6b8; end: 106cdc7ab; -[SCGallerySnapsTabController gallerySnapsTabDataSource:didUpdateLoadingStatus:] */

void FUN_106cdc6b8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(byte *)(param_1 + 0x60) != param_4) {
    *(char *)(param_1 + 0x60) = (char)param_4;
    lVar1 = param_1;
    func_0x00010c0834c0();
    if (((int)lVar1 != 0) && (*(char *)(param_1 + 0x268) == '\x01')) {
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_48,auStack_38);
      uStack_40 = (char)param_4;
      func_0x00010be71620(param_1);
      _objc_destroyWeak(auStack_48);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106cdc7ac; end: 106cdc7ff;  */

void FUN_106cdc7ac(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_2 != 0) && (lVar1 != 0)) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
    func_0x00010bdd18e0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cdc800; end: 106cdc85f; -[SCGallerySnapsTabController emptyViewForListAdapter:] */

void FUN_106cdc800(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c263c20();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0xf8);
    func_0x00010c07d540();
    if ((uVar2 & 1) == 0) {
      func_0x00010beac540(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bea92c0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


