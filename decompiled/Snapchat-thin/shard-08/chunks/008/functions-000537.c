/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106626d08; end: 106626d17; -[SCUnifiedProfileFlatlandCollectionCellBackgroundCollectionViewLayoutAttributes setFirstVisibleSectionIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106626d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11274c5f8) = param_3;
  return;
}



/* Entry: 106626d18; end: 106626d6b; +[SCUnifiedProfileFlatlandView SCUnifiedProfileFlatlandCollectionCellBackgroundViewString] */

void FUN_106626d18(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c3a98 != -1) {
    func_0x00010002a2fc(0x1136c3a98,&PTR___NSConcreteGlobalBlock_110930410);
  }
  uVar1 = uRam00000001136c3a90;
  _objc_retain(uRam00000001136c3a90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106626d6c; end: 106626da3;  */

void FUN_106626d6c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126cc3a0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3a90;
  puRam00000001136c3a90 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106626da4; end: 106626df7; +[SCUnifiedProfileFlatlandView SCUnifiedProfileFlatlandCollectionCellBackgroundFlatCornerViewString] */

void FUN_106626da4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c3aa8 != -1) {
    func_0x00010002a2fc(0x1136c3aa8,&PTR___NSConcreteGlobalBlock_110930430);
  }
  uVar1 = uRam00000001136c3aa0;
  _objc_retain(uRam00000001136c3aa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106626df8; end: 106626e2f;  */

void FUN_106626df8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126cc3a8;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3aa0;
  puRam00000001136c3aa0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106626e30; end: 106626e83; +[SCUnifiedProfileFlatlandView SCUnifiedProfileFlatlandCollectionBackgroundGradientViewString] */

void FUN_106626e30(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c3ab8 != -1) {
    func_0x00010002a2fc(0x1136c3ab8,&PTR___NSConcreteGlobalBlock_110930450);
  }
  uVar1 = uRam00000001136c3ab0;
  _objc_retain(uRam00000001136c3ab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106626e84; end: 106626ebb;  */

void FUN_106626e84(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126cc3b0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c3ab0;
  puRam00000001136c3ab0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106626ebc; end: 106627193; -[SCUnifiedProfileFlatlandView initWithFrame:disableProfileCardBackground:delegate:sectionCountWithTransparentBackground:layoutOptimisationsCacheLength:hideTrayGradient:profileType:hasPublicProfile:useStaticTrayYOffset:friendProfileV2Enabled:enableGradientDecorationIndexPathValidation:customAppThemeProvider:useStaticTrayWithoutSwitcherButtonsYOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106626ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9
             ,undefined8 param_10,undefined1 param_11,long param_12,undefined4 param_13,
             undefined4 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_8);
  _objc_retain(param_15);
  puStack_88 = PTR_PTR_1126f2220;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274c60c,param_8);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c610) = param_11;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c614) = param_13._2_1_;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c618) = param_16;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c61c) = param_13._3_1_;
    *(long *)((long)puVar1 + (long)_DAT_11274c620) = param_12;
    lVar5 = (long)_DAT_11274c624;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274c628);
    *(undefined **)((long)puVar1 + (long)_DAT_11274c628) = puVar3;
    _objc_release(uVar2);
    if (param_7 == 0) {
      puVar3 = PTR_PTR_1126cc3b8;
      _objc_alloc(PTR_PTR_1126cc3b8);
      func_0x00010c042ea0();
      func_0x00010c1b9be0();
      _objc_storeWeak((long)puVar1 + (long)_DAT_11274c62c,puVar3);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
      _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
    }
    puVar4 = PTR_PTR_1126cc3c0;
    _objc_alloc();
    func_0x00010c014040(param_1,param_2,param_3,param_4);
    lVar5 = (long)_DAT_11274c630;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar4;
    _objc_retain();
    _objc_release(uVar2);
    func_0x00010c167a20(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c181fc0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    func_0x00010c17d4c0(puVar1);
    *(bool *)((long)puVar1 + (long)_DAT_11274c634) = param_12 == 0;
    *(bool *)((long)puVar1 + (long)_DAT_11274c638) = param_12 == 2;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c63c) = (undefined1)param_13;
    func_0x00010bdeb1e0(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_15);
  _objc_release(param_8);
  return puVar1;
}



/* Entry: 106627194; end: 1066271cb; -[SCUnifiedProfileFlatlandView setCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106627194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274c630);
  *(undefined8 *)(param_1 + _DAT_11274c630) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066271cc; end: 106627223; -[SCUnifiedProfileFlatlandView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066271cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2220;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11274c630));
  return;
}



/* Entry: 106627224; end: 10662738f; -[SCUnifiedProfileFlatlandView pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106627224(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = param_3;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(ulong *)(lStack_128 + lVar7 * 8);
        uVar2 = uVar5;
        func_0x00010c074c20();
        if (((uVar2 & 1) == 0) && (uVar2 = uVar5, func_0x00010c082800(), (int)uVar2 != 0)) {
          func_0x00010bf512a0(param_1,param_2,param_3,param_4,uVar5);
          func_0x00010c102b20(uVar5,param_4,param_5);
          if ((uVar5 & 1) != 0) {
            uVar4 = 1;
            goto LAB_106627340;
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_4,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  uVar4 = 0;
LAB_106627340:
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar4;
  }
  ___stack_chk_fail();
  lVar3 = (long)_DAT_11274c630;
  func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar3));
  uVar4 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bf4d5e0(uVar4);
  return uVar4;
}



/* Entry: 106627390; end: 1066273d3; -[SCUnifiedProfileFlatlandView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106627390(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274c630;
  func_0x00010bf4d5e0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf4d5e0(*(undefined8 *)(param_2 + lVar1));
  return param_1;
}



/* Entry: 1066273d4; end: 106627aa3; -[SCUnifiedProfileFlatlandView _createBackgroundImageView] */

/* WARNING: Possible PIC construction at 0x000106627af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106627af8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066273d4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_11274c640;
  if (lRam00000001138466f0 < 3) {
    if (*(long *)(param_1 + lVar16) == 0) goto LAB_106627a24;
    lVar15 = (long)_DAT_11274c64c;
    func_0x00010c12c940(*(undefined8 *)(param_1 + lVar15));
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined8 *)(param_1 + lVar15) = 0;
    _objc_release(uVar14);
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar16));
    puVar5 = *(undefined1 **)(param_1 + lVar16);
    *(undefined8 *)(param_1 + lVar16) = 0;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      puVar5 = (undefined1 *)0x0;
      goto code_r0x00010bed3b20;
    }
  }
  else {
    if (*(long *)(param_1 + lVar16) == 0) {
      lVar15 = (long)_DAT_11274c624;
      uVar1 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar1;
      func_0x00010bf13c20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar14;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf140c0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + _DAT_11274c644);
      *(undefined8 *)(param_1 + _DAT_11274c644) = uVar3;
      _objc_release(uVar13);
      _objc_release(uVar2);
      _objc_release(uVar14);
      _objc_release(uVar1);
      _objc_initWeak(auStack_90,param_1);
      uVar13 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf13c20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar14;
      func_0x00010c28d760();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e0e80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      param_2 = auStack_90;
      _objc_copyWeak(auStack_98,param_2);
      uVar1 = uVar3;
      func_0x00010c25ff60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(puVar4);
      _objc_release(uVar2);
      _objc_release(uVar14);
      _objc_release(uVar13);
      puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010bf20c00(param_1);
      func_0x00010c013de0();
      uVar14 = *(undefined8 *)(param_1 + lVar16);
      *(undefined **)(param_1 + lVar16) = puVar4;
      _objc_release(uVar14);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar16));
      puVar5 = *(undefined1 **)(param_1 + _DAT_11274c630);
      if (puVar5 == (undefined1 *)0x0) {
LAB_10662761c:
        func_0x00010c066fa0(param_1);
      }
      else {
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 != param_1) goto LAB_10662761c;
        func_0x00010c066fe0(param_1);
      }
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar13 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar16);
      uStack_88 = uVar14;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar16);
      uStack_80 = uVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_1;
      func_0x00010c2793a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar16);
      uStack_78 = uVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_1;
      func_0x00010bf1ff80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
      _objc_release(puVar12);
      _objc_release(uVar1);
      _objc_release(puVar11);
      _objc_release(uVar10);
      _objc_release(uVar3);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar2);
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(uVar14);
      _objc_release(puVar5);
      _objc_release(uVar13);
      puVar4 = PTR__OBJC_CLASS___CALayer_1126b1750;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = (long)_DAT_11274c648;
      uVar14 = *(undefined8 *)(param_1 + lVar15);
      *(undefined **)(param_1 + lVar15) = puVar4;
      _objc_release(uVar14);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0(puVar4);
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar15));
      _objc_release(puVar4);
      puVar5 = param_1;
      func_0x00010be409c0();
      if ((((int)puVar5 != 0) && ((param_1[_DAT_11274c614] & 1) == 0)) &&
         ((param_1[_DAT_11274c618] & 1) == 0)) {
        func_0x00010c1842e0(0x4030000000000000,*(undefined8 *)(param_1 + lVar15));
      }
      uVar14 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c08c0e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(uVar14);
      puVar4 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = (long)_DAT_11274c64c;
      uVar14 = *(undefined8 *)(param_1 + lVar15);
      *(undefined **)(param_1 + lVar15) = puVar4;
      _objc_release(uVar14);
      puVar4 = PTR_PTR_1126cc3c8;
      func_0x00010c0ef8c0(PTR_PTR_1126cc3c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar15));
      _objc_release(puVar4);
      func_0x00010c0ef940(PTR_PTR_1126cc3c8);
      func_0x00010c209760(*(undefined8 *)(param_1 + lVar15));
      func_0x00010c0ef8e0(PTR_PTR_1126cc3c8);
      func_0x00010c196020(*(undefined8 *)(param_1 + lVar15));
      func_0x00010c0ef920(PTR_PTR_1126cc3c8);
      func_0x00010c1d4bc0(*(undefined8 *)(param_1 + lVar15));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar15));
      puVar5 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c08c0e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066f60(puVar5);
      _objc_release(uVar14);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_98);
      param_1 = auStack_90;
      _objc_destroyWeak();
    }
LAB_106627a24:
    puVar5 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar5);
  _objc_retain(param_2);
  param_1 = puVar5 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar5 = param_2;
  func_0x00010bf140c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
code_r0x00010bed3b20:
                    /* WARNING: Could not recover jumptable at 0x00010bed3b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBackgroundImage__112592870,puVar5);
  return;
}



/* Entry: 106627aa4; end: 106627b13;  */

void FUN_106627aa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf140c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bed3b20(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106627b14; end: 106627bcb; -[SCUnifiedProfileFlatlandView _updateBackgroundImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106627b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274c644);
  *(undefined8 *)(param_1 + _DAT_11274c644) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274c640),param_2,param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274c648),param_2,lRam00000001138466f0 < 3);
  if (lRam00000001138466f0 < 3) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + _DAT_11274c610);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274c64c),param_2,bVar1 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106627bcc; end: 106627c5b; -[SCUnifiedProfileFlatlandView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106627bcc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2220;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bdeb1e0(param_1);
  lVar1 = param_1 + _DAT_11274c62c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  func_0x00010bed3a00(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106627c5c; end: 106627cbb; -[SCUnifiedProfileFlatlandView transparentBackgroundHeightChanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106627c5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11274c62c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  func_0x00010bed3a00(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106627cbc; end: 106627d13; -[SCUnifiedProfileFlatlandView scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106627cbc(long param_1,undefined8 param_2)

{
  func_0x00010c0f95a0(*(undefined8 *)(param_1 + _DAT_11274c650),param_2,
                      PTR____NSArray0__struct_11034ab48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274c60c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c152c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106627d14; end: 106627ddb; -[SCUnifiedProfileFlatlandView collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106627d14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = (long)_DAT_11274c60c;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1554e0(param_5);
    func_0x00010c0840e0(param_5);
    func_0x00010bfb68e0(param_4);
    func_0x00010bfb2760(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106627ddc; end: 106627eb3; -[SCUnifiedProfileFlatlandView collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106627ddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = (long)_DAT_11274c60c;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1554e0(param_6);
    func_0x00010bfb68e0(param_4);
    func_0x00010bfb2780(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106627eb4; end: 106627fb7; -[SCUnifiedProfileFlatlandView scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106627eb4(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010bf4cdc0(param_5);
  func_0x00010bed3a00(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_3 + _DAT_11274c654);
  func_0x00010bf4cdc0(param_5);
  dVar9 = param_2;
  _objc_release(param_5);
  uVar6 = (ulong)(uint)(float)param_2;
  func_0x00010c0df740(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f95a0(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  if ((2 < lRam00000001138466f0) && (*(long *)(puVar2 + _DAT_11274c640) != 0)) {
    uVar7 = uVar6;
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c220220(PTR__OBJC_CLASS___CATransaction_1126b5718);
    if (puVar2[_DAT_11274c618] != '\x01') {
      func_0x00010c242560(PTR_PTR_1126cc3c8);
      puVar1 = PTR_PTR_1126cc3c8;
      puVar3 = puVar2 + _DAT_11274c62c;
      uVar8 = uVar7;
      _objc_loadWeakRetained(puVar3);
      func_0x00010c155f20();
      func_0x00010c242580(uVar6,dVar9,uVar8,uVar7,puVar1);
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126cc3c8;
    func_0x00010bf20c00(puVar2);
    func_0x00010c0bc140(puVar3);
    func_0x00010c19f0e0(*(undefined8 *)(puVar2 + _DAT_11274c648));
    puVar3 = PTR_PTR_1126cc3c8;
    func_0x00010bf20c00(puVar2);
    func_0x00010c0ef900(puVar3);
    func_0x00010c19f0e0(*(undefined8 *)(puVar2 + _DAT_11274c64c));
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_commit_1125ae380);
    return;
  }
  return;
}



/* Entry: 106627fb8; end: 106628163; -[SCUnifiedProfileFlatlandView _updateBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106627fb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((2 < lRam00000001138466f0) && (*(long *)(param_3 + _DAT_11274c640) != 0)) {
    uVar3 = param_1;
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c220220(PTR__OBJC_CLASS___CATransaction_1126b5718);
    if (*(char *)(param_3 + _DAT_11274c618) != '\x01') {
      func_0x00010c242560(PTR_PTR_1126cc3c8);
      puVar1 = PTR_PTR_1126cc3c8;
      lVar2 = param_3 + _DAT_11274c62c;
      uVar4 = uVar3;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c155f20();
      func_0x00010c242580(param_1,param_2,uVar4,uVar3,puVar1);
      _objc_release(lVar2);
    }
    puVar1 = PTR_PTR_1126cc3c8;
    func_0x00010bf20c00(param_3);
    func_0x00010c0bc140(puVar1);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + _DAT_11274c648));
    puVar1 = PTR_PTR_1126cc3c8;
    func_0x00010bf20c00(param_3);
    func_0x00010c0ef900(puVar1);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + _DAT_11274c64c));
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_commit_1125ae380);
    return;
  }
  return;
}



/* Entry: 106628164; end: 106628167; -[SCUnifiedProfileFlatlandView scrollViewDidEndDecelerating:] */

void FUN_106628164(void)

{
  return;
}



/* Entry: 106628168; end: 1066282a7; -[SCUnifiedProfileFlatlandView scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628168(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010bf4cdc0(param_5);
  uVar5 = param_5;
  dVar8 = param_2;
  func_0x00010c0f36c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00();
  _objc_release(param_5);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_3 + _DAT_11274c658);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740((float)param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar1;
  func_0x00010c0df740(-(float)dVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f95a0(uVar6,param_4,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = (long)_DAT_11274c62c;
  _objc_retain(uVar5);
  puVar2 = puVar1 + lVar7;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c1f91c0();
  _objc_release(uVar5);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126cc3c8;
  puVar2 = puVar1 + lVar7;
  _objc_loadWeakRetained(puVar2);
  puVar4 = puVar2;
  func_0x00010c1558e0();
  func_0x00010c230e80(puVar3,param_4,puVar4,puVar1[_DAT_11274c610]);
  func_0x00010c1a7f60(*(undefined8 *)(puVar1 + _DAT_11274c64c),param_4,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1066282a8; end: 106628357; -[SCUnifiedProfileFlatlandView setSectionCountWithTransparentBackground:nonTransparentSectionInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066282a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274c62c;
  _objc_retain(param_4);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1f91c0();
  _objc_release(param_4);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126cc3c8;
  lVar3 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010c1558e0();
  func_0x00010c230e80(puVar2,param_2,lVar1,*(undefined1 *)(param_1 + _DAT_11274c610));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274c64c),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106628358; end: 1066283ef; -[SCUnifiedProfileFlatlandView setSectionCountWithTransparentBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628358(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274c62c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1f91a0();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126cc3c8;
  lVar3 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010c1558e0();
  func_0x00010c230e80(puVar2,param_2,lVar1,*(undefined1 *)(param_1 + _DAT_11274c610));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274c64c),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1066283f0; end: 1066284bb; +[SCUnifiedProfileFlatlandView bindAttributes:] */

void FUN_1066283f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a0e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e57158,1,
                      &PTR___NSConcreteGlobalBlock_110930490,&PTR___NSConcreteGlobalBlock_1109304d0)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e57178,
                      &PTR___NSConcreteGlobalBlock_110930510,&PTR___NSConcreteGlobalBlock_110930550)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e57198,
                      &PTR___NSConcreteGlobalBlock_110930570,&PTR___NSConcreteGlobalBlock_110930590)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e571b8,
                      &PTR___NSConcreteGlobalBlock_1109305b0,&PTR___NSConcreteGlobalBlock_1109305d0)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e571d8,
                      &PTR___NSConcreteGlobalBlock_1109305f0,&PTR___NSConcreteGlobalBlock_110930610)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066284bc; end: 1066285bf;  */

undefined8
FUN_1066284bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_5);
  func_0x00010c14d9e0(puVar1);
  uVar2 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(param_1,0,param_3,0);
  _objc_release(uVar2);
  func_0x00010c1cbe20(param_5);
  _objc_release(param_5);
  return 1;
}



/* Entry: 1066285c0; end: 1066285f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066285c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11274c654);
  *(undefined8 *)(param_2 + _DAT_11274c654) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066285f8; end: 10662860b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066285f8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11274c654);
  *(undefined8 *)(param_2 + _DAT_11274c654) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10662860c; end: 106628643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662860c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11274c650);
  *(undefined8 *)(param_2 + _DAT_11274c650) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106628644; end: 106628657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628644(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11274c650);
  *(undefined8 *)(param_2 + _DAT_11274c650) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106628658; end: 10662868f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628658(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11274c658);
  *(undefined8 *)(param_2 + _DAT_11274c658) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106628690; end: 1066286ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628690(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11274c658);
  *(undefined8 *)(param_2 + _DAT_11274c658) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066286ac; end: 1066286c3; -[SCUnifiedProfileFlatlandView _isFriendProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1066286ac(long param_1)

{
  return *(long *)(param_1 + _DAT_11274c620) == 1;
}



/* Entry: 1066286c4; end: 1066286d3; -[SCUnifiedProfileFlatlandView collectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066286c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c630);
}



/* Entry: 1066286d4; end: 1066286e3; -[SCUnifiedProfileFlatlandView staticTrayBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066286d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c65c);
}



/* Entry: 1066286e4; end: 106628723; -[SCUnifiedProfileFlatlandView setStaticTrayBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066286e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274c65c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106628724; end: 10662880b; -[SCUnifiedProfileFlatlandView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628724(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274c65c,0);
  _objc_storeStrong(param_1 + _DAT_11274c630,0);
  _objc_storeStrong(param_1 + _DAT_11274c644,0);
  _objc_storeStrong(param_1 + _DAT_11274c624,0);
  _objc_storeStrong(param_1 + _DAT_11274c628,0);
  _objc_destroyWeak(param_1 + _DAT_11274c62c);
  _objc_storeStrong(param_1 + _DAT_11274c64c,0);
  _objc_storeStrong(param_1 + _DAT_11274c648,0);
  _objc_storeStrong(param_1 + _DAT_11274c640,0);
  _objc_storeStrong(param_1 + _DAT_11274c658,0);
  _objc_storeStrong(param_1 + _DAT_11274c650,0);
  _objc_storeStrong(param_1 + _DAT_11274c654,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274c60c);
  return;
}



/* Entry: 10662880c; end: 106628817; -[SCUnifiedProfileFlatlandCollectionView pointInside:withEvent:] */

bool FUN_10662880c(undefined8 param_1,double param_2)

{
  return 0.0 < param_2;
}



/* Entry: 106628818; end: 106628877; -[SCUnifiedProfileFlatlandCollectionView setContentOffset:] */

void FUN_106628818(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_3;
  func_0x00010c14c2e0();
  if ((uVar1 & 1) == 0) {
    puStack_38 = PTR_PTR_1126f2228;
    uStack_40 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&uStack_40,PTR_s_setContentOffset__11263e2d8);
  }
  return;
}



/* Entry: 106628878; end: 1066289d7; -[SCUnifiedProfileFlatlandCollectionView layoutSubviews] */

void FUN_106628878(undefined8 param_1)

{
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f2228;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 1066289d8; end: 1066289df;  */

void FUN_1066289d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_reloadData_112627cf8)
  ;
  return;
}



/* Entry: 1066289e0; end: 106628a3f; -[SCUnifiedProfileFlatlandCollectionView metricsLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066289e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274c600;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126cc390;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106628a40; end: 106628a4f; -[SCUnifiedProfileFlatlandCollectionView scShouldIgnoreContentOffsetChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106628a40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274c604);
}



/* Entry: 106628a50; end: 106628a5f; -[SCUnifiedProfileFlatlandCollectionView setScShouldIgnoreContentOffsetChanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628a50(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274c604) = param_3;
  return;
}



/* Entry: 106628a60; end: 106628a73; -[SCUnifiedProfileFlatlandCollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c600,0);
  return;
}



/* Entry: 106628a74; end: 106628afb; -[SCUnifiedProfileFlatlandCollectionViewLayout mainScreenBoundsSizeHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628a74(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 in_d3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar5 = (long)_DAT_11274c660;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c0df720(in_d3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    lVar1 = *(long *)(param_1 + lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf885b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_doubleValue_1125bfb10);
  return;
}



/* Entry: 106628afc; end: 106628d23; -[SCUnifiedProfileFlatlandCollectionViewLayout initWithSectionCountWithTransparentBackground:profileFlatlandCollectionViewDelegate:hideTrayGradient:hasPublicProfile:useStaticTrayYOffset:enableGradientDecorationIndexPathValidation:useStaticTrayWithoutSwitcherButtonsYOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106628afc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126f2230;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c664) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c668) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c66c) = param_9;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c670) = param_8;
    *(bool *)((long)puVar1 + (long)_DAT_11274c674) = param_3 != 0;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11274c678),param_4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c67c) = param_5;
    puVar2 = PTR_PTR_1126cc3d0;
    _objc_opt_class(PTR_PTR_1126cc3d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126020(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126cc3a0;
    _objc_opt_class(PTR_PTR_1126cc3a0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cc3d8;
    func_0x00010bdc2520(PTR_PTR_1126cc3d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126020(puVar1);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126cc3a8;
    _objc_opt_class(PTR_PTR_1126cc3a8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126cc3d8;
    func_0x00010bdc2500(PTR_PTR_1126cc3d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126020(puVar1);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126cc3b0;
    _objc_opt_class(PTR_PTR_1126cc3b0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc3d8;
    func_0x00010bdc24e0(PTR_PTR_1126cc3d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126020(puVar1);
    _objc_release(puVar6);
    func_0x00010be92340(puVar1);
    *(long *)((long)puVar1 + (long)_DAT_11274c680) = param_3;
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106628d24; end: 106628d97; -[SCUnifiedProfileFlatlandCollectionViewLayout setSectionCountWithTransparentBackground:nonTransparentSectionInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628d24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (*(char *)(param_1 + _DAT_11274c674) == '\x01') {
    *(undefined8 *)(param_1 + _DAT_11274c680) = param_3;
    lVar2 = (long)_DAT_11274c684;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_4;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106628d98; end: 106628dbb; -[SCUnifiedProfileFlatlandCollectionViewLayout setSectionCountWithTransparentBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + _DAT_11274c674) == '\x01') {
    *(undefined8 *)(param_1 + _DAT_11274c680) = param_3;
  }
  return;
}



/* Entry: 106628dbc; end: 106628dff; -[SCUnifiedProfileFlatlandCollectionViewLayout invalidateLayout] */

void FUN_106628dbc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be92340();
  puStack_28 = PTR_PTR_1126f2230;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_invalidateLayout_1125f8208);
  return;
}



/* Entry: 106628e00; end: 106628eaf; -[SCUnifiedProfileFlatlandCollectionViewLayout shouldInvalidateLayoutForBoundsChange:] */

void FUN_106628e00(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar2 = param_5;
  dVar3 = param_3;
  dVar4 = param_4;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar2);
  bVar1 = false;
  if ((param_3 == dVar3) && (bVar1 = false, !NAN(param_4) && !NAN(dVar4))) {
    bVar1 = param_4 == dVar4;
  }
  if (bVar1) {
    puStack_58 = PTR_PTR_1126f2230;
    uStack_60 = param_5;
    _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                        PTR_s_shouldInvalidateLayoutForBoundsC_112531590);
  }
  return;
}



/* Entry: 106628eb0; end: 106628f83; -[SCUnifiedProfileFlatlandCollectionViewLayout invalidationContextForBoundsChange:] */

void FUN_106628eb0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f2230;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_invalidationContextForBoundsChan_112531598);
  _objc_retainAutoreleasedReturnValue();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  uVar2 = param_5;
  dVar3 = param_1;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(uVar2);
  if (param_1 != dVar3) {
    func_0x00010c1ae7e0(puVar1);
    func_0x00010be92340(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106628f84; end: 10662900f; -[SCUnifiedProfileFlatlandCollectionViewLayout _resetAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106628f84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274c688;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,
                      *(long *)(param_1 + lVar3) + 1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274c68c);
  *(undefined **)(param_1 + _DAT_11274c68c) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd60(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00,param_2,
                      *(long *)(param_1 + lVar3) + 1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274c690);
  *(undefined **)(param_1 + _DAT_11274c690) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106629010; end: 10662903f; -[SCUnifiedProfileFlatlandCollectionViewLayout setLayoutOptimisationsCacheLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106629010(long param_1,undefined8 param_2,ulong param_3)

{
  param_3 = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
  if (7 < (long)param_3) {
    param_3 = 8;
  }
  if (*(ulong *)(param_1 + _DAT_11274c688) == param_3) {
    return;
  }
  *(ulong *)(param_1 + _DAT_11274c688) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be92350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetAttributes_112582270);
  return;
}



/* Entry: 106629040; end: 10662938b; -[SCUnifiedProfileFlatlandCollectionViewLayout _newLayoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_106629040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  long lStack_120;
  undefined *puStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cc398;
  func_0x00010c0d8e60();
  lVar11 = (long)_DAT_11274c68c;
  puVar2 = *(undefined **)(param_5 + lVar11);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = PTR_PTR_1126f2230;
    plVar4 = &lStack_120;
    lStack_120 = param_5;
    _objc_msgSendSuper2(param_1,param_2,param_3,param_4,plVar4,
                        PTR_s_layoutAttributesForElementsInRec_112600c60);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11274c694;
    dVar17 = *(double *)(param_5 + lVar10);
    dVar16 = 0.0;
    plVar5 = plVar4;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (plVar5 != (long *)0x0) {
      plVar14 = (long *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(plVar4);
        }
        lVar15 = *(long *)((long)plVar14 * 8);
        func_0x00010befa120(puVar3);
        lVar6 = param_5;
        if (*(char *)(param_5 + _DAT_11274c674) == '\x01') {
          func_0x00010be82de0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bdd21a0();
          _objc_retainAutoreleasedReturnValue();
        }
        if (lVar6 != 0) {
          func_0x00010befa120(puVar3);
        }
        if (dVar17 == 0.0) {
          lVar7 = lVar15;
          func_0x00010bfecf20();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c1554e0();
          lVar12 = *(long *)(param_5 + _DAT_11274c680);
          _objc_release(lVar7);
          if (lVar8 < lVar12) {
            func_0x00010bfb68e0(lVar15);
            _CGRectGetHeight();
            dVar16 = dVar16 + *(double *)(param_5 + lVar10);
            *(double *)(param_5 + lVar10) = dVar16;
          }
        }
        _objc_release(lVar6);
        plVar14 = (long *)((long)plVar14 + 1);
      } while (plVar5 != plVar14);
      plVar5 = plVar4;
      func_0x00010bf52a60();
    }
    if (dVar17 != *(double *)(param_5 + lVar10)) {
      lVar13 = param_5 + _DAT_11274c678;
      _objc_loadWeakRetained(lVar13);
      func_0x00010c27aea0();
      _objc_release(lVar13);
    }
    uVar9 = *(ulong *)(param_5 + lVar11);
    func_0x00010bf529e0();
    lVar13 = (long)_DAT_11274c690;
    if (*(ulong *)(param_5 + _DAT_11274c688) <= uVar9) {
      uVar9 = *(ulong *)(param_5 + lVar13);
      func_0x00010bf4b900();
      if ((uVar9 & 1) == 0) {
        lVar10 = *(long *)(param_5 + lVar13);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 != 0) {
          func_0x00010c12d360(*(undefined8 *)(param_5 + lVar13));
          func_0x00010c12d3e0(*(undefined8 *)(param_5 + lVar11));
        }
        _objc_release(lVar10);
      }
    }
    func_0x00010befa120(*(undefined8 *)(param_5 + lVar13));
    func_0x00010c1d0560(*(undefined8 *)(param_5 + lVar11));
    _objc_release(plVar4);
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar3;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + _DAT_11274c688) < 1) {
    func_0x00010be67480();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be63120();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 10662938c; end: 1066293c3; -[SCUnifiedProfileFlatlandCollectionViewLayout layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662938c(long param_1)

{
  if (*(long *)(param_1 + _DAT_11274c688) < 1) {
    func_0x00010be67480();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be63120();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066293c4; end: 1066295ff; -[SCUnifiedProfileFlatlandCollectionViewLayout _oldLayoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066293c4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_108 = PTR_PTR_1126f2230;
  plVar1 = &lStack_110;
  lStack_110 = param_1;
  _objc_msgSendSuper2(plVar1,PTR_s_layoutAttributesForElementsInRec_112600c60);
  _objc_retainAutoreleasedReturnValue();
  plVar10 = (long *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11274c694;
  dVar16 = *(double *)(param_1 + lVar13);
  dVar15 = 0.0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(plVar1);
  puVar8 = &uStack_150;
  plVar2 = plVar1;
  func_0x00010bf52a60();
  if (plVar2 != (long *)0x0) {
    lVar14 = *plStack_140;
    do {
      plVar11 = (long *)0x0;
      do {
        if (*plStack_140 != lVar14) {
          _objc_enumerationMutation(plVar1);
        }
        lVar12 = *(long *)(lStack_148 + (long)plVar11 * 8);
        lVar3 = param_1;
        if (*(char *)(param_1 + _DAT_11274c674) == '\x01') {
          func_0x00010be82de0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bdd21a0();
          _objc_retainAutoreleasedReturnValue();
        }
        if (lVar3 != 0) {
          func_0x00010befa120(plVar10);
        }
        if (dVar16 == 0.0) {
          lVar4 = lVar12;
          func_0x00010bfecf20();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c1554e0();
          lVar9 = *(long *)(param_1 + _DAT_11274c680);
          _objc_release(lVar4);
          if (lVar5 < lVar9) {
            func_0x00010bfb68e0(lVar12);
            _CGRectGetHeight();
            dVar15 = dVar15 + *(double *)(param_1 + lVar13);
            *(double *)(param_1 + lVar13) = dVar15;
          }
        }
        _objc_release(lVar3);
        plVar11 = (long *)((long)plVar11 + 1);
      } while (plVar2 != plVar11);
      puVar8 = &uStack_150;
      plVar2 = plVar1;
      func_0x00010bf52a60();
    } while (plVar2 != (long *)0x0);
  }
  _objc_release(plVar1);
  if (dVar16 != *(double *)(param_1 + lVar13)) {
    param_1 = param_1 + _DAT_11274c678;
    _objc_loadWeakRetained();
    func_0x00010c27aea0();
    _objc_release(param_1);
  }
  _objc_release(plVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar6 = PTR_PTR_1126cc3c8;
  func_0x00010c22daa0();
  puVar7 = puVar8;
  if ((int)puVar6 == 0) {
    puVar6 = PTR_PTR_1126cc3c8;
    func_0x00010c22db60();
    if ((int)puVar6 != 0) {
      func_0x00010bfecf20(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0(puVar8);
      func_0x00010be48ca0(plVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1066296a8;
    }
    plVar10 = (long *)0x0;
  }
  else {
    func_0x00010bfecf20(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(puVar8);
    func_0x00010be48c60(plVar1);
    _objc_retainAutoreleasedReturnValue();
LAB_1066296a8:
    _objc_release(puVar7);
    plVar10 = plVar1;
  }
  _objc_release(puVar8);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar10);
  return;
}



/* Entry: 106629600; end: 1066296d7; -[SCUnifiedProfileFlatlandCollectionViewLayout _backgroundAttributesWithAttribute:] */

void FUN_106629600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cc3c8;
  func_0x00010c22daa0(PTR_PTR_1126cc3c8,param_2,param_3);
  uVar2 = param_3;
  if ((int)puVar1 == 0) {
    puVar1 = PTR_PTR_1126cc3c8;
    func_0x00010c22db60(PTR_PTR_1126cc3c8,param_2,param_3);
    if ((int)puVar1 == 0) {
      param_1 = 0;
      goto LAB_1066296bc;
    }
    func_0x00010bfecf20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(param_3);
    func_0x00010be48ca0(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfecf20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(param_3);
    func_0x00010be48c60(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_1066296bc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066296d8; end: 106629817; -[SCUnifiedProfileFlatlandCollectionViewLayout _profileV2BackgroundAttributesWithAttribute:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066296d8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cc3c8;
  func_0x00010c22db20(PTR_PTR_1126cc3c8,param_2,param_3,*(undefined1 *)(param_1 + _DAT_11274c67c));
  lVar4 = param_3;
  if ((int)puVar1 == 0) {
    puVar1 = PTR_PTR_1126cc3c8;
    func_0x00010c2349c0(PTR_PTR_1126cc3c8,param_2,param_3,*(undefined8 *)(param_1 + _DAT_11274c680))
    ;
    if ((((ulong)puVar1 & 1) != 0) || (lVar3 = param_3, func_0x00010c1345a0(), lVar3 != 0)) {
      param_1 = 0;
      goto LAB_1066297c0;
    }
    func_0x00010bfecf20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(param_3);
    func_0x00010be48c80(param_1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfecf20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfecf20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bdd85c0(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be48c00(param_1,param_2,lVar4,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar4);
LAB_1066297c0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106629818; end: 106629c8f; -[SCUnifiedProfileFlatlandCollectionViewLayout layoutAttributesForDecorationViewOfKind:atIndexPath:] */

void FUN_106629818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  
  ppuVar7 = &puStack_c0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = param_8;
  func_0x00010c1554e0();
  puVar3 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0df2e0();
  if (lVar2 < (long)puVar4) {
    lVar2 = param_8;
    func_0x00010c142240();
    puVar4 = param_5;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0(param_8);
    puVar5 = puVar4;
    func_0x00010c0deec0();
    bVar1 = lVar2 < (long)puVar5;
    _objc_release(puVar4);
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar3);
  uVar11 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  uVar10 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
  uVar9 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cc3d0;
  _objc_opt_class(PTR_PTR_1126cc3d0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_7;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((int)uVar6 == 0) {
    puVar4 = PTR_PTR_1126cc3d8;
    func_0x00010bdc2520(PTR_PTR_1126cc3d8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_7;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    if ((int)uVar6 == 0) {
      puVar4 = PTR_PTR_1126cc3d8;
      func_0x00010bdc2500(PTR_PTR_1126cc3d8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_7;
      func_0x00010c0720c0();
      _objc_release(puVar4);
      if ((int)uVar6 == 0) {
        puVar4 = PTR_PTR_1126cc3d8;
        func_0x00010bdc24e0(PTR_PTR_1126cc3d8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_7;
        func_0x00010c0720c0();
        _objc_release(puVar4);
        if ((int)uVar6 == 0) {
          puStack_b8 = PTR_PTR_1126f2230;
          puStack_c0 = param_5;
          _objc_msgSendSuper2(&puStack_c0,PTR_s_layoutAttributesForDecorationVie_112600c50,param_7,
                              param_8);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106629b48;
        }
        if (!bVar1) {
          func_0x00010be48c00(param_5);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = (undefined **)param_5;
          goto LAB_106629b48;
        }
        puVar4 = param_5;
        func_0x00010bdd85c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be48c00(param_5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (bVar1) {
          puStack_a8 = PTR_PTR_1126f2230;
          ppuVar7 = &puStack_b0;
          puStack_b0 = param_5;
          _objc_msgSendSuper2(ppuVar7,PTR_s_layoutAttributesForItemAtIndexPa_112600c70,param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb68e0();
          _objc_release(ppuVar7);
          func_0x00010be48c80(param_1,param_2,param_3,param_4,param_5);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = (undefined **)param_5;
          goto LAB_106629b48;
        }
        puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be48c80(uVar11,uVar10,uVar9,uVar8,param_5);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar4);
      ppuVar7 = (undefined **)param_5;
    }
    else {
      if (bVar1) {
        puStack_98 = PTR_PTR_1126f2230;
        ppuVar7 = &puStack_a0;
        puStack_a0 = param_5;
        _objc_msgSendSuper2(ppuVar7,PTR_s_layoutAttributesForItemAtIndexPa_112600c70,param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        _objc_release(ppuVar7);
        uVar11 = param_1;
        uVar10 = param_2;
        uVar9 = param_3;
        uVar8 = param_4;
      }
      func_0x00010be48ca0(uVar11,uVar10,uVar9,uVar8,param_5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)param_5;
    }
  }
  else {
    if (bVar1) {
      puStack_88 = PTR_PTR_1126f2230;
      ppuVar7 = &puStack_90;
      puStack_90 = param_5;
      _objc_msgSendSuper2(ppuVar7,PTR_s_layoutAttributesForSupplementary_112600c88,
                          *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00,param_8
                         );
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _objc_release(ppuVar7);
      uVar11 = param_1;
      uVar10 = param_2;
      uVar9 = param_3;
      uVar8 = param_4;
    }
    func_0x00010be48c60(uVar11,uVar10,uVar9,uVar8,param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)param_5;
  }
LAB_106629b48:
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 106629c90; end: 106629cd3; -[SCUnifiedProfileFlatlandCollectionViewLayout _calculateEndIndexPathFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106629c90(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010c1554e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bfed030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_indexPathForItem_inSection__1125d8dd0,0,
             *(long *)(param_1 + _DAT_11274c680) + param_3);
  return;
}



/* Entry: 106629cd4; end: 106629e2b; -[SCUnifiedProfileFlatlandCollectionViewLayout _layoutAttributesForBackgroundViewAtIndexPath:frame:] */

void FUN_106629cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126cc3e0;
  puVar1 = PTR_PTR_1126cc3d0;
  _objc_retain(param_7);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c920(puVar2,param_6,puVar1,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c227920(puVar2,param_6,0xffffffffffffff9c);
  uVar4 = param_1;
  uVar6 = param_2;
  _CGRectIsNull(param_1,param_2,param_3,param_4);
  puVar1 = PTR_PTR_1126cc3c8;
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010bf407a0(param_5);
    uVar5 = uVar4;
    func_0x00010c0b6c40(param_5);
    func_0x00010bfb6be0(param_1,param_2,param_3,param_4,uVar4,uVar6,uVar5,puVar1);
    func_0x00010c19f0e0(puVar2);
  }
  puVar1 = PTR_PTR_1126cc3c8;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2020(puVar1,param_6,param_5);
  func_0x00010c19d860(puVar2,param_6,puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106629e2c; end: 106629f5f; -[SCUnifiedProfileFlatlandCollectionViewLayout _layoutAttributesForCellBackgroundViewAtIndexPath:frame:] */

void FUN_106629e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  puVar1 = PTR_PTR_1126cc3d8;
  _objc_retain(param_7);
  func_0x00010bdc2520(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c920(puVar2,param_6,puVar1,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c227920(puVar2,param_6,0xffffffffffffff9c);
  uVar4 = param_1;
  uVar7 = param_2;
  _CGRectIsNull(param_1,param_2,param_3,param_4);
  puVar1 = PTR_PTR_1126cc3c8;
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010c156120(param_5);
    uVar5 = uVar4;
    func_0x00010bf407a0(param_5);
    uVar6 = uVar5;
    func_0x00010c0b6c40(param_5);
    func_0x00010bfb6c60(param_1,param_2,param_3,param_4,uVar4,uVar5,uVar7,uVar6,puVar1);
    func_0x00010c19f0e0(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106629f60; end: 10662a12b; -[SCUnifiedProfileFlatlandCollectionViewLayout _layoutAttributesForCellBackgroundFlatCornerViewAtIndexPath:frame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106629f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  puVar3 = PTR_PTR_1126cc3d8;
  uVar7 = param_2;
  _objc_retain(param_7);
  func_0x00010bdc2500(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c920(puVar4,param_6,puVar3,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(puVar3);
  func_0x00010c227920(puVar4,param_6,0xffffffffffffff9c);
  uVar5 = 0x3ff0000000000000;
  func_0x00010c1677c0(0x3ff0000000000000,puVar4);
  puVar3 = PTR_PTR_1126cc3c8;
  func_0x00010bf407a0(param_5);
  uVar6 = param_1;
  func_0x00010bf08500(param_1,param_2,param_3,param_4,uVar5,uVar7,puVar3,param_6,puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    if (*(long *)(param_5 + _DAT_11274c684) == 0) {
      func_0x00010c156120(param_5);
    }
    else {
      func_0x00010bdc2aa0();
    }
    puVar3 = PTR_PTR_1126cc3c8;
    uVar1 = *(undefined1 *)(param_5 + _DAT_11274c668);
    uVar2 = *(undefined1 *)(param_5 + _DAT_11274c664);
    func_0x00010bf407a0(param_5);
    func_0x00010c0b6c40(param_5);
    func_0x00010bfb6c00(param_1,param_2,param_3,param_4,uVar6,0xc018000000000000,0x4061800000000000,
                        0x405c000000000000,puVar3,param_6,uVar1,uVar2,
                        *(undefined1 *)(param_5 + _DAT_11274c66c));
    func_0x00010c19f0e0(puVar4);
    func_0x00010bf08520(PTR_PTR_1126cc3c8,param_6,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10662a12c; end: 10662a35b; -[SCUnifiedProfileFlatlandCollectionViewLayout _layoutAttributesForBackgroundGradientViewLegacyFromIndexPath:toIndexPath:] */

void FUN_10662a12c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  puVar1 = PTR_PTR_1126cc3d8;
  func_0x00010bdc24e0(PTR_PTR_1126cc3d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c920(puVar2,param_3,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c227920(puVar2,param_3,0xffffffffffffff9b);
  lVar3 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_5 != 0) && (lVar3 != 0)) {
    lVar3 = param_5;
    func_0x00010c1554e0();
    lVar4 = param_2;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0df2e0();
    if (lVar3 < lVar5) {
      lVar3 = param_5;
      func_0x00010c142240();
      lVar5 = param_2;
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_5;
      func_0x00010c1554e0(param_5);
      lVar7 = lVar5;
      func_0x00010c0deec0(lVar5,param_3,lVar6);
      bVar8 = lVar3 < lVar7;
      _objc_release(lVar5);
    }
    else {
      bVar8 = false;
    }
    _objc_release(lVar4);
    lVar3 = param_5;
    func_0x00010c1554e0();
    lVar4 = param_4;
    func_0x00010c1554e0();
    if ((lVar4 < lVar3) && (bVar8)) {
      lVar3 = param_2;
      func_0x00010c08c980(param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMinY();
      lVar4 = param_2;
      uVar9 = param_1;
      func_0x00010c08c980(param_2,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        func_0x00010bfb68e0(lVar3);
        _CGRectGetMaxY();
      }
      else {
        func_0x00010bfb68e0(lVar4);
        _CGRectGetMinY();
      }
      puVar1 = PTR_PTR_1126cc3c8;
      uVar10 = uVar9;
      func_0x00010bf407a0(param_2);
      func_0x00010bfb6c20(param_1,uVar9,uVar10,puVar1);
      func_0x00010c19f0e0(puVar2);
      _objc_retain(puVar2);
      _objc_release(lVar4);
      _objc_release(lVar3);
      goto LAB_10662a324;
    }
  }
  _objc_retain(puVar2);
LAB_10662a324:
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10662a35c; end: 10662a397; -[SCUnifiedProfileFlatlandCollectionViewLayout _layoutAttributesForBackgroundGradientViewFromIndexPath:toIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662a35c(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11274c670) & 1) == 0) {
    func_0x00010be48c20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be48c40();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10662a398; end: 10662a76f; -[SCUnifiedProfileFlatlandCollectionViewLayout _layoutAttributesForBackgroundGradientViewValidatedFromIndexPath:toIndexPath:] */

void FUN_10662a398(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  if (param_4 != (undefined *)0x0) {
    puVar2 = param_4;
  }
  _objc_retain(puVar2);
  lVar5 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    puVar6 = puVar2;
    func_0x00010c1554e0();
    lVar7 = param_2;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0df2e0();
    _objc_release(lVar7);
    _objc_release(lVar5);
    puVar9 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
    if (lVar8 <= (long)puVar6) {
      puVar6 = PTR_PTR_1126cc3d8;
      func_0x00010bdc24e0(PTR_PTR_1126cc3d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c920(puVar9,param_3,puVar6,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      func_0x00010c227920(puVar9,param_3,0xffffffffffffff9b);
      func_0x00010c19f0e0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar9);
      goto LAB_10662a6c8;
    }
  }
  puVar9 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  puVar6 = PTR_PTR_1126cc3d8;
  func_0x00010bdc24e0(PTR_PTR_1126cc3d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c920(puVar9,param_3,puVar6,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c227920(puVar9,param_3,0xffffffffffffff9b);
  lVar5 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
LAB_10662a6b8:
    _objc_retain(puVar9);
  }
  else {
    puVar6 = puVar2;
    func_0x00010c1554e0();
    lVar5 = param_2;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0df2e0();
    _objc_release(lVar5);
    if (lVar7 <= (long)puVar6) {
      bVar1 = false;
      if (param_5 != 0) goto LAB_10662a5c0;
      goto LAB_10662a6b8;
    }
    lVar5 = param_2;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c1554e0(puVar2);
    lVar7 = lVar5;
    func_0x00010c0deec0(lVar5,param_3,puVar6);
    _objc_release(lVar5);
    puVar6 = puVar2;
    func_0x00010c0840e0();
    bVar1 = (long)puVar6 < lVar7;
    if (param_5 == 0) goto LAB_10662a6b8;
LAB_10662a5c0:
    lVar5 = param_5;
    func_0x00010c1554e0();
    lVar7 = param_2;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0df2e0();
    _objc_release(lVar7);
    if (lVar8 <= lVar5) goto LAB_10662a6b8;
    lVar5 = param_2;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_5;
    func_0x00010c1554e0(param_5);
    lVar8 = lVar5;
    func_0x00010c0deec0(lVar5,param_3,lVar7);
    _objc_release(lVar5);
    lVar5 = param_5;
    func_0x00010c0840e0();
    bVar3 = false;
    if (lVar5 < lVar8) {
      bVar3 = bVar1;
    }
    if (!bVar3) goto LAB_10662a6b8;
    lVar5 = param_5;
    func_0x00010c1554e0();
    puVar6 = puVar2;
    func_0x00010c1554e0();
    if (lVar5 <= (long)puVar6) goto LAB_10662a6b8;
    lVar5 = param_2;
    func_0x00010c08c980(param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      _objc_retain(puVar9);
    }
    else {
      func_0x00010bfb68e0(lVar5);
      _CGRectGetMinY();
      lVar7 = param_2;
      uVar10 = param_1;
      func_0x00010c08c980(param_2,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
        func_0x00010bfb68e0(lVar5);
        _CGRectGetMaxY();
      }
      else {
        func_0x00010bfb68e0(lVar7);
        _CGRectGetMinY();
      }
      puVar6 = PTR_PTR_1126cc3c8;
      uVar11 = uVar10;
      func_0x00010bf407a0(param_2);
      func_0x00010bfb6c20(param_1,uVar10,uVar11,puVar6);
      func_0x00010c19f0e0(puVar9);
      _objc_retain(puVar9);
      _objc_release(lVar7);
    }
    _objc_release(lVar5);
  }
  _objc_release(puVar9);
LAB_10662a6c8:
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10662a770; end: 10662a77f; -[SCUnifiedProfileFlatlandCollectionViewLayout layoutOptimisationsCacheLength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10662a770(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c688);
}



/* Entry: 10662a780; end: 10662a78f; -[SCUnifiedProfileFlatlandCollectionViewLayout sectionCountWithTransparentBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10662a780(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c680);
}



/* Entry: 10662a790; end: 10662a79f; -[SCUnifiedProfileFlatlandCollectionViewLayout sectionHeightWithTransparentBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10662a790(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c694);
}



/* Entry: 10662a7a0; end: 10662a7af; -[SCUnifiedProfileFlatlandCollectionViewLayout setSectionHeightWithTransparentBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662a7a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11274c694) = param_1;
  return;
}



/* Entry: 10662a7b0; end: 10662a81b; -[SCUnifiedProfileFlatlandCollectionViewLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662a7b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274c684,0);
  _objc_destroyWeak(param_1 + _DAT_11274c678);
  _objc_storeStrong(param_1 + _DAT_11274c660,0);
  _objc_storeStrong(param_1 + _DAT_11274c690,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c68c,0);
  return;
}



/* Entry: 10662a81c; end: 10662aac3; -[SCUnifiedProfileFlatlandCollectionBackgroundView applyLayoutAttributes:] */

void FUN_10662a81c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong unaff_x24;
  double dVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126f2238;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_applyLayoutAttributes__112527ed0,param_3);
  puVar2 = PTR_PTR_1126cc3c8;
  func_0x00010c27ffc0(PTR_PTR_1126cc3c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cc3e0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0xc000000000000000);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = 30.0;
  func_0x00010c1fe840(0x403e000000000000);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126cc3c8;
  uVar3 = param_3;
  func_0x00010bfecf20(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    unaff_x24 = param_3;
    func_0x00010bfecf20(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    func_0x00010c1554e0(unaff_x24);
  }
  else {
    func_0x00010bfb2000();
    _objc_release(param_3);
  }
  func_0x00010c22a060(puVar2);
  uVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800((float)dVar5);
  _objc_release(uVar4);
  if (uVar1 == 0) {
    _objc_release(unaff_x24);
  }
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_1);
  func_0x00010bf199c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar4);
  _objc_release(puVar2);
  uVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(uVar4);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10662aac4; end: 10662ab37; -[SCUnifiedProfileFlatlandCollectionBackgroundView traitCollectionDidChange:] */

void FUN_10662aac4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2238;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
  return;
}



/* Entry: 10662ab38; end: 10662abc7; -[SCUnifiedProfileFlatlandCollectionCellBackgroundView applyLayoutAttributes:] */

void FUN_10662ab38(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2240;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_applyLayoutAttributes__112527ed0);
  puVar1 = PTR_PTR_1126cc3c8;
  func_0x00010c27ffc0(PTR_PTR_1126cc3c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(param_1);
  return;
}



/* Entry: 10662abc8; end: 10662ac33; -[SCUnifiedProfileFlatlandCollectionCellBackgroundFlatCornerView applyLayoutAttributes:] */

void FUN_10662abc8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2248;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_applyLayoutAttributes__112527ed0);
  puVar1 = PTR_PTR_1126cc3c8;
  func_0x00010c27ffc0(PTR_PTR_1126cc3c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10662ac34; end: 10662ad9f; -[SCUnifiedProfileFlatlandCollectionBackgroundGradientView applyLayoutAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662ac34(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f2250;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_applyLayoutAttributes__112527ed0);
  lVar6 = (long)_DAT_11274c608;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    puVar1 = PTR_PTR_1126cc3c8;
    func_0x00010c0ef8c0(PTR_PTR_1126cc3c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar6));
    _objc_release(puVar1);
    func_0x00010c0ef940(PTR_PTR_1126cc3c8);
    func_0x00010c209760(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c0ef8e0(PTR_PTR_1126cc3c8);
    func_0x00010c196020(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c0ef920(PTR_PTR_1126cc3c8);
    func_0x00010c1d4bc0(*(undefined8 *)(param_1 + lVar6));
  }
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar6));
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25ec40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(lVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
  }
  return;
}



/* Entry: 10662ada0; end: 10662adff; -[SCUnifiedProfileFlatlandCollectionBackgroundGradientView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662ada0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274c608));
  return;
}



/* Entry: 10662ae00; end: 10662ae13; -[SCUnifiedProfileFlatlandCollectionBackgroundGradientView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662ae00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c608,0);
  return;
}



/* Entry: 10662ae14; end: 10662b34b; -[SCUnifiedProfileFlatlandViewController initWithRootViewCreator:sectionCreator:actionHandler:sections:currentPageTracker:pageViewName:profileManagementComposerViewProvider:adjustSectionOrder:circumstanceEngine:sectionCountWithTransparentBackground:updateScrollPositionYSubject:customStatusBarStyleContextController:hideTrayGradient:customAppThemeProvider:profileThemeId:plusFeatureLogger:hasPublicProfile:profileType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10662ae14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
             undefined4 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126f2258;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274c6a0);
    *(undefined **)((long)puVar1 + (long)_DAT_11274c6a0) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126cc3f0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274c6a4);
    *(undefined **)((long)puVar1 + (long)_DAT_11274c6a4) = puVar2;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_11274c6a8;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_11274c6ac;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_11274c6b0;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar4);
    uVar3 = *(ulong *)((long)puVar1 + lVar6);
    _objc_opt_respondsToSelector(uVar3,PTR_s_lifecycleAnnouncer_1125257b0);
    if ((uVar3 & 1) != 0) {
      func_0x00010c1bd8e0(*(undefined8 *)((long)puVar1 + lVar6));
    }
    lVar6 = (long)_DAT_11274c6b4;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_11274c6b8;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_11274c6bc;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274c6c0) = param_8;
    uVar4 = param_10;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274c6c4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274c6c4) = uVar4;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c6c8) = 1;
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274c6cc);
    *(undefined **)((long)puVar1 + (long)_DAT_11274c6cc) = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c6d0) = 1;
    func_0x00010c1c8b80(puVar1);
    lVar6 = (long)_DAT_11274c6d4;
    _objc_retain(param_11);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar4);
    *(long *)((long)puVar1 + (long)_DAT_11274c6d8) = param_12;
    lVar6 = (long)_DAT_11274c6dc;
    _objc_retain(param_13);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_13;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_11274c6e0;
    _objc_retain(param_14);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_14;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c6e4) = param_15;
    lVar7 = (long)_DAT_11274c6e8;
    _objc_retain(param_18);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_18;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_11274c6ec;
    _objc_retain(param_17);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_17;
    _objc_release(uVar4);
    lVar7 = (long)_DAT_11274c6f0;
    _objc_retain(param_19);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_19;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274c6f4);
    *(undefined **)((long)puVar1 + (long)_DAT_11274c6f4) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274c6f8);
    *(undefined **)((long)puVar1 + (long)_DAT_11274c6f8) = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274c6fc) = param_20;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274c700) = 0;
    if (param_12 != 0) {
      _objc_initWeak(auStack_80,puVar1);
      uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
      func_0x00010c272180(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_88,auStack_80);
      uVar4 = uVar5;
      func_0x00010c25ff60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274c704) = param_22;
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10662b34c; end: 10662b3ff;  */

void FUN_10662b34c(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10662b400;
    puStack_38 = &UNK_110841f80;
    _objc_retain(param_1);
    lStack_30 = param_1;
    _objc_retain(param_2);
    uStack_28 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
    _objc_release(lStack_30);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10662b400; end: 10662b40b;  */

void FUN_10662b400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateScrollWithContentOffsetYR_1125955c0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10662b40c; end: 10662b46b; -[SCUnifiedProfileFlatlandViewController _updateScrollWithContentOffsetYResult:] */

void FUN_10662b40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10662b46c;
  puStack_20 = &UNK_1108544b0;
  uStack_18 = param_1;
  func_0x00010c0c0800(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110930630);
  return;
}



/* Entry: 10662b46c; end: 10662b4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662b46c(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11274c708);
  _objc_retain(param_3);
  func_0x00010bf40120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80(param_3);
  _objc_release(param_3);
  func_0x00010c182300(0,(double)-param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10662b4ec; end: 10662b4ef;  */

void FUN_10662b4ec(void)

{
  return;
}



/* Entry: 10662b4f0; end: 10662b54f; -[SCUnifiedProfileFlatlandViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662b4f0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_11274c70c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1174a0();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126f2258;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10662b550; end: 10662b727; -[SCUnifiedProfileFlatlandViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662b550(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f2258;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_loadView_112604be0);
  puVar1 = PTR_PTR_1126cc3f8;
  _objc_opt_new();
  func_0x00010c222380(param_1);
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274c6ac);
  _objc_retain();
  func_0x00010bf588e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = auStack_60;
  _objc_copyWeak(puVar2,auStack_58);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar5);
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_11274c710) = puVar4;
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c07f8c0();
  *(char *)(param_1 + _DAT_11274c714) = (char)puVar4;
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  return;
}



/* Entry: 10662b728; end: 10662b78b;  */

void FUN_10662b728(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c182b00(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd0a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10662b78c; end: 10662b7bf; -[SCUnifiedProfileFlatlandViewController viewDidLoad] */

void FUN_10662b78c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f2258;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 10662b7c0; end: 10662baa3; -[SCUnifiedProfileFlatlandViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662b7c0(ulong param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f2258;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewWillAppear__1126853f0);
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if ((iVar1 != 0) && (lVar7 = (long)_DAT_11274c6ec, *(long *)(param_1 + lVar7) != 0)) {
    lVar2 = *(long *)(param_1 + (long)_DAT_11274c6e8);
    if (lVar2 != 0) {
      func_0x000100c1cfbc();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_11274c6d4);
        func_0x00010bf1f440();
        _objc_release(lVar2);
        if (iVar1 != 0) {
          uVar3 = *(undefined8 *)(param_1 + lVar7);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213a60();
          _objc_release(uVar3);
          *(undefined1 *)(param_1 + (long)_DAT_11274c718) = 1;
          uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11274c6f0);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a8ca0();
          _objc_release(uVar3);
        }
      }
    }
  }
  uVar4 = param_1;
  func_0x00010c06d1e0();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c06d1e0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) goto LAB_10662b924;
  }
  else {
LAB_10662b924:
    func_0x00010c2800c0(*(undefined8 *)(param_1 + (long)_DAT_11274c6a4));
    lVar7 = param_1 + (long)_DAT_11274c70c;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c1175c0();
    _objc_release(lVar7);
  }
  uVar4 = param_1;
  func_0x00010c06d1e0();
  if (((uVar4 & 1) == 0) && (uVar4 = param_1, func_0x00010c077fe0(), (uVar4 & 1) == 0)) {
    uVar4 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c06d1e0();
    _objc_release(uVar4);
    if ((int)uVar5 == 0) goto LAB_10662b9b8;
  }
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + (long)_DAT_11274c6a0));
LAB_10662b9b8:
  func_0x00010bee0a60(param_1);
  uVar4 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0787e0();
  *(char *)(param_1 + (long)_DAT_11274c71c) = (char)uVar5;
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb760();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar4);
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + (long)_DAT_11274c6a0));
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11274c6f4);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar6);
  return;
}



/* Entry: 10662baa4; end: 10662bb9b; -[SCUnifiedProfileFlatlandViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662baa4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2258;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidAppear__112684bd0);
  uVar1 = param_1;
  func_0x00010c06d1e0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c077fe0(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1e0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_10662bb3c;
  }
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + (long)_DAT_11274c6a0));
LAB_10662bb3c:
  if (*(long *)(param_1 + (long)_DAT_11274c720) != 0) {
    lVar3 = param_1 + (long)_DAT_11274c70c;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1174e0();
    _objc_release(lVar3);
  }
  *(undefined8 *)(param_1 + (long)_DAT_11274c700) = 1;
  func_0x00010be65260(param_1);
  return;
}



/* Entry: 10662bb9c; end: 10662bcdb; -[SCUnifiedProfileFlatlandViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662bb9c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2258;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillDisappear__112685438);
  uVar1 = param_1;
  func_0x00010c077fc0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c06d1a0(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1a0();
    uVar6 = (uint)uVar2;
    _objc_release(uVar1);
  }
  else {
    uVar6 = 1;
  }
  lVar3 = *(long *)(param_1 + (long)_DAT_11274c6ec);
  if (lVar3 != 0) {
    lVar7 = (long)_DAT_11274c718;
    if ((*(byte *)(param_1 + lVar7) & uVar6 & 1) != 0) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1398a0();
      _objc_release(lVar3);
      *(undefined1 *)(param_1 + lVar7) = 0;
    }
  }
  if (*(long *)(param_1 + (long)_DAT_11274c720) != 0) {
    lVar3 = param_1 + (long)_DAT_11274c70c;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1175e0();
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + (long)_DAT_11274c6f4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 10662bcdc; end: 10662bd43; -[SCUnifiedProfileFlatlandViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662bcdc(long param_1,undefined8 param_2,long param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2258;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToParentViewController__1125bb948);
  if (param_3 == 0) {
    param_1 = param_1 + _DAT_11274c70c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1174a0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10662bd44; end: 10662bf63; -[SCUnifiedProfileFlatlandViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662bd44(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f2258;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewDidDisappear__112684c48);
  lVar5 = (long)_DAT_11274c6a0;
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + lVar5));
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c077fc0(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1a0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) goto LAB_10662bde8;
  }
  else {
LAB_10662bde8:
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc80();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      func_0x00010c106ee0(param_1);
    }
    func_0x00010c14dc40(puVar3);
    _objc_release(puVar3);
    uVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb760();
    _objc_release(uVar1);
    func_0x00010bf7dbc0(*(undefined8 *)(param_1 + lVar5));
  }
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06d1a0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_10662bf34;
  }
  func_0x00010c27ffe0(*(undefined8 *)(param_1 + (long)_DAT_11274c6a4));
  lVar5 = param_1 + (long)_DAT_11274c70c;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c117500();
  _objc_release(lVar5);
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11274c6e0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
  _objc_release(uVar4);
LAB_10662bf34:
  *(undefined8 *)(param_1 + (long)_DAT_11274c700) = 0;
  func_0x00010be65260(param_1);
  return;
}



/* Entry: 10662bf64; end: 10662c00b; -[SCUnifiedProfileFlatlandViewController rootViewWillHideProfileViewWithAnimationDuration:keepTouchEnabled:completion:] */

void FUN_10662bf64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_5);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10662c00c;
  puStack_68 = &UNK_1108af7e0;
  uStack_60 = param_2;
  uStack_58 = param_5;
  uStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_5);
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(uStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 10662c00c; end: 10662c10f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662c00c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274c724) = 1;
  lVar2 = (long)_DAT_11274c708;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
    _objc_release(uVar1);
  }
  else {
    func_0x00010c21e900(uVar1,param_2,0);
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10662c110;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar1;
  func_0x00010bf03440(*(undefined8 *)(param_1 + 0x30),0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0
                      ,&puStack_58,0);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  _objc_release(uVar1);
  return;
}



/* Entry: 10662c110; end: 10662c143;  */

void FUN_10662c110(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf4c7c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,-param_1,uVar1,PTR_s_setContentOffset_animated__11263e2e0,0);
  return;
}



/* Entry: 10662c144; end: 10662c19b; -[SCUnifiedProfileFlatlandViewController rootViewDidShowProfileView] */

void FUN_10662c144(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10662c19c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}


