/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b878dcc; end: 10b878ddf; -[SIGThumbnailReorderCollectionView setDragActionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b878dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112795380,param_3);
  return;
}



/* Entry: 10b878de0; end: 10b878dff; -[SIGThumbnailReorderCollectionView reorderDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b878de0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112795378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b878e00; end: 10b878e87; -[SIGThumbnailReorderCollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b878e00(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112795378);
  _objc_destroyWeak(param_1 + _DAT_112795380);
  _objc_storeStrong(param_1 + _DAT_11279538c,0);
  _objc_storeStrong(param_1 + _DAT_11279537c,0);
  _objc_storeStrong(param_1 + _DAT_112795388,0);
  _objc_storeStrong(param_1 + _DAT_112795374,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795370,0);
  return;
}



/* Entry: 10b878e88; end: 10b878f17; -[SIGThumbnailReorderCollectionViewFlowLayout init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b878e88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b748;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126e18d0);
    func_0x00010c126020(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112795390);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795390) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112795394);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795394) = 0;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b878f18; end: 10b878f57; -[SIGThumbnailReorderCollectionViewFlowLayout showSeparatorAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b878f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795390);
  *(undefined8 *)(param_1 + _DAT_112795390) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c069ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateLayout_1125f8208);
  return;
}



/* Entry: 10b878f58; end: 10b878feb; -[SIGThumbnailReorderCollectionViewFlowLayout itemSize] */

undefined1  [16]
FUN_10b878f58(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  auVar2._0_8_ = (double)(float)(int)((param_1 + -9.0) * 0.25);
  auVar2._8_8_ = 0x4064400000000000;
  return auVar2;
}



/* Entry: 10b878fec; end: 10b87906f; -[SIGThumbnailReorderCollectionViewFlowLayout finalLayoutAttributesForDisappearingItemAtIndexPath:] */

void FUN_10b878fec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_60 [48];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b748;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_finalLayoutAttributesForDisappea_112527a20);
  _objc_retainAutoreleasedReturnValue();
  _CGAffineTransformMakeScale(auStack_60,0,0);
  func_0x00010c219960(puVar1);
  func_0x00010c1677c0(0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b879070; end: 10b8792c7; -[SIGThumbnailReorderCollectionViewFlowLayout layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b879070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 ***param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 unaff_x22;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 ***pppuVar15;
  double dVar16;
  double dVar17;
  undefined8 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [128];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = PTR_PTR_11270b748;
  pppuVar3 = &ppuStack_130;
  ppuStack_130 = param_5;
  _objc_msgSendSuper2(pppuVar3,PTR_s_layoutAttributesForElementsInRec_112600c60);
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = pppuVar3;
  func_0x00010c0d3c80();
  pppuVar5 = pppuVar3;
  _objc_release();
  lVar13 = (long)_DAT_112795390;
  puVar9 = (undefined1 *)0x0;
  if (*(long *)((long)param_5 + lVar13) != 0) {
    pppuVar3 = param_5;
    func_0x00010c08c900();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = 0.0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    _objc_retain(pppuVar4);
    puVar9 = auStack_120;
    pppuVar5 = pppuVar4;
    func_0x00010bf52a60();
    if (pppuVar5 != (undefined8 ***)0x0) {
      lVar14 = *plStack_160;
      do {
        pppuVar15 = (undefined8 ***)0x0;
        do {
          if (*plStack_160 != lVar14) {
            _objc_enumerationMutation(pppuVar4);
          }
          uVar12 = *(ulong *)(lStack_168 + (long)pppuVar15 * 8);
          uVar6 = uVar12;
          func_0x00010bfecf20();
          _objc_retainAutoreleasedReturnValue();
          if (*(long *)((long)param_5 + lVar13) != 0) {
            uVar11 = uVar6;
            func_0x00010c142240();
            uVar10 = uVar11 + 3;
            if (-1 < (long)uVar11) {
              uVar10 = uVar11;
            }
            lVar7 = *(long *)((long)param_5 + lVar13);
            func_0x00010c142240();
            lVar1 = lVar7 + 3;
            if (-1 < lVar7) {
              lVar1 = lVar7;
            }
            if ((long)uVar10 >> 2 == lVar1 >> 2) {
              func_0x00010bfb68e0(uVar12);
              uVar11 = uVar6;
              func_0x00010c142240();
              uVar10 = uVar11 & 3;
              if (-1 < (long)-uVar11) {
                uVar10 = -(-uVar11 & 3);
              }
              uVar8 = *(ulong *)((long)param_5 + lVar13);
              func_0x00010c142240();
              uVar11 = uVar8 & 3;
              if (-1 < (long)-uVar8) {
                uVar11 = -(-uVar8 & 3);
              }
              dVar16 = -5.0;
              if ((long)uVar11 <= (long)uVar10) {
                dVar16 = 5.0;
              }
              dVar17 = dVar17 + dVar16;
              func_0x00010c19f0e0(dVar17,param_2,param_3,param_4,uVar12);
            }
          }
          _objc_release(uVar6);
          pppuVar15 = (undefined8 ***)((long)pppuVar15 + 1);
        } while (pppuVar5 != pppuVar15);
        puVar9 = auStack_120;
        pppuVar5 = pppuVar4;
        func_0x00010bf52a60();
        unaff_x22 = 0;
      } while (pppuVar5 != (undefined8 ***)0x0);
    }
    _objc_release(pppuVar4);
    func_0x00010befa120(pppuVar4);
    pppuVar5 = pppuVar3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    puVar2 = PTR_s_layoutAttributesForItemAtIndexPa_112600c70;
    pppuVar15 = &ppuStack_1b0;
    pcStack_178 = FUN_10b8792c8;
    puStack_1a8 = PTR_PTR_11270b748;
    ppuStack_1b0 = pppuVar5;
    uStack_1a0 = unaff_x22;
    ppuStack_198 = pppuVar3;
    ppuStack_190 = pppuVar4;
    ppuStack_188 = param_5;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    _objc_msgSendSuper2(&ppuStack_1b0,puVar2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010be48d00(pppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(pppuVar15);
    pppuVar4 = pppuVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar4);
  return;
}



/* Entry: 10b8792c8; end: 10b87935f; -[SIGThumbnailReorderCollectionViewFlowLayout layoutAttributesForDecorationViewOfKind:atIndexPath:] */

void FUN_10b8792c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_layoutAttributesForItemAtIndexPa_112600c70;
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_11270b748;
  uStack_40 = param_1;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010be48d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b879360; end: 10b87941b; -[SIGThumbnailReorderCollectionViewFlowLayout initialLayoutAttributesForAppearingDecorationElementOfKind:atIndexPath:] */

void FUN_10b879360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b748;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initialLayoutAttributesForAppear_112527a18,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x00010c08c900(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfb68e0(puVar1);
    func_0x00010be48d00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b87941c; end: 10b8794d7; -[SIGThumbnailReorderCollectionViewFlowLayout finalLayoutAttributesForDisappearingDecorationElementOfKind:atIndexPath:] */

void FUN_10b87941c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b748;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_finalLayoutAttributesForDisappea_112527a20,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x00010c08c900(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfb68e0(puVar1);
    func_0x00010be48d00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b8794d8; end: 10b879577; -[SIGThumbnailReorderCollectionViewFlowLayout _layoutAttributesForMyDecoratinoView:cellFrame:] */

void FUN_10b8794d8(double param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  func_0x00010c08c920(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_6,
                      &PTR____CFConstantStringClassReference_110f8ac58,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  func_0x00010c1a7f60(puVar1,param_6,0);
  func_0x00010c19f0e0(param_1 + -3.0,param_2 + 5.0,0x4008000000000000,param_4 + -10.0,puVar1);
  func_0x00010c227920(puVar1,param_6,1000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b879578; end: 10b8795b7; -[SIGThumbnailReorderCollectionViewFlowLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b879578(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795394,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795390,0);
  return;
}



/* Entry: 10b8795b8; end: 10b8795bf; -[SIGTray initWithTrayViewController:] */

void FUN_10b8795b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c055650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTrayViewController_useSp_1125f2fa0,param_3,0);
  return;
}



/* Entry: 10b8795c0; end: 10b8795c7; -[SIGTray initWithTrayViewController:useSpringAnimation:] */

void FUN_10b8795c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c055670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTrayViewController_useSp_1125f2fa8,param_3,param_4,8);
  return;
}



/* Entry: 10b8795c8; end: 10b87986b; -[SIGTray initWithTrayViewController:useSpringAnimation:initialTrayPosition:] */

undefined1 *
FUN_10b8795c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b750;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 200) = param_4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_3;
    _objc_release(uVar2);
    puVar4 = PTR_DAT_1126a5600;
    _objc_retain(param_3);
    uVar3 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    uVar2 = param_3;
    if ((int)uVar3 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = 1;
    *(undefined1 *)((long)puVar1 + 0x38) = 1;
    *(undefined1 *)((long)puVar1 + 0x111) = 1;
    *(undefined8 *)((long)puVar1 + 0x20) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + 0x18) = 0x3fd99999a0000000;
    *(undefined8 *)((long)puVar1 + 0x88) = param_5;
    *(undefined8 *)((long)puVar1 + 0x60) = 3;
    *(undefined8 *)((long)puVar1 + 0x70) = 0x4024000000000000;
    *(undefined8 *)((long)puVar1 + 0x120) = 0x3fd99999a0000000;
    puVar4 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(uVar2);
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + 0x40));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + 0x40));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + 0x40));
    *(undefined8 *)((long)puVar1 + 0x118) = 10;
    *(undefined1 *)((long)puVar1 + 0x110) = 0;
    *(undefined1 *)((long)puVar1 + 0x114) = 0;
    if (*(char *)((long)puVar1 + 200) == '\x01') {
      puVar4 = PTR_PTR_1126dbc18;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + 0xd8);
      *(undefined **)((long)puVar1 + 0xd8) = puVar4;
      _objc_release(uVar2);
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + 0xd8));
      uVar2 = *(undefined8 *)((long)puVar1 + 0xd8);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(uVar2);
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_new();
      uVar2 = *(undefined8 *)((long)puVar1 + 0xd0);
      *(undefined **)((long)puVar1 + 0xd0) = puVar4;
      _objc_release(uVar2);
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + 0xd0));
    }
    puVar4 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    func_0x00010c00ee20();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined **)((long)puVar1 + 0xc0) = puVar5;
    _objc_release(uVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + 0xc0));
    puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined **)((long)puVar1 + 0xb8) = puVar5;
    _objc_release(uVar2);
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + 0x40));
    func_0x00010be88220(puVar1);
    func_0x00010bec5ae0(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b87986c; end: 10b87987b; -[SIGTray presentInUIContainer:] */

void FUN_10b87986c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),param_1,
             PTR_s_presentInUIContainer_withPullBar_112620be8,param_3,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 10b87987c; end: 10b879927; -[SIGTray presentInUIContainer:withPullBar:withDefaultTrayHeightPercentage:withInitialPosition:] */

void FUN_10b87987c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126e18d8;
  _objc_alloc(PTR_PTR_1126e18d8);
  lVar2 = param_2 + 0x128;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c055540(param_1,puVar1,param_3,param_2,param_5,param_6,lVar2);
  _objc_release(lVar2);
  func_0x00010bf0c980(param_4,param_3,puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = param_4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b879928; end: 10b879b0b; -[SIGTray presentIn:] */

void FUN_10b879928(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010bef7700(param_3);
  func_0x00010bf17b00(*(undefined8 *)(param_1 + 0x58));
  _objc_storeWeak(param_1 + 0x50,param_3);
  lVar3 = param_1 + 0x128;
  _objc_loadWeakRetained();
  _objc_release();
  puVar1 = PTR_DAT_1126a5cd8;
  if (lVar3 == 0) {
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x000107c318f8(param_3,puVar1);
    _objc_release(param_3);
    uVar5 = param_3;
    if ((int)uVar2 == 0) {
      uVar5 = 0;
    }
    _objc_storeWeak(param_1 + 0x128,uVar5);
  }
  func_0x00010beaace0(param_1);
  if (*(char *)(param_1 + 200) == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    lVar3 = *(long *)(param_1 + 0x58);
    func_0x00010c29bf00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar5);
  }
  else {
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar4);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  func_0x00010beaf420(param_1);
  func_0x00010bead6c0(param_1);
  func_0x00010be3cd00(param_1);
  if (*(char *)(param_1 + 0x114) == '\x01') {
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
  }
  else {
    func_0x00010bea8b40(param_1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf77e80(uVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b879b0c; end: 10b879b1b;  */

void FUN_10b879b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__setTrayPosition_forPresentation_112587c78,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88),1);
  return;
}



/* Entry: 10b879b1c; end: 10b879c57; -[SIGTray _setupBackgroundViews] */

void FUN_10b879b1c(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 200);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x00010befbb60(lVar3,param_2,*(undefined8 *)(param_1 + 0xd8));
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0xd8),param_2,*(undefined8 *)(param_1 + 0x40));
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0xd8),param_2,*(undefined8 *)(param_1 + 0xc0));
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0xd8),param_2,*(undefined8 *)(param_1 + 0xd0));
    func_0x00010beae9c0(param_1,param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x58));
  }
  else {
    func_0x00010befbb60(lVar3,param_2,*(undefined8 *)(param_1 + 0x40));
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10b879c58; end: 10b879c9b; -[SIGTray presentIn:withPullBar:] */

void FUN_10b879c58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x28) = param_4;
  _objc_retain(param_3);
  func_0x00010be88220(param_1);
  func_0x00010c10c540(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b879c9c; end: 10b879ca3; -[SIGTray presentIn:withPullBar:withDefaultTrayHeightPercentage:] */

void FUN_10b879c9c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c10c590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_presentIn_withPullBar__112620b80);
  return;
}



/* Entry: 10b879ca4; end: 10b879cab; -[SIGTray presentIn:withPullBar:withDefaultTrayHeightPercentage:withInitialPosition:] */

void FUN_10b879ca4(long param_1)

{
  undefined8 in_x4;
  
  *(undefined8 *)(param_1 + 0x88) = in_x4;
                    /* WARNING: Could not recover jumptable at 0x00010c10c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentIn_withPullBar_withDefaul_112620b88);
  return;
}



/* Entry: 10b879cac; end: 10b879cbf; -[SIGTray dismissAnimated:] */

void FUN_10b879cac(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setTrayPosition_forPresentation_112587c78,2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be02270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss_11255e238);
  return;
}



/* Entry: 10b879cc0; end: 10b879d0f; -[SIGTray setAutomaticallyDismissOnTouch:] */

void FUN_10b879cc0(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  
  if (*(byte *)(param_1 + 0x111) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x111) = (char)param_3;
  if ((param_3 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x110);
  }
  else {
    bVar1 = 1;
  }
  func_0x00010c195460(*(undefined8 *)(param_1 + 0xb8),param_2,bVar1 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bec5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stylize_11258f060);
  return;
}



/* Entry: 10b879d10; end: 10b879d27; -[SIGTray setFullScreenTrayHeightPercentage:] */

void FUN_10b879d10(double param_1,long param_2)

{
  if (*(double *)(param_2 + 0x20) != param_1) {
    *(double *)(param_2 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010be88230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__refreshAllowedHeights_11257fa28);
    return;
  }
  return;
}



/* Entry: 10b879d28; end: 10b879d3f; -[SIGTray setPosition:] */

void FUN_10b879d28(long param_1,undefined8 param_2,ulong param_3)

{
  if ((*(ulong *)(param_1 + 0x118) & param_3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setTrayPosition_forPresentation_112587c78,param_3,0);
    return;
  }
  return;
}



/* Entry: 10b879d40; end: 10b879d57; -[SIGTray setTransparentBackground:] */

void FUN_10b879d40(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x112) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x112) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bec5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stylize_11258f060);
  return;
}



/* Entry: 10b879d58; end: 10b879d6f; -[SIGTray setTrayBackgroundStyle:] */

void FUN_10b879d58(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x60) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bec5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stylize_11258f060);
  return;
}



/* Entry: 10b879d70; end: 10b879d87; -[SIGTray setTrayBackgroundBlur:] */

void FUN_10b879d70(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x68) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x68) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bec5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stylize_11258f060);
  return;
}



/* Entry: 10b879d88; end: 10b879d9f; -[SIGTray setShowHandle:] */

void FUN_10b879d88(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x38) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x38) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010beaf430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupPullBar_1125896b0);
  return;
}



/* Entry: 10b879da0; end: 10b879db7; -[SIGTray setAllowedPositions:] */

void FUN_10b879da0(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x118) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x118) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be88230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshAllowedHeights_11257fa28);
  return;
}



/* Entry: 10b879db8; end: 10b879e97; -[SIGTray setCornerRadius:] */

/* WARNING: Possible PIC construction at 0x00010b879e14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b879e18) */

void FUN_10b879db8(double param_1,long param_2)

{
  if (*(double *)(param_2 + 0x70) == param_1) {
    return;
  }
  *(double *)(param_2 + 0x70) = param_1;
  if (*(long *)(param_2 + 0x28) == 0) {
    func_0x00010c29bf00(*(undefined8 *)(param_2 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_2 + 0x30) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1842f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1);
  return;
}



/* Entry: 10b879e98; end: 10b879f6b; -[SIGTray _setupOverscrollBackgroundWithPullBarType:trayViewController:] */

void FUN_10b879e98(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  if (param_3 - 1U < 2) {
    puVar1 = param_1;
    func_0x00010bdd2240();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
  }
  else {
    if (param_3 != 0) {
      puVar2 = (undefined *)0x0;
      goto LAB_10b879f44;
    }
    puVar1 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
LAB_10b879f44:
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0xd0),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b879f6c; end: 10b87a16f; -[SIGTray _setupPullBar] */

/* WARNING: Possible PIC construction at 0x00010b879fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b87a048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b879fbc) */
/* WARNING: Removing unreachable block (ram,0x00010b87a0ac) */
/* WARNING: Removing unreachable block (ram,0x00010b879fd4) */
/* WARNING: Removing unreachable block (ram,0x00010b87a148) */
/* WARNING: Removing unreachable block (ram,0x00010b87a04c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10b879f6c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010c12c960();
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c29bf00(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c29bf00(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1842f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1);
  return;
}



/* Entry: 10b87a170; end: 10b87a1bb; -[SIGTray _installGestureRecognizer] */

/* WARNING: Possible PIC construction at 0x00010b87a19c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b87a1a0) */

void FUN_10b87a170(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010be3cdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__installPanGestureRecognizerOnVi_11256cd18,uVar1);
  return;
}



/* Entry: 10b87a1bc; end: 10b87a1f3; -[SIGTray _maxNonBounceTrayViewHeight] */

double FUN_10b87a1bc(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  dVar2 = 23.0;
  if (1 < *(long *)(param_1 + 0x28) - 1U) {
    dVar2 = 0.0;
  }
  func_0x00010be206c0(0);
  return dVar1 - dVar2;
}



/* Entry: 10b87a1f4; end: 10b87b033; -[SIGTray _setupLayoutConstraints] */

void FUN_10b87a1f4(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lVar42;
  double dVar43;
  
  lVar42 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_5 + 0x50;
  _objc_loadWeakRetained(lVar7);
  lVar1 = lVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9680();
  _objc_release(lVar1);
  _objc_release(lVar7);
  func_0x00010bed5aa0(param_5);
  if (*(long *)(param_5 + 0x28) - 1U < 2) {
    if (*(char *)(param_5 + 200) == '\x01') {
      func_0x00010befbb60(*(undefined8 *)(param_5 + 0xd8));
    }
    else {
      lVar7 = param_5 + 0x50;
      _objc_loadWeakRetained(lVar7);
      lVar1 = lVar7;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar1);
      _objc_release(lVar7);
    }
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + 0x90);
    func_0x00010c2a5060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x90);
    func_0x00010c274200(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar9);
    _objc_release(puVar6);
    _objc_release(uVar41);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar7 = *(long *)(param_5 + 0x30);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_5 + 0x28) == 0) {
    lVar7 = *(long *)(param_5 + 0x90);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar7 = 0;
  }
  uVar8 = *(undefined8 *)(param_5 + 0x58);
  func_0x00010c29bf00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_5 + 0xc0));
  func_0x00010c219b60(*(undefined8 *)(param_5 + 0x40));
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (*(char *)(param_5 + 200) == '\x01') {
    func_0x00010be5dc60(param_5);
    uVar10 = *(undefined8 *)(param_5 + 0xd0);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_5 + 0xd0);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5 + 0x50;
    _objc_loadWeakRetained();
    lVar12 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_5 + 0xd0);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_5 + 0x50;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_5 + 0xd0);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar18;
    func_0x00010bf49420(param_1 + param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_5 + 0xd8);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_5;
    func_0x00010becf820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_5 + 0xd8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_5 + 0x50;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_5 + 0xd8);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_5 + 0x50;
    _objc_loadWeakRetained(lVar26);
    lVar27 = lVar26;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar27;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(param_5 + 0xd8);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = param_5;
    func_0x00010becf7e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar30;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar9);
    _objc_release(puVar6);
    _objc_release(uVar32);
    _objc_release(lVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(uVar25);
    _objc_release(uVar5);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(uVar21);
    _objc_release(uVar4);
    _objc_release(lVar20);
    _objc_release(uVar19);
    _objc_release(uVar3);
    _objc_release(uVar18);
    _objc_release(uVar2);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(uVar14);
    _objc_release(uVar41);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar1);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar10);
    uVar2 = *(undefined8 *)(param_5 + 0x58);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar8;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar2);
    func_0x00010befa120(puVar9);
    uVar8 = *(undefined8 *)(param_5 + 0x108);
    *(undefined8 *)(param_5 + 0x108) = uVar41;
    _objc_retain(uVar41);
    _objc_release(uVar8);
    uVar2 = *(undefined8 *)(param_5 + 0x58);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + 0x90);
    func_0x00010bf1ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar41);
    uVar41 = uVar8;
    func_0x00010bf49460(uVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_5 + 0x58);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + 0x90);
    func_0x00010bf1ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar8;
    func_0x00010bf493a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010befa120(puVar9);
  _objc_release(uVar41);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar2);
  uVar18 = *(undefined8 *)(param_5 + 0x58);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_5 + 0x58);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar19;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_5 + 0xc0);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_5 + 0xc0);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar33;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_5 + 0xc0);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar35;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5 + 0x50;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar37;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_5 + 0x50;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar38;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_5 + 0x50;
  _objc_loadWeakRetained();
  lVar20 = lVar22;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar20;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar39;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_5 + 0x50;
  _objc_loadWeakRetained(lVar26);
  lVar24 = lVar26;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar24;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar40;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar9);
  _objc_release(puVar6);
  _objc_release(uVar14);
  _objc_release(lVar27);
  _objc_release(lVar24);
  _objc_release(lVar26);
  _objc_release(uVar40);
  _objc_release(uVar11);
  _objc_release(lVar23);
  _objc_release(lVar20);
  _objc_release(lVar22);
  _objc_release(uVar39);
  _objc_release(uVar10);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(uVar38);
  _objc_release(uVar32);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(uVar37);
  _objc_release(uVar29);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar5);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar4);
  _objc_release(uVar30);
  _objc_release(uVar25);
  _objc_release(uVar3);
  _objc_release(uVar21);
  _objc_release(uVar2);
  _objc_release(uVar19);
  _objc_release(uVar41);
  _objc_release(uVar8);
  _objc_release(uVar18);
  if (*(char *)(param_5 + 200) == '\x01') {
    lVar1 = param_5;
    func_0x00010bed03c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar15 = param_5 + 0x50;
      _objc_loadWeakRetained(lVar15);
      lVar22 = lVar15;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar22;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar22);
      _objc_release(lVar15);
      lVar15 = param_5 + 0x50;
      _objc_loadWeakRetained(lVar15);
      lVar22 = lVar15;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _objc_release(lVar22);
      _objc_release(lVar15);
      param_1 = param_4;
    }
    else {
      lVar26 = lVar1;
      func_0x00010c274200(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cd20(lVar1);
      param_1 = param_4;
    }
    uVar41 = *(undefined8 *)(param_5 + 0x90);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar41;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_5 + 0xa0);
    *(undefined8 *)(param_5 + 0xa0) = uVar8;
    _objc_release(uVar2);
    _objc_release(uVar41);
    func_0x00010befa120(puVar9);
    _objc_release(lVar26);
    _objc_release(lVar1);
  }
  lVar15 = param_5;
  func_0x00010becf840();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_5;
  func_0x00010becf7e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar9);
  _objc_release(puVar6);
  _objc_release(uVar41);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar2);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar1 = param_5 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar26 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(lVar26);
  _objc_release(lVar1);
  param_5 = param_5 + 0x50;
  _objc_loadWeakRetained();
  lVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(lVar22);
  _objc_release(lVar15);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar42) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be5dc60();
  dVar43 = param_1;
  func_0x00010bf49220(*(undefined8 *)(lVar7 + 0x108));
  if (dVar43 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(undefined8 *)(lVar7 + 0x108),PTR_s_setConstant__11263de70);
    return;
  }
  return;
}



/* Entry: 10b87b034; end: 10b87b087; -[SIGTray _updateTrayContentHeight] */

void FUN_10b87b034(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010be5dc60();
  dVar1 = param_1;
  func_0x00010bf49220(*(undefined8 *)(param_2 + 0x108));
  if (dVar1 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(undefined8 *)(param_2 + 0x108),PTR_s_setConstant__11263de70);
    return;
  }
  return;
}



/* Entry: 10b87b088; end: 10b87b093; -[SIGTray _setTrayPosition:forPresentation:] */

void FUN_10b87b088(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea8b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,PTR_s__setTrayPosition_forPresentation_112587c80);
  return;
}



/* Entry: 10b87b094; end: 10b87b3a7; -[SIGTray _setTrayPosition:forPresentation:withVelocity:] */

void FUN_10b87b094(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  
  if ((*(byte *)(param_3 + 200) & 1) == 0) {
    func_0x00010c2559c0(*(undefined8 *)(param_3 + 0xe0),param_4,0);
    lVar2 = *(long *)(param_3 + 0xe0);
    func_0x00010c252440();
    if (lVar2 == 2) {
      func_0x00010bfaf6c0(*(undefined8 *)(param_3 + 0xe0),param_4,2);
    }
    uVar3 = *(undefined8 *)(param_3 + 0xe0);
    *(undefined8 *)(param_3 + 0xe0) = 0;
    _objc_release(uVar3);
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10b87b3a8;
  puStack_98 = &UNK_110848c48;
  ppuVar4 = &puStack_b0;
  lStack_90 = param_3;
  lStack_88 = param_5;
  _objc_retainBlock(ppuVar4);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10b87b430;
  puStack_d0 = &UNK_110959ff8;
  ppuVar5 = &puStack_e8;
  lStack_c8 = param_3;
  lStack_c0 = param_5;
  uStack_b8 = param_6;
  _objc_retainBlock();
  func_0x00010be1e400(param_3);
  dVar9 = param_1;
  func_0x00010bed5aa0(param_3,param_4,param_5);
  if (*(char *)(param_3 + 200) == '\x01') {
    *(undefined8 *)(param_3 + 0x78) = 1;
    lVar2 = param_3 + 0x128;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c27b120();
    _objc_release(lVar2);
    func_0x00010be1f8e0(param_3,param_4,param_5);
    dVar9 = dVar9 - param_1;
    *(double *)(param_3 + 0xe8) = dVar9;
    if ((dVar9 <= 0.0) || (0.0 <= param_2)) {
      dVar10 = 0.0;
      if ((dVar9 < 0.0) && (0.0 < param_2)) {
        dVar10 = -param_2 / dVar9;
      }
    }
    else {
      dVar10 = param_2 / dVar9;
    }
    uVar3 = 0x4034000000000000;
    if (param_5 != 2) {
      uVar3 = 0x402c000000000000;
    }
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230;
    _objc_alloc(PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230);
    func_0x00010c028a80(0x3fe3333333333333,0x4069000000000000,uVar3,0,dVar10);
    puVar7 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc();
    func_0x00010c00eb20(0x3ff0000000000000);
    uVar3 = *(undefined8 *)(param_3 + 0xe0);
    *(undefined **)(param_3 + 0xe0) = puVar7;
    _objc_release(uVar3);
    func_0x00010bef6cc0(*(undefined8 *)(param_3 + 0xe0),param_4,ppuVar4);
    uVar3 = *(undefined8 *)(param_3 + 0xe0);
    puStack_110 = puVar1;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x10b87b440;
    puStack_f8 = &UNK_110852668;
    ppuStack_f0 = ppuVar5;
    _objc_retain(ppuVar5);
    func_0x00010bef78c0(uVar3,param_4,&puStack_110);
    func_0x00010c24dc40(*(undefined8 *)(param_3 + 0xe0));
    func_0x00010bec2dc0(param_3);
    *(long *)(param_3 + 0xf8) = param_5;
    *(undefined1 *)(param_3 + 0x100) = param_6;
    func_0x00010bebf6a0(param_3);
    _objc_release(ppuStack_f0);
    ppuVar8 = ppuVar5;
  }
  else {
    func_0x00010bec2dc0(param_3);
    func_0x00010bebf6a0(param_3);
    ppuVar8 = *(undefined ***)(param_3 + 0xf0);
    _objc_retain(ppuVar8);
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_148 = puVar1;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_10b87b450;
    puStack_130 = &UNK_110866910;
    lStack_128 = param_3;
    ppuStack_120 = ppuVar8;
    ppuStack_118 = ppuVar5;
    _objc_retain(ppuVar5);
    _objc_retain(ppuVar8);
    func_0x00010bf03420(0x3fb99999a0000000,puVar7,param_4,ppuVar4,&puStack_148);
    _objc_release(ppuStack_118);
    _objc_release(ppuStack_120);
    ppuVar6 = ppuVar5;
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 10b87b3a8; end: 10b87b42f;  */

void FUN_10b87b3a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x130;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c27b0a0();
  _objc_release(lVar1);
  uVar3 = 0;
  if (*(long *)(param_1 + 0x28) != 2) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x120);
  }
  func_0x00010c1677c0(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
  lVar1 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b87b430; end: 10b87b44f;  */

void FUN_10b87b430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__trayAnimationCompleted_forPrese_112591788,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b87b450; end: 10b87b493;  */

void FUN_10b87b450(long param_1,undefined8 param_2)

{
  if (*(long *)(*(long *)(param_1 + 0x20) + 0xf0) == *(long *)(param_1 + 0x28)) {
    func_0x00010bec2dc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010b87b490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
  return;
}



/* Entry: 10b87b494; end: 10b87b533; -[SIGTray _startAnimationDisplayLink] */

void FUN_10b87b494(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                      PTR_s__onFrameTick_1125488f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined **)(param_1 + 0xf0) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1dffc0(0x42700000,0x42f00000,0x42f00000,*(undefined8 *)(param_1 + 0xf0));
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar2,param_2,puVar1,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b87b534; end: 10b87b56f; -[SIGTray _stopAnimationDisplayLink] */

void FUN_10b87b534(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xf0) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b87b570; end: 10b87b667; -[SIGTray _onFrameTick] */

void FUN_10b87b570(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = param_2 + 0x128;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c10f4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar6 = param_2 + 0x128;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c27b0e0();
    _objc_release(lVar6);
  }
  func_0x00010bfb6780(*(undefined8 *)(param_2 + 0xe0));
  if (0.25 < param_1) {
    func_0x00010becf780(param_2);
    *(undefined1 *)(param_2 + 0x101) = 1;
  }
  return;
}



/* Entry: 10b87b668; end: 10b87b7a3; -[SIGTray _performBounceAnimation] */

void FUN_10b87b668(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  double dStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  double dStack_68;
  
  if ((*(char *)(param_2 + 200) == '\x01') && (*(long *)(param_2 + 0xa0) != 0)) {
    func_0x00010bf49220();
    puVar2 = PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230;
    _objc_alloc(PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230);
    func_0x00010c028a80(0x3fe999999999999a,0x4072c00000000000,0x402e000000000000,0,0);
    puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
    func_0x00010c00eb20(0x3fd6666666666666);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10b87b7a4;
    puStack_78 = &UNK_110848c48;
    lStack_70 = param_2;
    dStack_68 = param_1 + 15.0;
    func_0x00010bef6cc0();
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x10b87b800;
    puStack_a8 = &UNK_110848c48;
    lStack_a0 = param_2;
    dStack_98 = param_1;
    func_0x00010bef6ce0(0x3fd999999999999a,puVar3,param_3,&puStack_c0);
    func_0x00010c24dc40(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 10b87b7a4; end: 10b87b85b;  */

void FUN_10b87b7a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c181140(*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0));
  lVar1 = *(long *)(param_1 + 0x20) + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b87b85c; end: 10b87b893; -[SIGTray _getCurrentHeight] */

double FUN_10b87b85c(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010becf800();
  dVar1 = param_1;
  func_0x00010bf49220(*(undefined8 *)(param_2 + 0xa0));
  return param_1 - dVar1;
}



/* Entry: 10b87b894; end: 10b87b937; -[SIGTray _updateConstraintForPosition:] */

void FUN_10b87b894(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  func_0x00010be1f8e0();
  if (*(char *)(param_2 + 200) == '\x01') {
    dVar5 = param_1;
    func_0x00010becf800(param_2);
    param_1 = dVar5 - param_1;
    lVar1 = *(long *)(param_2 + 0xa0);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x98);
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x90);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf49420(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x98);
      *(undefined8 *)(param_2 + 0x98) = uVar3;
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010c162480(*(undefined8 *)(param_2 + 0x98));
      lVar1 = *(long *)(param_2 + 0x98);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,lVar1,PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 10b87b938; end: 10b87b9df; -[SIGTray _trayAnimationCompleted:forPresentation:] */

void FUN_10b87b938(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  
  if (*(char *)(param_1 + 200) == '\x01') {
    if (*(char *)(param_1 + 0x101) == '\x01') {
      *(undefined1 *)(param_1 + 0x101) = 0;
      return;
    }
    func_0x00010bee29a0(param_1);
    func_0x00010bec2dc0(param_1);
  }
  if (param_4 != 0) {
    func_0x00010bf941a0(*(undefined8 *)(param_1 + 0x58));
  }
  *(long *)(param_1 + 0x78) = param_3;
  lVar1 = param_1 + 0x128;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c27b120();
  _objc_release(lVar1);
  if (param_3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be02270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss_11255e238);
  return;
}



/* Entry: 10b87b9e0; end: 10b87bb3b; -[SIGTray _dismiss] */

void FUN_10b87b9e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c2a6740(*(undefined8 *)(param_1 + 0x58),param_2,0);
  func_0x00010bf17b00(*(undefined8 *)(param_1 + 0x58));
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0xd8));
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0xd0));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0xc0));
  func_0x00010c12c8e0(*(undefined8 *)(param_1 + 0x58));
  func_0x00010bf941a0(*(undefined8 *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x48) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf6f440(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be32490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleTrayHostDismiss_11256a2c0);
  return;
}



/* Entry: 10b87bb3c; end: 10b87bb67;  */

void FUN_10b87bb3c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b87bb68; end: 10b87bbdb; -[SIGTray _handleTrayHostDismiss] */

void FUN_10b87bb68(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x128;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x128;
    _objc_loadWeakRetained(param_1);
    func_0x00010c27b2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b87bbdc; end: 10b87bcd3; -[SIGTray _refreshAllowedHeights] */

void FUN_10b87bbdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x118);
  if ((uVar4 >> 1 & 1) != 0) {
    func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111186230,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d45c0);
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x118);
  }
  if ((uVar4 >> 2 & 1) != 0) {
    func_0x00010c1d0560(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111186240,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d45d8);
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x118);
  }
  if ((uVar4 >> 3 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + 0x18),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,puVar2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d45f0);
    _objc_release(puVar2);
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x118);
  }
  if ((uVar4 >> 4 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + 0x20),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,puVar2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d4608);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b87bcd4; end: 10b87be13; -[SIGTray _stylize] */

void FUN_10b87bcd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  
  uVar3 = 0xd6;
  if (*(char *)(param_1 + 0x112) == '\0') {
    uVar3 = 0x7b;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
  _objc_release(puVar1);
  if ((*(char *)(param_1 + 0x112) == '\x01') && ((*(byte *)(param_1 + 0x111) & 1) == 0)) {
    bVar4 = *(byte *)(param_1 + 0x110) ^ 1;
  }
  else {
    bVar4 = 0;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x40),param_2,bVar4 & 1);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    lVar2 = param_1;
    func_0x00010bdd5000(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193d20(*(undefined8 *)(param_1 + 0xc0),param_2,lVar2);
    _objc_release(lVar2);
    bVar4 = *(byte *)(param_1 + 0x68) ^ 1;
  }
  else {
    bVar4 = 1;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0xc0),param_2,bVar4 & 1);
  lVar2 = param_1;
  func_0x00010bdd2240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bdd2240(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10b87be14; end: 10b87becb; -[SIGTray _installPanGestureRecognizerOnView:] */

void FUN_10b87be14(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c050900();
    func_0x00010c1ec5c0();
    func_0x00010c178280(puVar1,param_2,1);
    func_0x00010c18b5a0(puVar1,param_2,0);
    func_0x00010c18b5c0(puVar1,param_2,0);
    func_0x00010c18b5e0(puVar1,param_2,param_1);
    func_0x00010c1c3c20(puVar1,param_2,1);
    func_0x00010bef9040(param_3,param_2,puVar1);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b87becc; end: 10b87bf17; -[SIGTray _resolveTrayPosition:newOffset:] */

void FUN_10b87becc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be20c40();
  if (param_3 == uVar1) {
    return;
  }
  if ((*(ulong *)(param_1 + 0x118) & uVar1) != 0) {
    param_3 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setTrayPosition_forPresentation_112587c78,param_3,0);
  return;
}



/* Entry: 10b87bf18; end: 10b87bf73; -[SIGTray _getNextTrayPosition:newOffset:] */

ulong FUN_10b87bf18(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_4 == 0) {
LAB_10b87bf68:
    param_4 = 1;
  }
  else {
    uVar2 = param_4;
    if (param_1 <= 0.0) {
      if (param_1 < 0.0) {
        do {
          param_4 = param_4 * 2;
          if (0x10 < param_4) goto LAB_10b87bf68;
        } while ((*(ulong *)(param_2 + 0x118) & param_4) == 0);
      }
    }
    else {
      do {
        if (uVar2 < 2) goto LAB_10b87bf68;
        param_4 = uVar2 >> 1;
        uVar1 = uVar2 >> 1;
        uVar2 = param_4;
      } while ((*(ulong *)(param_2 + 0x118) & uVar1) == 0);
    }
  }
  return param_4;
}



/* Entry: 10b87bf74; end: 10b87c067; -[SIGTray _flingTrayWithVelocityFromGesture:] */

void FUN_10b87bf74(double param_1,double param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  ulong uVar2;
  double dVar3;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5);
  dVar3 = param_1;
  _objc_release(param_5);
  _objc_release(uVar1);
  if (*(char *)(param_3 + 200) == '\x01') {
    func_0x00010be1e400(param_3);
  }
  else {
    func_0x00010bf49220(*(undefined8 *)(param_3 + 0x98));
  }
  uVar2 = param_3;
  func_0x00010be218e0(dVar3 + (param_2 * -0.4000000059604645) / 2.0020026706730794);
  if ((*(ulong *)(param_3 + 0x118) & uVar2) == 0) {
    if ((uVar2 & 6) == 0) {
      return;
    }
    uVar2 = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea8b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,PTR_s__setTrayPosition_forPresentation_112587c80,uVar2,0);
  return;
}



/* Entry: 10b87c068; end: 10b87c43b; -[SIGTray _panGestureUpdated:] */

void FUN_10b87c068(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  
  _objc_retain(param_5);
  if (*(char *)(param_3 + 200) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_3 + 0xe0);
    func_0x00010c07cd60();
    if (iVar1 != 0) {
      dVar10 = *(double *)(param_3 + 0xe8);
      param_1 = -dVar10;
      if (0.0 <= dVar10) {
        param_1 = dVar10;
      }
      func_0x00010bfb6780(*(undefined8 *)(param_3 + 0xe0));
      param_1 = param_1 * dVar10;
      dVar10 = *(double *)(param_3 + 0xe8);
      param_2 = -dVar10;
      if (0.0 <= dVar10) {
        param_2 = dVar10;
      }
      param_2 = param_2 + -200.0;
      if (param_1 < param_2) goto LAB_10b87c388;
      func_0x00010c2559c0(*(undefined8 *)(param_3 + 0xe0));
      lVar2 = *(long *)(param_3 + 0xe0);
      func_0x00010c252440();
      if (lVar2 != 2) goto LAB_10b87c388;
      func_0x00010bfaf6c0(*(undefined8 *)(param_3 + 0xe0));
      uVar3 = *(undefined8 *)(param_3 + 0xe0);
      *(undefined8 *)(param_3 + 0xe0) = 0;
      _objc_release(uVar3);
    }
  }
  uVar4 = *(ulong *)(param_3 + 0xa8);
  if ((uVar4 != 0) &&
     (_objc_opt_respondsToSelector(uVar4,PTR_s_tray_canUseGestureToExpandOrColl_11267c658),
     (uVar4 & 1) != 0)) {
    iVar1 = (int)*(undefined8 *)(param_3 + 0xa8);
    func_0x00010c27b0c0();
    if (iVar1 == 0) goto LAB_10b87c388;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x58);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5);
  _objc_release(uVar3);
  lVar9 = *(long *)(param_3 + 0x78);
  lVar2 = param_3;
  func_0x00010bdca3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2827c0();
  _objc_release(lVar5);
  _objc_release(lVar2);
  uVar4 = *(ulong *)(param_3 + 0xa8);
  _objc_opt_respondsToSelector(uVar4,PTR_s_scrollViewForTray__112632508);
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_3 + 0xa8);
    func_0x00010c152ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c081660();
    _objc_release(uVar7);
    if ((lVar9 == lVar6) && ((int)uVar3 != 0)) {
      lVar2 = param_5;
      func_0x00010c252440();
      if ((lVar2 == 1) && (param_2 == 0.0)) {
        if (*(char *)(param_3 + 200) == '\x01') {
          func_0x00010be1e400(param_3);
        }
        else {
          func_0x00010bf49220(*(undefined8 *)(param_3 + 0x98));
        }
        *(double *)(param_3 + 0x10) = param_1;
        *(undefined8 *)(param_3 + 0x80) = *(undefined8 *)(param_3 + 0x78);
        *(undefined1 *)(param_3 + 9) = 1;
        goto LAB_10b87c388;
      }
      if (*(char *)(param_3 + 9) == '\x01') {
        if (param_2 == 0.0) goto LAB_10b87c388;
        *(bool *)(param_3 + 8) = 0.0 <= param_2;
        *(undefined1 *)(param_3 + 9) = 0;
      }
      if (param_2 < 0.0) goto LAB_10b87c388;
    }
  }
  lVar2 = param_5;
  func_0x00010c252440();
  if (lVar2 < 3) {
    if (lVar2 != 0) {
      if (lVar2 == 1) {
        if (*(char *)(param_3 + 200) == '\x01') {
          func_0x00010be1e400(param_3);
        }
        else {
          func_0x00010bf49220(*(undefined8 *)(param_3 + 0x98));
        }
        *(double *)(param_3 + 0x10) = param_1;
        *(undefined8 *)(param_3 + 0x80) = *(undefined8 *)(param_3 + 0x78);
        *(undefined1 *)(param_3 + 8) = 1;
      }
      else if ((lVar2 == 2) && (*(char *)(param_3 + 8) == '\x01')) {
        func_0x00010be206c0(param_3);
        param_2 = *(double *)(param_3 + 0x10) - param_2;
        if (param_1 < param_2) {
          param_2 = param_1 + (1.0 - 1.0 / (((param_2 - param_1) * 0.55) / 640.0 + 1.0)) * 640.0;
        }
        if (*(char *)(param_3 + 200) == '\x01') {
          func_0x00010becf800(param_3);
          lVar2 = 0xa0;
          dVar10 = param_1 - param_2;
        }
        else {
          lVar2 = 0x98;
          dVar10 = param_2;
        }
        func_0x00010c181140(dVar10,*(undefined8 *)(param_3 + lVar2));
        *(undefined8 *)(param_3 + 0x78) = 1;
        lVar2 = param_3 + 0x128;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c27b120();
        _objc_release(lVar2);
        uVar4 = param_3 + 0x128;
        _objc_loadWeakRetained();
        uVar8 = uVar4;
        _objc_opt_respondsToSelector();
        _objc_release(uVar4);
        if ((uVar8 & 1) != 0) {
          param_3 = param_3 + 0x128;
          _objc_loadWeakRetained(param_3);
          func_0x00010c27b0e0(param_2);
          _objc_release(param_3);
        }
      }
      goto LAB_10b87c388;
    }
  }
  else if (1 < lVar2 - 4U) {
    if (lVar2 != 3) goto LAB_10b87c388;
    if (*(char *)(param_3 + 8) == '\x01') {
      if (*(char *)(param_3 + 200) == '\x01') {
        func_0x00010be18080(param_3);
      }
      else {
        func_0x00010be94de0(param_2,param_3);
      }
    }
  }
  *(undefined1 *)(param_3 + 8) = 0;
LAB_10b87c388:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b87c43c; end: 10b87c46b; -[SIGTray _topMostPosition] */

undefined8 FUN_10b87c43c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x118);
  uVar1 = 2;
  if ((uVar3 & 4) != 0) {
    uVar1 = 4;
  }
  uVar2 = 8;
  if ((uVar3 & 8) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = 0x10;
  if ((uVar3 & 0x10) == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10b87c46c; end: 10b87c493; -[SIGTray _getMaxHeight] */

void FUN_10b87c46c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010becd5a0();
                    /* WARNING: Could not recover jumptable at 0x00010be1f8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getHeightForPosition__1125657d8,uVar1);
  return;
}



/* Entry: 10b87c494; end: 10b87c533; -[SIGTray _allowedPositionsArray] */

void FUN_10b87c494(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  uVar4 = 4;
  do {
    if ((*(ulong *)(param_1 + 0x118) & uVar4) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar3);
      _objc_release(puVar3);
    }
    bVar1 = uVar4 < 9;
    uVar4 = uVar4 << 1;
  } while (bVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b87c534; end: 10b87c6ef; -[SIGTray _getHeightForPosition:] */

double FUN_10b87c534(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double in_d3;
  double dVar11;
  
  dVar9 = 0.0;
  dVar11 = dVar9;
  if (param_3 != 2) {
    uVar2 = param_1 + 0x128;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
    }
    else {
      lVar4 = param_1 + 0x128;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c27b100();
      dVar11 = dVar9;
      _objc_release(lVar4);
      _objc_release(uVar2);
      bVar1 = 0.0 <= dVar9;
      dVar9 = dVar11;
      if (bVar1) {
        param_1 = param_1 + 0x128;
        _objc_loadWeakRetained(param_1);
        func_0x00010c27b100();
        _objc_release(param_1);
        return dVar11;
      }
    }
    func_0x00010becf800(param_1);
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    dVar10 = dVar9;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    fVar8 = SUB84(dVar10,0);
    _objc_release(uVar7);
    _objc_release(puVar5);
    if (param_3 == 0x10) {
      lVar4 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar4);
      lVar6 = lVar4;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c148fc0();
      dVar11 = dVar9 - dVar10;
      _objc_release(lVar6);
      _objc_release(lVar4);
    }
    else {
      dVar11 = dVar9;
      if (param_3 == 4) {
        func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x30));
        dVar11 = in_d3;
      }
    }
    dVar11 = dVar11 * (double)fVar8;
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    _objc_release(lVar4);
    _objc_release(param_1);
    if (dVar9 - dVar10 <= dVar11) {
      dVar11 = dVar9 - dVar10;
    }
  }
  return dVar11;
}



/* Entry: 10b87c6f0; end: 10b87c847; -[SIGTray _getPositionForHeight:] */

ulong FUN_10b87c6f0(double param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  
  uVar3 = param_2;
  dVar8 = param_1;
  func_0x00010bdca3a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 <= 0.0) {
    uVar6 = 2;
  }
  else {
    func_0x00010be206c0(param_2);
    if (dVar8 <= param_1) {
      uVar7 = uVar3;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c2827c0();
      _objc_release(uVar7);
    }
    else {
      uVar6 = uVar3;
      func_0x00010bf529e0();
      if (1 < uVar6) {
        uVar7 = 1;
        do {
          uVar4 = uVar3;
          func_0x00010c0dfd20(uVar3,param_3,uVar7 - 1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c2827c0();
          _objc_release(uVar4);
          uVar4 = uVar3;
          func_0x00010c0dfd20(uVar3,param_3,uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c2827c0();
          _objc_release(uVar4);
          func_0x00010be1f8e0(param_2,param_3,uVar6);
          dVar9 = dVar8;
          func_0x00010be1f8e0(param_2,param_3,uVar5);
          bVar1 = false;
          bVar2 = true;
          if (dVar8 <= param_1) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(param_1) && !NAN(dVar9)) {
              bVar1 = param_1 == dVar9;
              bVar2 = dVar9 <= param_1;
            }
          }
          if (!bVar2 || bVar1) {
            if (dVar8 + (dVar9 - dVar8) * 0.5 < param_1) {
              uVar6 = uVar5;
            }
            goto LAB_10b87c824;
          }
          uVar7 = uVar7 + 1;
          uVar6 = uVar3;
          func_0x00010bf529e0();
          dVar8 = dVar9;
        } while (uVar7 < uVar6);
      }
      uVar6 = 0xffffffffffffffff;
    }
  }
LAB_10b87c824:
  _objc_release(uVar3);
  return uVar6;
}



/* Entry: 10b87c848; end: 10b87c86b; -[SIGTray _backgroundViewTapped] */

void FUN_10b87c848(long param_1)

{
  if (((*(byte *)(param_1 + 0x111) & 1) == 0) && (*(char *)(param_1 + 0x110) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010be71690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performBounceAnimation_112579f40);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setTrayPosition_forPresentation_112587c78,2,0);
  return;
}



/* Entry: 10b87c86c; end: 10b87c92f; -[SIGTray _backgroundColorForCurrentStyle] */

void FUN_10b87c86c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = *(long *)(param_1 + 0x60);
    if (lVar2 < 2) {
      if (lVar2 == 0) {
        uVar1 = 0x21;
      }
      else {
        if (lVar2 != 1) goto LAB_10b87c928;
        uVar1 = 0xffffffff80000028;
      }
    }
    else {
      if (lVar2 != 2) {
        if (lVar2 == 4) {
          func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff80000028,0x2a);
          _objc_retainAutoreleasedReturnValue();
        }
        goto LAB_10b87c928;
      }
      uVar1 = 0xd5;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10b87c928:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b87c930; end: 10b87caf7; -[SIGTray _handleBackgroundColorForCurrentStyle] */

void FUN_10b87c930(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (((*(byte *)(param_1 + 0x38) & 1) == 0) && (lVar3 != 3)) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10b87ca90;
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    puVar4 = (undefined *)0x0;
    if (lVar3 < 2) {
      if (lVar3 == 0) goto LAB_10b87ca24;
      if (lVar3 != 1) goto LAB_10b87ca90;
LAB_10b87c9e8:
      uVar2 = 0xd5;
    }
    else {
      if (lVar3 != 2) {
        if (lVar3 != 4) goto LAB_10b87ca90;
        func_0x00010b87caa0();
        if ((param_1 & 1) == 0) goto LAB_10b87c9e8;
      }
      uVar2 = 0xd4;
    }
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf414e0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
    if (lVar3 < 2) {
      if (lVar3 == 0) {
LAB_10b87ca24:
        uVar2 = 0xce;
      }
      else {
        if (lVar3 != 1) goto LAB_10b87ca90;
        uVar2 = 0xffffffff800000c0;
      }
    }
    else {
      if (lVar3 != 2) {
        if (lVar3 == 4) {
          puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff800000c0,0xc0);
          _objc_retainAutoreleasedReturnValue();
        }
        goto LAB_10b87ca90;
      }
      uVar2 = 0x81;
    }
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10b87ca90:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87caf8; end: 10b87cbaf; -[SIGTray _blurEffectForCurrentStyle] */

void FUN_10b87caf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  if (*(char *)(param_1 + 0x68) == '\x01') {
    iVar2 = 0;
    lVar4 = *(long *)(param_1 + 0x60);
    if (lVar4 < 2) {
      if (lVar4 == 0) {
        uVar3 = 7;
      }
      else {
        if (lVar4 != 1) goto LAB_10b87cba4;
        uVar3 = 0x11;
      }
    }
    else if (lVar4 == 2) {
      uVar3 = 0xc;
    }
    else {
      if (lVar4 != 4) goto LAB_10b87cba4;
      func_0x00010b87caa0();
      uVar3 = 0xc;
      if (iVar2 == 0) {
        uVar3 = 0x11;
      }
    }
    func_0x00010bf8cf60(puVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10b87cba4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b87cbb0; end: 10b87cc2f; -[SIGTray _tryGetTrayHostLayoutGuide] */

void FUN_10b87cbb0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x128;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + 0x128;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c27b400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b87cc30; end: 10b87ccc7; -[SIGTray _trayHostTopLayoutAnchor] */

void FUN_10b87cc30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bed03c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    lVar3 = lVar1;
    func_0x00010c274200(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b87ccc8; end: 10b87cd5f; -[SIGTray _trayHostBottomLayoutAnchor] */

void FUN_10b87ccc8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bed03c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    lVar3 = lVar1;
    func_0x00010bf1ff80(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b87cd60; end: 10b87cdf7; -[SIGTray _trayHostWidthLayoutAnchor] */

void FUN_10b87cd60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bed03c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    lVar3 = lVar1;
    func_0x00010c2a5060(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b87cdf8; end: 10b87ce87; -[SIGTray _trayHostHeight] */

undefined8 FUN_10b87cdf8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 in_d3;
  
  lVar1 = param_1;
  func_0x00010bed03c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    func_0x00010c08cd20(lVar1);
  }
  _objc_release(lVar1);
  return in_d3;
}



/* Entry: 10b87ce88; end: 10b87cf93; -[SIGTray gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

bool FUN_10b87ce88(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  double dVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulong)param_1 >> 0x20);
  uVar7 = (undefined4)param_1;
  _objc_retain(param_5);
  uVar3 = *(ulong *)(param_2 + 0xa8);
  _objc_opt_respondsToSelector(uVar3,PTR_s_scrollViewForTray__112632508);
  if ((uVar3 & 1) == 0) {
    bVar6 = false;
    goto LAB_10b87cf74;
  }
  lVar4 = *(long *)(param_2 + 0xa8);
  func_0x00010c152ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == param_5) {
    func_0x00010be22540(param_2);
    if ((double)CONCAT44(uVar8,uVar7) < 0.0 || (double)CONCAT44(uVar8,uVar7) == 0.0) {
      bVar6 = true;
    }
    else {
      dVar1 = (double)CONCAT44(uVar8,uVar7);
      func_0x00010be22560(param_2);
      uVar3 = *(ulong *)(param_2 + 0xa8);
      _objc_opt_respondsToSelector(uVar3,PTR_s_trayCanExpandWhenScrollAtBottom__11267c680);
      if ((uVar3 & 1) == 0) goto LAB_10b87cef4;
      iVar2 = (int)*(undefined8 *)(param_2 + 0xa8);
      func_0x00010c27b160();
      bVar6 = false;
      if (iVar2 != 0) {
        bVar6 = (float)(int)(double)CONCAT44(uVar8,uVar7) <= (float)(int)dVar1;
      }
    }
  }
  else {
LAB_10b87cef4:
    bVar6 = false;
  }
  _objc_release(lVar4);
LAB_10b87cf74:
  _objc_release(param_5);
  return bVar6;
}



/* Entry: 10b87cf94; end: 10b87cfeb; -[SIGTray _getScrollViewContentOffset] */

double FUN_10b87cf94(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0xa8);
  func_0x00010c152ba0(uVar1,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  func_0x00010befda00(uVar1);
  _objc_release(uVar1);
  return param_2 + param_1;
}



/* Entry: 10b87cfec; end: 10b87d04f; -[SIGTray _getScrollViewMaxOffset] */

double FUN_10b87cfec(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                    undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_5 + 0xa8);
  func_0x00010c152ba0(uVar1,param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  func_0x00010bfb68e0(uVar1);
  func_0x00010befda00(uVar1);
  _objc_release(uVar1);
  return param_3 + (param_2 - param_4);
}



/* Entry: 10b87d050; end: 10b87d057; -[SIGTray willAutomaticallyDismissOnTouch] */

undefined1 FUN_10b87d050(long param_1)

{
  return *(undefined1 *)(param_1 + 0x111);
}



/* Entry: 10b87d058; end: 10b87d05f; -[SIGTray allowedPositions] */

undefined8 FUN_10b87d058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 10b87d060; end: 10b87d067; -[SIGTray hasTransparentBackground] */

undefined1 FUN_10b87d060(long param_1)

{
  return *(undefined1 *)(param_1 + 0x112);
}



/* Entry: 10b87d068; end: 10b87d06f; -[SIGTray trayBackgroundStyle] */

undefined8 FUN_10b87d068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b87d070; end: 10b87d077; -[SIGTray trayBackgroundBlur] */

undefined1 FUN_10b87d070(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 10b87d078; end: 10b87d07f; -[SIGTray showHandle] */

undefined1 FUN_10b87d078(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 10b87d080; end: 10b87d087; -[SIGTray cornerRadius] */

undefined8 FUN_10b87d080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b87d088; end: 10b87d08f; -[SIGTray backgroundAlpha] */

undefined8 FUN_10b87d088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 10b87d090; end: 10b87d097; -[SIGTray setBackgroundAlpha:] */

void FUN_10b87d090(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x120) = param_1;
  return;
}



/* Entry: 10b87d098; end: 10b87d09f; -[SIGTray passThroughTouchesWhenUsingUIContainer] */

undefined1 FUN_10b87d098(long param_1)

{
  return *(undefined1 *)(param_1 + 0x113);
}



/* Entry: 10b87d0a0; end: 10b87d0a7; -[SIGTray setPassThroughTouchesWhenUsingUIContainer:] */

void FUN_10b87d0a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x113) = param_3;
  return;
}



/* Entry: 10b87d0a8; end: 10b87d0af; -[SIGTray bounceOnDismissAttempt] */

undefined1 FUN_10b87d0a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x110);
}



/* Entry: 10b87d0b0; end: 10b87d0b7; -[SIGTray setBounceOnDismissAttempt:] */

void FUN_10b87d0b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 10b87d0b8; end: 10b87d0bf; -[SIGTray skipInitialPresentationAnimation] */

undefined1 FUN_10b87d0b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x114);
}



/* Entry: 10b87d0c0; end: 10b87d0c7; -[SIGTray setSkipInitialPresentationAnimation:] */

void FUN_10b87d0c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x114) = param_3;
  return;
}



/* Entry: 10b87d0c8; end: 10b87d0df; -[SIGTray trayHostDelegate] */

void FUN_10b87d0c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b87d0e0; end: 10b87d0eb; -[SIGTray setTrayHostDelegate:] */

void FUN_10b87d0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x128,param_3);
  return;
}



/* Entry: 10b87d0ec; end: 10b87d103; -[SIGTray trayAnimationDelegate] */

void FUN_10b87d0ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b87d104; end: 10b87d10f; -[SIGTray setTrayAnimationDelegate:] */

void FUN_10b87d104(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x130,param_3);
  return;
}



/* Entry: 10b87d110; end: 10b87d1ff; -[SIGTray .cxx_destruct] */

void FUN_10b87d110(long param_1)

{
  _objc_destroyWeak(param_1 + 0x130);
  _objc_destroyWeak(param_1 + 0x128);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}


