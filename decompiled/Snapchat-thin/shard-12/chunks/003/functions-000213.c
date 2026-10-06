/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fad090; end: 108fad0ff; -[SCSnapchatterCollectionInfoCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fad090(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ed94,0);
  _objc_storeStrong(param_1 + _DAT_11277ed90,0);
  _objc_storeStrong(param_1 + _DAT_11277ed88,0);
  _objc_storeStrong(param_1 + _DAT_11277ed84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ed80,0);
  return;
}



/* Entry: 108fad100; end: 108fad153; +[SCSnapchatterCollectionSummaryCardViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_108fad100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  auVar2._8_8_ = 0x4053000000000000;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 108fad154; end: 108fad1a3; -[SCSnapchatterCollectionSummaryCardViewCell initWithFrame:] */

undefined1 * FUN_108fad154(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff9c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb0340(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fad1a4; end: 108fad463; -[SCSnapchatterCollectionSummaryCardViewCell _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fad1a4(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar14 = (long)_DAT_11277ed98;
  uVar13 = *(undefined8 *)(param_4 + lVar14);
  *(undefined **)(param_4 + lVar14) = puVar15;
  _objc_release(uVar13);
  func_0x00010c1cfce0(*(undefined8 *)(param_4 + lVar14));
  func_0x00010c21ad00(*(undefined8 *)(param_4 + lVar14));
  func_0x00010c213040(*(undefined8 *)(param_4 + lVar14));
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar14));
  lVar16 = param_4;
  func_0x00010bf4dce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar16);
  puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = *(long *)(param_4 + lVar14);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar16 = lVar1;
  func_0x00010bf49580(param_3 + -64.0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_4 + lVar14);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf49580(0x404e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_4 + lVar14);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010bf4dce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_4 + lVar14);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010beef8c0(puVar15);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(lVar14);
  _objc_release(param_4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(lVar16);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  lVar16 = (long)_DAT_11277ed9c;
  puVar15 = *(undefined **)(lVar1 + lVar16);
  _objc_retain(puVar15);
  _objc_retain(puVar11);
  if (puVar15 == puVar11) {
    _objc_release(puVar11);
    _objc_release(puVar15);
  }
  else {
    if (puVar11 == (undefined *)0x0) {
      _objc_release(puVar15);
    }
    else {
      puVar2 = puVar15;
      func_0x00010c071ae0();
      _objc_release(puVar11);
      _objc_release(puVar15);
      if (((ulong)puVar2 & 1) != 0) goto LAB_108fad568;
    }
    puVar15 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_retain(puVar11);
    _objc_opt_class(puVar15);
    puVar2 = puVar11;
    _objc_opt_isKindOfClass(puVar11,puVar15);
    puVar15 = puVar11;
    if (((ulong)puVar2 & 1) == 0) {
      puVar15 = (undefined *)0x0;
    }
    _objc_retain(puVar15);
    _objc_release(puVar11);
    func_0x00010c16b720(*(undefined8 *)(lVar1 + _DAT_11277ed98));
    _objc_retain(puVar11);
    uVar13 = *(undefined8 *)(lVar1 + lVar16);
    *(undefined **)(lVar1 + lVar16) = puVar11;
    _objc_release(uVar13);
    _objc_release(puVar15);
    func_0x00010c1cbe20(lVar1);
  }
LAB_108fad568:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 108fad464; end: 108fad57f; -[SCSnapchatterCollectionSummaryCardViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fad464(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ed9c;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108fad568;
    }
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11277ed98));
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar3);
    _objc_release(uVar4);
    func_0x00010c1cbe20(param_1);
  }
LAB_108fad568:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fad580; end: 108fad58f; -[SCSnapchatterCollectionSummaryCardViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fad580(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ed9c);
}



/* Entry: 108fad590; end: 108fad5df; -[SCSnapchatterCollectionSummaryCardViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fad590(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ed9c,0);
  _objc_storeStrong(param_1 + _DAT_11277eda0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ed98,0);
  return;
}



/* Entry: 108fad5e0; end: 108fad86f; -[SCSnapchatterCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108fad5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff9c8;
  puVar1 = &uStack_60;
  uStack_60 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR_PTR_1126dcca8;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar6 = (long)_DAT_11277eda8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1619c0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar5 = (long)_DAT_11277edac;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_initWeak(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277edb0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277edb0) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277edb4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277edb4) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277edb8);
    *(undefined **)((long)puVar1 + (long)_DAT_11277edb8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277edbc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277edbc) = puVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277edc0) = 0xffffffffffffffff;
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return puVar1;
}



/* Entry: 108fad870; end: 108fad8af;  */

void FUN_108fad870(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebc380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108fad8b0; end: 108fad903;  */

void FUN_108fad8b0(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fad904; end: 108fadc27; -[SCSnapchatterCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fad904(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ff9c8;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126b1910;
  uVar6 = *(ulong *)(param_5 + _DAT_11277edc4);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  func_0x00010bf1fc80(uVar1);
  lVar7 = param_5;
  dVar8 = param_1;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar7);
  func_0x00010c19f0e0(dVar8,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_11277eda8));
  uVar4 = *(undefined8 *)(param_5 + _DAT_11277edbc);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar8,param_2,param_3,param_4);
  _objc_release(uVar4);
  dVar9 = dVar8;
  uVar4 = param_2;
  func_0x00010bea76c0(dVar8,param_2,param_3,param_4,param_5);
  uVar3 = uVar1;
  func_0x00010bf14440();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    func_0x00010c0e1c40(uVar3);
    dVar12 = dVar9;
    func_0x00010c11ef60(uVar3);
    dVar10 = dVar12;
    func_0x00010c0e8ca0(uVar3);
    func_0x00010bea2240(dVar9,uVar4,dVar12,dVar10,param_5);
  }
  lVar7 = (long)_DAT_11277edc8;
  uVar6 = *(ulong *)(param_5 + lVar7);
  uVar5 = (uint)uVar6;
  if ((uVar6 & 1) != 0) {
    dVar9 = dVar8;
    _CGRectGetMinX(dVar8,param_2,param_3,param_4);
    dVar12 = dVar8;
    _CGRectGetMinY(dVar8,param_2,param_3,param_4);
    dVar12 = dVar12 - param_1;
    dVar10 = dVar8;
    _CGRectGetWidth(dVar8,param_2,param_3,param_4);
    dVar11 = param_1;
    func_0x00010b816528(dVar9,dVar12,dVar10,param_1);
    uVar4 = *(undefined8 *)(param_5 + _DAT_11277edb4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar9,dVar12,dVar10,dVar11);
    _objc_release(uVar4);
    uVar5 = (uint)*(undefined8 *)(param_5 + lVar7);
  }
  if ((uVar5 >> 1 & 1) != 0) {
    dVar9 = dVar8;
    _CGRectGetMinX(dVar8,param_2,param_3,param_4);
    dVar12 = dVar8;
    _CGRectGetMaxY(dVar8,param_2,param_3,param_4);
    dVar12 = dVar12 - param_1;
    _CGRectGetWidth(dVar8,param_2,param_3,param_4);
    func_0x00010b816528(dVar9,dVar12,dVar8,param_1);
    uVar4 = *(undefined8 *)(param_5 + _DAT_11277edb8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar9,dVar12,dVar8,param_1);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 108fadc28; end: 108fadd4f; -[SCSnapchatterCollectionViewCell traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fadc28(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ff9c8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_traitCollectionDidChange__11267bf88);
  puVar2 = PTR_PTR_1126b1910;
  uVar6 = *(ulong *)(param_1 + _DAT_11277edc4);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar3 = uVar1;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = uVar1;
    func_0x00010bf13d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277edbc);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 108fadd50; end: 108fadf0b; -[SCSnapchatterCollectionViewCell _setBackgroundShadowByOffset:radius:opacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fadd50(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  lVar6 = param_5;
  dVar7 = param_1;
  uVar9 = param_2;
  uVar5 = param_3;
  uVar8 = param_4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar6);
  _CGRectGetHeight(dVar7,uVar9,uVar5,uVar8);
  bVar1 = (*(ulong *)(param_5 + _DAT_11277edc0) & 1) != 0;
  if (bVar1) {
    dVar7 = dVar7 + 10.0;
  }
  uVar9 = 0;
  if (bVar1) {
    uVar9 = 0xc024000000000000;
  }
  dVar10 = dVar7;
  if ((*(ulong *)(param_5 + _DAT_11277edc0) & 4) != 0) {
    dVar10 = dVar7 + 10.0;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_11277eda8));
  _CGRectGetWidth();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(0xc024000000000000,uVar9,dVar7 + 20.0,dVar10,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar2,param_6,puVar4);
  _objc_release(puVar3);
  lVar6 = (long)_DAT_11277edbc;
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar9);
  _objc_release(uVar5);
  uVar9 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  FUN_108fe9e04(param_1,param_2,param_3,param_4);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108fadf0c; end: 108fadfe7; -[SCSnapchatterCollectionViewCell applyLayoutAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fadf0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff9c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_applyLayoutAttributes__112527ed0,param_3);
  puVar2 = PTR_PTR_1126b1910;
  uVar4 = *(ulong *)(param_1 + _DAT_11277edc4);
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
  if (uVar1 != 0) {
    func_0x00010bf14440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 == 0) {
      FUN_108fdaa20(param_1,param_3);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108fadfe8; end: 108fae2fb; -[SCSnapchatterCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fadfe8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277edc4;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_108fae2e0;
    }
    puVar2 = PTR_PTR_1126b1910;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar5 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    uVar1 = uVar5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    uVar1 = uVar5;
    func_0x00010c244760(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277eda8));
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      lVar7 = (long)_DAT_11277edbc;
      lVar6 = *(long *)(param_1 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar7));
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar6 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066fa0(lVar6);
        _objc_release(uVar4);
        _objc_release(lVar6);
      }
      uVar1 = uVar5;
      func_0x00010bf13d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c22a660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bc00();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    uVar1 = uVar5;
    func_0x00010bf1fb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = uVar5;
      func_0x00010bf1fb20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fcde0(param_1);
      _objc_release(uVar1);
    }
    uVar1 = uVar5;
    func_0x00010c23cf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      lVar7 = (long)_DAT_11277edb0;
      lVar6 = *(long *)(param_1 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar7));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9040(param_1);
        _objc_release(uVar4);
      }
    }
    uVar1 = uVar5;
    func_0x00010bf9e0a0();
    if (uVar1 != 0) {
      func_0x00010bf9e0a0(uVar5);
      func_0x00010bedeca0(param_1);
    }
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar5);
LAB_108fae2e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fae2fc; end: 108fae39f; +[SCSnapchatterCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108fae2fc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = param_1;
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b1910;
  _objc_opt_class(PTR_PTR_1126b1910);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106e40(uVar1);
  if (dVar4 <= param_1) {
    param_1 = dVar4;
  }
  func_0x00010c106e40(uVar1);
  func_0x00010bf1fc80(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar5._8_8_ = param_2 + dVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108fae3a0; end: 108fae48b; -[SCSnapchatterCollectionViewCell setSeparatorMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fae3a0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277edc8;
  if (*(ulong *)(param_1 + lVar2) != param_3) {
    *(ulong *)(param_1 + lVar2) = param_3;
    if ((param_3 & 1) != 0) {
      func_0x00010be3a920(param_1);
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277edb4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    if ((*(byte *)(param_1 + lVar2) >> 1 & 1) != 0) {
      func_0x00010be39620(param_1);
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277edb8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 108fae48c; end: 108fae553; -[SCSnapchatterCollectionViewCell setSeparatorColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fae48c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277edcc;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277edb4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277edb8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fae554; end: 108fae56f; -[SCSnapchatterCollectionViewCell handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fae554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277edd0),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,param_4);
  return;
}



/* Entry: 108fae570; end: 108fae5af; -[SCSnapchatterCollectionViewCell gestureRecognizer:shouldReceiveTouch:] */

uint FUN_108fae570(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x3;
  func_0x00010c0722e0();
  _objc_release(in_x3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108fae5b0; end: 108fae60b; -[SCSnapchatterCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fae5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277eda8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setImageDownloader__1126482a8);
  if ((uVar1 & 1) != 0) {
    func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fae60c; end: 108fae667; -[SCSnapchatterCollectionViewCell setAvatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fae60c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277eda8;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setAvatarFactory__112639090);
  if ((uVar1 & 1) != 0) {
    func_0x00010c16d9c0(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fae668; end: 108fae73f; -[SCSnapchatterCollectionViewCell _initTopSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fae668(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277edb4;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108fae740; end: 108fae817; -[SCSnapchatterCollectionViewCell _initBottomSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fae740(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277edb8;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108fae818; end: 108fae8f3; -[SCSnapchatterCollectionViewCell _didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fae818(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  func_0x00010c252440();
  puVar2 = PTR_PTR_1126b1910;
  if (param_3 == 1) {
    uVar4 = *(ulong *)(param_1 + _DAT_11277edc4);
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
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277edd0);
    uVar3 = uVar1;
    func_0x00010c0b4d20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 108fae8f4; end: 108fae9cb; -[SCSnapchatterCollectionViewCell _didSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fae8f4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b1910;
  uVar4 = *(ulong *)(param_1 + _DAT_11277edc4);
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
  uVar3 = uVar1;
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277edd0);
    uVar3 = uVar1;
    func_0x00010c23cf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fae9cc; end: 108faea53; -[SCSnapchatterCollectionViewCell _setShapeLayerPathRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fae9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11277eda4);
  uVar2 = param_5;
  _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,param_2,param_3,param_4);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bed3bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__updateBackgroundShapViewPath_112592890);
  return;
}



/* Entry: 108faea54; end: 108faebc3; -[SCSnapchatterCollectionViewCell _updateBackgroundShapViewPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faea54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126b1910;
  uVar7 = *(ulong *)(param_5 + _DAT_11277edc4);
  _objc_retain(uVar7);
  _objc_opt_class(puVar2);
  uVar3 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar2);
  uVar1 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar8 = (long)_DAT_11277edbc;
  uVar4 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar6 = param_1;
  func_0x00010bf525a0(uVar1);
  uVar5 = uVar6;
  func_0x00010bf525a0(uVar1);
  func_0x00010bf199e0(param_1,param_2,param_3,param_4,uVar6,uVar5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar5 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar6 = uVar5;
  func_0x00010c22a660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108faebc4; end: 108faec17; -[SCSnapchatterCollectionViewCell _singleTapGestureRecognizer] */

void FUN_108faebc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c18b5e0();
  func_0x00010c1d0120(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108faec18; end: 108faec9f; -[SCSnapchatterCollectionViewCell _updateRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faec18(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277edd4;
  if (param_3 != *(long *)(param_1 + lVar5)) {
    uVar3 = ~(uint)param_3;
    bVar4 = (uVar3 & 3) == 0;
    uVar1 = 2;
    if (bVar4) {
      uVar1 = 3;
    }
    if ((uVar3 & 9) != 0) {
      uVar1 = (ulong)bVar4;
    }
    uVar2 = uVar1 | 4;
    if ((uVar3 & 6) != 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 8;
    if ((uVar3 & 0xc) != 0) {
      uVar1 = uVar2;
    }
    *(ulong *)(param_1 + _DAT_11277edc0) = uVar1;
    func_0x00010bed3ba0();
    *(long *)(param_1 + lVar5) = param_3;
  }
  return;
}



/* Entry: 108faeca0; end: 108faecaf; -[SCSnapchatterCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108faeca0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277edc4);
}



/* Entry: 108faecb0; end: 108faecbf; -[SCSnapchatterCollectionViewCell separatorMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108faecb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277edc8);
}



/* Entry: 108faecc0; end: 108faeccf; -[SCSnapchatterCollectionViewCell separatorColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108faecc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277edcc);
}



/* Entry: 108faecd0; end: 108faecdf; -[SCSnapchatterCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108faecd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277edd0);
}



/* Entry: 108faece0; end: 108faed1f; -[SCSnapchatterCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faece0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277edd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108faed20; end: 108faedcf; -[SCSnapchatterCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faed20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277edd0,0);
  _objc_storeStrong(param_1 + _DAT_11277edcc,0);
  _objc_storeStrong(param_1 + _DAT_11277edc4,0);
  _objc_storeStrong(param_1 + _DAT_11277edb0,0);
  _objc_storeStrong(param_1 + _DAT_11277edac,0);
  _objc_storeStrong(param_1 + _DAT_11277edb8,0);
  _objc_storeStrong(param_1 + _DAT_11277edb4,0);
  _objc_storeStrong(param_1 + _DAT_11277eda8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277edbc,0);
  return;
}



/* Entry: 108faedd0; end: 108faef2f; -[SCSnapchatterTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108faedd0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff9d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dcca8;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277eddc;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar5 = (long)_DAT_11277ede0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ede4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ede4) = puVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277ede8) = 0xffffffffffffffff;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108faef30; end: 108faef4b;  */

void FUN_108faef30(void)

{
  _objc_opt_new(PTR_PTR_1126b52f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108faef4c; end: 108faf03b; -[SCSnapchatterTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faef4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ff9d0;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar1);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_11277eddc));
  uVar2 = *(undefined8 *)(param_5 + _DAT_11277ede4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  func_0x00010bea76c0(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 108faf03c; end: 108faf083; -[SCSnapchatterTableViewCell traitCollectionDidChange:] */

void FUN_108faf03c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff9d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed5820(param_1);
  return;
}



/* Entry: 108faf084; end: 108faf1d3; -[SCSnapchatterTableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faf084(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277edec;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108faf1bc;
    }
    puVar2 = PTR_PTR_1126b1910;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar3);
    uVar1 = uVar4;
    func_0x00010c244760(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277eddc;
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar1);
    func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bed5820(param_1);
    func_0x00010c1cbe20(param_1);
  }
LAB_108faf1bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108faf1d4; end: 108faf267; +[SCSnapchatterTableViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108faf1d4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = param_1;
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b1910;
  _objc_opt_class(PTR_PTR_1126b1910);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106e40(uVar1);
  func_0x00010bf1fc80(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar5._8_8_ = param_2 + dVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108faf268; end: 108faf287; -[SCSnapchatterTableViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faf268(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11277ede8) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11277ede8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed3bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBackgroundShapViewPath_112592890);
  return;
}



/* Entry: 108faf288; end: 108faf2a3; -[SCSnapchatterTableViewCell handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faf288(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277edf0),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,param_4);
  return;
}



/* Entry: 108faf2a4; end: 108faf31f; -[SCSnapchatterTableViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faf2a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277eddc;
  uVar1 = *(ulong *)(param_1 + lVar4);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setImageDownloader__1126482a8);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108faf320; end: 108faf39b; -[SCSnapchatterTableViewCell setAvatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faf320(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277eddc;
  uVar1 = *(ulong *)(param_1 + lVar4);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setAvatarFactory__112639090);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d9c0(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108faf39c; end: 108faf477; -[SCSnapchatterTableViewCell _didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faf39c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  func_0x00010c252440();
  puVar2 = PTR_PTR_1126b1910;
  if (param_3 == 1) {
    uVar4 = *(ulong *)(param_1 + _DAT_11277edec);
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
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277edf0);
    uVar3 = uVar1;
    func_0x00010c0b4d20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 108faf478; end: 108faf4ff; -[SCSnapchatterTableViewCell _setShapeLayerPathRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faf478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11277edd8);
  uVar2 = param_5;
  _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,param_2,param_3,param_4);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bed3bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__updateBackgroundShapViewPath_112592890);
  return;
}



/* Entry: 108faf500; end: 108faf66f; -[SCSnapchatterTableViewCell _updateBackgroundShapViewPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faf500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126b1910;
  uVar7 = *(ulong *)(param_5 + _DAT_11277edec);
  _objc_retain(uVar7);
  _objc_opt_class(puVar2);
  uVar3 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar2);
  uVar1 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar8 = (long)_DAT_11277ede4;
  uVar4 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar6 = param_1;
  func_0x00010bf525a0(uVar1);
  uVar5 = uVar6;
  func_0x00010bf525a0(uVar1);
  func_0x00010bf199e0(param_1,param_2,param_3,param_4,uVar6,uVar5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar5 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar6 = uVar5;
  func_0x00010c22a660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108faf670; end: 108faf8ff; -[SCSnapchatterTableViewCell _updateColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faf670(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126b1910;
  if (lRam00000001138466f0 < 3) {
    uVar7 = *(ulong *)(param_2 + _DAT_11277edec);
    _objc_retain(uVar7);
    _objc_opt_class(puVar2);
    uVar3 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar2);
    uVar1 = uVar7;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar7);
    uVar3 = uVar1;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      lVar8 = (long)_DAT_11277ede4;
      lVar4 = *(long *)(param_2 + lVar8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_2 + lVar8));
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar4 = param_2;
        func_0x00010bf4dce0(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_2 + lVar8);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066fa0(lVar4);
        _objc_release(uVar5);
        _objc_release(lVar4);
      }
      uVar3 = uVar1;
      func_0x00010bf13d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar6 = *(undefined8 *)(param_2 + lVar8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c22a660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bc00();
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar3);
    }
    func_0x00010bf1fc80(uVar1);
    lVar4 = (long)_DAT_11277ede4;
    uVar6 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd00(param_1);
    _objc_release(uVar5);
    _objc_release(uVar6);
    uVar3 = uVar1;
    func_0x00010bf1fb20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar6 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8e0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar5);
  }
  else {
    uVar1 = *(ulong *)(param_2 + _DAT_11277ede4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108faf900; end: 108faf90f; -[SCSnapchatterTableViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108faf900(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277edec);
}



/* Entry: 108faf910; end: 108faf91f; -[SCSnapchatterTableViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108faf910(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277edf0);
}



/* Entry: 108faf920; end: 108faf95f; -[SCSnapchatterTableViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faf920(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277edf0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108faf960; end: 108faf96f; -[SCSnapchatterTableViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108faf960(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ede8);
}



/* Entry: 108faf970; end: 108faf9df; -[SCSnapchatterTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108faf970(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277edf0,0);
  _objc_storeStrong(param_1 + _DAT_11277edec,0);
  _objc_storeStrong(param_1 + _DAT_11277ede0,0);
  _objc_storeStrong(param_1 + _DAT_11277eddc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ede4,0);
  return;
}



/* Entry: 108faf9e0; end: 108fafb17; -[SCSnapchatterAccessoryView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108faf9e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff9d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277edf4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277edf4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277edf8);
    *(undefined **)((long)puVar1 + (long)_DAT_11277edf8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277edfc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277edfc) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ee00);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ee00) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ee04);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ee04) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fafb18; end: 108fafba3;  */

void FUN_108fafb18(void)

{
  _objc_opt_new(PTR_PTR_1126dccb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fafba4; end: 108fafbfb; -[SCSnapchatterAccessoryView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fafba4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff9d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277ee08));
  return;
}



/* Entry: 108fafbfc; end: 108fafc0b; -[SCSnapchatterAccessoryView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fafbfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ee08),PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 108fafc0c; end: 108fafca7; -[SCSnapchatterAccessoryView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fafc0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + _DAT_11277ee0c,param_3);
  puVar1 = PTR_DAT_1126a5b70;
  lVar4 = (long)_DAT_11277ee08;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x000107c318f8(lVar3,puVar1);
  _objc_release(lVar3);
  if ((int)lVar2 != 0 && lVar3 != 0) {
    func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fafca8; end: 108faff53; -[SCSnapchatterAccessoryView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fafca8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
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
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ee10;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108fafee8;
    }
    puVar2 = PTR_PTR_1126b4740;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar3);
    _objc_initWeak(auStack_78,param_1);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108faff54;
    puStack_88 = &UNK_110ad12b0;
    _objc_copyWeak(auStack_80,auStack_78);
    puStack_c8 = puVar2;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x108faff9c;
    puStack_b0 = &UNK_110ad12e0;
    _objc_copyWeak(auStack_a8,auStack_78);
    puStack_f0 = puVar2;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x108faffe4;
    puStack_d8 = &UNK_110ad1310;
    _objc_copyWeak(auStack_d0,auStack_78);
    puStack_118 = puVar2;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x108fb002c;
    puStack_100 = &UNK_110ad1340;
    _objc_copyWeak(auStack_f8,auStack_78);
    _objc_copyWeak(auStack_120,auStack_78);
    func_0x00010c0bccc0(uVar4);
    func_0x00010c1cbe20(param_1);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(uVar4);
LAB_108fafee8:
  _objc_release(param_3);
  return;
}



/* Entry: 108faff54; end: 108fb00bb;  */

void FUN_108faff54(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fb00bc; end: 108fb01eb; -[SCSnapchatterAccessoryView _updateButtonAccessoryViewWithButtonAccessoryViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb00bc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11277edf4;
    lVar2 = *(long *)(param_1 + lVar3);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar2 = param_1 + _DAT_11277ee0c;
      _objc_loadWeakRetained(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1619c0();
      _objc_release(uVar1);
      _objc_release(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar1);
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea1860(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108fb01ec; end: 108fb031b; -[SCSnapchatterAccessoryView _updateDoubleButtonAccessoryViewWithButtonAccessoryViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb01ec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11277ee00;
    lVar2 = *(long *)(param_1 + lVar3);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar2 = param_1 + _DAT_11277ee0c;
      _objc_loadWeakRetained(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1619c0();
      _objc_release(uVar1);
      _objc_release(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar1);
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea1860(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108fb031c; end: 108fb0403; -[SCSnapchatterAccessoryView _updateFriendmojiAccessoryViewWithFriendmojiAccessoryViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb031c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11277edf8;
    lVar2 = *(long *)(param_1 + lVar3);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar1);
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea1860(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108fb0404; end: 108fb0533; -[SCSnapchatterAccessoryView _updateCheckboxAccessoryViewWithCheckboxAccessoryViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0404(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11277edfc;
    lVar2 = *(long *)(param_1 + lVar3);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar2 = param_1 + _DAT_11277ee0c;
      _objc_loadWeakRetained(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1619c0();
      _objc_release(uVar1);
      _objc_release(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar1);
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea1860(param_1,param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108fb0534; end: 108fb05a3; -[SCSnapchatterAccessoryView _setAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0534(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277ee08;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c1a7f60(*(long *)(param_1 + lVar2),param_2,1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb05a4; end: 108fb06ef; -[SCSnapchatterAccessoryView _updateGroupProfileAcessoryViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb05a4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11277ee04;
    lVar2 = *(long *)(param_1 + lVar3);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar2 = param_1 + _DAT_11277ee0c;
      _objc_loadWeakRetained(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1619c0();
      _objc_release(uVar1);
      _objc_release(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar1);
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea1860(param_1,param_2,uVar1);
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010bf25380(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 108fb06f0; end: 108fb06ff; -[SCSnapchatterAccessoryView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb06f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ee10);
}



/* Entry: 108fb0700; end: 108fb071f; -[SCSnapchatterAccessoryView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0700(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ee0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb0720; end: 108fb07bb; -[SCSnapchatterAccessoryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0720(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ee0c);
  _objc_storeStrong(param_1 + _DAT_11277ee10,0);
  _objc_storeStrong(param_1 + _DAT_11277ee08,0);
  _objc_storeStrong(param_1 + _DAT_11277ee04,0);
  _objc_storeStrong(param_1 + _DAT_11277ee00,0);
  _objc_storeStrong(param_1 + _DAT_11277edfc,0);
  _objc_storeStrong(param_1 + _DAT_11277edf8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277edf4,0);
  return;
}



/* Entry: 108fb07bc; end: 108fb0833; -[SCSnapchatterAvatarCircleView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb07bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff9e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1a08;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ee14);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ee14) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb0834; end: 108fb0897; -[SCSnapchatterAvatarCircleView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0834(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff9e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  lVar1 = (long)_DAT_11277ee14;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 108fb0898; end: 108fb09bb; -[SCSnapchatterAvatarCircleView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0898(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cc220;
  _objc_opt_class(PTR_PTR_1126cc220);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11277ee18;
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
      if ((uVar3 & 1) != 0) goto LAB_108fb099c;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010bf13300(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277ee14));
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_1);
  }
LAB_108fb099c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb09bc; end: 108fb09cb; -[SCSnapchatterAvatarCircleView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb09bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ee14),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 108fb09cc; end: 108fb09ff; -[SCSnapchatterAvatarCircleView handleTapOnBitmojiFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb09cc(long param_1)

{
  param_1 = param_1 + _DAT_11277ee1c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fb0a00; end: 108fb0a03; -[SCSnapchatterAvatarCircleView handleTapOnStoryIconFromAvatarView:] */

void FUN_108fb0a00(void)

{
  return;
}



/* Entry: 108fb0a04; end: 108fb0a07; -[SCSnapchatterAvatarCircleView handleLongPressOnStoryIconFromAvatarView:] */

void FUN_108fb0a04(void)

{
  return;
}



/* Entry: 108fb0a08; end: 108fb0a83; -[SCSnapchatterAvatarCircleView bitmojiDidLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0a08(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277ee1c;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf1b300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108fb0a84; end: 108fb0a93; -[SCSnapchatterAvatarCircleView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb0a84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ee18);
}



/* Entry: 108fb0a94; end: 108fb0ab3; -[SCSnapchatterAvatarCircleView actionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0a94(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ee1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb0ab4; end: 108fb0ac7; -[SCSnapchatterAvatarCircleView setActionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ee1c,param_3);
  return;
}



/* Entry: 108fb0ac8; end: 108fb0b13; -[SCSnapchatterAvatarCircleView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0ac8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ee1c);
  _objc_storeStrong(param_1 + _DAT_11277ee18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ee14,0);
  return;
}



/* Entry: 108fb0b14; end: 108fb0c17; -[SCSnapchatterAvatarThumbnailView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb0b14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff9e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4730;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ee20);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ee20) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_11277ee24;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c160fc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb0c18; end: 108fb0d63; -[SCSnapchatterAvatarThumbnailView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0c18(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126ff9e8;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126cb048;
  uVar4 = *(ulong *)(param_5 + _DAT_11277ee28);
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
  lVar6 = (long)_DAT_11277ee20;
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(param_3,param_4,uVar5);
  dVar7 = param_3;
  dVar8 = param_4;
  func_0x00010bf4c7e0(uVar1);
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  func_0x00010b8162e0(dVar8,(dVar7 - param_4) * 0.5,param_3,param_4);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  func_0x00010c19f0e0(param_3 + -12.0,param_4 + -12.0,0x4028000000000000,0x4028000000000000,
                      *(undefined8 *)(param_5 + _DAT_11277ee24));
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar6));
  _objc_release(uVar1);
  return;
}



/* Entry: 108fb0d64; end: 108fb0e37; -[SCSnapchatterAvatarThumbnailView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108fb0d64(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  puVar2 = PTR_PTR_1126cb048;
  uVar4 = *(ulong *)(param_5 + _DAT_11277ee28);
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
  uVar5 = *(undefined8 *)(param_5 + _DAT_11277ee20);
  func_0x00010bf20c00(param_5);
  dVar6 = param_4;
  func_0x00010c23d5a0(param_3,param_4,uVar5);
  func_0x00010bf4c7e0(uVar1);
  func_0x00010bf4c7e0(uVar1);
  _objc_release(uVar1);
  auVar7._0_8_ = param_3 + param_4 + dVar6;
  auVar7._8_8_ = param_2;
  return auVar7;
}



/* Entry: 108fb0e38; end: 108fb0f8b; -[SCSnapchatterAvatarThumbnailView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0e38(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ee28;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108fb0f74;
    }
    puVar2 = PTR_PTR_1126cb048;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar3);
    uVar1 = uVar4;
    func_0x00010bf12da0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277ee20));
    _objc_release(uVar1);
    func_0x00010c07be00(uVar4);
    _objc_release(uVar4);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277ee24));
  }
LAB_108fb0f74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb0f8c; end: 108fb0ff3; -[SCSnapchatterAvatarThumbnailView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ee2c);
  *(undefined8 *)(param_1 + _DAT_11277ee2c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + _DAT_11277ee20),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb0ff4; end: 108fb1003; -[SCSnapchatterAvatarThumbnailView setAvatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb0ff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16d9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ee20),PTR_s_setAvatarFactory__112639090);
  return;
}



/* Entry: 108fb1004; end: 108fb105f; -[SCSnapchatterAvatarThumbnailView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb1004(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277ee30;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c1619c0(*(undefined8 *)(param_1 + _DAT_11277ee20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb1060; end: 108fb106f; -[SCSnapchatterAvatarThumbnailView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb1060(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ee28);
}



/* Entry: 108fb1070; end: 108fb108f; -[SCSnapchatterAvatarThumbnailView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb1070(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ee30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb1090; end: 108fb10fb; -[SCSnapchatterAvatarThumbnailView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb1090(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ee30);
  _objc_storeStrong(param_1 + _DAT_11277ee28,0);
  _objc_storeStrong(param_1 + _DAT_11277ee24,0);
  _objc_storeStrong(param_1 + _DAT_11277ee2c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ee20,0);
  return;
}



/* Entry: 108fb10fc; end: 108fb1227; -[SCSnapchatterBasicInfoView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb10fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff9f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277ee34;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277ee38;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277ee3c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb1228; end: 108fb13eb; -[SCSnapchatterBasicInfoView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb1228(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11277ee40;
  uVar4 = *(ulong *)(param_2 + lVar5);
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
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108fb13d0;
    }
    puVar2 = PTR_PTR_1126d77a8;
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar1 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar4 = param_4;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_4);
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    *(ulong *)(param_2 + lVar5) = uVar1;
    _objc_release(uVar3);
    uVar1 = uVar4;
    func_0x00010c112ee0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_2 + _DAT_11277ee34));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c154fc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_2 + _DAT_11277ee38));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c26b580(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_2 + _DAT_11277ee3c));
    _objc_release(uVar1);
    func_0x00010c112fc0(uVar4);
    *(undefined8 *)(param_2 + _DAT_11277ee44) = param_1;
    func_0x00010c155100(uVar4);
    _objc_release(uVar4);
    *(undefined8 *)(param_2 + _DAT_11277ee48) = param_1;
    func_0x00010c1cbe20(param_2);
  }
LAB_108fb13d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108fb13ec; end: 108fb1627; -[SCSnapchatterBasicInfoView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb13ec(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ff9f0;
  lStack_90 = param_2;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  lVar1 = (long)_DAT_11277ee34;
  dVar6 = 1.79769313486232e+308;
  func_0x00010c23d5a0(*(undefined8 *)(param_2 + lVar1));
  lVar2 = (long)_DAT_11277ee38;
  dVar7 = 1.79769313486232e+308;
  func_0x00010c23d5a0(param_1,*(undefined8 *)(param_2 + lVar2));
  lVar3 = (long)_DAT_11277ee3c;
  dVar8 = 1.79769313486232e+308;
  dVar10 = param_1;
  func_0x00010c23d5a0(param_1,*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf20c00(param_2);
  _CGRectGetMinY();
  dVar4 = dVar10;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar9 = 0.0;
  dVar12 = 0.0;
  if (0.0 < dVar7) {
    dVar12 = dVar7 + *(double *)(param_2 + _DAT_11277ee44);
  }
  if (0.0 < dVar8) {
    dVar9 = dVar8 + *(double *)(param_2 + _DAT_11277ee48);
  }
  dVar10 = dVar10 + (((dVar4 - dVar6) - dVar12) - dVar9) * 0.5;
  dVar5 = 0.0;
  dVar13 = param_1;
  func_0x00010b8162e0(0,dVar10,param_1,dVar6);
  dVar4 = dVar5;
  _CGRectGetMinX();
  dVar9 = dVar5;
  _CGRectGetMaxY(dVar5,dVar10,dVar13,dVar6);
  dVar9 = dVar9 + *(double *)(param_2 + _DAT_11277ee44);
  dVar14 = param_1;
  func_0x00010b8162e0(dVar4,dVar9,param_1,dVar7);
  dVar12 = dVar4;
  _CGRectGetMinX();
  dVar11 = dVar4;
  _CGRectGetMaxY(dVar4,dVar9,dVar14,dVar7);
  dVar11 = dVar11 + *(double *)(param_2 + _DAT_11277ee48);
  func_0x00010b8162e0(dVar12);
  func_0x00010c19f0e0(dVar5,dVar10,dVar13,dVar6,*(undefined8 *)(param_2 + lVar1));
  func_0x00010c19f0e0(dVar4,dVar9,dVar14,dVar7,*(undefined8 *)(param_2 + lVar2));
  func_0x00010c19f0e0(dVar12,dVar11,param_1,dVar8,*(undefined8 *)(param_2 + lVar3));
  return;
}



/* Entry: 108fb1628; end: 108fb16fb; -[SCSnapchatterBasicInfoView _didTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb1628(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126d77a8;
  uVar4 = *(ulong *)(param_1 + _DAT_11277ee40);
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
  uVar3 = uVar1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    param_1 = param_1 + _DAT_11277ee4c;
    _objc_loadWeakRetained(param_1);
    uVar3 = uVar1;
    func_0x00010c268c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd00e0(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fb16fc; end: 108fb180b; -[SCSnapchatterBasicInfoView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb16fc(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR_PTR_1126d77a8;
  ppuVar4 = &puStack_50;
  uVar6 = *(ulong *)(param_3 + _DAT_11277ee40);
  _objc_retain(uVar6);
  _objc_retain(param_5);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  puStack_48 = PTR_PTR_1126ff9f0;
  puStack_50 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&puStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  if (ppuVar4 == (undefined1 **)param_3) {
    uVar3 = uVar1;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = (undefined1 *)0x0;
    if (uVar3 == 0) goto LAB_108fb17e0;
  }
  _objc_retain(ppuVar4);
  puVar5 = (undefined1 *)ppuVar4;
LAB_108fb17e0:
  _objc_release(ppuVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108fb180c; end: 108fb181b; -[SCSnapchatterBasicInfoView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb180c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ee40);
}



/* Entry: 108fb181c; end: 108fb183b; -[SCSnapchatterBasicInfoView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb181c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ee4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


