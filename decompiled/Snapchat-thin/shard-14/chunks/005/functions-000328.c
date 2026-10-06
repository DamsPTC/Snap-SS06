/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b29eebc; end: 10b29f193; -[SCCardBackgroundView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29eebc(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined1 auStack_b0 [32];
  double dStack_90;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1127061b8;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010c112660(param_5);
  dVar6 = param_1;
  dVar8 = param_2;
  func_0x00010bf20c00(param_5);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  bVar1 = false;
  if ((param_1 == param_3) && (bVar1 = false, !NAN(param_2) && !NAN(param_4))) {
    bVar1 = param_2 == param_4;
  }
  if (!bVar1) {
    func_0x00010bf20c00(param_5);
    dVar7 = dVar6;
    func_0x00010bf52660(param_5);
    func_0x00010bf525a0(param_5);
    dVar9 = dVar7;
    func_0x00010bf525a0(param_5);
    func_0x00010bf199e0(dVar6,dVar8,param_3,param_4,dVar7,dVar9,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    lVar4 = param_5;
    func_0x00010c22a660(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(lVar4);
    _objc_release(puVar2);
    dVar6 = param_3;
    dVar8 = param_4;
    func_0x00010bf20c00(param_5);
    func_0x00010c1e2520(dVar6,dVar8,param_5);
  }
  lVar4 = (long)_DAT_11278e170;
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar3);
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar7 = -20.0;
  func_0x00010c19f0e0(0xc034000000000000,0xc034000000000000,dVar6 + 40.0,dVar8,
                      *(undefined8 *)(param_5 + lVar4));
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  _CGRectGetMaxY();
  lVar5 = (long)_DAT_11278e174;
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  dVar6 = dVar7;
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar8 = dVar6;
  _objc_release(uVar3);
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar9 = -20.0;
  _CGRectGetMinY(0xc034000000000000,dVar7,dVar6,uVar11);
  func_0x00010c19f0e0(0xc034000000000000,dVar7,dVar6,dVar8 - dVar9,*(undefined8 *)(param_5 + lVar5))
  ;
  _CGAffineTransformMakeScale(auStack_b0,0xbff0000000000000,0x3ff0000000000000);
  lVar5 = (long)_DAT_11278e178;
  func_0x00010c219960(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bf20c00(param_5);
  dVar6 = dStack_90;
  _CGRectGetWidth();
  dVar8 = dVar6;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  _CGRectGetMaxY();
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  dVar7 = dVar8;
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar9 = dVar7;
  _objc_release(uVar3);
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar10 = dVar6;
  _CGRectGetMinY(dVar6,dVar8,dVar7,uVar11);
  func_0x00010c19f0e0(dVar6,dVar8,dVar7,dVar9 - dVar10,*(undefined8 *)(param_5 + lVar5));
  return;
}



/* Entry: 10b29f194; end: 10b29f1db; -[SCCardBackgroundView traitCollectionDidChange:] */

void FUN_10b29f194(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127061b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed57a0(param_1);
  return;
}



/* Entry: 10b29f1dc; end: 10b29f2ef; -[SCCardBackgroundView setShadowEdges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f1dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c229fa0();
  if (param_3 != uVar1) {
    *(ulong *)(param_1 + (long)_DAT_11278e17c) = param_3;
    if ((param_3 & 1) == 0) {
      func_0x00010c12c960(*(undefined8 *)(param_1 + (long)_DAT_11278e170));
    }
    else {
      uVar1 = param_1;
      func_0x00010c2748e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar1);
    }
    if (((uint)param_3 >> 1 & 1) == 0) {
      func_0x00010c12c960(*(undefined8 *)(param_1 + (long)_DAT_11278e174));
    }
    else {
      uVar1 = param_1;
      func_0x00010c08e8e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar1);
    }
    if (((uint)param_3 >> 3 & 1) == 0) {
      func_0x00010c12c960(*(undefined8 *)(param_1 + (long)_DAT_11278e178));
    }
    else {
      uVar1 = param_1;
      func_0x00010c140d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 10b29f2f0; end: 10b29f357; -[SCCardBackgroundView setCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f2f0(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010bf525a0();
  if (param_1 == dVar1) {
    return;
  }
  *(double *)(param_2 + _DAT_11278e168) = param_1;
  func_0x00010c1e2520(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b29f358; end: 10b29f3b3; -[SCCardBackgroundView setCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f358(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf52660();
  if (param_3 == lVar1) {
    return;
  }
  *(long *)(param_1 + _DAT_11278e16c) = param_3;
  func_0x00010c1e2520(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b29f3b4; end: 10b29f473; -[SCCardBackgroundView topShadowImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f3b4(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11278e170;
  lVar4 = *(long *)(param_2 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                        &PTR____CFConstantStringClassReference_110f62458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    puVar2 = puVar1;
    func_0x00010c25cbc0(puVar1,param_3,(long)(param_1 * 0.5),0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    *(undefined **)(param_2 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar4 = *(long *)(param_2 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b29f474; end: 10b29f533; -[SCCardBackgroundView leftShadowImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f474(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11278e174;
  lVar4 = *(long *)(param_3 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,
                        &PTR____CFConstantStringClassReference_110f62478);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    puVar2 = puVar1;
    func_0x00010c25cbc0(puVar1,param_4,0,(long)(param_2 * 0.5));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    *(undefined **)(param_3 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar4 = *(long *)(param_3 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b29f534; end: 10b29f5f3; -[SCCardBackgroundView rightShadowImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f534(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11278e178;
  lVar4 = *(long *)(param_3 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,
                        &PTR____CFConstantStringClassReference_110f62478);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    puVar2 = puVar1;
    func_0x00010c25cbc0(puVar1,param_4,0,(long)(param_2 * 0.5));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    *(undefined **)(param_3 + lVar5) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar4 = *(long *)(param_3 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b29f5f4; end: 10b29f633; -[SCCardBackgroundView setBackgroundFillColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f5f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e180);
  *(undefined8 *)(param_1 + _DAT_11278e180) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed57b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateColor_112592f90);
  return;
}



/* Entry: 10b29f634; end: 10b29f6d3; -[SCCardBackgroundView _updateColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f634(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + _DAT_11278e184);
  puVar1 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
  }
  func_0x00010bdc0fe0(puVar1);
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(param_1);
  if (puVar2 != (undefined *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b29f6d4; end: 10b29f6e3; -[SCCardBackgroundView shadowEdges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29f6d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e17c);
}



/* Entry: 10b29f6e4; end: 10b29f6f3; -[SCCardBackgroundView cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29f6e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e168);
}



/* Entry: 10b29f6f4; end: 10b29f703; -[SCCardBackgroundView corners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29f6f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e16c);
}



/* Entry: 10b29f704; end: 10b29f713; -[SCCardBackgroundView backgroundFillColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29f704(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e184);
}



/* Entry: 10b29f714; end: 10b29f723; -[SCCardBackgroundView fillColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29f714(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e180);
}



/* Entry: 10b29f724; end: 10b29f737; -[SCCardBackgroundView previousBoundsSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b29f724(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11278e164);
}



/* Entry: 10b29f738; end: 10b29f74b; -[SCCardBackgroundView setPreviousBoundsSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f738(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278e164;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10b29f74c; end: 10b29f78b; -[SCCardBackgroundView setTopShadowImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e170;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29f78c; end: 10b29f7cb; -[SCCardBackgroundView setLeftShadowImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e174;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29f7cc; end: 10b29f80b; -[SCCardBackgroundView setRightShadowImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f7cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e178;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29f80c; end: 10b29f87b; -[SCCardBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29f80c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e178,0);
  _objc_storeStrong(param_1 + _DAT_11278e174,0);
  _objc_storeStrong(param_1 + _DAT_11278e170,0);
  _objc_storeStrong(param_1 + _DAT_11278e180,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e184,0);
  return;
}



/* Entry: 10b29f87c; end: 10b29f94b; -[SCCardContainerView initWithFrame:showsTopCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b29f87c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127061c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278e18c) = param_3;
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf31d60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf31a20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf31de0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b29f94c; end: 10b29fa1f; -[SCCardContainerView layoutSubviews] */

void FUN_10b29f94c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1127061c0;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010c112660(param_5);
  dVar3 = param_1;
  dVar4 = param_2;
  func_0x00010bf20c00(param_5);
  bVar1 = false;
  if ((param_1 == param_3) && (bVar1 = false, !NAN(param_2) && !NAN(param_4))) {
    bVar1 = param_2 == param_4;
  }
  if (!bVar1) {
    func_0x00010bf20c00(param_5);
    uVar2 = param_5;
    func_0x00010bf31d60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar3,dVar4,param_3,param_4);
    _objc_release(uVar2);
    func_0x00010bf20c00(param_5);
    func_0x00010c1e2520(param_3,param_4,param_5);
  }
  return;
}



/* Entry: 10b29fa20; end: 10b29fb27; -[SCCardContainerView cardGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29fa20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  
  lVar4 = (long)_DAT_11278e190;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126e00e0;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c014d40(puVar1,param_2,*(undefined1 *)(param_1 + _DAT_11278e18c));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    dVar5 = *(double *)PTR__CGPointZero_110347540;
    uVar6 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfcd9c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209760(dVar5,uVar6);
    _objc_release(uVar2);
    func_0x00010bf20c00(param_1);
    _CGRectGetHeight();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfcd9c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196020(0x3ff0000000000000,78.0 / dVar5);
    _objc_release(uVar2);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b29fb28; end: 10b29fbcb; -[SCCardContainerView cardBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29fb28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11278e194;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126bee70;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar4),param_2,0x12);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227960(0x3ff0000000000000);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b29fbcc; end: 10b29fc6f; -[SCCardContainerView cardImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29fbcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11278e198;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126e00e8;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar4),param_2,0x12);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227960(0x3ff0000000000000);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b29fc70; end: 10b29fcaf; -[SCCardContainerView setCardBackgroundView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29fc70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e194;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29fcb0; end: 10b29fcef; -[SCCardContainerView setCardGradientView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29fcb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e190;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29fcf0; end: 10b29fd2f; -[SCCardContainerView setCardImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29fcf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e198;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29fd30; end: 10b29fd43; -[SCCardContainerView previousBoundsSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b29fd30(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11278e188);
}



/* Entry: 10b29fd44; end: 10b29fd57; -[SCCardContainerView setPreviousBoundsSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29fd44(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278e188;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10b29fd58; end: 10b29fda7; -[SCCardContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29fd58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e198,0);
  _objc_storeStrong(param_1 + _DAT_11278e190,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e194,0);
  return;
}



/* Entry: 10b29fda8; end: 10b29fdb3; +[SCCardGradientView layerClass] */

void FUN_10b29fda8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 10b29fdb4; end: 10b2a0127; -[SCCardGradientView initWithFrame:showsTopCorners:] */

undefined8 * FUN_10b29fdb4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
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
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1127061c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1675e0();
    _objc_release(puVar2);
    _objc_retain(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c01bf60();
      func_0x00010c16d4a0();
      puVar5 = puVar4;
      func_0x00010c08c0e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227960(0x3ff0000000000000);
      _objc_release(puVar5);
      func_0x00010befbb60(puVar1);
      puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c01bf60();
      _CGAffineTransformMakeScale(&uStack_a0,0xbff0000000000000,0x3ff0000000000000);
      uStack_c8 = uStack_98;
      uStack_d0 = uStack_a0;
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      dStack_b0 = (double)uStack_80;
      func_0x00010c219960(puVar5);
      puVar6 = puVar5;
      func_0x00010c08c0e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      dVar7 = 1.0;
      func_0x00010c227960(0x3ff0000000000000);
      _objc_release(puVar6);
      func_0x00010bf20c00(puVar1);
      _CGRectGetWidth();
      dVar8 = dVar7;
      func_0x00010bf20c00(puVar5);
      _CGRectGetMidX();
      dVar7 = dVar7 - dVar8;
      func_0x00010bf20c00(puVar5);
      _CGRectGetMidY();
      func_0x00010c17a6a0(dVar7,dVar8,puVar5);
      func_0x00010c16d4a0(puVar5);
      func_0x00010befbb60(puVar1);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    _CGAffineTransformMakeScale(&uStack_100,0x3ff0000000000000,0xbff0000000000000);
    uStack_c8 = uStack_f8;
    uStack_d0 = uStack_100;
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    uStack_a8 = uStack_d8;
    dStack_b0 = dStack_e0;
    func_0x00010c219960(puVar4);
    func_0x00010bf20c00(puVar4);
    dVar8 = dStack_e0;
    _CGRectGetMidX();
    dVar7 = dVar8;
    func_0x00010bf20c00(puVar1);
    _CGRectGetHeight();
    dVar9 = dVar7;
    func_0x00010bf20c00(puVar4);
    _CGRectGetMidY();
    func_0x00010c17a6a0(dVar8,dVar7 - dVar9,puVar4);
    func_0x00010c16d4a0(puVar4);
    puVar5 = puVar4;
    func_0x00010c08c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227960(0x3ff0000000000000);
    _objc_release(puVar5);
    func_0x00010befbb60(puVar1);
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    _CGAffineTransformMakeScale(&uStack_130,0xbff0000000000000,0xbff0000000000000);
    uStack_c8 = uStack_128;
    uStack_d0 = uStack_130;
    uStack_b8 = uStack_118;
    uStack_c0 = uStack_120;
    uStack_a8 = uStack_108;
    dStack_b0 = (double)uStack_110;
    func_0x00010c219960(puVar5);
    puVar6 = puVar5;
    func_0x00010c08c0e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    dVar9 = 1.0;
    func_0x00010c227960(0x3ff0000000000000);
    _objc_release(puVar6);
    func_0x00010bf20c00(puVar1);
    _CGRectGetWidth();
    dVar8 = dVar9;
    func_0x00010bf20c00(puVar5);
    _CGRectGetMidX();
    dVar9 = dVar9 - dVar8;
    func_0x00010bf20c00(puVar1);
    _CGRectGetHeight();
    dVar7 = dVar8;
    func_0x00010bf20c00(puVar5);
    _CGRectGetMidY();
    func_0x00010c17a6a0(dVar9,dVar8 - dVar7,puVar5);
    func_0x00010c16d4a0(puVar5);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 10b2a0128; end: 10b2a01b3; -[SCCardGradientView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a0128(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1127061c8;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  lVar1 = (long)_DAT_11278e1a4;
  dVar2 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetMidX();
  param_1 = param_1 - dVar2;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetMidY();
  func_0x00010c17a6a0(param_1,dVar2,*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 10b2a01b4; end: 10b2a01b7; -[SCCardGradientView gradientLayer] */

void FUN_10b2a01b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 10b2a01b8; end: 10b2a04c7; -[SCCardGradientView setGradientColors:animated:duration:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a01b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar8 = (long)_DAT_11278e1a8;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + lVar8);
  *(undefined8 *)(param_2 + lVar8) = param_4;
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar8 = param_2;
  func_0x00010bfcd8e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar3,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b2a04c8;
  puStack_80 = &UNK_110c90c98;
  _objc_retain(puVar3);
  puStack_78 = puVar3;
  func_0x00010bf97e80(param_4,param_3,&puStack_98);
  if (param_5 != 0) {
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_3,param_6);
    puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                        &PTR____CFConstantStringClassReference_110e1aff8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc40();
    lVar8 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar8);
    lVar8 = param_2;
    if (lVar2 == 0) {
      func_0x00010bfcd9c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar8;
      func_0x00010bf416c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1180(puVar4,param_3,lVar2);
      _objc_release(lVar2);
    }
    else {
      lVar2 = param_2;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c10f4e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c296f80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1180(puVar4,param_3,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      func_0x00010c08c0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b200();
    }
    _objc_release(lVar8);
    puVar7 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c216920(puVar4,param_3,puVar7);
    _objc_release(puVar7);
    func_0x00010c192d40(param_1,puVar4);
    lVar8 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(lVar8);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_release(puVar4);
  }
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010bfcd9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puStack_78);
  _objc_release(puVar3);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b2a04c8; end: 10b2a04ff;  */

void FUN_10b2a04c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainAutorelease(param_2);
  func_0x00010bdc0fe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 10b2a0500; end: 10b2a057f; -[SCCardGradientView setGradientColors:animated:completion:] */

void FUN_10b2a0500(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249ca0();
  uVar2 = 0x3ff0000000000000;
  if (param_1 != 0.0) {
    uVar2 = 0x3fd3333333333333;
  }
  func_0x00010c1a40e0(uVar2,param_2,param_3,param_4,param_5,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a0580; end: 10b2a05ff; -[SCCardGradientView setGradientColors:animated:] */

void FUN_10b2a0580(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249ca0();
  uVar2 = 0x3ff0000000000000;
  if (param_1 != 0.0) {
    uVar2 = 0x3fd3333333333333;
  }
  func_0x00010c1a40e0(uVar2,param_2,param_3,param_4,param_5,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a0600; end: 10b2a0607; -[SCCardGradientView setGradientColors:] */

void FUN_10b2a0600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a40d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setGradientColors_animated__112646a50,param_3,0);
  return;
}



/* Entry: 10b2a0608; end: 10b2a0753; -[SCCardGradientView startPointAnimationWithDuration:useCustomTiming:repeatCount:] */

void FUN_10b2a0608(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d40(0x3fe0000000000000,0x3fe0000000000000,0x3fe0000000000000,0x40094af116d38941,
                      0x400921fb54442d18);
  puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_4,
                      &PTR____CFConstantStringClassReference_110f624f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar2,param_4,puVar3);
  func_0x00010c192d40(param_1,puVar2);
  func_0x00010c1eabe0((float)param_2,puVar2);
  if (param_5 == 0) {
    func_0x00010c175620(puVar2,param_4,*(undefined8 *)PTR__kCAAnimationLinear_110346ca8);
  }
  else {
    func_0x00010c175620(puVar2,param_4,*(undefined8 *)PTR__kCAAnimationPaced_110346cb0);
    puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc0c0(0x3ee147ae,0x3f800000,0x3f4ccccd,0x3f000000,
                        PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar2,param_4,puVar3);
    _objc_release(puVar3);
  }
  _CACurrentMediaTime();
  func_0x00010c16fd40(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2a0754; end: 10b2a089b; -[SCCardGradientView endPointAnimationWithDuration:useCustomTiming:repeatCount:] */

void FUN_10b2a0754(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d40(0x3fe0000000000000,0x3fe0000000000000,0x3fe0000000000000,0x3f947ae147ae147b,0)
  ;
  puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_4,
                      &PTR____CFConstantStringClassReference_110f62518);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar2,param_4,puVar3);
  func_0x00010c1eabe0((float)param_2,puVar2);
  func_0x00010c192d40(param_1,puVar2);
  if (param_5 == 0) {
    func_0x00010c175620(puVar2,param_4,*(undefined8 *)PTR__kCAAnimationLinear_110346ca8);
  }
  else {
    func_0x00010c175620(puVar2,param_4,*(undefined8 *)PTR__kCAAnimationPaced_110346cb0);
    puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc0c0(0x3ee147ae,0x3f800000,0x3f4ccccd,0x3f000000,
                        PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar2,param_4,puVar3);
    _objc_release(puVar3);
  }
  _CACurrentMediaTime();
  func_0x00010c16fd40(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2a089c; end: 10b2a098f; -[SCCardGradientView stopActivityAnimationForKey:] */

void FUN_10b2a089c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf03c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _CACurrentMediaTime();
    dVar3 = param_1;
    func_0x00010bf18c20(lVar2);
    dVar4 = param_1 - dVar3;
    func_0x00010bf8b160(lVar2);
    _fmod(dVar4,dVar3);
    lVar1 = lVar2;
    func_0x00010bf51e00(lVar2);
    func_0x00010c1eabe0(0);
    func_0x00010c16fd40(param_1 - dVar4,lVar1);
    func_0x00010bfcd9c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(param_2);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b2a0990; end: 10b2a0a47; -[SCCardGradientView activityAnimationForKey:animationDuration:useCustomTiming:repeatCount:] */

void FUN_10b2a0990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  if (param_5 == &PTR____CFConstantStringClassReference_110f624b8) {
    func_0x00010c24fee0(param_1,param_2,param_3,param_4,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_5 == &PTR____CFConstantStringClassReference_110f624d8) {
    func_0x00010bf950a0(param_1,param_2,param_3,param_4,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_3 = 0;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2a0a48; end: 10b2a0b47; -[SCCardGradientView addActivityAnimationForKey:animationDuration:useCustomTiming:repeatCount:] */

void FUN_10b2a0a48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf03c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_3;
    func_0x00010bef13c0(param_1,param_2,param_3,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) goto LAB_10b2a0b1c;
  }
  else {
    lVar1 = lVar2;
    func_0x00010bf51e00(lVar2);
    func_0x00010c1eabe0(0x7f800000);
  }
  func_0x00010bfcd9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(param_3);
LAB_10b2a0b1c:
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b2a0b48; end: 10b2a0bd3; -[SCCardGradientView startActivityAnimation] */

/* WARNING: Possible PIC construction at 0x00010b2a0ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2a0bac) */

void FUN_10b2a0b48(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c06c100();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c167fe0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bef6a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff199999999999a,0x7ff0000000000000,param_1,
             PTR_s_addActivityAnimationForKey_anima_11259b438,
             &PTR____CFConstantStringClassReference_110f624b8,1);
  return;
}



/* Entry: 10b2a0bd4; end: 10b2a0c2b; -[SCCardGradientView stopActivityAnimation] */

/* WARNING: Possible PIC construction at 0x00010b2a0c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2a0c08) */

void FUN_10b2a0bd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c06c100();
  if ((int)uVar1 != 0) {
    func_0x00010c167fe0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c255810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_stopActivityAnimationForKey__112673028,
               &PTR____CFConstantStringClassReference_110f624b8);
    return;
  }
  return;
}



/* Entry: 10b2a0c2c; end: 10b2a0e73; -[SCCardGradientView animateActivityOnce] */

void FUN_10b2a0c2c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c06c100();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_1;
    func_0x00010bfcd9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x3fe0000000000000);
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1);
    _objc_release(puVar2);
    func_0x00010c16d4c0(puVar1);
    puVar2 = param_1;
    func_0x00010bfcd9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf416c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bfcd9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf416c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bfcd9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf416c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bfcd9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(param_1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010c06c120();
  if (((ulong)puVar2 & 1) != 0) {
    return;
  }
  func_0x00010c168000(puVar1);
  puVar2 = puVar1;
  func_0x00010bfcd8e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b000(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf34ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_changeGradientColors_1125aad60);
  return;
}



/* Entry: 10b2a0e74; end: 10b2a0edb; -[SCCardGradientView startDiscoAnimation] */

void FUN_10b2a0e74(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c06c120();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c168000(param_1);
  uVar1 = param_1;
  func_0x00010bfcd8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b000(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf34ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_changeGradientColors_1125aad60);
  return;
}



/* Entry: 10b2a0edc; end: 10b2a0f33; -[SCCardGradientView stopDiscoAnimation] */

void FUN_10b2a0edc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c06c120();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf697a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a40c0(param_1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c168010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAnimatingDisco__112637a20,0);
  return;
}



/* Entry: 10b2a0f34; end: 10b2a10eb; -[SCCardGradientView changeGradientColors] */

void FUN_10b2a0f34(double *param_1)

{
  double *pdVar1;
  double *pdVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **unaff_x23;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  double *pdStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar1 = param_1;
  func_0x00010c06c120();
  if ((int)pdVar1 != 0) {
    _objc_opt_class(param_1);
    func_0x00010c11f160();
    pdVar1 = param_1;
    _objc_opt_class();
    func_0x00010bf40ca0();
    _objc_retainAutoreleasedReturnValue();
    pdVar2 = pdVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGColorGetComponents();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(*pdVar2 + -0.1,pdVar2[1] + -0.1,pdVar2[2] + -0.1,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_60,param_1);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pdStack_58 = pdVar1;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b2a10ec;
    puStack_70 = &UNK_1108434b0;
    unaff_x23 = &puStack_88;
    _objc_copyWeak(auStack_68,auStack_60);
    func_0x00010c1a40e0(0x3fd999999999999a,param_1);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume(pdVar1);
  pdVar1 = pdVar1 + 4;
  _objc_loadWeakRetained(pdVar1);
  func_0x00010bf34ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pdVar1);
  return;
}



/* Entry: 10b2a10ec; end: 10b2a1117;  */

void FUN_10b2a10ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf34ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2a1118; end: 10b2a1147; +[SCCardGradientView randomColorIndexExcludingIndex:] */

ulong FUN_10b2a1118(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  do {
    uVar1 = 5;
    _arc4random_uniform();
  } while (param_3 == (uVar1 & 0xffffffff));
  return uVar1 & 0xffffffff;
}



/* Entry: 10b2a1148; end: 10b2a122f; +[SCCardGradientView colorAtIndex:] */

void FUN_10b2a1148(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar1 = 0x3fd0d0d0e0000000;
      uVar2 = 0x3fdd1d1d20000000;
      uVar3 = 0x3ff0000000000000;
    }
    else {
      if (param_3 != 1) {
LAB_10b2a1220:
        func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b2a1218;
      }
      uVar1 = 0x3fd19191a0000000;
      uVar2 = 0x3fee3e3e40000000;
      uVar3 = 0x3fef3f3f40000000;
    }
  }
  else if (param_3 == 2) {
    uVar1 = 0x3fefdfdfe0000000;
    uVar2 = 0x3fea7a7a80000000;
    uVar3 = 0x3fa6161620000000;
  }
  else if (param_3 == 3) {
    uVar1 = 0x3fefdfdfe0000000;
    uVar2 = 0x3fd69696a0000000;
    uVar3 = 0x3fd4545460000000;
  }
  else {
    if (param_3 != 4) goto LAB_10b2a1220;
    uVar1 = 0x3fefdfdfe0000000;
    uVar2 = 0x3fd2525260000000;
    uVar3 = 0x3fed9d9da0000000;
  }
  func_0x00010bf41620(uVar1,uVar2,uVar3,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
LAB_10b2a1218:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2a1230; end: 10b2a123f; -[SCCardGradientView gradientColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a1230(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e1a8);
}



/* Entry: 10b2a1240; end: 10b2a124f; -[SCCardGradientView defaultGradientColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a1240(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e1ac);
}



/* Entry: 10b2a1250; end: 10b2a128f; -[SCCardGradientView setDefaultGradientColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a1250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e1ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a1290; end: 10b2a129f; -[SCCardGradientView isAnimatingDisco] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2a1290(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e19c);
}



/* Entry: 10b2a12a0; end: 10b2a12af; -[SCCardGradientView setAnimatingDisco:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a12a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e19c) = param_3;
  return;
}



/* Entry: 10b2a12b0; end: 10b2a12bf; -[SCCardGradientView isAnimatingActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2a12b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e1a0);
}



/* Entry: 10b2a12c0; end: 10b2a12cf; -[SCCardGradientView setAnimatingActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a12c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e1a0) = param_3;
  return;
}



/* Entry: 10b2a12d0; end: 10b2a12df; -[SCCardGradientView topLeftCorner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a12d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e1b0);
}



/* Entry: 10b2a12e0; end: 10b2a131f; -[SCCardGradientView setTopLeftCorner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a12e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e1b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a1320; end: 10b2a132f; -[SCCardGradientView topRightCorner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a1320(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e1a4);
}



/* Entry: 10b2a1330; end: 10b2a136f; -[SCCardGradientView setTopRightCorner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a1330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e1a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a1370; end: 10b2a13cf; -[SCCardGradientView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a1370(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e1a4,0);
  _objc_storeStrong(param_1 + _DAT_11278e1b0,0);
  _objc_storeStrong(param_1 + _DAT_11278e1ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e1a8,0);
  return;
}



/* Entry: 10b2a13d0; end: 10b2a13db; +[SCCardImageView layerClass] */

void FUN_10b2a13d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 10b2a13dc; end: 10b2a16a3; -[SCCardImageView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b2a13dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1127061d0;
  puVar14 = &uStack_b8;
  uStack_b8 = param_5;
  _objc_msgSendSuper2(puVar14,PTR_s_initWithFrame__1125e2948);
  lVar2 = 0;
  if (puVar14 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar16 = (long)_DAT_11278e1b4;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined **)((long)puVar14 + lVar16) = puVar1;
    _objc_release(uVar15);
    func_0x00010c182220(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010befbb60(puVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar16));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar2 = *(long *)((long)puVar14 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_a8 = lVar4;
    uVar5 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar14;
    func_0x00010c08e400(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar15;
    uVar7 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar14;
    func_0x00010c1408a0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar14;
    func_0x00010bf1ff80(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar14;
  }
  ___stack_chk_fail();
  puVar14 = *(undefined8 **)(lVar2 + _DAT_11278e1b4);
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar14,PTR_s_setImage__1126481e8);
  return puVar14;
}



/* Entry: 10b2a16a4; end: 10b2a16b3; -[SCCardImageView setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a16a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e1b4),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 10b2a16b4; end: 10b2a16c7; -[SCCardImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a16b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e1b4,0);
  return;
}



/* Entry: 10b2a16c8; end: 10b2a1803; -[SCDynamicShadowCardView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b2a16c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127061d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11278e1b8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e1bc);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e1bc) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1842e0(0x4024000000000000,puVar1);
    func_0x00010c1fe800(0x3fb999999999999a,puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740(puVar1);
    _objc_release(puVar2);
    func_0x00010c1fe7a0(0,0x3ff0000000000000,puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1795e0(puVar1);
    _objc_release(puVar2);
    func_0x00010c1fe780(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2a1804; end: 10b2a199b; -[SCDynamicShadowCardView initWithFrame:cardColor:shadowEdges:cornerRadius:shadowRadius:shadowOffset:shadowColor:shadowOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b2a1804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_stack_00000000;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puVar1 = &uStack_a0;
  _objc_retain(param_11);
  _objc_retain(param_13);
  puStack_98 = PTR_PTR_1127061d8;
  uStack_a0 = param_9;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_a0,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11278e1b8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e1bc);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e1bc) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1795e0(puVar1);
    func_0x00010c1fe780(puVar1);
    func_0x00010c1842e0(param_5,puVar1);
    func_0x00010c1fe840(param_6,puVar1);
    func_0x00010c1fe7a0(param_7,param_8,puVar1);
    func_0x00010c1fe740(puVar1);
    func_0x00010c1fe800(in_stack_00000000,puVar1);
  }
  _objc_release(param_13);
  _objc_release(param_11);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2a199c; end: 10b2a1a8b; -[SCDynamicShadowCardView setCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a199c(double param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  dVar5 = param_1;
  func_0x00010bf525a0();
  if (param_1 != dVar5) {
    puVar1 = (undefined8 *)(param_2 + _DAT_11278e1c0);
    uVar2 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar2;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    uVar2 = *(undefined8 *)(param_2 + _DAT_11278e1bc);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_s_cornerRadius_1125b2310;
    _NSStringFromSelector(PTR_s_cornerRadius_1125b2310);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c6a0(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    func_0x00010c1cbe20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_layoutIfNeeded_112600d80);
    return;
  }
  return;
}



/* Entry: 10b2a1a8c; end: 10b2a1adb; -[SCDynamicShadowCardView cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a1a8c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11278e1bc);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b2a1adc; end: 10b2a1aeb; -[SCDynamicShadowCardView setCardColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a1adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e1bc),PTR_s_setBackgroundColor__112639330);
  return;
}



/* Entry: 10b2a1aec; end: 10b2a1afb; -[SCDynamicShadowCardView cardColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a1aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf13d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e1bc),PTR_s_backgroundColor_1125a28f8);
  return;
}



/* Entry: 10b2a1afc; end: 10b2a1b83; -[SCDynamicShadowCardView setShadowEdges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a1afc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_1;
  func_0x00010c229fa0();
  if (param_3 == lVar2) {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11278e1c0);
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  *(long *)(param_1 + _DAT_11278e1c4) = param_3;
  if (param_3 != 0xf) {
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + _DAT_11278e1b8));
  }
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10b2a1b84; end: 10b2a1b93; -[SCDynamicShadowCardView shadowEdges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a1b84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e1c4);
}



/* Entry: 10b2a1b94; end: 10b2a1c83; -[SCDynamicShadowCardView setShadowRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a1b94(double param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  dVar5 = param_1;
  func_0x00010c22a0e0();
  if (param_1 != dVar5) {
    puVar1 = (undefined8 *)(param_2 + _DAT_11278e1c0);
    uVar2 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar2;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    uVar2 = *(undefined8 *)(param_2 + _DAT_11278e1bc);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_s_shadowRadius_112668260;
    _NSStringFromSelector(PTR_s_shadowRadius_112668260);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c6a0(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    func_0x00010c1cbe20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_layoutIfNeeded_112600d80);
    return;
  }
  return;
}



/* Entry: 10b2a1c84; end: 10b2a1cd3; -[SCDynamicShadowCardView shadowRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a1c84(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11278e1bc);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a0e0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b2a1cd4; end: 10b2a1dcf; -[SCDynamicShadowCardView setShadowOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a1cd4(double param_1,double param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  dVar6 = param_1;
  dVar7 = param_2;
  func_0x00010c229fe0();
  bVar2 = false;
  if ((param_1 == dVar6) && (bVar2 = false, !NAN(param_2) && !NAN(dVar7))) {
    bVar2 = param_2 == dVar7;
  }
  if (!bVar2) {
    puVar1 = (undefined8 *)(param_3 + _DAT_11278e1c0);
    uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar3;
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    uVar3 = *(undefined8 *)(param_3 + _DAT_11278e1bc);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_s_shadowOffset_112668220;
    _NSStringFromSelector(PTR_s_shadowOffset_112668220);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971c0(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c6a0(uVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    func_0x00010c1cbe20(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_layoutIfNeeded_112600d80);
    return;
  }
  return;
}



/* Entry: 10b2a1dd0; end: 10b2a1e27; -[SCDynamicShadowCardView shadowOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b2a1dd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11278e1bc);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229fe0();
  _objc_release(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b2a1e28; end: 10b2a1ebf; -[SCDynamicShadowCardView setShadowColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a1e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278e1bc);
  _objc_retain(param_3);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_shadowColor_1126681f8;
  _NSStringFromSelector(PTR_s_shadowColor_1126681f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc0fe0();
  _objc_release(param_3);
  func_0x00010c14c6a0(uVar3,param_2,puVar1,uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b2a1ec0; end: 10b2a1f23; -[SCDynamicShadowCardView shadowColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a1ec0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e1bc);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c229f40();
  func_0x00010bf41520(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b2a1f24; end: 10b2a1fc3; -[SCDynamicShadowCardView setShadowOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a1f24(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11278e1bc);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_shadowOpacity_112668238;
  _NSStringFromSelector(PTR_s_shadowOpacity_112668238);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c6a0(uVar1,param_3,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2a1fc4; end: 10b2a2013; -[SCDynamicShadowCardView shadowOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b2a1fc4(float param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11278e1bc);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a040();
  _objc_release(uVar1);
  return (double)param_1;
}



/* Entry: 10b2a2014; end: 10b2a22a7; -[SCDynamicShadowCardView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a2014(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  double *pdVar1;
  double dVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
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
  double dVar19;
  ulong uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1127061d8;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_layoutSubviews_112600e60);
  lVar6 = (long)_DAT_11278e1c0;
  if (*(char *)(param_5 + (long)_DAT_11278e1c8) == '\x01') {
    pdVar1 = (double *)(param_5 + lVar6);
    uVar5 = param_5;
    func_0x00010bf20c00();
    param_1 = *pdVar1;
    param_2 = pdVar1[1];
    param_3 = pdVar1[2];
    param_4 = pdVar1[3];
    _CGRectEqualToRect();
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  pdVar1 = (double *)(param_5 + lVar6);
  func_0x00010bf20c00(param_5);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
  func_0x00010c22a0e0(param_5);
  dVar8 = param_1;
  func_0x00010c229fe0(param_5);
  func_0x00010c229fe0(param_5);
  dVar9 = ABS(param_2);
  if (ABS(param_2) <= ABS(dVar8)) {
    dVar9 = ABS(dVar8);
  }
  dVar15 = dVar9 + param_1 * 2.0;
  func_0x00010bf525a0(param_5);
  dVar9 = dVar9 * -1.2;
  dVar10 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  dVar11 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  dVar13 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  dVar14 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uVar5 = *(ulong *)(param_5 + (long)_DAT_11278e1c4);
  dVar16 = dVar10;
  dVar8 = dVar10 + dVar9;
  if ((uVar5 & 1) != 0) {
    dVar16 = dVar10 - dVar15;
    dVar8 = dVar10;
  }
  dVar17 = dVar11;
  dVar10 = dVar9 + dVar11;
  if ((uVar5 & 2) != 0) {
    dVar17 = dVar11 - dVar15;
    dVar10 = dVar11;
  }
  dVar12 = dVar9 + dVar13;
  dVar18 = dVar13;
  dVar11 = dVar12;
  if ((uVar5 & 4) != 0) {
    dVar18 = dVar13 - dVar15;
    dVar11 = dVar13;
  }
  dVar15 = dVar14 - dVar15;
  dVar9 = dVar9 + dVar14;
  dVar19 = dVar14;
  dVar2 = dVar9;
  if ((uVar5 & 8) != 0) {
    dVar19 = dVar15;
    dVar2 = dVar14;
  }
  func_0x00010bf20c00(param_5);
  dVar9 = dVar9 + dVar17;
  dVar15 = dVar15 + dVar16;
  dVar12 = dVar12 - (dVar17 + dVar19);
  dVar13 = dVar13 - (dVar16 + dVar18);
  lVar6 = (long)_DAT_11278e1b8;
  func_0x00010c19f0e0(dVar9,dVar15,dVar12,dVar13,*(undefined8 *)(param_5 + lVar6));
  uVar7 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf20c00(param_5);
  func_0x00010bf513e0(uVar7);
  dVar9 = dVar10 + dVar9;
  dVar15 = dVar8 + dVar15;
  dVar12 = dVar12 - (dVar10 + dVar2);
  dVar13 = dVar13 - (dVar8 + dVar11);
  lVar6 = (long)_DAT_11278e1bc;
  func_0x00010c19f0e0(dVar9,dVar15,dVar12,dVar13,*(undefined8 *)(param_5 + lVar6));
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  dVar8 = dVar9;
  func_0x00010bf525a0(param_5);
  func_0x00010bf19a00(dVar9,dVar15,dVar12,dVar13,dVar8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_s_shadowPath_112668258;
  _NSStringFromSelector(PTR_s_shadowPath_112668258);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc1040();
  func_0x00010c14c6a0(uVar7);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(puVar3);
  return;
}



/* Entry: 10b2a22a8; end: 10b2a22b7; -[SCDynamicShadowCardView isLayoutOptimisationsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2a22a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e1c8);
}



/* Entry: 10b2a22b8; end: 10b2a22c7; -[SCDynamicShadowCardView setIsLayoutOptimisationsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a22b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e1c8) = param_3;
  return;
}



/* Entry: 10b2a22c8; end: 10b2a2307; -[SCDynamicShadowCardView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a22c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e1bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e1b8,0);
  return;
}



/* Entry: 10b2a2308; end: 10b2a230f;  */

void FUN_10b2a2308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef75b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addCardCornersToView_inRect_with_11259b710,param_3,1);
  return;
}



/* Entry: 10b2a2310; end: 10b2a23f7;  */

void FUN_10b2a2310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_7);
  func_0x00010bdc8ce0(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,param_8);
  func_0x00010bdc8d00(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,param_8);
  func_0x00010bdc6200(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,param_8);
  func_0x00010bdc6220(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10b2a23f8; end: 10b2a24d3;  */

void FUN_10b2a23f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  func_0x00010bdc8ce0(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,0);
  func_0x00010bdc8d00(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,0);
  func_0x00010bdc6200(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,0);
  func_0x00010bdc6220(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10b2a24d4; end: 10b2a24db;  */

void FUN_10b2a24d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addTopCardCornersToView_inRect_w_11259cb00,param_3,1);
  return;
}



/* Entry: 10b2a24dc; end: 10b2a257b;  */

void FUN_10b2a24dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_7);
  func_0x00010bdc8ce0(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,param_8);
  func_0x00010bdc8d00(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10b2a257c; end: 10b2a2583;  */

void FUN_10b2a257c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addBottomCardCornersToView_inRec_11259b650,param_3,1);
  return;
}



/* Entry: 10b2a2584; end: 10b2a2623;  */

void FUN_10b2a2584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_7);
  func_0x00010bdc6200(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,param_8);
  func_0x00010bdc6220(param_1,param_2,param_3,param_4,0,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10b2a2624; end: 10b2a26c3;  */

void FUN_10b2a2624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  func_0x00010bdc6200(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  func_0x00010bdc6220(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 10b2a26c4; end: 10b2a2703;  */

void FUN_10b2a26c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf20c00(param_3);
  func_0x00010bef7580(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


