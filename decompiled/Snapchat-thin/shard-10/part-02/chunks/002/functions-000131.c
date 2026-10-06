/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c87a10; end: 107c87bc7; -[SCDiscoverFeedMyStoriesCircleCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c87a10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa530;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d7418;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276c940;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276c944;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c948);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c948) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c94c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c94c) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c950);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c950) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c93c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c93c) = puVar2;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c87bc8; end: 107c87d23;  */

void FUN_107c87bc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c1a7f60();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eb4738);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c182220(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c87d24; end: 107c8810f; -[SCDiscoverFeedMyStoriesCircleCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c87d24(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  
  puStack_d0 = PTR_PTR_1126fa530;
  lStack_d8 = param_5;
  _objc_msgSendSuper2(&lStack_d8,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  puVar3 = PTR_PTR_1126c2378;
  uVar6 = *(ulong *)(param_5 + _DAT_11276c954);
  _objc_retain(uVar6);
  _objc_opt_class(puVar3);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar1 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  lVar7 = (long)_DAT_11276c958;
  func_0x00010bfe5ca0(*(undefined8 *)(param_5 + lVar7));
  dVar10 = param_3 * (1.0 - param_1);
  dVar12 = dVar10 * 0.5;
  func_0x00010bfe5ae0(*(undefined8 *)(param_5 + lVar7));
  dVar13 = param_4 * dVar10;
  func_0x00010bfe5ca0(*(undefined8 *)(param_5 + lVar7));
  dVar14 = param_3 * dVar10;
  func_0x00010bfe5ca0(*(undefined8 *)(param_5 + lVar7));
  func_0x00010b816528(dVar12,dVar13,dVar14,param_3 * dVar10);
  lVar8 = (long)_DAT_11276c940;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar8));
  func_0x00010bf85a80(*(undefined8 *)(param_5 + lVar7));
  dVar13 = param_3 * dVar12;
  func_0x00010bf85a40(*(undefined8 *)(param_5 + lVar7));
  dVar10 = 1.0 - dVar12;
  func_0x00010bf859a0(*(undefined8 *)(param_5 + lVar7));
  dVar10 = dVar10 - dVar12;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
  _CGRectGetMaxY();
  dVar12 = param_4 * dVar10 - dVar12;
  lVar9 = (long)_DAT_11276c944;
  func_0x00010c23d5a0(dVar13,dVar12,*(undefined8 *)(param_5 + lVar9));
  param_3 = param_3 - dVar13;
  dVar14 = param_3 * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
  _CGRectGetMaxY();
  dVar10 = param_3;
  func_0x00010bf85a40(*(undefined8 *)(param_5 + lVar7));
  param_3 = param_3 + dVar10 * param_4;
  func_0x00010b8162e0(dVar14,param_3,dVar13,dVar12);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar9));
  func_0x00010bea9300(param_5);
  func_0x00010bea9cc0(param_5);
  func_0x00010bea8dc0(param_5);
  uVar4 = uVar1;
  func_0x00010c078640();
  uVar6 = uVar1;
  func_0x00010bfdcc20();
  if ((int)uVar4 == 0) {
    if ((int)uVar6 != 0) goto LAB_107c880a8;
  }
  else {
    if ((int)uVar6 != 0) {
LAB_107c880a8:
      func_0x00010c276fe0(uVar1);
      func_0x00010bebbc80(param_5);
      goto LAB_107c880c8;
    }
    _objc_retain(uVar1);
    uStack_a0 = 0;
    uStack_90 = 0x2020000000;
    uStack_88 = 0;
    uVar4 = uVar1;
    puStack_98 = &uStack_a0;
    func_0x00010c2594a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    dVar10 = 1.60807493534087e-314;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x107c88f68;
    puStack_b0 = &UNK_1109f3e30;
    puStack_a8 = &uStack_a0;
    func_0x00010c0c0520();
    _objc_release(uVar4);
    cVar2 = *(char *)(puStack_98 + 3);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uVar1);
    if (cVar2 == '\x01') {
      uVar5 = *(undefined8 *)(param_5 + _DAT_11276c94c);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_5 + _DAT_11276c950);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar5);
      lVar7 = (long)_DAT_11276c948;
      uVar5 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar5);
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
      dVar14 = dVar13 / 3.0;
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
      dVar11 = dVar12 / 3.0;
      func_0x00010c0ed1a0(*(undefined8 *)(param_5 + lVar8));
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
      dVar10 = (dVar10 + dVar13) - dVar14;
      func_0x00010c0ed1a0(*(undefined8 *)(param_5 + lVar8));
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar8));
      dVar12 = (param_3 + dVar12) - dVar11;
      func_0x00010b8162e0(dVar10,dVar12,dVar14,dVar11);
      uVar5 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar10,dVar12,dVar14,dVar11);
      _objc_release(uVar5);
      goto LAB_107c880c8;
    }
  }
  func_0x00010beb8dc0(param_5);
LAB_107c880c8:
  _objc_release(uVar1);
  return;
}



/* Entry: 107c88110; end: 107c881bb; -[SCDiscoverFeedMyStoriesCircleCell _setUpAddStoryImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88110(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276c948;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107c881bc; end: 107c883bf; -[SCDiscoverFeedMyStoriesCircleCell _setUpViewCountViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c881bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11276c94c;
  uVar2 = *(ulong *)(param_1 + lVar11);
  func_0x00010c06f880();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar11));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar12,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar12);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(ulong *)(param_1 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11276c940;
    uVar4 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010bf493a0(uVar10,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar11);
    uStack_78 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar10);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = (long)_DAT_11276c950;
  uVar10 = *(ulong *)(uVar2 + lVar11);
  func_0x00010c06f880();
  if ((uVar10 & 1) != 0) {
    return;
  }
  func_0x00010bf57500(*(undefined8 *)(uVar2 + lVar11));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(uVar2 + lVar11);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar10,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 107c883c0; end: 107c88457; -[SCDiscoverFeedMyStoriesCircleCell _setUpEmptyStateView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c883c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276c950;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c06f880();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107c88458; end: 107c885a3; -[SCDiscoverFeedMyStoriesCircleCell _showEmptyStateView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88458(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_11276c94c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11276c950;
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11276c940;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  dVar5 = param_3 / 3.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  dVar6 = param_4 / 3.0;
  func_0x00010c0ed1a0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  dVar4 = dVar5 * 0.5;
  dVar7 = (param_1 + param_3 * 0.5) - dVar4;
  func_0x00010c0ed1a0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  dVar4 = (dVar4 + param_4 * 0.5) - dVar6 * 0.5;
  func_0x00010b8162e0(dVar7,dVar4,dVar5,dVar6);
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar7,dVar4,dVar5,dVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c885a4; end: 107c88683; -[SCDiscoverFeedMyStoriesCircleCell _showViewCountWithTotalViewCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c885a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276c94c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c950);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daea58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c88684; end: 107c88713; +[SCDiscoverFeedMyStoriesCircleCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107c88684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c2378;
  _objc_opt_class(PTR_PTR_1126c2378);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106e40(uVar1);
  _objc_release(uVar1);
  func_0x00010b81662c(param_1,param_2);
  _objc_release(param_5);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 107c88714; end: 107c88723; -[SCDiscoverFeedMyStoriesCircleCell setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c940),PTR_s_setImageFetchingService__1126482d8);
  return;
}



/* Entry: 107c88724; end: 107c88733; -[SCDiscoverFeedMyStoriesCircleCell setBitmojiSelfieFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c171470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c940),PTR_s_setBitmojiSelfieFetcher__112639f38);
  return;
}



/* Entry: 107c88734; end: 107c88743; -[SCDiscoverFeedMyStoriesCircleCell setStoiresConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c940),PTR_s_setStoriesConfigProvider__112660b90);
  return;
}



/* Entry: 107c88744; end: 107c88753; -[SCDiscoverFeedMyStoriesCircleCell setStoriesThumbnailCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c940),
             PTR_s_setStoriesThumbnailCoordinator__112660c70);
  return;
}



/* Entry: 107c88754; end: 107c88763; -[SCDiscoverFeedMyStoriesCircleCell storyThumbnailImageLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c940),PTR_s_storyThumbnailImageLoaded_112674790);
  return;
}



/* Entry: 107c88764; end: 107c887d3; -[SCDiscoverFeedMyStoriesCircleCell setViewModel:] */

void FUN_107c88764(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2378;
  _objc_opt_class(PTR_PTR_1126c2378);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bde26c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c887d4; end: 107c88a63; -[SCDiscoverFeedMyStoriesCircleCell _compareAndUpdateViewModelIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c887d4(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  _objc_retain(param_4);
  lVar6 = (long)_DAT_11276c954;
  uVar4 = *(ulong *)(param_2 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_4);
  if (uVar4 == param_4) {
    _objc_release(param_4);
    _objc_release(uVar4);
  }
  else {
    if (param_4 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0(uVar4,param_3,param_4);
      _objc_release(param_4);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_107c88a48;
    }
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_2 + lVar6);
    *(ulong *)(param_2 + lVar6) = param_4;
    _objc_release(uVar2);
    uVar4 = param_4;
    func_0x00010c105340();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11276c95c;
    uVar2 = *(undefined8 *)(param_2 + lVar7);
    *(ulong *)(param_2 + lVar7) = uVar4;
    _objc_release(uVar2);
    uVar4 = param_4;
    func_0x00010c0fe900();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11276c960;
    uVar2 = *(undefined8 *)(param_2 + lVar6);
    *(ulong *)(param_2 + lVar6) = uVar4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276c964;
    if (*(long *)(param_2 + lVar5) != 0) {
      func_0x00010c12c9c0(param_2);
    }
    uVar4 = param_4;
    func_0x00010bfdcc20();
    if ((((int)uVar4 != 0) && (*(long *)(param_2 + lVar6) != 0)) ||
       (*(long *)(param_2 + lVar7) != 0)) {
      puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      uVar2 = *(undefined8 *)(param_2 + lVar5);
      *(undefined **)(param_2 + lVar5) = puVar3;
      _objc_release(uVar2);
      func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar5),param_3,param_2);
      func_0x00010bef9040(param_2,param_3,*(undefined8 *)(param_2 + lVar5));
    }
    uVar4 = param_4;
    func_0x00010c0fe900();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + lVar6);
    *(ulong *)(param_2 + lVar6) = uVar4;
    _objc_release(uVar2);
    uVar4 = param_4;
    func_0x00010c08cb00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + _DAT_11276c958);
    *(ulong *)(param_2 + _DAT_11276c958) = uVar4;
    _objc_release(uVar2);
    uVar4 = param_4;
    func_0x00010bf85d80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_2 + _DAT_11276c944),param_3,uVar4);
    _objc_release(uVar4);
    func_0x00010c106e40(param_4);
    func_0x00010b81662c();
    uVar4 = param_4;
    dVar8 = param_1;
    func_0x00010c08cb00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5ca0();
    param_1 = param_1 * dVar8;
    func_0x00010b816218();
    lVar6 = (long)_DAT_11276c940;
    func_0x00010c1dff40((double)(long)(param_1 * dVar8) / dVar8,*(undefined8 *)(param_2 + lVar6));
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010c2594a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_2 + lVar6),param_3,uVar4);
    _objc_release(uVar4);
    func_0x00010c1cbe20(param_2);
  }
LAB_107c88a48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107c88a64; end: 107c88a87; -[SCDiscoverFeedMyStoriesCircleCell _handleTapOnPostStoryActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c968),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_11276c95c),param_1);
  return;
}



/* Entry: 107c88a88; end: 107c88aab; -[SCDiscoverFeedMyStoriesCircleCell _handleTapOnPlayStoryActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c968),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_11276c960),param_1);
  return;
}



/* Entry: 107c88aac; end: 107c88c0b; -[SCDiscoverFeedMyStoriesCircleCell didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_11276c93c));
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107c88c0c;
    puStack_60 = &UNK_110850cf8;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c88c0c; end: 107c88c43;  */

void FUN_107c88c0c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd8500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c88c44; end: 107c88d37; -[SCDiscoverFeedMyStoriesCircleCell _calculateCellFrameAndDispatchEventIfNecessary:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf20c00(param_1);
  func_0x00010bf51460(param_1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14c760();
  iVar1 = (int)puVar3;
  _CGRectIntersectsRect();
  _objc_release(puVar2);
  if (iVar1 != 0) {
    func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_11276c93c),param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c88d38; end: 107c88d47; -[SCDiscoverFeedMyStoriesCircleCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c88d38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c968);
}



/* Entry: 107c88d48; end: 107c88d87; -[SCDiscoverFeedMyStoriesCircleCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c968;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c88d88; end: 107c88d97; -[SCDiscoverFeedMyStoriesCircleCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c88d88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c954);
}



/* Entry: 107c88d98; end: 107c88da7; -[SCDiscoverFeedMyStoriesCircleCell imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c88d98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c96c);
}



/* Entry: 107c88da8; end: 107c88db7; -[SCDiscoverFeedMyStoriesCircleCell setStoryThumbnailImageLoaded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88da8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276c938) = param_3;
  return;
}



/* Entry: 107c88db8; end: 107c88dc7; -[SCDiscoverFeedMyStoriesCircleCell storyThumbnailImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c88db8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c970);
}



/* Entry: 107c88dc8; end: 107c88e07; -[SCDiscoverFeedMyStoriesCircleCell setStoryThumbnailImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c970;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c88e08; end: 107c88e17; -[SCDiscoverFeedMyStoriesCircleCell storiesConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c88e08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c974);
}



/* Entry: 107c88e18; end: 107c88e57; -[SCDiscoverFeedMyStoriesCircleCell setStoriesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c974;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c88e58; end: 107c88fe7; -[SCDiscoverFeedMyStoriesCircleCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c88e58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c974,0);
  _objc_storeStrong(param_1 + _DAT_11276c970,0);
  _objc_storeStrong(param_1 + _DAT_11276c96c,0);
  _objc_storeStrong(param_1 + _DAT_11276c954,0);
  _objc_storeStrong(param_1 + _DAT_11276c968,0);
  _objc_storeStrong(param_1 + _DAT_11276c950,0);
  _objc_storeStrong(param_1 + _DAT_11276c94c,0);
  _objc_storeStrong(param_1 + _DAT_11276c948,0);
  _objc_storeStrong(param_1 + _DAT_11276c964,0);
  _objc_storeStrong(param_1 + _DAT_11276c93c,0);
  _objc_storeStrong(param_1 + _DAT_11276c95c,0);
  _objc_storeStrong(param_1 + _DAT_11276c960,0);
  _objc_storeStrong(param_1 + _DAT_11276c958,0);
  _objc_storeStrong(param_1 + _DAT_11276c944,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c940,0);
  return;
}



/* Entry: 107c88fe8; end: 107c88ffb;  */

void FUN_107c88fe8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107c88ffc; end: 107c890d3; -[SCDiscoverFeedMyStoriesCircleSeperatorCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c88ffc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa538;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c97c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c97c) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c890d4; end: 107c89143; -[SCDiscoverFeedMyStoriesCircleSeperatorCell setViewModel:] */

void FUN_107c890d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d7428;
  _objc_opt_class(PTR_PTR_1126d7428);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bde26c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c89144; end: 107c89207; -[SCDiscoverFeedMyStoriesCircleSeperatorCell _compareAndUpdateViewModelIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c89144(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276c980;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_107c891f0;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    func_0x00010c1cbe20(param_1);
  }
LAB_107c891f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c89208; end: 107c89377; -[SCDiscoverFeedMyStoriesCircleSeperatorCell setNeedsLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c89208(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fa538;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_setNeedsLayout_1126509b0);
  lVar7 = (long)_DAT_11276c97c;
  uVar1 = *(ulong *)(param_2 + lVar7);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_2 + lVar7));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  puVar4 = PTR_PTR_1126d7428;
  uVar6 = *(ulong *)(param_2 + _DAT_11276c980);
  _objc_retain(uVar6);
  _objc_opt_class(puVar4);
  uVar5 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar1 = uVar6;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  func_0x00010c106e40(uVar1);
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0x3ff0000000000000;
  func_0x00010b816528(0,0,0x3ff0000000000000,param_1);
  uVar3 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c19f0e0(uVar8,uVar9,uVar10,param_1,uVar3);
  _objc_release(uVar3);
  return;
}



/* Entry: 107c89378; end: 107c893ef; +[SCDiscoverFeedMyStoriesCircleSeperatorCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107c89378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d7428;
  _objc_opt_class(PTR_PTR_1126d7428);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106e40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = 0x3ff0000000000000;
  return auVar4;
}



/* Entry: 107c893f0; end: 107c894ff; -[SCDiscoverFeedMyStoriesCircleSeperatorCell viewportDidUpdateViewportFrame:dragging:decelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c893f0(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = param_1;
  dVar6 = param_3;
  func_0x00010bfb68e0();
  if (dVar4 <= param_3) {
    dVar5 = 0.0;
    dVar4 = param_1;
    if (param_1 <= 0.0) {
      dVar4 = 0.0;
    }
    func_0x00010bfb68e0(param_5);
    func_0x00010bfb68e0(param_5);
    dVar4 = 1.0 - dVar4 / (dVar6 + dVar5);
  }
  else {
    func_0x00010bfb68e0(param_5);
    dVar4 = (dVar4 - param_1) / param_3;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  dVar6 = 100.0;
  if (dVar4 <= 100.0) {
    dVar6 = dVar4;
  }
  lVar2 = param_5;
  func_0x00010c0d4b60(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar6,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar2,param_6,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  pdVar1 = (double *)(param_5 + _DAT_11276c978);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
  return;
}



/* Entry: 107c89500; end: 107c8950f; -[SCDiscoverFeedMyStoriesCircleSeperatorCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c89500(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c980);
}



/* Entry: 107c89510; end: 107c89527; -[SCDiscoverFeedMyStoriesCircleSeperatorCell viewportFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c89510(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c978);
}



/* Entry: 107c89528; end: 107c8953f; -[SCDiscoverFeedMyStoriesCircleSeperatorCell setViewportFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c89528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276c978);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107c89540; end: 107c8954f; -[SCDiscoverFeedMyStoriesCircleSeperatorCell myStoriesSectionInScreenPercentPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c89540(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c984);
}



/* Entry: 107c89550; end: 107c8958f; -[SCDiscoverFeedMyStoriesCircleSeperatorCell setMyStoriesSectionInScreenPercentPublisher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c89550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c984;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c89590; end: 107c895df; -[SCDiscoverFeedMyStoriesCircleSeperatorCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c89590(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c984,0);
  _objc_storeStrong(param_1 + _DAT_11276c980,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c97c,0);
  return;
}



/* Entry: 107c895e0; end: 107c89a17; -[SCDiscoverFeedMyStoriesViewCountView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107c895e0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126fa540;
  puVar1 = &uStack_b8;
  uStack_b8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar6 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c988);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11276c988) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    func_0x00010c219b60(puVar2);
    func_0x00010c182220(puVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar2);
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    puVar5 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c98c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c98c) = puVar5;
    _objc_release(uVar3);
    _objc_retain(puVar5);
    func_0x00010c219b60(puVar5);
    func_0x00010c21ad00(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar5);
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    puStack_a8 = puVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    puStack_a0 = puVar11;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf49420(0x4031000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    puStack_98 = puVar13;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf49420(0x4031000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar5;
    puStack_90 = puVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar5;
    puStack_88 = puVar18;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar5;
    puStack_80 = puVar21;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf49420(0x4042800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar23;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar24;
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010bfe9720(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11276c988;
  func_0x00010c1a9f00(*(undefined8 *)((long)puVar6 + lVar25));
  _objc_release(param_3);
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar6 + lVar25));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return puVar6;
}



/* Entry: 107c89a18; end: 107c89a87; -[SCDiscoverFeedMyStoriesViewCountView setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c89a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010bfe9720(param_3,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11276c988;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1));
  _objc_release(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 107c89a88; end: 107c89ab7; -[SCDiscoverFeedMyStoriesViewCountView setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c89a88(long param_1)

{
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276c98c));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 107c89ab8; end: 107c89adb; -[SCDiscoverFeedMyStoriesViewCountView intrinsicContentSize] */

undefined1  [16] FUN_107c89ab8(double param_1)

{
  undefined1 auVar1 [16];
  
  func_0x00010bde8220();
  auVar1._0_8_ = param_1 + 24.0;
  auVar1._8_8_ = 0x4042800000000000;
  return auVar1;
}



/* Entry: 107c89adc; end: 107c89b87; -[SCDiscoverFeedMyStoriesViewCountView _contentWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107c89adc(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar1 = *(long *)(param_2 + _DAT_11276c988);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276c98c;
  if (lVar1 == 0) {
    dVar5 = 17.0;
  }
  else {
    lVar2 = *(long *)(param_2 + lVar4);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_1 = 21.0;
    dVar5 = 17.0;
    if (lVar3 != 0) {
      dVar5 = 21.0;
    }
  }
  func_0x00010c0699c0(*(undefined8 *)(param_2 + lVar4));
  return dVar5 + param_1;
}



/* Entry: 107c89b88; end: 107c89bc7; -[SCDiscoverFeedMyStoriesViewCountView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c89b88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c98c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c988,0);
  return;
}



/* Entry: 107c89bc8; end: 107c89dab;  */

void FUN_107c89bc8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_new();
  func_0x00010c1c82e0(0x402e000000000000);
  func_0x00010c1c3ba0(0x402e000000000000,puVar1);
  func_0x00010c1bdb00(puVar1);
  func_0x00010c166c00(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_opt_new();
  func_0x00010c1fe7a0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf51e00();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar7 = param_1;
  FUN_107c925f4(param_1,puVar6);
  _objc_release(param_1);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    if (lRam0000000113727828 != -1) {
      func_0x00010002a2fc(0x113727828,&PTR___NSConcreteGlobalBlock_110a01768);
    }
    uVar7 = uRam0000000113727830;
    _objc_retain(uRam0000000113727830);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 107c89dac; end: 107c89dff;  */

void FUN_107c89dac(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727828 != -1) {
    func_0x00010002a2fc(0x113727828,&PTR___NSConcreteGlobalBlock_110a01768);
  }
  uVar1 = uRam0000000113727830;
  _objc_retain(uRam0000000113727830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c89e00; end: 107c89e33;  */

void FUN_107c89e00(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_107c89e34(0x3fbd9e83e425aee6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727830;
  uRam0000000113727830 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c89e34; end: 107c89e7f;  */

void FUN_107c89e34(undefined8 param_1)

{
  _objc_alloc(PTR_PTR_1126c2188);
  func_0x00010c01b0c0(0x3feb99999999999a,0x3fee7ef9db22d0e5,0x3f9ba5e353f7ced9,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c89e80; end: 107c89ed3;  */

void FUN_107c89e80(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727838 != -1) {
    func_0x00010002a2fc(0x113727838,&PTR___NSConcreteGlobalBlock_110a01788);
  }
  uVar1 = uRam0000000113727840;
  _objc_retain(uRam0000000113727840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c89ed4; end: 107c89f0f;  */

void FUN_107c89ed4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e858f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113727840;
  puRam0000000113727840 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c89f10; end: 107c8a02f;  */

void FUN_107c89f10(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined *puVar1;
  double dVar2;
  float fVar3;
  
  puVar1 = PTR_PTR_1126cc4b8;
  dVar2 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  if (param_8 == 0) {
    func_0x00010bf1fc80(puVar1);
  }
  else {
    func_0x00010bf45ca0();
  }
  fVar3 = (float)dVar2;
  puVar1 = PTR_PTR_1126d7430;
  _objc_alloc(PTR_PTR_1126d7430);
  func_0x00010bf1fb60(PTR_PTR_1126cc4b8);
  func_0x00010bff9360((double)fVar3,dVar2,param_1,puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c8a030; end: 107c8a03f; -[SCStoriesEverywhereCollectionViewCell setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8a030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c994),PTR_s_setImageFetchingService__1126482d8);
  return;
}



/* Entry: 107c8a040; end: 107c8a0a7; -[SCStoriesEverywhereCollectionViewCell setStoriesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8a040(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c998);
  *(undefined8 *)(param_1 + _DAT_11276c998) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c20c5a0(*(undefined8 *)(param_1 + _DAT_11276c994),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c8a0a8; end: 107c8a0b7; -[SCStoriesEverywhereCollectionViewCell setBitmojiImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8a0a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c171150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c994),PTR_s_setBitmojiImageFetcher__112639e70);
  return;
}



/* Entry: 107c8a0b8; end: 107c8a0c7; -[SCStoriesEverywhereCollectionViewCell setBitmojiSelfieFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8a0b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c171470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c994),PTR_s_setBitmojiSelfieFetcher__112639f38);
  return;
}



/* Entry: 107c8a0c8; end: 107c8a0f7; -[SCStoriesEverywhereCollectionViewCell operaBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8a0c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c994);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c8a0f8; end: 107c8a107; -[SCStoriesEverywhereCollectionViewCell storyThumbnailImageLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8a0f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c994),PTR_s_storyThumbnailImageLoaded_112674790);
  return;
}



/* Entry: 107c8a108; end: 107c8a3bf; -[SCStoriesEverywhereCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c8a108(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fa548;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d7438;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c994);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c994) = puVar2;
    _objc_release(uVar6);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar7 = (long)_DAT_11276c99c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010c18b5e0(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c1c8340(0x3fd0000000000000);
    func_0x00010c178280(puVar4);
    func_0x00010c18b5e0(puVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar5 = PTR_PTR_1126b56f8;
    _objc_opt_new();
    lVar8 = (long)_DAT_11276c9a0;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar5;
    _objc_release(uVar6);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar7 = (long)_DAT_11276c9a4;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar5;
    _objc_release(uVar6);
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c8a3c0; end: 107c8a5ab; -[SCStoriesEverywhereCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8a3c0(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fa548;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar6 = (long)_DAT_11276c9a8;
  func_0x00010bfe5ca0(*(undefined8 *)(param_5 + lVar6));
  dVar9 = param_3 * (1.0 - param_1);
  dVar11 = dVar9 * 0.5;
  func_0x00010bfe5ae0(*(undefined8 *)(param_5 + lVar6));
  dVar12 = param_4 * dVar9;
  func_0x00010bfe5ca0(*(undefined8 *)(param_5 + lVar6));
  dVar13 = param_3 * dVar9;
  func_0x00010bfe5ca0(*(undefined8 *)(param_5 + lVar6));
  func_0x00010b816528(dVar11,dVar12,dVar13,param_3 * dVar9);
  lVar5 = (long)_DAT_11276c994;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  lVar7 = (long)_DAT_11276c99c;
  lVar8 = (long)_DAT_11276c9ac;
  uVar10 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar8),0x7fefffffffffffff,
                      *(undefined8 *)(param_5 + lVar7));
  puVar2 = PTR_PTR_1126c2100;
  uVar4 = *(ulong *)(param_5 + _DAT_11276c9b0);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  dVar11 = param_3 - *(double *)(param_5 + lVar8);
  dVar12 = dVar11 * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetMaxY();
  dVar9 = dVar11;
  func_0x00010bf85a40(*(undefined8 *)(param_5 + lVar6));
  param_4 = dVar9 * param_4;
  func_0x00010bf859e0(uVar1);
  func_0x00010b8162e0(dVar12,(dVar11 + param_4) - dVar9,*(undefined8 *)(param_5 + lVar8),uVar10);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
  lVar6 = (long)_DAT_11276c9a0;
  if (*(long *)(param_5 + lVar6) != 0) {
    param_3 = param_3 + -48.0;
    dVar9 = param_3 * 0.5;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
    _CGRectGetMaxY();
    func_0x00010b816528(dVar9,param_3 + -11.0,0x4048000000000000,0x4036000000000000);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 107c8a5ac; end: 107c8a61b; -[SCStoriesEverywhereCollectionViewCell setViewModel:] */

void FUN_107c8a5ac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2100;
  _objc_opt_class(PTR_PTR_1126c2100);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bde26c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c8a61c; end: 107c8aaf7; -[SCStoriesEverywhereCollectionViewCell _compareAndUpdateViewModelIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8a61c(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11276c9b0;
  uVar6 = *(ulong *)(param_2 + lVar7);
  _objc_retain(uVar6);
  _objc_retain(param_4);
  if (uVar6 == param_4) {
    _objc_release(param_4);
    _objc_release(uVar6);
  }
  else {
    if (param_4 == 0) {
      _objc_release(uVar6);
    }
    else {
      uVar1 = uVar6;
      func_0x00010c071ae0(uVar6,param_3,param_4);
      _objc_release(param_4);
      _objc_release(uVar6);
      if ((uVar1 & 1) != 0) goto LAB_107c8aad4;
    }
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_2 + lVar7);
    *(ulong *)(param_2 + lVar7) = param_4;
    _objc_release(uVar2);
    uVar6 = param_4;
    func_0x00010c08cb00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11276c9a8;
    uVar2 = *(undefined8 *)(param_2 + lVar7);
    *(ulong *)(param_2 + lVar7) = uVar6;
    _objc_release(uVar2);
    uVar6 = param_4;
    func_0x00010c25b980(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c07bfa0();
    lVar8 = (long)_DAT_11276c994;
    func_0x00010c1b3ca0(*(undefined8 *)(param_2 + lVar8),param_3,uVar1);
    _objc_release(uVar6);
    uVar2 = *(undefined8 *)(param_2 + lVar7);
    _objc_retain(uVar2);
    func_0x00010c106e40(param_4);
    func_0x00010b81662c();
    dVar9 = param_1;
    func_0x00010bfe5ca0(uVar2);
    dVar10 = dVar9;
    _objc_release(uVar2);
    func_0x00010b816218();
    dVar10 = (double)(long)(param_1 * dVar9 * dVar10) / dVar10;
    func_0x00010c1dff40(*(undefined8 *)(param_2 + lVar8));
    uVar6 = param_4;
    func_0x00010c25b980(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_2 + lVar8),param_3,uVar6);
    _objc_release(uVar6);
    func_0x00010c106e40(param_4);
    *(double *)(param_2 + _DAT_11276c9ac) = dVar10;
    uVar6 = param_4;
    func_0x00010bf85a00(param_4);
    lVar7 = (long)_DAT_11276c99c;
    func_0x00010c1cfce0(*(undefined8 *)(param_2 + lVar7),param_3,uVar6);
    uVar6 = param_4;
    func_0x00010bf85a60(param_4);
    func_0x00010c21ad00(*(undefined8 *)(param_2 + lVar7),param_3,uVar6);
    uVar6 = param_4;
    func_0x00010bf85a20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_2 + lVar7),param_3,uVar6);
    _objc_release(uVar6);
    uVar6 = param_4;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c0741a0();
    _objc_release(uVar6);
    uVar2 = 0xbf;
    if ((int)uVar1 == 0) {
      uVar2 = 0xc6;
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_2 + lVar7),param_3,puVar3);
    _objc_release(puVar3);
    uVar6 = param_4;
    func_0x00010bf4fe60();
    if ((int)uVar6 != 0) {
      uVar6 = param_4;
      func_0x00010c25a160();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010c0741a0();
      _objc_release(uVar6);
      if ((uVar1 & 1) == 0) {
        uVar6 = param_4;
        func_0x00010c25b980(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar6;
        func_0x00010c26e5c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c141300();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf1fb20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)(param_2 + lVar7),param_3,uVar5);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar1);
        _objc_release(uVar6);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar6 = param_4;
        func_0x00010bf85a20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar3,param_3,&PTR____CFConstantStringClassReference_110ea8d38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(param_2 + lVar7),param_3,puVar3);
        _objc_release(puVar3);
        _objc_release(uVar6);
      }
    }
    uVar6 = param_4;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + _DAT_11276c9b4);
    *(ulong *)(param_2 + _DAT_11276c9b4) = uVar6;
    _objc_release(uVar2);
    uVar6 = param_4;
    func_0x00010c0b4d20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + _DAT_11276c9b8);
    *(ulong *)(param_2 + _DAT_11276c9b8) = uVar6;
    _objc_release(uVar2);
    uVar6 = param_4;
    func_0x00010c152160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + _DAT_11276c9bc);
    *(ulong *)(param_2 + _DAT_11276c9bc) = uVar6;
    _objc_release(uVar2);
    uVar6 = param_4;
    func_0x00010c25b4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar6 == 0) {
      uVar2 = *(undefined8 *)(param_2 + _DAT_11276c9a0);
      uVar6 = 1;
    }
    else {
      uVar6 = param_4;
      func_0x00010c25b4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010bef8740();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + _DAT_11276c9c0);
      *(ulong *)(param_2 + _DAT_11276c9c0) = uVar1;
      _objc_release(uVar2);
      _objc_release(uVar6);
      uVar6 = param_4;
      func_0x00010c25b4a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010bef73a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)_DAT_11276c9a0;
      func_0x00010c2226c0(*(undefined8 *)(param_2 + lVar7),param_3,uVar1);
      _objc_release(uVar1);
      _objc_release(uVar6);
      uVar6 = param_4;
      func_0x00010c0729a0(param_4);
      uVar2 = *(undefined8 *)(param_2 + lVar7);
    }
    func_0x00010c1a7f60(uVar2,param_3,uVar6);
    func_0x00010bf01b40(param_4);
    lVar7 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(dVar10);
    _objc_release(lVar7);
    func_0x00010c1cbe20(param_2);
  }
LAB_107c8aad4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107c8aaf8; end: 107c8ab87; +[SCStoriesEverywhereCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107c8aaf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c2100;
  _objc_opt_class(PTR_PTR_1126c2100);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106e40(uVar1);
  _objc_release(uVar1);
  func_0x00010b81662c(param_1,param_2);
  _objc_release(param_5);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 107c8ab88; end: 107c8ac07; -[SCStoriesEverywhereCollectionViewCell displayStateUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8ab88(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((param_3 & 1) == 0) && (lVar2 = *(long *)(param_1 + _DAT_11276c9bc), lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276c9c4);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar3,param_2,param_1,lVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107c8ac08; end: 107c8ac2f; -[SCStoriesEverywhereCollectionViewCell _handleTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8ac08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c9c4),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_11276c9b4),*(undefined8 *)(param_1 + _DAT_11276c994));
  return;
}



/* Entry: 107c8ac30; end: 107c8accf; -[SCStoriesEverywhereCollectionViewCell _handleLongPressAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8ac30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 == 1) {
    func_0x00010c14c8a0(param_3);
    lVar2 = *(long *)(param_1 + _DAT_11276c9b8);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11276c9c4);
      lVar1 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar3,param_2,param_1,lVar2,lVar1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c8acd0; end: 107c8acf3; -[SCStoriesEverywhereCollectionViewCell _handleTapAddFriendAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8acd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c9c4),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_11276c9c0),*(undefined8 *)(param_1 + _DAT_11276c9a0));
  return;
}



/* Entry: 107c8acf4; end: 107c8ad03; -[SCStoriesEverywhereCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c8acf4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c9c4);
}



/* Entry: 107c8ad04; end: 107c8ad43; -[SCStoriesEverywhereCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8ad04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c9c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c8ad44; end: 107c8ad53; -[SCStoriesEverywhereCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c8ad44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c9b0);
}



/* Entry: 107c8ad54; end: 107c8ad63; -[SCStoriesEverywhereCollectionViewCell imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c8ad54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c9c8);
}



/* Entry: 107c8ad64; end: 107c8ad73; -[SCStoriesEverywhereCollectionViewCell bitmojiImageFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c8ad64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c9cc);
}



/* Entry: 107c8ad74; end: 107c8ad83; -[SCStoriesEverywhereCollectionViewCell bitmojiSelfieFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c8ad74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c9d0);
}



/* Entry: 107c8ad84; end: 107c8ad93; -[SCStoriesEverywhereCollectionViewCell setStoryThumbnailImageLoaded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8ad84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276c990) = param_3;
  return;
}



/* Entry: 107c8ad94; end: 107c8ada3; -[SCStoriesEverywhereCollectionViewCell storyThumbnailImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c8ad94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c9d4);
}



/* Entry: 107c8ada4; end: 107c8ade3; -[SCStoriesEverywhereCollectionViewCell setStoryThumbnailImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8ada4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c9d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c8ade4; end: 107c8adf3; -[SCStoriesEverywhereCollectionViewCell storiesConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c8ade4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c998);
}



/* Entry: 107c8adf4; end: 107c8af13; -[SCStoriesEverywhereCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8adf4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c998,0);
  _objc_storeStrong(param_1 + _DAT_11276c9d4,0);
  _objc_storeStrong(param_1 + _DAT_11276c9d0,0);
  _objc_storeStrong(param_1 + _DAT_11276c9cc,0);
  _objc_storeStrong(param_1 + _DAT_11276c9c8,0);
  _objc_storeStrong(param_1 + _DAT_11276c9b0,0);
  _objc_storeStrong(param_1 + _DAT_11276c9c4,0);
  _objc_storeStrong(param_1 + _DAT_11276c9a4,0);
  _objc_storeStrong(param_1 + _DAT_11276c9c0,0);
  _objc_storeStrong(param_1 + _DAT_11276c9a0,0);
  _objc_storeStrong(param_1 + _DAT_11276c9bc,0);
  _objc_storeStrong(param_1 + _DAT_11276c9b8,0);
  _objc_storeStrong(param_1 + _DAT_11276c9b4,0);
  _objc_storeStrong(param_1 + _DAT_11276c9a8,0);
  _objc_storeStrong(param_1 + _DAT_11276c99c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c994,0);
  return;
}



/* Entry: 107c8af14; end: 107c8af17; -[SCStoriesEverywhereCollectionViewCellModel virtualSection] */

void FUN_107c8af14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c107010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_preferredVirtualSection_11261f620);
  return;
}



/* Entry: 107c8af18; end: 107c8af1f; -[SCStoriesEverywhereCollectionViewCellModel countsTowardVirtualSectionExpansion] */

undefined8 FUN_107c8af18(void)

{
  return 1;
}



/* Entry: 107c8af20; end: 107c8af9b; -[SCStoriesEverywhereStoryView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c8af20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa550;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c9e0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c9e0) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c8af9c; end: 107c8afb7;  */

void FUN_107c8af9c(void)

{
  _objc_opt_new(PTR_PTR_1126d68a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c8afb8; end: 107c8b0ab; -[SCStoriesEverywhereStoryView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8afb8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fa550;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  cVar1 = *(char *)(param_5 + _DAT_11276c9e4);
  func_0x00010bf20c00(param_5);
  if (cVar1 == '\x01') {
    param_2 = 0x3fe0000000000000;
    param_1 = param_3 * 0.15000000000000002 * 0.5;
    func_0x00010bf20c00(param_5);
    func_0x00010bf20c00(param_5);
    param_3 = param_3 * 0.85;
    func_0x00010bf20c00(param_5);
  }
  uVar2 = *(undefined8 *)(param_5 + _DAT_11276c9e0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 107c8b0ac; end: 107c8b113; -[SCStoriesEverywhereStoryView setPreferredEdgeLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8b0ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_3 + _DAT_11276c9e8) = param_1;
  func_0x00010be76e40();
  uVar1 = *(undefined8 *)(param_3 + _DAT_11276c9e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e02c0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c8b114; end: 107c8b163; -[SCStoriesEverywhereStoryView setIsRectangularShape:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8b114(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_11276c9e4) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c8b164; end: 107c8b1e3; -[SCStoriesEverywhereStoryView setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8b164(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9ec);
  *(undefined8 *)(param_1 + _DAT_11276c9ec) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa2c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c8b1e4; end: 107c8b247; -[SCStoriesEverywhereStoryView setStoriesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8b1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_11276c9f0) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9e0);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c5a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c8b248; end: 107c8b2c7; -[SCStoriesEverywhereStoryView setBitmojiSelfieFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8b248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9f4);
  *(undefined8 *)(param_1 + _DAT_11276c9f4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171460();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c8b2c8; end: 107c8b347; -[SCStoriesEverywhereStoryView setBitmojiImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8b2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9f8);
  *(undefined8 *)(param_1 + _DAT_11276c9f8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171140();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c8b348; end: 107c8b38f; -[SCStoriesEverywhereStoryView storyThumbnailImageLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c8b348(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25b5a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107c8b390; end: 107c8b40f; -[SCStoriesEverywhereStoryView setStoriesThumbnailCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8b390(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9fc);
  *(undefined8 *)(param_1 + _DAT_11276c9fc) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c8b410; end: 107c8b52b; -[SCStoriesEverywhereStoryView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8b410(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c21d0;
  _objc_opt_class(PTR_PTR_1126c21d0);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11276ca00;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_107c8b50c;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c26e5c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee4da0(param_1);
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_1);
  }
LAB_107c8b50c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c8b52c; end: 107c8b58b; -[SCStoriesEverywhereStoryView _updateWithStoryThumbnailViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8b52c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bebb400(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c9e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c8b58c; end: 107c8b783; -[SCStoriesEverywhereStoryView _showStoryThumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c8b58c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276c9e0;
  lVar1 = *(long *)(param_3 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_3 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa2c0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c5a0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b3ca0();
    _objc_release(uVar2);
    func_0x00010be76e40(param_3);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e02c0(param_1,param_2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c920();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171460();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171140();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_3,param_4,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107c8b784; end: 107c8b7af; -[SCStoriesEverywhereStoryView _preferredThumbnailSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107c8b784(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + _DAT_11276c9e8) * 0.85;
  if (*(char *)(param_1 + _DAT_11276c9e4) == '\0') {
    dVar1 = *(double *)(param_1 + _DAT_11276c9e8);
  }
  return dVar1;
}


