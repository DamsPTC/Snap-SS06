/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104de8f50; end: 104de8f63; -[SCCommerceProductPageBusinessLogic setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de8f50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127133a8,param_3);
  return;
}



/* Entry: 104de8f64; end: 104de913f; -[SCCommerceProductPageBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de8f64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127133a8);
  _objc_storeStrong(param_1 + _DAT_112713400,0);
  _objc_storeStrong(param_1 + _DAT_11271340c,0);
  _objc_storeStrong(param_1 + _DAT_112713418,0);
  _objc_storeStrong(param_1 + _DAT_112713424,0);
  _objc_storeStrong(param_1 + _DAT_112713420,0);
  _objc_storeStrong(param_1 + _DAT_11271341c,0);
  _objc_storeStrong(param_1 + _DAT_1127133f0,0);
  _objc_storeStrong(param_1 + _DAT_1127133f8,0);
  _objc_storeStrong(param_1 + _DAT_1127133f4,0);
  _objc_storeStrong(param_1 + _DAT_112713414,0);
  _objc_storeStrong(param_1 + _DAT_1127133e8,0);
  _objc_storeStrong(param_1 + _DAT_112713410,0);
  _objc_storeStrong(param_1 + _DAT_112713428,0);
  _objc_storeStrong(param_1 + _DAT_1127133fc,0);
  _objc_storeStrong(param_1 + _DAT_112713404,0);
  _objc_storeStrong(param_1 + _DAT_1127133ec,0);
  _objc_storeStrong(param_1 + _DAT_1127133e4,0);
  _objc_storeStrong(param_1 + _DAT_1127133bc,0);
  _objc_storeStrong(param_1 + _DAT_1127133a0,0);
  _objc_storeStrong(param_1 + _DAT_1127133d4,0);
  _objc_storeStrong(param_1 + _DAT_1127133cc,0);
  _objc_storeStrong(param_1 + _DAT_1127133c4,0);
  _objc_storeStrong(param_1 + _DAT_1127133c0,0);
  _objc_storeStrong(param_1 + _DAT_1127133b8,0);
  _objc_storeStrong(param_1 + _DAT_1127133b4,0);
  _objc_storeStrong(param_1 + _DAT_1127133b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127133a4,0);
  return;
}



/* Entry: 104de9140; end: 104de947b; -[SCCommerceProductPageViewController initWithHarness:imageSourceProvider:imageFetchingService:eventLogger:commerceTooltips:commerceIconProvider:compositeImageFetcher:heroAssetHelper:fitFinderCellScopeExposer:queryContext:productId:storeId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104de9140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e43e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR_PTR_1126af080;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713434);
    *(undefined **)((long)puVar1 + (long)_DAT_112713434) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112713438;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11271343c;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112713440;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112713444) = 0;
    puVar2 = PTR_PTR_1126b0548;
    _objc_alloc();
    func_0x00010c010b80();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713448);
    *(undefined **)((long)puVar1 + (long)_DAT_112713448) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11271344c;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112713450;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112713454;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112713458;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11271345c;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112713460;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713464);
    *(undefined **)((long)puVar1 + (long)_DAT_112713464) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112713468;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271346c) = param_13;
    lVar4 = (long)_DAT_112713470;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104de947c; end: 104de97ff; -[SCCommerceProductPageViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de947c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126e43e8;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_viewDidLoad_112684cd8);
  *(undefined8 *)(param_1 + _DAT_112713474) = 0xe;
  func_0x00010be39840(param_1);
  lVar9 = (long)_DAT_112713478;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010be39b40(param_1);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_a8 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  uStack_b8 = uVar2;
  uStack_88 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_c8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  uStack_e0 = uVar3;
  uStack_80 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_e8 = uVar4;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  uStack_78 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(lStack_d0);
  _objc_release(lStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  _objc_release(lStack_b0);
  _objc_release(lStack_a0);
  _objc_release(uStack_a8);
  func_0x00010be39d40(param_1);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar8);
  lVar1 = param_1;
  func_0x00010bec1580();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_104de9800;
  puStack_118 = PTR_PTR_1126e43e8;
  lStack_120 = lVar1;
  puStack_110 = puVar8;
  lStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_120,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bea8340(lVar1);
  *(undefined8 *)(lVar1 + _DAT_11271347c) = 0xffffffffffffffff;
  func_0x00010c128c80(lVar1);
  return;
}



/* Entry: 104de9800; end: 104de985f; -[SCCommerceProductPageViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de9800(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e43e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bea8340(param_1);
  *(undefined8 *)(param_1 + _DAT_11271347c) = 0xffffffffffffffff;
  func_0x00010c128c80(param_1);
  return;
}



/* Entry: 104de9860; end: 104de98b7; -[SCCommerceProductPageViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de9860(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e43e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c28b440(*(undefined8 *)(param_1 + _DAT_112713448));
  return;
}



/* Entry: 104de98b8; end: 104de9b53; -[SCCommerceProductPageViewController _initErrorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de98b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b04e8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar15 = (long)_DAT_112713480;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  lVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar12);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  uStack_80 = uVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_78 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493e0(0x3fe999999999999a,uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar15),param_2,param_1);
  lVar12 = *(long *)(param_1 + lVar15);
  func_0x00010c1a7f60(lVar12,param_2,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c82c0(0x4024000000000000);
  puVar11 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar14 = (long)_DAT_112713478;
  uVar13 = *(undefined8 *)(lVar12 + lVar14);
  *(undefined **)(lVar12 + lVar14) = puVar11;
  _objc_release(uVar13);
  func_0x00010c18b5e0(*(undefined8 *)(lVar12 + lVar14),param_2,lVar12);
  func_0x00010c189840(*(undefined8 *)(lVar12 + lVar14),param_2,lVar12);
  func_0x00010c181f80(0,0,0x4018000000000000,0,*(undefined8 *)(lVar12 + lVar14));
  func_0x00010c160fc0(*(undefined8 *)(lVar12 + lVar14),param_2,
                      &PTR____CFConstantStringClassReference_110db4058);
  func_0x00010be89340(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104de9b54; end: 104de9c17; -[SCCommerceProductPageViewController _initCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de9b54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c82c0(0x4024000000000000);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112713478;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c181f80(0,0,0x4018000000000000,0,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                      &PTR____CFConstantStringClassReference_110db4058);
  func_0x00010be89340(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104de9c18; end: 104dea09b; -[SCCommerceProductPageViewController _initHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104de9c18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_112713434;
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010c199da0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c1f7d00(*(undefined8 *)(param_1 + lVar17));
  _objc_initWeak(auStack_90,param_1);
  puVar1 = PTR_PTR_1126b0930;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar14 = (long)_DAT_112713484;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar13);
  func_0x00010c1a97a0(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c16eb80(*(undefined8 *)(param_1 + lVar14));
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010c18de40(*(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
  puVar3 = puVar2;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1020(puVar4);
  func_0x00010bffa280(0x3ff0000000000000,puVar2);
  func_0x00010bdc2640();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112713488;
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar13);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar16));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar15 = (long)_DAT_11271348c;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar13);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar15));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar15));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c2194c0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c1b9b80(0,0x4020000000000000,0,0x4020000000000000,*(undefined8 *)(param_1 + lVar15));
  func_0x00010c1b9ba0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c1887e0(0x4028000000000000,*(undefined8 *)(param_1 + lVar15));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  uStack_88 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar9;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(uVar5);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar14));
  _objc_destroyWeak(auStack_98);
  puVar12 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar12);
  puVar12 = puVar12 + 0x20;
  _objc_loadWeakRetained(puVar12);
  func_0x00010be00c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 104dea09c; end: 104dea0c7;  */

void FUN_104dea09c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dea0c8; end: 104dea1cf; -[SCCommerceProductPageViewController _showError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea0c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  *(undefined8 *)(param_1 + _DAT_112713474) = 9;
  puVar1 = PTR_PTR_1126b04e0;
  _objc_alloc(PTR_PTR_1126b04e0);
  puVar2 = puVar1;
  func_0x000106d78760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000106d78778();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000106d78730();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefa60(puVar1,param_2,puVar2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112713478),param_2,1);
  lVar6 = (long)_DAT_112713480;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c1a7f60(uVar5,param_2,0);
  func_0x000106d78748();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(*(undefined8 *)(param_1 + _DAT_112713434),param_2,uVar5);
  _objc_release(uVar5);
  func_0x00010c103e20(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104dea1d0; end: 104dea20f; -[SCCommerceProductPageViewController _hideError] */

/* WARNING: Possible PIC construction at 0x000104dea1f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104dea1f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea1d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112713478),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 104dea210; end: 104dea3c3; -[SCCommerceProductPageViewController _registerCollectionViewCells] */

/* WARNING: Possible PIC construction at 0x000104dea24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dea270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dea294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dea2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dea2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dea300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dea324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dea348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dea36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dea390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104dea370) */
/* WARNING: Removing unreachable block (ram,0x000104dea34c) */
/* WARNING: Removing unreachable block (ram,0x000104dea328) */
/* WARNING: Removing unreachable block (ram,0x000104dea304) */
/* WARNING: Removing unreachable block (ram,0x000104dea2e0) */
/* WARNING: Removing unreachable block (ram,0x000104dea2bc) */
/* WARNING: Removing unreachable block (ram,0x000104dea298) */
/* WARNING: Removing unreachable block (ram,0x000104dea274) */
/* WARNING: Removing unreachable block (ram,0x000104dea250) */
/* WARNING: Removing unreachable block (ram,0x000104dea394) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea210(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713478);
  puVar1 = PTR_PTR_1126b0938;
  _objc_opt_class(PTR_PTR_1126b0938);
                    /* WARNING: Could not recover jumptable at 0x00010c126010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_registerClass_forCellWithReuseId_112627220,puVar1,
             &PTR____CFConstantStringClassReference_110db3ef8);
  return;
}



/* Entry: 104dea3c4; end: 104dea3db; -[SCCommerceProductPageViewController closeHeroImageSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea3c4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112713458) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be54930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logHeroSessionClose_112572be8);
    return;
  }
  return;
}



/* Entry: 104dea3dc; end: 104dea44b; -[SCCommerceProductPageViewController descriptionCellToggleButtonWasTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea3dc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  *(byte *)(param_1 + _DAT_112713444) = *(byte *)(param_1 + _DAT_112713444) ^ 1;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104dea44c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}



/* Entry: 104dea44c; end: 104dea50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea44c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713478);
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(puVar1 + _DAT_112713438);
  func_0x00010c150e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0998;
  func_0x00010beee160(PTR_PTR_1126b0998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104dea510; end: 104dea573; -[SCCommerceProductPageViewController shopButtonWasTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  func_0x00010beee160(PTR_PTR_1126b0998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dea574; end: 104dea5d7; -[SCCommerceProductPageViewController sharingButtonWasTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea574(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  func_0x00010c22a800(PTR_PTR_1126b0998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dea5d8; end: 104dea643; -[SCCommerceProductPageViewController favoritesHeartButtonWasTappedWithFavorited:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea5d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  func_0x00010bfa1420(PTR_PTR_1126b0998,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dea644; end: 104dea6df; -[SCCommerceProductPageViewController favoritesHeartButtonWasTappedForProductId:productImage:currentHeartState:trackingId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713438);
  _objc_retain(param_4);
  func_0x00010c150e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0998;
  func_0x00010bfa1400(PTR_PTR_1126b0998,param_2,param_3,param_5 == 1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104dea6e0; end: 104dea6e7; -[SCCommerceProductPageViewController pageViewName] */

undefined8 FUN_104dea6e0(void)

{
  return 0x33;
}



/* Entry: 104dea6e8; end: 104dea7b7; -[SCCommerceProductPageViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea6e8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104dea7b8; end: 104dea7ff;  */

void FUN_104dea7b8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dea800; end: 104dea9db; -[SCCommerceProductPageViewController _updateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dea800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713490);
  func_0x00010bf51e00(uVar2);
  FUN_104de33f8(&uStack_78,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_80,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713478);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_104dea9dc;
  puStack_c0 = &UNK_110850e18;
  _objc_copyWeak(auStack_b0,auStack_80);
  _objc_retain(param_3);
  uVar1 = uStack_58;
  uStack_a0 = uStack_70;
  uStack_a8 = uStack_78;
  uStack_90 = uStack_60;
  uStack_98 = uStack_68;
  uStack_b8 = param_3;
  _objc_retain(uStack_58);
  uStack_88 = uVar1;
  _objc_copyWeak(auStack_108,auStack_80);
  uVar1 = uStack_58;
  uStack_f8 = uStack_70;
  uStack_100 = uStack_78;
  uStack_e8 = uStack_60;
  uStack_f0 = uStack_68;
  _objc_retain(uStack_58);
  uStack_e0 = uVar1;
  func_0x00010c0f8420(uVar2);
  _objc_release(uStack_e0);
  _objc_destroyWeak(auStack_108);
  _objc_release(uStack_88);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104dea9dc; end: 104deaa9f;  */

void FUN_104dea9dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar3);
  uStack_40 = uVar3;
  if (lVar1 == 0) {
    _objc_release(uVar3);
  }
  else {
    func_0x00010be714c0(lVar1,param_2,uVar2,&uStack_60);
  }
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uStack_88 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = *(undefined8 *)(param_1 + 0x48);
  uStack_80 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar2);
  uStack_70 = uVar2;
  if (lVar1 == 0) {
    _objc_release(uVar2);
  }
  else {
    func_0x00010be72520(lVar1,param_2,&uStack_90);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104deaaa0; end: 104deabff;  */

void FUN_104deaaa0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}



/* Entry: 104deac00; end: 104deb08f; -[SCCommerceProductPageViewController _performAnimatedUpdatesWithViewModel:diff:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104deac00(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  lVar12 = param_3;
  func_0x00010bf32ea0();
  uVar13 = 0xe;
  if (lVar12 != -1) {
    uVar13 = 0xc;
  }
  *(undefined8 *)(param_1 + _DAT_112713474) = uVar13;
  lVar2 = param_1;
  func_0x00010beb9820();
  lVar12 = (long)_DAT_112713490;
  lVar3 = *(long *)(param_1 + lVar12);
  FUN_104de3c74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c2a4e40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf04920();
  _objc_release(uVar4);
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  *(long *)(param_1 + lVar12) = param_3;
  _objc_release(uVar4);
  lVar5 = param_1;
  func_0x00010beb9820();
  lVar6 = *(long *)(param_1 + lVar12);
  FUN_104de3c74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c2a4e40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf04920();
  _objc_release(uVar7);
  puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar12 = *(long *)(param_4 + 0x10);
  if (lVar12 < *(long *)(param_4 + 0x18)) {
    do {
      lVar12 = lVar12 + 1;
      puVar10 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar12,5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8,param_2,puVar10);
      _objc_release(puVar10);
    } while (lVar12 < *(long *)(param_4 + 0x18));
  }
  else if (*(long *)(param_4 + 0x18) < lVar12) {
    do {
      puVar10 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar12,5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9,param_2,puVar10);
      lVar12 = lVar12 + -1;
      _objc_release(puVar10);
    } while (*(long *)(param_4 + 0x18) < lVar12);
  }
  if ((int)lVar2 != 0) {
    puVar10 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar9,param_2,puVar10);
    _objc_release(puVar10);
  }
  if ((int)lVar5 != 0) {
    puVar10 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8,param_2,puVar10);
    _objc_release(puVar10);
  }
  if (*(char *)(param_4 + 7) == '\x01') {
    puVar10 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if ((lVar3 == 0) && (lVar6 != 0)) {
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8,param_2,puVar10);
    }
    else {
      if ((lVar3 == 0) || (lVar6 != 0)) goto LAB_104deaed8;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9,param_2,puVar10);
    }
    _objc_release(puVar10);
  }
LAB_104deaed8:
  if (*(char *)(param_4 + 8) == '\x01') {
    uVar1 = (uint)uVar13 ^ 1;
    puVar10 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if ((uVar1 & (uint)uVar4) == 1) {
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8,param_2,puVar10);
    }
    else {
      if (((uVar1 | (uint)uVar4) & 1) != 0) goto LAB_104deaf64;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9,param_2,puVar10);
    }
    _objc_release(puVar10);
  }
LAB_104deaf64:
  puVar10 = puVar9;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf529e0();
  _objc_release(puVar10);
  if (puVar11 != (undefined *)0x0) {
    uVar13 = *(undefined8 *)(param_1 + _DAT_112713478);
    puVar10 = puVar9;
    func_0x00010bf00560(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c100(uVar13,param_2,puVar10);
    _objc_release(puVar10);
  }
  puVar10 = puVar8;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf529e0();
  _objc_release(puVar10);
  if (puVar11 != (undefined *)0x0) {
    uVar13 = *(undefined8 *)(param_1 + _DAT_112713478);
    puVar10 = puVar8;
    func_0x00010bf00560(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066a40(uVar13,param_2,puVar10);
    _objc_release(puVar10);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(*(undefined8 *)(param_4 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104deb090; end: 104deb367; -[SCCommerceProductPageViewController _performReloadUpdatesWithDiff:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104deb090(long param_1,undefined8 param_2,char *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_opt_new();
  if (*param_3 == '\x01') {
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  if (param_3[1] == '\x01') {
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  if (param_3[2] == '\x01') {
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  if (param_3[4] == '\x01') {
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  uVar9 = 0;
  while( true ) {
    uVar4 = *(ulong *)(param_3 + 0x20);
    func_0x00010bf529e0();
    if (uVar4 <= uVar9) break;
    lVar5 = *(long *)(param_3 + 0x20);
    func_0x00010c0dfd40(lVar5,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c067fc0();
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bee99e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar7 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar6 + 1,5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar3);
      _objc_release(puVar3);
    }
    uVar9 = uVar9 + 1;
  }
  if ((param_3[5] & 1U) != 0) {
    func_0x00010bef92c0(puVar2,param_2,1);
  }
  if (param_3[3] == '\x01') {
    func_0x00010bef92c0(puVar2,param_2,3);
  }
  puVar3 = puVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  if (puVar8 != (undefined *)0x0) {
    uVar10 = *(undefined8 *)(param_1 + _DAT_112713478);
    puVar3 = puVar1;
    func_0x00010bf00560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128de0(uVar10,param_2,puVar3);
    _objc_release(puVar3);
  }
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c128fa0(*(undefined8 *)(param_1 + _DAT_112713478),param_2,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 104deb368; end: 104deb4eb; -[SCCommerceProductPageViewController _finishReloadUpdatesWithDiff:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104deb368(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112713490;
  if (*(char *)(param_3 + 6) == '\x01') {
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c0fbc60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar5 != 0) {
      func_0x00010be7d460(param_1);
    }
  }
  lVar3 = *(long *)(param_1 + lVar6);
  func_0x00010bfbd260();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bfe9060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  _objc_release(lVar3);
  if (lVar2 != 0) {
    func_0x00010bea34c0(param_1);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfe0000(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112713434;
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
  _objc_release(uVar4);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c236000();
  uVar4 = 1;
  if (iVar1 != 0) {
    uVar4 = 2;
  }
  func_0x00010c18f820(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c2367e0();
  if (iVar1 != 0) {
    lVar5 = (long)_DAT_112713484;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,0);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf32ea0(uVar4);
    func_0x00010c16eb80(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
  }
  lVar6 = *(long *)(param_1 + lVar6);
  func_0x00010c09ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    func_0x00010be35700(param_1);
  }
  else {
    func_0x00010beb8e60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 104deb4ec; end: 104deb54f; -[SCCommerceProductPageViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104deb4ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  func_0x00010bf13820(PTR_PTR_1126b0998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104deb550; end: 104deb5b3; -[SCCommerceProductPageViewController _didTapCartButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104deb550(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  func_0x00010bf32e40(PTR_PTR_1126b0998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104deb5b4; end: 104deb737; -[SCCommerceProductPageViewController _didTapReportButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104deb5b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_b8 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104deb738;
  uStack_40 = 0x104deb748;
  uStack_38 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104deb750;
  puStack_70 = &UNK_11084aef8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104deb788;
  puStack_98 = &UNK_110850248;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x104deb7c0;
  puStack_c0 = &UNK_1108502d8;
  puStack_90 = puStack_b8;
  puStack_68 = puStack_b8;
  puStack_58 = puStack_b8;
  func_0x00010c0bc680(*(undefined8 *)(param_1 + _DAT_112713468),param_2,0,0,0,0,&puStack_88,
                      &puStack_b0,0,0,0,&puStack_d8,0,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  func_0x00010c1327a0(PTR_PTR_1126b0998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return;
}



/* Entry: 104deb738; end: 104deb74f;  */

void FUN_104deb738(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104deb750; end: 104deb7f7;  */

void FUN_104deb750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104deb7f8; end: 104debb7f; -[SCCommerceProductPageViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_104deb7f8(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  _objc_retain(param_9);
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010bddc2c0(param_5,param_6,param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_7);
  func_0x00010bf4c7c0(param_7);
  dVar6 = param_2;
  func_0x00010bf4c7c0(param_7);
  _objc_release(param_7);
  param_3 = param_3 - (param_2 + param_4);
  lVar3 = lVar1;
  func_0x00010c0720c0(lVar1,param_6,&PTR____CFConstantStringClassReference_110db3ef8);
  puVar2 = PTR_PTR_1126b0938;
  if (((int)lVar3 != 0) ||
     (lVar3 = lVar1,
     func_0x00010c0720c0(lVar1,param_6,&PTR____CFConstantStringClassReference_110db3f18),
     puVar2 = PTR_PTR_1126b0940, (int)lVar3 != 0)) goto LAB_104deb8b8;
  lVar3 = lVar1;
  func_0x00010c0720c0(lVar1,param_6,&PTR____CFConstantStringClassReference_110db3f38);
  puVar2 = PTR_PTR_1126b0948;
  if ((int)lVar3 == 0) {
    lVar3 = lVar1;
    func_0x00010c0720c0(lVar1,param_6,&PTR____CFConstantStringClassReference_110db3f58);
    puVar2 = PTR_PTR_1126b0950;
    if ((int)lVar3 == 0) {
      lVar3 = lVar1;
      func_0x00010c0720c0(lVar1,param_6,&PTR____CFConstantStringClassReference_110db3fd8);
      puVar2 = PTR_PTR_1126b0980;
      if ((int)lVar3 == 0) {
        lVar3 = lVar1;
        func_0x00010c0720c0(lVar1,param_6,&PTR____CFConstantStringClassReference_110db3f98);
        if ((int)lVar3 != 0) {
          lVar3 = param_5;
          func_0x00010bee99e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf529e0();
          _objc_release(lVar3);
          puVar2 = PTR_PTR_1126b0958;
          if (lVar4 != 0) goto LAB_104deb8b8;
        }
        lVar3 = lVar1;
        func_0x00010c0720c0(lVar1,param_6,&PTR____CFConstantStringClassReference_110db3f78);
        puVar2 = PTR_PTR_1126b0960;
        if ((int)lVar3 != 0) {
          dVar6 = 0.5;
          param_3 = (param_3 + -66.0) * 0.5;
          lVar3 = param_5;
          func_0x00010bee99e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf529e0();
          if (lVar4 == 0) {
            func_0x00010c23d740(param_3,puVar2,param_6,0);
          }
          else {
            func_0x00010bee99e0(param_5);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_9;
            func_0x00010c142240(param_9);
            lVar5 = param_5;
            func_0x00010c0dfd40(param_5,param_6,lVar4 + -1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23d740(param_3,puVar2,param_6,lVar5);
            _objc_release(lVar5);
            _objc_release(param_5);
          }
          goto LAB_104deb9b4;
        }
        lVar3 = lVar1;
        func_0x00010c0720c0(lVar1,param_6,&PTR____CFConstantStringClassReference_110db3fb8);
        puVar2 = PTR_PTR_1126b0968;
        if (((((int)lVar3 == 0) &&
             (lVar3 = lVar1,
             func_0x00010c0720c0(lVar1,param_6,&PTR____CFConstantStringClassReference_110db3ff8),
             puVar2 = PTR_PTR_1126b0970, (int)lVar3 == 0)) &&
            (lVar3 = lVar1,
            func_0x00010c0720c0(lVar1,param_6,&PTR____CFConstantStringClassReference_110db4018),
            puVar2 = PTR_PTR_1126b0978, (int)lVar3 == 0)) &&
           (lVar3 = lVar1,
           func_0x00010c0720c0(lVar1,param_6,&PTR____CFConstantStringClassReference_110db4038),
           puVar2 = PTR_PTR_1126b0988, (int)lVar3 == 0)) {
          param_3 = *(double *)PTR__CGSizeZero_110347620;
          dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
          goto LAB_104deb8c8;
        }
      }
LAB_104deb8b8:
      func_0x00010c23d460(param_3,puVar2);
      goto LAB_104deb8c8;
    }
    lVar3 = *(long *)(param_5 + _DAT_112713490);
    func_0x00010bf6e580(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d4a0(param_3,puVar2,param_6,lVar3,*(undefined1 *)(param_5 + _DAT_112713444));
  }
  else {
    lVar3 = *(long *)(param_5 + _DAT_112713490);
    func_0x00010c2714e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d480(param_3,puVar2,param_6,lVar3);
  }
LAB_104deb9b4:
  _objc_release(lVar3);
LAB_104deb8c8:
  _objc_release(lVar1);
  _objc_release(param_9);
  auVar7._8_8_ = dVar6;
  auVar7._0_8_ = param_3;
  return auVar7;
}



/* Entry: 104debb80; end: 104debb93; -[SCCommerceProductPageViewController collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_104debb80(void)

{
  long in_x4;
  undefined8 uVar1;
  
  uVar1 = 0;
  if (in_x4 != 1) {
    uVar1 = 0x4024000000000000;
  }
  return uVar1;
}



/* Entry: 104debb94; end: 104debb9b; -[SCCommerceProductPageViewController numberOfSectionsInCollectionView:] */

undefined8 FUN_104debb94(void)

{
  return 7;
}



/* Entry: 104debb9c; end: 104debd0b; -[SCCommerceProductPageViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104debb9c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_4 < 3) {
    if (param_4 == 0) {
      param_1 = 3;
      goto LAB_104debcf0;
    }
    if (param_4 != 1) {
      if (param_4 == 2) {
        uVar2 = *(ulong *)(param_1 + (long)_DAT_112713490);
        func_0x00010c2a4e40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        param_1 = uVar2;
        func_0x00010bf04920();
        _objc_release(uVar2);
        param_1 = param_1 & 0xffffffff;
        goto LAB_104debcf0;
      }
      goto LAB_104debc7c;
    }
    uVar2 = *(ulong *)(param_1 + (long)_DAT_112713490);
    func_0x00010c2a4e40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_104dd7ad4();
    _objc_retainAutoreleasedReturnValue();
    param_1 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
  }
  else if (param_4 < 5) {
    if (param_4 == 3) {
      param_1 = 1;
      goto LAB_104debcf0;
    }
    if (param_4 != 4) goto LAB_104debc7c;
    lVar1 = *(long *)(param_1 + (long)_DAT_112713490);
    FUN_104de3c74(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = (ulong)(lVar1 != 0);
  }
  else {
    if (param_4 != 5) {
      if (param_4 == 6) {
        func_0x00010beb9820(param_1);
        param_1 = param_1 & 0xffffffff;
        goto LAB_104debcf0;
      }
LAB_104debc7c:
      param_1 = 0;
      goto LAB_104debcf0;
    }
    func_0x00010bee99e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    param_1 = param_1 + 1;
  }
  _objc_release();
LAB_104debcf0:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104debd0c; end: 104dec5f7; -[SCCommerceProductPageViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104debd0c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bddc2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + _DAT_112713478);
  func_0x00010bf6e0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0720c0();
  puVar5 = PTR_PTR_1126b0938;
  puVar7 = puVar2;
  if ((int)puVar4 == 0) {
    puVar4 = puVar1;
    func_0x00010c0720c0();
    puVar5 = PTR_PTR_1126b0940;
    if ((int)puVar4 != 0) {
      _objc_retain(puVar2);
      _objc_opt_class(puVar5);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112713490);
      func_0x00010bfbd260(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103e40(puVar7);
      goto LAB_104debe98;
    }
    puVar4 = puVar1;
    func_0x00010c0720c0();
    puVar5 = PTR_PTR_1126b0948;
    if ((int)puVar4 != 0) {
      _objc_retain(puVar2);
      _objc_opt_class(puVar5);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar2);
      func_0x00010c18b5e0(puVar7);
      lVar8 = (long)_DAT_112713490;
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c2714e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103ee0(puVar7);
      _objc_release(uVar3);
      lVar8 = *(long *)(param_1 + lVar8);
      func_0x00010c2714e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar8 != 0) {
        _objc_initWeak(auStack_68,param_1);
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_104dec5f8;
        puStack_78 = &UNK_1108434b0;
        _objc_copyWeak(auStack_70,auStack_68);
        func_0x000100c749e0(0x3f800000,"APPSTORE",&puStack_90);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
      goto LAB_104debeb0;
    }
    puVar4 = puVar1;
    func_0x00010c0720c0();
    puVar5 = PTR_PTR_1126b0950;
    if ((int)puVar4 != 0) {
      _objc_retain(puVar2);
      _objc_opt_class(puVar5);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112713490);
      func_0x00010bf6e580(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2227e0(puVar7);
      goto LAB_104debe98;
    }
    puVar4 = puVar1;
    func_0x00010c0720c0();
    puVar5 = PTR_PTR_1126b0988;
    if ((int)puVar4 != 0) {
      _objc_retain(puVar2);
      _objc_opt_class(puVar5);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar2);
      puVar4 = *(undefined **)(param_1 + _DAT_112713490);
      func_0x00010c2a4e40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      FUN_104dd7ad4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = param_4;
      func_0x00010c142240();
      puVar6 = puVar5;
      func_0x00010bf529e0();
      if (puVar6 <= puVar4) {
        _objc_release(puVar5);
        _objc_release(puVar7);
        puVar7 = (undefined *)0x0;
        goto LAB_104debec0;
      }
      if (puVar5 == (undefined *)0x0) {
        func_0x00010c103ec0(puVar7);
      }
      else {
        func_0x00010c142240(param_4);
        puVar4 = puVar5;
        func_0x00010c0dfd40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c103ec0(puVar7);
        _objc_release(puVar4);
      }
      func_0x00010c18b5e0(puVar7);
LAB_104dec384:
      _objc_release(puVar5);
      goto LAB_104debeb0;
    }
    puVar4 = puVar1;
    func_0x00010c0720c0();
    puVar5 = PTR_PTR_1126b0980;
    if ((int)puVar4 != 0) {
      _objc_retain(puVar2);
      _objc_opt_class(puVar5);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112713490);
      func_0x00010bf25820(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103ec0(puVar7);
      goto LAB_104debe98;
    }
    puVar4 = puVar1;
    func_0x00010c0720c0();
    puVar5 = PTR_PTR_1126b0970;
    if ((int)puVar4 != 0) {
      _objc_retain(puVar2);
      _objc_opt_class(puVar5);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112713490);
      FUN_104de3c74(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103f00(puVar7);
      goto LAB_104debe98;
    }
    puVar5 = puVar1;
    func_0x00010c0720c0();
    puVar7 = PTR_PTR_1126b0958;
    if ((int)puVar5 != 0) {
      _objc_retain(puVar2);
      _objc_opt_class(puVar7);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar7);
      puVar5 = puVar2;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar2);
      puVar7 = *(undefined **)(param_1 + _DAT_112713490);
      func_0x00010c2a4e40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c2716a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103ea0(puVar5);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar4);
      goto LAB_104debeb0;
    }
    puVar5 = puVar1;
    func_0x00010c0720c0();
    puVar7 = PTR_PTR_1126b0960;
    if ((int)puVar5 != 0) {
      _objc_retain(puVar2);
      _objc_opt_class(puVar7);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar7);
      puVar5 = puVar2;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar2);
      func_0x00010bee99e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142240(param_4);
      puVar7 = param_1;
      func_0x00010c0dfd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103f20(puVar5);
      _objc_release(puVar7);
      _objc_release(param_1);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c142240();
      func_0x00010c14de00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(puVar5);
      func_0x00010c18b5e0(puVar5);
      _objc_release(puVar5);
      goto LAB_104debeb0;
    }
    puVar7 = puVar1;
    func_0x00010c0720c0();
    if ((int)puVar7 != 0) {
      func_0x00010be8a280(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c2a4d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bf640();
      puVar7 = param_1;
      goto LAB_104dec384;
    }
    puVar5 = puVar1;
    func_0x00010c0720c0();
    puVar7 = PTR_PTR_1126b0978;
    if ((int)puVar5 != 0) {
      _objc_retain(puVar2);
      _objc_opt_class(puVar7);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar7);
      puVar5 = puVar2;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar2);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a4a0(puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      goto LAB_104debeb0;
    }
  }
  else {
    _objc_retain(puVar2);
    _objc_opt_class(puVar5);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar5);
    if (((ulong)puVar4 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    _objc_retain(puVar7);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112713490);
    func_0x00010bfbd260(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103e60(puVar7);
LAB_104debe98:
    _objc_release(uVar3);
    func_0x00010c18b5e0(puVar7);
LAB_104debeb0:
    _objc_release(puVar7);
  }
  _objc_retain(puVar2);
  puVar7 = puVar2;
LAB_104debec0:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104dec5f8; end: 104dec693;  */

void FUN_104dec5f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb91c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dec694; end: 104dec793; -[SCCommerceProductPageViewController collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dec694(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0960;
  _objc_opt_class(PTR_PTR_1126b0960);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be37d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x00010c115e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        func_0x00010c251400(*(undefined8 *)(param_1 + _DAT_112713448));
      }
    }
    _objc_release(lVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dec794; end: 104dec8db; -[SCCommerceProductPageViewController collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dec794(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0960;
  _objc_retain(param_4);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  _objc_release(param_4);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1;
    func_0x00010bee99e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    uVar4 = param_5;
    func_0x00010c142240();
    if (uVar4 <= uVar3) {
      uVar3 = param_5;
      func_0x00010c142240();
      _objc_release(uVar2);
      if ((long)uVar3 < 1) goto LAB_104dec8c8;
      uVar3 = param_1;
      func_0x00010bee99e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142240(param_5);
      uVar2 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010c115e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 != 0) {
        uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112713448);
        uVar3 = uVar2;
        func_0x00010c115e60(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf95940(uVar5);
        _objc_release(uVar3);
      }
    }
    _objc_release(uVar2);
  }
LAB_104dec8c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104dec8dc; end: 104dec8df; -[SCCommerceProductPageViewController scrollViewDidScroll:] */

void FUN_104dec8dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateImpressionTracking_112594000);
  return;
}



/* Entry: 104dec8e0; end: 104deca6f; -[SCCommerceProductPageViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dec8e0(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c1554e0();
  if ((uVar1 == 5) && (uVar1 = param_4, func_0x00010c142240(), 0 < (long)uVar1)) {
    uVar1 = param_4;
    func_0x00010c142240();
    uVar2 = param_1;
    func_0x00010bee99e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar1 <= uVar3) {
      uVar1 = param_1;
      func_0x00010bee99e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c142240(param_4);
      uVar3 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,uVar2 - 1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = uVar3;
      func_0x00010c115e60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c257800(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c0b4ca0(uVar1);
      uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112713438);
      func_0x00010c150e00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b0998;
      func_0x00010c128020(PTR_PTR_1126b0998,param_2,uVar4,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8dd80(uVar5,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar5);
      func_0x00010bf51020(*(undefined8 *)(param_1 + (long)_DAT_112713448),param_2,uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104deca70; end: 104deca9f; -[SCCommerceProductPageViewController collectionView:layout:insetForSectionAtIndex:] */

undefined8 FUN_104deca70(void)

{
  long in_x4;
  
  if (in_x4 == 5) {
    return 0;
  }
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 104decaa0; end: 104decbcb; -[SCCommerceProductPageViewController _cellIdentifierForIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_104decaa0(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  long lVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c1554e0();
  if (lVar3 < 3) {
    if (lVar3 == 0) {
      lVar3 = param_3;
      func_0x00010c0840e0();
      if (lVar3 == 2) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db3f58;
        goto LAB_104decb9c;
      }
      if (lVar3 == 1) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db3f38;
        goto LAB_104decb9c;
      }
      if (lVar3 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db3ef8;
        if (*(long *)(param_1 + _DAT_112713458) != 0) {
          ppuVar4 = &PTR____CFConstantStringClassReference_110db3f18;
        }
        goto LAB_104decb9c;
      }
    }
    else if (lVar3 != 1) {
      bVar2 = lVar3 == 2;
      ppuVar4 = &PTR____CFConstantStringClassReference_110db4018;
      goto LAB_104decb24;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110db4038;
  }
  else {
    if (lVar3 < 5) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db3ff8;
      if (lVar3 != 4) {
        ppuVar1 = (undefined **)0x0;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110db3fd8;
      if (lVar3 != 3) {
        ppuVar4 = ppuVar1;
      }
      goto LAB_104decb9c;
    }
    if (lVar3 == 5) {
      lVar3 = param_3;
      func_0x00010c0840e0();
      ppuVar4 = &PTR____CFConstantStringClassReference_110db3f98;
      if (lVar3 != 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db3f78;
      }
      goto LAB_104decb9c;
    }
    bVar2 = lVar3 == 6;
    ppuVar4 = &PTR____CFConstantStringClassReference_110db3fb8;
LAB_104decb24:
    if (!bVar2) {
      ppuVar4 = (undefined **)0x0;
    }
  }
LAB_104decb9c:
  _objc_release(param_3);
  return ppuVar4;
}



/* Entry: 104decbcc; end: 104decc4f; -[SCCommerceProductPageViewController _relatedProductWidgetModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104decbcc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112713490);
  func_0x00010c2a4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001006372a4();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010c0dfd40(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104decc50; end: 104decd33;  */

undefined1 FUN_104decc50(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010c2a4d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf640();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104decd34; end: 104decd47;  */

void FUN_104decd34(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104decd48; end: 104dece4b; -[SCCommerceProductPageViewController _viewModelRelatedProducts] */

void FUN_104decd48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104deb738;
  uStack_30 = 0x104deb748;
  uStack_28 = 0;
  func_0x00010be8a280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2a4d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf640();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104dece4c; end: 104dece83;  */

void FUN_104dece4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dece84; end: 104decf8f; -[SCCommerceProductPageViewController _showLastWidgetLoadingCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104dece84(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713490);
  func_0x00010c2a4e40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2a4d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf640();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 104decf90; end: 104decf9f;  */

void FUN_104decf90(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 104decfa0; end: 104ded197; -[SCCommerceProductPageViewController _setupPickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104decfa0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_112713494;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  lVar3 = (long)_DAT_112713498;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar3));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126b09a8;
  _objc_alloc();
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  lVar3 = (long)_DAT_11271349c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x402e000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010beaecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupPickerViewConstraints_1125894d8);
  return;
}



/* Entry: 104ded198; end: 104ded753; -[SCCommerceProductPageViewController _setupPickerViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ded198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double in_d3;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + _DAT_112713490);
  puStack_c8 = puVar1;
  func_0x00010c0fbc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  lVar12 = (long)_DAT_11271349c;
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127134a0);
  *(undefined8 *)(param_1 + _DAT_1127134a0) = uVar5;
  _objc_release(uVar9);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127134a4;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = uVar5;
  _objc_release(uVar9);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(uVar4);
  uStack_a0 = *(undefined8 *)(param_1 + lVar10);
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_d0 = uVar5;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar2);
  dVar13 = (double)(lVar3 + 1) * 50.0 + 32.0;
  dVar14 = in_d3 * 0.5;
  if (dVar13 <= in_d3 * 0.5) {
    dVar14 = dVar13;
  }
  func_0x00010bf49420(dVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  uStack_d8 = uVar5;
  uStack_98 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_90 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puStack_c8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(lVar10);
  _objc_release(lVar11);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(uStack_d8);
  _objc_release(lStack_d0);
  lVar11 = (long)_DAT_112713498;
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_d8 = uVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar3;
  func_0x00010bf493a0(uVar5,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_e8 = uVar5;
  uStack_c0 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_f8 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar3;
  func_0x00010bf493a0(uVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  uStack_108 = uVar4;
  uStack_b8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_110 = uVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar9,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_b0 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0,4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_c8;
  func_0x00010befa160(puStack_c8,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(lVar10);
  _objc_release(lVar11);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(lStack_100);
  _objc_release(lStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_e8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d0);
  _objc_release(uStack_d8);
  puVar8 = puVar1;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar3);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puStack_138 = puVar1;
  pcStack_118 = FUN_104ded754;
  lStack_140 = lVar2;
  lStack_130 = param_1;
  lStack_128 = lVar3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  func_0x00010c162480(*(undefined8 *)(puVar7 + _DAT_1127134a0),param_2,0);
  func_0x00010c162480(*(undefined8 *)(puVar7 + _DAT_1127134a4),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x104ded854;
  puStack_150 = &UNK_110842e18;
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_104ded8c4;
  puStack_180 = &UNK_110848bd8;
  puStack_178 = puVar7;
  puStack_170 = puVar8;
  puStack_148 = puVar7;
  _objc_retain(puVar8);
  func_0x00010bf03460(0x3fe0000000000000,0x3fb99999a0000000,0x3fecccccc0000000,0x4010666660000000,
                      puVar1,param_2,0,&puStack_168,&puStack_198);
  _objc_release(puStack_170);
  _objc_release(puVar8);
  return;
}



/* Entry: 104ded754; end: 104ded8c3; -[SCCommerceProductPageViewController _closePickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ded754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_1127134a0),param_2,0);
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_1127134a4),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104ded854;
  puStack_40 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104ded8c4;
  puStack_70 = &UNK_110848bd8;
  lStack_68 = param_1;
  uStack_60 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03460(0x3fe0000000000000,0x3fb99999a0000000,0x3fecccccc0000000,0x4010666660000000,
                      puVar1,param_2,0,&puStack_58,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 104ded8c4; end: 104ded957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ded8c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271349c));
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713498));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  func_0x00010c297740(PTR_PTR_1126b0998,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ded958; end: 104dedb0f; -[SCCommerceProductPageViewController _presentPickerViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ded958(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar8 = (long)_DAT_1127134a0;
  uVar1 = *(ulong *)(param_1 + lVar8);
  func_0x00010c06b700();
  if ((uVar1 & 1) == 0) {
    func_0x00010beaeca0(param_1);
    lVar7 = (long)_DAT_112713490;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0fbc60();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11271349c;
    func_0x00010c1d5e80(*(undefined8 *)(param_1 + lVar9),param_2,uVar2);
    _objc_release();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000104df38cc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0fbc60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0ec580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110db27b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(*(undefined8 *)(param_1 + lVar9),param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_1127134a4),param_2,0);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar8),param_2,1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104dedb10;
    puStack_70 = &UNK_110842e18;
    lStack_68 = param_1;
    func_0x00010bf03460(0x3fe0000000000000,0x3fb99999a0000000,0x3fecccccc0000000,0x4010666660000000,
                        PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,&puStack_88,0);
  }
  return;
}



/* Entry: 104dedb10; end: 104dedb7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dedb10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  func_0x00010c195460(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713494));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe3333333333333,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112713498),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 104dedb7c; end: 104dedb83; -[SCCommerceProductPageViewController productOptionPickerView:didSelectOption:selectedItem:] */

void FUN_104dedb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde1690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closePickerView__112555f40,param_4);
  return;
}



/* Entry: 104dedb84; end: 104dedb8b; -[SCCommerceProductPageViewController _overlayTapped] */

void FUN_104dedb84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde1690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closePickerView__112555f40,0);
  return;
}



/* Entry: 104dedb8c; end: 104dedbef; -[SCCommerceProductPageViewController errorButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dedb8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  func_0x00010c1288e0(PTR_PTR_1126b0998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dedbf0; end: 104dedc77; -[SCCommerceProductPageViewController didRecieveRecommendation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dedbf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713438);
  _objc_retain(param_3);
  func_0x00010c150e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0998;
  func_0x00010c23d580(PTR_PTR_1126b0998,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104dedc78; end: 104dedcbb; -[SCCommerceProductPageViewController didCloseQuestionnaire:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dedc78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713460);
  func_0x00010bf1cf80();
                    /* WARNING: Could not recover jumptable at 0x00010c0abc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_logPageOpen_sourcePage_metricsDa_112608918,param_1,param_3,0,0,0);
  return;
}



/* Entry: 104dedcbc; end: 104dedd1f; -[SCCommerceProductPageViewController shareButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dedcbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  func_0x00010c22a800(PTR_PTR_1126b0998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dedd20; end: 104dedda7; -[SCCommerceProductPageViewController shopOnStoreTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dedd20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713438);
  _objc_retain(param_3);
  func_0x00010c150e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0998;
  func_0x00010c22cb80(PTR_PTR_1126b0998,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104dedda8; end: 104dede2f; -[SCCommerceProductPageViewController variantSelectorTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dedda8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713438);
  _objc_retain(param_3);
  func_0x00010c150e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0998;
  func_0x00010c2977a0(PTR_PTR_1126b0998,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104dede30; end: 104dede37; -[SCCommerceProductPageViewController blizzardPageType] */

undefined8 FUN_104dede30(void)

{
  return 0x29;
}



/* Entry: 104dede38; end: 104dede47; -[SCCommerceProductPageViewController availableModules] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dede38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf12910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112713490),PTR_s_availableModules_1125a23e8);
  return;
}



/* Entry: 104dede48; end: 104dede77; -[SCCommerceProductPageViewController blizzardPageTimeUntilReadySeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dede48(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_112713464) != 0) {
    if (*(long *)(param_2 + _DAT_1127134a8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c26f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_2 + _DAT_1127134a8),PTR_s_timeIntervalSinceDate__112679708);
      return param_1;
    }
  }
  return 0xbf50624de0000000;
}



/* Entry: 104dede78; end: 104dee07b; -[SCCommerceProductPageViewController _updateImpressionTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dede78(undefined *param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112713448;
  puVar1 = param_1;
  if (*(long *)(param_1 + lVar13) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_112713478;
    lVar2 = *(long *)(param_1 + lVar16);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain(lVar2);
      param_3 = &uStack_130;
      param_4 = auStack_f0;
      param_5 = (undefined *)0x10;
      lVar3 = lVar2;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar17 = *plStack_120;
        do {
          lVar15 = 0;
          do {
            if (*plStack_120 != lVar17) {
              _objc_enumerationMutation(lVar2);
            }
            uVar5 = *(undefined8 *)(param_1 + lVar16);
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_1;
            param_6 = puVar1;
            func_0x00010be37d80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            if (puVar6 != (undefined *)0x0) {
              func_0x00010befa120(puVar4);
            }
            _objc_release(puVar6);
            lVar15 = lVar15 + 1;
          } while (lVar3 != lVar15);
          param_3 = &uStack_130;
          param_4 = auStack_f0;
          param_5 = (undefined *)0x10;
          lVar3 = lVar2;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(lVar2);
      puVar7 = puVar4;
      func_0x00010bf529e0();
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = *(undefined8 *)(param_1 + lVar13);
        puVar7 = puVar4;
        func_0x00010bf51e00();
        param_3 = puVar7;
        func_0x00010c28b440(uVar5);
        _objc_release(puVar7);
      }
      _objc_release(puVar4);
    }
    _objc_release(lVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar6 = PTR_PTR_1126b0960;
  _objc_opt_class(PTR_PTR_1126b0960);
  puVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  puVar4 = param_3;
  if (((ulong)puVar7 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  _objc_retain(puVar4);
  if (puVar4 == (undefined8 *)0x0) {
LAB_104dee2f0:
    puVar14 = (undefined *)0x0;
  }
  else {
    func_0x00010c23c400();
    puVar6 = puVar1;
    func_0x00010bee99e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar6;
    func_0x00010bf529e0();
    puVar8 = param_5;
    func_0x00010c142240();
    if (puVar14 < puVar8) {
LAB_104dee140:
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = param_5;
      func_0x00010c142240();
      _objc_release(puVar6);
      if ((long)puVar14 < 1) goto LAB_104dee2f0;
      puVar14 = puVar1;
      func_0x00010bee99e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142240(param_5);
      puVar6 = puVar14;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      puVar8 = puVar6;
      func_0x00010c115e60();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar8;
      func_0x00010c08fa60();
      if (puVar14 == (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar14 = puVar6;
        func_0x00010bfe8f00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar14;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c08fa60();
        _objc_release(puVar9);
        _objc_release(puVar14);
        _objc_release(puVar8);
        if (puVar10 == (undefined *)0x0) goto LAB_104dee140;
        puVar14 = PTR_PTR_1126b09b8;
        _objc_alloc();
        puVar8 = puVar6;
        func_0x00010c115e60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c142240();
        func_0x00010bf1cf80();
        puVar9 = puVar6;
        func_0x00010c278ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(puVar1 + _DAT_112713490);
        func_0x00010c2a4e40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar5;
        func_0x00010c2716a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03a6e0(puVar14);
        _objc_release(uVar12);
        _objc_release(uVar5);
        _objc_release(uVar11);
        _objc_release(puVar9);
      }
      _objc_release(puVar8);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 104dee07c; end: 104dee357; -[SCCommerceProductPageViewController _impressionViewItemForCell:collectionView:indexPath:startTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dee07c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar10 = PTR_PTR_1126b0960;
  _objc_opt_class(PTR_PTR_1126b0960);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar10);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
LAB_104dee2f0:
    puVar10 = (undefined *)0x0;
  }
  else {
    func_0x00010c23c400();
    uVar2 = param_1;
    func_0x00010bee99e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    uVar4 = param_5;
    func_0x00010c142240();
    if (uVar3 < uVar4) {
LAB_104dee140:
      puVar10 = (undefined *)0x0;
    }
    else {
      uVar3 = param_5;
      func_0x00010c142240();
      _objc_release(uVar2);
      if ((long)uVar3 < 1) goto LAB_104dee2f0;
      uVar3 = param_1;
      func_0x00010bee99e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142240(param_5);
      uVar2 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010c115e60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c08fa60();
      if (uVar4 == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        uVar4 = uVar2;
        func_0x00010bfe8f00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c08fa60();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        if (uVar6 == 0) goto LAB_104dee140;
        puVar10 = PTR_PTR_1126b09b8;
        _objc_alloc();
        uVar3 = uVar2;
        func_0x00010c115e60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c142240();
        func_0x00010bf1cf80();
        uVar4 = uVar2;
        func_0x00010c278ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112713490);
        func_0x00010c2a4e40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c2716a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03a6e0(puVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 104dee358; end: 104dee3bb; -[SCCommerceProductPageViewController reloadFavoriteStateIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dee358(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  func_0x00010c128c80(PTR_PTR_1126b0998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dee3bc; end: 104dee45b; -[SCCommerceProductPageViewController didLoadImage:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dee3bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713438);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c150e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0998;
  func_0x00010bfe8120(PTR_PTR_1126b0998,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104dee45c; end: 104dee517; -[SCCommerceProductPageViewController didLoadImage:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dee45c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112713438);
  _objc_retain(param_3);
  func_0x00010c150e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8120(puVar2,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104dee518; end: 104dee54f; -[SCCommerceProductPageViewController didChangeFromIndex:toIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dee518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010be54920();
  func_0x00010bea8340(param_1);
  *(undefined8 *)(param_1 + _DAT_1127134ac) = param_4;
  return;
}



/* Entry: 104dee550; end: 104dee5b3; -[SCCommerceProductPageViewController didTapArTryOnButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dee550(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713438);
  func_0x00010c150e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0998;
  func_0x00010bf09420(PTR_PTR_1126b0998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dee5b4; end: 104dee753; -[SCCommerceProductPageViewController _showFavoritesPDPTooltipIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dee5b4(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  lVar6 = (long)_DAT_112713478;
  lVar5 = *(long *)(param_5 + lVar6);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33b60(lVar5,param_6,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar5 != 0) {
    lVar7 = (long)_DAT_11271344c;
    iVar1 = (int)*(undefined8 *)(param_5 + lVar7);
    func_0x00010c233800();
    if (iVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c292ae0();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b09c0;
      _objc_alloc(PTR_PTR_1126b09c0);
      puVar4 = puVar2;
      func_0x000104df386c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051640(puVar2,param_6,puVar4,0,puVar3 != (undefined *)0x1);
      _objc_release(puVar4);
      func_0x00010bfb68e0(lVar5);
      if (puVar3 == (undefined *)0x1) {
        param_1 = param_1 + 32.0;
      }
      else {
        dVar8 = param_2;
        func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
        func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar6));
        func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar6));
        param_1 = param_1 + (param_3 - (dVar8 + param_4)) + -32.0;
      }
      func_0x00010c10c340(param_1,param_2,0x4014000000000000,puVar2,param_6,
                          *(undefined8 *)(param_5 + lVar6));
      func_0x00010bf7b840(*(undefined8 *)(param_5 + lVar7));
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 104dee754; end: 104dee7bb; -[SCCommerceProductPageViewController _setDateReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dee754(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + _DAT_112713458) != 0) &&
     (lVar3 = (long)_DAT_1127134a8, *(long *)(param_1 + lVar3) == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104dee7bc; end: 104dee813; -[SCCommerceProductPageViewController _setSwipeDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dee7bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + _DAT_112713458) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127134b0);
    *(undefined **)(param_1 + _DAT_1127134b0) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104dee814; end: 104dee9b3; -[SCCommerceProductPageViewController _logHeroSessionClose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dee814(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (*(long *)(param_2 + _DAT_112713458) != 0) {
    lVar8 = (long)_DAT_112713490;
    lVar1 = *(long *)(param_2 + lVar8);
    func_0x00010bfbd260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe9060();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010bf529e0();
    if ((lVar9 == 0) || (*(long *)(param_2 + _DAT_1127134b0) == 0)) {
      _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
    lVar9 = (long)_DAT_1127134ac;
    lVar11 = *(long *)(param_2 + lVar9);
    lVar10 = (long)_DAT_11271347c;
    lVar12 = *(long *)(param_2 + lVar10);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar11 != lVar12) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      uVar13 = param_1;
      _objc_release(puVar3);
      uVar7 = *(undefined8 *)(param_2 + _DAT_112713460);
      lVar2 = param_2;
      func_0x00010bf1cf80(param_2);
      func_0x00010bf1cf60(param_2);
      uVar4 = *(undefined8 *)(param_2 + lVar8);
      func_0x00010bfbd260(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfe9060();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      func_0x00010c0a7be0(param_1,uVar13,uVar7,param_3,lVar2,uVar6,*(undefined8 *)(param_2 + lVar9))
      ;
      _objc_release(uVar5);
      _objc_release(uVar4);
      *(undefined8 *)(param_2 + lVar10) = *(undefined8 *)(param_2 + lVar9);
    }
  }
  return;
}



/* Entry: 104dee9b4; end: 104dee9c3; -[SCCommerceProductPageViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dee9b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713434);
}



/* Entry: 104dee9c4; end: 104dee9d3; -[SCCommerceProductPageViewController productId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dee9c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271346c);
}



/* Entry: 104dee9d4; end: 104dee9e3; -[SCCommerceProductPageViewController storeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dee9d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713470);
}



/* Entry: 104dee9e4; end: 104dee9f3; -[SCCommerceProductPageViewController exitEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dee9e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713474);
}



/* Entry: 104dee9f4; end: 104deea03; -[SCCommerceProductPageViewController setExitEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dee9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112713474) = param_3;
  return;
}



/* Entry: 104deea04; end: 104deebe3; -[SCCommerceProductPageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104deea04(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713434,0);
  _objc_storeStrong(param_1 + _DAT_1127134a8,0);
  _objc_storeStrong(param_1 + _DAT_112713464,0);
  _objc_storeStrong(param_1 + _DAT_1127134b0,0);
  _objc_storeStrong(param_1 + _DAT_112713470,0);
  _objc_storeStrong(param_1 + _DAT_112713468,0);
  _objc_storeStrong(param_1 + _DAT_1127134b4,0);
  _objc_storeStrong(param_1 + _DAT_112713460,0);
  _objc_storeStrong(param_1 + _DAT_112713458,0);
  _objc_storeStrong(param_1 + _DAT_112713454,0);
  _objc_storeStrong(param_1 + _DAT_112713450,0);
  _objc_storeStrong(param_1 + _DAT_11271348c,0);
  _objc_storeStrong(param_1 + _DAT_112713488,0);
  _objc_storeStrong(param_1 + _DAT_112713484,0);
  _objc_storeStrong(param_1 + _DAT_11271344c,0);
  _objc_storeStrong(param_1 + _DAT_112713448,0);
  _objc_storeStrong(param_1 + _DAT_112713438,0);
  _objc_storeStrong(param_1 + _DAT_112713480,0);
  _objc_storeStrong(param_1 + _DAT_112713490,0);
  _objc_storeStrong(param_1 + _DAT_11271345c,0);
  _objc_storeStrong(param_1 + _DAT_1127134a4,0);
  _objc_storeStrong(param_1 + _DAT_1127134a0,0);
  _objc_storeStrong(param_1 + _DAT_112713494,0);
  _objc_storeStrong(param_1 + _DAT_112713498,0);
  _objc_storeStrong(param_1 + _DAT_11271349c,0);
  _objc_storeStrong(param_1 + _DAT_112713478,0);
  _objc_storeStrong(param_1 + _DAT_112713440,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271343c,0);
  return;
}



/* Entry: 104deebe4; end: 104def6b7; -[SCCommerceProductCatalogEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104deebe4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  undefined *puVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  undefined8 uVar79;
  long lVar80;
  long lVar81;
  undefined8 uStack_2d8;
  undefined8 uStack_f8;
  
  puVar1 = PTR_PTR_1126b09c8;
  _objc_alloc();
  lVar76 = param_1 + _DAT_1127134b8;
  lVar2 = lVar76;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar76;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c23b760();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = param_1 + _DAT_1127134bc;
  lVar6 = lVar74;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_1127134c0;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_1127134c4;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf8b8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_1127134c8;
  _objc_loadWeakRetained();
  lVar81 = lVar13;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar76;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf42580();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = param_1 + _DAT_1127134cc;
  lVar17 = lVar75;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar76;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bf32f80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010bfe0e60();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar76;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bf32f80();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c13cdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = param_1 + _DAT_1127134d0;
  lVar27 = lVar78;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bfa1300();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar76;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bf2cd00();
  if ((int)lVar31 == 0) {
    lVar80 = 0;
  }
  else {
    uStack_2d8 = param_1 + _DAT_1127134d4;
    _objc_loadWeakRetained();
    lVar80 = uStack_2d8;
    func_0x00010bfa12c0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar32 = param_1 + _DAT_1127134d8;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar33;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_1127134dc;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010bf424a0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_1127134e0;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010bf45480();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = lVar39;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_1127134e4;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + _DAT_1127134e8;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar45;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + _DAT_1127134ec;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010c15d560();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_f8 = 0;
  }
  else {
    uStack_f8 = param_1 + _DAT_112713530;
    _objc_loadWeakRetained();
  }
  lVar77 = param_1 + _DAT_1127134f0;
  lVar49 = lVar77;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010bf32e80();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = lVar50;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + _DAT_112713500;
  _objc_loadWeakRetained();
  lVar53 = lVar52;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar53;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + _DAT_112713504;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = lVar56;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + _DAT_112713508;
  _objc_loadWeakRetained();
  lVar59 = lVar58;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = lVar59;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + _DAT_11271350c;
  _objc_loadWeakRetained();
  lVar62 = lVar61;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = lVar62;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1 + _DAT_112713510;
  _objc_loadWeakRetained();
  lVar65 = lVar64;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = param_1 + _DAT_112713514;
  _objc_loadWeakRetained();
  lVar67 = param_1 + _DAT_1127134d4;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010c22d060();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + _DAT_112713534;
  _objc_loadWeakRetained();
  lVar70 = lVar76;
  _objc_loadWeakRetained();
  lVar71 = lVar70;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = lVar71;
  func_0x00010c08bf60();
  _objc_retainAutoreleasedReturnValue();
  FUN_104dd8154();
  func_0x00010c0573a0();
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(uStack_f8);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  if ((int)lVar31 != 0) {
    _objc_release(lVar80);
    _objc_release(uStack_2d8);
  }
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar81);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar73 = PTR_PTR_1126b09d0;
  _objc_alloc();
  lVar10 = lVar76;
  _objc_loadWeakRetained();
  lVar13 = lVar10;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  lVar2 = lVar76;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf21640();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271351c;
  _objc_loadWeakRetained();
  _objc_loadWeakRetained();
  lVar4 = lVar75;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  lVar6 = lVar76;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  lVar8 = lVar77;
  func_0x00010bf32e80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  lVar11 = lVar78;
  func_0x00010bfa1300();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff97a0();
  lVar81 = (long)_DAT_112713520;
  uVar79 = *(undefined8 *)(param_1 + lVar81);
  *(undefined **)(param_1 + lVar81) = puVar73;
  _objc_release(uVar79);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar78);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar77);
  _objc_release(lVar6);
  _objc_release(lVar76);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar75);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar74);
  _objc_release(lVar13);
  _objc_release(lVar10);
  _objc_storeWeak(param_1 + _DAT_112713524,puVar1);
  func_0x00010c08b400(*(undefined8 *)(param_1 + lVar81));
  param_1 = param_1 + _DAT_112713528;
  _objc_loadWeakRetained(param_1);
  lVar76 = param_1;
  func_0x00010bfede00();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = lVar76;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126aa0();
  _objc_release(lVar74);
  _objc_release(lVar76);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104def6b8; end: 104def7b7; -[SCCommerceProductCatalogEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104def6b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11271352c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112713520);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf84ce0(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c117720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104def7b8; end: 104def7e3;  */

void FUN_104def7b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be09840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104def7e4; end: 104def7f3; -[SCCommerceProductCatalogEntryPoint _endCleanupWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104def7e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271352c),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 104def7f4; end: 104def9ab; -[SCCommerceProductCatalogEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104def7f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713518,0);
  _objc_storeStrong(param_1 + _DAT_1127134fc,0);
  _objc_storeStrong(param_1 + _DAT_1127134f8,0);
  _objc_storeStrong(param_1 + _DAT_1127134f4,0);
  _objc_destroyWeak(param_1 + _DAT_112713528);
  _objc_destroyWeak(param_1 + _DAT_1127134f0);
  _objc_destroyWeak(param_1 + _DAT_112713514);
  _objc_destroyWeak(param_1 + _DAT_112713510);
  _objc_destroyWeak(param_1 + _DAT_11271350c);
  _objc_destroyWeak(param_1 + _DAT_112713508);
  _objc_destroyWeak(param_1 + _DAT_112713504);
  _objc_destroyWeak(param_1 + _DAT_112713500);
  _objc_destroyWeak(param_1 + _DAT_1127134d4);
  _objc_destroyWeak(param_1 + _DAT_1127134ec);
  _objc_destroyWeak(param_1 + _DAT_1127134dc);
  _objc_destroyWeak(param_1 + _DAT_1127134e8);
  _objc_destroyWeak(param_1 + _DAT_1127134e4);
  _objc_destroyWeak(param_1 + _DAT_1127134d8);
  _objc_destroyWeak(param_1 + _DAT_1127134d0);
  _objc_destroyWeak(param_1 + _DAT_11271351c);
  _objc_destroyWeak(param_1 + _DAT_1127134cc);
  _objc_destroyWeak(param_1 + _DAT_1127134c0);
  _objc_destroyWeak(param_1 + _DAT_1127134bc);
  _objc_destroyWeak(param_1 + _DAT_1127134e0);
  _objc_destroyWeak(param_1 + _DAT_112713534);
  _objc_destroyWeak(param_1 + _DAT_112713530);
  _objc_destroyWeak(param_1 + _DAT_1127134c8);
  _objc_destroyWeak(param_1 + _DAT_1127134c4);
  _objc_destroyWeak(param_1 + _DAT_1127134b8);
  _objc_destroyWeak(param_1 + _DAT_112713524);
  _objc_storeStrong(param_1 + _DAT_11271352c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713520,0);
  return;
}



/* Entry: 104def9ac; end: 104defca7; -[SCCommerceStorePageViewController initWithStoreId:categoryId:queryContext:showcaseFetcher:configProvider:imageSourceProvider:imageFetchingService:commerceIconProvider:eventLogger:cartCoordinator:favoritesCoordinator:isLastInNavStack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104def9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e43f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112713540;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112713544;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112713548;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271354c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112713550;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112713554;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112713558;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271355c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112713560;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112713564;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112713568;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271356c) = param_14;
    puVar3 = PTR_PTR_1126af080;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713570);
    *(undefined **)((long)puVar1 + (long)_DAT_112713570) = puVar3;
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c189400(puVar1);
    func_0x00010beb14e0(puVar1);
    func_0x00010be146a0(puVar1);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104defca8; end: 104defd0f; -[SCCommerceStorePageViewController viewWillAppear:] */

void FUN_104defca8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e43f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010bdf6840();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c13c0e0(param_1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 104defd10; end: 104defd77; -[SCCommerceStorePageViewController viewWillDisappear:] */

void FUN_104defd10(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e43f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bdf6840();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010bfaf120(param_1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 104defd78; end: 104df05db; -[SCCommerceStorePageViewController _setupScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104defd78(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar19 != 0) {
    lVar1 = param_1;
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
  }
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar20 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  func_0x00010c1f7d00(param_1);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(lVar19);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2025c0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(lVar1);
  puStack_108 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  lStack_e8 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  lStack_f8 = lVar1;
  lStack_a8 = lVar1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  lStack_110 = lVar19;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_a0 = lVar19;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_98 = lVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_108);
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lStack_110);
  _objc_release(lStack_100);
  _objc_release(lStack_f8);
  _objc_release(lStack_f0);
  _objc_release(lStack_e0);
  _objc_release(lStack_e8);
  _objc_release(lStack_d8);
  lVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar19;
  func_0x00010bf493a0(lVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar19);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7d00();
  _objc_release(lVar19);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  func_0x00010c181a20(param_1);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(lVar19);
  _objc_release(lVar1);
  puStack_130 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  lStack_e8 = lVar1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  lStack_f8 = lVar1;
  lStack_d0 = lVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  lStack_110 = lVar19;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = (undefined *)lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  lStack_120 = lVar19;
  lStack_c8 = lVar19;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  lStack_140 = lVar1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_150 = lVar1;
  lStack_c0 = lVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  lStack_b8 = lVar6;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_b0 = lVar19;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_130);
  _objc_release(puVar2);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lStack_158);
  _objc_release(lStack_150);
  _objc_release(lStack_148);
  _objc_release(lStack_138);
  _objc_release(lStack_140);
  _objc_release(lStack_128);
  _objc_release(lStack_120);
  _objc_release(lStack_118);
  _objc_release(puStack_108);
  _objc_release(lStack_110);
  _objc_release(lStack_100);
  _objc_release(lStack_f8);
  _objc_release(lStack_f0);
  _objc_release(lStack_e0);
  _objc_release(lStack_e8);
  lVar1 = lStack_d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_104df05dc;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uStack_1e0 = uVar23;
  uStack_1d8 = uVar22;
  uStack_1d0 = uVar21;
  uStack_1c8 = uVar20;
  lStack_1c0 = lVar8;
  lStack_1b8 = lVar3;
  puStack_1b0 = puVar2;
  lStack_1a8 = lVar19;
  lStack_1a0 = lVar4;
  lStack_198 = lVar5;
  lStack_190 = lVar9;
  lStack_188 = lVar6;
  lStack_180 = lVar7;
  lStack_178 = param_1;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar19);
  _objc_release(puVar10);
  lVar19 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(lVar19);
  func_0x00010beaf8a0(lVar1);
  _objc_initWeak(auStack_210,lVar1);
  puVar2 = PTR_PTR_1126b0930;
  _objc_alloc();
  uVar21 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
  lVar19 = (long)_DAT_112713574;
  uVar20 = *(undefined8 *)(lVar1 + lVar19);
  *(undefined **)(lVar1 + lVar19) = puVar2;
  _objc_release(uVar20);
  func_0x00010c1a97a0(*(undefined8 *)(lVar1 + lVar19));
  func_0x00010c16eb80(*(undefined8 *)(lVar1 + lVar19));
  _objc_copyWeak(auStack_218,auStack_210);
  func_0x00010c18de40(*(undefined8 *)(lVar1 + lVar19));
  lVar19 = lVar1;
  func_0x00010bfdf5e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  _objc_release(lVar19);
  lVar19 = lVar1;
  func_0x00010bfdf5e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199da0();
  _objc_release(lVar19);
  lVar19 = lVar1;
  func_0x00010bfdf5e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f820();
  _objc_release(lVar19);
  lVar19 = lVar1;
  func_0x00010bfdf5e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211340();
  _objc_release(lVar19);
  lVar19 = lVar1;
  func_0x00010bfdf5e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar19);
  func_0x00010be4eac0(lVar1);
  puVar2 = PTR_PTR_1126b04e8;
  _objc_alloc(PTR_PTR_1126b04e8);
  func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
  func_0x00010c1973e0(lVar1);
  _objc_release(puVar2);
  lVar19 = lVar1;
  func_0x00010bf99140(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar19);
  lVar19 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf99140(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar19);
  _objc_release(lVar3);
  _objc_release(lVar19);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar19 = lVar1;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar19;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  lStack_208 = lVar6;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010c152980(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  lStack_200 = lVar12;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c152980(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar14;
  func_0x00010bf493e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_1f8 = lVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar10);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar19);
  lVar19 = lVar1;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar19);
  func_0x00010bf99140(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_218);
  puVar18 = auStack_210;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_218);
  _objc_destroyWeak(auStack_210);
  __Unwind_Resume(puVar18);
  puVar18 = puVar18 + 0x20;
  _objc_loadWeakRetained(puVar18);
  func_0x00010be00c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar18);
  return;
}



/* Entry: 104df05dc; end: 104df0b9f; -[SCCommerceStorePageViewController _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104df05dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar19);
  _objc_release(puVar1);
  lVar19 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(lVar19);
  func_0x00010beaf8a0(param_1);
  _objc_initWeak(auStack_b0,param_1);
  puVar1 = PTR_PTR_1126b0930;
  _objc_alloc();
  uVar20 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  lVar19 = (long)_DAT_112713574;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar18);
  func_0x00010c1a97a0(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c16eb80(*(undefined8 *)(param_1 + lVar19));
  _objc_copyWeak(auStack_b8,auStack_b0);
  func_0x00010c18de40(*(undefined8 *)(param_1 + lVar19));
  lVar19 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  _objc_release(lVar19);
  lVar19 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199da0();
  _objc_release(lVar19);
  lVar19 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f820();
  _objc_release(lVar19);
  lVar19 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211340();
  _objc_release(lVar19);
  lVar19 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar19);
  func_0x00010be4eac0(param_1);
  puVar1 = PTR_PTR_1126b04e8;
  _objc_alloc(PTR_PTR_1126b04e8);
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  func_0x00010c1973e0(param_1);
  _objc_release(puVar1);
  lVar19 = param_1;
  func_0x00010bf99140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar19);
  lVar19 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf99140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar19);
  _objc_release(lVar2);
  _objc_release(lVar19);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar19 = param_1;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar19;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  lStack_a8 = lVar5;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  lStack_a0 = lVar10;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar12;
  func_0x00010bf493e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_98 = lVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar19);
  lVar19 = param_1;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar19);
  func_0x00010bf99140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_b8);
  puVar17 = auStack_b0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume(puVar17);
  puVar17 = puVar17 + 0x20;
  _objc_loadWeakRetained(puVar17);
  func_0x00010be00c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar17);
  return;
}



/* Entry: 104df0ba0; end: 104df0bcb;  */

void FUN_104df0ba0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104df0bcc; end: 104df0d47; -[SCCommerceStorePageViewController _fetchStore] */

void FUN_104df0bcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c198340(param_1,param_2,0xe);
  uVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf99140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x000104df383c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_1;
  func_0x00010c23afc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257800(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfcabe0(uVar1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104df0d48; end: 104df0dbb;  */

void FUN_104df0d48(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010be4ef00();
  }
  else {
    func_0x00010be4eec0();
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


