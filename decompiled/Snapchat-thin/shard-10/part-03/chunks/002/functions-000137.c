/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fa8404; end: 107fa840b; -[SCSnapEditorSwipeFiltersServices smartCarouselFilterArranger] */

undefined8 FUN_107fa8404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107fa840c; end: 107fa843b; -[SCSnapEditorSwipeFiltersServices .cxx_destruct] */

void FUN_107fa840c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fa843c; end: 107fa84ef; -[SCTimelineThumbnailsCollectionView initWithFrame:collectionViewLayout:] */

undefined1 * FUN_107fa843c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbf18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame_collectionViewLayo_1125e29e0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c167a00(puVar1);
    func_0x00010c167680(puVar1);
    func_0x00010c2026e0(puVar1);
    func_0x00010c2025c0(puVar1);
    func_0x00010c1fbe00(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107fa84f0; end: 107fa868b; -[SCTimelineThumbnailsCollectionView pointInside:withEvent:] */

byte FUN_107fa84f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uVar1 = param_1;
  func_0x00010c29fc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar1);
  _objc_release(uVar1);
  if ((*(byte *)(puStack_78 + 3) & 1) == 0) {
    func_0x00010c2a00c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bf97e80(param_1);
    _objc_release(param_1);
    bVar2 = *(byte *)(puStack_78 + 3);
    _objc_release(param_3);
  }
  else {
    bVar2 = 1;
  }
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_3);
  return bVar2 & 1;
}



/* Entry: 107fa868c; end: 107fa879b;  */

void FUN_107fa868c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_2);
  func_0x00010bf51200(uVar1,uVar2,param_2);
  uVar1 = param_2;
  func_0x00010c102b20();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 107fa879c; end: 107fa88cb; -[SCTimelineThumbnailsCollectionViewController initWithConfiguration:playerHandler:thumbnailGenerator:timelineExperimentConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107fa879c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fbf20;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_1127728c4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127728c8) = 1;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127728cc),param_4);
    lVar3 = (long)_DAT_1127728d0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127728d4),param_6);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fa88cc; end: 107fa8b37; -[SCTimelineThumbnailsCollectionViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa88cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fbf20;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126d8a28;
  _objc_alloc();
  func_0x00010c001640();
  lVar4 = (long)_DAT_1127728d8;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126d8a30;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014040();
  lVar3 = (long)_DAT_1127728dc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  _objc_release(lVar4);
  func_0x00010c17e780(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3));
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  func_0x00010c17e6a0(param_1);
  lVar4 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d8a38);
  func_0x00010c126000(lVar4);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d8a38);
  func_0x00010c126000(lVar4);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b0d88);
  func_0x00010c126000(lVar4);
  _objc_release(lVar4);
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d8a40);
  func_0x00010c126060(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 107fa8b38; end: 107fa8b6b; -[SCTimelineThumbnailsCollectionViewController didReceiveMemoryWarning] */

void FUN_107fa8b38(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fbf20;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_didReceiveMemoryWarning_1125bbe28);
  return;
}



/* Entry: 107fa8b6c; end: 107fa8bbb; -[SCTimelineThumbnailsCollectionViewController loadView] */

void FUN_107fa8b6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4b80;
  _objc_alloc(PTR_PTR_1126c4b80);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fa8bbc; end: 107fa8e87; -[SCTimelineThumbnailsCollectionViewController showRecordMoreTooltipBalloonWithText:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107fa8bbc(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  long lVar9;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_4;
  _objc_retain(param_4);
  lVar9 = (long)_DAT_1127728e0;
  if ((*(long *)(param_2 + lVar9) == 0) && (lVar1 = param_2, func_0x00010be3ef80(), (int)lVar1 != 0)
     ) {
    lVar1 = param_2;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(ulong *)PTR__UICollectionElementKindSectionFooter_110345af8;
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = lVar1;
    func_0x00010c262e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
    uVar7 = (ulong)(unaff_x22 != 0);
    if (unaff_x22 != 0) {
      puVar2 = PTR_PTR_1126b6950;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar6 = *(undefined8 *)(param_2 + lVar9);
      *(undefined **)(param_2 + lVar9) = puVar2;
      _objc_release(uVar6);
      func_0x00010c21a1e0(0,*(undefined8 *)(param_2 + lVar9),param_3,4);
      lVar1 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar1);
      func_0x00010c219b60(*(undefined8 *)(param_2 + lVar9),param_3,0);
      puStack_a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(param_2 + lVar9);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = unaff_x22;
      uStack_90 = uVar3;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lStack_98 = lVar1;
      func_0x00010bf493a0(uVar3,param_3,lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + lVar9);
      uStack_88 = uVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = unaff_x22;
      func_0x00010c274200(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf493c0(0xc024000000000000,uVar4,param_3,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_80 = uVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_88,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puStack_a0,param_3,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar6);
      _objc_release(lVar1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lStack_98);
      _objc_release(uStack_90);
      uVar8 = param_4;
      func_0x00010c212f20(*(undefined8 *)(param_2 + lVar9));
      func_0x00010c1677c0(0,*(undefined8 *)(param_2 + lVar9));
      func_0x00010bf9f5a0(param_1,*(undefined8 *)(param_2 + lVar9));
    }
    _objc_release(unaff_x22);
  }
  else {
    uVar7 = 0;
  }
  uVar5 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar7;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_107fa8e88;
  lStack_d0 = unaff_x22;
  uStack_c8 = uVar7;
  lStack_c0 = param_2;
  uStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar8);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_107fa8f5c;
  puStack_e0 = &UNK_110842e18;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x107fa8f7c;
  puStack_110 = &UNK_110848bd8;
  uStack_108 = uVar5;
  uStack_100 = uVar8;
  uStack_d8 = uVar5;
  _objc_retain(uVar8);
  func_0x00010bf03460(0x3fd999999999999a,0,0x3fe999999999999a,0,puVar2,param_3,6,&puStack_f8,
                      &puStack_128);
  _objc_release(uStack_100);
  _objc_release(uVar8);
  return uVar8;
}



/* Entry: 107fa8e88; end: 107fa8f5b; -[SCTimelineThumbnailsCollectionViewController showAddMoreSnapTooltipWithText:] */

void FUN_107fa8e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107fa8f5c;
  puStack_40 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x107fa8f7c;
  puStack_70 = &UNK_110848bd8;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03460(0x3fd999999999999a,0,0x3fe999999999999a,0,puVar1,param_2,6,&puStack_58,
                      &puStack_88);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 107fa8f5c; end: 107fa8f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa8f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGPointZero_110347540,
             *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127728dc),
             PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 107fa8f90; end: 107fa9043; -[SCTimelineThumbnailsCollectionViewController firstCollapsedThumbnailCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa8f90(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1;
  func_0x00010be3ef80();
  if ((int)lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + _DAT_1127728dc);
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d8a38;
    _objc_opt_class(PTR_PTR_1126d8a38);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar5 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107fa9044; end: 107fa90df; -[SCTimelineThumbnailsCollectionViewController setSegmentThumbnailSelectedAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa9044(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127728c4);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_3 < uVar2) {
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9db60(param_1,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 107fa90e0; end: 107fa92e7; -[SCTimelineThumbnailsCollectionViewController videoPlaybackSession:didRenderFrameAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa90e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1127728e8);
  uVar4 = param_4[2];
  uVar8 = *param_4;
  puVar1[1] = param_4[1];
  *puVar1 = uVar8;
  puVar1[2] = uVar4;
  lVar7 = param_1;
  func_0x00010be3ef80();
  if ((int)lVar7 == 0) {
    if (*(long *)(param_1 + _DAT_1127728ec) == 0) {
      return;
    }
    uVar5 = *(ulong *)(param_1 + _DAT_1127728dc);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0d88;
    _objc_opt_class(PTR_PTR_1126b0d88);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar6 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar5);
    uStack_b8 = param_4[1];
    uStack_c0 = *param_4;
    uStack_b0 = param_4[2];
  }
  else {
    uVar5 = *(ulong *)(param_1 + _DAT_1127728dc);
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d8a38;
    _objc_opt_class(PTR_PTR_1126d8a38);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar6 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar5);
    lVar7 = (long)_DAT_1127728c4;
    if (*(long *)(param_1 + lVar7) == 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010c276460(&uStack_c0);
    }
    uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake(&uStack_70,&uStack_90,&uStack_c0);
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    uStack_98 = uStack_48;
    uStack_a0 = uStack_50;
    func_0x00010c182980(uVar6);
    if (*(long *)(param_1 + lVar7) == 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
    }
    else {
      uStack_88 = param_4[1];
      uStack_90 = *param_4;
      uStack_80 = param_4[2];
      func_0x00010c1004e0(&uStack_c0);
    }
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_80 = uStack_b0;
  }
  func_0x00010c288960(uVar6);
  _objc_release(uVar6);
  return;
}



/* Entry: 107fa92e8; end: 107fa934b; -[SCTimelineThumbnailsCollectionViewController startEnterEditingModeWithThumbnailsHidden:] */

void FUN_107fa92e8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar1);
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107fa934c; end: 107fa93a7; -[SCTimelineThumbnailsCollectionViewController revealThumbnails] */

void FUN_107fa934c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fa93a8; end: 107fa93db; -[SCTimelineThumbnailsCollectionViewController deselectSelectedSegmentIfAny] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107fa93a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127728ec);
  if (lVar1 != 0) {
    func_0x00010bdfb140();
  }
  return lVar1 != 0;
}



/* Entry: 107fa93dc; end: 107fa93df; -[SCTimelineThumbnailsCollectionViewController exitSegmentThumbnailsReordering] */

void FUN_107fa93dc(void)

{
  return;
}



/* Entry: 107fa93e0; end: 107fa93e3; -[SCTimelineThumbnailsCollectionViewController restoreThumbnailsToInitialStateInReorder] */

void FUN_107fa93e0(void)

{
  return;
}



/* Entry: 107fa93e4; end: 107fa93ef; -[SCTimelineThumbnailsCollectionViewController preferredHeight] */

undefined8 FUN_107fa93e4(void)

{
  return 0x4054800000000000;
}



/* Entry: 107fa93f0; end: 107fa93f3; -[SCTimelineThumbnailsCollectionViewController componentView] */

void FUN_107fa93f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_view_1126849e8);
  return;
}



/* Entry: 107fa93f4; end: 107fa93fb; -[SCTimelineThumbnailsCollectionViewController numberOfSectionsInCollectionView:] */

undefined8 FUN_107fa93f4(void)

{
  return 1;
}



/* Entry: 107fa93fc; end: 107fa9487; -[SCTimelineThumbnailsCollectionViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fa93fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010be3ef80();
  lVar5 = (long)_DAT_1127728c4;
  if ((int)lVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      return 1;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c1585e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  return uVar4;
}



/* Entry: 107fa9488; end: 107fa9853; -[SCTimelineThumbnailsCollectionViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa9488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = param_1;
  func_0x00010be3ef80();
  uVar2 = param_3;
  if ((int)lVar6 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_1127728c4);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_4);
    lVar6 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010be3ec60();
    if ((int)param_1 == 0) {
      func_0x00010bf6e0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c201ee0();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lVar1 = lVar6;
      func_0x00010bf8c600(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a120(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214580(uVar2);
      _objc_release(puVar3);
      _objc_release(lVar1);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0840e0();
    }
    else {
      func_0x00010bf6e0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        func_0x00010c182980(uVar2);
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
      }
      else {
        func_0x00010bf4d840(&uStack_100,lVar6);
        uStack_c8 = uStack_f8;
        uStack_d0 = uStack_100;
        uStack_b8 = uStack_e8;
        uStack_c0 = uStack_f0;
        uStack_a8 = uStack_d8;
        uStack_b0 = uStack_e0;
        func_0x00010c182980(uVar2);
        func_0x00010c27c900(&uStack_130,lVar6);
      }
      uStack_c8 = uStack_128;
      uStack_d0 = uStack_130;
      uStack_b8 = uStack_118;
      uStack_c0 = uStack_120;
      uStack_a8 = uStack_108;
      uStack_b0 = uStack_110;
      func_0x00010c21a5e0(uVar2);
      lVar1 = lVar6;
      func_0x00010c26db80(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214080(uVar2);
      _objc_release(lVar1);
      _CMTimeMakeWithSeconds(&uStack_148,0x3fe0000000000000,600);
      uStack_c8 = uStack_140;
      uStack_d0 = uStack_148;
      uStack_c0 = uStack_138;
      func_0x00010c1c83e0(uVar2);
      func_0x00010c18b5e0(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0840e0();
    }
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(uVar2);
    _objc_release(puVar3);
    _objc_release(lVar6);
  }
  else {
    func_0x00010bf6e0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127728c4;
    if (*(long *)(param_1 + lVar6) == 0) {
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x00010c276460(&uStack_d0);
    }
    uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake(&uStack_80,&uStack_a0,&uStack_d0);
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    func_0x00010c182980(uVar2);
    lVar4 = *(long *)(param_1 + lVar6);
    func_0x00010bf8c620();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar1 == 0) {
      func_0x00010c1a7f60(uVar2);
    }
    else {
      func_0x00010c1a7f60(uVar2);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bf8c620(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214580(uVar2);
      _objc_release(uVar5);
    }
    func_0x00010c201ee0(uVar2);
    func_0x00010c160fc0(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107fa9854; end: 107fa998b; -[SCTimelineThumbnailsCollectionViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa9854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_4;
  func_0x00010c0720c0(param_4,param_2,
                      *(undefined8 *)PTR__UICollectionElementKindSectionFooter_110345af8);
  if ((int)uVar4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf6e120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c18b5e0(lVar2,param_2,param_1);
    lVar1 = *(long *)(param_1 + _DAT_1127728c4);
    func_0x00010bf8c620();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf529e0();
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = 0x3ff0000000000000;
    }
    func_0x00010c1677c0(uVar4,lVar2);
    _objc_release(lVar1);
    func_0x00010c1af000(lVar2,param_2,1);
    func_0x00010c160fc0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ec9ef8);
    lVar3 = (long)_DAT_1127728e4;
    _objc_retain(lVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107fa998c; end: 107fa99fb; -[SCTimelineThumbnailsCollectionViewController collectionView:shouldSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107fa998c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c27c9a0();
  lVar3 = (long)_DAT_1127728c4;
  if ((int)lVar2 != 0) {
    uVar1 = *(ulong *)(param_1 + lVar3);
    func_0x00010bf09aa0();
    if ((uVar1 & 1) != 0) {
      lVar2 = param_1;
      func_0x00010beb2940();
      if ((int)lVar2 != 0) {
        func_0x00010bdd18c0(param_1,param_2,1);
        return false;
      }
      return true;
    }
  }
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c28fca0(lVar2);
  return lVar2 == 2;
}



/* Entry: 107fa99fc; end: 107fa9a57; -[SCTimelineThumbnailsCollectionViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa99fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_1127728c4);
  func_0x00010c28fca0();
  if (lVar1 == 2) {
    func_0x00010be31be0(param_1);
  }
  else {
    func_0x00010be9db60(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107fa9a58; end: 107fa9a9b; -[SCTimelineThumbnailsCollectionViewController _handleTapForSingleSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa9a58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_1127728f0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2703c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdfb150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deselectSelectedSegmentAndColla_11255c5f0);
  return;
}



/* Entry: 107fa9a9c; end: 107fa9cb3; -[SCTimelineThumbnailsCollectionViewController _selectSegmentThumbnailAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa9a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar6 = param_1;
  func_0x00010be3ef80();
  if ((int)lVar6 == 0) {
    lVar6 = param_1;
    func_0x00010be3ec60();
    if ((int)lVar6 == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_1127728ec);
      _objc_retain(uVar1);
      func_0x00010c0840e0(param_3);
      func_0x00010be9db40(param_1);
      func_0x00010beda840(param_1);
      _objc_release(uVar1);
    }
    else {
      func_0x00010bdfb140(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + _DAT_1127728c8) = 0;
    lVar6 = (long)_DAT_1127728e0;
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010c12c960();
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = 0;
      _objc_release(uVar1);
    }
    lVar8 = (long)_DAT_1127728c4;
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar6 != 0) {
      uVar7 = 0;
      do {
        lVar2 = *(long *)(param_1 + lVar8);
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        if (lVar6 == 0) {
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_80,lVar6);
        }
        puVar3 = (undefined8 *)(param_1 + _DAT_1127728e8);
        uStack_98 = puVar3[1];
        uStack_a0 = *puVar3;
        uStack_90 = puVar3[2];
        puVar3 = &uStack_80;
        _CMTimeRangeContainsTime(puVar3,&uStack_a0);
        _objc_release(lVar6);
        if ((int)puVar3 != 0) break;
        uVar7 = uVar7 + 1;
        uVar4 = *(ulong *)(param_1 + lVar8);
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf529e0();
        _objc_release(uVar4);
      } while (uVar7 < uVar5);
    }
    func_0x00010be9db40(param_1);
    func_0x00010bddc960(param_1);
  }
  if (*(long *)(param_1 + _DAT_1127728ec) != 0) {
    param_1 = param_1 + _DAT_1127728f0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2703c0();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107fa9cb4; end: 107fa9cb7; -[SCTimelineThumbnailsCollectionViewController collectionView:didDeselectItemAtIndexPath:] */

void FUN_107fa9cb4(void)

{
  return;
}



/* Entry: 107fa9cb8; end: 107fa9cbb; -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didAddSegment:] */

void FUN_107fa9cb8(void)

{
  return;
}



/* Entry: 107fa9cbc; end: 107fa9cbf; -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didAddSegments:] */

void FUN_107fa9cbc(void)

{
  return;
}



/* Entry: 107fa9cc0; end: 107fa9cc3; -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didDeleteSegment:atIndex:] */

void FUN_107fa9cc0(void)

{
  return;
}



/* Entry: 107fa9cc4; end: 107fa9cc7; -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didUpdateSegmentTrim:atIndex:] */

void FUN_107fa9cc4(void)

{
  return;
}



/* Entry: 107fa9cc8; end: 107fa9ccb; -[SCTimelineThumbnailsCollectionViewController timelineConfigurationWillDeleteAllSegments:] */

void FUN_107fa9cc8(void)

{
  return;
}



/* Entry: 107fa9ccc; end: 107fa9ccf; -[SCTimelineThumbnailsCollectionViewController timelineConfigurationDidDeleteAllSegments:] */

void FUN_107fa9ccc(void)

{
  return;
}



/* Entry: 107fa9cd0; end: 107fa9ef7; -[SCTimelineThumbnailsCollectionViewController timelineConfigurationDidUpdateThumbnails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa9cd0(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  
  lVar10 = param_4;
  func_0x00010be3ef80();
  if ((int)lVar10 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_1127728dc;
    uVar4 = *(ulong *)(param_4 + lVar10);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d8a38;
    _objc_opt_class(PTR_PTR_1126d8a38);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 == 0) {
      *(undefined1 *)(param_4 + _DAT_1127728f4) = 0;
    }
    else {
      func_0x00010c1a7f60(uVar4);
      lVar11 = (long)_DAT_1127728c4;
      lVar7 = *(long *)(param_4 + lVar11);
      func_0x00010bf8c620();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010bf529e0();
      _objc_release(lVar7);
      if (lVar9 == 4) {
        uVar8 = *(undefined8 *)(param_4 + lVar11);
        func_0x00010bf8c620(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c214580(uVar4);
        _objc_release(uVar8);
      }
      lVar7 = (long)_DAT_1127728e4;
      func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_4 + lVar7));
      lVar9 = (long)_DAT_1127728f4;
      if (*(char *)(param_4 + lVar9) == '\x01') {
        uVar8 = *(undefined8 *)(param_4 + lVar10);
        func_0x00010bfb68e0(uVar4);
        dVar12 = param_3;
        func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar7));
        func_0x00010c1822e0(param_3 + dVar12,0,uVar8);
        iVar2 = (int)*(undefined8 *)(param_4 + lVar11);
        func_0x00010c07b4c0();
        if (iVar2 == 0) {
          func_0x00010bf03460(0x3fd999999999999a,0,0x3fe999999999999a,0,
                              PTR__OBJC_CLASS___UIView_1126aec20);
        }
        else {
          func_0x00010c1525a0(*(undefined8 *)(param_4 + lVar10));
        }
      }
      *(undefined1 *)(param_4 + lVar9) = 0;
    }
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 107fa9ef8; end: 107fa9f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa9ef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x405cc00000000000,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127728dc),
             PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 107fa9f18; end: 107fa9f1b; -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:] */

void FUN_107fa9f18(void)

{
  return;
}



/* Entry: 107fa9f1c; end: 107fa9f1f; -[SCTimelineThumbnailsCollectionViewController timelineConfigurationDidEnterReorderMode:] */

void FUN_107fa9f1c(void)

{
  return;
}



/* Entry: 107fa9f20; end: 107fa9f23; -[SCTimelineThumbnailsCollectionViewController timelineConfigurationDidExitReorderMode:] */

void FUN_107fa9f20(void)

{
  return;
}



/* Entry: 107fa9f24; end: 107fa9f27; -[SCTimelineThumbnailsCollectionViewController timelineConfigurationDidRestoreToInitialState:] */

void FUN_107fa9f24(void)

{
  return;
}



/* Entry: 107fa9f28; end: 107faa0a7; -[SCTimelineThumbnailsCollectionViewController timelineConfiguration:didUpdateThumbnailsForSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fa9f28(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be3ef80();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_1127728c4);
    func_0x00010c1585e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_1127728dc;
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf4b900();
    _objc_release(uVar4);
    if ((int)uVar2 != 0) {
      uVar5 = *(ulong *)(param_1 + lVar8);
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126d8a38;
      _objc_opt_class(PTR_PTR_1126d8a38);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar1 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uVar2 = param_4;
      func_0x00010bf8c600(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a120(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214580(uVar1);
      _objc_release(uVar1);
      _objc_release(puVar6);
      _objc_release(uVar2);
      _objc_release(uVar5);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107faa0a8; end: 107faa0ab; -[SCTimelineThumbnailsCollectionViewController isThumbnailsViewCollapsed] */

void FUN_107faa0a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isCollapsed_11256d580);
  return;
}



/* Entry: 107faa0ac; end: 107faa0bb; -[SCTimelineThumbnailsCollectionViewController isThumbnailsViewChangingLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107faa0ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127728f8);
}



/* Entry: 107faa0bc; end: 107faa0bf; -[SCTimelineThumbnailsCollectionViewController isThumbnailCellSelectedAtIndexPath:] */

void FUN_107faa0bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isCellSelectedAtIndexPath__11256d4b8);
  return;
}



/* Entry: 107faa0c0; end: 107faa117; -[SCTimelineThumbnailsCollectionViewController shouldEnableExtendedScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107faa0c0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = param_1 + _DAT_1127728d4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf90280();
  if ((uVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + _DAT_1127728c8);
  }
  else {
    bVar3 = 1;
  }
  _objc_release(uVar1);
  return bVar3 & 1;
}



/* Entry: 107faa118; end: 107faa177; -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didSeekToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa118(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  param_1 = param_1 + _DAT_1127728cc;
  _objc_loadWeakRetained(param_1);
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_30 = param_4[2];
  _CMTimeGetSeconds(&uStack_40);
  func_0x00010c256600(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 107faa178; end: 107faa263; -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didTrimSegmentToRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa178(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127728ec;
  uVar1 = *(ulong *)(param_1 + lVar6);
  if (uVar1 != 0) {
    func_0x00010c0840e0();
    lVar7 = (long)_DAT_1127728c4;
    uVar2 = *(ulong *)(param_1 + lVar7);
    func_0x00010c1581e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c1585e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0840e0(uVar4);
      uVar5 = uVar3;
      func_0x00010c0dfd40(uVar3,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uStack_68 = param_4[1];
      uStack_70 = *param_4;
      uStack_58 = param_4[3];
      uStack_60 = param_4[2];
      uStack_48 = param_4[5];
      uStack_50 = param_4[4];
      func_0x00010c21a5e0(uVar5,param_2,&uStack_70);
      *(undefined1 *)(param_1 + _DAT_1127728fc) = 1;
      _objc_release(uVar5);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107faa264; end: 107faa297; -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCellFinishedSeeking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa264(long param_1)

{
  param_1 = param_1 + _DAT_1127728cc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c13dae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107faa298; end: 107faa37b; -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCellDidPressDelete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa298(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010beb2940();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd18d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__autoScrollIfNeededAnimated__112551fd0,1);
    return;
  }
  uVar2 = *(ulong *)(param_1 + _DAT_1127728ec);
  if (uVar2 != 0) {
    func_0x00010c0840e0();
    uVar3 = *(ulong *)(param_1 + _DAT_1127728c4);
    func_0x00010c1581e0();
    if (uVar2 < uVar3) {
      func_0x00010c0840e0();
      param_1 = param_1 + _DAT_1127728f0;
      _objc_loadWeakRetained(param_1);
      func_0x00010c270380();
      _objc_release(param_1);
    }
  }
  return;
}



/* Entry: 107faa37c; end: 107faa387;  */

void FUN_107faa37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfa630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deleteSegmentAtIndex__11255c328,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107faa388; end: 107faa3af; -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCellShouldShowDeleteButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107faa388(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127728c4);
  func_0x00010c1581e0(uVar1);
  return 1 < uVar1;
}



/* Entry: 107faa3b0; end: 107faa3c7; -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCellShouldHandleTouch:] */

uint FUN_107faa3b0(uint param_1)

{
  func_0x00010beb2940();
  return param_1 ^ 1;
}



/* Entry: 107faa3c8; end: 107faa4a3; -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didChangeStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa3c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127728ec;
  uVar1 = *(ulong *)(param_1 + lVar6);
  if (uVar1 != 0) {
    func_0x00010c0840e0();
    lVar7 = (long)_DAT_1127728c4;
    uVar2 = *(ulong *)(param_1 + lVar7);
    func_0x00010c1581e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c1585e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0840e0(uVar4);
      uVar5 = uVar3;
      func_0x00010c0dfd40(uVar3,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uStack_58 = param_4[1];
      uStack_60 = *param_4;
      uStack_50 = param_4[2];
      func_0x00010c28b620(uVar5,param_2,&uStack_60);
      _objc_release(uVar5);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107faa4a4; end: 107faa57f; -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didChangeEndTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa4a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127728ec;
  uVar1 = *(ulong *)(param_1 + lVar6);
  if (uVar1 != 0) {
    func_0x00010c0840e0();
    lVar7 = (long)_DAT_1127728c4;
    uVar2 = *(ulong *)(param_1 + lVar7);
    func_0x00010c1581e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c1585e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0840e0(uVar4);
      uVar5 = uVar3;
      func_0x00010c0dfd40(uVar3,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uStack_58 = param_4[1];
      uStack_60 = *param_4;
      uStack_50 = param_4[2];
      func_0x00010c28b600(uVar5,param_2,&uStack_60);
      _objc_release(uVar5);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107faa580; end: 107faa583; -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:] */

void FUN_107faa580(void)

{
  return;
}



/* Entry: 107faa584; end: 107faa587; -[SCTimelineThumbnailsCollectionViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:] */

void FUN_107faa584(void)

{
  return;
}



/* Entry: 107faa588; end: 107faa5c3; -[SCTimelineThumbnailsCollectionViewController didTapOnAddMoreButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa588(long param_1)

{
  param_1 = param_1 + _DAT_1127728f0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2703a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107faa5c4; end: 107faa647; -[SCTimelineThumbnailsCollectionViewController editingIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107faa5c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1127728c4);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_1127728ec);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0840f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_item_1125fea48);
      return lVar2;
    }
    lVar2 = 0x7fffffffffffffff;
  }
  return lVar2;
}



/* Entry: 107faa648; end: 107faa657; -[SCTimelineThumbnailsCollectionViewController _isCollapsed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107faa648(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127728c8);
}



/* Entry: 107faa658; end: 107faa66f; -[SCTimelineThumbnailsCollectionViewController _isCellSelectedAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa658(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_1 + _DAT_1127728ec));
  return;
}



/* Entry: 107faa670; end: 107faa6f7; -[SCTimelineThumbnailsCollectionViewController _changeLayoutAnimated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa670(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  *(undefined1 *)(param_1 + _DAT_1127728f8) = 1;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107faa6f8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010bf03460(0x3fe0000000000000,0,0x3fe6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,0,&puStack_38,0);
  return;
}



/* Entry: 107faa6f8; end: 107faa6ff;  */

void FUN_107faa6f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddc8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__changeCollectionViewLayout_112554bd0);
  return;
}



/* Entry: 107faa700; end: 107faa793; -[SCTimelineThumbnailsCollectionViewController _changeCollectionViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa700(long param_1,undefined8 param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107faa794;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107faa9c0;
  puStack_58 = &UNK_110841f20;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0f8420(*(undefined8 *)(param_1 + _DAT_1127728dc),param_2,&puStack_48,&puStack_70);
  func_0x00010bdd18c0(param_1,param_2,1);
  return;
}



/* Entry: 107faa794; end: 107faa9bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa794(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_1127728dc;
  func_0x00010c128b60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar10 = (long)_DAT_1127728c4;
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar10);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (1 < uVar8) {
    uVar8 = 1;
    do {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar3);
      _objc_release(puVar3);
      uVar8 = uVar8 + 1;
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar10);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
    } while (uVar8 < uVar2);
  }
  uVar8 = *(ulong *)(param_1 + 0x20);
  func_0x00010be3ef80();
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  lVar7 = *(long *)(param_1 + 0x20);
  if ((uVar8 & 1) == 0) {
    func_0x00010c066a40(*(undefined8 *)(lVar7 + lVar9),param_2,puVar1);
  }
  else {
    if (*(char *)(lVar7 + _DAT_112772900) == '\x01') {
      uVar5 = *(undefined8 *)(lVar7 + lVar10);
      func_0x00010c1581e0(uVar5);
      func_0x00010bfed020(puVar3,param_2,uVar5,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar3);
      _objc_release(puVar3);
      lVar7 = *(long *)(param_1 + 0x20);
    }
    func_0x00010bf6c100(*(undefined8 *)(lVar7 + lVar9),param_2,puVar1);
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + lVar10);
  func_0x00010c1581e0();
  if (lVar10 != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128de0(uVar5,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(puVar1 + 0x20) + (long)_DAT_1127728f8) = 0;
  *(undefined1 *)(*(long *)(puVar1 + 0x20) + (long)_DAT_112772900) = 0;
  return;
}



/* Entry: 107faa9c0; end: 107faa9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa9c0(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127728f8) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112772900) = 0;
  return;
}



/* Entry: 107faa9e4; end: 107faaa4f; -[SCTimelineThumbnailsCollectionViewController _shouldAutoScrollOnSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faa9e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c230060();
  if ((int)lVar1 != 0) {
    lVar1 = (long)_DAT_1127728dc;
    func_0x00010bf4d5e0(*(undefined8 *)(param_1 + lVar1));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar1));
    func_0x00010bf4cdc0(*(undefined8 *)(param_1 + lVar1));
  }
  return;
}



/* Entry: 107faaa50; end: 107faabfb; -[SCTimelineThumbnailsCollectionViewController _autoScrollIfNeededAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faaa50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_5 + (long)_DAT_1127728c4);
  func_0x00010c1581e0();
  if (lVar1 != 0) {
    puVar5 = *(undefined **)(param_5 + (long)_DAT_1127728ec);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,0,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar5);
    }
    lVar1 = (long)_DAT_1127728dc;
    uVar2 = *(undefined8 *)(param_5 + lVar1);
    func_0x00010bf33b60(uVar2,param_6,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(uVar2);
    uVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar3);
    _CGRectInset(param_1,param_2,param_3,param_4,0xc04b800000000000,0);
    uVar3 = param_5;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb68e0();
    _CGRectContainsRect();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      func_0x00010c1525a0(*(undefined8 *)(param_5 + lVar1),param_6,puVar5,0x10,1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 107faabfc; end: 107fab21f; -[SCTimelineThumbnailsCollectionViewController _selectSegmentCellAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107faabfc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  double dStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_1127728c4;
  uVar2 = *(ulong *)(param_1 + lVar13);
  uVar11 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release();
  if (param_3 < uVar2) {
    lVar16 = (long)_DAT_1127728cc;
    lVar3 = param_1 + lVar16;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c26fe60();
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + _DAT_1127728ec);
    *(undefined **)(param_1 + _DAT_1127728ec) = puVar4;
    _objc_release(uVar12);
    lVar5 = *(long *)(param_1 + lVar13);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar3;
    func_0x00010c26db80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    if (lVar6 == 0) {
      lVar5 = param_1 + lVar16;
      _objc_loadWeakRetained();
      lVar6 = lVar5;
      func_0x00010bf605c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar6 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(param_1 + lVar13);
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = 0;
        lStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        plStack_160 = (long *)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        lVar13 = lVar5;
        func_0x00010bf52a60();
        if (lVar13 != 0) {
          lVar14 = *plStack_160;
          do {
            lVar15 = 0;
            do {
              if (*plStack_160 != lVar14) {
                _objc_enumerationMutation(lVar5);
              }
              puVar9 = PTR_DAT_1126a4e40;
              lVar17 = *(long *)(lStack_168 + lVar15 * 8);
              _objc_retain(lVar17);
              lVar8 = lVar17;
              func_0x00010010fab4(lVar17,puVar9);
              lVar1 = lVar17;
              if ((int)lVar8 == 0) {
                lVar1 = 0;
              }
              _objc_retain(lVar1);
              _objc_release(lVar17);
              if (lVar1 != 0) {
                lVar8 = lVar17;
                func_0x00010bfb6cc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar8 != 0) {
                  lVar8 = lVar17;
                  func_0x00010bfb6cc0(lVar17);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar4);
                  _objc_release(lVar8);
                  puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
                  func_0x00010bf4d840(&uStack_1a0,lVar17);
                  func_0x00010c297240(puVar9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar7);
                  _objc_release(puVar9);
                }
              }
              _objc_release(lVar1);
              lVar15 = lVar15 + 1;
            } while (lVar13 != lVar15);
            lVar13 = lVar5;
            func_0x00010bf52a60();
          } while (lVar13 != 0);
        }
        lVar13 = param_1 + lVar16;
        _objc_loadWeakRetained(lVar13);
        lVar14 = lVar13;
        func_0x00010bf605a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        lVar13 = param_1 + lVar16;
        _objc_loadWeakRetained(lVar13);
        func_0x00010bf605e0();
        _objc_release(lVar13);
        if (lVar3 == 0) {
          dStack_188 = 0.0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_1a0,lVar3);
        }
        uStack_128 = uStack_180;
        dStack_130 = dStack_188;
        uStack_120 = uStack_178;
        dVar18 = dStack_188;
        _CMTimeGetSeconds(&dStack_130);
        puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        uVar19 = 0x4041800000000000;
        uVar20 = 0x404f000000000000;
        func_0x00010b690ad8(0x4041800000000000,0x404f000000000000,dVar18);
        _objc_release(puVar9);
        puVar10 = PTR_PTR_1126c4268;
        func_0x00010aefb480(PTR_PTR_1126c4268);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010aefb4f8();
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010aefb580(puVar10,puVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c2971c0(uVar19,uVar20,PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010aefb608(puVar10,puVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar9);
        func_0x00010aefb64c(puVar10,lVar14);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        if (lVar3 == 0) {
          dStack_188 = 0.0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_1a0,lVar3);
        }
        func_0x00010c297240(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010aefb5c4(puVar10,puVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df740(uVar12,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010aefb690(puVar10,puVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = puVar10;
        func_0x00010aefb718(puVar10,puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010aefb75c();
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(param_1 + _DAT_1127728d0);
        func_0x00010aefb4a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc05a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c214080(lVar3);
        _objc_release(uVar12);
        _objc_release(puVar9);
        _objc_release(puVar10);
        _objc_release(lVar14);
        _objc_release(lVar5);
        _objc_release(puVar7);
        _objc_release(puVar4);
      }
      _objc_release(lVar6);
    }
    param_1 = param_1 + lVar16;
    _objc_loadWeakRetained();
    func_0x00010c270200();
    _objc_release(param_1);
    _objc_release();
    uVar11 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar11);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain();
  func_0x00010bf03460(0x3fe0000000000000,0,0x3fe6666666666666,0,puVar7);
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  uVar12 = *(undefined8 *)(uVar11 + 0x20);
  func_0x00010bf40120(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0();
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdd18d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(uVar11 + 0x20),PTR_s__autoScrollIfNeededAnimated__112551fd0,1);
  return;
}



/* Entry: 107fab220; end: 107fab333; -[SCTimelineThumbnailsCollectionViewController _updateLayoutFromLastSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fab220(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain();
  func_0x00010bf03460(0x3fe0000000000000,0,0x3fe6666666666666,0,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf40120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdd18d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s__autoScrollIfNeededAnimated__112551fd0,1);
  return;
}



/* Entry: 107fab334; end: 107fab37b;  */

void FUN_107fab334(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf40120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdd18d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__autoScrollIfNeededAnimated__112551fd0,1);
  return;
}



/* Entry: 107fab37c; end: 107fab45b; -[SCTimelineThumbnailsCollectionViewController _deselectSelectedSegmentAndCollapse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fab37c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_1127728cc;
  lVar4 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c2700e0();
  _objc_release(lVar4);
  lVar4 = (long)_DAT_1127728fc;
  if (*(char *)(param_1 + lVar4) == '\x01') {
    lVar1 = param_1 + _DAT_1127728f0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2703e0();
    _objc_release(lVar1);
  }
  *(undefined1 *)(param_1 + lVar4) = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127728ec);
  *(undefined8 *)(param_1 + _DAT_1127728ec) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + _DAT_1127728c8) = 1;
  lVar3 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c2701e0();
  _objc_release(lVar3);
  func_0x00010bddc960(param_1);
  param_1 = param_1 + _DAT_1127728f0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c270360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fab45c; end: 107fab4df; -[SCTimelineThumbnailsCollectionViewController _deleteSegmentAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fab45c(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112772900) = 1;
  *(undefined1 *)(param_1 + _DAT_1127728fc) = 1;
  lVar1 = (long)_DAT_1127728c4;
  func_0x00010bf6c780(*(undefined8 *)(param_1 + lVar1));
  lVar1 = *(long *)(param_1 + lVar1);
  func_0x00010c1581e0();
  if (lVar1 != 0) {
    lVar1 = param_1 + _DAT_1127728cc;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c270240();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfb150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deselectSelectedSegmentAndColla_11255c5f0);
  return;
}



/* Entry: 107fab4e0; end: 107fab4ef; -[SCTimelineThumbnailsCollectionViewController trimmingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fab4e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127728c0);
}



/* Entry: 107fab4f0; end: 107fab4ff; -[SCTimelineThumbnailsCollectionViewController setTrimmingEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fab4f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127728c0) = param_3;
  return;
}



/* Entry: 107fab500; end: 107fab51f; -[SCTimelineThumbnailsCollectionViewController previewDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fab500(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127728f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fab520; end: 107fab533; -[SCTimelineThumbnailsCollectionViewController setPreviewDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fab520(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127728f0,param_3);
  return;
}



/* Entry: 107fab534; end: 107fab543; -[SCTimelineThumbnailsCollectionViewController showThumbnailRevealingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fab534(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127728f4);
}



/* Entry: 107fab544; end: 107fab553; -[SCTimelineThumbnailsCollectionViewController setShowThumbnailRevealingAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fab544(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127728f4) = param_3;
  return;
}



/* Entry: 107fab554; end: 107fab607; -[SCTimelineThumbnailsCollectionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fab554(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127728f0);
  _objc_destroyWeak(param_1 + _DAT_1127728d4);
  _objc_storeStrong(param_1 + _DAT_1127728d0,0);
  _objc_storeStrong(param_1 + _DAT_1127728ec,0);
  _objc_storeStrong(param_1 + _DAT_1127728e0,0);
  _objc_storeStrong(param_1 + _DAT_1127728e4,0);
  _objc_storeStrong(param_1 + _DAT_1127728d8,0);
  _objc_storeStrong(param_1 + _DAT_1127728dc,0);
  _objc_storeStrong(param_1 + _DAT_1127728c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127728cc);
  return;
}



/* Entry: 107fab608; end: 107fab6cf; -[SCTimelineThumbnailsCollectionViewFlowLayout initWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107fab608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fbf28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1f7ac0(puVar1);
    func_0x00010c1f93e0(0x4034000000000000,0x4034000000000000,0,0x4034000000000000,puVar1);
    lVar3 = (long)_DAT_112772904;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    ((undefined8 *)((long)puVar1 + (long)_DAT_112772908))[1] = 0x404a000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112772908) = 0x405c000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277290c) = 0x403c000000000000;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fab6d0; end: 107fabc83; -[SCTimelineThumbnailsCollectionViewFlowLayout prepareLayout] */

/* WARNING: Possible PIC construction at 0x000107fab950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107fab954) */
/* WARNING: Removing unreachable block (ram,0x000107fab998) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fab6d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  
  puVar2 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112772910;
  if (*(long *)(param_1 + lVar13) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar2;
    _objc_release(uVar7);
    _objc_release(puVar1);
    puVar6 = (undefined8 *)(param_1 + _DAT_112772908);
    func_0x00010c19f0e0(0x4034000000000000,*(undefined8 *)(param_1 + _DAT_11277290c),*puVar6,
                        puVar6[1],*(undefined8 *)(param_1 + lVar13));
    lVar13 = param_1;
    func_0x00010beb3f20();
    puVar2 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
    if ((int)lVar13 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08ca00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = (long)_DAT_112772914;
      uVar7 = *(undefined8 *)(param_1 + lVar13);
      *(undefined **)(param_1 + lVar13) = puVar2;
      _objc_release(uVar7);
      _objc_release(puVar1);
      func_0x00010c202c80(0x4044000000000000,puVar6[1],*(undefined8 *)(param_1 + lVar13));
    }
  }
  lVar13 = (long)_DAT_112772918;
  if (*(long *)(param_1 + lVar13) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_112772904;
    if (*(long *)(param_1 + lVar10) == 0) {
      uStack_190 = 0;
      puStack_188 = (undefined8 *)0x0;
      uStack_180 = 0;
    }
    else {
      func_0x00010c276460(&uStack_190);
    }
    _CMTimeGetSeconds(&uStack_190);
    plStack_158 = (long *)0x0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lVar3 = *(long *)(param_1 + lVar10);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      if (*plStack_150 != *plStack_150) {
        _objc_enumerationMutation(lVar3);
      }
      if (*plStack_158 == 0) {
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        puStack_188 = (undefined8 *)0x0;
        uStack_190 = 0;
      }
      else {
        func_0x00010bf4d840(&uStack_190);
      }
      uStack_1a8 = uStack_170;
      uStack_1b0 = uStack_178;
      uStack_1a0 = uStack_168;
      _CMTimeGetSeconds(&uStack_1b0);
      puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      goto code_r0x00010c2971a0;
    }
    _objc_release(lVar3);
    uVar7 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar2;
    _objc_release(uVar7);
  }
  lVar13 = (long)_DAT_11277291c;
  if (*(long *)(param_1 + lVar13) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar2;
    _objc_release(uVar7);
    lVar12 = (long)_DAT_112772904;
    lVar3 = *(long *)(param_1 + lVar12);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar10 != 0) {
      uVar9 = 0;
      do {
        puVar2 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
        puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08c8e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        func_0x00010befa120(*(undefined8 *)(param_1 + lVar13));
        _objc_release(puVar2);
        uVar4 = *(ulong *)(param_1 + lVar12);
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf529e0();
        _objc_release(uVar4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
    }
  }
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112772920);
  *(undefined8 *)(param_1 + _DAT_112772920) = uVar7;
  _objc_release(uVar8);
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x2020000000;
  uStack_178 = 0x4034000000000000;
  lVar10 = (long)_DAT_112772904;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c1585e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(uVar7);
  uVar5 = *(ulong *)(param_1 + lVar13);
  func_0x00010bf529e0();
  uVar4 = *(ulong *)(param_1 + lVar10);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (uVar9 < uVar5) {
    uVar11 = *(undefined8 *)(param_1 + lVar13);
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar13));
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c1585e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c12d520(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  func_0x00010bf97e80(*(undefined8 *)(param_1 + lVar13));
  puVar6 = &uStack_190;
  __Block_object_dispose(puVar6,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = 8;
  __Block_object_dispose(&uStack_190,8);
  __Unwind_Resume(puVar6);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010bfb68e0(uVar7);
code_r0x00010c2971a0:
                    /* WARNING: Could not recover jumptable at 0x00010c2971b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_valueWithCGRect__112683690);
  return;
}



/* Entry: 107fabc84; end: 107fabcaf;  */

void FUN_107fabc84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010bfb68e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c2971b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_valueWithCGRect__112683690);
  return;
}



/* Entry: 107fabcb0; end: 107fabe8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fabcb0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277291c);
  func_0x00010c0dfd20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20) + (long)_DAT_112772924;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c080f40();
  _objc_release(puVar2);
  _objc_release(lVar4);
  if ((int)lVar3 == 0) {
    dVar5 = *(double *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277290c);
    dVar7 = 30.0;
    uVar9 = 0x4049000000000000;
    dVar6 = dVar5;
    _CGRectGetMaxX(dVar5,uVar8,0x403e000000000000,0x4049000000000000);
    dVar6 = dVar6 + 5.0;
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  }
  else {
    lVar4 = param_2;
    func_0x00010c26db80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf529e0();
    dVar7 = (double)lVar3 * 35.0;
    _objc_release(lVar4);
    dVar5 = *(double *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
    if (param_3 != 0) {
      dVar5 = dVar5 + 12.0;
    }
    uVar8 = 0x4034000000000000;
    uVar9 = 0x404f000000000000;
    dVar6 = dVar5;
    _CGRectGetMaxX(dVar5,0x4034000000000000,dVar7,0x404f000000000000);
    *(double *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = dVar6 + 5.0;
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    dVar6 = *(double *)(lVar4 + 0x18) + 12.0;
  }
  *(double *)(lVar4 + 0x18) = dVar6;
  func_0x00010c19f0e0(dVar5,uVar8,dVar7,uVar9,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fabe90; end: 107fabf23;  */

void FUN_107fabe90(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfecf20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0840e0();
  _objc_release(lVar1);
  if (lVar2 != param_3) {
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac020(param_2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fabf24; end: 107fac0c7; -[SCTimelineThumbnailsCollectionViewFlowLayout layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fabf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_5 + _DAT_112772924;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c080fc0();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    func_0x00010befa160(puVar1,param_6,*(undefined8 *)(param_5 + _DAT_11277291c));
  }
  else {
    func_0x00010befa120(puVar1,param_6,*(undefined8 *)(param_5 + _DAT_112772910));
  }
  lVar2 = param_5;
  func_0x00010beb3f20();
  if ((int)lVar2 != 0) {
    uVar6 = *(undefined8 *)PTR__UICollectionElementKindSectionFooter_110345af8;
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010c08c9e0(param_5,param_6,uVar6,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (lVar2 != 0) {
      func_0x00010befa120(puVar1,param_6,lVar2);
    }
    _objc_release(lVar2);
  }
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107fac0c8;
  puStack_80 = &UNK_110a161f8;
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_78 = param_5;
  uStack_70 = param_1;
  uStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_6,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfaea40(puVar1,param_6,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107fac0c8; end: 107fac173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107fac0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6)

{
  bool bVar1;
  int iVar2;
  ulong uVar4;
  ulong uVar5;
  ulong uVar3;
  
  _objc_retain(param_6);
  uVar3 = param_6;
  func_0x00010bfb68e0();
  iVar2 = (int)uVar3;
  _CGRectIntersectsRect
            (*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30),
             *(undefined8 *)(param_5 + 0x38),*(undefined8 *)(param_5 + 0x40),param_1,param_2,param_3
             ,param_4);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_6;
    func_0x00010bfecf20(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0840e0();
    uVar5 = *(ulong *)(*(long *)(param_5 + 0x20) + (long)_DAT_112772904);
    func_0x00010c1581e0(uVar5);
    bVar1 = uVar4 < uVar5;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return bVar1;
}



/* Entry: 107fac174; end: 107fac21b; -[SCTimelineThumbnailsCollectionViewFlowLayout layoutAttributesForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fac174(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_112772924;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c080fc0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277291c);
    uVar3 = param_3;
    func_0x00010c0840e0(param_3);
    func_0x00010c0dfd40(uVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112772910);
    _objc_retain(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107fac21c; end: 107fac3f3; -[SCTimelineThumbnailsCollectionViewFlowLayout collectionViewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107fac21c(double param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar7 = (long)_DAT_112772924;
  uVar1 = param_3 + lVar7;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c230060();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_3 + lVar7;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c080fc0();
    _objc_release(lVar3);
    if ((int)lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_3 + _DAT_11277291c);
      func_0x00010c089820(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMaxX();
      _objc_release(uVar5);
      lVar7 = param_3 + lVar7;
      _objc_loadWeakRetained();
      puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      uVar5 = *(undefined8 *)(param_3 + _DAT_112772904);
      func_0x00010c1585e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bfed020(puVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x00010c080f40();
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(lVar7);
      if ((int)lVar3 == 0) {
        dVar8 = -16.25;
      }
      else {
        dVar8 = -17.5;
      }
      dVar9 = param_1 + dVar8;
    }
    else {
      func_0x00010bfb68e0(*(undefined8 *)(param_3 + _DAT_112772910));
      _CGRectGetMaxX();
      dVar9 = param_1 + -16.25;
      dVar8 = param_1;
    }
    lVar7 = param_3;
    func_0x00010bf40120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar9 = dVar9 + dVar8;
    func_0x00010bf40120(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(param_3);
    _objc_release(lVar7);
    auVar10._8_8_ = dVar8;
    auVar10._0_8_ = dVar9;
    return auVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdf9370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__defaultContentSize_11255be78);
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 107fac3f4; end: 107fac50b; -[SCTimelineThumbnailsCollectionViewFlowLayout initialLayoutAttributesForAppearingItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fac3f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = param_1;
  func_0x00010c08c980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf51e00();
  _objc_release(lVar8);
  lVar8 = (long)_DAT_112772924;
  uVar3 = param_1 + lVar8;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010c080fa0();
  _objc_release(uVar3);
  uVar3 = param_1 + lVar8;
  _objc_loadWeakRetained();
  uVar5 = uVar3;
  func_0x00010c080fc0();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    iVar1 = _DAT_112772920;
    if ((uVar5 & 1) != 0) goto LAB_107fac4ec;
  }
  else {
    iVar1 = _DAT_112772918;
    if ((int)uVar5 != 0) {
      func_0x00010be19000(param_1);
      func_0x00010c19f0e0(lVar2);
      goto LAB_107fac4ec;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + iVar1);
  uVar6 = param_3;
  func_0x00010c0840e0(param_3);
  func_0x00010c0dfd40(uVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  func_0x00010c19f0e0(lVar2);
  _objc_release(uVar7);
LAB_107fac4ec:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107fac50c; end: 107fac62f; -[SCTimelineThumbnailsCollectionViewFlowLayout finalLayoutAttributesForDisappearingItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fac50c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fbf28;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_finalLayoutAttributesForDisappea_112527a20,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)plVar1;
  func_0x00010bf51e00();
  _objc_release(plVar1);
  lVar8 = (long)_DAT_112772924;
  lVar3 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c080fa0();
  _objc_release(lVar3);
  if ((int)lVar4 != 0) {
    uVar5 = param_1 + lVar8;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    func_0x00010c080fc0();
    _objc_release(uVar5);
    if ((uVar6 & 1) == 0) {
      func_0x00010be19000(param_1);
      func_0x00010c19f0e0(puVar2);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + _DAT_112772918);
      func_0x00010c0840e0(param_3);
      func_0x00010c0dfd40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      func_0x00010c19f0e0(puVar2);
      _objc_release(uVar7);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107fac630; end: 107fac76b; -[SCTimelineThumbnailsCollectionViewFlowLayout layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fac630(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar4 = param_2;
  func_0x00010beb3f20();
  if (((int)lVar4 == 0) ||
     (uVar5 = param_4,
     func_0x00010c0720c0(param_4,param_3,
                         *(undefined8 *)PTR__UICollectionElementKindSectionFooter_110345af8),
     (int)uVar5 == 0)) {
    uVar5 = 0;
  }
  else {
    lVar4 = param_2 + _DAT_112772924;
    _objc_loadWeakRetained();
    lVar1 = lVar4;
    func_0x00010c080fc0();
    _objc_release(lVar4);
    if ((int)lVar1 == 0) {
      lVar4 = (long)_DAT_112772914;
      uVar5 = *(undefined8 *)(param_2 + lVar4);
      uVar3 = 1;
    }
    else {
      func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_112772910));
      _CGRectGetMaxX();
      lVar4 = (long)_DAT_112772914;
      func_0x00010c17a6a0(param_1 + 20.0,
                          *(double *)(param_2 + _DAT_11277290c) +
                          *(double *)(param_2 + _DAT_112772908 + 8) * 0.5,
                          *(undefined8 *)(param_2 + lVar4));
      lVar2 = *(long *)(param_2 + _DAT_112772904);
      func_0x00010bf8c620();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010bf529e0();
      uVar5 = 0;
      if (lVar1 != 0) {
        uVar5 = 0x3ff0000000000000;
      }
      func_0x00010c1677c0(uVar5,*(undefined8 *)(param_2 + lVar4));
      _objc_release(lVar2);
      uVar5 = *(undefined8 *)(param_2 + lVar4);
      uVar3 = 0;
    }
    func_0x00010c1a7f60(uVar5,param_3,uVar3);
    uVar5 = *(undefined8 *)(param_2 + lVar4);
    _objc_retain(uVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107fac76c; end: 107faca77; -[SCTimelineThumbnailsCollectionViewFlowLayout _frameCoveringAllExpandedCells] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107fac76c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = (long)_DAT_112772920;
  lVar6 = (long)_DAT_112772924;
  uVar7 = *(undefined8 *)(param_5 + lVar4);
  _objc_retain(uVar7);
  lVar6 = param_5 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar6;
  func_0x00010c080fc0();
  _objc_release(lVar6);
  if ((int)lVar2 == 0) {
    lVar6 = (long)_DAT_11277291c;
    uVar3 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar9 = param_1;
    dVar13 = param_2;
    uVar15 = param_3;
    uVar16 = param_4;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010c089820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(uVar3);
    lVar6 = *(long *)(param_5 + lVar6);
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    dVar9 = param_1;
    dVar13 = param_2;
    uVar15 = param_3;
    uVar16 = param_4;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c089820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(uVar3);
    lVar6 = *(long *)(param_5 + lVar4);
    _objc_retain(lVar6);
  }
  _objc_release(uVar7);
  dVar10 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar11 = dVar9;
  dVar14 = dVar13;
  _CGRectGetHeight(dVar9,dVar13,uVar15,uVar16);
  dVar12 = 0.0;
  _objc_retain(lVar6);
  lVar4 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    dVar17 = dVar11;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      func_0x00010bdc1080(uVar7);
      if (dVar14 <= dVar10) {
        dVar10 = dVar14;
      }
      func_0x00010bdc1080(uVar7);
      _CGRectGetHeight();
      dVar11 = dVar12;
      if (dVar12 <= dVar17) {
        dVar11 = dVar17;
      }
      lVar8 = lVar8 + 1;
      dVar17 = dVar11;
    } while (lVar4 != lVar8);
    lVar4 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  dVar10 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetMaxX(dVar9,dVar13,uVar15,uVar16);
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010bfb68e0(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010c2971b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_valueWithCGRect__112683690);
    return param_1;
  }
  return dVar10;
}



/* Entry: 107faca78; end: 107facaa3;  */

void FUN_107faca78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010bfb68e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c2971b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_valueWithCGRect__112683690);
  return;
}



/* Entry: 107facaa4; end: 107facb73; -[SCTimelineThumbnailsCollectionViewFlowLayout _defaultContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107facaa4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  lVar1 = param_2 + _DAT_112772924;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c080fc0();
  if ((int)lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_11277291c);
    func_0x00010c089820(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112772910);
    _objc_retain(uVar3);
  }
  _objc_release(lVar1);
  func_0x00010bfb68e0(uVar3);
  _CGRectGetMaxX();
  dVar4 = param_1 + 20.0;
  func_0x00010bf40120(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(param_2);
  _objc_release(uVar3);
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = dVar4;
  return auVar5;
}



/* Entry: 107facb74; end: 107facbb3; -[SCTimelineThumbnailsCollectionViewFlowLayout _shouldHaveFooterView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107facb74(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772904;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010bf09aa0();
  if (iVar1 != 0) {
    func_0x00010c28fca0(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 107facbb4; end: 107facbd3; -[SCTimelineThumbnailsCollectionViewFlowLayout delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107facbb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112772924);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107facbd4; end: 107facbe7; -[SCTimelineThumbnailsCollectionViewFlowLayout setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107facbd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112772924,param_3);
  return;
}


