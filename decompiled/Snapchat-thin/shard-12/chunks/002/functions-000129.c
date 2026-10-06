/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e5537c; end: 108e55ab3; -[SCAltitudeStickerView _setupAltitudeGaugeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5537c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010bf20c00(param_2);
  func_0x00010c013de0();
  lVar6 = (long)_DAT_11277c614;
  uVar2 = *(undefined8 *)(param_2 + lVar6);
  *(undefined **)(param_2 + lVar6) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar13 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  if (dVar13 <= param_1) {
    param_1 = dVar13;
  }
  lVar5 = (long)_DAT_11277c624;
  *(long *)(param_2 + lVar5) = (long)(param_1 * 0.8);
  dVar21 = (double)(long)(param_1 * 0.8) * 0.01;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(0,0,*(undefined8 *)(param_2 + lVar5),*(undefined8 *)(param_2 + lVar5));
  lVar11 = (long)_DAT_11277c630;
  uVar2 = *(undefined8 *)(param_2 + lVar11);
  *(undefined **)(param_2 + lVar11) = puVar1;
  _objc_release();
  FUN_108e54500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220(*(undefined8 *)(param_2 + lVar11),param_3,1);
  func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar11),param_3,uVar2);
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar6),param_3,*(undefined8 *)(param_2 + lVar11));
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar14,uVar16,uVar19,uVar20);
  lVar9 = (long)_DAT_11277c634;
  uVar3 = *(undefined8 *)(param_2 + lVar9);
  *(undefined **)(param_2 + lVar9) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_2 + lVar9),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0((long)(dVar21 * 12.0),PTR__OBJC_CLASS___UIFont_1126aec38,param_3,
                      &PTR____CFConstantStringClassReference_110efbb58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_2 + lVar9),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar14,uVar16,uVar19,uVar20);
  lVar10 = (long)_DAT_11277c638;
  uVar3 = *(undefined8 *)(param_2 + lVar10);
  *(undefined **)(param_2 + lVar10) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_2 + lVar10),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_2 + lVar10),param_3,1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0((long)(dVar21 * 12.0),PTR__OBJC_CLASS___UIFont_1126aec38,param_3,
                      &PTR____CFConstantStringClassReference_110efbb58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_2 + lVar10),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c165e20(*(undefined8 *)(param_2 + lVar10),param_3,1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar14,uVar16,uVar19,uVar20);
  lVar7 = (long)_DAT_11277c63c;
  uVar3 = *(undefined8 *)(param_2 + lVar7);
  *(undefined **)(param_2 + lVar7) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_2 + lVar7),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0((long)(dVar21 * 6.0),PTR__OBJC_CLASS___UIFont_1126aec38,param_3,
                      &PTR____CFConstantStringClassReference_110ef2858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_2 + lVar7),param_3,puVar1);
  _objc_release(puVar1);
  func_0x0001092017f0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_2 + lVar7),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar7));
  dVar13 = 20.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
  _CGRectGetWidth();
  dVar13 = dVar13 + dVar21 * 10.0;
  if (dVar13 <= dVar21 * 20.0) {
    dVar13 = dVar21 * 20.0;
  }
  dVar15 = dVar21 * 27.0;
  if (dVar13 <= dVar21 * 27.0) {
    dVar15 = dVar13;
  }
  puVar1 = PTR_PTR_1126c2e38;
  func_0x00010bdc2b00(PTR_PTR_1126c2e38,param_3,param_2);
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar11));
  _CGRectGetWidth();
  dVar13 = dVar13 * 0.5;
  if (puVar1 == (undefined *)0x1) {
    dVar15 = dVar15 + dVar13;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
    _CGRectGetWidth();
    dVar15 = dVar15 - dVar13;
  }
  else {
    dVar15 = dVar13 - dVar15;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar11));
  _CGRectGetHeight();
  dVar13 = dVar13 * 0.5;
  dVar17 = dVar13 + dVar21 * 3.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
  _CGRectGetWidth();
  dVar18 = dVar13;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
  _CGRectGetHeight();
  func_0x00010c19f0e0(dVar15,dVar17,dVar13,dVar18,*(undefined8 *)(param_2 + lVar7));
  dVar15 = dVar21 * 10.0;
  dVar18 = *(double *)(param_2 + lVar5) * 0.5 + dVar21 * -11.0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(0,0,dVar15,dVar18);
  lVar4 = (long)_DAT_11277c640;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(0,0,dVar15,dVar18);
  lVar12 = (long)_DAT_11277c644;
  uVar3 = *(undefined8 *)(param_2 + lVar12);
  *(undefined **)(param_2 + lVar12) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  dVar13 = 0.0;
  func_0x00010c013de0(0,0,dVar15,dVar18);
  lVar8 = (long)_DAT_11277c648;
  uVar3 = *(undefined8 *)(param_2 + lVar8);
  *(undefined **)(param_2 + lVar8) = puVar1;
  _objc_release(uVar3);
  func_0x00010c182220(*(undefined8 *)(param_2 + lVar4),param_3,1);
  func_0x00010c182220(*(undefined8 *)(param_2 + lVar12),param_3,1);
  func_0x00010c182220(*(undefined8 *)(param_2 + lVar8),param_3,1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110efbb98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar4),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110efbbb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar12),param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110efbbd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar8),param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar11));
  _CGRectGetWidth();
  dVar18 = dVar13 * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar11));
  _CGRectGetHeight();
  dVar13 = dVar13 * 0.5;
  dVar15 = *(double *)(param_2 + lVar5) * 0.5;
  dVar21 = (dVar15 + dVar21 * -7.0) / (dVar15 + dVar21 * -11.0);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167d20(0x3fe0000000000000,dVar21);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167d20(0x3fe0000000000000,dVar21);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167d20(0x3fe0000000000000,dVar21);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(dVar18,dVar13);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar12);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(dVar18,dVar13);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(dVar18,dVar13);
  _objc_release(uVar3);
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar6),param_3,*(undefined8 *)(param_2 + lVar4));
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar6),param_3,*(undefined8 *)(param_2 + lVar12));
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar6),param_3,*(undefined8 *)(param_2 + lVar8));
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar6),param_3,*(undefined8 *)(param_2 + lVar9));
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar6),param_3,*(undefined8 *)(param_2 + lVar10));
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar6),param_3,*(undefined8 *)(param_2 + lVar7));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e55ab4; end: 108e55afb; -[SCAltitudeStickerView _correctedAltitudeValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108e55ab4(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + _DAT_11277c620) * 3.28084;
  if (*(long *)(param_1 + _DAT_11277c61c) != 0) {
    dVar1 = *(double *)(param_1 + _DAT_11277c620);
  }
  return (double)((float)(int)(dVar1 / 5.0) * 5.0);
}



/* Entry: 108e55afc; end: 108e55b7f; -[SCAltitudeStickerView _unitString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e55afc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + _DAT_11277c61c) == 0) {
    func_0x000109201808();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109201820();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e46278);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e55b80; end: 108e55bf7; -[SCAltitudeStickerView _unitString:] */

void FUN_108e55b80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    func_0x000109201808();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109201820();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e55bf8; end: 108e55ccf; -[SCAltitudeStickerView _updateAltitudeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e55bf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = param_1;
  func_0x00010bed9f80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c600);
  *(long *)(param_1 + _DAT_11277c600) = lVar2;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + _DAT_11277c60c);
  if (lVar2 == 2) {
LAB_108e55c50:
    piVar3 = (int *)&DAT_11277c614;
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11277c610));
    func_0x00010bea1da0(param_1);
  }
  else {
    if (lVar2 != 1) {
      if (lVar2 != 0) goto LAB_108e55c9c;
      goto LAB_108e55c50;
    }
    piVar3 = (int *)&DAT_11277c610;
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11277c614));
    func_0x00010bea1d80(param_1);
  }
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + *piVar3));
LAB_108e55c9c:
  func_0x00010c0cc2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e55cd0; end: 108e55f9b; -[SCAltitudeStickerView _setAltitudeToDisplayGauge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e55cd0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  
  func_0x00010bde9e40();
  lVar1 = param_2;
  func_0x00010bed13a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2e38;
  puVar2 = PTR_PTR_1126c2e38;
  func_0x00010bdc2b00(PTR_PTR_1126c2e38,param_3,param_2);
  dVar11 = param_1;
  func_0x00010c09e4c0(param_1,puVar3,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11277c634;
  func_0x00010c212f20(*(undefined8 *)(param_2 + lVar6),param_3,puVar3);
  _objc_release(puVar3);
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar6));
  lVar7 = (long)_DAT_11277c638;
  func_0x00010c212f20(*(undefined8 *)(param_2 + lVar7),param_3,lVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_11277c630));
  lVar4 = (long)_DAT_11277c614;
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar4));
  func_0x00010c19f0e0(param_2);
  puVar3 = PTR_PTR_1126c2e38;
  func_0x00010bdc2b00(PTR_PTR_1126c2e38,param_3,param_2);
  lVar4 = (long)_DAT_11277c63c;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar4));
  if (puVar3 == (undefined *)0x1) {
    _CGRectGetMaxX();
    dVar8 = dVar11;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetWidth();
    dVar11 = dVar11 - dVar8;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar4));
    _CGRectGetMaxY();
    dVar12 = dVar8 + 3.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetWidth();
    dVar9 = dVar8;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetHeight();
    func_0x00010c19f0e0(dVar11,dVar12,dVar8,dVar9,*(undefined8 *)(param_2 + lVar6));
    func_0x00010bfb68e0(param_2);
    _CGRectGetWidth();
    lVar5 = (long)_DAT_11277c624;
    dVar8 = dVar11 * 0.5;
    dVar11 = dVar8 + *(double *)(param_2 + lVar5) * -0.3;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar4));
    _CGRectGetMaxY();
    dVar12 = dVar8;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetMinX();
    dVar9 = dVar12;
    func_0x00010bfb68e0(param_2);
    _CGRectGetWidth();
    dVar9 = dVar9 * 0.5 + *(double *)(param_2 + lVar5) * -0.3;
  }
  else {
    _CGRectGetMinX();
    dVar8 = dVar11;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar4));
    _CGRectGetMaxY();
    dVar12 = dVar8 + 3.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetWidth();
    dVar9 = dVar8;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetHeight();
    func_0x00010c19f0e0(dVar11,dVar12,dVar8,dVar9,*(undefined8 *)(param_2 + lVar6));
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetMaxX();
    dVar8 = dVar11;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar4));
    _CGRectGetMaxY();
    dVar9 = dVar8;
    func_0x00010bfb68e0(param_2);
    _CGRectGetWidth();
    dVar9 = dVar9 * 0.5;
    dVar12 = dVar9 + *(double *)(param_2 + _DAT_11277c624) * 0.3;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetMaxX();
  }
  uVar10 = 0x4008000000000000;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
  _CGRectGetHeight();
  func_0x00010c19f0e0(dVar11,dVar8 + 3.0,dVar12 - dVar9,uVar10,*(undefined8 *)(param_2 + lVar7));
  func_0x00010bea1d60(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e55f9c; end: 108e56013; -[SCAltitudeStickerView _setAltitudeNeedlePositions:] */

void FUN_108e55f9c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  double dStack_18;
  
  dStack_18 = -param_1;
  if (0.0 <= param_1) {
    dStack_18 = param_1;
  }
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_108e56014;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_2;
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_3,&puStack_40,0);
  return;
}



/* Entry: 108e56014; end: 108e56133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e56014(long param_1,undefined8 param_2)

{
  double dVar1;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _CGAffineTransformMakeRotation
            (&uStack_80,
             (double)(long)(*(double *)(param_1 + 0x28) / 10000.0) * 0.2 * 3.141592653589793);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277c640),param_2,
                      &uStack_b0);
  _CGAffineTransformMakeRotation
            (&uStack_e0,
             (double)(long)(*(double *)(param_1 + 0x28) / 1000.0) * 0.2 * 3.141592653589793);
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277c644),param_2,
                      &uStack_b0);
  dVar1 = *(double *)(param_1 + 0x28) / 1000.0;
  _CGAffineTransformMakeRotation(&uStack_110,(dVar1 + dVar1) * 3.141592653589793);
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277c648),param_2,
                      &uStack_b0);
  return;
}



/* Entry: 108e56134; end: 108e564a3; -[SCAltitudeStickerView _setAltitudeNumberView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108e56134(ulong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  puVar7 = &uStack_110;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11277c610;
  if (*(long *)(param_1 + lVar9) == 0) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uVar3 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_e0);
    uVar3 = *(undefined8 *)(param_1 + lVar9);
  }
  uStack_108 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_110 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_100 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dVar15 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  dStack_f0 = dVar15;
  func_0x00010c219960(uVar3,param_2,&uStack_110);
  func_0x00010bde9e40(param_1);
  uVar4 = param_1;
  func_0x00010bed13a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c2e38;
  puVar5 = PTR_PTR_1126c2e38;
  func_0x00010bdc2b00(PTR_PTR_1126c2e38,param_2,param_1);
  func_0x00010c09e4c0(dVar15,puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)(param_1 + (long)_DAT_11277c628);
  func_0x00010c212f20(*puVar1,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010c23d620(*puVar1);
  puVar10 = (undefined8 *)(param_1 + (long)_DAT_11277c62c);
  func_0x00010c212f20(*puVar10,param_2,uVar4);
  puVar6 = PTR_PTR_1126c2e38;
  func_0x00010bdc2b00(PTR_PTR_1126c2e38,param_2,param_1);
  if (puVar6 == (undefined *)0x1) {
    uVar3 = *puVar10;
    uStack_98 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_90 = uVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_90,&uStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d660(uVar4,param_2,puVar6);
    dVar11 = dVar15;
    _objc_release(puVar6);
    _objc_release(uVar3);
    func_0x00010bfb68e0(*puVar1);
    _CGRectGetHeight();
    dVar12 = 0.0;
    func_0x00010c19f0e0(0,0,dVar15,dVar11,*puVar10);
    func_0x00010bfb68e0(*puVar1);
    _CGRectGetWidth();
    puVar10 = puVar1;
    dVar11 = dVar15;
    dVar16 = dVar12;
  }
  else {
    uVar3 = *puVar10;
    uStack_a8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_a0 = uVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_a0,&uStack_a8,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d660(uVar4,param_2,puVar6);
    dVar12 = dVar15;
    _objc_release(puVar6);
    _objc_release(uVar3);
    func_0x00010bfb68e0(*puVar1);
    _CGRectGetWidth();
    dVar11 = dVar12;
    dVar16 = dVar15;
  }
  func_0x00010bfb68e0(*puVar1);
  _CGRectGetHeight();
  func_0x00010c19f0e0(dVar11,0,dVar16,dVar12,*puVar10);
  func_0x00010bfb68e0(*puVar1);
  _CGRectGetWidth();
  dVar15 = dVar15 + dVar11;
  func_0x00010bfb68e0(*puVar1);
  _CGRectGetHeight();
  uVar13 = 0;
  uVar14 = 0;
  func_0x00010c19f0e0(0,0,dVar15,dVar11,*(undefined8 *)(param_1 + lVar9));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c19f0e0(param_1);
  func_0x00010bfb68e0(param_1);
  func_0x00010c1739e0(param_1);
  func_0x00010bfb68e0(param_1);
  uVar3 = uVar13;
  _CGRectGetMidX();
  _CGRectGetMidY(uVar13,uVar14,dVar15,dVar11);
  func_0x00010c17a6a0(uVar3,uVar13,*(undefined8 *)(param_1 + lVar9));
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  dStack_f0 = (double)uStack_c0;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar9),param_2,&uStack_110);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return uVar4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  lVar9 = (long)_DAT_11277c610;
  func_0x00010c09ef00(puVar7,param_2,*(undefined8 *)(uVar4 + lVar9));
  uVar3 = *(undefined8 *)(uVar4 + lVar9);
  func_0x00010bf20c00(uVar3);
  uVar2 = (uint)uVar3;
  _CGRectContainsPoint();
  if (*(long *)(uVar4 + (long)_DAT_11277c60c) == 0) {
    lVar9 = (long)_DAT_11277c614;
    func_0x00010c09ef00(puVar7,param_2,*(undefined8 *)(uVar4 + lVar9));
    uVar3 = *(undefined8 *)(uVar4 + lVar9);
    func_0x00010bf20c00(uVar3);
    uVar8 = (uint)uVar3;
    _CGRectContainsPoint();
  }
  else {
    uVar8 = 0;
  }
  _objc_release(puVar7);
  return (ulong)(uVar8 | uVar2);
}



/* Entry: 108e564a4; end: 108e56567; -[SCAltitudeStickerView shouldRespondToTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108e564a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277c610;
  func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + lVar4));
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf20c00(uVar2);
  uVar1 = (uint)uVar2;
  _CGRectContainsPoint();
  if (*(long *)(param_1 + _DAT_11277c60c) == 0) {
    lVar4 = (long)_DAT_11277c614;
    func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + lVar4));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf20c00(uVar2);
    uVar3 = (uint)uVar2;
    _CGRectContainsPoint();
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3 | uVar1;
}



/* Entry: 108e56568; end: 108e565bb; -[SCAltitudeStickerView cycleStickerToNextStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e56568(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (long)_DAT_11277c61c;
  lVar2 = *(long *)(param_1 + lVar1);
  if (lVar2 != *(long *)(param_1 + _DAT_11277c618)) {
    uVar3 = *(ulong *)(param_1 + _DAT_11277c60c);
    if (uVar3 < 3) {
      *(undefined8 *)(param_1 + _DAT_11277c60c) = *(undefined8 *)(&UNK_10dfa3ad8 + uVar3 * 8);
      lVar2 = *(long *)(param_1 + lVar1);
    }
  }
  *(ulong *)(param_1 + lVar1) = (ulong)(lVar2 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bed3030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAltitudeView_1125925b0);
  return;
}



/* Entry: 108e565bc; end: 108e565bf; -[SCAltitudeStickerView encodeWithCoder:] */

void FUN_108e565bc(void)

{
  return;
}



/* Entry: 108e565c0; end: 108e565e3; -[SCAltitudeStickerView copyWithZone:] */

undefined8 FUN_108e565c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e565e4; end: 108e565eb; -[SCAltitudeStickerView loggingParameters] */

undefined8 FUN_108e565e4(void)

{
  return 0;
}



/* Entry: 108e565ec; end: 108e565f7; -[SCAltitudeStickerView packId] */

undefined ** FUN_108e565ec(void)

{
  return &PTR____CFConstantStringClassReference_110dea4b8;
}



/* Entry: 108e565f8; end: 108e56603; -[SCAltitudeStickerView shortLoggingName] */

undefined ** FUN_108e565f8(void)

{
  return &PTR____CFConstantStringClassReference_110efbb78;
}



/* Entry: 108e56604; end: 108e5660b; -[SCAltitudeStickerView stickerId] */

undefined8 FUN_108e56604(void)

{
  return 0;
}



/* Entry: 108e5660c; end: 108e5663b; -[SCAltitudeStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5660c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c600);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e5663c; end: 108e56643; -[SCAltitudeStickerView toCTPItem] */

undefined8 FUN_108e5663c(void)

{
  return 0;
}



/* Entry: 108e56644; end: 108e5664b; -[SCAltitudeStickerView infoType] */

undefined8 FUN_108e56644(void)

{
  return 3;
}



/* Entry: 108e5664c; end: 108e56653; -[SCAltitudeStickerView type] */

undefined8 FUN_108e5664c(void)

{
  return 6;
}



/* Entry: 108e56654; end: 108e56663; -[SCAltitudeStickerView intrinsicSize] */

undefined1  [16] FUN_108e56654(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 108e56664; end: 108e566fb; -[SCAltitudeStickerView imageView] */

void FUN_108e56664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7ca0(puVar2,param_2,param_1,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e566fc; end: 108e566ff; -[SCAltitudeStickerView didEndDisplay] */

void FUN_108e566fc(void)

{
  return;
}



/* Entry: 108e56700; end: 108e56703; -[SCAltitudeStickerView willDisplay] */

void FUN_108e56700(void)

{
  return;
}



/* Entry: 108e56704; end: 108e5686b; -[SCAltitudeStickerView _updateItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e56704(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar2 = PTR_PTR_1126dc2d0;
  _objc_opt_new(PTR_PTR_1126dc2d0);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  func_0x00010c21acc0();
  func_0x00010c167920(puVar2,param_2,(int)*(double *)(param_1 + _DAT_11277c620));
  puVar6 = PTR_PTR_1126bab40;
  func_0x00010bdc1260(PTR_PTR_1126bab40,param_2,*(undefined8 *)(param_1 + _DAT_11277c60c));
  func_0x00010c21acc0(puVar2,param_2,puVar6);
  puVar6 = PTR_PTR_1126bab40;
  func_0x00010bdc1240(PTR_PTR_1126bab40,param_2,*(undefined8 *)(param_1 + _DAT_11277c61c));
  func_0x00010c1c4000(puVar2,param_2,puVar6);
  func_0x00010c1ac500(puVar4,param_2,puVar5);
  func_0x00010c196600(puVar3,param_2,puVar4);
  func_0x00010c1b5d40(puVar1,param_2,puVar3);
  puVar6 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1679a0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5686c; end: 108e5687b; -[SCAltitudeStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e5686c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c604);
}



/* Entry: 108e5687c; end: 108e5688b; -[SCAltitudeStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5687c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c604) = param_3;
  return;
}



/* Entry: 108e5688c; end: 108e5689b; -[SCAltitudeStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5688c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c608);
}



/* Entry: 108e5689c; end: 108e568ab; -[SCAltitudeStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5689c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c600);
}



/* Entry: 108e568ac; end: 108e568bb; -[SCAltitudeStickerView unit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e568ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c61c);
}



/* Entry: 108e568bc; end: 108e568cb; -[SCAltitudeStickerView viewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e568bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c60c);
}



/* Entry: 108e568cc; end: 108e569bb; -[SCAltitudeStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e568cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c600,0);
  _objc_storeStrong(param_1 + _DAT_11277c608,0);
  _objc_storeStrong(param_1 + _DAT_11277c63c,0);
  _objc_storeStrong(param_1 + _DAT_11277c62c,0);
  _objc_storeStrong(param_1 + _DAT_11277c628,0);
  _objc_storeStrong(param_1 + _DAT_11277c638,0);
  _objc_storeStrong(param_1 + _DAT_11277c634,0);
  _objc_storeStrong(param_1 + _DAT_11277c648,0);
  _objc_storeStrong(param_1 + _DAT_11277c644,0);
  _objc_storeStrong(param_1 + _DAT_11277c640,0);
  _objc_storeStrong(param_1 + _DAT_11277c630,0);
  _objc_storeStrong(param_1 + _DAT_11277c610,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c614,0);
  return;
}



/* Entry: 108e569bc; end: 108e56a1b; -[SCAttachmentStickerView init] */

undefined1 * FUN_108e569bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126febc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e56a1c; end: 108e56a8f; -[SCAttachmentStickerView setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e56a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11277c64c);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c2865a0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e56a90; end: 108e56b13; -[SCAttachmentStickerView setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e56a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277c650;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010bedff00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e56b14; end: 108e56b97; -[SCAttachmentStickerView setShortenedUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e56b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277c654;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010bedff00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e56b98; end: 108e56c43; -[SCAttachmentStickerView tappableElementBounds] */

void FUN_108e56b98(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar3 = &puStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf20c00();
  _CGRectGetHeight();
  puVar1 = PTR_PTR_1126d91a8;
  _objc_alloc();
  func_0x00010c005f20(8.0 / param_1);
  uVar4 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  func_0x00010c2865a0(puVar1,param_3,ppuVar3);
  func_0x00010c216240(puVar1,param_3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108e56c44; end: 108e56c93; -[SCAttachmentStickerView updateImage:title:] */

void FUN_108e56c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c2865a0(param_1,param_2,param_3);
  func_0x00010c216240(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e56c94; end: 108e56d07; -[SCAttachmentStickerView updateImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e56c94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = (long)_DAT_11277c64c;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11277c658),PTR_s_setBackgroundColor__112639330,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bead230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupImageViewForPlaceholder_112588e30);
  return;
}



/* Entry: 108e56d08; end: 108e56d0f; -[SCAttachmentStickerView scaleLimit] */

undefined8 FUN_108e56d08(void)

{
  return 0;
}



/* Entry: 108e56d10; end: 108e56d13; -[SCAttachmentStickerView encodeWithCoder:] */

void FUN_108e56d10(void)

{
  return;
}



/* Entry: 108e56d14; end: 108e56d37; -[SCAttachmentStickerView copyWithZone:] */

undefined8 FUN_108e56d14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e56d38; end: 108e56dcf; -[SCAttachmentStickerView _setupViews] */

void FUN_108e56d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bead1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupImageViewAndLabels_112588e20);
  return;
}



/* Entry: 108e56dd0; end: 108e576b7; -[SCAttachmentStickerView _setupImageViewAndLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e56dd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lStack_e0;
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
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar19 = (long)_DAT_11277c658;
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar16);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar19);
  uStack_90 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  uStack_88 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  uStack_80 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bfe0660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar14);
  _objc_release(lVar18);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(lVar17);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(lVar15);
  _objc_release(uVar4);
  _objc_release(uVar16);
  _objc_release(lVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar17 = (long)_DAT_11277c64c;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar16);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar17),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010bead220(param_1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  uStack_b0 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  uStack_a8 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar17);
  uStack_a0 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c2a5060(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar18 = (long)_DAT_11277c650;
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar18),param_2,puVar1);
  _objc_release(puVar1);
  uVar12 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c21ad00(uVar12,param_2,0x14);
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c27dfe0();
  uVar16 = uVar12;
  func_0x00010bfb3e60(uVar12,param_2,uVar13,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102de0();
  func_0x00010c1c3ae0(*(undefined8 *)(param_1 + lVar18));
  _objc_release(uVar16);
  _objc_release(uVar12);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar18),param_2,2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar14;
  func_0x00010bf493c0(0x401c000000000000,uVar14,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  uStack_c8 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf493c0(0x401c000000000000,uVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  uStack_c0 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010bf493c0(0xc014000000000000,uVar5,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar2);
  _objc_release(uVar14);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar19 = (long)_DAT_11277c654;
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar19),param_2,puVar1);
  _objc_release(puVar1);
  uVar12 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c21ad00(uVar12,param_2,0x17);
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c27dfe0();
  uVar16 = uVar12;
  func_0x00010bfb3e60(uVar12,param_2,uVar13,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102de0();
  func_0x00010c1c3ae0(*(undefined8 *)(param_1 + lVar19));
  _objc_release(uVar16);
  _objc_release(uVar12);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = *(long *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010bf493c0(0x401c000000000000,lVar15,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  lStack_e0 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar19);
  uStack_d8 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bf493c0(0xc014000000000000,uVar4,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d0 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_e0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar16);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar2);
  _objc_release(uVar14);
  _objc_release(lVar3);
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar15;
  func_0x00010bf20c00();
  _CGRectGetHeight();
  FUN_108e577c0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar3;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11277c64c;
  func_0x00010c1a9f00(*(undefined8 *)(lVar15 + lVar18),param_2,lVar17);
  _objc_release(lVar17);
  _objc_release(lVar3);
  func_0x00010c182220(*(undefined8 *)(lVar15 + lVar18),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(lVar15 + lVar18),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c16e440(*(undefined8 *)(lVar15 + _DAT_11277c658),param_2,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 108e576b8; end: 108e577bf; -[SCAttachmentStickerView _setupImageViewForPlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e576b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bf20c00();
  _CGRectGetHeight();
  FUN_108e577c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11277c64c;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar5),param_2,1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277c658),param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108e577c0; end: 108e5783f;  */

void FUN_108e577c0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110e2a898);
  _objc_retainAutoreleasedReturnValue();
  dVar3 = (param_1 + param_1 * -0.5681818127632141) * -0.5;
  puVar2 = puVar1;
  func_0x00010bfe91e0(dVar3,dVar3,dVar3,dVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e57840; end: 108e57c2b; -[SCAttachmentStickerView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108e57840(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_5;
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11277c650;
  uVar2 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c27dfe0(uVar2);
  lVar3 = lVar1;
  func_0x00010bfb3e60(lVar1,param_6,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11277c654;
  uVar2 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c27dfe0(uVar2);
  lVar7 = lVar1;
  func_0x00010bfb3e60(lVar1,param_6,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280(lVar3);
  dVar19 = param_1 + 7.0;
  func_0x00010c099280(lVar7);
  dVar11 = dVar19 + param_1 + 7.0;
  dVar12 = (300.0 - dVar11) + -7.0;
  dVar20 = dVar12 + -5.0;
  func_0x00010c099280(lVar3);
  dVar12 = dVar12 + dVar12;
  uVar10 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_a8 = uVar10;
  lStack_a0 = lVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&lStack_a0,&uStack_a8,1);
  _objc_retainAutoreleasedReturnValue();
  dVar19 = dVar20;
  func_0x00010bf20ba0(dVar20,dVar12,uVar4,param_6,3,puVar6,0);
  dVar13 = dVar19;
  uVar2 = param_3;
  uVar17 = param_4;
  _objc_release(puVar6);
  func_0x00010c099280(lVar7);
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_b8 = uVar10;
  lStack_b0 = lVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&lStack_b0,&uStack_b8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(uVar5,param_6,3,puVar6,0);
  _objc_release(puVar6);
  dVar14 = dVar19;
  uVar16 = param_3;
  uVar18 = param_4;
  _CGRectGetHeight(dVar19,dVar12,param_3,param_4);
  dVar15 = dVar14;
  func_0x00010c099280(lVar3);
  if (dVar15 < dVar14) {
    func_0x00010c099280(lVar3);
    dVar19 = dVar15 * 2.0;
    func_0x00010c099280(lVar7);
    dVar12 = (300.0 - (dVar19 + 7.0 + dVar15 + 7.0)) + -7.0;
    dVar19 = dVar12 + -5.0;
    func_0x00010c099280(lVar3);
    dVar12 = dVar12 + dVar12;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_c8 = uVar10;
    lStack_c0 = lVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&lStack_c0,&uStack_c8,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20ba0(dVar19,dVar12,uVar4,param_6,3,puVar6,0);
    _objc_release(puVar6);
    param_3 = uVar16;
    param_4 = uVar18;
  }
  dVar14 = dVar19;
  _CGRectGetWidth(dVar19,dVar12,param_3,param_4);
  dVar15 = dVar20;
  _CGRectGetWidth(dVar20,dVar13,uVar2,uVar17);
  if (dVar15 <= dVar14) {
    dVar15 = dVar14;
  }
  _CGRectGetHeight(dVar19,dVar12,param_3,param_4);
  _CGRectGetHeight(dVar20,dVar13,uVar2,uVar17);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    auVar21._0_8_ = dVar11 + 7.0 + (double)(float)(int)dVar15 + 5.0;
    auVar21._8_8_ = dVar19 + 7.0 + dVar20 + 7.0;
    return auVar21;
  }
  ___stack_chk_fail();
  uVar16 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar17 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  func_0x00010c23d5a0(uVar16,uVar17);
  uVar2 = 0;
  uVar18 = 0;
  func_0x00010c1739e0(0,0,uVar16,uVar17,lVar3);
  lVar7 = *(long *)(lVar3 + _DAT_11277c658);
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  _objc_release();
  if (lVar7 != 0) {
    FUN_108e577c0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(lVar3 + _DAT_11277c64c),param_6,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar1);
    uVar2 = uVar17;
  }
  func_0x00010c08cdc0(lVar3);
  func_0x00010c23d100(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  auVar22._8_8_ = uVar18;
  auVar22._0_8_ = uVar2;
  return auVar22;
}



/* Entry: 108e57c2c; end: 108e57d1b; -[SCAttachmentStickerView _updateSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e57c2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  func_0x00010c23d5a0(uVar3,uVar4);
  func_0x00010c1739e0(0,0,uVar3,uVar4,param_1);
  lVar1 = *(long *)(param_1 + _DAT_11277c658);
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 != 0) {
    FUN_108e577c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277c64c),param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  func_0x00010c08cdc0(param_1);
  func_0x00010c23d100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e57d1c; end: 108e57d2b; -[SCAttachmentStickerView image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e57d1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c65c);
}



/* Entry: 108e57d2c; end: 108e57d3b; -[SCAttachmentStickerView title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e57d2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c660);
}



/* Entry: 108e57d3c; end: 108e57d4b; -[SCAttachmentStickerView shortenedUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e57d3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c664);
}



/* Entry: 108e57d4c; end: 108e57d5b; -[SCAttachmentStickerView url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e57d4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c668);
}



/* Entry: 108e57d5c; end: 108e57d9b; -[SCAttachmentStickerView setUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e57d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c668;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e57d9c; end: 108e57e3b; -[SCAttachmentStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e57d9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c668,0);
  _objc_storeStrong(param_1 + _DAT_11277c664,0);
  _objc_storeStrong(param_1 + _DAT_11277c660,0);
  _objc_storeStrong(param_1 + _DAT_11277c65c,0);
  _objc_storeStrong(param_1 + _DAT_11277c654,0);
  _objc_storeStrong(param_1 + _DAT_11277c650,0);
  _objc_storeStrong(param_1 + _DAT_11277c64c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c658,0);
  return;
}



/* Entry: 108e57e3c; end: 108e57ebb; -[SCBatteryStickerView initWithFrame:battery:] */

undefined1 * FUN_108e57e3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x00010be376c0();
  puStack_28 = PTR_PTR_1126febc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be45e80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beaae00(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e57ebc; end: 108e57f3f; -[SCBatteryStickerView initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e57ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  func_0x00010be376c0(param_1);
  puStack_28 = PTR_PTR_1126febc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c66c) = 1;
    func_0x00010beaae00(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e57f40; end: 108e57f5b; -[SCBatteryStickerView _imageRect] */

undefined8 FUN_108e57f40(void)

{
  return 0;
}



/* Entry: 108e57f5c; end: 108e5812f; -[SCBatteryStickerView _setupBatteryImageViewFromItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e57f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ba8d8;
  _objc_alloc(PTR_PTR_1126ba8d8);
  func_0x00010c01dac0();
  puVar2 = PTR_PTR_1126baa60;
  _objc_alloc();
  func_0x00010c01fe20();
  uVar7 = *(undefined8 *)(param_5 + _DAT_11277c670);
  *(undefined **)(param_5 + _DAT_11277c670) = puVar2;
  _objc_release(uVar7);
  lVar8 = (long)_DAT_11277c674;
  _objc_retain(param_7);
  uVar7 = *(undefined8 *)(param_5 + lVar8);
  *(undefined8 *)(param_5 + lVar8) = param_7;
  _objc_release(uVar7);
  func_0x00010be376c0(param_5);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  lVar9 = (long)_DAT_11277c678;
  uVar7 = *(undefined8 *)(param_5 + lVar9);
  *(undefined **)(param_5 + lVar9) = puVar2;
  _objc_release(uVar7);
  uVar3 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf17860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c098a00();
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  if ((int)uVar5 == 1) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110efbbf8;
  }
  else {
    if ((int)uVar5 != 2) goto LAB_108e580ec;
    ppuVar6 = &PTR____CFConstantStringClassReference_110efbc18;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_5 + lVar9),param_6,puVar2);
  _objc_release(puVar2);
LAB_108e580ec:
  func_0x00010c182220(*(undefined8 *)(param_5 + lVar9),param_6,1);
  func_0x00010befbb60(param_5,param_6,*(undefined8 *)(param_5 + lVar9));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108e58130; end: 108e58133; -[SCBatteryStickerView willDisplay] */

void FUN_108e58130(void)

{
  return;
}



/* Entry: 108e58134; end: 108e58137; -[SCBatteryStickerView didEndDisplay] */

void FUN_108e58134(void)

{
  return;
}



/* Entry: 108e58138; end: 108e5813b; -[SCBatteryStickerView encodeWithCoder:] */

void FUN_108e58138(void)

{
  return;
}



/* Entry: 108e5813c; end: 108e5815f; -[SCBatteryStickerView copyWithZone:] */

undefined8 FUN_108e5813c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e58160; end: 108e58167; -[SCBatteryStickerView loggingParameters] */

undefined8 FUN_108e58160(void)

{
  return 0;
}



/* Entry: 108e58168; end: 108e5816f; -[SCBatteryStickerView packId] */

undefined8 FUN_108e58168(void)

{
  return 0;
}



/* Entry: 108e58170; end: 108e58177; -[SCBatteryStickerView shortLoggingName] */

undefined8 FUN_108e58170(void)

{
  return 0;
}



/* Entry: 108e58178; end: 108e5817f; -[SCBatteryStickerView stickerId] */

undefined8 FUN_108e58178(void)

{
  return 0;
}



/* Entry: 108e58180; end: 108e581af; -[SCBatteryStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e58180(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c674);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e581b0; end: 108e581b7; -[SCBatteryStickerView toCTPItem] */

undefined8 FUN_108e581b0(void)

{
  return 0;
}



/* Entry: 108e581b8; end: 108e581bf; -[SCBatteryStickerView infoType] */

undefined8 FUN_108e581b8(void)

{
  return 4;
}



/* Entry: 108e581c0; end: 108e581c7; -[SCBatteryStickerView type] */

undefined8 FUN_108e581c0(void)

{
  return 6;
}



/* Entry: 108e581c8; end: 108e581d7; -[SCBatteryStickerView intrinsicSize] */

undefined1  [16] FUN_108e581c8(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 108e581d8; end: 108e58307; -[SCBatteryStickerView _itemInstanceWithBatteryStatus:] */

void FUN_108e581d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar2 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar3 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar4 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  puVar5 = PTR_PTR_1126dc2d8;
  _objc_opt_new(PTR_PTR_1126dc2d8);
  func_0x00010c21acc0(puVar4,param_2,2);
  func_0x00010bdd3040(param_1,param_2,param_3);
  func_0x00010c1bd800(puVar5,param_2,param_1);
  func_0x00010c1ac500(puVar3,param_2,puVar4);
  func_0x00010c196600(puVar2,param_2,puVar3);
  func_0x00010c1b5d40(puVar1,param_2,puVar2);
  puVar6 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16fbc0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e58308; end: 108e5831f; -[SCBatteryStickerView _batteryStickerMetadataLevelForSCBatteryStatus:] */

undefined4 FUN_108e58308(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 2) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 108e58320; end: 108e5832f; -[SCBatteryStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e58320(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c670);
}



/* Entry: 108e58330; end: 108e5833f; -[SCBatteryStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e58330(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c674);
}



/* Entry: 108e58340; end: 108e5834f; -[SCBatteryStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e58340(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c66c);
}



/* Entry: 108e58350; end: 108e5835f; -[SCBatteryStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e58350(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c66c) = param_3;
  return;
}



/* Entry: 108e58360; end: 108e5836f; -[SCBatteryStickerView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e58360(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c678);
}



/* Entry: 108e58370; end: 108e583bf; -[SCBatteryStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e58370(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c678,0);
  _objc_storeStrong(param_1 + _DAT_11277c674,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c670,0);
  return;
}



/* Entry: 108e583c0; end: 108e58463; -[SCCustomViewMetaSticker initWithType:stickerId:packId:view:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e583c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126febd0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithType_stickerId_packId__11253da78,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277c67c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 108e58464; end: 108e5846b; -[SCCustomViewMetaSticker infoType] */

undefined8 FUN_108e58464(void)

{
  return 0x19;
}



/* Entry: 108e5846c; end: 108e58493; -[SCCustomViewMetaSticker intrinsicSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108e5846c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11277c67c));
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e58494; end: 108e5872f; -[SCCustomViewMetaSticker thumbnailImageWithUserSession:contexts:completion:] */

void FUN_108e58494(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126dc2e0;
  _objc_opt_new();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x108e58560;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_1;
  uStack_38 = in_x4;
  _objc_retain();
  puStack_40 = puVar2;
  _objc_retain(in_x4);
  func_0x000107c312d0("APPSTORE",&puStack_68);
  puVar1 = puStack_40;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(puVar2);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e58730; end: 108e5873f; -[SCCustomViewMetaSticker view] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e58730(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c67c);
}



/* Entry: 108e58740; end: 108e5874f; -[SCCustomViewMetaSticker image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e58740(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c680);
}



/* Entry: 108e58750; end: 108e5878f; -[SCCustomViewMetaSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e58750(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c680,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c67c,0);
  return;
}



/* Entry: 108e58790; end: 108e58803; -[SCGroupInviteSticker initWithProto:] */

undefined1 * FUN_108e58790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126febd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e58804; end: 108e58893; -[SCGroupInviteSticker groupName] */

void FUN_108e58804(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfeddc0();
  if (iVar1 == 8) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf16580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 != 9) {
      uVar3 = 0;
      goto LAB_108e58884;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf99f80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf9a380();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_108e58884:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e58894; end: 108e5889b; -[SCGroupInviteSticker infoType] */

undefined8 FUN_108e58894(void)

{
  return 7;
}



/* Entry: 108e5889c; end: 108e588ab; -[SCGroupInviteSticker intrinsicSize] */

undefined1  [16] FUN_108e5889c(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 108e588ac; end: 108e588b3; -[SCGroupInviteSticker toCTPItem] */

undefined8 FUN_108e588ac(void)

{
  return 0;
}



/* Entry: 108e588b4; end: 108e588bb; -[SCGroupInviteSticker toCTItemInstance] */

undefined8 FUN_108e588b4(void)

{
  return 0;
}



/* Entry: 108e588bc; end: 108e588c3; -[SCGroupInviteSticker type] */

undefined8 FUN_108e588bc(void)

{
  return 6;
}



/* Entry: 108e588c4; end: 108e588cf; -[SCGroupInviteSticker packId] */

undefined ** FUN_108e588c4(void)

{
  return &PTR____CFConstantStringClassReference_110efbc38;
}



/* Entry: 108e588d0; end: 108e588db; -[SCGroupInviteSticker stickerId] */

undefined ** FUN_108e588d0(void)

{
  return &PTR____CFConstantStringClassReference_110efbc78;
}



/* Entry: 108e588dc; end: 108e58953; -[SCGroupInviteSticker loggingParameters] */

undefined ** FUN_108e588dc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110efbc38;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110efbc58;
}



/* Entry: 108e58954; end: 108e5895f; -[SCGroupInviteSticker shortLoggingName] */

undefined ** FUN_108e58954(void)

{
  return &PTR____CFConstantStringClassReference_110efbc58;
}



/* Entry: 108e58960; end: 108e58993; -[SCGroupInviteSticker initWithCoder:] */

void FUN_108e58960(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126febd8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 108e58994; end: 108e58997; -[SCGroupInviteSticker encodeWithCoder:] */

void FUN_108e58994(void)

{
  return;
}


