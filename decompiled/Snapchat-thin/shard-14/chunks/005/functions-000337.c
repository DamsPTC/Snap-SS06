/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2c0f7c; end: 10b2c13f3;  */

void FUN_10b2c0f7c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x3fe0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
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
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c13f4; end: 10b2c1643;  */

void FUN_10b2c13f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c1644; end: 10b2c1687; -[SCPreviewTooltipBalloon setTriangleHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c1644(long param_1,undefined8 param_2,undefined1 param_3)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11278e4e0));
  *(undefined1 *)(param_1 + _DAT_11278e4e4) = param_3;
  return;
}



/* Entry: 10b2c1688; end: 10b2c16c7; -[SCPreviewTooltipBalloon setShadowOpacity:] */

void FUN_10b2c1688(double param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800((float)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2c16c8; end: 10b2c1733; -[SCPreviewTooltipBalloon intrinsicContentSize] */

/* WARNING: Possible PIC construction at 0x00010b2c1704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2c1708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c16c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11278e4dc);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11278e4d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10b2c1734; end: 10b2c1983; -[SCPreviewTooltipBalloon runPopupAnimation] */

void FUN_10b2c1734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf040e0(0x3fc53f7ced916873,0,PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_111186020,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_111186030,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar2);
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c192d40(0x3fd77ced916872b0,puVar2);
  puVar3 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar3);
  _objc_release(puVar4);
  func_0x00010c16fd40(0,puVar3);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf9f5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b2c1984; end: 10b2c198b; -[SCPreviewTooltipBalloon fadeInAndOutWithDuration:] */

void FUN_10b2c1984(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9f5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fadeInAndOutWithDuration_animati_1125c5718,0)
  ;
  return;
}



/* Entry: 10b2c198c; end: 10b2c1e27; -[SCPreviewTooltipBalloon fadeInAndOutWithDuration:animationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_10b2c198c(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0.0 < param_1 && param_4 == 1) {
    dVar11 = 0.09;
    if (param_1 <= 0.09) {
      dVar11 = param_1;
    }
    uVar6 = NEON_fminnm(dVar11 / param_1,0x3fe0000000000000);
    dVar10 = (double)NEON_fminnm((dVar11 + 0.14) / param_1,0x3fe0000000000000);
    dVar8 = -0.2 / param_1 + 1.0;
    dVar7 = dVar10;
    if (dVar10 <= dVar8) {
      dVar7 = dVar8;
    }
    dVar9 = -0.03 / param_1 + 1.0;
    dVar8 = dVar7;
    if (dVar7 <= dVar9) {
      dVar8 = dVar9;
    }
    ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111186020;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_c0 = puVar1;
    func_0x00010c0df720(dVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b8 = puVar2;
    func_0x00010c0df720(dVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b0 = puVar3;
    func_0x00010c0df720(dVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111186030;
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_c8,6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_111183d10;
    dVar11 = 0.0;
  }
  puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_3,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar1,param_3,ppuVar5);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c192d40(param_1,puVar1);
  uVar6 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar6);
  if (param_4 == 1) {
    puVar2 = PTR__OBJC_CLASS___CASpringAnimation_1126b5720;
    func_0x00010bf04040(PTR__OBJC_CLASS___CASpringAnimation_1126b5720,param_3,
                        &PTR____CFConstantStringClassReference_110f62998);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180();
    func_0x00010c216920(puVar2,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3888);
    func_0x00010c1c2d40(0x3ff0000000000000,puVar2);
    func_0x00010c20be40(0x407c200000000000,puVar2);
    func_0x00010c1893a0(0x4038000000000000,puVar2);
    dVar7 = 0.45;
    if (param_1 - dVar11 <= 0.45) {
      dVar7 = param_1 - dVar11;
    }
    func_0x00010c192d40(dVar7,puVar2);
    uVar6 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010bf514c0(uVar6,param_3,0);
    func_0x00010c16fd40(dVar11 + dVar7,puVar2);
    _objc_release(uVar6);
    func_0x00010c19bc40(puVar2,param_3,*(undefined8 *)PTR__kCAFillModeBackwards_110346cd0);
    uVar6 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar6);
    dVar11 = 0.2;
    if (param_1 <= 0.2) {
      dVar11 = param_1;
    }
    puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                        &PTR____CFConstantStringClassReference_110f62998);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180();
    func_0x00010c216920(puVar3,param_3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111860b0);
    dVar7 = dVar11;
    func_0x00010c192d40(dVar11,puVar3);
    uVar6 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010bf514c0(uVar6,param_3,0);
    func_0x00010c16fd40((param_1 + dVar7) - dVar11,puVar3);
    _objc_release(uVar6);
    puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar3,param_3,puVar4);
    _objc_release(puVar4);
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(param_2);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  return *(undefined ***)((long)ppuVar5 + (long)_DAT_11278e4dc);
}



/* Entry: 10b2c1e28; end: 10b2c1e37; -[SCPreviewTooltipBalloon contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c1e28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e4dc);
}



/* Entry: 10b2c1e38; end: 10b2c1e47; -[SCPreviewTooltipBalloon verticalPadding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c1e38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e4d4);
}



/* Entry: 10b2c1e48; end: 10b2c1e57; -[SCPreviewTooltipBalloon horizontalPadding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c1e48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e4d8);
}



/* Entry: 10b2c1e58; end: 10b2c1ea7; -[SCPreviewTooltipBalloon .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c1e58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e4dc,0);
  _objc_storeStrong(param_1 + _DAT_11278e4d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e4e0,0);
  return;
}



/* Entry: 10b2c1ea8; end: 10b2c233f; -[SCProgressOverlayView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b2c1ea8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_112706308;
  puVar1 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278e4e8) = 1;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar4 = (long)_DAT_11278e4ec;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0,0,0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11278e4f0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11278e4f4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11278e4f8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar4));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIProgressView_1126c14e0;
    _objc_alloc();
    func_0x00010c03b440();
    lVar4 = (long)_DAT_11278e4fc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e48a0(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219180(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 10b2c2340; end: 10b2c23a7;  */

void FUN_10b2c2340(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2c23a8; end: 10b2c246b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c23a8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2c246c; end: 10b2c279b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c246c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(double *)(param_1 + 0x28) + 56.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c279c; end: 10b2c2a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c279c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(*(double *)(param_1 + 0x28) * -0.5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e4f8);
  func_0x00010c0bbfa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc008000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c2a60; end: 10b2c2a6f; -[SCProgressOverlayView contentsHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4ec),PTR_s_isHidden_1125fad18);
  return;
}



/* Entry: 10b2c2a70; end: 10b2c2a7f; -[SCProgressOverlayView setContentsHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4ec),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 10b2c2a80; end: 10b2c2b1b; -[SCProgressOverlayView setCancellable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2a80(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(byte *)(param_1 + _DAT_11278e4e8) != param_3) {
    *(char *)(param_1 + _DAT_11278e4e8) = (char)param_3;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11278e4f8),param_2,param_3 ^ 1);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10b2c2b1c;
    puStack_30 = &UNK_1108471b0;
    lStack_28 = param_1;
    func_0x00010c0bc060(*(undefined8 *)(param_1 + _DAT_11278e4fc),param_2,&puStack_48);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10b2c2b1c; end: 10b2c2c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2b1c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11278e4f8;
  iVar6 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
  _objc_retain(param_2);
  func_0x00010c074c20();
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  if (iVar6 == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + lVar7);
    func_0x00010c0bbfa0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(0xc030000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  else {
    lVar3 = lVar2;
    (**(code **)(lVar2 + 0x10))
              (lVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e4f4));
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(0xc008000000000000);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c2c94; end: 10b2c2ca3; -[SCProgressOverlayView attributedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4f0),PTR_s_attributedText_1125a12f8);
  return;
}



/* Entry: 10b2c2ca4; end: 10b2c2cb3; -[SCProgressOverlayView setAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4f0),PTR_s_setAttributedText__1126387e8);
  return;
}



/* Entry: 10b2c2cb4; end: 10b2c2cc3; -[SCProgressOverlayView progress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c117730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4fc),PTR_s_progress_1126237e8);
  return;
}



/* Entry: 10b2c2cc4; end: 10b2c2cd3; -[SCProgressOverlayView setProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2cc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4fc),PTR_s_setProgress__112656bc8);
  return;
}



/* Entry: 10b2c2cd4; end: 10b2c2ce3; -[SCProgressOverlayView setProgress:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4fc),PTR_s_setProgress_animated__112656bd0);
  return;
}



/* Entry: 10b2c2ce4; end: 10b2c2d1f; -[SCProgressOverlayView _didPressCancelButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2ce4(long param_1)

{
  param_1 = param_1 + _DAT_11278e500;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1179a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c2d20; end: 10b2c2d3f; -[SCProgressOverlayView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2d20(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278e500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2c2d40; end: 10b2c2d53; -[SCProgressOverlayView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2d40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278e500,param_3);
  return;
}



/* Entry: 10b2c2d54; end: 10b2c2d63; -[SCProgressOverlayView cancellable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2c2d54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e4e8);
}



/* Entry: 10b2c2d64; end: 10b2c2ddf; -[SCProgressOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c2d64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278e500);
  _objc_storeStrong(param_1 + _DAT_11278e4fc,0);
  _objc_storeStrong(param_1 + _DAT_11278e4f8,0);
  _objc_storeStrong(param_1 + _DAT_11278e4f4,0);
  _objc_storeStrong(param_1 + _DAT_11278e4f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e4ec,0);
  return;
}



/* Entry: 10b2c2de0; end: 10b2c34eb; -[SCSearchBar initWithFrame:] */

undefined8 *
FUN_10b2c2de0(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_112706310;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010bf20c00(puVar1);
    puVar2 = PTR_PTR_1126e0158;
    _objc_alloc(PTR_PTR_1126e0158);
    func_0x00010c013de0(param_1 + 26.0,param_2 + 0.0,param_3 + -50.0,param_4);
    func_0x00010c1ad680(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1edbe0();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d0a0();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d0c0();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182ae0();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar3);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e2b9f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b9f8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc9c0();
    _objc_release(puVar3);
    _objc_release(ppuVar4);
    puVar2 = PTR_PTR_1126c2e38;
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2b00();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x1) {
      puVar3 = puVar1;
      func_0x00010c066000(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213040();
      _objc_release(puVar3);
    }
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c066000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar2);
    func_0x00010c1f8500(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar5);
    puVar3 = puVar1;
    func_0x00010c153aa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c153aa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    func_0x00010c217320(puVar1);
    _objc_release(puVar5);
    puVar3 = puVar1;
    func_0x00010c274260(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    func_0x00010c173520(puVar1);
    _objc_release(puVar5);
    puVar3 = puVar1;
    func_0x00010bf1ffe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c274260(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf1ffe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c274260(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf1ffe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf1ffe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    puVar6 = puVar1;
    func_0x00010c274260(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 10b2c34ec; end: 10b2c35f3;  */

void FUN_10b2c34ec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0,0x403a000000000000,0,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2c35f4; end: 10b2c3713;  */

void FUN_10b2c35f4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4032000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c3714; end: 10b2c39a3;  */

void FUN_10b2c3714(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c39a4; end: 10b2c3ab3; -[SCSearchBar xButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c39a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar4 = (long)_DAT_11278e510;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                        PTR_s_xButtonPressed_11268d468,0x40);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10b2c3ab4;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be36b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227540(param_1,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b2c3ab4; end: 10b2c3ca3;  */

void FUN_10b2c3ab4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(0x4045000000000000,0x4045000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4000000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc008000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c3ca4; end: 10b2c3cfb; -[SCSearchBar intrinsicContentSize] */

undefined1  [16] FUN_10b2c3ca4(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  auVar2._8_8_ = 0x4047000000000000;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b2c3cfc; end: 10b2c3d4f; -[SCSearchBar setNeedsTopBorder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c3cfc(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11278e504) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11278e504) = (char)param_3;
  func_0x00010c274260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c3d50; end: 10b2c3da3; -[SCSearchBar setNeedsBottomBorder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c3d50(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11278e508) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11278e508) = (char)param_3;
  func_0x00010bf1ffe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c3da4; end: 10b2c3e07; -[SCSearchBar setSearchIconImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c3da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c153aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278e514);
  *(undefined8 *)(param_1 + _DAT_11278e514) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2c3e08; end: 10b2c3e93; -[SCSearchBar setSearchIconLeftOffset:] */

void FUN_10b2c3e08(undefined8 param_1)

{
  func_0x00010c153aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 10b2c3e94; end: 10b2c3f53;  */

void FUN_10b2c3e94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2c3f54; end: 10b2c3fbb; -[SCSearchBar setXButtonImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c3f54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c2be8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278e518);
  *(undefined8 *)(param_1 + _DAT_11278e518) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2c3fbc; end: 10b2c4037; -[SCSearchBar xButtonPressed] */

void FUN_10b2c3fbc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2be900();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setText__1126625f0,&PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10b2c4038; end: 10b2c40c3; -[SCSearchBar textFieldDidBeginEditing:] */

void FUN_10b2c4038(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c1965e0(param_1,param_2,0);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2c40c4; end: 10b2c4143; -[SCSearchBar textFieldDidEndEditing:] */

void FUN_10b2c40c4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1534a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2c4144; end: 10b2c430b; -[SCSearchBar textFieldDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c4144(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c066000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_11278e510));
  }
  else {
    uVar1 = param_1;
    func_0x00010c2be8a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf96d40();
    if ((uVar1 & 1) == 0) {
      func_0x00010c1965e0(param_1);
      uVar1 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        uVar1 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c153480();
        _objc_release(uVar1);
      }
    }
  }
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066000(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153420(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b2c430c; end: 10b2c43bf; -[SCSearchBar textFieldShouldReturn:] */

undefined8 FUN_10b2c430c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066000(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153400(uVar1);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  return 1;
}



/* Entry: 10b2c43c0; end: 10b2c449f; -[SCSearchBar textField:shouldChangeCharactersInRange:replacementString:] */

undefined8
FUN_10b2c43c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c2a4be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_6;
  func_0x00010c25d0a0(param_6,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar1);
  lVar3 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      uVar5 = 0;
      goto LAB_10b2c447c;
    }
  }
  else {
    _objc_release(lVar3);
  }
  uVar5 = 1;
LAB_10b2c447c:
  _objc_release(lVar2);
  return uVar5;
}



/* Entry: 10b2c44a0; end: 10b2c44ef; -[SCSearchBar setPlaceholder:] */

void FUN_10b2c44a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c066000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2c44f0; end: 10b2c4533; -[SCSearchBar placeholder] */

void FUN_10b2c44f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c066000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0fd720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2c4534; end: 10b2c45db; -[SCSearchBar setTintColor:] */

void FUN_10b2c4534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c066000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dca60();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110f629d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14d100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1f84e0(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b2c45dc; end: 10b2c468b; -[SCSearchBar setTextContentInsets:] */

void FUN_10b2c45dc(undefined8 param_1)

{
  func_0x00010c066000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 10b2c468c; end: 10b2c474f;  */

void FUN_10b2c468c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2c4750; end: 10b2c47ff; -[SCSearchBar setText:] */

void FUN_10b2c4750(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c066000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c066000(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar1);
    func_0x00010c26bce0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2c4800; end: 10b2c4843; -[SCSearchBar text] */

void FUN_10b2c4800(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c066000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2c4844; end: 10b2c4887; -[SCSearchBar font] */

void FUN_10b2c4844(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c066000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2c4888; end: 10b2c48c3; -[SCSearchBar becomeFirstResponder] */

undefined8 FUN_10b2c4888(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c066000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf179a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2c48c4; end: 10b2c492b; -[SCSearchBar resignFirstResponder] */

undefined8 FUN_10b2c48c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112706310;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_resignFirstResponder_11262c258);
  func_0x00010c066000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c13a0e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2c492c; end: 10b2c4967; -[SCSearchBar isFirstResponder] */

undefined8 FUN_10b2c492c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c066000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c073040();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2c4968; end: 10b2c4a0f; -[SCSearchBar keyboardWillHide:] */

void FUN_10b2c4968(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c066000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073040();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1534c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10b2c4a10; end: 10b2c4a8b; -[SCSearchBar _iconXSignFillImage] */

void FUN_10b2c4a10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4036000000000000,0x4036000000000000,0x4008000000000000,0x4008000000000000,
                      0x4008000000000000,0x4008000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2c4a8c; end: 10b2c4aab; -[SCSearchBar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c4a8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278e51c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2c4aac; end: 10b2c4abf; -[SCSearchBar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c4aac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278e51c,param_3);
  return;
}



/* Entry: 10b2c4ac0; end: 10b2c4acf; -[SCSearchBar searchIconImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c4ac0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e514);
}



/* Entry: 10b2c4ad0; end: 10b2c4adf; -[SCSearchBar xButtonImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c4ad0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e518);
}



/* Entry: 10b2c4ae0; end: 10b2c4aef; -[SCSearchBar inputTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c4ae0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e520);
}



/* Entry: 10b2c4af0; end: 10b2c4b2f; -[SCSearchBar setInputTextField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c4af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e520;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c4b30; end: 10b2c4b3f; -[SCSearchBar needsTopBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2c4b30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e504);
}



/* Entry: 10b2c4b40; end: 10b2c4b4f; -[SCSearchBar needsBottomBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2c4b40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e508);
}



/* Entry: 10b2c4b50; end: 10b2c4b5f; -[SCSearchBar searchIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c4b50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e524);
}



/* Entry: 10b2c4b60; end: 10b2c4b9f; -[SCSearchBar setSearchIconView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c4b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e524;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c4ba0; end: 10b2c4bdf; -[SCSearchBar setXButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c4ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e510;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c4be0; end: 10b2c4bef; -[SCSearchBar topBorderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c4be0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e528);
}



/* Entry: 10b2c4bf0; end: 10b2c4c2f; -[SCSearchBar setTopBorderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c4bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e528;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c4c30; end: 10b2c4c3f; -[SCSearchBar bottomBorderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2c4c30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e52c);
}



/* Entry: 10b2c4c40; end: 10b2c4c7f; -[SCSearchBar setBottomBorderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c4c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e52c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2c4c80; end: 10b2c4c8f; -[SCSearchBar enteredText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2c4c80(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e50c);
}



/* Entry: 10b2c4c90; end: 10b2c4c9f; -[SCSearchBar setEnteredText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c4c90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e50c) = param_3;
  return;
}



/* Entry: 10b2c4ca0; end: 10b2c4d3b; -[SCSearchBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c4ca0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e52c,0);
  _objc_storeStrong(param_1 + _DAT_11278e528,0);
  _objc_storeStrong(param_1 + _DAT_11278e510,0);
  _objc_storeStrong(param_1 + _DAT_11278e524,0);
  _objc_storeStrong(param_1 + _DAT_11278e520,0);
  _objc_storeStrong(param_1 + _DAT_11278e518,0);
  _objc_storeStrong(param_1 + _DAT_11278e514,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11278e51c);
  return;
}



/* Entry: 10b2c4d3c; end: 10b2c4d47; +[SCSunburstView layerClass] */

void FUN_10b2c4d3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAReplicatorLayer_1126d4088);
  return;
}



/* Entry: 10b2c4d48; end: 10b2c4f37; -[SCSunburstView initWithSize:rayWidth:rayCount:rayColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b2c4d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_6);
  func_0x000107c308a4(param_1,param_1);
  puStack_78 = PTR_PTR_112706318;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1adb40();
    uStack_138 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
    uStack_140 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
    uStack_128 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
    uStack_130 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
    uStack_118 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
    uStack_120 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
    uStack_108 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
    uStack_110 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
    uStack_178 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
    uStack_180 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
    uStack_168 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
    uStack_170 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
    uStack_158 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
    uStack_160 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
    uStack_148 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
    uStack_150 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
    uVar9 = 0;
    uVar10 = 0x3ff0000000000000;
    _CATransform3DRotate
              (&uStack_100,6.283185307179586 / (double)param_5,0,0,0x3ff0000000000000,&uStack_180);
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    func_0x00010c1adb60(puVar2);
    puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11278e530;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    _objc_retainAutorelease(param_6);
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    uVar5 = uStack_e0;
    uVar8 = uStack_d0;
    func_0x00010bf20c00(puVar1);
    uVar7 = uVar5;
    _CGRectGetMidX();
    _CGRectGetMidY(uVar5,uVar8,uVar9,uVar10);
    FUN_10b69090c(uVar7,uVar5,param_2,0);
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 10b2c4f38; end: 10b2c50c7; -[SCSunburstView startAnimationWithRayHeightValues:rayPositionValues:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c4f38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf04040(puVar1,param_2,&PTR____CFConstantStringClassReference_110e48d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  _objc_release(param_3);
  func_0x00010c1b6d00(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183d58);
  func_0x00010c192d40(0x3fdbb645a1cac083,puVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf040e0(0x3fb999999999999a,0x3fd54fdf3b645a1d,
                      PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_111186100,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111860d0,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110e446f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  _objc_release(param_4);
  func_0x00010c1b6d00(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183d70);
  func_0x00010c192d40(0x3fdbb645a1cac083,puVar3);
  lVar4 = (long)_DAT_11278e530;
  func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar4),param_2,puVar3,
                      &PTR____CFConstantStringClassReference_110daf598);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar4),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110db1258);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar4),param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2c50c8; end: 10b2c5117; -[SCSunburstView stopAnimation] */

/* WARNING: Possible PIC construction at 0x00010b2c50ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2c50f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c50c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e530),PTR_s_removeAnimationForKey__1126286a0,
             &PTR____CFConstantStringClassReference_110daf598);
  return;
}



/* Entry: 10b2c5118; end: 10b2c512b; -[SCSunburstView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c5118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e530,0);
  return;
}



/* Entry: 10b2c512c; end: 10b2c545b; -[SCTooltipBalloon initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b2c512c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_112706320;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf59ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11278e534;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126e0160;
    func_0x00010bf68da0(PTR_PTR_1126e0160);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar6 = (long)_DAT_11278e538;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126e0160;
    func_0x00010bf68da0(PTR_PTR_1126e0160);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4000000000000000);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar7 = (long)_DAT_11278e53c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 10b2c545c; end: 10b2c563b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c545c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e538);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c563c; end: 10b2c56a3;  */

void FUN_10b2c563c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2c56a4; end: 10b2c5893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c56a4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x4022000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0xc022000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c5894; end: 10b2c58e7; +[SCTooltipBalloon defaultBackgroundColor] */

void FUN_10b2c5894(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe99999a0000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2c58e8; end: 10b2c58f7; -[SCTooltipBalloon setTooltipText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c58e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e53c),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 10b2c58f8; end: 10b2c59eb; -[SCTooltipBalloon createTriangle] */

void FUN_10b2c58f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(0,0);
  func_0x00010bef98c0(0x4030000000000000,0,puVar1);
  func_0x00010bef98c0(0x4020000000000000,0x4020000000000000,puVar1);
  func_0x00010bf3dc80(puVar1);
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar2,param_2,puVar3);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar4 = puVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b2c59ec; end: 10b2c5a3b; -[SCTooltipBalloon .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c59ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e53c,0);
  _objc_storeStrong(param_1 + _DAT_11278e534,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e538,0);
  return;
}



/* Entry: 10b2c5a3c; end: 10b2c5aef; -[SCTopBorderedView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b2c5a3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706328;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar4 = (long)_DAT_11278e540;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2c5af0; end: 10b2c5b5b; -[SCTopBorderedView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c5af0(undefined8 param_1,long param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112706328;
  lStack_30 = param_2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  func_0x00010c19f0e0(0,0,param_1,0x3fe0000000000000,*(undefined8 *)(param_2 + _DAT_11278e540));
  return;
}



/* Entry: 10b2c5b5c; end: 10b2c5b6f; -[SCTopBorderedView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c5b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e540,0);
  return;
}



/* Entry: 10b2c5b70; end: 10b2c5c57; -[SCTransparentParentView hitTest:withEvent:] */

void FUN_10b2c5b70(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_112706330;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2c5c58; end: 10b2c5e03;  */

undefined8 FUN_10b2c5c58(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b2c5e04; end: 10b2c5e87;  */

void FUN_10b2c5e04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bStack_31;
  
  bStack_31 = 0;
  _objc_retain();
  if (param_1 != 0) {
    do {
      (**(code **)(param_3 + 0x10))(param_3,param_1,&bStack_31);
      lVar1 = param_1;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      if ((bStack_31 & 1) != 0) break;
      param_1 = lVar1;
    } while (lVar1 != 0);
    _objc_release(lVar1);
  }
  return;
}


