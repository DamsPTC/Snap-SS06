/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e503c8; end: 108e504ab; -[SCPollsStickerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e503c8(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126feba0;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  lVar1 = (long)_DAT_11277c5a8;
  dVar2 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetWidth();
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dStack_80 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&uStack_70,param_1 / dVar2,param_1 / dVar2,&uStack_a0);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  dStack_80 = dStack_50;
  func_0x00010c219960(*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar2 = dStack_50 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c17a6a0(dVar2,dStack_50 * 0.5,*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 108e504ac; end: 108e50547; -[SCPollsStickerView setPoll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e504ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c594);
  *(undefined8 *)(param_1 + _DAT_11277c594) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  FUN_108e4ff08(param_3,*(undefined1 *)(param_1 + _DAT_11277c598));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c59c);
  *(undefined8 *)(param_1 + _DAT_11277c59c) = uVar2;
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11277c5a8));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010beb1250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupViewForDynamicStickerWithR_112589e38,0)
  ;
  return;
}



/* Entry: 108e50548; end: 108e506e7; -[SCPollsStickerView _setupViewForStickerPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e50548(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b61b8;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1deac0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b5c80;
  func_0x00010c0cb140(PTR_PTR_1126b5c80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0ae0();
  puVar3 = puVar1;
  FUN_108e4ff08(puVar1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277c59c);
  *(undefined **)(param_1 + _DAT_11277c59c) = puVar3;
  _objc_release(uVar5);
  func_0x0001092017e4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d4fa8;
  _objc_alloc(PTR_PTR_1126d4fa8);
  puVar4 = puVar3;
  func_0x000108e73a58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0513e0(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d4fb0;
  _objc_alloc();
  func_0x00010c061ce0();
  func_0x00010c20eaa0();
  lVar7 = (long)_DAT_11277c5a8;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar4;
  _objc_retain(puVar4);
  _objc_release(uVar6);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c19f0e0(param_1);
  func_0x00010befbb60(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e506e8; end: 108e50b07; -[SCPollsStickerView _setupViewForDynamicStickerWithResults:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e506e8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double in_d3;
  double dVar17;
  double dVar18;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar16 = (long)_DAT_11277c5a8;
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar13);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar16));
  lVar2 = param_1;
  func_0x00010be75780();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11277c594;
  lVar3 = *(long *)(param_1 + lVar15);
  func_0x00010c26c560();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar3;
  func_0x00010c085000();
  _objc_release(lVar3);
  if (lVar14 == 2) {
    puVar1 = PTR_PTR_1126c9260;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c26c560(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar13;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0ec440();
    uVar7 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c26c560(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c087500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032100(puVar1,param_2,uVar6,uVar10);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(uVar4);
    puVar11 = PTR_PTR_1126c9260;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c26c560(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar13;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0ec440();
    uVar7 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c26c560(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c087500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032100(puVar11,param_2,uVar6,uVar10);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(uVar4);
    puVar12 = PTR_PTR_1126c9268;
    _objc_alloc();
    func_0x00010c0135e0();
    lVar14 = (long)_DAT_11277c5ac;
    _objc_retain();
    uVar13 = *(undefined8 *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar12;
    _objc_release(uVar13);
    if (param_3 != 0) {
      func_0x00010c1deb60(*(undefined8 *)(param_1 + lVar14),param_2,param_3);
      func_0x00010c159120(*(undefined8 *)(param_1 + lVar14));
    }
    func_0x00010c23d620(puVar12);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar16),param_2,lVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar16),param_2,puVar12);
    func_0x00010bfb68e0(lVar2);
    dVar17 = in_d3;
    func_0x00010bfb68e0(puVar12);
    dVar18 = in_d3 + dVar17 + 5.0;
    func_0x00010bfb68e0(lVar2);
    func_0x00010bfb68e0(puVar12);
    uVar13 = 0;
    dVar17 = dVar18;
    func_0x00010c19f0e0(0,0,*(undefined8 *)(param_1 + lVar16));
    func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar16));
    func_0x00010bfb68e0(lVar2);
    func_0x00010c17a6a0(uVar13,dVar17 * 0.5,lVar2);
    func_0x00010bf345e0(*(undefined8 *)(param_1 + lVar16));
    func_0x00010bfb68e0(puVar12);
    func_0x00010c17a6a0(uVar13,dVar18 - dVar17 * 0.5,puVar12);
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar16));
    func_0x00010c19f0e0(param_1);
    func_0x00010c069fa0(param_1);
    func_0x00010c23d100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c111e40();
    _objc_release(param_1);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e50b08; end: 108e50c1b; -[SCPollsStickerView _pollContentLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e50b08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c594);
  func_0x00010c2711a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c1cfce0(puVar1,param_2,4);
  func_0x00010c1bdb00(puVar1,param_2,4);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar2 = 0x4071200000000000;
  uVar4 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(0x4071200000000000,0x7fefffffffffffff,puVar1);
  func_0x00010c19f0e0(0,0,uVar2,uVar4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e50c1c; end: 108e50c23; -[SCPollsStickerView shouldReceiveTapsViaStickerContainer] */

undefined8 FUN_108e50c1c(void)

{
  return 0;
}



/* Entry: 108e50c24; end: 108e50c2b; -[SCPollsStickerView scaleLimit] */

undefined8 FUN_108e50c24(void)

{
  return 0;
}



/* Entry: 108e50c2c; end: 108e50d57; -[SCPollsStickerView tappableElementBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_108e50c2c(double param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_5;
  func_0x00010c071120();
  if ((int)lVar4 == 0) {
    puVar1 = PTR_PTR_1126d91a8;
    _objc_alloc();
    func_0x00010c005f20(0);
    ppuVar3 = &puStack_58;
    puStack_58 = puVar1;
  }
  else {
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    dVar5 = param_1;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    lVar4 = (long)_DAT_11277c5ac;
    dVar6 = dVar5;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
    func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar4));
    puVar1 = PTR_PTR_1126d91a8;
    _objc_alloc();
    func_0x00010c005f40(0,param_3 / param_1,param_4 / dVar5,dVar6 / param_1,param_2 / dVar5);
    ppuVar3 = &puStack_50;
    puStack_50 = puVar1;
  }
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,ppuVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0xe;
}



/* Entry: 108e50d58; end: 108e50d5f; -[SCPollsStickerView infoType] */

undefined8 FUN_108e50d58(void)

{
  return 0xe;
}



/* Entry: 108e50d60; end: 108e50d63; -[SCPollsStickerView encodeWithCoder:] */

void FUN_108e50d60(void)

{
  return;
}



/* Entry: 108e50d64; end: 108e50d87; -[SCPollsStickerView copyWithZone:] */

undefined8 FUN_108e50d64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e50d88; end: 108e50daf; -[SCPollsStickerView intrinsicSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108e50d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11277c5a8));
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e50db0; end: 108e50db7; -[SCPollsStickerView toCTPItem] */

undefined8 FUN_108e50db0(void)

{
  return 0;
}



/* Entry: 108e50db8; end: 108e50de7; -[SCPollsStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e50db8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c59c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e50de8; end: 108e50def; -[SCPollsStickerView type] */

undefined8 FUN_108e50de8(void)

{
  return 6;
}



/* Entry: 108e50df0; end: 108e50dfb; -[SCPollsStickerView packId] */

undefined ** FUN_108e50df0(void)

{
  return &PTR____CFConstantStringClassReference_110efba78;
}



/* Entry: 108e50dfc; end: 108e50e07; -[SCPollsStickerView stickerId] */

undefined ** FUN_108e50dfc(void)

{
  return &PTR____CFConstantStringClassReference_110efba78;
}



/* Entry: 108e50e08; end: 108e50e7f; -[SCPollsStickerView loggingParameters] */

undefined ** FUN_108e50e08(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110efba78;
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
  return &PTR____CFConstantStringClassReference_110efba98;
}



/* Entry: 108e50e80; end: 108e50e8b; -[SCPollsStickerView shortLoggingName] */

undefined ** FUN_108e50e80(void)

{
  return &PTR____CFConstantStringClassReference_110efba98;
}



/* Entry: 108e50e8c; end: 108e50f23; -[SCPollsStickerView imageView] */

void FUN_108e50e8c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 108e50f24; end: 108e50f27; -[SCPollsStickerView didEndDisplay] */

void FUN_108e50f24(void)

{
  return;
}



/* Entry: 108e50f28; end: 108e50f2b; -[SCPollsStickerView willDisplay] */

void FUN_108e50f28(void)

{
  return;
}



/* Entry: 108e50f2c; end: 108e50f3b; -[SCPollsStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e50f2c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c5a4);
}



/* Entry: 108e50f3c; end: 108e50f4b; -[SCPollsStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e50f3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c5a4) = param_3;
  return;
}



/* Entry: 108e50f4c; end: 108e50f5b; -[SCPollsStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e50f4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c5a0);
}



/* Entry: 108e50f5c; end: 108e50f6b; -[SCPollsStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e50f5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c59c);
}



/* Entry: 108e50f6c; end: 108e50f7b; -[SCPollsStickerView poll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e50f6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c594);
}



/* Entry: 108e50f7c; end: 108e50f8b; -[SCPollsStickerView isDynamicSticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e50f7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c598);
}



/* Entry: 108e50f8c; end: 108e50ffb; -[SCPollsStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e50f8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c594,0);
  _objc_storeStrong(param_1 + _DAT_11277c5a0,0);
  _objc_storeStrong(param_1 + _DAT_11277c59c,0);
  _objc_storeStrong(param_1 + _DAT_11277c5ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c5a8,0);
  return;
}



/* Entry: 108e50ffc; end: 108e51203; +[SCQuestionStickerAddAlert questionStickerAddAlertWithAddAction:displayName:] */

void FUN_108e50ffc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000108e73b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108e73ae8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108e73b18();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar5;
  func_0x000108e73b30();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x000108e51234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 108e51204; end: 108e51237;  */

void FUN_108e51204(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000108e51234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108e51238; end: 108e51247;  */

void FUN_108e51238(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 108e51248; end: 108e51557; -[SCQuestionStickerNewQuestionButton initNewQuestionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108e51248(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
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
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 *puVar38;
  undefined8 uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_108 = PTR_PTR_1126feba8;
  puVar38 = &uStack_110;
  uStack_110 = param_1;
  _objc_msgSendSuper2(puVar38,PTR_s_init_1125d9248);
  puVar18 = (undefined *)0x0;
  if (puVar38 != (undefined8 *)0x0) {
    puVar20 = puVar38;
    func_0x000108e73b48();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar20;
    puStack_100 = puVar20;
    func_0x000108e73b60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    puStack_f8 = puVar1;
    func_0x000108e73b78();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puStack_f0 = puVar2;
    func_0x000108e73b90();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    puStack_e8 = puVar3;
    func_0x000108e73ba8();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    puStack_e0 = puVar4;
    func_0x000108e73bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    puStack_d8 = puVar5;
    func_0x000108e73bd8();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    puStack_d0 = puVar6;
    func_0x000108e73bf0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    puStack_c8 = puVar7;
    func_0x000108e73c08();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    puStack_c0 = puVar8;
    func_0x000108e73c20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    puStack_b8 = puVar9;
    func_0x000108e73c38();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    puStack_b0 = puVar10;
    func_0x000108e73c50();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    puStack_a8 = puVar11;
    func_0x000108e73c68();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    puStack_a0 = puVar12;
    func_0x000108e73c80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    puStack_98 = puVar13;
    func_0x000108e73c98();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    puStack_90 = puVar14;
    func_0x000108e73cb0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    puStack_88 = puVar15;
    func_0x000108e73cc8();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    puStack_80 = puVar16;
    func_0x000108e73ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)((long)puVar38 + (long)_DAT_11277c5b0);
    *(undefined **)((long)puVar38 + (long)_DAT_11277c5b0) = puVar18;
    _objc_release(uVar39);
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
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar20);
    func_0x00010beae4e0(puVar38);
    func_0x00010beac0c0(puVar38);
    func_0x00010c21e900(puVar38);
    puVar18 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(puVar38);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar38;
  }
  ___stack_chk_fail();
  lVar40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar41 = (long)_DAT_11277c5b4;
  uVar39 = *(undefined8 *)(puVar18 + lVar41);
  *(undefined **)(puVar18 + lVar41) = puVar19;
  _objc_release(uVar39);
  func_0x000108e73ab8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(puVar18 + lVar41));
  _objc_release(uVar39);
  puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar18 + lVar41));
  _objc_release(puVar19);
  func_0x00010c21ad00(*(undefined8 *)(puVar18 + lVar41));
  func_0x00010c213040(*(undefined8 *)(puVar18 + lVar41));
  func_0x00010c219b60(*(undefined8 *)(puVar18 + lVar41));
  func_0x00010befbb60(puVar18);
  puVar19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar20 = *(undefined8 **)(puVar18 + lVar41);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(puVar18 + lVar41);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(puVar18 + lVar41);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar19);
  _objc_release(puVar26);
  _objc_release(uVar25);
  _objc_release(puVar18);
  _objc_release(uVar24);
  _objc_release(uVar39);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar38);
  _objc_release(puVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar40) {
    return puVar20;
  }
  ___stack_chk_fail();
  lVar40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar38 = (undefined8 *)PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar41 = (long)_DAT_11277c5b8;
  uVar39 = *(undefined8 *)((long)puVar20 + lVar41);
  *(undefined **)((long)puVar20 + lVar41) = puVar18;
  _objc_release(uVar39);
  func_0x00010c182220(*(undefined8 *)((long)puVar20 + lVar41));
  func_0x00010c219b60(*(undefined8 *)((long)puVar20 + lVar41));
  func_0x00010befbb60(puVar20);
  puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar27 = *(undefined8 *)((long)puVar20 + lVar41);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)((long)puVar20 + lVar41);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = (long)_DAT_11277c5b4;
  uVar29 = *(undefined8 *)((long)puVar20 + lVar42);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar28;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)((long)puVar20 + lVar41);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar30;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)((long)puVar20 + lVar41);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar20;
  func_0x00010bf1ff80(puVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar31;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)((long)puVar20 + lVar41);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)((long)puVar20 + lVar42);
  func_0x00010bfe0660(uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar32;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)((long)puVar20 + lVar41);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)((long)puVar20 + lVar41);
  func_0x00010bfe0660(uVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar35;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar18);
  _objc_release(puVar19);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar24);
  _objc_release(puVar3);
  _objc_release(uVar31);
  _objc_release(uVar22);
  _objc_release(puVar2);
  _objc_release(uVar30);
  _objc_release(uVar25);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar39);
  _objc_release(puVar1);
  _objc_release(uVar27);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar40) {
    return puVar38;
  }
  ___stack_chk_fail();
  lVar40 = *(long *)((long)puVar38 + (long)_DAT_11277c5bc);
  if (lVar40 != 0) {
    puVar38 = *(undefined8 **)((long)puVar38 + (long)_DAT_11277c5b0);
    func_0x00010c11f1a0(puVar38);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar40 + 0x10))(lVar40,puVar38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar38);
    return puVar38;
  }
  return puVar38;
}



/* Entry: 108e51558; end: 108e517c3; -[SCQuestionStickerNewQuestionButton _setupNewQuestionLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e51558(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar24 = (long)_DAT_11277c5b4;
  uVar22 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar1;
  _objc_release(uVar22);
  func_0x000108e73ab8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar24));
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar24));
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar24);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar23);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar24 = (long)_DAT_11277c5b8;
  uVar22 = *(undefined8 *)(lVar2 + lVar24);
  *(undefined **)(lVar2 + lVar24) = puVar1;
  _objc_release(uVar22);
  func_0x00010c182220(*(undefined8 *)(lVar2 + lVar24));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar24));
  func_0x00010befbb60(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(lVar2 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + lVar24);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11277c5b4;
  uVar11 = *(undefined8 *)(lVar2 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar2 + lVar24);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar2 + lVar24);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf1ff80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar2 + lVar24);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar2 + lVar25);
  func_0x00010bfe0660(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar2 + lVar24);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar2 + lVar24);
  func_0x00010bfe0660(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar22);
  _objc_release(lVar23);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)(puVar8 + _DAT_11277c5bc);
  if (lVar23 != 0) {
    uVar22 = *(undefined8 *)(puVar8 + _DAT_11277c5b0);
    func_0x00010c11f1a0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar23 + 0x10))(lVar23,uVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar22);
    return;
  }
  return;
}



/* Entry: 108e517c4; end: 108e51b2f; -[SCQuestionStickerNewQuestionButton _setupDiceImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e517c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110efbad8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar22 = (long)_DAT_11277c5b8;
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar2;
  _objc_release(uVar21);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar22));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22));
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_11277c5b4;
  uVar5 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bfe0660(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bfe0660(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar21);
  _objc_release(lVar23);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)(puVar1 + _DAT_11277c5bc);
  if (lVar23 != 0) {
    uVar21 = *(undefined8 *)(puVar1 + _DAT_11277c5b0);
    func_0x00010c11f1a0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar23 + 0x10))(lVar23,uVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar21);
    return;
  }
  return;
}



/* Entry: 108e51b30; end: 108e51b93; -[SCQuestionStickerNewQuestionButton _buttonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e51b30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11277c5bc);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277c5b0);
    func_0x00010c11f1a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108e51b94; end: 108e51ba3; -[SCQuestionStickerNewQuestionButton tapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e51b94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c5bc);
}



/* Entry: 108e51ba4; end: 108e51baf; -[SCQuestionStickerNewQuestionButton setTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e51ba4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e51bb0; end: 108e51c0f; -[SCQuestionStickerNewQuestionButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e51bb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c5bc,0);
  _objc_storeStrong(param_1 + _DAT_11277c5b4,0);
  _objc_storeStrong(param_1 + _DAT_11277c5b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c5b0,0);
  return;
}



/* Entry: 108e51c10; end: 108e51cdf; -[SCQuestionStickerView initForStickerPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e51c10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126febb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000108e73a88();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c5c0);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277c5c0) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    func_0x00010bdf3ee0(puVar1);
    lVar5 = (long)_DAT_11277c5c4;
    func_0x00010bfb68e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c19f0e0(puVar1);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e51ce0; end: 108e51e0f; -[SCQuestionStickerView initQuestionStickerViewWithPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e51ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126febb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar2;
    func_0x00010be45ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277c5c0);
    *(undefined1 **)((long)puVar2 + (long)_DAT_11277c5c0) = puVar3;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11277c5c8) = 0;
    func_0x00010bdec5e0(puVar2);
    func_0x00010bdf1e80(puVar2);
    func_0x00010bdf1f80(puVar2);
    func_0x00010bdf25a0(puVar2);
    lVar1 = (long)_DAT_11277c5cc;
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar1));
    func_0x00010befbb60(*(undefined8 *)((long)puVar2 + lVar1));
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010beabb80(puVar2);
    func_0x00010beaf140(puVar2);
    func_0x00010beaf3a0(puVar2);
    func_0x00010beaf660(puVar2);
    func_0x00010c23d620(puVar2);
    func_0x00010c08cdc0(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 108e51e10; end: 108e51f1f; -[SCQuestionStickerView initQuestionStickerViewWithPrompt:response:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e51e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126febb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c5c8) = 1;
    func_0x00010bdec5e0(puVar1);
    func_0x00010bdf1fa0(puVar1);
    func_0x00010bdf2960(puVar1);
    lVar2 = (long)_DAT_11277c5cc;
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar2));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar2));
    func_0x00010befbb60(puVar1);
    func_0x00010beabb80(puVar1);
    func_0x00010beaf380(puVar1);
    func_0x00010beaf720(puVar1);
    func_0x00010c23d620(puVar1);
    func_0x00010c08cdc0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e51f20; end: 108e52113; -[SCQuestionStickerView initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e51f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126febb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11dd60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar5 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c5e4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c5e4) = puVar5;
    _objc_release(uVar6);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c5e8) = 1;
    lVar7 = (long)_DAT_11277c5c0;
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar6);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c5c8) = 0;
    func_0x00010bdec5e0(puVar1);
    func_0x00010bdf1e80(puVar1);
    uVar6 = uVar3;
    func_0x00010c11ddc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf1f80(puVar1);
    _objc_release(uVar6);
    func_0x00010bdf25a0(puVar1);
    lVar7 = (long)_DAT_11277c5cc;
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010beabb80(puVar1);
    func_0x00010beaf140(puVar1);
    func_0x00010beaf3a0(puVar1);
    func_0x00010beaf660(puVar1);
    func_0x00010c23d620(puVar1);
    func_0x00010c08cdc0(puVar1);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e52114; end: 108e521fb; -[SCQuestionStickerView _createContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e52114(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11277c5cc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar2 = 0xffffffff80000029;
  if (*(long *)(param_1 + _DAT_11277c5c8) != 0) {
    uVar2 = 0xffffffff8000006b;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e521fc; end: 108e523ab; -[SCQuestionStickerView _createPromptFieldWithPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e521fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
  _objc_retain(param_3);
  _objc_alloc_init();
  lVar5 = (long)_DAT_11277c5d0;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar5),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff800000c6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff80000029);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1edbe0(*(undefined8 *)(param_1 + lVar5),param_2,9);
  func_0x00010c1b6da0(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  uVar3 = uVar4;
  func_0x00010bf193c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf94e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26c600(uVar4,param_2,uVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb600(*(undefined8 *)(param_1 + lVar5),param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108e523ac; end: 108e52473; -[SCQuestionStickerView _createReplyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e523ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277c5d4;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c16e480(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x000108e73aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3);
  _objc_release(uVar2);
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_setUserInteractionEnabled__112665468,0);
  return;
}



/* Entry: 108e52474; end: 108e5254b; -[SCQuestionStickerView _createStickerPickerPillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e52474(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110efbaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4fa8;
  _objc_alloc(PTR_PTR_1126d4fa8);
  puVar3 = puVar2;
  func_0x000108e73a70();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0513e0(puVar2,param_2,puVar3,0,puVar1,1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d4fb0;
  _objc_alloc();
  func_0x00010c061ce0();
  lVar5 = (long)_DAT_11277c5c4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_release(uVar4);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e5254c; end: 108e52877; -[SCQuestionStickerView _createPreviewPillView] */

/* WARNING: Possible PIC construction at 0x000108e526b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e526b8) */
/* WARNING: Removing unreachable block (ram,0x000108e52874) */
/* WARNING: Removing unreachable block (ram,0x000108e52854) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5254c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11277c5d8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4039000000000000);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c182220();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4039000000000000);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_addSubview__11259c880,puVar1);
  return;
}



/* Entry: 108e52878; end: 108e529b3; -[SCQuestionStickerView _createPromptHeaderViewWithPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e52878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  _objc_alloc_init();
  lVar4 = (long)_DAT_11277c5dc;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11277c5ec;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108e529b4; end: 108e52a87; -[SCQuestionStickerView _createResponseLabelWithResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e529b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_retain(param_3);
  _objc_alloc_init();
  lVar3 = (long)_DAT_11277c5e0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setTranslatesAutoresizingMaskInt_112664100,0);
  return;
}



/* Entry: 108e52a88; end: 108e52c97; -[SCQuestionStickerView _setupContainerViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e52a88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  double dVar35;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_4a0;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  code *pcStack_228;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar29 = (long)_DAT_11277c5cc;
  lVar1 = *(long *)(param_1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  lStack_90 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_98 = lVar30;
  func_0x00010bf493a0(lVar1,param_2,lVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar29);
  lStack_88 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar29);
  uStack_80 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf49420(0x406f400000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar29);
  uStack_78 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar34;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a0,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar34);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar30);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(lStack_98);
  lVar30 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_108e52c98;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_168 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar31 = (long)_DAT_11277c5d8;
  lVar29 = *(long *)(lVar30 + lVar31);
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar30;
  lStack_148 = lVar29;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar1;
  func_0x00010bf493a0(lVar29,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar30 + lVar31);
  lStack_158 = lVar29;
  lStack_140 = lVar29;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar30 + _DAT_11277c5cc);
  uStack_160 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar30 + lVar31);
  uStack_138 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar30 + lVar31);
  uStack_130 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar30 + lVar31);
  uStack_128 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar8;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar34;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_140,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_168,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar34);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_160);
  _objc_release(lStack_158);
  _objc_release(lStack_150);
  lVar30 = lStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_108e52efc;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar31 = (long)_DAT_11277c5d0;
  uVar34 = 0x7fefffffffffffff;
  ppuStack_180 = &puStack_b0;
  func_0x00010c23d5a0(0x4069000000000000,*(undefined8 *)(lVar30 + lVar31));
  uVar9 = *(undefined8 *)(lVar30 + lVar31);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf49420(uVar34);
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11277c5f0;
  uVar34 = *(undefined8 *)(lVar30 + lVar29);
  *(undefined8 *)(lVar30 + lVar29) = uVar3;
  _objc_release(uVar34);
  _objc_release(uVar9);
  puStack_218 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = *(long *)(lVar30 + lVar31);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_11277c5cc;
  uVar34 = *(undefined8 *)(lVar30 + lVar33);
  lStack_210 = lVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(lVar1,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar30 + lVar31);
  lStack_208 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar30 + _DAT_11277c5d8);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar30 + lVar31);
  uStack_200 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar30 + lVar33);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf493c0(0xc049000000000000,uVar5,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uStack_1f0 = *(undefined8 *)(lVar30 + lVar29);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1f8 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_208,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_218,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar34);
  lVar30 = lStack_210;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  puVar27 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  pcStack_228 = FUN_108e53148;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar33 = (long)_DAT_11277c5d4;
  lVar31 = *(long *)(lVar30 + lVar33);
  uStack_280 = uVar7;
  uStack_278 = uVar5;
  uStack_270 = uVar3;
  uStack_268 = uVar4;
  uStack_260 = uVar9;
  uStack_258 = uVar2;
  lStack_250 = lVar1;
  puStack_248 = puVar6;
  lStack_240 = lVar29;
  uStack_238 = uVar34;
  ppuStack_230 = &ppuStack_180;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11277c5cc;
  uVar34 = *(undefined8 *)(lVar30 + lVar29);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar31;
  func_0x00010bf493a0(lVar31,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar30 + lVar33);
  lStack_2a0 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar30 + _DAT_11277c5d0);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493c0(0x4014000000000000,uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar30 + lVar33);
  uStack_298 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar30 + lVar29);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf493c0(0xc039000000000000,uVar5,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_290 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_2a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar27,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar34);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar33 = (long)_DAT_11277c5ec;
  dVar35 = 1.79769313486232e+308;
  func_0x00010c23d5a0(0x406cc00000000000,*(undefined8 *)(lVar31 + lVar33));
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar32 = (long)_DAT_11277c5dc;
  lVar1 = *(long *)(lVar31 + lVar32);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11277c5cc;
  uVar10 = *(undefined8 *)(lVar31 + lVar29);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar1;
  func_0x00010bf493a0(lVar1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar31 + lVar32);
  lStack_380 = lVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar31 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar31 + lVar32);
  uStack_378 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar31 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar31 + lVar32);
  uStack_370 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar31 + lVar29);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar31 + lVar32);
  uStack_368 = uVar34;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar31 + lVar29);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar31 + lVar32);
  uStack_360 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar19;
  func_0x00010bf49420(dVar35 + 20.0);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar31 + lVar33);
  uStack_358 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar31 + lVar32);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar31 + lVar33);
  uStack_350 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar31 + lVar32);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar22;
  func_0x00010bf493a0(uVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar31 + lVar33);
  uStack_348 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar24;
  func_0x00010bf49420(dVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar31 + lVar33);
  uStack_340 = uVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(lVar31 + lVar32);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar25;
  func_0x00010bf493c0(0xc034000000000000,uVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_338 = uVar28;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_380,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(uVar28);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar8);
  _objc_release(uVar24);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar5);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(uVar2);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar34);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar9);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar30);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_330) {
    return;
  }
  ___stack_chk_fail();
  lStack_4a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar30 = (long)_DAT_11277c5e0;
  uVar7 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(0x406cc00000000000,0x7fefffffffffffff,*(undefined8 *)(lVar1 + lVar30));
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)(lVar1 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11277c5cc;
  uVar28 = *(undefined8 *)(lVar1 + lVar29);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar1 + lVar30);
  uStack_4d8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar1 + _DAT_11277c5dc);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf493c0(0x4024000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar1 + lVar30);
  uStack_4d0 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar1 + lVar29);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar12;
  func_0x00010bf493c0(0xc024000000000000,uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar1 + lVar30);
  uStack_4c8 = uVar34;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010bf493c0(0x4024000000000000,uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar1 + lVar30);
  uStack_4c0 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar1 + lVar29);
  func_0x00010c2793a0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010bf493c0(0xc024000000000000,uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar1 + lVar30);
  uStack_4b8 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar18;
  func_0x00010bf49420(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar1 + lVar30);
  uStack_4b0 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar1 + lVar29);
  func_0x00010c2a5060(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar19;
  func_0x00010bf493c0(0xc034000000000000,uVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_4a8 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_4d8,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar6,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(uVar7);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar5);
  _objc_release(uVar18);
  _objc_release(uVar4);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar2);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar34);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar28);
  _objc_release(uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a0) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar27 = puVar6;
  func_0x000108e73ad0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar6,param_2,puVar27);
  _objc_release(puVar27);
  puVar27 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar6,param_2,puVar27);
  _objc_release(puVar27);
  func_0x00010c213040(puVar6,param_2,1);
  func_0x00010c21ad00(puVar6,param_2,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108e52c98; end: 108e52efb; -[SCQuestionStickerView _setupPreviewPillViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e52c98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  double dVar35;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar30 = (long)_DAT_11277c5d8;
  lVar1 = *(long *)(param_1 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  lStack_a8 = lVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar29;
  func_0x00010bf493a0(lVar1,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar30);
  lStack_b8 = lVar1;
  lStack_a0 = lVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c5cc);
  uStack_c0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar30);
  uStack_98 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar30);
  uStack_90 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar30);
  uStack_88 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar7;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar34;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a0,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar34);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar29);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uStack_c0);
  _objc_release(lStack_b8);
  _objc_release(lStack_b0);
  lVar29 = lStack_a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_108e52efc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar31 = (long)_DAT_11277c5d0;
  uVar34 = 0x7fefffffffffffff;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010c23d5a0(0x4069000000000000,*(undefined8 *)(lVar29 + lVar31));
  uVar9 = *(undefined8 *)(lVar29 + lVar31);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf49420(uVar34);
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_11277c5f0;
  uVar34 = *(undefined8 *)(lVar29 + lVar30);
  *(undefined8 *)(lVar29 + lVar30) = uVar5;
  _objc_release(uVar34);
  _objc_release(uVar9);
  puStack_178 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = *(long *)(lVar29 + lVar31);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_11277c5cc;
  uVar34 = *(undefined8 *)(lVar29 + lVar33);
  lStack_170 = lVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(lVar1,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar29 + lVar31);
  lStack_168 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar29 + _DAT_11277c5d8);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar29 + lVar31);
  uStack_160 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar29 + lVar33);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf493c0(0xc049000000000000,uVar4,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uStack_150 = *(undefined8 *)(lVar29 + lVar30);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_158 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_168,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_178,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(uVar34);
  lVar29 = lStack_170;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  puVar27 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  pcStack_188 = FUN_108e53148;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar33 = (long)_DAT_11277c5d4;
  lVar31 = *(long *)(lVar29 + lVar33);
  uStack_1e0 = uVar6;
  uStack_1d8 = uVar4;
  uStack_1d0 = uVar5;
  uStack_1c8 = uVar2;
  uStack_1c0 = uVar9;
  uStack_1b8 = uVar3;
  lStack_1b0 = lVar1;
  puStack_1a8 = puVar8;
  lStack_1a0 = lVar30;
  uStack_198 = uVar34;
  ppuStack_190 = &puStack_e0;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_11277c5cc;
  uVar34 = *(undefined8 *)(lVar29 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar31;
  func_0x00010bf493a0(lVar31,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar29 + lVar33);
  lStack_200 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar29 + _DAT_11277c5d0);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4014000000000000,uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar29 + lVar33);
  uStack_1f8 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar29 + lVar30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf493c0(0xc039000000000000,uVar4,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1f0 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_200,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar27,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(uVar34);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar33 = (long)_DAT_11277c5ec;
  dVar35 = 1.79769313486232e+308;
  func_0x00010c23d5a0(0x406cc00000000000,*(undefined8 *)(lVar31 + lVar33));
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar32 = (long)_DAT_11277c5dc;
  lVar1 = *(long *)(lVar31 + lVar32);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_11277c5cc;
  uVar10 = *(undefined8 *)(lVar31 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar1;
  func_0x00010bf493a0(lVar1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar31 + lVar32);
  lStack_2e0 = lVar29;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar31 + lVar30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar31 + lVar32);
  uStack_2d8 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar31 + lVar30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar31 + lVar32);
  uStack_2d0 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar31 + lVar30);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar31 + lVar32);
  uStack_2c8 = uVar34;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar31 + lVar30);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar31 + lVar32);
  uStack_2c0 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar19;
  func_0x00010bf49420(dVar35 + 20.0);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar31 + lVar33);
  uStack_2b8 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar31 + lVar32);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar31 + lVar33);
  uStack_2b0 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar31 + lVar32);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar22;
  func_0x00010bf493a0(uVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar31 + lVar33);
  uStack_2a8 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar24;
  func_0x00010bf49420(dVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar31 + lVar33);
  uStack_2a0 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(lVar31 + lVar32);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar25;
  func_0x00010bf493c0(0xc034000000000000,uVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_298 = uVar28;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_2e0,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(uVar28);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar7);
  _objc_release(uVar24);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar4);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar2);
  _objc_release(uVar19);
  _objc_release(uVar3);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar34);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar9);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar29);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_290) {
    return;
  }
  ___stack_chk_fail();
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = (long)_DAT_11277c5e0;
  uVar6 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(0x406cc00000000000,0x7fefffffffffffff,*(undefined8 *)(lVar1 + lVar29));
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)(lVar1 + lVar29);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_11277c5cc;
  uVar28 = *(undefined8 *)(lVar1 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar1 + lVar29);
  uStack_438 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar1 + _DAT_11277c5dc);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bf493c0(0x4024000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar1 + lVar29);
  uStack_430 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar1 + lVar30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar12;
  func_0x00010bf493c0(0xc024000000000000,uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar1 + lVar29);
  uStack_428 = uVar34;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar1 + lVar30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bf493c0(0x4024000000000000,uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar1 + lVar29);
  uStack_420 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar1 + lVar30);
  func_0x00010c2793a0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar16;
  func_0x00010bf493c0(0xc024000000000000,uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar1 + lVar29);
  uStack_418 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar18;
  func_0x00010bf49420(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar1 + lVar29);
  uStack_410 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar1 + lVar30);
  func_0x00010c2a5060(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar19;
  func_0x00010bf493c0(0xc034000000000000,uVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_408 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_438,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(uVar6);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar4);
  _objc_release(uVar18);
  _objc_release(uVar2);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar34);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar28);
  _objc_release(uVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar27 = puVar8;
  func_0x000108e73ad0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar8,param_2,puVar27);
  _objc_release(puVar27);
  puVar27 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar8,param_2,puVar27);
  _objc_release(puVar27);
  func_0x00010c213040(puVar8,param_2,1);
  func_0x00010c21ad00(puVar8,param_2,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108e52efc; end: 108e53147; -[SCQuestionStickerView _setupPromptViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e52efc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  double dVar35;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar30 = (long)_DAT_11277c5d0;
  uVar34 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(0x4069000000000000,*(undefined8 *)(param_1 + lVar30));
  uVar1 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49420(uVar34);
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11277c5f0;
  uVar34 = *(undefined8 *)(param_1 + lVar29);
  *(undefined8 *)(param_1 + lVar29) = uVar2;
  _objc_release(uVar34);
  _objc_release(uVar1);
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_11277c5cc;
  uVar34 = *(undefined8 *)(param_1 + lVar33);
  lStack_a0 = lVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(lVar3,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar30);
  lStack_98 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277c5d8);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar30);
  uStack_90 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493c0(0xc049000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = *(undefined8 *)(param_1 + lVar29);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a8,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar34);
  lVar30 = lStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar26 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  pcStack_b8 = FUN_108e53148;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar31 = (long)_DAT_11277c5d4;
  lVar33 = *(long *)(lVar30 + lVar31);
  uStack_110 = uVar7;
  uStack_108 = uVar6;
  uStack_100 = uVar2;
  uStack_f8 = uVar5;
  uStack_f0 = uVar1;
  uStack_e8 = uVar4;
  lStack_e0 = lVar3;
  puStack_d8 = puVar8;
  lStack_d0 = lVar29;
  uStack_c8 = uVar34;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11277c5cc;
  uVar34 = *(undefined8 *)(lVar30 + lVar29);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar33;
  func_0x00010bf493a0(lVar33,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar30 + lVar31);
  lStack_130 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar30 + _DAT_11277c5d0);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf493c0(0x4014000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar30 + lVar31);
  uStack_128 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar30 + lVar29);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493c0(0xc039000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_120 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_130,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar26,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar34);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar31 = (long)_DAT_11277c5ec;
  dVar35 = 1.79769313486232e+308;
  func_0x00010c23d5a0(0x406cc00000000000,*(undefined8 *)(lVar33 + lVar31));
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar32 = (long)_DAT_11277c5dc;
  lVar3 = *(long *)(lVar33 + lVar32);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11277c5cc;
  uVar9 = *(undefined8 *)(lVar33 + lVar29);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar33 + lVar32);
  lStack_210 = lVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar33 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar33 + lVar32);
  uStack_208 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar33 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar33 + lVar32);
  uStack_200 = uVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar33 + lVar29);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar33 + lVar32);
  uStack_1f8 = uVar34;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar33 + lVar29);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar33 + lVar32);
  uStack_1f0 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar18;
  func_0x00010bf49420(dVar35 + 20.0);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar33 + lVar31);
  uStack_1e8 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar33 + lVar32);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar19;
  func_0x00010bf493a0(uVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar33 + lVar31);
  uStack_1e0 = uVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar33 + lVar32);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar33 + lVar31);
  uStack_1d8 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar23;
  func_0x00010bf49420(dVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar33 + lVar31);
  uStack_1d0 = uVar27;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar33 + lVar32);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar24;
  func_0x00010bf493c0(0xc034000000000000,uVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1c8 = uVar28;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_210,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8,param_2,puVar26);
  _objc_release(puVar26);
  _objc_release(uVar28);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar27);
  _objc_release(uVar23);
  _objc_release(uVar7);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar6);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar5);
  _objc_release(uVar18);
  _objc_release(uVar4);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar34);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar30);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar30 = (long)_DAT_11277c5e0;
  uVar7 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(0x406cc00000000000,0x7fefffffffffffff,*(undefined8 *)(lVar3 + lVar30));
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar27 = *(undefined8 *)(lVar3 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11277c5cc;
  uVar28 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar27;
  func_0x00010bf493a0(uVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar3 + lVar30);
  uStack_368 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar3 + _DAT_11277c5dc);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bf493c0(0x4024000000000000,uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar3 + lVar30);
  uStack_360 = uVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar11;
  func_0x00010bf493c0(0xc024000000000000,uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar3 + lVar30);
  uStack_358 = uVar34;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar13;
  func_0x00010bf493c0(0x4024000000000000,uVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar3 + lVar30);
  uStack_350 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010c2793a0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar15;
  func_0x00010bf493c0(0xc024000000000000,uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar3 + lVar30);
  uStack_348 = uVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar17;
  func_0x00010bf49420(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar3 + lVar30);
  uStack_340 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar3 + lVar29);
  func_0x00010c2a5060(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar18;
  func_0x00010bf493c0(0xc034000000000000,uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_338 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_368,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8,param_2,puVar26);
  _objc_release(puVar26);
  _objc_release(uVar7);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar6);
  _objc_release(uVar17);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar34);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar28);
  _objc_release(uVar27);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_330) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar26 = puVar8;
  func_0x000108e73ad0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar8,param_2,puVar26);
  _objc_release(puVar26);
  puVar26 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar8,param_2,puVar26);
  _objc_release(puVar26);
  func_0x00010c213040(puVar8,param_2,1);
  func_0x00010c21ad00(puVar8,param_2,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108e53148; end: 108e53327; -[SCQuestionStickerView _setupReplyButtonLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e53148(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  double dVar35;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar29 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar32 = (long)_DAT_11277c5d4;
  lVar1 = *(long *)(param_1 + lVar32);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = (long)_DAT_11277c5cc;
  uVar2 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar1;
  func_0x00010bf493a0(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar32);
  lStack_80 = lVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277c5d0);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4014000000000000,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar32);
  uStack_78 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493c0(0xc039000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar29,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar30);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar31 = (long)_DAT_11277c5ec;
  dVar35 = 1.79769313486232e+308;
  func_0x00010c23d5a0(0x406cc00000000000,*(undefined8 *)(lVar1 + lVar31));
  puVar29 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar33 = (long)_DAT_11277c5dc;
  lVar32 = *(long *)(lVar1 + lVar33);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = (long)_DAT_11277c5cc;
  uVar10 = *(undefined8 *)(lVar1 + lVar34);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar32;
  func_0x00010bf493a0(lVar32,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar1 + lVar33);
  lStack_160 = lVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar1 + lVar34);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar1 + lVar33);
  uStack_158 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar1 + lVar34);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar1 + lVar33);
  uStack_150 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar1 + lVar34);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar15;
  func_0x00010bf493a0(uVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar1 + lVar33);
  uStack_148 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar1 + lVar34);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar1 + lVar33);
  uStack_140 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar19;
  func_0x00010bf49420(dVar35 + 20.0);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar1 + lVar31);
  uStack_138 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar1 + lVar33);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar1 + lVar31);
  uStack_130 = uVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar1 + lVar33);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar22;
  func_0x00010bf493a0(uVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar1 + lVar31);
  uStack_128 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar24;
  func_0x00010bf49420(dVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(lVar1 + lVar31);
  uStack_120 = uVar27;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(lVar1 + lVar33);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar25;
  func_0x00010bf493c0(0xc034000000000000,uVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_118 = uVar28;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_160,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar29,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar28);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar27);
  _objc_release(uVar24);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar6);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(uVar3);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar2);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar30);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
    return;
  }
  ___stack_chk_fail();
  lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar30 = (long)_DAT_11277c5e0;
  uVar7 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(0x406cc00000000000,0x7fefffffffffffff,*(undefined8 *)(lVar32 + lVar30));
  puVar29 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar27 = *(undefined8 *)(lVar32 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11277c5cc;
  uVar28 = *(undefined8 *)(lVar32 + lVar1);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar27;
  func_0x00010bf493a0(uVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar32 + lVar30);
  uStack_2b8 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar32 + _DAT_11277c5dc);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010bf493c0(0x4024000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar32 + lVar30);
  uStack_2b0 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar32 + lVar1);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bf493c0(0xc024000000000000,uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar32 + lVar30);
  uStack_2a8 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar32 + lVar1);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bf493c0(0x4024000000000000,uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar32 + lVar30);
  uStack_2a0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar32 + lVar1);
  func_0x00010c2793a0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010bf493c0(0xc024000000000000,uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar32 + lVar30);
  uStack_298 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar18;
  func_0x00010bf49420(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar32 + lVar30);
  uStack_290 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar32 + lVar1);
  func_0x00010c2a5060(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar19;
  func_0x00010bf493c0(0xc034000000000000,uVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_288 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_2b8,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar29,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar7);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar6);
  _objc_release(uVar18);
  _objc_release(uVar4);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar2);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar28);
  _objc_release(uVar27);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_280) {
    return;
  }
  ___stack_chk_fail();
  puVar29 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar9 = puVar29;
  func_0x000108e73ad0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar29,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar29,param_2,puVar9);
  _objc_release(puVar9);
  func_0x00010c213040(puVar29,param_2,1);
  func_0x00010c21ad00(puVar29,param_2,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
  return;
}



/* Entry: 108e53328; end: 108e53787; -[SCQuestionStickerView _setupPromptHeaderViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e53328(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  double dVar33;
  undefined8 uVar34;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_d0;
  undefined8 uStack_c8;
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
  lVar31 = (long)_DAT_11277c5ec;
  dVar33 = 1.79769313486232e+308;
  func_0x00010c23d5a0(0x406cc00000000000,*(undefined8 *)(param_1 + lVar31));
  puVar28 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar32 = (long)_DAT_11277c5dc;
  lVar1 = *(long *)(param_1 + lVar32);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11277c5cc;
  uVar2 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar1;
  func_0x00010bf493a0(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar32);
  lStack_d0 = lVar30;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar32);
  uStack_c8 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar32);
  uStack_c0 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar32);
  uStack_b8 = uVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar32);
  uStack_b0 = uVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf49420(dVar33 + 20.0);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar31);
  uStack_a8 = uVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0(uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar31);
  uStack_a0 = uVar19;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar31);
  uStack_98 = uVar34;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar22;
  func_0x00010bf49420(dVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar31);
  uStack_90 = uVar26;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar23;
  func_0x00010bf493c0(0xc034000000000000,uVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar27;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_d0,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar28,param_2,puVar25);
  _objc_release(puVar25);
  _objc_release(uVar27);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar26);
  _objc_release(uVar22);
  _objc_release(uVar34);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar30);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar30 = (long)_DAT_11277c5e0;
  uVar34 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(0x406cc00000000000,0x7fefffffffffffff,*(undefined8 *)(lVar1 + lVar30));
  puVar28 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar26 = *(undefined8 *)(lVar1 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_11277c5cc;
  uVar27 = *(undefined8 *)(lVar1 + lVar29);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar26;
  func_0x00010bf493a0(uVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar1 + lVar30);
  uStack_228 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar1 + _DAT_11277c5dc);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf493c0(0x4024000000000000,uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar1 + lVar30);
  uStack_220 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar1 + lVar29);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf493c0(0xc024000000000000,uVar4,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar1 + lVar30);
  uStack_218 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar7;
  func_0x00010bf493c0(0x4024000000000000,uVar7,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar1 + lVar30);
  uStack_210 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar1 + lVar29);
  func_0x00010c2793a0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar10;
  func_0x00010bf493c0(0xc024000000000000,uVar10,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar1 + lVar30);
  uStack_208 = uVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar13;
  func_0x00010bf49420(uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar1 + lVar30);
  uStack_200 = uVar19;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar1 + lVar29);
  func_0x00010c2a5060(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar15;
  func_0x00010bf493c0(0xc034000000000000,uVar15,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1f8 = uVar34;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_228,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar28,param_2,puVar25);
  _objc_release(puVar25);
  _objc_release(uVar34);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar19);
  _objc_release(uVar13);
  _objc_release(uVar16);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar27);
  _objc_release(uVar26);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return;
  }
  ___stack_chk_fail();
  puVar28 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar25 = puVar28;
  func_0x000108e73ad0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar28,param_2,puVar25);
  _objc_release(puVar25);
  puVar25 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar28,param_2,puVar25);
  _objc_release(puVar25);
  func_0x00010c213040(puVar28,param_2,1);
  func_0x00010c21ad00(puVar28,param_2,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return;
}



/* Entry: 108e53788; end: 108e53af7; -[SCQuestionStickerView _setupResponseLabelLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e53788(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = (long)_DAT_11277c5e0;
  uVar24 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(0x406cc00000000000,0x7fefffffffffffff,*(undefined8 *)(param_1 + lVar22));
  puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11277c5cc;
  uVar2 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  uStack_b8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277c5dc);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0x4024000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar22);
  uStack_b0 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493c0(0xc024000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar22);
  uStack_a8 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493c0(0x4024000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar22);
  uStack_a0 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2793a0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493c0(0xc024000000000000,uVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar22);
  uStack_98 = uVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf49420(uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar22);
  uStack_90 = uVar17;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2a5060(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar18;
  func_0x00010bf493c0(0xc034000000000000,uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b8,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar21,param_2,puVar20);
  _objc_release(puVar20);
  _objc_release(uVar24);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar21 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar20 = puVar21;
  func_0x000108e73ad0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar21,param_2,puVar20);
  _objc_release(puVar20);
  puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar21,param_2,puVar20);
  _objc_release(puVar20);
  func_0x00010c213040(puVar21,param_2,1);
  func_0x00010c21ad00(puVar21,param_2,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 108e53af8; end: 108e53b8f; +[SCQuestionStickerView questionStickerSharingNoticeLabel] */

void FUN_108e53af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar2 = puVar1;
  func_0x000108e73ad0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c21ad00(puVar1,param_2,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e53b90; end: 108e53b9f; -[SCQuestionStickerView becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e53b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c5d0),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 108e53ba0; end: 108e53c97; -[SCQuestionStickerView textView:shouldChangeTextInRange:replacementText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e53ba0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110db2db8);
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c26c160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c26c160();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      _objc_release(lVar1);
      func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_11277c5d0));
    }
  }
  lVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = param_6;
  func_0x00010c08fa60(param_6);
  _objc_release(param_6);
  _objc_release(lVar1);
  _objc_release(param_3);
  return (ulong)(lVar3 + lVar2) < 0x65;
}



/* Entry: 108e53c98; end: 108e53cff; -[SCQuestionStickerView textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e53c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  func_0x00010bfb68e0(param_6);
  uVar1 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(param_3,0x7fefffffffffffff,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_4 + _DAT_11277c5f0),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 108e53d00; end: 108e53d0f; -[SCQuestionStickerView text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e53d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c5d0),PTR_s_text_1126787e8);
  return;
}



/* Entry: 108e53d10; end: 108e53dbf; -[SCQuestionStickerView setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e53d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (long)_DAT_11277c5d0;
  uVar1 = *(undefined8 *)(param_4 + lVar2);
  _objc_retain(param_6);
  func_0x00010c212f20(uVar1,param_5,param_6);
  uVar1 = *(undefined8 *)(param_4 + lVar2);
  func_0x00010bfb68e0(uVar1);
  uVar3 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(param_3,0x7fefffffffffffff,uVar1);
  func_0x00010c181140(uVar3,*(undefined8 *)(param_4 + _DAT_11277c5f0));
  lVar2 = param_4;
  func_0x00010be45ea0(param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar1 = *(undefined8 *)(param_4 + _DAT_11277c5c0);
  *(long *)(param_4 + _DAT_11277c5c0) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e53dc0; end: 108e53e4f; -[SCQuestionStickerView updateWithInfoFromStickerView:] */

void FUN_108e53dc0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bb2f8;
  _objc_opt_class(PTR_PTR_1126bb2f8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_1);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e53e50; end: 108e53e57; -[SCQuestionStickerView shouldReceiveTapsViaStickerContainer] */

undefined8 FUN_108e53e50(void)

{
  return 0;
}



/* Entry: 108e53e58; end: 108e53e5b; -[SCQuestionStickerView encodeWithCoder:] */

void FUN_108e53e58(void)

{
  return;
}



/* Entry: 108e53e5c; end: 108e53e7f; -[SCQuestionStickerView copyWithZone:] */

undefined8 FUN_108e53e5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e53e80; end: 108e53ea7; -[SCQuestionStickerView intrinsicSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108e53e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11277c5c4));
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e53ea8; end: 108e53eaf; -[SCQuestionStickerView infoType] */

undefined8 FUN_108e53ea8(void)

{
  return 0x10;
}



/* Entry: 108e53eb0; end: 108e53f27; -[SCQuestionStickerView loggingParameters] */

undefined ** FUN_108e53eb0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110dea5b8;
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
  return &PTR____CFConstantStringClassReference_110dea5b8;
}



/* Entry: 108e53f28; end: 108e53f33; -[SCQuestionStickerView packId] */

undefined ** FUN_108e53f28(void)

{
  return &PTR____CFConstantStringClassReference_110dea5b8;
}



/* Entry: 108e53f34; end: 108e53f3f; -[SCQuestionStickerView shortLoggingName] */

undefined ** FUN_108e53f34(void)

{
  return &PTR____CFConstantStringClassReference_110efbb18;
}



/* Entry: 108e53f40; end: 108e53f4b; -[SCQuestionStickerView stickerId] */

undefined ** FUN_108e53f40(void)

{
  return &PTR____CFConstantStringClassReference_110dea5b8;
}



/* Entry: 108e53f4c; end: 108e53f53; -[SCQuestionStickerView toCTPItem] */

undefined8 FUN_108e53f4c(void)

{
  return 0;
}



/* Entry: 108e53f54; end: 108e53f83; -[SCQuestionStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e53f54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c5c0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e53f84; end: 108e53f8b; -[SCQuestionStickerView type] */

undefined8 FUN_108e53f84(void)

{
  return 6;
}



/* Entry: 108e53f8c; end: 108e54083; -[SCQuestionStickerView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108e53f8c(long param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + _DAT_11277c5c8) == 1) {
    dVar1 = 1.79769313486232e+308;
    func_0x00010c23d5a0(0x406cc00000000000,0x7fefffffffffffff,
                        *(undefined8 *)(param_1 + _DAT_11277c5ec));
    dVar2 = 1.79769313486232e+308;
    func_0x00010c23d5a0(0x406cc00000000000,0x7fefffffffffffff,
                        *(undefined8 *)(param_1 + _DAT_11277c5e0));
    dVar1 = dVar1 + 40.0;
  }
  else {
    dVar1 = 0.0;
    if (*(long *)(param_1 + _DAT_11277c5c8) != 0) goto LAB_108e54068;
    dVar1 = 1.79769313486232e+308;
    func_0x00010c23d5a0(0x4069000000000000,0x7fefffffffffffff,
                        *(undefined8 *)(param_1 + _DAT_11277c5d0));
    dVar2 = dVar1;
    func_0x00010c0699c0(*(undefined8 *)(param_1 + _DAT_11277c5d4));
    dVar1 = dVar1 + dVar2 + 25.0 + 5.0;
    dVar2 = 50.0;
  }
  dVar1 = dVar1 + dVar2;
LAB_108e54068:
  auVar3._8_8_ = dVar1;
  auVar3._0_8_ = 0x406f400000000000;
  return auVar3;
}



/* Entry: 108e54084; end: 108e5410f; -[SCQuestionStickerView tappableElementBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e54084(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010beca900();
  _objc_retainAutoreleasedReturnValue();
  lStack_30 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar2 = param_1;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    lVar1 = (long)_DAT_11277c5cc;
    dVar3 = dVar2;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
    func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar1));
    _objc_alloc(PTR_PTR_1126d91a8);
    func_0x00010c005f40(0x3fb999999999999a,param_3 / param_1,param_4 / dVar2,dVar3 / param_1,
                        param_2 / dVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e54110; end: 108e541a7; -[SCQuestionStickerView _tappableElementBoundsForContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e54110(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar2 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  lVar1 = (long)_DAT_11277c5cc;
  dVar3 = dVar2;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar1));
  _objc_alloc(PTR_PTR_1126d91a8);
  func_0x00010c005f40(0x3fb999999999999a,param_3 / param_1,param_4 / dVar2,dVar3 / param_1,
                      param_2 / dVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e541a8; end: 108e541af; -[SCQuestionStickerView scaleLimit] */

undefined8 FUN_108e541a8(void)

{
  return 0;
}



/* Entry: 108e541b0; end: 108e541b7; -[SCQuestionStickerView shouldRespondToLongPress:] */

undefined8 FUN_108e541b0(void)

{
  return 0;
}



/* Entry: 108e541b8; end: 108e5424f; -[SCQuestionStickerView imageView] */

void FUN_108e541b8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 108e54250; end: 108e54253; -[SCQuestionStickerView didEndDisplay] */

void FUN_108e54250(void)

{
  return;
}



/* Entry: 108e54254; end: 108e54257; -[SCQuestionStickerView willDisplay] */

void FUN_108e54254(void)

{
  return;
}



/* Entry: 108e54258; end: 108e54387; -[SCQuestionStickerView _itemInstanceWithPrompt:] */

void FUN_108e54258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126cf228;
  _objc_opt_new(PTR_PTR_1126cf228);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  func_0x00010c21acc0();
  func_0x00010c1e6660(puVar2,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1ac500(puVar4,param_2,puVar5);
  func_0x00010c196600(puVar3,param_2,puVar4);
  func_0x00010c1b5d40(puVar1,param_2,puVar3);
  puVar6 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6620();
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



/* Entry: 108e54388; end: 108e54397; -[SCQuestionStickerView textInputDidChangeBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e54388(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c5f4);
}



/* Entry: 108e54398; end: 108e543a3; -[SCQuestionStickerView setTextInputDidChangeBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e54398(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e543a4; end: 108e543b3; -[SCQuestionStickerView textInputDidReturnBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e543a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c5f8);
}



/* Entry: 108e543b4; end: 108e543bf; -[SCQuestionStickerView setTextInputDidReturnBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e543b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e543c0; end: 108e543cf; -[SCQuestionStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e543c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c5e8);
}



/* Entry: 108e543d0; end: 108e543df; -[SCQuestionStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e543d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c5e8) = param_3;
  return;
}



/* Entry: 108e543e0; end: 108e543ef; -[SCQuestionStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e543e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c5e4);
}



/* Entry: 108e543f0; end: 108e543ff; -[SCQuestionStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e543f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c5c0);
}



/* Entry: 108e54400; end: 108e544ff; -[SCQuestionStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e54400(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c5c0,0);
  _objc_storeStrong(param_1 + _DAT_11277c5e4,0);
  _objc_storeStrong(param_1 + _DAT_11277c5f8,0);
  _objc_storeStrong(param_1 + _DAT_11277c5f4,0);
  _objc_storeStrong(param_1 + _DAT_11277c5fc,0);
  _objc_storeStrong(param_1 + _DAT_11277c5e0,0);
  _objc_storeStrong(param_1 + _DAT_11277c5ec,0);
  _objc_storeStrong(param_1 + _DAT_11277c5dc,0);
  _objc_storeStrong(param_1 + _DAT_11277c5f0,0);
  _objc_storeStrong(param_1 + _DAT_11277c5d4,0);
  _objc_storeStrong(param_1 + _DAT_11277c5d0,0);
  _objc_storeStrong(param_1 + _DAT_11277c5d8,0);
  _objc_storeStrong(param_1 + _DAT_11277c5c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c5cc,0);
  return;
}



/* Entry: 108e54500; end: 108e5484f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e54500(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined *puStack_140;
  undefined *puStack_138;
  double dStack_130;
  double dStack_128;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = 0;
  _UIGraphicsBeginImageContextWithOptions(0x4082c00000000000,0x4082c00000000000,0,0);
  _UIGraphicsGetCurrentContext();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetStrokeColorWithColor(uVar2,puVar4);
  _objc_release(puVar3);
  _CGContextSetLineWidth(0x4014000000000000,uVar2);
  _CGContextStrokeEllipseInRect
            (0x4014000000000000,0x4014000000000000,0x4082700000000000,0x4082700000000000,uVar2);
  _CGContextSetLineWidth(0x3ff0000000000000,uVar2);
  _CGContextStrokeEllipseInRect
            (0x4039000000000000,0x4039000000000000,0x4081300000000000,0x4081300000000000,uVar2);
  _CGContextSetLineWidth(0x4000000000000000,uVar2);
  _CGContextStrokeEllipseInRect
            (0x4071300000000000,0x4071300000000000,0x4049000000000000,0x4049000000000000,uVar2);
  uVar9 = 0;
  do {
    dVar15 = (double)uVar9 * 0.12566370614359174 + -1.5707963267948966;
    bVar1 = (int)uVar9 != (int)(uVar9 * 0x33333334 >> 0x20) * 5;
    dVar12 = 10.0;
    uVar10 = 0x4024000000000000;
    if (bVar1) {
      uVar10 = 0x3ff0000000000000;
    }
    dVar13 = 240.0;
    if (bVar1) {
      dVar13 = 255.0;
    }
    _CGContextSetLineWidth(uVar10,uVar2);
    ___sincos_stret(dVar15);
    _CGContextMoveToPoint(dVar12 * 275.0 + 300.0,dVar15 * 275.0 + 300.0,uVar2);
    dVar15 = dVar15 * dVar13 + 300.0;
    _CGContextAddLineToPoint(dVar12 * dVar13 + 300.0,dVar15,uVar2);
    _CGContextStrokePath(uVar2);
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x32);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar9 = 0;
  do {
    dVar11 = (double)uVar9;
    dVar14 = dVar11 * 0.6283185307179586 + -1.5707963267948966;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d660();
    dVar12 = dVar14;
    dVar13 = dVar15;
    ___sincos_stret(dVar14);
    dVar15 = (dVar12 * 215.0 + 300.0) - dVar15 * 0.5;
    puVar7 = puVar5;
    func_0x00010bf897e0((dVar13 * 215.0 + 300.0) - dVar11 * 0.5,puVar4);
    _objc_release();
    uVar9 = uVar9 + 1;
  } while (uVar9 != 10);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_140;
  dStack_130 = dVar11;
  dStack_128 = dVar14;
  _objc_retain(puVar7);
  puStack_138 = PTR_PTR_1126febb8;
  puStack_140 = puVar3;
  _objc_msgSendSuper2(0,0,0x4072c00000000000,0x4072c00000000000,&puStack_140,
                      PTR_s_initWithFrame__1125e2948);
  if (ppuVar6 != (undefined **)0x0) {
    puVar3 = puVar7;
    func_0x00010c0cc0c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf01fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar3 = PTR_PTR_1126bab40;
    func_0x00010c0c3fc0(puVar5);
    func_0x00010bdc2080(puVar3);
    puVar3 = PTR_PTR_1126bab40;
    func_0x00010c27dd80(puVar5);
    func_0x00010bdc20c0(puVar3);
    lVar8 = (long)_DAT_11277c600;
    _objc_retain(puVar7);
    uVar2 = *(undefined8 *)((long)ppuVar6 + lVar8);
    *(undefined **)((long)ppuVar6 + lVar8) = puVar7;
    _objc_release(uVar2);
    *(undefined1 *)((long)ppuVar6 + (long)_DAT_11277c604) = 1;
    puVar3 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar2 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_11277c608);
    *(undefined **)((long)ppuVar6 + (long)_DAT_11277c608) = puVar3;
    _objc_release(uVar2);
    puVar3 = puVar5;
    func_0x00010bf01f00(puVar5);
    func_0x00010beaf160((double)(int)puVar3,0,0,0x4072c00000000000,0x4072c00000000000,ppuVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  _objc_release(puVar7);
  return (undefined1 *)ppuVar6;
}



/* Entry: 108e54850; end: 108e54a27; -[SCAltitudeStickerView initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e54850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_3);
  puStack_78 = PTR_PTR_1126febb8;
  uStack_80 = param_1;
  _objc_msgSendSuper2(0,0,0x4072c00000000000,0x4072c00000000000,&uStack_80,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf01fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar6 = PTR_PTR_1126bab40;
    func_0x00010c0c3fc0(uVar3);
    func_0x00010bdc2080(puVar6);
    puVar6 = PTR_PTR_1126bab40;
    func_0x00010c27dd80(uVar3);
    func_0x00010bdc20c0(puVar6);
    lVar7 = (long)_DAT_11277c600;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c604) = 1;
    puVar6 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c608);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c608) = puVar6;
    _objc_release(uVar5);
    uVar5 = uVar3;
    func_0x00010bf01f00(uVar3);
    func_0x00010beaf160((double)(int)uVar5,0,0,0x4072c00000000000,0x4072c00000000000,puVar1);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e54a28; end: 108e54dab; -[SCAltitudeStickerView initWithPickerFrame:altitude:] */

undefined8 *
FUN_108e54a28(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126febb8;
  puVar1 = &uStack_80;
  uStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar3);
    dVar7 = 60.0;
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(0x404e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar2);
    _objc_release(puVar3);
    func_0x00010c1cfce0(puVar2);
    func_0x00010c16f5a0(puVar2);
    func_0x00010c213040(puVar2);
    func_0x00010c165e20(puVar2);
    func_0x00010befbb60(puVar1);
    lVar4 = param_7;
    func_0x00010c2807a0();
    func_0x00010bf01f20(param_7);
    func_0x00010c219960(puVar1);
    dVar8 = dVar7 * 3.28084;
    if (lVar4 != 0) {
      dVar8 = dVar7;
    }
    puVar5 = puVar1;
    func_0x00010bed13c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2e38;
    func_0x00010bdc2b00(PTR_PTR_1126c2e38);
    func_0x00010c09e4c0((double)((float)(int)(dVar8 / 5.0) * 5.0),puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar2);
    _objc_release(puVar3);
    func_0x00010bdc2b00();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar6 = puVar2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c212f20(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    dVar8 = 20.0;
    if ((undefined *)0x3 < puVar6) {
      puVar3 = puVar2;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c08fa60();
      _objc_release(puVar3);
      dVar8 = 10.0;
      if ((undefined *)0x5 < puVar6) {
        puVar3 = puVar2;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c08fa60();
        _objc_release(puVar3);
        dVar8 = 5.0;
        if ((undefined *)0x8 < puVar6) {
          dVar8 = 0.0;
        }
      }
    }
    func_0x00010bf20c00(puVar1);
    func_0x00010bf20c00(puVar1);
    func_0x00010c17a6a0(param_3 * 0.5,dVar8 + param_4 * 0.5,puVar2);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108e54dac; end: 108e54e8f; -[SCAltitudeStickerView initWithPreviewFrame:altitude:] */

undefined1 *
FUN_108e54dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126febb8;
  uVar2 = param_1;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf01f20(param_7);
    func_0x00010c29e660(param_7);
    func_0x00010c2807a0(param_7);
    func_0x00010beaf160(uVar2,param_1,param_2,param_3,param_4,puVar1);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108e54e90; end: 108e54fdf; -[SCAltitudeStickerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e54e90(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126febb8;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar1 = 0x10;
  if (*(long *)(param_2 + _DAT_11277c60c) != 1) {
    lVar1 = 0x14;
  }
  lVar1 = *(long *)(param_2 + *(int *)(&DAT_11277c600 + lVar1));
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010bf20c00(lVar1);
    _CGRectGetWidth();
    dVar3 = param_1;
    func_0x00010bf20c00(lVar1);
    _CGRectGetHeight();
    if ((0.0 < param_1) && (0.0 < dVar3)) {
      dVar2 = dVar3;
      func_0x00010bf20c00(param_2);
      _CGRectGetWidth();
      param_1 = dVar2 / param_1;
      func_0x00010bf20c00(param_2);
      _CGRectGetHeight();
      if (dVar2 / dVar3 <= param_1) {
        param_1 = dVar2 / dVar3;
      }
      uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      dStack_80 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      _CGAffineTransformScale(&uStack_70,param_1,param_1,&uStack_a0);
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      uStack_78 = uStack_48;
      dStack_80 = dStack_50;
      func_0x00010c219960(lVar1);
      func_0x00010bf20c00(param_2);
      _CGRectGetWidth();
      dVar3 = dStack_50 * 0.5;
      func_0x00010bf20c00(param_2);
      _CGRectGetHeight();
      func_0x00010c17a6a0(dVar3,dStack_50 * 0.5,lVar1);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108e54fe0; end: 108e550db; -[SCAltitudeStickerView _setupPreviewViewWithAltitude:viewType:unit:frame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e54fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf1f3c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  *(ulong *)(param_6 + _DAT_11277c618) = (ulong)puVar3 & 0xffffffff;
  *(undefined8 *)(param_6 + _DAT_11277c61c) = param_9;
  *(undefined8 *)(param_6 + _DAT_11277c60c) = param_8;
  *(undefined8 *)(param_6 + _DAT_11277c620) = param_1;
  func_0x00010beaa7c0(param_6);
  func_0x00010beaa7e0(param_2,param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bed3030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_6,PTR_s__updateAltitudeView_1125925b0);
  return;
}



/* Entry: 108e550dc; end: 108e5537b; -[SCAltitudeStickerView _setupAltitudeNumberViewWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e550dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  dVar6 = param_1;
  _CGRectGetWidth();
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar7 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar8 = dVar7;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  if (dVar8 <= dVar7) {
    dVar7 = dVar8;
  }
  *(long *)(param_5 + _DAT_11277c624) = (long)(dVar7 * 0.8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(0,0,dVar6,param_1);
  lVar3 = (long)_DAT_11277c610;
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  *(undefined **)(param_5 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  lVar4 = (long)_DAT_11277c628;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  *(undefined **)(param_5 + lVar4) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_5 + lVar4));
  _objc_release(puVar1);
  lVar13 = (long)((double)(long)(dVar7 * 0.8) * 0.01 * 30.0);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(lVar13,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_5 + lVar4));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010c165e20(*(undefined8 *)(param_5 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  lVar5 = (long)_DAT_11277c62c;
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  *(undefined **)(param_5 + lVar5) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_5 + lVar5));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(lVar13,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_5 + lVar5));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010c165e20(*(undefined8 *)(param_5 + lVar5));
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar3));
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + lVar4),PTR_s_setTextAlignment__112662638,1);
  return;
}


