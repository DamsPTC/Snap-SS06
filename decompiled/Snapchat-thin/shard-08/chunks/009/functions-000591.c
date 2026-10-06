/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10672d13c; end: 10672d193; -[SCLECollectionViewOrthogonalScrollLayout invalidateLayoutWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672d13c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2c80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_invalidateLayoutWithContext__1125f8230);
  func_0x00010be93cc0(param_1);
  func_0x00010c06a160(*(undefined8 *)(param_1 + _DAT_11274f014));
  return;
}



/* Entry: 10672d194; end: 10672d40b; -[SCLECollectionViewOrthogonalScrollLayout prepareLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672d194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uStack_90;
  undefined *puStack_88;
  
  func_0x00010be93cc0();
  puStack_88 = PTR_PTR_1126f2c80;
  uStack_90 = param_5;
  _objc_msgSendSuper2(&uStack_90,PTR_s_prepareLayout_112620088);
  uVar2 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) goto LAB_10672d3dc;
  uVar3 = uVar2;
  func_0x00010bf20c00();
  _CGRectEqualToRect();
  if ((uVar3 & 1) != 0) goto LAB_10672d3dc;
  uVar6 = uVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010010fab4();
  uVar3 = uVar6;
  if ((int)uVar4 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08cc60();
  *(bool *)(param_5 + (long)_DAT_11274f018) = uVar5 == 1;
  _objc_release(uVar4);
  _objc_release(uVar6);
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11274f01c);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = param_3;
  puVar1[3] = 0;
  lVar11 = (long)_DAT_11274f014;
  uVar6 = *(ulong *)(param_5 + lVar11);
  if (uVar6 == 0) {
LAB_10672d2ec:
    puVar7 = PTR_PTR_1126cd480;
    _objc_alloc();
    func_0x00010bfffa40();
    uVar9 = *(undefined8 *)(param_5 + lVar11);
    *(undefined **)(param_5 + lVar11) = puVar7;
    _objc_release(uVar9);
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar11));
  }
  else {
    func_0x00010c0f3b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar6 != uVar2) goto LAB_10672d2ec;
  }
  uVar6 = uVar2;
  func_0x00010c0df2e0();
  if (0 < (long)uVar6) {
    lVar10 = 0;
    lVar12 = (long)_DAT_11274eff4;
    while( true ) {
      lVar8 = *(long *)(param_5 + lVar12);
      (**(code **)(lVar8 + 0x10))(lVar8,lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0deec0(uVar2);
      func_0x00010be79100(param_3,param_5);
      if (uVar6 - 1 == lVar10) break;
      func_0x00010be0d600(*(undefined8 *)(param_5 + (long)_DAT_11274eff8),param_5);
      _objc_release(lVar8);
      lVar10 = lVar10 + 1;
    }
    _objc_release(lVar8);
  }
  func_0x00010c239c00(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar11));
  _objc_release(uVar3);
LAB_10672d3dc:
  _objc_release(uVar2);
  return;
}



/* Entry: 10672d40c; end: 10672d41f; -[SCLECollectionViewOrthogonalScrollLayout collectionViewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10672d40c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11274f01c + 0x10);
}



/* Entry: 10672d420; end: 10672d537; -[SCLECollectionViewOrthogonalScrollLayout layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672d420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_80;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc0000000;
  pcStack_70 = FUN_10672d538;
  puStack_68 = &UNK_110937b80;
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retainBlock(&puStack_80);
  uVar2 = *(undefined8 *)(param_5 + _DAT_11274f00c);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11274f000);
  func_0x00010bf00d20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bf09f80(uVar3,param_6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10672d538; end: 10672d573;  */

void FUN_10672d538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x00010bfb68e0(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectIntersectsRect_1103475c8)
            (*(undefined8 *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x28),
             *(undefined8 *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x38),param_1,param_2,param_3
             ,param_4);
  return;
}



/* Entry: 10672d574; end: 10672d583; -[SCLECollectionViewOrthogonalScrollLayout layoutAttributesForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672d574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274f00c),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 10672d584; end: 10672d5e7; -[SCLECollectionViewOrthogonalScrollLayout layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672d584(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bde3aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274f000);
    func_0x00010c0e00e0(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10672d5e8; end: 10672d693; -[SCLECollectionViewOrthogonalScrollLayout shouldInvalidateLayoutForBoundsChange:] */

bool FUN_10672d5e8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    dVar3 = param_3;
    func_0x00010bfd0880(param_1,param_2,param_3,param_4,param_5);
    func_0x00010bf40120(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(param_5);
    bVar1 = 1.1920928955078125e-07 < ABS(param_3 - dVar3);
  }
  return bVar1;
}



/* Entry: 10672d694; end: 10672d727; -[SCLECollectionViewOrthogonalScrollLayout shouldInvalidateLayoutForPreferredLayoutAttributes:withOriginalAttributes:] */

undefined8 FUN_10672d694(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c1345a0();
  if (lVar1 == 1) {
    func_0x00010beb4380(param_1,param_2,param_3,param_4);
  }
  else if (lVar1 == 0) {
    func_0x00010beb43a0(param_1,param_2,param_3,param_4);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10672d728; end: 10672d72f; -[SCLECollectionViewOrthogonalScrollLayout finalLayoutAttributesForDisappearingSupplementaryElementOfKind:atIndexPath:] */

undefined8 FUN_10672d728(void)

{
  return 0;
}



/* Entry: 10672d730; end: 10672da2f; -[SCLECollectionViewOrthogonalScrollLayout visibleItemsInCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672d730(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined8 uVar7;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  long lVar8;
  undefined *unaff_x26;
  undefined *puVar9;
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [8];
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    puStack_2e8 = PTR____NSDictionary0__struct_11034ab58;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    unaff_x22 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(unaff_x24);
    _objc_release(unaff_x22);
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    puVar3 = *(undefined **)(param_1 + _DAT_11274f014);
    func_0x00010c29ff40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      unaff_x20 = *plStack_220;
      do {
        unaff_x23 = (undefined *)0x0;
        do {
          if (*plStack_220 != unaff_x20) {
            _objc_enumerationMutation(puVar3);
          }
          if (*(long *)(lStack_228 + (long)unaff_x23 * 8) != 0) {
            func_0x00010befa120(unaff_x24);
          }
          unaff_x23 = unaff_x23 + 1;
        } while (puVar2 != unaff_x23);
        puVar2 = puVar3;
        func_0x00010bf52a60();
        unaff_x22 = (undefined *)0x0;
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    _objc_retain(unaff_x24);
    puVar2 = unaff_x24;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lStack_2b8 = *plStack_260;
      puStack_2c0 = unaff_x24;
      do {
        puVar3 = (undefined *)0x0;
        do {
          if (*plStack_260 != lStack_2b8) {
            _objc_enumerationMutation(puStack_2c0);
          }
          unaff_x22 = *(undefined **)(lStack_268 + (long)puVar3 * 8);
          lStack_2a8 = 0;
          uStack_2b0 = 0;
          uStack_298 = 0;
          plStack_2a0 = (long *)0x0;
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          unaff_x23 = unaff_x22;
          func_0x00010bfed1a0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = unaff_x23;
          func_0x00010bf52a60();
          if (puVar4 != (undefined *)0x0) {
            unaff_x20 = *plStack_2a0;
            do {
              puVar9 = (undefined *)0x0;
              do {
                if (*plStack_2a0 != unaff_x20) {
                  _objc_enumerationMutation(unaff_x23);
                }
                unaff_x25 = *(undefined8 *)(lStack_2a8 + (long)puVar9 * 8);
                unaff_x26 = unaff_x22;
                func_0x00010bf33b60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar1);
                _objc_release(unaff_x26);
                puVar9 = puVar9 + 1;
              } while (puVar4 != puVar9);
              puVar4 = unaff_x23;
              func_0x00010bf52a60();
            } while (puVar4 != (undefined *)0x0);
          }
          _objc_release(unaff_x23);
          unaff_x24 = puStack_2c0;
          puVar3 = puVar3 + 1;
        } while (puVar3 != puVar2);
        puVar2 = puStack_2c0;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(unaff_x24);
    puVar3 = puVar1;
    func_0x00010bf51e00();
    _objc_release(unaff_x24);
    puVar2 = puVar1;
    _objc_release();
    puStack_2e8 = puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_2e8);
    return;
  }
  ___stack_chk_fail();
  pcStack_2c8 = FUN_10672da30;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_310 = unaff_x26;
  uStack_308 = unaff_x25;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = unaff_x22;
  lStack_2e0 = unaff_x20;
  puStack_2d8 = puVar1;
  puStack_2d0 = &stack0xfffffffffffffff0;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11274f008;
  uVar6 = *(undefined8 *)(puVar2 + lVar8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c071ae0();
  if (((ulong)puVar1 & 1) == 0) {
    uVar7 = *(undefined8 *)(puVar2 + lVar8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(puVar1);
    puVar5 = auStack_318;
    _objc_initWeak(puVar5,puVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_320,auStack_318);
    func_0x00010c0f7fc0(puVar5);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_320);
    _objc_destroyWeak(auStack_318);
  }
  _objc_release(uVar6);
  _objc_release(puVar3);
  return;
}



/* Entry: 10672da30; end: 10672dbbf; -[SCLECollectionViewOrthogonalScrollLayout didChangeSectionPreferredHeight:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672da30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11274f008;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c071ae0();
  if (((ulong)puVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(puVar2);
    puVar3 = auStack_58;
    _objc_initWeak(puVar3,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 10672dbc0; end: 10672dbeb;  */

void FUN_10672dbc0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c069fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10672dbec; end: 10672dc1b; -[SCLECollectionViewOrthogonalScrollLayout orthogonalSectionAggregator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672dbec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f014);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10672dc1c; end: 10672dc53; -[SCLECollectionViewOrthogonalScrollLayout _resetState] */

/* WARNING: Possible PIC construction at 0x00010672dc3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010672dc40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672dc1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274f000),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10672dc54; end: 10672dd13; -[SCLECollectionViewOrthogonalScrollLayout _prepareSection:sectionIndex:numberOfItems:containerWidth:itemSizeDelegate:] */

void FUN_10672dc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_4);
  func_0x00010be785a0(param_1,param_2,param_3,param_4,param_5);
  uVar1 = param_4;
  func_0x00010c152e20();
  if ((int)uVar1 == 0) {
    func_0x00010be783e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    func_0x00010be78d20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10672dd14; end: 10672dd2f; -[SCLECollectionViewOrthogonalScrollLayout _sectionOriginToExtendContentFrame:] */

undefined1  [16] FUN_10672dd14(ulong param_1)

{
  undefined1 auVar1 [16];
  
  _CGRectGetMaxY();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1 << 0x40;
}



/* Entry: 10672dd30; end: 10672dd77; -[SCLECollectionViewOrthogonalScrollLayout _extendContentFrameWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672dd30(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11274f01c);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  _CGRectUnion();
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  return;
}



/* Entry: 10672dd78; end: 10672dd93; -[SCLECollectionViewOrthogonalScrollLayout _extendContentSizeWithSpacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672dd78(double param_1,long param_2)

{
  *(double *)(param_2 + _DAT_11274f01c + 0x18) =
       param_1 + *(double *)(param_2 + _DAT_11274f01c + 0x18);
  return;
}



/* Entry: 10672dd94; end: 10672dda3; -[SCLECollectionViewOrthogonalScrollLayout handleCollectionViewBoundsChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672dd94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274f014),PTR_s_showSectionsForBounds__11266c128);
  return;
}



/* Entry: 10672dda4; end: 10672df7f; -[SCLECollectionViewOrthogonalScrollLayout _prepareOrthogonalSection:sectionIndex:numberOfItems:containerWidth:itemSizeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672dda4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  double *pdVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_4);
  pdVar1 = (double *)(param_2 + _DAT_11274f01c);
  dVar7 = *pdVar1;
  dVar10 = pdVar1[1];
  dVar12 = pdVar1[2];
  func_0x00010be9cf60(dVar7,dVar10,dVar12,pdVar1[3],param_2);
  dVar8 = dVar7;
  dVar11 = dVar10;
  func_0x00010bf4c7e0(param_4);
  dVar9 = dVar8;
  func_0x00010c084a80(param_4);
  fVar6 = SUB84(dVar9,0);
  lVar4 = *(long *)(param_2 + _DAT_11274f008);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar4 == 0) {
    dVar12 = dVar12 + dVar8 + dVar11;
  }
  else {
    func_0x00010bfb2c80(lVar4);
    dVar12 = (double)fVar6;
  }
  func_0x00010be0d5e0(dVar7,dVar10,param_1,dVar12,param_2);
  func_0x00010befb280(dVar7,dVar10,param_1,dVar12,*(undefined8 *)(param_2 + _DAT_11274f014),param_3,
                      param_4,param_5);
  if (0 < param_6) {
    lVar5 = 0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,lVar5,param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010bdf0e80(dVar7,dVar10,param_2,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + _DAT_11274f00c),param_3,lVar3,puVar2);
      _objc_release(lVar3);
      _objc_release(puVar2);
      lVar5 = lVar5 + 1;
    } while (param_6 != lVar5);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10672df80; end: 10672dfdb; -[SCLECollectionViewOrthogonalScrollLayout _createOtrhogonalSectionCellAttributesAtIndexPath:sectionOrigin:] */

void FUN_10672df80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  func_0x00010c08c8e0(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10672dfdc; end: 10672e2cf; -[SCLECollectionViewOrthogonalScrollLayout _prepareFlowSection:sectionIndex:numberOfItems:containerWidth:itemSizeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672dfdc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  double *pdVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  if (0 < param_6) {
    pdVar1 = (double *)(param_2 + _DAT_11274f01c);
    dVar7 = *pdVar1;
    dVar11 = pdVar1[1];
    dVar14 = pdVar1[3];
    func_0x00010be9cf60(dVar7,dVar11,pdVar1[2],param_2);
    dVar8 = dVar7;
    dVar12 = dVar11;
    func_0x00010bf4c7e0(param_4);
    dVar7 = dVar7 + dVar12;
    func_0x00010bf4c7e0(param_4);
    dVar15 = (param_1 + dVar7) - dVar12;
    func_0x00010bf4c7e0(param_4);
    dVar15 = dVar15 - dVar14;
    func_0x00010bfe4260(param_4);
    dVar9 = dVar8;
    func_0x00010c298f00(param_4);
    dVar14 = dVar9;
    func_0x00010bf4c7e0(param_4);
    lVar6 = 0;
    dVar16 = dVar11 + dVar14;
    dVar11 = dVar11 + dVar14;
    dVar18 = dVar7;
    do {
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,lVar6,param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_2 + _DAT_11274f010);
      func_0x00010c0e00e0(lVar3,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        if (param_7 == 0) {
          func_0x00010c084a80(param_4);
          dVar13 = dVar14;
        }
        else {
          lVar4 = param_2;
          func_0x00010bf40120(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf40500(param_7,param_3,lVar4,param_2,puVar2);
          _objc_release(lVar4);
          dVar13 = dVar14;
        }
      }
      else {
        func_0x00010c23d0a0(lVar3);
        dVar13 = dVar14;
      }
      dVar10 = dVar18;
      _CGRectGetMaxX(dVar18,dVar11,dVar13,dVar12);
      dVar17 = dVar9 + dVar16;
      dVar14 = dVar7;
      if (dVar10 <= dVar15) {
        dVar17 = dVar11;
        dVar14 = dVar18;
      }
      dVar11 = dVar14;
      _CGRectGetMaxY(dVar14,dVar17,dVar13,dVar12);
      if (dVar11 <= dVar16) {
        dVar11 = dVar16;
      }
      puVar5 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
      func_0x00010c08c8e0(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_3,
                          puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + _DAT_11274f00c),param_3,puVar5,puVar2);
      if (*(char *)(param_2 + _DAT_11274f018) == '\x01') {
        FUN_10672e8c4(dVar14,dVar17,dVar13,dVar12,dVar7,dVar15);
      }
      func_0x00010c19f0e0(puVar5);
      func_0x00010be0d5e0(dVar14,dVar17,dVar13,dVar12,param_2);
      _CGRectGetMaxX(dVar14,dVar17,dVar13,dVar12);
      dVar18 = dVar8 + dVar14;
      dVar12 = dVar8;
      _objc_release(puVar5);
      _objc_release(lVar3);
      _objc_release(puVar2);
      lVar6 = lVar6 + 1;
      dVar16 = dVar11;
      dVar11 = dVar17;
    } while (param_6 != lVar6);
    func_0x00010bf4c7e0(param_4);
    pdVar1[3] = pdVar1[3] + dVar13;
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10672e2d0; end: 10672e42b; -[SCLECollectionViewOrthogonalScrollLayout _shouldInvalidateItemLayoutForPreferredLayoutAttributes:withOriginalAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10672e2d0(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar5 = (long)_DAT_11274f010;
  lVar3 = *(long *)(param_3 + lVar5);
  uVar2 = param_5;
  func_0x00010bfecf20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_6;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010c23d0a0(lVar1);
  dVar6 = param_2;
  func_0x00010c23d0a0(param_5);
  if (2.0 < ABS(param_2 - dVar6)) {
    lVar3 = param_6;
    func_0x00010bf51e00(param_6);
    func_0x00010c23d0a0();
    func_0x00010c23d0a0(param_5);
    func_0x00010c202c80(param_1,lVar3);
    uVar4 = *(undefined8 *)(param_3 + lVar5);
    uVar2 = param_5;
    func_0x00010bfecf20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_4,lVar3,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return 2.0 < ABS(param_2 - dVar6);
}



/* Entry: 10672e42c; end: 10672e4cb; -[SCLECollectionViewOrthogonalScrollLayout _composeKeyForElementKind:indexPath:] */

void FUN_10672e42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1554e0();
  func_0x00010c0840e0();
  _objc_release(param_4);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5a898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10672e4cc; end: 10672e6bb; -[SCLECollectionViewOrthogonalScrollLayout _prepareHeaderForSection:sectionIndex:containerWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672e4cc(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010bfdef60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf8d200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,0,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bde3aa0(param_2,param_3,lVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_2 + _DAT_11274f004);
    func_0x00010c0e00e0(puVar5,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      puVar1 = (undefined8 *)(param_2 + _DAT_11274f01c);
      uVar7 = *puVar1;
      dVar8 = (double)puVar1[1];
      dVar11 = (double)puVar1[3];
      func_0x00010be9cf60(uVar7,dVar8,puVar1[2],dVar11,param_2);
      lVar6 = param_4;
      dVar9 = dVar8;
      func_0x00010bfdf4e0();
      dVar10 = 0.0;
      if ((int)lVar6 != 0) {
        func_0x00010bf4c7e0(param_4);
        dVar10 = dVar9;
        func_0x00010bf4c7e0(param_4);
        func_0x00010bf4c7e0(param_4);
        param_1 = (param_1 - dVar10) - dVar11;
        dVar10 = dVar9;
      }
      lVar6 = param_4;
      func_0x00010bfdef60(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      _objc_release(lVar6);
      puVar5 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
      func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,param_3,lVar3
                          ,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar10,dVar8,param_1,uVar7);
    }
    func_0x00010c1d0640(*(undefined8 *)(param_2 + _DAT_11274f000),param_3,puVar5,lVar2);
    func_0x00010bfb68e0(puVar5);
    func_0x00010be0d5e0(param_2);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10672e6bc; end: 10672e833; -[SCLECollectionViewOrthogonalScrollLayout _shouldInvalidateHeaderLayoutForPreferredLayoutAttributes:withOriginalAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10672e6bc(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_5;
  func_0x00010c1345c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bfecf20(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bde3aa0(param_3,param_4,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar6 = (long)_DAT_11274f004;
  lVar5 = *(long *)(param_3 + lVar6);
  func_0x00010c0e00e0(lVar5,param_4,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_6;
  if (lVar5 != 0) {
    lVar1 = lVar5;
  }
  _objc_retain(lVar1);
  _objc_release(lVar5);
  func_0x00010c23d0a0(lVar1);
  dVar7 = param_2;
  func_0x00010c23d0a0(param_5);
  if (2.0 < ABS(param_2 - dVar7)) {
    lVar5 = param_6;
    func_0x00010bf51e00(param_6);
    func_0x00010c23d0a0();
    func_0x00010c23d0a0(param_5);
    func_0x00010c202c80(param_1,lVar5);
    func_0x00010c1d0640(*(undefined8 *)(param_3 + lVar6),param_4,lVar5,lVar4);
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  return 2.0 < ABS(param_2 - dVar7);
}



/* Entry: 10672e834; end: 10672e8c3; -[SCLECollectionViewOrthogonalScrollLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10672e834(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274eff4,0);
  _objc_storeStrong(param_1 + _DAT_11274f008,0);
  _objc_storeStrong(param_1 + _DAT_11274f010,0);
  _objc_storeStrong(param_1 + _DAT_11274f004,0);
  _objc_storeStrong(param_1 + _DAT_11274f00c,0);
  _objc_storeStrong(param_1 + _DAT_11274f000,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274f014,0);
  return;
}



/* Entry: 10672e8c4; end: 10672e8ef;  */

double FUN_10672e8c4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    double param_5,double param_6)

{
  _CGRectStandardize();
  return (param_6 - (param_1 - param_5)) - param_3;
}



/* Entry: 10672e8f0; end: 10672eaab; -[SCLELayoutOrthogonalSectionController initWithSection:sectionIndex:sectionFrame:preferredItemSize:parentCollectionView:collectionViewClass:] */

undefined8 *
FUN_10672e8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined *param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_9);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126f2c88;
  puVar1 = &uStack_80;
  uStack_80 = param_7;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar4;
    _objc_release(uVar3);
    puVar1[7] = param_10;
    _objc_storeWeak(puVar1 + 9,param_11);
    puVar1[3] = param_1;
    puVar1[4] = param_2;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
    if (param_12 == (undefined *)0x0) {
      param_12 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
      _objc_opt_class();
    }
    puVar1[1] = param_12;
    _objc_initWeak(auStack_88,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_a0,auStack_88);
    _objc_retain(param_9);
    uStack_98 = param_5;
    uStack_90 = param_6;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar4);
    _objc_release(param_9);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_11);
  _objc_release(param_9);
  return puVar1;
}



/* Entry: 10672eaac; end: 10672eaf7;  */

void FUN_10672eaac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bdec180(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10672eaf8; end: 10672ec93; -[SCLELayoutOrthogonalSectionController didAddToLayout] */

void FUN_10672eaf8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_2e0;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar15 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3 + 0x48;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_3 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    _objc_opt_respondsToSelector(uVar2,PTR_s_collectionView_willDisplayCell_f_1125adb18);
    if ((uVar1 & 1) != 0) {
      param_1 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar4 = lVar3;
      func_0x00010bfed1a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf52a60();
      if (lVar5 != 0) {
        lVar17 = *plStack_120;
        do {
          lVar18 = 0;
          do {
            if (*plStack_120 != lVar17) {
              _objc_enumerationMutation(lVar4);
            }
            lVar6 = lVar3;
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            if (lVar6 != 0) {
              func_0x00010bf405c0(uVar2);
            }
            _objc_release(lVar6);
            lVar18 = lVar18 + 1;
          } while (lVar5 != lVar18);
          lVar5 = lVar4;
          puVar15 = &uStack_130;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
      }
      _objc_release(lVar4);
      param_5 = (undefined1 *)puVar15;
    }
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar15 = &uStack_260;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = *(undefined **)(uVar2 + 0x40);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      uVar2 = uVar2 + 0x48;
      _objc_loadWeakRetained();
      uVar1 = uVar2;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if ((uVar1 != 0) &&
         (uVar2 = uVar1,
         _objc_opt_respondsToSelector(uVar1,PTR_s_collectionView_didEndDisplayingC_1125ada10),
         (uVar2 & 1) != 0)) {
        param_1 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        uStack_248 = 0;
        plStack_250 = (long *)0x0;
        puVar8 = puVar7;
        func_0x00010bfed1a0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf52a60();
        if (puVar9 != (undefined *)0x0) {
          lVar3 = *plStack_250;
          do {
            puVar19 = (undefined *)0x0;
            do {
              if (*plStack_250 != lVar3) {
                _objc_enumerationMutation(puVar8);
              }
              puVar10 = puVar7;
              func_0x00010bf33b60();
              _objc_retainAutoreleasedReturnValue();
              if (puVar10 != (undefined *)0x0) {
                func_0x00010bf401a0(uVar1);
              }
              _objc_release(puVar10);
              puVar19 = puVar19 + 1;
            } while (puVar9 != puVar19);
            puVar9 = puVar8;
            puVar15 = &uStack_260;
            func_0x00010bf52a60();
          } while (puVar9 != (undefined *)0x0);
        }
        _objc_release(puVar8);
        param_5 = (undefined1 *)puVar15;
      }
      _objc_release(uVar1);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      puVar15 = &uStack_460;
      lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(param_5);
      puVar19 = puVar7;
      func_0x00010bdec140(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(puVar7 + 0x20);
      puVar9 = puVar7;
      func_0x00010bdec160(*(undefined8 *)(puVar7 + 0x18),uVar22,*(undefined8 *)(puVar7 + 0x28),
                          *(undefined8 *)(puVar7 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17d4c0();
      puVar8 = puVar7 + 0x48;
      _objc_loadWeakRetained(puVar8);
      func_0x00010c07aa20();
      func_0x00010c1e0700(puVar9);
      _objc_release(puVar8);
      puVar8 = puVar7 + 0x48;
      _objc_loadWeakRetained(puVar8);
      puVar10 = puVar8;
      func_0x00010c107580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e04a0(puVar9);
      _objc_release(puVar10);
      _objc_release(puVar8);
      func_0x00010bf4c7e0(param_5);
      func_0x00010c181f80(puVar9);
      puVar11 = param_5;
      func_0x00010c151e40();
      if (puVar11 == (undefined1 *)0x1) {
        func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,puVar9);
      }
      func_0x00010c189840(puVar9);
      puVar7 = puVar7 + 0x48;
      _objc_loadWeakRetained(puVar7);
      puVar8 = puVar7;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_408 = 0;
      plStack_410 = (long *)0x0;
      puVar11 = param_5;
      func_0x00010bfe5f60();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar11 = puVar12;
      func_0x00010bf52a60();
      if (puVar11 != (undefined1 *)0x0) {
        lVar3 = *plStack_410;
        do {
          puVar20 = (undefined1 *)0x0;
          do {
            if (*plStack_410 != lVar3) {
              _objc_enumerationMutation(puVar12);
            }
            puVar13 = param_5;
            func_0x00010bfe5f60(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_release(puVar13);
            func_0x00010c126000(puVar9);
            puVar20 = puVar20 + 1;
          } while (puVar11 != puVar20);
          puVar11 = puVar12;
          func_0x00010bf52a60();
        } while (puVar11 != (undefined1 *)0x0);
      }
      _objc_release(puVar12);
      uVar21 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      lStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      plStack_450 = (long *)0x0;
      puVar11 = param_5;
      func_0x00010c262dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf52a60();
      if (puVar12 != (undefined1 *)0x0) {
        lVar3 = *plStack_450;
        do {
          puVar20 = (undefined1 *)0x0;
          do {
            if (*plStack_450 != lVar3) {
              _objc_enumerationMutation(puVar11);
            }
            uVar16 = *(undefined8 *)(lStack_458 + (long)puVar20 * 8);
            func_0x00010c29bfc0(uVar16);
            uVar14 = uVar16;
            func_0x00010c29d2e0(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c13fda0(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c126060(puVar9);
            _objc_release(uVar16);
            _objc_release(uVar14);
            puVar20 = puVar20 + 1;
          } while (puVar12 != puVar20);
          puVar12 = puVar11;
          puVar15 = &uStack_460;
          func_0x00010bf52a60();
        } while (puVar12 != (undefined1 *)0x0);
      }
      _objc_release(puVar11);
      _objc_release(puVar19);
      _objc_release(param_5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e0) {
        ___stack_chk_fail();
        puVar9 = PTR_PTR_1126cd488;
        _objc_retain(puVar15);
        _objc_alloc_init(puVar9);
        func_0x00010c1f7ac0();
        func_0x00010c197460(uVar21,uVar22,puVar9);
        func_0x00010bfe4260(puVar15);
        _objc_release(puVar15);
        func_0x00010c1c82c0(uVar21,puVar9);
        func_0x00010c18b5e0(puVar9);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10672ec94; end: 10672ee33; -[SCLELayoutOrthogonalSectionController didRemoveFromLayout] */

void FUN_10672ec94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_1b0;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar11 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_3 + 0x40);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_3 + 0x48;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if ((uVar3 != 0) &&
       (uVar2 = uVar3,
       _objc_opt_respondsToSelector(uVar3,PTR_s_collectionView_didEndDisplayingC_1125ada10),
       (uVar2 & 1) != 0)) {
      param_1 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      puVar4 = puVar1;
      func_0x00010bfed1a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf52a60();
      if (puVar5 != (undefined *)0x0) {
        lVar13 = *plStack_120;
        do {
          puVar14 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar13) {
              _objc_enumerationMutation(puVar4);
            }
            puVar6 = puVar1;
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            if (puVar6 != (undefined *)0x0) {
              func_0x00010bf401a0(uVar3);
            }
            _objc_release(puVar6);
            puVar14 = puVar14 + 1;
          } while (puVar5 != puVar14);
          puVar5 = puVar4;
          puVar11 = &uStack_130;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined *)0x0);
      }
      _objc_release(puVar4);
      param_5 = (undefined1 *)puVar11;
    }
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar11 = &uStack_330;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_5);
    puVar14 = puVar1;
    func_0x00010bdec140(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar1 + 0x20);
    puVar5 = puVar1;
    func_0x00010bdec160(*(undefined8 *)(puVar1 + 0x18),uVar17,*(undefined8 *)(puVar1 + 0x28),
                        *(undefined8 *)(puVar1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    puVar4 = puVar1 + 0x48;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c07aa20();
    func_0x00010c1e0700(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1 + 0x48;
    _objc_loadWeakRetained(puVar4);
    puVar6 = puVar4;
    func_0x00010c107580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e04a0(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    func_0x00010bf4c7e0(param_5);
    func_0x00010c181f80(puVar5);
    puVar7 = param_5;
    func_0x00010c151e40();
    if (puVar7 == (undefined1 *)0x1) {
      func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,puVar5);
    }
    func_0x00010c189840(puVar5);
    puVar1 = puVar1 + 0x48;
    _objc_loadWeakRetained(puVar1);
    puVar4 = puVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    plStack_2e0 = (long *)0x0;
    puVar7 = param_5;
    func_0x00010bfe5f60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar8;
    func_0x00010bf52a60();
    if (puVar7 != (undefined1 *)0x0) {
      lVar13 = *plStack_2e0;
      do {
        puVar15 = (undefined1 *)0x0;
        do {
          if (*plStack_2e0 != lVar13) {
            _objc_enumerationMutation(puVar8);
          }
          puVar9 = param_5;
          func_0x00010bfe5f60(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_release(puVar9);
          func_0x00010c126000(puVar5);
          puVar15 = puVar15 + 1;
        } while (puVar7 != puVar15);
        puVar7 = puVar8;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined1 *)0x0);
    }
    _objc_release(puVar8);
    uVar16 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    puVar7 = param_5;
    func_0x00010c262dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf52a60();
    if (puVar8 != (undefined1 *)0x0) {
      lVar13 = *plStack_320;
      do {
        puVar15 = (undefined1 *)0x0;
        do {
          if (*plStack_320 != lVar13) {
            _objc_enumerationMutation(puVar7);
          }
          uVar12 = *(undefined8 *)(lStack_328 + (long)puVar15 * 8);
          func_0x00010c29bfc0(uVar12);
          uVar10 = uVar12;
          func_0x00010c29d2e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c13fda0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c126060(puVar5);
          _objc_release(uVar12);
          _objc_release(uVar10);
          puVar15 = puVar15 + 1;
        } while (puVar8 != puVar15);
        puVar8 = puVar7;
        puVar11 = &uStack_330;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined1 *)0x0);
    }
    _objc_release(puVar7);
    _objc_release(puVar14);
    _objc_release(param_5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      puVar5 = PTR_PTR_1126cd488;
      _objc_retain(puVar11);
      _objc_alloc_init(puVar5);
      func_0x00010c1f7ac0();
      func_0x00010c197460(uVar16,uVar17,puVar5);
      func_0x00010bfe4260(puVar11);
      _objc_release(puVar11);
      func_0x00010c1c82c0(uVar16,puVar5);
      func_0x00010c18b5e0(puVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 10672ee34; end: 10672f1c3; -[SCLELayoutOrthogonalSectionController _createCollectionViewWithSection:preferredItemSize:] */

void FUN_10672ee34(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  puVar11 = &uStack_200;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bdec140(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  puVar2 = param_3;
  func_0x00010bdec160(*(undefined8 *)(param_3 + 0x18),uVar16,*(undefined8 *)(param_3 + 0x28),
                      *(undefined8 *)(param_3 + 0x30),param_3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  puVar3 = param_3 + 0x48;
  _objc_loadWeakRetained(puVar3);
  puVar4 = puVar3;
  func_0x00010c07aa20();
  func_0x00010c1e0700(puVar2,param_4,puVar4);
  _objc_release(puVar3);
  puVar3 = param_3 + 0x48;
  _objc_loadWeakRetained(puVar3);
  puVar4 = puVar3;
  func_0x00010c107580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e04a0(puVar2,param_4,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bf4c7e0(param_5);
  func_0x00010c181f80(puVar2);
  lVar5 = param_5;
  func_0x00010c151e40();
  if (lVar5 == 1) {
    func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,puVar2);
  }
  func_0x00010c189840(puVar2,param_4,param_3);
  param_3 = param_3 + 0x48;
  _objc_loadWeakRetained(param_3);
  puVar3 = param_3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar2,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(param_3);
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  lVar5 = param_5;
  func_0x00010bfe5f60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar6;
  func_0x00010bf52a60(lVar6,param_4,&uStack_1c0,auStack_100,0x10);
  if (lVar5 != 0) {
    lVar14 = *plStack_1b0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1b0 != lVar14) {
          _objc_enumerationMutation(lVar6);
        }
        uVar12 = *(undefined8 *)(lStack_1b8 + lVar15 * 8);
        lVar7 = param_5;
        func_0x00010bfe5f60(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c0e00e0();
        _objc_release(lVar7);
        func_0x00010c126000(puVar2,param_4,lVar8,uVar12);
        lVar15 = lVar15 + 1;
      } while (lVar5 != lVar15);
      lVar5 = lVar6;
      func_0x00010bf52a60(lVar6,param_4,&uStack_1c0,auStack_100,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(lVar6);
  uVar12 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  lVar5 = param_5;
  func_0x00010c262dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar14 = *plStack_1f0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1f0 != lVar14) {
          _objc_enumerationMutation(lVar5);
        }
        uVar13 = *(undefined8 *)(lStack_1f8 + lVar15 * 8);
        uVar9 = uVar13;
        func_0x00010c29bfc0(uVar13);
        uVar10 = uVar13;
        func_0x00010c29d2e0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13fda0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c126060(puVar2,param_4,uVar9,uVar10,uVar13);
        _objc_release(uVar13);
        _objc_release(uVar10);
        lVar15 = lVar15 + 1;
      } while (lVar6 != lVar15);
      lVar6 = lVar5;
      puVar11 = &uStack_200;
      func_0x00010bf52a60(lVar5,param_4,&uStack_200,auStack_180,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126cd488;
    _objc_retain(puVar11);
    _objc_alloc_init(puVar2);
    func_0x00010c1f7ac0();
    func_0x00010c197460(uVar12,uVar16,puVar2);
    func_0x00010bfe4260(puVar11);
    _objc_release(puVar11);
    func_0x00010c1c82c0(uVar12,puVar2);
    func_0x00010c18b5e0(puVar2,param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10672f1c4; end: 10672f25f; -[SCLELayoutOrthogonalSectionController _createCollectionViewLayoutWithSection:preferredItemSize:] */

void FUN_10672f1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cd488;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010c1f7ac0();
  func_0x00010c197460(param_1,param_2,puVar1);
  func_0x00010bfe4260(param_5);
  _objc_release(param_5);
  func_0x00010c1c82c0(param_1,puVar1);
  func_0x00010c18b5e0(puVar1,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10672f260; end: 10672f33f; -[SCLELayoutOrthogonalSectionController _createCollectionViewWithFrame:collectionViewLayout:] */

void FUN_10672f260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  _objc_retain(param_7);
  _objc_alloc(uVar2);
  func_0x00010c014040(param_1,param_2,param_3,param_4);
  _objc_release(param_7);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar2,param_6,puVar1);
  _objc_release(puVar1);
  func_0x00010c18e220(uVar2,param_6,1);
  func_0x00010c2025c0(uVar2,param_6,0);
  func_0x00010c2026e0(uVar2,param_6,0);
  func_0x00010c17d4c0(uVar2,param_6,0);
  func_0x00010c1d8be0(uVar2,param_6,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10672f340; end: 10672f34b; -[SCLELayoutOrthogonalSectionController numberOfSectionsInCollectionView:] */

long FUN_10672f340(long param_1)

{
  return *(long *)(param_1 + 0x38) + 1;
}



/* Entry: 10672f34c; end: 10672f3db; -[SCLELayoutOrthogonalSectionController collectionView:numberOfItemsInSection:] */

long FUN_10672f34c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x38) == param_4) {
    _objc_retain(param_3);
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf404e0();
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(param_1);
    return lVar2;
  }
  return 0;
}



/* Entry: 10672f3dc; end: 10672f477; -[SCLELayoutOrthogonalSectionController collectionView:cellForItemAtIndexPath:] */

void FUN_10672f3dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf40140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10672f478; end: 10672f52b; -[SCLELayoutOrthogonalSectionController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_10672f478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf40520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10672f52c; end: 10672f5b3; -[SCLELayoutOrthogonalSectionController orthogonalSectionFlowLayout:didChangePreferredItemAttributes:] */

void FUN_10672f52c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0edbc0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10672f5b4; end: 10672f5bb; -[SCLELayoutOrthogonalSectionController section] */

undefined8 FUN_10672f5b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10672f5bc; end: 10672f5c3; -[SCLELayoutOrthogonalSectionController sectionIndex] */

undefined8 FUN_10672f5bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10672f5c4; end: 10672f5cf; -[SCLELayoutOrthogonalSectionController sectionFrame] */

undefined8 FUN_10672f5c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10672f5d0; end: 10672f5db; -[SCLELayoutOrthogonalSectionController setSectionFrame:] */

void FUN_10672f5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(undefined8 *)(param_5 + 0x20) = param_2;
  *(undefined8 *)(param_5 + 0x28) = param_3;
  *(undefined8 *)(param_5 + 0x30) = param_4;
  return;
}



/* Entry: 10672f5dc; end: 10672f5e3; -[SCLELayoutOrthogonalSectionController collectionView] */

undefined8 FUN_10672f5dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10672f5e4; end: 10672f5fb; -[SCLELayoutOrthogonalSectionController parentCollectionView] */

void FUN_10672f5e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10672f5fc; end: 10672f613; -[SCLELayoutOrthogonalSectionController delegate] */

void FUN_10672f5fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10672f614; end: 10672f61f; -[SCLELayoutOrthogonalSectionController setDelegate:] */

void FUN_10672f614(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10672f620; end: 10672f65f; -[SCLELayoutOrthogonalSectionController .cxx_destruct] */

void FUN_10672f620(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10672f660; end: 10672f727; -[SCLEOrthogonalSectionAggregator initWithColletionView:nestedCollectionViewClass:] */

undefined1 *
FUN_10672f660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2c90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10672f728; end: 10672f76b; -[SCLEOrthogonalSectionAggregator dealloc] */

void FUN_10672f728(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c06a160();
  puStack_28 = PTR_PTR_1126f2c90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10672f76c; end: 10672f913; -[SCLEOrthogonalSectionAggregator invalidateSections] */

void FUN_10672f76c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_5 + 8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_f0;
  lVar6 = lVar1;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar13 * 8);
        lVar2 = *(long *)(param_5 + 8);
        func_0x00010c0e00e0(lVar2,param_6,uVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf40120();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar4 != 0) {
          func_0x00010bf4cdc0(lVar4);
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_5 + 0x10),param_6,puVar5,uVar11);
          _objc_release(puVar5);
        }
        func_0x00010be8cbe0(param_5,param_6,lVar2);
        _objc_release(lVar4);
        _objc_release(lVar2);
        lVar13 = lVar13 + 1;
      } while (lVar6 != lVar13);
      puVar9 = auStack_f0;
      lVar6 = lVar1;
      puVar8 = &uStack_130;
      func_0x00010bf52a60(lVar1,param_6,&uStack_130,puVar9,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar1);
  lVar6 = *(long *)(param_5 + 8);
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = uVar10;
  uVar15 = param_2;
  _objc_retain(puVar8);
  func_0x00010c084a80(puVar8);
  lVar1 = *(long *)(lVar6 + 0x18);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar14 = uVar11;
  uVar16 = uVar15;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_6,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1,param_6,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (lVar1 != 0) {
    func_0x00010c23d0a0(lVar1);
    uVar11 = uVar14;
    uVar15 = uVar16;
  }
  puVar5 = PTR_PTR_1126cd490;
  _objc_alloc(PTR_PTR_1126cd490);
  lVar12 = lVar6;
  func_0x00010c0f3b00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042d60(uVar10,param_2,param_3,param_4,uVar11,uVar15,puVar5,param_6,puVar8,puVar9,
                      lVar12,*(undefined8 *)(lVar6 + 0x28));
  _objc_release(puVar8);
  _objc_release(lVar12);
  func_0x00010c18b5e0(puVar5,param_6,lVar6);
  uVar10 = *(undefined8 *)(lVar6 + 8);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_6,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar10,param_6,puVar5,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10672f914; end: 10672fa97; -[SCLEOrthogonalSectionAggregator addSection:index:frame:] */

void FUN_10672f914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = param_1;
  uVar7 = param_2;
  _objc_retain(param_7);
  func_0x00010c084a80(param_7);
  lVar5 = *(long *)(param_5 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = uVar4;
  uVar8 = uVar7;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_6,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar5 != 0) {
    func_0x00010c23d0a0(lVar5);
    uVar4 = uVar6;
    uVar7 = uVar8;
  }
  puVar1 = PTR_PTR_1126cd490;
  _objc_alloc(PTR_PTR_1126cd490);
  lVar2 = param_5;
  func_0x00010c0f3b00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042d60(param_1,param_2,param_3,param_4,uVar4,uVar7,puVar1,param_6,param_7,param_8,
                      lVar2,*(undefined8 *)(param_5 + 0x28));
  _objc_release(param_7);
  _objc_release(lVar2);
  func_0x00010c18b5e0(puVar1,param_6,param_5);
  uVar4 = *(undefined8 *)(param_5 + 8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_6,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4,param_6,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10672fa98; end: 10672fd37; -[SCLEOrthogonalSectionAggregator showSectionsForBounds:] */

void FUN_10672fa98(undefined8 param_1,double param_2,double param_3,double param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  long lVar11;
  long unaff_x28;
  long lVar12;
  float fVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 uStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_5;
  dVar16 = param_2;
  dVar18 = param_3;
  dVar17 = param_4;
  func_0x00010c0f3b00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    unaff_x21 = *(long *)(param_5 + 8);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = unaff_x21;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      unaff_x27 = *plStack_140;
      do {
        unaff_x28 = 0;
        do {
          if (*plStack_140 != unaff_x27) {
            _objc_enumerationMutation(unaff_x21);
          }
          unaff_x24 = *(undefined **)(lStack_148 + unaff_x28 * 8);
          unaff_x23 = *(undefined **)(param_5 + 8);
          func_0x00010c0e00e0(unaff_x23,param_6,unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = param_5;
          uVar14 = param_1;
          dVar16 = param_2;
          dVar18 = param_3;
          dVar17 = param_4;
          func_0x00010be9cfe0(param_1,param_5,param_6,unaff_x23);
          fVar13 = (float)uVar14;
          if ((int)puVar3 == 0) {
            puVar3 = param_5;
            dVar16 = param_2;
            dVar18 = param_3;
            dVar17 = param_4;
            func_0x00010be9d000(param_1,param_5,param_6,unaff_x23);
            if ((int)puVar3 != 0) {
              unaff_x26 = unaff_x23;
              func_0x00010bf40120();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x26;
              func_0x00010bfe6360();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x26);
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if (unaff_x25 != (undefined *)0x0) {
                func_0x00010bf4cdc0(unaff_x25);
                func_0x00010c0df720();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(*(undefined8 *)(param_5 + 0x10),param_6,puVar3,unaff_x24);
                _objc_release(puVar3);
                unaff_x26 = puVar3;
              }
              func_0x00010be8cbe0(param_5,param_6,unaff_x23);
              goto LAB_10672fcac;
            }
          }
          else {
            func_0x00010beba300(param_5,param_6,unaff_x23,puVar1);
            unaff_x26 = unaff_x23;
            func_0x00010bf40120();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x26;
            func_0x00010bfe6360();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            puVar3 = *(undefined **)(param_5 + 0x10);
            func_0x00010c0e00e0(puVar3,param_6,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            if (puVar3 != (undefined *)0x0) {
              func_0x00010bfb2c80(puVar3);
              dVar16 = 0.0;
              func_0x00010c182300((double)fVar13,unaff_x25,param_6,0);
            }
            _objc_release(puVar3);
            unaff_x24 = puVar3;
LAB_10672fcac:
            _objc_release(unaff_x25);
          }
          _objc_release(unaff_x23);
          unaff_x28 = unaff_x28 + 1;
        } while (lVar2 != unaff_x28);
        lVar2 = unaff_x21;
        func_0x00010bf52a60(unaff_x21,param_6,&uStack_150,auStack_110,0x10);
        unaff_x22 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(unaff_x21);
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_280;
  pcStack_158 = FUN_10672fd38;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_1b0 = unaff_x28;
  lStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  uStack_180 = unaff_x22;
  lStack_178 = unaff_x21;
  puStack_170 = param_5;
  puStack_168 = puVar1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  dVar15 = 0.0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lVar5 = *(long *)(puVar3 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_240;
  lVar2 = lVar5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_270;
    do {
      lVar12 = 0;
      do {
        if (*plStack_270 != lVar11) {
          _objc_enumerationMutation(lVar5);
        }
        unaff_x24 = *(undefined **)(lStack_278 + lVar12 * 8);
        func_0x00010bf40120();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x24;
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x24);
        if (unaff_x23 != (undefined *)0x0) {
          puVar1 = unaff_x23;
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar1 != (undefined *)0x0) {
            puVar6 = unaff_x23;
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c0f3b00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar6);
            _objc_release(puVar1);
            unaff_x24 = puVar1;
            if (puVar6 == puVar7) {
              func_0x00010befa120(puVar4,param_6,unaff_x23);
            }
          }
        }
        _objc_release(unaff_x23);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar10 = auStack_240;
      lVar2 = lVar5;
      puVar9 = &uStack_280;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = lVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_10672feec;
  uStack_2e0 = param_1;
  dStack_2d8 = param_2;
  dStack_2d0 = param_3;
  dStack_2c8 = param_4;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  uStack_2b0 = unaff_x22;
  lStack_2a8 = lVar5;
  puStack_2a0 = puVar3;
  puStack_298 = puVar4;
  ppuStack_290 = &puStack_160;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  func_0x00010c23d0a0(puVar10);
  puVar8 = (undefined1 *)puVar9;
  func_0x00010c1554e0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7e0();
  _objc_release(puVar8);
  dVar18 = dVar18 + dVar16 + dVar15;
  func_0x00010c155d80(puVar9);
  if (2.0 < ABS(dVar17 - dVar18)) {
    lVar11 = *(long *)(lVar2 + 8);
    puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_300 = 0xc2000000;
    pcStack_2f8 = FUN_10673006c;
    puStack_2f0 = &UNK_110937bd0;
    _objc_retain(puVar9);
    puStack_2e8 = (undefined1 *)puVar9;
    func_0x00010c086e80(lVar11,param_6,&puStack_308);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar11;
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      lVar5 = lVar11;
      func_0x00010bf04a20(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x18),param_6,puVar10,lVar5);
      lVar2 = lVar2 + 0x30;
      _objc_loadWeakRetained(lVar2);
      lVar12 = lVar5;
      func_0x00010c067fc0(lVar5);
      func_0x00010bf73580(dVar18,lVar2,param_6,lVar12);
      _objc_release(lVar2);
      _objc_release(lVar5);
    }
    _objc_release(lVar11);
    _objc_release(puStack_2e8);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 10672fd38; end: 10672feeb; -[SCLEOrthogonalSectionAggregator visibleOrthogonalSections] */

void FUN_10672fd38(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar13 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_5 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_f0;
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
        lVar4 = *(long *)(lStack_128 + lVar12 * 8);
        func_0x00010bf40120();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        if (lVar5 != 0) {
          lVar4 = lVar5;
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            lVar6 = lVar5;
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = param_5;
            func_0x00010c0f3b00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar6);
            _objc_release(lVar4);
            if (lVar6 == lVar7) {
              func_0x00010befa120(puVar1,param_6,lVar5);
            }
          }
        }
        _objc_release(lVar5);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      puVar10 = auStack_f0;
      lVar3 = lVar2;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  func_0x00010c23d0a0(puVar10);
  puVar8 = (undefined1 *)puVar9;
  func_0x00010c1554e0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7e0();
  _objc_release(puVar8);
  param_3 = param_3 + param_2 + dVar13;
  func_0x00010c155d80(puVar9);
  if (2.0 < ABS(param_4 - param_3)) {
    lVar11 = *(long *)(lVar2 + 8);
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_10673006c;
    puStack_1a0 = &UNK_110937bd0;
    _objc_retain(puVar9);
    puStack_198 = (undefined1 *)puVar9;
    func_0x00010c086e80(lVar11,param_6,&puStack_1b8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar11;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      lVar3 = lVar11;
      func_0x00010bf04a20(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x18),param_6,puVar10,lVar3);
      lVar2 = lVar2 + 0x30;
      _objc_loadWeakRetained(lVar2);
      lVar12 = lVar3;
      func_0x00010c067fc0(lVar3);
      func_0x00010bf73580(param_3,lVar2,param_6,lVar12);
      _objc_release(lVar2);
      _objc_release(lVar3);
    }
    _objc_release(lVar11);
    _objc_release(puStack_198);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 10672feec; end: 10673006b; -[SCLEOrthogonalSectionAggregator orthogonalSectionController:didChangePreferredItemAttributes:] */

void FUN_10672feec(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c23d0a0(param_8);
  uVar1 = param_7;
  func_0x00010c1554e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7e0();
  _objc_release(uVar1);
  param_3 = param_3 + param_2 + param_1;
  func_0x00010c155d80(param_7);
  if (2.0 < ABS(param_4 - param_3)) {
    lVar4 = *(long *)(param_5 + 8);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10673006c;
    puStack_70 = &UNK_110937bd0;
    _objc_retain(param_7);
    uStack_68 = param_7;
    func_0x00010c086e80(lVar4,param_6,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar2 = lVar4;
      func_0x00010bf04a20(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_5 + 0x18),param_6,param_8,lVar2);
      param_5 = param_5 + 0x30;
      _objc_loadWeakRetained(param_5);
      lVar3 = lVar2;
      func_0x00010c067fc0(lVar2);
      func_0x00010bf73580(param_3,param_5,param_6,lVar3);
      _objc_release(param_5);
      _objc_release(lVar2);
    }
    _objc_release(lVar4);
    _objc_release(uStack_68);
  }
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10673006c; end: 10673007f;  */

void FUN_10673006c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  *(bool *)param_4 = param_3 == *(long *)(param_1 + 0x20);
  return;
}



/* Entry: 106730080; end: 1067300a7; -[SCLEOrthogonalSectionAggregator controllers] */

void FUN_106730080(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067300a8; end: 106730293; -[SCLEOrthogonalSectionAggregator visibleControllers] */

undefined *
FUN_1067300a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar14 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar2 = *(undefined8 **)(param_5 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = &uStack_130;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    lVar13 = *plStack_120;
    do {
      puVar10 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(puVar2);
        }
        lVar12 = *(long *)(lStack_128 + (long)puVar10 * 8);
        lVar4 = lVar12;
        func_0x00010bf40120();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        if (lVar5 != 0) {
          lVar4 = lVar5;
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            lVar6 = lVar5;
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = param_5;
            func_0x00010c0f3b00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar6);
            _objc_release(lVar4);
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if (lVar6 == lVar7) {
              lVar4 = lVar12;
              func_0x00010c156040(lVar12);
              func_0x00010c0df780(puVar8,param_6,lVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar11,param_6,lVar12,puVar8);
              _objc_release(puVar8);
            }
          }
        }
        _objc_release(lVar5);
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (puVar3 != puVar10);
      puVar10 = &uStack_130;
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  uVar15 = uVar14;
  uVar16 = param_2;
  uVar17 = param_3;
  uVar18 = param_4;
  _objc_retain(puVar10);
  puVar3 = puVar10;
  func_0x00010c155d80();
  iVar1 = (int)puVar3;
  _CGRectIntersectsRect(uVar14,param_2,param_3,param_4,uVar15,uVar16,uVar17,uVar18);
  if (iVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar10;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar9 == (undefined8 *)0x0) {
      puVar11 = (undefined *)0x1;
    }
    else {
      puVar3 = puVar9;
      func_0x00010c262ca0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f3b00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = (undefined *)(ulong)(puVar3 != puVar2);
      _objc_release();
      _objc_release(puVar3);
    }
    _objc_release(puVar9);
  }
  _objc_release(puVar10);
  return puVar11;
}



/* Entry: 106730294; end: 10673039f; -[SCLEOrthogonalSectionAggregator _sectionShouldBeAdded:bounds:] */

bool FUN_106730294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  bool bVar1;
  int iVar2;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar3;
  
  uVar5 = param_1;
  uVar6 = param_2;
  uVar7 = param_3;
  uVar8 = param_4;
  _objc_retain(param_7);
  lVar3 = param_7;
  func_0x00010c155d80();
  iVar2 = (int)lVar3;
  _CGRectIntersectsRect(param_1,param_2,param_3,param_4,uVar5,uVar6,uVar7,uVar8);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_7;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      bVar1 = true;
    }
    else {
      lVar3 = lVar4;
      func_0x00010c262ca0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f3b00(param_5);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar3 != param_5;
      _objc_release();
      _objc_release(lVar3);
    }
    _objc_release(lVar4);
  }
  _objc_release(param_7);
  return bVar1;
}



/* Entry: 1067303a0; end: 1067304ab; -[SCLEOrthogonalSectionAggregator _sectionShouldBeRemoved:bounds:] */

bool FUN_1067303a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,ulong param_7)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = param_1;
  uVar5 = param_2;
  uVar6 = param_3;
  uVar7 = param_4;
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010c155d80();
  _CGRectIntersectsRect(param_1,param_2,param_3,param_4,uVar4,uVar5,uVar6,uVar7);
  if ((uVar2 & 1) == 0) {
    uVar2 = param_7;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar2 = uVar3;
      func_0x00010c262ca0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f3b00(param_5);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar2 == param_5;
      _objc_release();
      _objc_release(uVar2);
    }
    _objc_release(uVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_7);
  return bVar1;
}



/* Entry: 1067304ac; end: 10673054b; -[SCLEOrthogonalSectionAggregator _showOrthogonalSection:parent:] */

void FUN_1067304ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0f3b00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x00010bf40120(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0(param_1,param_2,uVar2,0);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf72340(param_3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10673054c; end: 1067305c3; -[SCLEOrthogonalSectionAggregator _removeOrthogonalSection:] */

void FUN_10673054c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c12c960(lVar2);
    func_0x00010bf799c0(param_3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067305c4; end: 1067305db; -[SCLEOrthogonalSectionAggregator parentCollectionView] */

void FUN_1067305c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067305dc; end: 1067305f3; -[SCLEOrthogonalSectionAggregator delegate] */

void FUN_1067305dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067305f4; end: 1067305ff; -[SCLEOrthogonalSectionAggregator setDelegate:] */

void FUN_1067305f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106730600; end: 10673064b; -[SCLEOrthogonalSectionAggregator .cxx_destruct] */

void FUN_106730600(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10673064c; end: 10673069b; -[SCLEOrthogonalSectionFlowLayout initWithScrollPagingBehavior:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673064c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2c98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274f054) = param_3;
  }
  return;
}



/* Entry: 10673069c; end: 10673076f; -[SCLEOrthogonalSectionFlowLayout shouldInvalidateLayoutForPreferredLayoutAttributes:withOriginalAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10673069c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  double dVar4;
  double dVar5;
  long lStack_50;
  undefined *puStack_48;
  
  plVar3 = &lStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c23d0a0(param_5);
  dVar4 = param_1;
  dVar5 = param_2;
  func_0x00010c23d0a0(param_6);
  bVar1 = false;
  if ((param_1 == dVar4) && (bVar1 = false, !NAN(param_2) && !NAN(dVar5))) {
    bVar1 = param_2 == dVar5;
  }
  if (!bVar1) {
    lVar2 = param_3 + _DAT_11274f058;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0edbe0();
    _objc_release(lVar2);
  }
  puStack_48 = PTR_PTR_1126f2c98;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_shouldInvalidateLayoutForPreferr_112531928,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)plVar3;
}



/* Entry: 106730770; end: 10673089f; -[SCLEOrthogonalSectionFlowLayout targetContentOffsetForProposedContentOffset:withScrollingVelocity:] */

undefined1  [16]
FUN_106730770(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  ulong uStack_50;
  undefined *puStack_48;
  
  uVar1 = param_5;
  dVar2 = param_1;
  func_0x00010be9bf00();
  if ((uVar1 & 1) == 0) {
    puStack_48 = PTR_PTR_1126f2c98;
    uStack_50 = param_5;
    _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,
                        PTR_s_targetContentOffsetForProposedCo_1126781a0);
  }
  else {
    func_0x00010bf99780(param_5);
    dVar3 = dVar2;
    func_0x00010c0ce4a0(param_5);
    dVar2 = dVar2 + dVar3;
    uVar1 = param_5;
    func_0x00010bf40120(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    dVar3 = dVar3 / dVar2;
    _objc_release(uVar1);
    param_1 = (double)(long)dVar3;
    dVar3 = (double)(long)dVar3;
    func_0x00010bf40120(dVar3,param_1,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c7c0();
    param_1 = dVar2 * dVar3 - param_1;
    _objc_release(param_5);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1067308a0; end: 1067308b7; -[SCLEOrthogonalSectionFlowLayout _scrollPagingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1067308a0(long param_1)

{
  return *(long *)(param_1 + _DAT_11274f054) == 1;
}



/* Entry: 1067308b8; end: 1067308d7; -[SCLEOrthogonalSectionFlowLayout delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067308b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274f058);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067308d8; end: 1067308eb; -[SCLEOrthogonalSectionFlowLayout setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067308d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274f058,param_3);
  return;
}



/* Entry: 1067308ec; end: 1067308fb; -[SCLEOrthogonalSectionFlowLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067308ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f058);
  return;
}



/* Entry: 1067308fc; end: 106730a4b; -[SCLELayoutSection initWithScrollsOrthogonally:verticalInterItemSpacing:horizontalInterItemSpacing:itemSize:contentInsets:headerFollowContentInsets:scrollBehavior:header:identifierToCellClassMap:supplementaryModels:] */

undefined1 *
FUN_1067308fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puVar1 = &uStack_a0;
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_98 = PTR_PTR_1126f2ca0;
  uStack_a0 = param_9;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_11;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    *(undefined8 *)((long)puVar1 + 0x58) = param_6;
    *(undefined8 *)((long)puVar1 + 0x60) = param_7;
    *(undefined8 *)((long)puVar1 + 0x68) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_12;
    *(undefined8 *)((long)puVar1 + 0x20) = param_13;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  return (undefined1 *)puVar1;
}



/* Entry: 106730a4c; end: 106730a6f; -[SCLELayoutSection copyWithZone:] */

undefined8 FUN_106730a4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106730a70; end: 106730c03; -[SCLELayoutSection hash] */

ulong * FUN_106730a70(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ushort uVar10;
  double dVar11;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uStack_98 = (ulong)*(byte *)(param_1 + 8);
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_90 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_88 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_80 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_78 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_70 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_68 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_60 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar5;
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar4;
  func_0x00010bfde980();
  puVar6 = &uStack_98;
  uStack_30 = uVar5;
  func_0x000100505190(puVar6,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == param_3) {
LAB_106730d84:
    puVar9 = (ulong *)0x1;
  }
  else {
    puVar9 = (ulong *)0x0;
    if ((puVar6 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_106730d88;
    puVar9 = puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar7 & 1) != 0) &&
       ((((char)puVar6[1] == (char)param_3[1] &&
         (*(char *)((long)puVar6 + 9) == *(char *)((long)param_3 + 9))) && (puVar6[4] == param_3[4])
        ))) {
      dVar11 = ABS((double)puVar6[2] - (double)param_3[2]);
      dVar2 = ABS((double)puVar6[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar3 = false, !NAN(dVar11) && !NAN(dVar2))) {
        bVar3 = dVar11 < dVar2;
      }
      if (bVar3) {
        dVar11 = ABS((double)puVar6[3] - (double)param_3[3]);
        dVar2 = ABS((double)puVar6[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar3 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar3 = false, !NAN(dVar11) && !NAN(dVar2))) {
          bVar3 = dVar11 < dVar2;
        }
        if (bVar3) {
          puVar9 = (ulong *)0x0;
          if (((double)puVar6[8] != (double)param_3[8]) || ((double)puVar6[9] != (double)param_3[9])
             ) goto LAB_106730d88;
          uVar10 = NEON_uminv(CONCAT26(-(ushort)((double)puVar6[0xd] == (double)param_3[0xd]),
                                       CONCAT24(-(ushort)((double)puVar6[0xc] ==
                                                         (double)param_3[0xc]),
                                                CONCAT22(-(ushort)((double)puVar6[0xb] ==
                                                                  (double)param_3[0xb]),
                                                         -(ushort)((double)puVar6[10] ==
                                                                  (double)param_3[10])))),2);
          if ((((uVar10 & 1) != 0) &&
              ((uVar8 = puVar6[5], uVar8 == param_3[5] || (func_0x00010c071ae0(), (int)uVar8 != 0)))
              ) && ((uVar8 = puVar6[6], uVar8 == param_3[6] ||
                    (func_0x00010c071ae0(), (int)uVar8 != 0)))) {
            puVar9 = (ulong *)puVar6[7];
            if (puVar9 != (ulong *)param_3[7]) {
              func_0x00010c071ae0();
              goto LAB_106730d88;
            }
            goto LAB_106730d84;
          }
        }
      }
    }
    puVar9 = (ulong *)0x0;
  }
LAB_106730d88:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 106730c04; end: 106730da3; -[SCLELayoutSection isEqual:] */

long FUN_106730c04(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106730d84:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106730d88;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    if (((uVar4 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      dVar7 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar1 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
        bVar2 = dVar7 < dVar1;
      }
      if (bVar2) {
        dVar7 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar1 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
          bVar2 = dVar7 < dVar1;
        }
        if (bVar2) {
          lVar5 = 0;
          if ((*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40)) ||
             (*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_106730d88;
          uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x68) ==
                                               *(double *)(param_3 + 0x68)),
                                      CONCAT24(-(ushort)(*(double *)(param_1 + 0x60) ==
                                                        *(double *)(param_3 + 0x60)),
                                               CONCAT22(-(ushort)(*(double *)(param_1 + 0x58) ==
                                                                 *(double *)(param_3 + 0x58)),
                                                        -(ushort)(*(double *)(param_1 + 0x50) ==
                                                                 *(double *)(param_3 + 0x50))))),2);
          if ((((uVar6 & 1) != 0) &&
              ((lVar5 = *(long *)(param_1 + 0x28), lVar5 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
             ((lVar5 = *(long *)(param_1 + 0x30), lVar5 == *(long *)(param_3 + 0x30) ||
              (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
            lVar5 = *(long *)(param_1 + 0x38);
            if (lVar5 != *(long *)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_106730d88;
            }
            goto LAB_106730d84;
          }
        }
      }
    }
    lVar5 = 0;
  }
LAB_106730d88:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 106730da4; end: 106730dab; -[SCLELayoutSection scrollsOrthogonally] */

undefined1 FUN_106730da4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106730dac; end: 106730db3; -[SCLELayoutSection verticalInterItemSpacing] */

undefined8 FUN_106730dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106730db4; end: 106730dbb; -[SCLELayoutSection horizontalInterItemSpacing] */

undefined8 FUN_106730db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106730dbc; end: 106730dc3; -[SCLELayoutSection itemSize] */

undefined1  [16] FUN_106730dbc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 106730dc4; end: 106730dcf; -[SCLELayoutSection contentInsets] */

undefined8 FUN_106730dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106730dd0; end: 106730dd7; -[SCLELayoutSection headerFollowContentInsets] */

undefined1 FUN_106730dd0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106730dd8; end: 106730ddf; -[SCLELayoutSection scrollBehavior] */

undefined8 FUN_106730dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106730de0; end: 106730de7; -[SCLELayoutSection header] */

undefined8 FUN_106730de0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106730de8; end: 106730def; -[SCLELayoutSection identifierToCellClassMap] */

undefined8 FUN_106730de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106730df0; end: 106730df7; -[SCLELayoutSection supplementaryModels] */

undefined8 FUN_106730df0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106730df8; end: 106730e33; -[SCLELayoutSection .cxx_destruct] */

void FUN_106730df8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 106730e34; end: 106730ee7; -[SCLELayoutSupplementaryTuple initWithViewKind:reuseIdentifier:viewClass:] */

undefined1 *
FUN_106730e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2ca8;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106730ee8; end: 106730f0b; -[SCLELayoutSupplementaryTuple copyWithZone:] */

undefined8 FUN_106730ee8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106730f0c; end: 106730f8b; -[SCLELayoutSupplementaryTuple hash] */

undefined8 * FUN_106730f0c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106731024:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106731030;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106731030;
          }
          goto LAB_106731024;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106731030:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106730f8c; end: 10673104b; -[SCLELayoutSupplementaryTuple isEqual:] */

long FUN_106730f8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106731024:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106731030;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106731030;
          }
          goto LAB_106731024;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106731030:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10673104c; end: 106731053; -[SCLELayoutSupplementaryTuple viewKind] */

undefined8 FUN_10673104c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106731054; end: 10673105b; -[SCLELayoutSupplementaryTuple reuseIdentifier] */

undefined8 FUN_106731054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10673105c; end: 106731063; -[SCLELayoutSupplementaryTuple viewClass] */

undefined8 FUN_10673105c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106731064; end: 106731093; -[SCLELayoutSupplementaryTuple .cxx_destruct] */

void FUN_106731064(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106731094; end: 10673111b; -[SCLELayoutSectionHeader initWithElementKind:height:] */

undefined1 *
FUN_106731094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2cb0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10673111c; end: 10673113f; -[SCLELayoutSectionHeader copyWithZone:] */

undefined8 FUN_10673111c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


