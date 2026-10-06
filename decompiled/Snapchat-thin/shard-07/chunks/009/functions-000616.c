/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b81828; end: 105b818bb;  */

void FUN_105b81828(void)

{
  _objc_alloc(PTR_PTR_1126c2b70);
  func_0x00010c05f0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b818bc; end: 105b818d7;  */

void FUN_105b818bc(void)

{
  _objc_opt_new(PTR_PTR_1126c2b90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b818d8; end: 105b81a27;  */

void FUN_105b818d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be8a860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b81a28; end: 105b81ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b81a28(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + _DAT_1127312b4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b81ab4; end: 105b81c3f;  */

void FUN_105b81ab4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b81c40; end: 105b81f5b; -[SCFriendsFeedViewController _initTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b81c40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2116c0(param_1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce40();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(uVar3,uVar4,uVar5,uVar6);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177ba0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198080();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1974c0(0);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1974e0(0);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197500(0);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181fc0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126c2ba0);
  func_0x00010c125fe0(lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126c2ba8);
  func_0x00010c125fe0(lVar2);
  _objc_release(lVar2);
  func_0x00010be3a760(param_1);
  func_0x00010be39f20(param_1);
  if ((*(long *)(param_1 + _DAT_1127312dc) == 0) && (*(char *)(param_1 + _DAT_112731170) == '\x01'))
  {
    func_0x00010bfef720(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be39c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initGestureRecognizers_11256c0c0);
  return;
}



/* Entry: 105b81f5c; end: 105b8201f; -[SCFriendsFeedViewController _initTableFooterView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b81f5c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c2bb0;
  _objc_alloc();
  func_0x00010c05da40();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127312e0);
  *(undefined **)(param_1 + _DAT_1127312e0) = puVar1;
  _objc_release(uVar2);
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b82020; end: 105b822bf; -[SCFriendsFeedViewController _initGestureRecognizers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b82020(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar5 = (long)_DAT_1127312e4;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  lVar6 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar6);
  puVar1 = PTR_PTR_1126c2bb8;
  _objc_alloc();
  func_0x00010c050900();
  lVar4 = (long)_DAT_1127312e8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  lVar6 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar6);
  func_0x00010c1374a0(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar6 = (long)_DAT_1127312ec;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  func_0x00010c178280(*(undefined8 *)(param_1 + lVar6),param_2,0);
  lVar6 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar6);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar5 = (long)_DAT_1127312f0;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  func_0x00010c178280(*(undefined8 *)(param_1 + lVar5),param_2,0);
  lVar6 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar6);
  func_0x00010c1374a0(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126c2bc0;
  _objc_alloc();
  func_0x00010c050900();
  lVar6 = (long)_DAT_1127312f4;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  func_0x00010c1934c0(*(undefined8 *)(param_1 + lVar6),param_2,2);
  func_0x00010c1a60c0(*(undefined8 *)(param_1 + lVar6),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127312d4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010c1934a0(0x4059000000000000,*(undefined8 *)(param_1 + lVar6));
  }
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b822c0; end: 105b824f7; -[SCFriendsFeedViewController _initLazyTableHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b822c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105b824f8;
  puStack_88 = &UNK_110858d90;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127312f8);
  *(undefined **)(param_1 + _DAT_1127312f8) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_c8 = puVar2;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105b82560;
  puStack_b0 = &UNK_110858d90;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127312fc);
  *(undefined **)(param_1 + _DAT_1127312fc) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_f0 = puVar2;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x105b825c8;
  puStack_d8 = &UNK_110858d90;
  _objc_copyWeak(auStack_d0,auStack_78);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731300);
  *(undefined **)(param_1 + _DAT_112731300) = puVar1;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_f8,auStack_78);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731304);
  *(undefined **)(param_1 + _DAT_112731304) = puVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105b824f8; end: 105b82697;  */

void FUN_105b824f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010b0aea8c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be34e60(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105b82698; end: 105b829df; -[SCFriendsFeedViewController _initSponsoredSnapBanner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b82698(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730f14);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar1;
  func_0x00010c24a740();
  _objc_release();
  if ((int)uVar14 != 0) {
    puVar2 = PTR_PTR_1126b40c0;
    _objc_opt_new();
    lVar15 = (long)_DAT_112731308;
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar2;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar14;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    func_0x00010c1e3380(0x437a0000,uVar1);
    func_0x00010bdf84a0(param_1);
    func_0x00010bea8a00(param_1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf49580(0x4059c00000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar14);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(uVar4);
    lVar3 = param_1 + _DAT_112730f3c;
    _objc_loadWeakRetained();
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    lVar5 = lVar3;
    func_0x00010bf24740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar3);
    param_3 = lVar5;
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112730f38));
    _objc_release(lVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_initWeak(auStack_128,uVar1);
  lVar13 = param_3;
  func_0x00010bf75dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_105b82b84;
  puStack_138 = &UNK_110846510;
  _objc_copyWeak(auStack_130,auStack_128);
  lVar3 = lVar13;
  func_0x00010c25ff60(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_release(lVar13);
  lVar13 = param_3;
  func_0x00010bf72840(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_158,auStack_128);
  lVar3 = lVar13;
  func_0x00010c25ff60(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  _objc_release(param_3);
  return;
}



/* Entry: 105b829e0; end: 105b82b83; -[SCFriendsFeedViewController _observeApplicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b829e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010bf75dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105b82b84;
  puStack_78 = &UNK_110846510;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf72840(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105b82b84; end: 105b82bdb;  */

void FUN_105b82b84(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b82bdc; end: 105b82cdb; -[SCFriendsFeedViewController _observeFeedInitialRenderEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b82bdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127311f4);
  func_0x00010c268560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b82cdc; end: 105b82d07;  */

void FUN_105b82cdc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b82d08; end: 105b82d3b; -[SCFriendsFeedViewController _onFeedInitialRender] */

void FUN_105b82d08(undefined8 param_1)

{
  func_0x00010bec7240();
  func_0x00010bebf560(param_1);
  func_0x00010bebfac0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec81b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeToPublicGroupsJiraInfo_11258fa10);
  return;
}



/* Entry: 105b82d3c; end: 105b82d3f; -[SCFriendsFeedViewController _subscribeToPublicGroupsJiraInfo] */

void FUN_105b82d3c(void)

{
  return;
}



/* Entry: 105b82d40; end: 105b82d77; -[SCFriendsFeedViewController _updatePublicGroupJiraInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b82d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731310);
  *(undefined8 *)(param_1 + _DAT_112731310) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b82d78; end: 105b82ed3; -[SCFriendsFeedViewController _observeConsumableConversationCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b82d78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730eec);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105b82ed4; end: 105b830cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b82ed4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_2;
    func_0x00010bf529e0();
    *(long *)(param_1 + _DAT_112731314) = lVar2;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010bf529e0(param_2);
    func_0x00010c225ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        lVar8 = *(long *)(lVar9 * 8);
        lVar4 = lVar8;
        func_0x00010bfa3d00(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(lVar4);
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar8;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        if (lVar4 != 0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(lVar4);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar5 = puVar3;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112731318);
    *(undefined **)(param_1 + _DAT_112731318) = puVar5;
    _objc_release(uVar7);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_2 + _DAT_112731014);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24ffa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 105b830cc; end: 105b8310b; -[SCFriendsFeedViewController _startAdsPrefetching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b830cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731014);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24ffa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b8310c; end: 105b8323f; -[SCFriendsFeedViewController loadView] */

void FUN_105b8310c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf31bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c2842e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bfeecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initGradientView_1125d9500);
  return;
}



/* Entry: 105b83240; end: 105b8337f; -[SCFriendsFeedViewController initGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b83240(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110e1ca38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  uVar7 = 0x3fe0000000000000;
  param_1 = param_1 * 0.5;
  puVar2 = puVar1;
  func_0x00010c25cbc0(puVar1,param_3,(long)param_1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar5 = (long)_DAT_11273131c;
  uVar4 = *(undefined8 *)(param_2 + lVar5);
  *(undefined **)(param_2 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c14d680(PTR__OBJC_CLASS___UIScreen_1126aea10);
  lVar3 = param_2;
  dVar6 = param_1;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010c23d0a0(puVar2);
  func_0x00010c19f0e0(0,param_1,dVar6,uVar7,*(undefined8 *)(param_2 + lVar5));
  _objc_release(lVar3);
  func_0x00010c16d4a0(*(undefined8 *)(param_2 + lVar5),param_3,2);
  func_0x00010c1677c0(0,*(undefined8 *)(param_2 + lVar5));
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b83380; end: 105b83517; -[SCFriendsFeedViewController initTableHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b83380(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127312dc;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126c2bc8;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112730fa4);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112730fb4);
    lVar1 = param_1;
    func_0x00010be6f400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff76e0(puVar3,param_2,uVar4,uVar5,param_1,lVar1,puVar2,
                        *(undefined8 *)(param_1 + _DAT_112730f14),
                        *(undefined8 *)(param_1 + _DAT_112731184),
                        *(undefined8 *)(param_1 + _DAT_112731188),
                        *(undefined8 *)(param_1 + _DAT_112731194),
                        *(undefined8 *)(param_1 + _DAT_112731190),param_1,
                        *(undefined8 *)(param_1 + _DAT_112731010),
                        *(undefined8 *)(param_1 + _DAT_1127311a0),
                        *(undefined8 *)(param_1 + _DAT_1127311a4),
                        *(undefined8 *)(param_1 + _DAT_11273116c),
                        *(undefined1 *)(param_1 + _DAT_112731170));
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(puVar2);
    lVar1 = *(long *)(param_1 + lVar6);
  }
  func_0x00010bfe01e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211680();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b83518; end: 105b835af; -[SCFriendsFeedViewController viewWillTransitionToSize:withTransitionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b83518(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_viewWillTransitionToSize_withTra_112685490;
  puStack_48 = PTR_PTR_1126ec180;
  lStack_50 = param_3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(param_1,param_2,&lStack_50,puVar1,param_5);
  func_0x00010c2a7060(param_1,param_2,*(undefined8 *)(param_3 + _DAT_1127312dc));
  _objc_release(param_5);
  return;
}



/* Entry: 105b835b0; end: 105b83673; -[SCFriendsFeedViewController initOrderedSections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b835b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c30b8);
  func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c30d0);
  func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c30e8);
  func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3100);
  func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3118);
  func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3130);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731320);
  *(undefined **)(param_1 + _DAT_112731320) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b83674; end: 105b8394f; -[SCFriendsFeedViewController _initCreateButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b83674(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c2bd0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_2 + _DAT_112730f14);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0d8680();
  func_0x00010c02f8a0(puVar1,param_3,uVar7);
  lVar10 = (long)_DAT_112731324;
  uVar7 = *(undefined8 *)(param_2 + lVar10);
  *(undefined **)(param_2 + lVar10) = puVar1;
  _objc_release(uVar7);
  _objc_release(uVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar10),param_3,
                      &PTR____CFConstantStringClassReference_110e20178);
  func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar10),param_3,param_2);
  lVar3 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010bdd5580(param_2);
  uVar2 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf493c0(-(param_1 + 15.0),uVar2,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112731328;
  uVar8 = *(undefined8 *)(param_2 + lVar9);
  *(undefined8 *)(param_2 + lVar9) = uVar7;
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_98 = *(undefined8 *)(param_2 + lVar9);
  lVar9 = *(long *)(param_2 + lVar10);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf49420(0x404e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar10);
  lStack_90 = lVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf49420(0x404e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + lVar10);
  uStack_88 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493c0(0xc02e000000000000,uVar5,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010c1528a0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar9 + _DAT_112731230);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b83950; end: 105b839b3; -[SCFriendsFeedViewController _logScrollToTopButtonImpression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b83950(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010c1528a0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731230);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b839b4; end: 105b83a17; -[SCFriendsFeedViewController _logScrollToTopButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b839b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010c1528c0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731230);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b83a18; end: 105b83a7b; -[SCFriendsFeedViewController _logMoreUnreadButtonImpression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b83a18(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010c0d0f60(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731230);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b83a7c; end: 105b83adf; -[SCFriendsFeedViewController _logMoreUnreadButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b83a7c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010c0d0f80(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731230);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b83ae0; end: 105b83ba7; -[SCFriendsFeedViewController _showCTAButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b83ae0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 != 1) {
    if (param_3 != 0) {
      return;
    }
    func_0x00010be35560(param_1,param_2,1);
    func_0x00010be56280(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateMoreUnreadButtonAppearan_112550538)
    ;
    return;
  }
  lVar4 = (long)_DAT_11273132c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      return;
    }
  }
  if ((*(byte *)(param_1 + _DAT_112731330) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112731330) = 1;
    func_0x00010be58380(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9f6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fadeInScrollToTopButton_1125c5760);
  return;
}



/* Entry: 105b83ba8; end: 105b83bcf; -[SCFriendsFeedViewController _hideCTAButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b83ba8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bedbc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateMoreUnreadButtonIsHidden__1125948c0,1);
    return;
  }
  if (param_3 == 1) {
    *(undefined1 *)(param_1 + _DAT_112731330) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf9f850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fadeOutScrollToTopButton_1125c57b8);
    return;
  }
  return;
}



/* Entry: 105b83bd0; end: 105b83ea3; -[SCFriendsFeedViewController _showMoreUnreadButtonWithCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b83bd0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar9 = (long)_DAT_1127312a8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar9);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar8 = (long)_DAT_11273132c;
      uVar3 = *(ulong *)(param_1 + lVar8);
      func_0x00010c06f880();
      if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar2);
        return;
      }
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c074c20();
      _objc_release(uVar4);
      _objc_release(lVar2);
      if ((int)uVar7 == 0) {
        return;
      }
    }
    lVar8 = (long)_DAT_112731334;
    lVar2 = *(long *)(param_1 + lVar8);
    if (lVar2 == 0) {
      puVar5 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar5;
      _objc_release(uVar7);
      lVar2 = *(long *)(param_1 + lVar8);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar2);
    _objc_release(puVar5);
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273132c);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      func_0x00010bedbc60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beb8310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showCTAButton__11258ba68,0);
      return;
    }
    _objc_initWeak(auStack_68,param_1);
    puVar5 = PTR_PTR_1126af4a8;
    _objc_alloc(PTR_PTR_1126af4a8);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105b83ea4;
    puStack_78 = &UNK_110849710;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c0311a0(puVar5);
    puVar6 = PTR_PTR_1126c2bd8;
    _objc_alloc(PTR_PTR_1126c2bd8);
    uVar7 = *(undefined8 *)(param_1 + _DAT_112730f14);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281e20();
    func_0x00010c0615c0(puVar6);
    _objc_release(uVar7);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar9));
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 105b83ea4; end: 105b83f5f;  */

void FUN_105b83ea4(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105b83f60;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b83f60; end: 105b83f93;  */

void FUN_105b83f60(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b83f94; end: 105b8403b;  */

void FUN_105b83f94(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105b8403c;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b8403c; end: 105b84067;  */

void FUN_105b8403c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b84068; end: 105b8415f; -[SCFriendsFeedViewController _onAttachMoreUnreadButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b84068(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c219b60(param_3,param_2,0);
  puVar2 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105b84160;
  puStack_40 = &UNK_110868d10;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273132c);
  *(undefined **)(param_1 + _DAT_11273132c) = puVar2;
  _objc_release(uVar3);
  func_0x00010bea4ac0(param_1);
  func_0x00010beb8300(param_1,param_2,0);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b84160; end: 105b84187;  */

void FUN_105b84160(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b84188; end: 105b8442f; -[SCFriendsFeedViewController _setInitialMoreUnreadButtonConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b84188(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
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
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + _DAT_112731338) == 0) {
    dVar11 = 15.0;
  }
  else {
    func_0x00010bfb2c80();
    param_1 = (double)SUB84(param_1,0);
    dVar11 = param_1 + 15.0;
  }
  func_0x00010bdd5580(param_2);
  lVar10 = (long)_DAT_11273132c;
  uVar2 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf493a0(uVar7,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf493c0(-(dVar11 + param_1),uVar7,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11273133c;
  uVar8 = *(undefined8 *)(param_2 + lVar9);
  *(undefined8 *)(param_2 + lVar9) = uVar5;
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_78 = *(undefined8 *)(param_2 + lVar9);
  lVar10 = *(long *)(param_2 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010bf49540(0x3fe0000000000000,lVar3,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar6);
  _objc_release(puVar6);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(param_2);
  _objc_release(lVar3);
  lVar4 = lVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_a8 = puVar1;
  pcStack_88 = FUN_105b84430;
  uVar7 = *(undefined8 *)(lVar4 + _DAT_11273132c);
  lStack_b0 = lVar3;
  lStack_a0 = lVar10;
  lStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _CGAffineTransformMakeTranslation(&uStack_e0,0,0x402e000000000000);
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  func_0x00010c219960(uVar7,param_3,&uStack_110);
  lVar3 = lVar4;
  func_0x00010c29bf00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar3);
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_105b84520;
  puStack_128 = &UNK_110841f80;
  uStack_120 = uVar7;
  lStack_118 = lVar4;
  func_0x00010c27ac60(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_3,uVar7,0x10000,
                      &puStack_140,0);
  _objc_release(uVar7);
  return;
}



/* Entry: 105b84430; end: 105b8451f; -[SCFriendsFeedViewController _animateMoreUnreadButtonAppearance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b84430(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273132c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _CGAffineTransformMakeTranslation(&uStack_60,0,0x402e000000000000);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(uVar1,param_2,&uStack_90);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar2);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105b84520;
  puStack_a8 = &UNK_110841f80;
  uStack_a0 = uVar1;
  lStack_98 = param_1;
  func_0x00010c27ac60(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,uVar1,0x10000,
                      &puStack_c0,0);
  _objc_release(uVar1);
  return;
}



/* Entry: 105b84520; end: 105b8458f;  */

void FUN_105b84520(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  
  _CGAffineTransformMakeTranslation(&uStack_50,0,0);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 105b84590; end: 105b8463f; -[SCFriendsFeedViewController _updateMoreUnreadButtonIsHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b84590(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_1127312a8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = (long)_DAT_11273132c;
      iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
      func_0x00010c06f880();
      _objc_release(lVar3);
      if (iVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 105b84640; end: 105b846bf; -[SCFriendsFeedViewController _removeMoreUnreadScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b84640(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127312a8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273132c);
      func_0x00010c06f880();
      _objc_release(lVar2);
      if (iVar1 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
  }
  return;
}



/* Entry: 105b846c0; end: 105b84977; -[SCFriendsFeedViewController _createShortcutButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b846c0(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c2be0;
  _objc_alloc();
  func_0x00010c00a2c0();
  lVar15 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar15);
  if (*(long *)(param_2 + _DAT_112731338) == 0) {
    dVar18 = 15.0;
  }
  else {
    func_0x00010bfb2c80();
    param_1 = (double)SUB84(param_1,0);
    dVar18 = param_1 + 15.0;
  }
  func_0x00010bdd5580(param_2);
  puVar2 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493c0(-(dVar18 + param_1));
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112731340;
  uVar14 = *(undefined8 *)(param_2 + lVar17);
  *(undefined **)(param_2 + lVar17) = puVar4;
  _objc_release(uVar14);
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf49420(0x404e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112731344;
  uVar14 = *(undefined8 *)(param_2 + lVar16);
  *(undefined **)(param_2 + lVar16) = puVar4;
  _objc_release(uVar14);
  _objc_release(puVar2);
  puStack_a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_98 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf49420(0x404e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(param_2 + lVar16);
  uStack_80 = *(undefined8 *)(param_2 + lVar17);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a0);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar15);
  puVar8 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_105b84978;
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar8;
  lStack_100 = lVar17;
  puStack_f8 = puVar6;
  puStack_f0 = puVar5;
  puStack_e8 = puVar4;
  lStack_e0 = lVar16;
  lStack_d8 = lVar3;
  lStack_d0 = lVar15;
  puStack_c8 = puVar2;
  puStack_c0 = puVar7;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(puVar9);
  lVar15 = (long)_DAT_11273131c;
  func_0x00010c219b60(*(undefined8 *)(puVar8 + lVar15));
  puVar1 = puVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = puVar2;
  _objc_release(puVar1);
  func_0x00010bea8a00(puVar8);
  puStack_1a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(puVar8 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  uStack_150 = uVar14;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar8 + lVar15);
  uStack_160 = uVar14;
  uStack_140 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  uStack_170 = uVar10;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(puVar8 + lVar15);
  uStack_180 = uVar10;
  uStack_138 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  uStack_198 = uVar14;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  uStack_1b0 = uVar14;
  uStack_130 = uVar14;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  puStack_1c8 = puVar1;
  puStack_128 = puVar1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar8;
  puStack_120 = puVar5;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_118 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010beef8c0(puStack_1a0);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(puStack_1a8);
  _objc_release(puStack_190);
  _objc_release(uStack_198);
  _objc_release(uStack_180);
  _objc_release(puStack_178);
  _objc_release(puStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_160);
  _objc_release(puStack_158);
  _objc_release(puStack_148);
  _objc_release(uStack_150);
  puVar1 = puStack_188;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_105b84d70;
  puStack_1f8 = PTR_PTR_1126ec180;
  puStack_200 = puVar1;
  puStack_1f0 = puVar4;
  puStack_1e8 = puVar8;
  ppuStack_1e0 = &puStack_b0;
  _objc_msgSendSuper2(&puStack_200,PTR_s_didMoveToParentViewController__1125bb948);
  func_0x00010bdf84a0(puVar1);
  if (puVar13 != (undefined *)0x0) {
    func_0x00010bea8a00(puVar1);
  }
  return;
}



/* Entry: 105b84978; end: 105b84d6f; -[SCFriendsFeedViewController _constraintTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b84978(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar1);
  lVar12 = (long)_DAT_11273131c;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar2;
  _objc_release(lVar1);
  func_0x00010bea8a00(param_1);
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_b0 = uVar3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_c0 = uVar3;
  uStack_a0 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_d0 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_e0 = uVar4;
  uStack_98 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_f8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_110 = uVar3;
  uStack_90 = uVar3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_120 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_128 = lVar1;
  lStack_88 = lVar1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_130 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  lStack_80 = lVar5;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010beef8c0(puStack_100);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(lStack_130);
  _objc_release(lStack_128);
  _objc_release(lStack_120);
  _objc_release(lStack_118);
  _objc_release(uStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_e0);
  _objc_release(lStack_d8);
  _objc_release(lStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c0);
  _objc_release(lStack_b8);
  _objc_release(lStack_a8);
  _objc_release(uStack_b0);
  lVar1 = lStack_e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105b84d70;
  puStack_158 = PTR_PTR_1126ec180;
  lStack_160 = lVar1;
  lStack_150 = lVar12;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_160,PTR_s_didMoveToParentViewController__1125bb948);
  func_0x00010bdf84a0(lVar1);
  if (puVar11 != (undefined *)0x0) {
    func_0x00010bea8a00(lVar1);
  }
  return;
}



/* Entry: 105b84d70; end: 105b84dc7; -[SCFriendsFeedViewController didMoveToParentViewController:] */

void FUN_105b84d70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec180;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToParentViewController__1125bb948);
  func_0x00010bdf84a0(param_1);
  if (param_3 != 0) {
    func_0x00010bea8a00(param_1);
  }
  return;
}



/* Entry: 105b84dc8; end: 105b84e1b; -[SCFriendsFeedViewController _deactivateTopConstraints] */

/* WARNING: Possible PIC construction at 0x000105b84dec: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b84dc8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11273130c);
  if ((lVar1 == 0) && (lVar1 = *(long *)(param_1 + _DAT_112731348), lVar1 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 105b84e1c; end: 105b85133; -[SCFriendsFeedViewController _setTopConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b84e1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar7 = &uStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  if (lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0f3ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1;
    func_0x00010c070780(lVar1,param_2,lVar12);
    _objc_release(lVar12);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar3);
    if ((int)lVar13 != 0) {
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar11;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c149040();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      goto LAB_105b84f50;
    }
  }
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
LAB_105b84f50:
  _objc_release(lVar3);
  _objc_release(lVar11);
  lVar11 = (long)_DAT_112731308;
  lVar3 = *(long *)(param_1 + lVar11);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112731348;
    uVar9 = *(undefined8 *)(param_1 + lVar12);
    *(long *)(param_1 + lVar12) = lVar2;
    _objc_release(uVar9);
    _objc_release(lVar11);
    _objc_release(lVar3);
    uStack_70 = *(undefined8 *)(param_1 + lVar12);
    uVar9 = 1;
  }
  else {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_11273130c;
    uVar9 = *(undefined8 *)(param_1 + lVar13);
    *(long *)(param_1 + lVar13) = lVar2;
    _objc_release(uVar9);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar2;
    func_0x00010bf493a0(lVar2,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112731348;
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    *(long *)(param_1 + lVar12) = lVar11;
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar2);
    _objc_release(lVar3);
    uStack_68 = *(undefined8 *)(param_1 + lVar13);
    uStack_60 = *(undefined8 *)(param_1 + lVar12);
    puVar7 = &uStack_68;
    uVar9 = 2;
  }
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar7,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010beef8c0(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(puVar8);
  _objc_opt_new(puVar5);
  lVar3 = lVar1;
  func_0x00010be632c0(lVar1);
  func_0x00010c1d0640(puVar5,param_2,lVar3,&PTR____CFConstantStringClassReference_110eb9cb8);
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010be632e0(lVar1);
  func_0x00010c1d0640(puVar5,param_2,lVar3,&PTR____CFConstantStringClassReference_110eb83d8);
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010be632a0(lVar1);
  func_0x00010c1d0640(puVar5,param_2,lVar3,&PTR____CFConstantStringClassReference_110eb83b8);
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010be63280(lVar1);
  func_0x00010c1d0640(puVar5,param_2,lVar3,&PTR____CFConstantStringClassReference_110eb8398);
  _objc_release(lVar3);
  uVar10 = *(undefined8 *)(lVar1 + _DAT_112730eec);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfa3e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar4 = PTR_PTR_1126c2be8;
  _objc_alloc(PTR_PTR_1126c2be8);
  uVar10 = *(undefined8 *)(lVar1 + _DAT_112730f70);
  uVar14 = *(undefined8 *)(lVar1 + _DAT_112730f6c);
  uVar15 = *(undefined8 *)(lVar1 + _DAT_112731068);
  puVar6 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c049e80(puVar4,param_2,uVar10,uVar14,uVar9,uVar15,puVar6,
                      *(undefined8 *)(lVar1 + _DAT_112730f0c),puVar8,
                      *(undefined8 *)(lVar1 + _DAT_112731010),
                      *(undefined8 *)(lVar1 + _DAT_112731270),lVar1,
                      *(undefined8 *)(lVar1 + _DAT_11273134c),
                      *(undefined8 *)(lVar1 + _DAT_112730fd8),
                      *(undefined8 *)(lVar1 + _DAT_112731200));
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b85134; end: 105b85323; -[SCFriendsFeedViewController _createQuickAddDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b85134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_1;
  func_0x00010be632c0(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb9cb8);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be632e0(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb83d8);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be632a0(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb83b8);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be63280(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb8398);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112730eec);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa3e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c2be8;
  _objc_alloc(PTR_PTR_1126c2be8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112730f70);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112730f6c);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112731068);
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c049e80(puVar5,param_2,uVar3,uVar7,uVar4,uVar8,puVar6,
                      *(undefined8 *)(param_1 + _DAT_112730f0c),param_3,
                      *(undefined8 *)(param_1 + _DAT_112731010),
                      *(undefined8 *)(param_1 + _DAT_112731270),param_1,
                      *(undefined8 *)(param_1 + _DAT_11273134c),
                      *(undefined8 *)(param_1 + _DAT_112730fd8),
                      *(undefined8 *)(param_1 + _DAT_112731200));
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105b85324; end: 105b854bf; -[SCFriendsFeedViewController _createAddedMeDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b85324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_1;
  func_0x00010be632c0(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb9cb8);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be632e0(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb83d8);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be63280(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb8398);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be632a0(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb83b8);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126c2bf0;
  _objc_alloc(PTR_PTR_1126c2bf0);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112730f70);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112730f6c);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c049e60(puVar3,param_2,uVar5,uVar6,puVar4,*(undefined8 *)(param_1 + _DAT_112730f0c),
                      *(undefined8 *)(param_1 + _DAT_112731010),
                      *(undefined8 *)(param_1 + _DAT_112731270),param_1,
                      *(undefined8 *)(param_1 + _DAT_11273134c),
                      *(undefined8 *)(param_1 + _DAT_112730fd8),
                      *(undefined8 *)(param_1 + _DAT_112731200),param_3);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b854c0; end: 105b85637; -[SCFriendsFeedViewController _createContactSnapchatterDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b854c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar2 = param_1;
  func_0x00010be632c0(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb9cb8);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be632e0(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb83d8);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be63280(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb8398);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be632a0(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb83b8);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126c2bf8;
  _objc_alloc(PTR_PTR_1126c2bf8);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112730f70);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112730f6c);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c049e40(puVar3,param_2,uVar5,uVar6,puVar4,*(undefined8 *)(param_1 + _DAT_112730f0c),
                      *(undefined8 *)(param_1 + _DAT_112731010),
                      *(undefined8 *)(param_1 + _DAT_112731270),param_1,
                      *(undefined8 *)(param_1 + _DAT_11273134c),
                      *(undefined8 *)(param_1 + _DAT_112730fd8));
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b85638; end: 105b8578b; -[SCFriendsFeedViewController _createContactNonSnapchatterDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b85638(long param_1,undefined8 param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126c2c00;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112731270);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11273134c);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731090);
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127311c4);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112730f7c);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112731094);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11273105c);
  uVar13 = *(undefined8 *)(param_1 + _DAT_112731098);
  uVar14 = *(undefined8 *)(param_1 + _DAT_11273109c);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112730ffc);
  uVar11 = *(undefined8 *)(param_1 + _DAT_1127311c8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112730fcc);
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0569e0(puVar1,param_2,uVar5,param_1,uVar9,uVar6,uVar10,uVar7,uVar8,uVar12,uVar13,
                      uVar14,uVar15,uVar11,uVar4,*(undefined8 *)(param_1 + _DAT_112730fd8),
                      *(undefined8 *)(param_1 + _DAT_11273111c));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b8578c; end: 105b85b77; -[SCFriendsFeedViewController _pullToRefreshViewConstructingIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8578c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_112731350;
  lVar17 = *(long *)(param_1 + lVar20);
  if (lVar17 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731174);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfcd180();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(uVar16);
    _objc_release(uVar4);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126c2c08;
    _objc_alloc();
    func_0x00010c014580(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c160fc0();
    func_0x00010c219b60(puVar2);
    lVar17 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_11273134c;
    func_0x00010c066f80();
    _objc_release(lVar17);
    puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010bf31bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010bf31bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar19;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(lVar19);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(puVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar20);
    *(undefined **)(param_1 + lVar20) = puVar2;
    _objc_release(uVar4);
    lVar17 = *(long *)(param_1 + _DAT_112730ff8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar17 != 0) {
      puVar12 = PTR_PTR_1126c2c10;
      _objc_alloc();
      lVar18 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_112731234);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03f820();
      uVar16 = *(undefined8 *)(param_1 + _DAT_112731354);
      *(undefined **)(param_1 + _DAT_112731354) = puVar12;
      _objc_release(uVar16);
      _objc_release(uVar4);
      _objc_release(lVar18);
    }
    _objc_release(lVar17);
    _objc_release(puVar2);
    lVar17 = *(long *)(param_1 + lVar20);
  }
  lVar20 = lVar17;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar18 = (long)_DAT_112731358;
    lVar17 = *(long *)(lVar20 + lVar18);
    if (lVar17 == 0) {
      puVar2 = PTR_PTR_1126c2c18;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c219b60();
      lVar17 = lVar20;
      func_0x00010c29bf00(lVar20);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = (long)_DAT_11273134c;
      func_0x00010c066f80();
      _objc_release(lVar17);
      puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar3 = puVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar20 + lVar19);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar20;
      func_0x00010bf31bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar17;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar20;
      func_0x00010bf31bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar9;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(lVar13);
      _objc_release(lVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(lVar19);
      _objc_release(lVar17);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(lVar20 + lVar18);
      *(undefined **)(lVar20 + lVar18) = puVar2;
      _objc_release(uVar4);
      lVar17 = *(long *)(lVar20 + lVar18);
    }
    lVar20 = lVar17;
    _objc_retain();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
      ___stack_chk_fail();
      lVar15 = (long)_DAT_11273135c;
      lVar17 = *(long *)(lVar20 + lVar15);
      if (lVar17 == 0) {
        puVar12 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_alloc_init();
        uVar4 = *(undefined8 *)(lVar20 + lVar15);
        *(undefined **)(lVar20 + lVar15) = puVar12;
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(lVar20 + lVar15);
        func_0x00010c08c0e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(0x4024000000000000);
        _objc_release(uVar4);
        puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(*(undefined8 *)(lVar20 + lVar15));
        _objc_release(puVar12);
        func_0x00010c213040(*(undefined8 *)(lVar20 + lVar15));
        ppuVar14 = &PTR____CFConstantStringClassReference_110e20318;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e20318,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(lVar20 + lVar15));
        _objc_release(ppuVar14);
        puVar12 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(*(undefined8 *)(lVar20 + lVar15));
        _objc_release(puVar12);
        puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)(lVar20 + lVar15));
        _objc_release(puVar12);
        lVar17 = lVar20;
        func_0x00010c29bf00(lVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(lVar17);
        func_0x00010c0bbfc0(*(undefined8 *)(lVar20 + lVar15));
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar17 = *(long *)(lVar20 + lVar15);
      }
      _objc_retain(lVar17);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar17);
  return;
}



/* Entry: 105b85b78; end: 105b85dfb; -[SCFriendsFeedViewController _activityIndicatorViewConstructingIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b85b78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_112731358;
  lVar15 = *(long *)(param_1 + lVar17);
  if (lVar15 == 0) {
    puVar1 = PTR_PTR_1126c2c18;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c219b60();
    lVar15 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_11273134c;
    func_0x00010c066f80();
    _objc_release(lVar15);
    puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010bf31bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf31bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar17);
    *(undefined **)(param_1 + lVar17) = puVar1;
    _objc_release(uVar3);
    lVar15 = *(long *)(param_1 + lVar17);
  }
  lVar17 = lVar15;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar14 = (long)_DAT_11273135c;
    lVar15 = *(long *)(lVar17 + lVar14);
    if (lVar15 == 0) {
      puVar12 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc_init();
      uVar3 = *(undefined8 *)(lVar17 + lVar14);
      *(undefined **)(lVar17 + lVar14) = puVar12;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar17 + lVar14);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4024000000000000);
      _objc_release(uVar3);
      puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(lVar17 + lVar14));
      _objc_release(puVar12);
      func_0x00010c213040(*(undefined8 *)(lVar17 + lVar14));
      ppuVar13 = &PTR____CFConstantStringClassReference_110e20318;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e20318,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(lVar17 + lVar14));
      _objc_release(ppuVar13);
      puVar12 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(lVar17 + lVar14));
      _objc_release(puVar12);
      puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(lVar17 + lVar14));
      _objc_release(puVar12);
      lVar15 = lVar17;
      func_0x00010c29bf00(lVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar15);
      func_0x00010c0bbfc0(*(undefined8 *)(lVar17 + lVar14));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar15 = *(long *)(lVar17 + lVar14);
    }
    _objc_retain(lVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar15);
  return;
}



/* Entry: 105b85dfc; end: 105b85fb7; -[SCFriendsFeedViewController emptyFeedListPlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b85dfc(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273135c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110e20318;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e20318,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    lVar4 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar4);
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105b85fb8; end: 105b86127;  */

void FUN_105b85fb8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be08820(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(lVar6 + 0x10))(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b86128; end: 105b86207; -[SCFriendsFeedViewController didSelectShortcut:shortcutType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86128(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0xd) {
    puVar1 = PTR_PTR_1126b01c0;
    func_0x00010c294260(PTR_PTR_1126b01c0,param_2,&PTR____CFConstantStringClassReference_110e12b58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be62240(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  func_0x00010bf7b0a0(*(undefined8 *)(param_1 + _DAT_112731204),param_2,param_3,param_4);
  if (param_4 != *(long *)(param_1 + _DAT_112731360)) {
    puVar1 = PTR_PTR_1126c2c20;
    func_0x00010c22d720(PTR_PTR_1126c2c20,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07c20(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  func_0x00010bea7300(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b86208; end: 105b862e3; -[SCFriendsFeedViewController didUpdateShortcutBadges:shortcuts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112731354);
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112730ff8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289ea0();
    _objc_release(param_4);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731360);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c289ea0(lVar2,param_2,param_4,param_3,uVar1);
    uVar1 = param_3;
    param_3 = param_4;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b862e4; end: 105b862e7; -[SCFriendsFeedViewController startBatchCameraReply:] */

void FUN_105b862e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTapShortcutButton__11255de38);
  return;
}



/* Entry: 105b862e8; end: 105b862ef; -[SCFriendsFeedViewController shouldRevealShortcutsCarousel] */

void FUN_105b862e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollToTop__112632438,1);
  return;
}



/* Entry: 105b862f0; end: 105b8636f; -[SCFriendsFeedViewController storiesCarouselDidRender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b862f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + _DAT_112731364) = 1;
  lVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127312bc);
  lVar1 = lVar2;
  func_0x00010bf529e0(lVar2);
  func_0x00010bf79c80(uVar3,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105b86370; end: 105b86467; -[SCFriendsFeedViewController storiesCarouselUpdateOperaIsPresenting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86370(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  *(char *)(param_1 + _DAT_112731368) = (char)param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731000);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126c2c28;
    func_0x00010c29c9e0(PTR_PTR_1126c2c28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
    uVar3 = *(ulong *)(param_1 + _DAT_112730fd8);
    func_0x00010b09cc4c();
    if ((uVar3 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112730ed8);
      func_0x00010c0f2220(param_1);
      func_0x00010c24fc40(uVar1);
    }
  }
  else {
    puVar2 = PTR_PTR_1126c2c28;
    func_0x00010c29ca60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed8a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateFriendsFeedVisibleCellsWi_112593c28,param_3 ^ 1);
  return;
}



/* Entry: 105b86468; end: 105b86527; -[SCFriendsFeedViewController billboardHeaderIsDisplaying:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c1b0820(*(undefined8 *)(param_1 + _DAT_1127312bc));
  lVar5 = (long)_DAT_11273136c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400(puVar1,param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar4,param_2,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b86528; end: 105b86537; -[SCFriendsFeedViewController billboardHeaderDidTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127312bc),PTR_s_incrementBillboardTapCount_1125d8ac0);
  return;
}



/* Entry: 105b86538; end: 105b86577; -[SCFriendsFeedViewController billboardHeaderDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86538(long param_1)

{
  func_0x00010bfec3c0(*(undefined8 *)(param_1 + _DAT_1127312bc));
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273136c),PTR_s_next__112614028,
             PTR____kCFBooleanFalse_11034ab60);
  return;
}



/* Entry: 105b86578; end: 105b86587; -[SCFriendsFeedViewController billboardHeaderDidTapExtraButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127312bc),PTR_s_incrementBillboardTapCount_1125d8ac0);
  return;
}



/* Entry: 105b86588; end: 105b8658f; -[SCFriendsFeedViewController didTapShortcutButton] */

void FUN_105b86588(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTapShortcutButton__11255de38,0);
  return;
}



/* Entry: 105b86590; end: 105b8667b; -[SCFriendsFeedViewController _didTapShortcutButton:] */

/* WARNING: Possible PIC construction at 0x000105b865e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105b865e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86590(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112731360);
  if (lVar2 == 3) {
    lVar2 = *(long *)(param_1 + _DAT_112731370);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      return;
    }
    uVar1 = 2;
  }
  else {
    if (lVar2 != 0xf) {
      if (lVar2 != 0xc) {
        lVar2 = (long)_DAT_112731370;
        if ((param_3 != 0) && (*(long *)(param_1 + lVar2) == 0)) {
          *(undefined1 *)(param_1 + _DAT_112731374) = 1;
        }
        lVar2 = *(long *)(param_1 + lVar2);
        func_0x00010bf529e0();
        if (lVar2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010be47570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchBatchCameraReplyFlow_11256f6f8);
        return;
      }
      lVar2 = param_1;
      func_0x00010be1de40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = 1;
      goto code_r0x00010be84e00;
    }
    uVar1 = 3;
  }
  lVar2 = 0;
code_r0x00010be84e00:
                    /* WARNING: Could not recover jumptable at 0x00010be84e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__pushStartChatViewWithCreateButt_11257ed20,uVar1,lVar2);
  return;
}



/* Entry: 105b8667c; end: 105b86803; -[SCFriendsFeedViewController _getCommunityId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8667c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_1127311b4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f3c0();
  _objc_release();
  if ((int)lVar2 == 0) {
    uVar12 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_1127311ac);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010beffca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_retain(lVar1);
    lVar10 = lVar1;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    uVar12 = 0;
    if (lVar10 != 0) {
      do {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar1);
          }
          uVar12 = *(ulong *)(lVar14 * 8);
          uVar3 = uVar12;
          func_0x00010bf60900();
          if ((uVar3 & 1) != 0) {
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105b867bc;
          }
          lVar14 = lVar14 + 1;
        } while (lVar10 != lVar14);
        lVar10 = lVar1;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
      uVar12 = 0;
    }
LAB_105b867bc:
    _objc_release(lVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(lVar1 + _DAT_112731374) = 0;
  uVar4 = *(undefined8 *)(lVar1 + _DAT_112731198);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a17e0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(lVar1 + _DAT_11273119c);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112731360;
  func_0x00010c0a1800();
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar11 = *(long *)(lVar1 + _DAT_112731370);
  _objc_retain(lVar11);
  lVar2 = lVar11;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar11);
      }
      uVar4 = *(undefined8 *)(lVar13 * 8);
      _objc_retain(puVar5);
      _objc_retain(puVar6);
      func_0x00010c0c0000(uVar4);
      _objc_release(puVar6);
      _objc_release(puVar5);
      lVar13 = lVar13 + 1;
    } while (lVar2 != lVar13);
    lVar2 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  puVar7 = PTR_PTR_1126b1010;
  _objc_alloc(PTR_PTR_1126b1010);
  func_0x00010c02ec80();
  func_0x00010c1eb220();
  func_0x00010c1d86a0(puVar7);
  func_0x00010c1b2a20(puVar7);
  puVar8 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c21e6e0(puVar7);
  _objc_release(puVar8);
  puVar8 = puVar6;
  func_0x00010bf51e00(puVar6);
  func_0x00010c1a47a0(puVar7);
  _objc_release(puVar8);
  uVar4 = *(undefined8 *)(lVar1 + lVar14);
  func_0x000105bddfd4(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0a20(puVar7);
  _objc_release(uVar4);
  puVar8 = puVar7;
  func_0x00010c271d80(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be476c0(lVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar5 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 105b86804; end: 105b86afb; -[SCFriendsFeedViewController _launchBatchCameraReplyFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86804(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + _DAT_112731374) = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731198);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a17e0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273119c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112731360;
  func_0x00010c0a1800();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar10 = *(long *)(param_1 + _DAT_112731370);
  _objc_retain(lVar10);
  lVar5 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      uVar2 = *(undefined8 *)(lVar11 * 8);
      _objc_retain(puVar3);
      _objc_retain(puVar4);
      func_0x00010c0c0000(uVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar11 = lVar11 + 1;
    } while (lVar5 != lVar11);
    lVar5 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  puVar6 = PTR_PTR_1126b1010;
  _objc_alloc(PTR_PTR_1126b1010);
  func_0x00010c02ec80();
  func_0x00010c1eb220();
  func_0x00010c1d86a0(puVar6);
  func_0x00010c1b2a20(puVar6);
  puVar7 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c21e6e0(puVar6);
  _objc_release(puVar7);
  puVar7 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c1a47a0(puVar6);
  _objc_release(puVar7);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x000105bddfd4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0a20(puVar6);
  _objc_release(uVar2);
  puVar7 = puVar6;
  func_0x00010c271d80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be476c0(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar3 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 105b86afc; end: 105b86b13;  */

void FUN_105b86afc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 105b86b14; end: 105b86b23; -[SCFriendsFeedViewController preparePanningStateWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf187d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127311c0),
             PTR_s_beginPanningCellWithIdentifier__1125a3b98);
  return;
}



/* Entry: 105b86b24; end: 105b86b33; -[SCFriendsFeedViewController isPlayingSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105b86b24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112731378);
}



/* Entry: 105b86b34; end: 105b86b93; -[SCFriendsFeedViewController isPlayingStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105b86b34(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11273137c);
  func_0x00010c07ab40();
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_1 + _DAT_112731170) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bec4390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__storiesCarouselIsPresenting_11258ea88);
      return param_1;
    }
    lVar2 = 0;
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}



/* Entry: 105b86b94; end: 105b86bcb; -[SCFriendsFeedViewController isPlayingSnapOrStory] */

ulong FUN_105b86b94(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c07a4a0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c07a530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isPlayingStory_1125fc358);
  return param_1;
}



/* Entry: 105b86bcc; end: 105b86c4b; -[SCFriendsFeedViewController messageActionMenuOpenActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86bcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112731380;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c2c30;
    _objc_alloc();
    func_0x00010c0484a0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1e1580(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105b86c4c; end: 105b86cf7; -[SCFriendsFeedViewController cardContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86c4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010c0834c0();
  if ((int)lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = (long)_DAT_112731384;
    lVar3 = *(long *)(param_1 + lVar4);
    if (lVar3 == 0) {
      puVar1 = PTR_PTR_1126c2c38;
      _objc_alloc();
      lVar3 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c014d40(puVar1,param_2,1);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar1;
      _objc_release(uVar2);
      _objc_release(lVar3);
      func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar4),param_2,0x12);
      lVar3 = *(long *)(param_1 + lVar4);
    }
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105b86cf8; end: 105b86d03; -[SCFriendsFeedViewController pushStartChatView] */

void FUN_105b86cf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be84e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__pushStartChatViewWithCreateButt_11257ed20,1,0);
  return;
}



/* Entry: 105b86d04; end: 105b86e83; -[SCFriendsFeedViewController _pushStartChatViewWithCreateButtonType:communityId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86d04(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be82d80();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126b27d8;
    func_0x00010c0d8660(PTR_PTR_1126b27d8);
    puVar3 = puVar2;
    if (param_3 == 2) {
      puVar3 = PTR_PTR_1126b27d8;
      func_0x00010c0d8980(PTR_PTR_1126b27d8);
      _objc_release(puVar2);
    }
    lVar7 = (long)_DAT_112730fa0;
    lVar4 = *(long *)(param_1 + lVar7);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    lVar4 = param_4;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      puVar6 = PTR_PTR_1126b4370;
      _objc_alloc(PTR_PTR_1126b4370);
      func_0x00010c056d00();
      uVar5 = *(undefined8 *)(param_1 + lVar7);
    }
    else {
      puVar6 = PTR_PTR_1126b1448;
      _objc_alloc(PTR_PTR_1126b1448);
      uVar5 = 0x16;
      func_0x00010bc9107c(0x16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056800(puVar6,param_2,puVar2,param_1,param_4,uVar5);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + (long)_DAT_1127310d8);
    }
    func_0x00010bf9d620(uVar5,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b86e84; end: 105b86eef; -[SCFriendsFeedViewController lazyLoadIfViewDidFullyAppearForTheFirstTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86e84(long param_1)

{
  if (((*(byte *)(param_1 + _DAT_112731388) & 1) == 0) &&
     ((*(byte *)(param_1 + _DAT_11273138c) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112731388) = 1;
    if (*(long *)(param_1 + _DAT_1127312dc) == 0) {
      func_0x00010bfef720(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bec7dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeToMoreUnreadShortcutsO_11258f918)
    ;
    return;
  }
  return;
}



/* Entry: 105b86ef0; end: 105b86f47; -[SCFriendsFeedViewController playbackScopeWillBeginPresenting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b86ef0(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + _DAT_112731378) = 1;
  func_0x00010bea6760(param_1,param_2,1);
  func_0x00010bfa3b00(*(undefined8 *)(param_1 + _DAT_112731220));
  func_0x00010c285f20(*(undefined8 *)(param_1 + _DAT_112731204));
                    /* WARNING: Could not recover jumptable at 0x00010bed8a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFriendsFeedVisibleCellsWi_112593c28,0)
  ;
  return;
}



/* Entry: 105b86f48; end: 105b86f4b; -[SCFriendsFeedViewController playbackScopeDidFinishPresenting:] */

void FUN_105b86f48(void)

{
  return;
}



/* Entry: 105b86f4c; end: 105b870b3; -[SCFriendsFeedViewController playbackScopeWillBeginDismissing:mediaId:transitionAnimator:] */

void FUN_105b86f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_9);
  func_0x00010bf50280(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0ebc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar1 = PTR_PTR_1126c2c40;
  _objc_opt_class(PTR_PTR_1126c2c40);
  uVar2 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar1);
  uVar3 = param_5;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_5);
  uVar2 = uVar3;
  func_0x00010bfa3900(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bfa3ce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c16f460(param_9);
  func_0x00010bf20c00(uVar3);
  uVar4 = param_9;
  func_0x00010c0f3c60(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar3);
  func_0x00010c16f4e0(param_9);
  _objc_release(param_9);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105b870b4; end: 105b870b7; -[SCFriendsFeedViewController playbackScopeDidCancelDismissing:] */

void FUN_105b870b4(void)

{
  return;
}



/* Entry: 105b870b8; end: 105b870bb; -[SCFriendsFeedViewController playbackScopeDidFinishDismissing:] */

void FUN_105b870b8(void)

{
  return;
}



/* Entry: 105b870bc; end: 105b87193; -[SCFriendsFeedViewController playbackScopeDidTearDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b870bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731390);
  *(undefined8 *)(param_1 + _DAT_112731390) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_112731378) = 0;
  func_0x00010be6dce0(param_1);
  lVar4 = (long)_DAT_112730f28;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127310dc);
    puVar3 = PTR_PTR_1126c2c48;
    func_0x00010c243da0(PTR_PTR_1126c2c48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar3);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731394);
    *(undefined8 *)(param_1 + _DAT_112731394) = 0;
    _objc_release(uVar1);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed8a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFriendsFeedVisibleCellsWi_112593c28,1)
  ;
  return;
}



/* Entry: 105b87194; end: 105b872fb; -[SCFriendsFeedViewController _operaPresenterDidDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b87194(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  func_0x00010bea6760(param_1,param_2,0);
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1835e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112730f00);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b6a0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112730ed8);
  lVar5 = param_1;
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar4,param_2,lVar5);
  func_0x00010bfa3a80(*(undefined8 *)(param_1 + _DAT_112731220));
  lVar5 = *(long *)(param_1 + _DAT_112731204);
  func_0x00010c285ee0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be53c20();
  lVar7 = (long)_DAT_112730f28;
  lVar6 = *(long *)(lVar5 + lVar7);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar4 = *(undefined8 *)(lVar5 + _DAT_112731394);
    *(undefined8 *)(lVar5 + _DAT_112731394) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(lVar5 + _DAT_112731390);
    *(undefined8 *)(lVar5 + _DAT_112731390) = 0;
    _objc_release(uVar4);
    func_0x00010c12e1c0(*(undefined8 *)(lVar5 + lVar7));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105b872fc; end: 105b87387; -[SCFriendsFeedViewController playbackScopeUnableToStartPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b872fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010be53c20(param_1,param_2,&PTR____CFConstantStringClassReference_110e20338);
  lVar3 = (long)_DAT_112730f28;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112731394);
    *(undefined8 *)(param_1 + _DAT_112731394) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112731390);
    *(undefined8 *)(param_1 + _DAT_112731390) = 0;
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105b87388; end: 105b873d3; -[SCFriendsFeedViewController playbackScopeUnableToContinuePresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b87388(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731394);
  puVar1 = PTR_PTR_1126c2c50;
  func_0x00010bf82f40(PTR_PTR_1126c2c50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b873d4; end: 105b876d3; -[SCFriendsFeedViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b873d4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_7);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11273134c);
  _objc_retain(uVar4);
  func_0x00010bf4cdc0(uVar4);
  dVar9 = param_2;
  if ((*(byte *)(param_5 + _DAT_1127310d4) & 1) == 0) {
    *(undefined1 *)(param_5 + _DAT_1127310d4) = 1;
    uVar1 = *(undefined8 *)(param_5 + _DAT_112730f7c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e56c0();
    _objc_release(uVar1);
  }
  func_0x00010bf4cdc0(uVar4);
  dVar7 = dVar9;
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar10 = -param_1;
  lVar2 = param_5;
  func_0x00010c14c8e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar8 = 0.0;
  if (dVar9 <= dVar10) {
    dVar8 = dVar7;
    func_0x00010bf4cdc0(uVar4);
    dVar8 = -dVar8;
  }
  func_0x00010bc8525c(param_1,dVar7,param_3,param_4,dVar8);
  lVar6 = param_5;
  func_0x00010c14c8e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,dVar7,param_3,param_4);
  _objc_release(lVar6);
  _objc_release(lVar2);
  func_0x00010c285dc0(param_5);
  func_0x00010c1b8740(param_5);
  uVar3 = *(ulong *)(param_5 + _DAT_11273135c);
  if ((uVar3 != 0) && (func_0x00010c074c20(), (uVar3 & 1) == 0)) {
    func_0x00010c2857e0(param_5);
  }
  func_0x00010bf4cdc0(param_7);
  dVar9 = dVar7;
  func_0x00010bf4c7c0(param_7);
  dVar8 = 1.0;
  if (dVar7 <= -param_2) {
    dVar8 = 0.0;
  }
  lVar2 = param_5;
  func_0x00010c152200(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0();
  _objc_release(lVar2);
  func_0x00010bf4cdc0(param_7);
  dVar7 = dVar9;
  func_0x00010bf4c7c0(param_7);
  dVar9 = dVar9 + dVar8;
  lVar2 = param_5;
  func_0x00010be84800(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar8 = -dVar9;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  func_0x00010c1a7d00(dVar8);
  lVar6 = (long)_DAT_112731354;
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  uVar1 = param_7;
  func_0x00010c070ea0(param_7);
  dVar8 = dVar9;
  func_0x00010bfd2580(uVar5,param_6,uVar1);
  if (dVar9 < 0.0) {
    uVar3 = *(ulong *)(param_5 + lVar6);
    func_0x00010bf77fc0();
    if ((uVar3 & 1) == 0) {
      func_0x00010be08380(param_5,param_6,*(undefined8 *)(param_5 + _DAT_112731360));
    }
  }
  if ((*(byte *)(param_5 + _DAT_112731180) & 1) == 0) {
    func_0x00010bf20c00(param_7);
    _CGRectGetHeight();
    dVar10 = dVar8;
    func_0x00010c08ac40(param_5);
    func_0x00010bf4cdc0(param_7);
    if ((dVar9 <= dVar8) || (dVar10 - dVar7 <= 20.0)) {
      if ((dVar9 <= dVar8) || (dVar10 - dVar7 < 0.0)) {
        func_0x00010be35560(param_5,param_6,1);
      }
    }
    else {
      func_0x00010beb8300(param_5,param_6,1);
    }
  }
  _objc_release(lVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105b876d4; end: 105b8791b; -[SCFriendsFeedViewController scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b876d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_5);
  lVar2 = *(long *)(param_3 + _DAT_112731354);
  func_0x00010bfd2400();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    if ((*(byte *)(param_3 + _DAT_112731398) & 1) != 0) goto LAB_105b87848;
    iVar1 = (int)*(undefined8 *)(param_3 + _DAT_112731350);
    func_0x00010c291ce0();
    if (iVar1 == 0) goto LAB_105b87848;
  }
  else {
    lVar6 = lVar2;
    func_0x00010c26a0a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c26a0c0(lVar2);
    func_0x00010bf7b080(param_3,param_4,lVar6,lVar3);
    _objc_release(lVar6);
    lVar6 = lVar2;
    func_0x00010c26a0c0();
    if (lVar6 != 0) {
      lVar6 = param_3;
      func_0x00010be22940(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c2c20;
      lVar3 = lVar2;
      func_0x00010c26a0c0(lVar2);
      func_0x00010c11b7e0(puVar4,param_4,lVar6,lVar3,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be07c20(param_3,param_4,puVar4);
      _objc_release(puVar4);
      _objc_release(lVar6);
      goto LAB_105b87848;
    }
    uVar5 = *(undefined8 *)(param_3 + _DAT_112731190);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c2c58;
    func_0x00010c068340(PTR_PTR_1126c2c58,param_4,0x10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5,param_4,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar5);
  }
  func_0x00010bf78dc0(param_3);
LAB_105b87848:
  func_0x00010bf4cdc0(param_5);
  puVar4 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08ac40(param_3);
  lVar6 = param_3;
  func_0x00010bfc8720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e40(param_1,param_2,puVar4,param_4,lVar6);
  _objc_release(lVar6);
  _objc_release(puVar4);
  if ((param_6 & 1) == 0) {
    func_0x00010c152ac0(param_3,param_4,param_5);
  }
  lVar6 = (long)_DAT_1127311bc;
  iVar1 = (int)*(undefined8 *)(param_3 + lVar6);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar5 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfba260();
    _objc_release(uVar5);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105b8791c; end: 105b87a0f; -[SCFriendsFeedViewController scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8791c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  func_0x00010be87160(param_3);
  func_0x00010bf4cdc0(param_5);
  _objc_release(param_5);
  func_0x00010c1b9100(param_2,param_3);
  lVar3 = (long)_DAT_112731354;
  iVar1 = (int)*(undefined8 *)(param_3 + lVar3);
  func_0x00010c06b700();
  if ((iVar1 != 0) && (*(char *)(param_3 + _DAT_112731398) == '\x01')) {
    *(undefined1 *)(param_3 + _DAT_112731398) = 0;
    func_0x00010bf2ed80(*(undefined8 *)(param_3 + lVar3));
    uVar2 = *(undefined8 *)(param_3 + _DAT_11273139c);
    *(undefined8 *)(param_3 + _DAT_11273139c) = 0;
    _objc_release(uVar2);
  }
  func_0x00010c109640(*(undefined8 *)(param_3 + lVar3));
  func_0x00010bf2f180(param_3);
  lVar3 = (long)_DAT_1127311bc;
  iVar1 = (int)*(undefined8 *)(param_3 + lVar3);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfba260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105b87a10; end: 105b87a13; -[SCFriendsFeedViewController scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

void FUN_105b87a10(void)

{
  return;
}



/* Entry: 105b87a14; end: 105b87a17; -[SCFriendsFeedViewController scrollViewDidEndDecelerating:] */

void FUN_105b87a14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollViewDidEndScrolling__1126324d0);
  return;
}



/* Entry: 105b87a18; end: 105b87c27; -[SCFriendsFeedViewController scrollViewDidEndScrolling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b87a18(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  _objc_retain(param_5);
  func_0x00010c18d960(*(undefined8 *)(param_3 + _DAT_112731354),param_4,0);
  puVar1 = PTR_PTR_1126c2c20;
  func_0x00010c11b7c0(PTR_PTR_1126c2c20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07c20(param_3,param_4,puVar1);
  _objc_release(puVar1);
  if ((*(byte *)(param_3 + _DAT_112731398) & 1) != 0) goto LAB_105b87c08;
  uVar2 = *(undefined8 *)(param_3 + _DAT_112730f24);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfabde0();
  dVar3 = param_1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + _DAT_1127312dc);
  func_0x00010bfe01e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(uVar2);
  if (SUB84(param_1,0) != -1.0) {
    func_0x00010bf4cdc0(param_5);
    dVar4 = dVar3 * (double)SUB84(param_1,0);
    if ((param_2 <= dVar4) ||
       (func_0x00010bf4cdc0(param_5), puVar1 = PTR__OBJC_CLASS___UIView_1126aec20, dVar3 <= param_2)
       ) {
      func_0x00010bf4cdc0(param_5);
      if ((dVar4 < param_2) ||
         (func_0x00010bf4cdc0(param_5), puVar1 = PTR__OBJC_CLASS___UIView_1126aec20, param_2 < 0.0))
      goto LAB_105b87bfc;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      uStack_88 = 0x105b87c3c;
      puStack_80 = &UNK_110842e18;
      _objc_retain(param_5);
      uStack_78 = param_5;
      func_0x00010bf03400(0x3fc0a3d70a3d70a4,puVar1,param_4,&puStack_98);
      uVar2 = uStack_78;
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105b87c28;
      puStack_58 = &UNK_110848c48;
      _objc_retain(param_5);
      uStack_50 = param_5;
      dStack_48 = dVar3;
      func_0x00010bf03400(0x3fc0a3d70a3d70a4,puVar1,param_4,&puStack_70);
      uVar2 = uStack_50;
    }
    _objc_release(uVar2);
  }
LAB_105b87bfc:
  func_0x00010bed8a00(param_3,param_4,1);
LAB_105b87c08:
  _objc_release(param_5);
  return;
}



/* Entry: 105b87c28; end: 105b87c4b;  */

void FUN_105b87c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 105b87c4c; end: 105b87ca7; -[SCFriendsFeedViewController scrollViewDidEndScrollingAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b87c4c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127311bc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfba260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105b87ca8; end: 105b87d03; -[SCFriendsFeedViewController scrollViewDidScrollToTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b87ca8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127311bc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfba260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}


