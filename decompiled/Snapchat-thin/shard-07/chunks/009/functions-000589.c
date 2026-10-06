/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105af3b78; end: 105af3bab; -[SCDiscoverFeedViewController _invalidateContentLongLoadingTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af3b78(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f914;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105af3bac; end: 105af3cc3; -[SCDiscoverFeedViewController _startContentLongLoadingTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af3bac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar3 = (long)_DAT_11272f914;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR_PTR_1126ae888;
  _objc_alloc();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0522e0(0x404e000000000000);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105af3cc4; end: 105af3cef;  */

void FUN_105af3cc4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af3cf0; end: 105af3d9b; -[SCDiscoverFeedViewController _logInfiniteLoadingEventIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af3cf0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar1 = param_1;
  func_0x00010bdf7080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 == 1) {
    lVar3 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c071ae0();
    iVar5 = (int)lVar4;
    _objc_release(lVar3);
  }
  else {
    iVar5 = 0;
  }
  if ((lVar2 == 0) || (iVar5 != 0)) {
    func_0x00010c0a5220(*(undefined8 *)(param_1 + _DAT_11272f758));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105af3d9c; end: 105af3fcb; -[SCDiscoverFeedViewController didStartToDisplayStoryWithIndexPath:feedType:groupDataModel:actionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af3d9c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  double dStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  *(undefined1 *)(param_2 + _DAT_11272f8f8) = 1;
  func_0x00010c1cbec0(param_2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  _objc_initWeak(auStack_68,param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_2 + _DAT_11272f834);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105af3fcc;
  puStack_88 = &UNK_110842a68;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_6);
  uStack_80 = param_6;
  dStack_70 = param_1 * 1000.0;
  func_0x00010007380c(uVar3,&puStack_a0);
  _objc_initWeak(auStack_a8,param_2);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x105af4004;
  puStack_c0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(param_4);
  uStack_b8 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_d8);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c070b80();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010c255ac0(*(undefined8 *)(param_2 + _DAT_11272f8c4));
  }
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 105af3fcc; end: 105af4037;  */

void FUN_105af3fcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfec6a0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105af4038; end: 105af44b3; -[SCDiscoverFeedViewController didStartToDismissStoryAtIndexPath:actionHandler:shouldSkipDismissBaseViewUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af4038(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  ulong uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_6 & 1) != 0) goto LAB_105af4484;
  uVar3 = param_4;
  func_0x00010c1554e0();
  lVar14 = (long)_DAT_11272f8ec;
  uVar1 = *(ulong *)(param_2 + lVar14);
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar3 = *(ulong *)(param_2 + lVar14);
    func_0x00010bf5fee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0(param_4);
    uStack_78 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    uStack_78 = 0;
  }
  lVar12 = (long)_DAT_11272f734;
  uVar4 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b1270;
  func_0x00010bfe4160(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067e20(uVar4);
  _objc_release(puVar11);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b1270;
  func_0x00010bfbc520(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c067e20(uVar6);
  _objc_release(puVar11);
  _objc_release(uVar6);
  lVar13 = (long)_DAT_11272f8b0;
  uVar6 = *(undefined8 *)(param_2 + lVar13);
  func_0x00010bf4c080(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar14);
  func_0x00010bf5fee0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c1f630(param_4,uVar6,uVar7,uVar4,uVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  lVar12 = *(long *)(param_2 + lVar14);
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010bf529e0();
  puVar11 = PTR_PTR_1126b4890;
  if (lVar14 == 0) {
    _objc_release(lVar12);
LAB_105af4360:
    puVar11 = *(undefined **)(param_2 + lVar13);
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uStack_78);
    _objc_opt_class(puVar11);
    uVar3 = uStack_78;
    _objc_opt_isKindOfClass(uStack_78,puVar11);
    _objc_release(uStack_78);
    _objc_release(lVar12);
    puVar11 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if (((uVar3 & 1) == 0) || (uStack_78 == 0)) goto LAB_105af4360;
    func_0x00010c1554e0(param_4);
    func_0x00010bfed020(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = *(undefined **)(param_2 + lVar13);
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126c20f8;
    _objc_opt_class(PTR_PTR_1126c20f8);
    puVar10 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar8);
    puVar8 = puVar9;
    if (((ulong)puVar10 & 1) == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(puVar9);
    puVar10 = puVar8;
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar9 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010c0840e0(param_4);
    func_0x00010bfed020(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar10);
  }
  _objc_release(puVar11);
  _objc_retain(puVar8);
  _objc_retain(param_5);
  lVar14 = param_5;
  func_0x00010010fab4(param_5,PTR_DAT_1126a5010);
  puVar11 = PTR_DAT_1126a5018;
  if ((param_5 != 0) && ((int)lVar14 != 0)) {
    _objc_retain(param_5);
    puVar9 = puVar8;
    func_0x00010010fab4(puVar8,puVar11);
    puVar11 = puVar8;
    if ((puVar8 == (undefined *)0x0) || ((int)puVar9 == 0)) {
      func_0x00010bf4dce0(puVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0ea000(puVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c285260(param_5);
    _objc_release(param_5);
    _objc_release(puVar11);
  }
  _objc_release(param_5);
  _objc_release(puVar8);
  dVar15 = *(double *)(param_2 + _DAT_11272f900);
  lVar14 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(lVar14);
  if (param_1 < dVar15) {
    func_0x00010bf9f6e0(*(undefined8 *)(param_2 + lVar13));
  }
  _objc_release(puVar8);
  _objc_release(uStack_78);
LAB_105af4484:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105af44b4; end: 105af458f; -[SCDiscoverFeedViewController didDismissStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af44b4(long param_1)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(undefined1 *)(param_1 + _DAT_11272f8f8) = 0;
  func_0x00010bec0ea0();
  lVar1 = param_1;
  func_0x00010c2584e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258500();
  _objc_release(lVar1);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105af4590;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105af4590; end: 105af45db;  */

void FUN_105af4590(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be95ba0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be54be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af45dc; end: 105af45ff; -[SCDiscoverFeedViewController didTearDownStory] */

void FUN_105af45dc(undefined8 param_1)

{
  func_0x00010beddaa0();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  return;
}



/* Entry: 105af4600; end: 105af4673; -[SCDiscoverFeedViewController _handleIsVisibleIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af4600(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((*(byte *)(param_1 + _DAT_11272f8ac) & 1) == 0) &&
     (*(undefined1 *)(param_1 + _DAT_11272f8ac) = 1, (*(byte *)(param_1 + _DAT_11272f90c) & 1) == 0)
     ) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272f8ec);
    uVar1 = 0;
    func_0x0001079b7dd0(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128620(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105af4674; end: 105af48d7; -[SCDiscoverFeedViewController _announceSectionOrder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af4674(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **unaff_x22;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
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
  lVar1 = param_1;
  if (*(char *)(param_1 + _DAT_11272f8ac) == '\x01') {
    lVar1 = *(long *)(param_1 + _DAT_11272f8ec);
    func_0x00010bf5fee0();
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(param_1 + _DAT_11272f918) == '\x01') {
      *(undefined1 *)(param_1 + _DAT_11272f918) = 0;
      func_0x00010be54be0(param_1);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(lVar1);
    lVar10 = lVar1;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar14 = *plStack_120;
      do {
        lVar15 = 0;
        do {
          if (*plStack_120 != lVar14) {
            _objc_enumerationMutation(lVar1);
          }
          lVar3 = *(long *)(lStack_128 + lVar15 * 8);
          func_0x0001079af428();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar3;
          func_0x0001079d6398();
          _objc_retainAutoreleasedReturnValue();
          if (lVar16 != 0) {
            func_0x00010befa120(puVar2);
          }
          _objc_release(lVar16);
          _objc_release(lVar3);
          lVar15 = lVar15 + 1;
        } while (lVar10 != lVar15);
        lVar10 = lVar1;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    unaff_x22 = (undefined **)0x0;
    _objc_release(lVar1);
    puVar4 = puVar2;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x0) {
      _objc_initWeak(auStack_138,param_1);
      uVar11 = *(undefined8 *)(param_1 + _DAT_11272f78c);
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_105af48d8;
      puStack_150 = &UNK_110841fb0;
      unaff_x22 = &puStack_168;
      _objc_copyWeak(auStack_140,auStack_138);
      _objc_retain(puVar2);
      puStack_148 = puVar2;
      func_0x00010c0f7fc0(uVar11);
      _objc_release(puStack_148);
      _objc_destroyWeak(auStack_140);
      _objc_destroyWeak(auStack_138);
    }
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x22 + 5);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = lVar1 + 0x28;
  _objc_loadWeakRetained();
  ppuVar12 = &PTR____CFConstantStringClassReference_110f41418;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc00(lVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar16 = (long)_DAT_11272f8ec;
  lVar15 = *(long *)(lVar1 + lVar16);
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar15;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar10;
  func_0x00010bf529e0();
  _objc_release(lVar10);
  _objc_release(lVar15);
  if (lVar14 != 0) {
    uVar13 = 0;
    while( true ) {
      lVar15 = *(long *)(lVar1 + lVar16);
      func_0x00010bf40a20();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar15;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar10;
      func_0x00010bf529e0();
      _objc_release(lVar10);
      _objc_release(lVar15);
      if (lVar14 - 1U <= uVar13) break;
      uVar5 = *(undefined8 *)(lVar1 + lVar16);
      func_0x00010bf40a20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(uVar5);
      uVar11 = *(undefined8 *)(lVar1 + lVar16);
      func_0x00010bf5fee0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar13;
      func_0x0001079af528(uVar13,uVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      uVar8 = uVar7;
      func_0x0001079d6288(uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar12;
      func_0x00010bf4b900();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)ppuVar9 != 0) {
        func_0x00010c0deb60(uVar6);
        func_0x00010c0df840(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar4);
      }
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      uVar13 = uVar13 + 1;
    }
  }
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105af48d8; end: 105af499f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af48d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  ulong uVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  ppuVar12 = &PTR____CFConstantStringClassReference_110f41418;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc00(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar14 = (long)_DAT_11272f8ec;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010bf529e0();
  _objc_release(lVar11);
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar13 = 0;
    while( true ) {
      lVar2 = *(long *)(param_1 + lVar14);
      func_0x00010bf40a20();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar2;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar11;
      func_0x00010bf529e0();
      _objc_release(lVar11);
      _objc_release(lVar2);
      if (lVar3 - 1U <= uVar13) break;
      uVar4 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010bf40a20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar6 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010bf5fee0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar13;
      func_0x0001079af528(uVar13,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar8 = uVar7;
      func_0x0001079d6288(uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar12;
      func_0x00010bf4b900();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)ppuVar9 != 0) {
        func_0x00010c0deb60(uVar5);
        func_0x00010c0df840(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar10);
      }
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar5);
      uVar13 = uVar13 + 1;
    }
  }
  puVar10 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105af49a0; end: 105af4ba7; -[SCDiscoverFeedViewController _expectedItemsInSections:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af49a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar12 = (long)_DAT_11272f8ec;
  lVar2 = *(long *)(param_1 + lVar12);
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    uVar11 = 0;
    while( true ) {
      lVar2 = *(long *)(param_1 + lVar12);
      func_0x00010bf40a20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar4 - 1U <= uVar11) break;
      uVar5 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010bf40a20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar5);
      uVar7 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010bf5fee0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar11;
      func_0x0001079af528(uVar11,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar9 = uVar8;
      func_0x0001079d6288(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010bf4b900();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)uVar7 != 0) {
        func_0x00010c0deb60(uVar6);
        func_0x00010c0df840(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar10);
      }
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar6);
      uVar11 = uVar11 + 1;
    }
  }
  puVar10 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105af4ba8; end: 105af4ec7; -[SCDiscoverFeedViewController _viewReadyForQuerySource:contentReadyType:pageSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af4ba8(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x000106fd74d0();
  lVar7 = (long)_DAT_11272f780;
  lVar4 = *(long *)(param_2 + lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (lVar4 != 0) {
    if ((lVar1 != 1) || (dVar8 = 1.0, (*(byte *)(param_2 + _DAT_11272f90c) & 1) == 0)) {
      _CACurrentMediaTime();
      uVar5 = *(undefined8 *)(param_2 + lVar7);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      dVar8 = param_1;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar8 = (param_1 - dVar8) * 1000.0;
      _objc_release(uVar5);
      _objc_release(puVar2);
    }
    lVar6 = (long)_DAT_11272f8ec;
    lVar4 = *(long *)(param_2 + lVar6);
    func_0x00010bf5fcc0();
    if (lVar4 != 2) {
      func_0x00010bf5fcc0(*(undefined8 *)(param_2 + lVar6));
    }
    uVar5 = *(undefined8 *)(param_2 + _DAT_11272f7bc);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf81b60(param_2);
    uVar3 = *(undefined8 *)(param_2 + _DAT_11272f734);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2561c0();
    func_0x00010c0a52a0(dVar8,0,uVar5);
    _objc_release(uVar3);
    _objc_release(uVar5);
    if (lVar1 == 0) {
      uVar5 = *(undefined8 *)(param_2 + lVar7);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar5);
      _objc_release(puVar2);
    }
    else if ((param_5 == 0) && (lVar1 == 1)) {
      _objc_initWeak(auStack_78,param_2);
      uVar5 = *(undefined8 *)(param_2 + _DAT_11272f78c);
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010c0f7fc0(uVar5);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    else if ((param_5 == 1) && ((lVar1 == 1 && ((*(byte *)(param_2 + _DAT_11272f8b4) & 1) == 0)))) {
      *(undefined1 *)(param_2 + _DAT_11272f8b4) = 1;
      func_0x00010c0f1560(*(undefined8 *)(param_2 + _DAT_11272f7fc));
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 105af4ec8; end: 105af4f03;  */

void FUN_105af4ec8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af4f04; end: 105af5063; -[SCDiscoverFeedViewController _logViewReadyIfNeeded:validLoadedSectionTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af4f04(double param_1,double param_2,long param_3,undefined8 param_4,undefined1 *param_5
                  ,long param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(char *)(param_3 + _DAT_11272f8ac) == '\x01') {
    param_1 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar7 = param_6;
    func_0x00010bf52a60();
    puVar5 = puVar6;
    if (lVar7 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_6);
          }
          func_0x00010c067fc0();
          lVar1 = param_3;
          func_0x00010bf5f840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bee9c60(param_3);
          _objc_release(lVar1);
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
        lVar7 = param_6;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    lVar7 = (long)_DAT_11272f904;
    puVar2 = param_5 + lVar7;
    _objc_loadWeakRetained();
    puVar3 = puVar2;
    _objc_opt_respondsToSelector();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      puVar2 = param_5 + lVar7;
      _objc_loadWeakRetained(puVar2);
      func_0x00010c152b20();
      _objc_release(puVar2);
    }
    func_0x00010c288160(*(undefined8 *)(param_5 + _DAT_11272f778));
    func_0x00010bf4c7c0(puVar5);
    dVar11 = param_1;
    func_0x00010bf4cdc0(puVar5);
    func_0x00010bf4c7c0(puVar5);
    param_1 = param_1 - (param_2 + dVar11);
    dVar10 = -12.0;
    dVar11 = param_1;
    if (param_1 <= -12.0) {
      dVar11 = -12.0;
    }
    lVar7 = (long)_DAT_11272f8b0;
    func_0x00010bf31a00(*(undefined8 *)(param_5 + lVar7));
    if (param_1 != dVar11) {
      func_0x00010c1795c0(*(undefined8 *)(param_5 + lVar7));
      func_0x00010c1cbe20(*(undefined8 *)(param_5 + lVar7));
      param_1 = dVar11;
    }
    func_0x00010bf4cdc0(puVar5);
    dVar11 = dVar10;
    func_0x00010bf4c7c0(puVar5);
    dVar10 = dVar10 + param_1;
    puVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _objc_release(puVar2);
    dVar13 = *(double *)(param_5 + _DAT_11272f900);
    func_0x00010bf4cdc0(puVar5);
    dVar13 = dVar13 - dVar11;
    if ((dVar10 <= param_1) || (dVar11 = 20.0, dVar13 <= 20.0)) {
      if ((dVar10 <= param_1) || (dVar13 < 0.0)) {
        func_0x00010bf9f840(*(undefined8 *)(param_5 + lVar7));
      }
    }
    else {
      func_0x00010bf9f6e0(*(undefined8 *)(param_5 + lVar7));
    }
    func_0x00010bf4cdc0(puVar5);
    func_0x00010bf4c7c0(puVar5);
    uVar12 = 0x3ff0000000000000;
    if (dVar11 <= -dVar13) {
      uVar12 = 0;
    }
    uVar4 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c152200(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar12);
    _objc_release(uVar4);
    func_0x00010c12bf60(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 105af5064; end: 105af524f; -[SCDiscoverFeedViewController _handleScrollViewDidScrollWithScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af5064(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  
  _objc_retain(param_5);
  lVar5 = (long)_DAT_11272f904;
  uVar1 = param_3 + lVar5;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar5 = param_3 + lVar5;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c152b20();
    _objc_release(lVar5);
  }
  func_0x00010c288160(*(undefined8 *)(param_3 + _DAT_11272f778));
  func_0x00010bf4c7c0(param_5);
  dVar7 = param_1;
  func_0x00010bf4cdc0(param_5);
  func_0x00010bf4c7c0(param_5);
  param_1 = param_1 - (param_2 + dVar7);
  dVar6 = -12.0;
  dVar7 = param_1;
  if (param_1 <= -12.0) {
    dVar7 = -12.0;
  }
  lVar5 = (long)_DAT_11272f8b0;
  func_0x00010bf31a00(*(undefined8 *)(param_3 + lVar5));
  if (param_1 != dVar7) {
    func_0x00010c1795c0(*(undefined8 *)(param_3 + lVar5));
    func_0x00010c1cbe20(*(undefined8 *)(param_3 + lVar5));
    param_1 = dVar7;
  }
  func_0x00010bf4cdc0(param_5);
  dVar7 = dVar6;
  func_0x00010bf4c7c0(param_5);
  dVar6 = dVar6 + param_1;
  lVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(lVar3);
  dVar9 = *(double *)(param_3 + _DAT_11272f900);
  func_0x00010bf4cdc0(param_5);
  dVar9 = dVar9 - dVar7;
  if ((dVar6 <= param_1) || (dVar7 = 20.0, dVar9 <= 20.0)) {
    if ((dVar6 <= param_1) || (dVar9 < 0.0)) {
      func_0x00010bf9f840(*(undefined8 *)(param_3 + lVar5));
    }
  }
  else {
    func_0x00010bf9f6e0(*(undefined8 *)(param_3 + lVar5));
  }
  func_0x00010bf4cdc0(param_5);
  func_0x00010bf4c7c0(param_5);
  uVar8 = 0x3ff0000000000000;
  if (dVar7 <= -dVar9) {
    uVar8 = 0;
  }
  uVar4 = *(undefined8 *)(param_3 + lVar5);
  func_0x00010c152200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar8);
  _objc_release(uVar4);
  func_0x00010c12bf60(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105af5250; end: 105af5317; -[SCDiscoverFeedViewController _resetScrollStateWithAnimationIfNeededWithQuerySource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af5250(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e202f8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110de6838);
    if ((int)uVar1 == 0) goto LAB_105af5300;
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272f734);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2320;
    func_0x00010bf716a0(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f320(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0) goto LAB_105af5300;
  }
  func_0x00010be92600(param_1);
LAB_105af5300:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af5318; end: 105af5393; -[SCDiscoverFeedViewController scrollToTopWithAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af5318(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272f8b0;
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010bf4c080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010bf4c080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  func_0x00010c182300(0,-param_1,uVar1,param_3,param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105af5394; end: 105af539f; -[SCDiscoverFeedViewController _fetchStoriesForAllSectionsWithQuerySource:] */

void FUN_105af5394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be147b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchStoriesForFeedType_querySo_112562b88,0xdd,param_3);
  return;
}



/* Entry: 105af53a0; end: 105af54ab; -[SCDiscoverFeedViewController _fetchStoriesForFeedType:querySource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af53a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  func_0x00010c1beba0(*(undefined8 *)(param_1 + _DAT_11272f8f4));
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f710);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_3;
  func_0x00010c297260(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105af54ac; end: 105af5503;  */

void FUN_105af54ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af5504; end: 105af56b7; -[SCDiscoverFeedViewController _fetchStoriesForAllSectionsWithQuerySource:feedType:sectionExtensionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af5504(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = &UNK_10f3285bf;
  func_0x0001000ba800(&UNK_10f3285bf);
  func_0x00010c1f9280(*(undefined8 *)(param_1 + _DAT_11272f8e8),param_2,param_5);
  lVar8 = (long)_DAT_11272f720;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9280();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  puVar4 = PTR_PTR_1126c2130;
  _objc_alloc(PTR_PTR_1126c2130);
  lVar5 = param_1;
  func_0x00010bf5f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012700(puVar4,param_2,param_4,lVar5,0);
  func_0x00010c03c440(puVar3,param_2,param_3,0,0,0,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar5);
  uVar6 = *(ulong *)(param_1 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf2d060();
  _objc_release(uVar6);
  if ((uVar7 & 1) != 0) {
    func_0x00010c1e6360(*(undefined8 *)(param_1 + _DAT_11272f8ec),param_2,puVar3);
  }
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af56b8; end: 105af574f; -[SCDiscoverFeedViewController _fetchFreshStoriesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af56b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + _DAT_11272f784) & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_11272f8f4);
    func_0x00010c076c40();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + _DAT_11272f734);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c2304c0();
      _objc_release(uVar2);
      if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be14750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__fetchStoriesForAllSectionsWithQ_112562b70,
                   &PTR____CFConstantStringClassReference_110ee11f8);
        return;
      }
    }
  }
  return;
}



/* Entry: 105af5750; end: 105af5877; -[SCDiscoverFeedViewController _prefetchStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af5750(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x0001000ba800(&UNK_10f3285f7);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105af5878;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  if (lRam00000001136c1be0 != -1) {
    func_0x00010002a2fc(0x1136c1be0,&puStack_68);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2304c0();
  if ((int)uVar4 == 0) {
    _objc_release(uVar3);
  }
  else {
    lVar5 = (long)_DAT_11272f870;
    cVar1 = *(char *)(param_1 + lVar5);
    _objc_release(uVar3);
    if (cVar1 == '\x01') {
      func_0x00010be14740(param_1);
      *(undefined1 *)(param_1 + lVar5) = 0;
    }
  }
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105af5878; end: 105af58ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af5878(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2304c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be14750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchStoriesForAllSectionsWithQ_112562b70,
             &PTR____CFConstantStringClassReference_110decf58);
  return;
}



/* Entry: 105af58f0; end: 105af5a23; -[SCDiscoverFeedViewController _fetchHeadStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af58f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar4 = (long)_DAT_11272f780;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c0e00e0(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2860);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar2);
  }
  func_0x00010be14740(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f78c);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105af5a24; end: 105af5a87;  */

void FUN_105af5a24(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x000107cb35ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc00(param_1,param_2,&PTR____CFConstantStringClassReference_110f41498,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af5a88; end: 105af5b37; -[SCDiscoverFeedViewController _didFinishLoading] */

void FUN_105af5a88(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010be771c0();
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105af5b38;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105af5b38; end: 105af5b63;  */

void FUN_105af5b38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af5b64; end: 105af5d0f; -[SCDiscoverFeedViewController _onDidFinishLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af5b64(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010be54be0(param_1,param_2,6);
  lVar5 = (long)_DAT_11272f734;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010bf82480(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105af5d10;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  if (*(char *)(param_1 + (long)_DAT_11272f89c) == '\x01') {
    uVar3 = param_1;
    func_0x00010c0e6300(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11272f8b0);
    func_0x00010bf4c080(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40860(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c070b80();
    if ((int)uVar4 == 0) {
      _objc_release(uVar1);
    }
    else {
      uVar3 = param_1;
      func_0x00010c083740();
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        func_0x00010c283940(*(undefined8 *)(param_1 + (long)_DAT_11272f8c4));
      }
    }
  }
  return;
}



/* Entry: 105af5d10; end: 105af5d3b;  */

void FUN_105af5d10(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6fb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af5d3c; end: 105af5d8b; -[SCDiscoverFeedViewController _paginateIfContentUnderfillsViewport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af5d3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f778);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f8b0);
  func_0x00010bf4c080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288120(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105af5d8c; end: 105af5dff; -[SCDiscoverFeedViewController _stopPullToRefresh] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af5d8c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f8fc;
  if (*(char *)(param_1 + lVar2) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272f73c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284600();
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c1bebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f8f4),PTR_s_setLoadingContent__11264d510,0);
  return;
}



/* Entry: 105af5e00; end: 105af5f77; -[SCDiscoverFeedViewController _clearHovaStoryBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af5e00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c2238;
  func_0x00010bf153a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2238;
  func_0x00010bfb49a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(char *)(param_1 + _DAT_11272f83c) == '\x01') {
    puVar4 = *(undefined **)(param_1 + _DAT_11272f7dc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar4);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar5 = (long)_DAT_11272f91c;
  if (*(long *)(puVar4 + lVar5) == 0) {
    puVar2 = puVar4;
    func_0x00010bf398e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067f00();
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar4 + lVar5);
    *(undefined **)(puVar4 + lVar5) = puVar1;
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
  _objc_initWeak(auStack_a8,puVar4);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105af6100;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_a8);
  uVar6 = 0;
  func_0x0001008553e8(0,&puStack_d0);
  lVar8 = (long)_DAT_11272f920;
  uVar7 = *(undefined8 *)(puVar4 + lVar8);
  *(undefined8 *)(puVar4 + lVar8) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(puVar4 + lVar5);
  func_0x00010c067ec0(uVar6);
  uVar7 = 0;
  _dispatch_time(0,(long)(int)uVar6 * 1000000000);
  uVar6 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010058c530(uVar7,uVar6,*(undefined8 *)(puVar4 + lVar8));
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  return;
}



/* Entry: 105af5f78; end: 105af60ff; -[SCDiscoverFeedViewController _setNoReOrderThresholdTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af5f78(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = (long)_DAT_11272f91c;
  if (*(long *)(param_1 + lVar4) == 0) {
    lVar5 = param_1;
    func_0x00010bf398e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067f00();
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar5);
  }
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105af6100;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = 0;
  func_0x0001008553e8(0,&puStack_70);
  lVar5 = (long)_DAT_11272f920;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c067ec0(uVar2);
  uVar3 = 0;
  _dispatch_time(0,(long)(int)uVar2 * 1000000000);
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010058c530(uVar3,uVar2,*(undefined8 *)(param_1 + lVar5));
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105af6100; end: 105af612b;  */

void FUN_105af6100(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af612c; end: 105af62ef; -[SCDiscoverFeedViewController _performUpdatesForReOrder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af612c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105af62f0;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x000100162d98("APPSTORE",&puStack_80);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f73c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284600();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11272f8bc) = 1;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2304c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    func_0x00010be8e880(param_1);
    func_0x00010be8e8a0(param_1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272f768);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c09afa0(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_88);
  }
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105af62f0; end: 105af6393;  */

void FUN_105af62f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c152900();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be935a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af6394; end: 105af6467; -[SCDiscoverFeedViewController _reorderFriendStoriesLocally] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6394(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f7f8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c130a20(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105af6468; end: 105af649b;  */

void FUN_105af6468(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af649c; end: 105af65c3; -[SCDiscoverFeedViewController _onFriendStoriesLocalReorderFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af649c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  if ((param_3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272f70c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a960();
    _objc_release(uVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2320;
  func_0x00010bf716a0(PTR_PTR_1126c2320);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf1f320();
  _objc_release(puVar3);
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_retain();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105af65c4;
    puStack_48 = &UNK_110842e18;
    lStack_40 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105af65c4; end: 105af65cb;  */

void FUN_105af65c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetCarouselSectionsOffset_112582320);
  return;
}



/* Entry: 105af65cc; end: 105af668f; -[SCDiscoverFeedViewController _reorderDiscoverFeedLocally] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af65cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f768);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_1108d4c60);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f76c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c130ac0();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105af6690; end: 105af66bf;  */

void FUN_105af6690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 105af66c0; end: 105af66ef; -[SCDiscoverFeedViewController _resetOnScrollAnimator] */

void FUN_105af66c0(undefined8 param_1)

{
  func_0x00010c0e6300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af66f0; end: 105af6723; -[SCDiscoverFeedViewController _clearViewAllButtonStatesThresholdTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af66f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f924;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105af6724; end: 105af682b; -[SCDiscoverFeedViewController _setupViewAllButtonStatesThresholdTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6724(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae888;
  _objc_alloc();
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0522e0(0x4024000000000000);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f924);
  *(undefined **)(param_1 + _DAT_11272f924) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105af682c; end: 105af6857;  */

void FUN_105af682c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c139cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af6858; end: 105af688f; -[SCDiscoverFeedViewController resetViewAllButtonStates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6858(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11272f77c;
  func_0x00010c1a0160(*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c20f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setSubscriptionsSectionViewAllBu_1126617a8,0);
  return;
}



/* Entry: 105af6890; end: 105af6927; -[SCDiscoverFeedViewController didTapPageLevelDebugButton] */

void FUN_105af6890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  uVar2 = param_1;
  func_0x00010beee460(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf82420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar2,param_2,param_1,puVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105af6928; end: 105af69f3; -[SCDiscoverFeedViewController viewDidAppearWithDeepLinkInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6928(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bf2eb20(*(undefined8 *)(param_1 + _DAT_11272f714));
  lVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272f8b8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010befd100(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10be20(uVar2,param_2,lVar1,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af69f4; end: 105af6b47; -[SCDiscoverFeedViewController _handleDidStartToDisplayStoryWithIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af69f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_11272f734;
  uVar1 = *(ulong *)(param_1 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071800();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1270;
  func_0x00010bfe4160(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c067e20(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar4);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11272f8b0);
    func_0x00010bf4c080(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11272f8ec);
    func_0x00010bf5fee0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c1f630(param_3,uVar4,uVar7,1,uVar6);
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  func_0x00010c2584e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af6b48; end: 105af6c3b; -[SCDiscoverFeedViewController _startPageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6b48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1835e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(ulong *)(param_1 + _DAT_11272f6dc);
  func_0x00010b09cdc4();
  if ((uVar4 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + _DAT_11272f750);
    func_0x00010c24fc40(uVar4,param_2,0x4c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(uVar4 + (long)_DAT_11272f908) = 1;
  return;
}



/* Entry: 105af6c3c; end: 105af6c4f; -[SCDiscoverFeedViewController operaSessionWillBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6c3c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11272f908) = 1;
  return;
}



/* Entry: 105af6c50; end: 105af6c53; -[SCDiscoverFeedViewController operaSessionDidBeginWithOperaPresenter:playbackDataProvider:] */

void FUN_105af6c50(void)

{
  return;
}



/* Entry: 105af6c54; end: 105af6c63; -[SCDiscoverFeedViewController operaSessionDidEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6c54(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11272f908) = 0;
  return;
}



/* Entry: 105af6c64; end: 105af6d1f; -[SCDiscoverFeedViewController operaSessionWillReachToEndOfPlaylistWithFeedType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_11272f908) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272f734);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07a560();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11272f8f0);
      uVar2 = param_3;
      func_0x00010c067ec0(param_3);
      func_0x00010bf5f840(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24fca0(uVar1,param_2,(long)(int)uVar2,param_1);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af6d20; end: 105af6d2f; -[SCDiscoverFeedViewController contentScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4c090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f8b0),PTR_s_contentCollectionView_1125b09c8);
  return;
}



/* Entry: 105af6d30; end: 105af6d3b; -[SCDiscoverFeedViewController defaultProjectNameV2] */

void FUN_105af6d30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c258050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_stories_112673a38);
  return;
}



/* Entry: 105af6d3c; end: 105af6d43; -[SCDiscoverFeedViewController defaultSubProjectName] */

undefined8 FUN_105af6d3c(void)

{
  return 0;
}



/* Entry: 105af6d44; end: 105af6e1f; -[SCDiscoverFeedViewController jiraMetaInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6d44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf5f840();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f6d8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e1c9d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105af6e20; end: 105af6eb7; -[SCDiscoverFeedViewController _resumeAllVideoPlaybackIfNeccesary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6e20(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2360;
  func_0x00010c0734c0(PTR_PTR_1126c2360);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c283950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11272f8c4),
               PTR_s_updateAutoPlayForVisibleCells_11267e878);
    return;
  }
  return;
}



/* Entry: 105af6eb8; end: 105af6f2b; -[SCDiscoverFeedViewController _prefetchFirstSnapMediaForVisibleCheetahStoriesIfNeccesary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6eb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f71c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f8b0);
  func_0x00010bf4c080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1080c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105af6f2c; end: 105af6f2f; -[SCDiscoverFeedViewController _updateItemLoadedStatus] */

void FUN_105af6f2c(void)

{
  return;
}



/* Entry: 105af6f30; end: 105af70e3; -[SCDiscoverFeedViewController handleNotificationPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af6f30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11272f85c) = param_1;
  _objc_initWeak(auStack_58,param_2);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126be840;
  func_0x00010bf81b20(PTR_PTR_1126be840);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4bc80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae970;
  func_0x00010c292920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  func_0x00010c2a1620(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 105af70e4; end: 105af7117;  */

void FUN_105af70e4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af7118; end: 105af7247; -[SCDiscoverFeedViewController handleNavigationToStoryId:withRefresh:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af7118(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105af7248;
  puStack_60 = &UNK_11084b7a0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  uStack_58 = param_3;
  _objc_retainBlock();
  if (param_4 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272f6ec);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6cc0();
    _objc_release(uVar2);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105af7248; end: 105af733b;  */

void FUN_105af7248(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfb8be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  func_0x00010bfa9a40(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
  return;
}



/* Entry: 105af733c; end: 105af74cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af733c(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf52a60();
  puVar5 = param_2;
  if (puVar1 != (undefined1 *)0x0) {
    lVar6 = *plStack_120;
    do {
      puVar7 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        puVar5 = *(undefined1 **)(lStack_128 + (long)puVar7 * 8);
        puVar2 = puVar5;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = *(undefined8 **)(param_1 + 0x20);
        puVar3 = puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if (((ulong)puVar3 & 1) != 0) {
          _objc_retain(puVar5);
          _objc_release(param_2);
          if (puVar5 == (undefined1 *)0x0) goto LAB_105af748c;
          param_1 = param_1 + 0x28;
          _objc_loadWeakRetained();
          puVar4 = (undefined8 *)puVar5;
          func_0x00010be746c0();
          _objc_release(param_1);
          goto LAB_105af7484;
        }
        puVar7 = puVar7 + 1;
      } while (puVar1 != puVar7);
      puVar1 = param_2;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
      puVar5 = param_2;
    } while (puVar1 != (undefined1 *)0x0);
  }
LAB_105af7484:
  _objc_release(puVar5);
LAB_105af748c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar1 = (undefined1 *)puVar4;
  func_0x00010c11c420();
  if ((puVar1 == (undefined1 *)0x73) ||
     (puVar1 = (undefined1 *)puVar4, func_0x00010c11c420(), puVar1 == (undefined1 *)0x71)) {
    puVar1 = (undefined1 *)puVar4;
    func_0x00010bf38cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined1 *)0x0) goto LAB_105af758c;
    param_2[_DAT_11272f928] = 1;
    puVar1 = (undefined1 *)puVar4;
    func_0x00010bf38cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x000107afed24();
    _objc_release(puVar1);
    if ((int)puVar5 != 0) {
      func_0x000107b018f8(0x12,0x1a,*(undefined8 *)(param_2 + _DAT_11272f84c));
      func_0x00010be28760(param_2);
      goto LAB_105af7688;
    }
    puVar5 = (undefined1 *)puVar4;
    func_0x00010bf38cc0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf52680(puVar1);
    func_0x000107b018f8(0x12,puVar5,*(undefined8 *)(param_2 + _DAT_11272f84c));
    func_0x00010be287e0(param_2);
  }
  else {
LAB_105af758c:
    puVar1 = (undefined1 *)puVar4;
    func_0x00010c11c420();
    if (puVar1 != (undefined1 *)0x16) {
      puVar1 = (undefined1 *)puVar4;
      func_0x00010c11c420();
      if ((puVar1 == (undefined1 *)0x98) ||
         (puVar1 = (undefined1 *)puVar4, func_0x00010c11c420(), puVar1 == (undefined1 *)0x9a)) {
        puVar1 = (undefined1 *)puVar4;
        func_0x00010bf38cc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar1 != (undefined1 *)0x0) {
          param_2[_DAT_11272f928] = 0;
          func_0x00010be287e0(param_2);
          goto LAB_105af7688;
        }
      }
      puVar1 = (undefined1 *)puVar4;
      func_0x00010c11c420();
      if (((puVar1 == (undefined1 *)0x98) ||
          (puVar1 = (undefined1 *)puVar4, func_0x00010c11c420(), puVar1 == (undefined1 *)0x9a)) ||
         (puVar1 = (undefined1 *)puVar4, func_0x00010c11c420(), puVar1 == (undefined1 *)0x73)) {
        func_0x00010be56340(param_2);
      }
      goto LAB_105af7688;
    }
    param_2[_DAT_11272f928] = 0;
    puVar1 = (undefined1 *)puVar4;
    func_0x000107aff0b4(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be28760(param_2);
  }
  _objc_release(puVar1);
LAB_105af7688:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105af74d0; end: 105af76e3; -[SCDiscoverFeedViewController _handleNotificationPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af74d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if ((lVar1 == 0x73) || (lVar1 = param_3, func_0x00010c11c420(), lVar1 == 0x71)) {
    lVar1 = param_3;
    func_0x00010bf38cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_105af758c;
    *(undefined1 *)(param_1 + _DAT_11272f928) = 1;
    lVar1 = param_3;
    func_0x00010bf38cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107afed24();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x000107b018f8(0x12,0x1a,*(undefined8 *)(param_1 + _DAT_11272f84c));
      func_0x00010be28760(param_1);
      goto LAB_105af7688;
    }
    lVar2 = param_3;
    func_0x00010bf38cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf52680(lVar1);
    func_0x000107b018f8(0x12,lVar2,*(undefined8 *)(param_1 + _DAT_11272f84c));
    func_0x00010be287e0(param_1);
  }
  else {
LAB_105af758c:
    lVar1 = param_3;
    func_0x00010c11c420();
    if (lVar1 != 0x16) {
      lVar1 = param_3;
      func_0x00010c11c420();
      if ((lVar1 == 0x98) || (lVar1 = param_3, func_0x00010c11c420(), lVar1 == 0x9a)) {
        lVar1 = param_3;
        func_0x00010bf38cc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 != 0) {
          *(undefined1 *)(param_1 + _DAT_11272f928) = 0;
          func_0x00010be287e0(param_1);
          goto LAB_105af7688;
        }
      }
      lVar1 = param_3;
      func_0x00010c11c420();
      if (((lVar1 == 0x98) || (lVar1 = param_3, func_0x00010c11c420(), lVar1 == 0x9a)) ||
         (lVar1 = param_3, func_0x00010c11c420(), lVar1 == 0x73)) {
        func_0x00010be56340(param_1);
      }
      goto LAB_105af7688;
    }
    *(undefined1 *)(param_1 + _DAT_11272f928) = 0;
    lVar1 = param_3;
    func_0x000107aff0b4(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be28760(param_1);
  }
  _objc_release(lVar1);
LAB_105af7688:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af76e4; end: 105af78cf; -[SCDiscoverFeedViewController _handleDiscoverFeedFriendStoryNotificationPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af76e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar5 = &puStack_90;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15f540();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11272f6ec;
  uVar2 = *(ulong *)(param_1 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c088c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x000107b01540();
  if ((uVar2 & 1) == 0) {
    bVar7 = *(byte *)(param_1 + _DAT_11272f8ac) ^ 1;
  }
  else {
    bVar7 = 0;
  }
  if ((uVar3 == 0 || uVar3 <= uVar1) || ((bVar7 & 1) != 0)) {
    _objc_initWeak(auStack_58,param_1);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105af78d0;
    puStack_78 = &UNK_11085dbf8;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(puVar4);
    puStack_70 = puVar4;
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_retainBlock(&puStack_90);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6cc0();
    _objc_release(uVar6);
    _objc_release(ppuVar5);
    _objc_release(uStack_68);
    _objc_release(puStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010bddd4c0(param_1);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105af78d0; end: 105af797f;  */

void FUN_105af78d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105af7980;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105af7980; end: 105af7a23;  */

void FUN_105af7980(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar2);
  if (param_1 <= 5.0) {
    func_0x00010bddd4c0(lVar1,param_3,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    func_0x00010be6dfc0(lVar1,param_3,0x1a,0x13);
    func_0x00010be52f20(lVar1,param_3,*(undefined8 *)(param_2 + 0x28),4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105af7a24; end: 105af7a3b; -[SCDiscoverFeedViewController _optInNotificationGrapheneIncrementStoryCorpus:metricType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af7a24(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272f84c);
  _objc_retain(uVar4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 == 0x10) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2038;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110ead058;
  if (param_3 != 0x11) {
    ppuVar3 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e10178;
  if (param_3 != 0x1a) {
    ppuVar1 = ppuVar3;
  }
  ppuVar3 = ppuVar1;
  func_0x00010c0720c0();
  iVar2 = (int)ppuVar3;
  switch(param_4) {
  case 0:
    if (iVar2 == 0) {
      func_0x000107b0881c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08990(uVar4,1);
    }
    break;
  case 1:
    if (iVar2 == 0) {
      func_0x000107b08a08(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08b7c(uVar4,1);
    }
    break;
  case 2:
    if (iVar2 == 0) {
      func_0x000107b08bf4(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08d68(uVar4,1);
    }
    break;
  case 3:
    if (iVar2 == 0) {
      func_0x000107b07094(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07208(uVar4,1);
    }
    break;
  case 4:
    if (iVar2 == 0) {
      func_0x000107b081e0(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08354(uVar4,1);
    }
    break;
  case 5:
    if (iVar2 == 0) {
      func_0x000107b0806c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07ff4(uVar4,1);
    }
    break;
  case 6:
    if (iVar2 == 0) {
      func_0x000107b06ad0(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06c44(uVar4,1);
    }
    break;
  case 7:
    if (iVar2 == 0) {
      func_0x000107b06cbc(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06e30(uVar4,1);
    }
    break;
  case 8:
    if (iVar2 == 0) {
      func_0x000107b07658(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b077cc(uVar4,1);
    }
    break;
  case 9:
    if (iVar2 != 0) {
      func_0x000107b06494(uVar4,1);
      break;
    }
    goto code_r0x000107b01a10;
  case 10:
    if (iVar2 == 0) {
      func_0x000107b07844(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b079b8(uVar4,1);
    }
    break;
  case 0xb:
    if (iVar2 == 0) {
      func_0x000107b0650c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06680(uVar4,1);
    }
    break;
  case 0xc:
    if (iVar2 == 0) {
      func_0x000107b07c1c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07d90(uVar4,1);
    }
    break;
  case 0xd:
    if (iVar2 == 0) {
      func_0x000107b066f8(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b0686c(uVar4,1);
    }
    break;
  case 0xe:
    if (iVar2 != 0) {
      func_0x000107b062a8(uVar4,1);
      break;
    }
code_r0x000107b01a10:
    func_0x000107b06320(uVar4,ppuVar1,1);
    break;
  case 0xf:
    if (iVar2 == 0) {
      func_0x000107b068e4(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06a58(uVar4,1);
    }
    break;
  case 0x10:
    if (iVar2 == 0) {
      func_0x000107b07a30(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07ba4(uVar4,1);
    }
    break;
  case 0x11:
    if (iVar2 == 0) {
      func_0x000107b083cc(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08540(uVar4,1);
    }
    break;
  case 0x12:
    if (iVar2 == 0) {
      func_0x000107b07e08(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07f7c(uVar4,1);
    }
    break;
  case 0x13:
    if (iVar2 == 0) {
      func_0x000107b0746c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b075e0(uVar4,1);
    }
    break;
  case 0x14:
    if (iVar2 == 0) {
      func_0x000107b06ea8(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b0701c(uVar4,1);
    }
    break;
  case 0x15:
    if (iVar2 == 0) {
      func_0x000107b07280(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b073f4(uVar4,1);
    }
    break;
  case 0x16:
    if (iVar2 == 0) {
      func_0x000107b08630(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b085b8(uVar4,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105af7a3c; end: 105af7b3b; -[SCDiscoverFeedViewController _checkAvailableFriendStoryAndPlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af7a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f700);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa9a40(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105af7b3c; end: 105af7df3;  */

ulong FUN_105af7b3c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuVar7 = &PTR___NSConcreteGlobalBlock_1108d4c80;
  uVar1 = param_2;
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_1108d4c80);
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  do {
    if (uVar2 == 0) {
      uVar9 = 0;
LAB_105af7ca4:
      _objc_release(param_2);
      func_0x000107b01540();
      if (uVar9 == 0) {
        uVar9 = param_1 + 0x28;
        _objc_loadWeakRetained(uVar9);
        func_0x00010be15200();
      }
      else {
        uVar2 = uVar9;
        func_0x00010bfddf20();
        lVar6 = param_1 + 0x28;
        _objc_loadWeakRetained();
        if ((uVar2 & 1) == 0) {
          if (lVar6 != 0) {
            func_0x00010be6dfc0(lVar6);
            func_0x00010be15200(lVar6);
          }
        }
        else {
          func_0x00010be52f00(lVar6);
          _objc_release(lVar6);
          lVar6 = param_1 + 0x28;
          _objc_loadWeakRetained(lVar6);
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0dc140(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be746c0(lVar6);
          _objc_release(uVar4);
        }
        _objc_release(lVar6);
      }
LAB_105af7da0:
      _objc_release(uVar9);
      _objc_release(uVar1);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
        ___stack_chk_fail();
        func_0x00010c07fc80(ppuVar7);
        return (ulong)((uint)ppuVar7 ^ 1);
      }
      return param_2;
    }
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_2);
      }
      uVar9 = *(ulong *)(uVar10 * 8);
      uVar3 = uVar9;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c15de20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((int)uVar5 != 0) {
        uVar2 = uVar9;
        func_0x00010c07fc80();
        if ((uVar2 & 1) == 0) {
          _objc_retain(uVar9);
          goto LAB_105af7ca4;
        }
        param_1 = param_1 + 0x28;
        _objc_loadWeakRetained(param_1);
        func_0x00010be52f20();
        _objc_release(param_1);
        uVar9 = param_2;
        goto LAB_105af7da0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
    uVar2 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105af7df4; end: 105af7e0f;  */

uint FUN_105af7df4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c07fc80(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 105af7e10; end: 105af7f4b; -[SCDiscoverFeedViewController _fetchUncachedFriendStoryWithNotification:itemSource:triggeringSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af7e10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f700);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15de20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_3);
  uStack_68 = param_4;
  uStack_60 = param_5;
  func_0x00010bfab120(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105af7f4c; end: 105af80af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af7f4c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined **param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    func_0x00010be6dfc0();
    _objc_release(lVar4);
    uVar1 = *(ulong *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar6 = (undefined *)0x1;
  }
  else {
    uVar1 = param_2;
    func_0x00010bfddf20();
    if ((uVar1 & 1) != 0) {
      lVar4 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar4);
      func_0x00010be52f00();
      _objc_release(lVar4);
      lVar4 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar4);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_50 = param_2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      param_5 = *(undefined8 *)(param_1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dc140(uVar3);
      _objc_retainAutoreleasedReturnValue();
      param_7 = &PTR____CFConstantStringClassReference_110eb8b38;
      param_8 = *(undefined8 *)(param_1 + 0x40);
      uVar1 = param_2;
      puVar6 = puVar2;
      param_6 = uVar3;
      func_0x00010be746c0(lVar4);
      _objc_release(uVar3);
      _objc_release(puVar2);
      _objc_release(lVar4);
      goto LAB_105af8074;
    }
    uVar1 = *(ulong *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar6 = (undefined *)0x2;
  }
  func_0x00010be52f20(uVar3);
LAB_105af8074:
  uVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_105af80b0;
  lStack_70 = param_1;
  uStack_68 = param_2;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000108f50588(*(undefined8 *)(uVar5 + (long)_DAT_11272f85c),uVar1,puVar6,param_5,param_6,
                      param_7,*(undefined1 *)(uVar5 + (long)_DAT_11272f928),param_8);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x105af8178;
    puStack_88 = &UNK_110841f80;
    uStack_80 = uVar5;
    _objc_retain(uVar1);
    uStack_78 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_a0);
    _objc_release(uStack_78);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 105af80b0; end: 105af81d3; -[SCDiscoverFeedViewController _playFriendStory:friendStories:itemSource:triggerItemId:actionIdentifier:triggeringSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af80b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  func_0x000108f50588(*(undefined8 *)(param_1 + _DAT_11272f85c),param_3,param_4,param_5,param_6,
                      param_7,*(undefined1 *)(param_1 + _DAT_11272f928),param_8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x105af8178;
    puStack_38 = &UNK_110841f80;
    lStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105af81d4; end: 105af83ab; -[SCDiscoverFeedViewController _handleDiscoverFeedStoryNotificationPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af81d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000107b01540();
  lVar2 = 0x10;
  if ((int)lVar1 == 0) {
    lVar2 = 8;
  }
  uVar6 = *(undefined8 *)((long)&PTR_PTR_110a08b80 + lVar2);
  *(byte *)(param_1 + _DAT_11272f784) = *(byte *)(param_1 + _DAT_11272f8ac) ^ 1;
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272f768);
  _objc_retain(uVar6);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf38cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c25baa0(uVar7,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(uVar7);
  lVar2 = param_3;
  func_0x00010c11c420();
  uVar7 = 2;
  if (lVar2 < 0x98) {
    if (lVar2 == 0x71) {
LAB_105af82ec:
      uVar7 = 3;
      goto LAB_105af82f8;
    }
    if (lVar2 == 0x73) goto LAB_105af82f8;
  }
  else {
    if (lVar2 == 0x98) goto LAB_105af82f8;
    if (lVar2 == 0x9a) goto LAB_105af82ec;
  }
  uVar7 = 0;
LAB_105af82f8:
  puVar4 = PTR_PTR_1126b1118;
  _objc_alloc(PTR_PTR_1126b1118);
  _objc_retain(&PTR____CFConstantStringClassReference_110eb5658);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043160(puVar4,param_2,&PTR____CFConstantStringClassReference_110eb5658,puVar5);
  _objc_release(puVar5);
  _objc_release(&PTR____CFConstantStringClassReference_110eb5658);
  func_0x00010be5af80(param_1,param_2,param_3,uVar7,puVar4,uVar6,uVar3);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105af83ac; end: 105af85fb; -[SCDiscoverFeedViewController _lookupStory:feedType:sectionKey:identifier:cheetahStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af83ac(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f6d4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f7b4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272f754);
  uVar2 = param_3;
  func_0x00010bf38cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105af85fc;
  puStack_a0 = &UNK_1108d4cd0;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_4;
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(param_7);
  uStack_80 = param_7;
  func_0x00010846f16c(uVar1,3,&PTR____CFConstantStringClassReference_110e1c6f8,uVar3,uVar4,uVar2,0,
                      PTR___dispatch_main_q_11034be20,&puStack_b8,
                      *(undefined8 *)(param_1 + _DAT_11272f7b0),
                      *(undefined8 *)(param_1 + _DAT_11272f6dc),
                      *(undefined8 *)(param_1 + _DAT_11272f7e4),
                      *(undefined8 *)(param_1 + _DAT_11272f800),
                      *(undefined8 *)(param_1 + _DAT_11272f738),
                      *(undefined8 *)(param_1 + _DAT_11272f8dc));
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105af85fc; end: 105af8657;  */

void FUN_105af85fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31160();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af8658; end: 105af88ff; -[SCDiscoverFeedViewController _handleStoryLookupSuccessResponseWithStory:feedType:sectionKey:identifier:notification:cheetahStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af8658(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined **param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 == (undefined **)0x0) {
    if (param_8 == (undefined **)0x0) {
      func_0x00010be56340(param_1);
      puVar1 = PTR_PTR_1126afca8;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e1c718;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c718,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar1);
    }
    else {
      func_0x00010be56360(param_1);
      lVar5 = param_7;
      func_0x00010c0dc140(param_7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = param_8;
      func_0x000107aff660(*(undefined8 *)(param_1 + _DAT_11272f85c),param_8,(long)(int)param_4,
                          param_5,param_6,lVar5,0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      func_0x00010be9e720(param_1);
    }
  }
  else {
    lVar5 = param_7;
    func_0x00010c11c420();
    ppuVar6 = param_3;
    if (lVar5 == 0x73) {
      func_0x000107aff608(param_3,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      if (ppuVar6 == (undefined **)0x0) {
        func_0x00010be56340(param_1);
        goto LAB_105af88ac;
      }
    }
    func_0x00010be56360(param_1);
    uVar7 = *(undefined8 *)(param_1 + _DAT_11272f768);
    uVar8 = *(undefined8 *)(param_1 + _DAT_11272f76c);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272f734);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf82760();
    func_0x000107afdc20(ppuVar6,param_4,uVar7,uVar8,uVar3,*(undefined8 *)(param_1 + _DAT_11272f84c))
    ;
    _objc_release(uVar2);
    lVar5 = param_7;
    func_0x00010c0dc140(param_7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar6;
    func_0x000107aff660(*(undefined8 *)(param_1 + _DAT_11272f85c),ppuVar6,(long)(int)param_4,param_5
                        ,param_6,lVar5,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be9e720(param_1);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar6);
LAB_105af88ac:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105af8900; end: 105af891b; -[SCDiscoverFeedViewController _sendActionModelToActionHandler:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af8900(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f714),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,0);
  return;
}



/* Entry: 105af891c; end: 105af8923; -[SCDiscoverFeedViewController _logFSNotificationOpen:] */

void FUN_105af891c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logFSNotificationOpen_error__112572568,param_3,0xffffffffffffffff);
  return;
}



/* Entry: 105af8924; end: 105af8a5f; -[SCDiscoverFeedViewController _logFSNotificationOpen:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af8924(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0dc140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b01540(param_3);
  puVar2 = PTR_PTR_1126b1370;
  uVar3 = param_3;
  func_0x00010c11c420(param_3);
  _objc_release(param_3);
  func_0x00010c25d500(puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11272f860;
  if (param_4 != -1) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a52c0();
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a52e0();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105af8a60; end: 105af8a6b; -[SCDiscoverFeedViewController _logNFSNotificationOpen:story:] */

void FUN_105af8a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be56350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logNFSNotificationOpen_error_st_112573270,param_3,0xffffffffffffffff,
             param_4);
  return;
}



/* Entry: 105af8a6c; end: 105af8c5f; -[SCDiscoverFeedViewController _logNFSNotificationOpen:error:story:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af8a6c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0dc140(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c11c420();
  if (lVar5 != 0x73) {
    func_0x00010c11c420();
  }
  func_0x000107b01540();
  uVar4 = param_5;
  func_0x00010c25a160(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084c40();
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c25a160(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = uVar4;
  func_0x00010c084ca0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b1370;
  lVar5 = param_3;
  func_0x00010c11c420(param_3);
  func_0x00010c25d500(puVar3,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11272f860;
  if (param_4 != -1) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a52c0();
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a52e0();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af8c60; end: 105af8e17; -[SCDiscoverFeedViewController _resetCarouselSectionsOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af8c60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  lVar12 = (long)_DAT_11272f8ec;
  lVar1 = *(long *)(param_1 + lVar12);
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar11 = 0;
    do {
      uVar4 = *(ulong *)(param_1 + lVar12);
      func_0x00010bf40a20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bed88;
      _objc_opt_class(PTR_PTR_1126bed88);
      uVar10 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((uVar10 & 1) != 0) {
        puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + _DAT_11272f8b0);
        func_0x00010bf4c080(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + lVar12);
        func_0x00010bf40a20(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108fcf40c(puVar7,uVar8,uVar9);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(puVar7);
      }
      uVar11 = uVar11 + 1;
      uVar10 = *(ulong *)(param_1 + lVar12);
      func_0x00010bf40a20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar10;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
      _objc_release(uVar10);
    } while (uVar11 < uVar6);
  }
  return;
}



/* Entry: 105af8e18; end: 105af8f07; -[SCDiscoverFeedViewController _currentSections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af8e18(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11272f8ec);
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar1 = uVar2;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar1 = 0;
    do {
      uVar4 = uVar1;
      func_0x0001079af528(uVar1,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x0001079d6288();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 != 0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar1 = uVar1 + 1;
      uVar4 = uVar2;
      func_0x00010bf529e0();
    } while (uVar1 < uVar4);
  }
  puVar6 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105af8f08; end: 105af8fab; -[SCDiscoverFeedViewController _createPageSessionIdIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af8f08(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_2;
  func_0x00010bf5f840();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (*(char *)(param_2 + _DAT_11272f8bc) == '\x01')) {
    lVar2 = lVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187780(param_2,param_3,lVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    *(undefined8 *)(param_2 + _DAT_11272f92c) = param_1;
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105af8fac; end: 105af9113; -[SCDiscoverFeedViewController _logImpressionsOnMainThread:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af8fac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_11272f8ec);
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + _DAT_11272f918) = 1;
  }
  else if ((*(char *)(param_1 + _DAT_11272f89c) == '\x01') &&
          ((*(byte *)(param_1 + _DAT_11272f8f8) & 1) == 0)) {
    lVar1 = param_1;
    func_0x00010bf5f840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfc64c0(*(undefined8 *)(param_1 + _DAT_11272f92c));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272f78c);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 105af9114; end: 105af9153;  */

void FUN_105af9114(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af9154; end: 105af92a3; -[SCDiscoverFeedViewController _handleDiscoverFeedPageOpenWithEnterAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af9154(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x00010bdf1000();
  func_0x00010bec79a0(param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272f8cc);
  lVar1 = param_1;
  func_0x00010bdf7080();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f78c);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  uStack_50 = uVar4;
  _objc_retain(lVar1);
  func_0x00010c0f7fc0(uVar3);
  *(undefined1 *)(param_1 + _DAT_11272f8bc) = 0;
  *(undefined1 *)(param_1 + _DAT_11272f8c8) = 0;
  *(undefined1 *)(param_1 + _DAT_11272f89c) = 1;
  lVar2 = (long)_DAT_11272f920;
  if (*(long *)(param_1 + lVar2) != 0) {
    _dispatch_block_cancel();
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  return;
}



/* Entry: 105af92a4; end: 105af92e3;  */

void FUN_105af92a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdcbce0(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105af92e4; end: 105af93cb; -[SCDiscoverFeedViewController _announceFeedPageOpenEventWithEnterAction:entryType:currentSections:] */

void FUN_105af92e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c2368;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c1723a0();
  func_0x00010c1723c0(puVar1);
  func_0x00010c172660(puVar1);
  uVar2 = param_1;
  func_0x00010bf5f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x13;
  func_0x000107cb3664(0x13,0,param_4,param_5,param_3,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar2);
  func_0x00010bdcbc00(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105af93cc; end: 105af9423; -[SCDiscoverFeedViewController _handleDiscoverFeedPageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af93cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bdcbd00();
  func_0x00010bea5ec0(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f930);
  *(undefined **)(param_1 + _DAT_11272f930) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


