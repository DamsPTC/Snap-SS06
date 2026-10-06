/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e41724; end: 108e41733; -[SCColorPickerGradientView adjustedSaturation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e41724(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c33c);
}



/* Entry: 108e41734; end: 108e41743; -[SCColorPickerGradientView setAdjustedSaturation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41734(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277c33c) = param_1;
  return;
}



/* Entry: 108e41744; end: 108e41753; -[SCColorPickerGradientView adjustedAlpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e41744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c30c);
}



/* Entry: 108e41754; end: 108e41763; -[SCColorPickerGradientView setAdjustedAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41754(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277c30c) = param_1;
  return;
}



/* Entry: 108e41764; end: 108e41773; -[SCColorPickerGradientView savedHue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e41764(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c310);
}



/* Entry: 108e41774; end: 108e41783; -[SCColorPickerGradientView setSavedHue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41774(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277c310) = param_1;
  return;
}



/* Entry: 108e41784; end: 108e41793; -[SCColorPickerGradientView useColorPickerV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e41784(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c314);
}



/* Entry: 108e41794; end: 108e417a3; -[SCColorPickerGradientView setUseColorPickerV2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41794(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c314) = param_3;
  return;
}



/* Entry: 108e417a4; end: 108e41823; -[SCColorPickerGradientView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e417a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c320,0);
  _objc_storeStrong(param_1 + _DAT_11277c318,0);
  _objc_storeStrong(param_1 + _DAT_11277c32c,0);
  _objc_storeStrong(param_1 + _DAT_11277c328,0);
  _objc_storeStrong(param_1 + _DAT_11277c324,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c330,0);
  return;
}



/* Entry: 108e41824; end: 108e41893; -[SCColorPickerView initWithColorPickerVersion:paletteType:orientation:] */

undefined1 * FUN_108e41824(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126feae8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1480(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e41894; end: 108e418cb; +[SCColorPickerView createColorPickerViewWithOrientation:] */

void FUN_108e41894(void)

{
  _objc_alloc(PTR_PTR_1126dc250);
  func_0x00010bfffc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e418cc; end: 108e41907; +[SCColorPickerView createPalettedColorPickerViewWithPaletteType:orientation:] */

void FUN_108e418cc(void)

{
  _objc_alloc(PTR_PTR_1126dc250);
  func_0x00010bfffc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e41908; end: 108e41cbf; -[SCColorPickerView _setupViewWithColorPickerVersion:paletteType:orientation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41908(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  
  lVar5 = (long)_DAT_11277c34c;
  *(undefined8 *)(param_1 + lVar5) = param_5;
  puVar1 = PTR_PTR_1126dc258;
  func_0x00010bf5a240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277c350;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1877c0(*(undefined8 *)(param_1 + lVar4));
  *(undefined8 *)(param_1 + _DAT_11277c354) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + _DAT_11277c358) = 1;
  func_0x00010c21e900(param_1);
  puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
  _objc_alloc();
  func_0x00010c04ea80();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c35c);
  *(undefined **)(param_1 + _DAT_11277c35c) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0();
  lVar6 = (long)_DAT_11277c360;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126dc260;
  _objc_alloc();
  func_0x00010c033720();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c364);
  *(undefined **)(param_1 + _DAT_11277c364) = puVar1;
  _objc_release(uVar3);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR_PTR_1126b52f0;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11277c368;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(0x4004000000000000);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b08d8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30a28(0x4010000000000000,0x3fb999999999999a,0,0x3ff0000000000000,puVar1,uVar3,puVar2
                     );
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c22a660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb40();
  _objc_release(uVar3);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR_PTR_1126dc268;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11277c36c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  if (*(long *)(param_1 + lVar5) == 1) {
    _CGAffineTransformMakeRotation(&uStack_90,0x3ff921fb54442d18);
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    uStack_c8 = uStack_68;
    uStack_d0 = uStack_70;
    _CGAffineTransformScale(&uStack_c0,0x3ff0000000000000,0xbff0000000000000,&uStack_f0);
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    func_0x00010c219960(param_1);
  }
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar4 = (long)_DAT_11277c370;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1c8340(0,*(undefined8 *)(param_1 + lVar4));
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar6));
  if (param_3 == 1) {
    func_0x00010bdf1060(param_1);
  }
  return;
}



/* Entry: 108e41cc0; end: 108e41e33; -[SCColorPickerView _createPaletteSwitchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41cc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126c3298;
  _objc_alloc();
  func_0x000107c308a4(0x4044000000000000,0x4044000000000000);
  func_0x00010c013de0();
  lVar4 = (long)_DAT_11277c374;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c350);
  func_0x00010c0f35c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3,param_2,uVar2,0);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfe90c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(uVar2);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar4),param_2,&uStack_60);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000);
  _objc_release(uVar2);
  func_0x00010c1aa240(0x4014000000000000,0x4014000000000000,0x4014000000000000,0x4014000000000000,
                      *(undefined8 *)(param_1 + lVar4));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                      PTR_s__togglePaletteModel_11253d9c8,0x40);
  func_0x00010c1a8c20(0xc010000000000000,0xc010000000000000,0xc010000000000000,0xc010000000000000,
                      *(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 108e41e34; end: 108e41e9f; -[SCColorPickerView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108e41e34(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  lVar1 = param_1;
  func_0x00010c074ba0();
  dVar2 = 355.0;
  if ((int)lVar1 == 0) {
    dVar2 = 155.0;
  }
  dVar3 = 30.0;
  if (*(long *)(param_1 + _DAT_11277c358) != 0) {
    dVar3 = dVar2;
  }
  func_0x00010be6fd40(dVar2,param_1);
  auVar4._8_8_ = dVar2 + dVar3;
  auVar4._0_8_ = 0x4046000000000000;
  return auVar4;
}



/* Entry: 108e41ea0; end: 108e42287; -[SCColorPickerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e41ea0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ulong param_5
                  )

{
  double *pdVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126feae8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  pdVar1 = (double *)(param_5 + (long)_DAT_11277c378);
  func_0x00010bf20c00(param_5);
  dVar8 = *pdVar1;
  bVar2 = false;
  if ((dVar8 == param_3) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_4))) {
    bVar2 = pdVar1[1] == param_4;
  }
  if (bVar2) goto LAB_108e42080;
  func_0x00010bde77e0(param_5);
  lVar7 = (long)_DAT_11277c360;
  func_0x00010c1739e0(*(undefined8 *)(param_5 + lVar7));
  lVar6 = (long)_DAT_11277c358;
  lVar5 = *(long *)(param_5 + lVar6);
  if (lVar5 == 1) {
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
    _CGRectGetMidX();
    dVar9 = *(double *)(param_5 + (long)_DAT_11277c37c);
LAB_108e41f70:
    uVar3 = param_5;
    func_0x00010bf8ab40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar8,dVar9);
    _objc_release(uVar3);
  }
  else if (lVar5 == 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
    _CGRectGetMidX();
    dVar9 = dVar8;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
    _CGRectGetMidY();
    goto LAB_108e41f70;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
  _CGRectGetHeight();
  dVar9 = 0.0;
  func_0x00010c1739e0(0,0,0,dVar8,*(undefined8 *)(param_5 + (long)_DAT_11277c368));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
  _CGRectGetWidth();
  dVar10 = dVar9 + -5.0;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
  _CGRectGetHeight();
  dVar9 = dVar9 + -5.0;
  dVar8 = 0.0;
  func_0x00010c1739e0(0,0,*(undefined8 *)(param_5 + (long)_DAT_11277c364));
  lVar5 = *(long *)(param_5 + (long)_DAT_11277c350);
  func_0x00010bf41180();
  if (lVar5 == 1) {
    lVar7 = (long)_DAT_11277c374;
    dVar10 = 40.0;
    dVar8 = 0.0;
    dVar9 = 40.0;
    func_0x00010c1739e0(0,0,*(undefined8 *)(param_5 + lVar7));
    lVar5 = *(long *)(param_5 + lVar6);
    if ((lVar5 == 0) || (lVar5 == 1)) {
      func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar7));
    }
  }
  func_0x00010bf20c00(param_5);
  *pdVar1 = dVar10;
  pdVar1[1] = dVar9;
  uVar3 = param_5;
  func_0x00010c074ba0();
  if ((uVar3 & 1) == 0) {
    func_0x00010bdcaf20(param_5);
  }
LAB_108e42080:
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  lVar5 = (long)_DAT_11277c360;
  dVar9 = dVar8;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar8,dVar9,*(undefined8 *)(param_5 + lVar5));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetMidX();
  dVar9 = dVar8;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar8,dVar9,*(undefined8 *)(param_5 + (long)_DAT_11277c368));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetMidX();
  dVar9 = dVar8;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar8,dVar9,*(undefined8 *)(param_5 + (long)_DAT_11277c364));
  uVar3 = param_5;
  func_0x00010bf8ab40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf40c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  if (uVar4 == 0) {
    func_0x00010bf20c00(param_5);
    _CGRectGetMidX();
    dVar9 = dVar8;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
    _CGRectGetMidY();
    uVar3 = param_5;
    func_0x00010bf8ab40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar8,dVar9);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010bf8ab40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    func_0x00010bf512a0(param_5);
    _objc_release(uVar3);
    dVar8 = 0.0;
    uVar3 = param_5;
    func_0x00010bde1ec0(0,dVar9,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010bf8ab40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e800();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  lVar6 = *(long *)(param_5 + (long)_DAT_11277c350);
  func_0x00010bf41180();
  if (lVar6 == 1) {
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
    _CGRectGetMidX();
    dVar9 = dVar8;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
    _CGRectGetHeight();
    dVar10 = dVar9 + 20.0;
    lVar5 = (long)_DAT_11277c374;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
    _CGRectGetMidY();
    func_0x00010c17a6a0(dVar8,dVar10 + dVar9,*(undefined8 *)(param_5 + lVar5));
  }
  return;
}



/* Entry: 108e42288; end: 108e423c7; -[SCColorPickerView longPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e42288(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + _DAT_11277c358);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar3 == 0) {
    if ((lVar1 == 3) || (lVar1 = param_3, func_0x00010c252440(), lVar1 == 5)) {
      lVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_1 + _DAT_11277c36c);
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf411a0(lVar1,param_2,param_1,puVar2);
        _objc_release(puVar2);
      }
      else {
        func_0x00010bf411a0(lVar1,param_2,param_1,lVar3);
      }
      _objc_release(lVar3);
      _objc_release(lVar1);
    }
  }
  else if (lVar1 - 3U < 2) {
    func_0x00010bec2500(param_1,param_2,param_3);
  }
  else if (lVar1 == 2) {
    func_0x00010bec24e0(param_1,param_2,param_3);
  }
  else if (lVar1 == 1) {
    func_0x00010bec24a0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e423c8; end: 108e424a7; -[SCColorPickerView _stateBeganGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e423c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c09ef00(param_5,param_4,*(undefined8 *)(param_3 + _DAT_11277c368));
  lVar1 = (long)_DAT_11277c380;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108e424a8;
  puStack_50 = &UNK_110858dc0;
  lStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x00010bf03460(0x3fd3333333333333,0,0x3fe851eb851eb852,0,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_4,2,&puStack_68,0);
  func_0x00010bed57c0(param_1,param_2,param_3,param_4,0);
  func_0x00010c108f40(*(undefined8 *)(param_3 + _DAT_11277c35c));
  return;
}



/* Entry: 108e424a8; end: 108e424ef;  */

void FUN_108e424a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf8ab40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192060();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s__updateDropletWithLocation__112593678);
  return;
}



/* Entry: 108e424f0; end: 108e426bf; -[SCColorPickerView _stateChangedGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e424f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_11277c368);
  _objc_retain(param_5);
  func_0x00010c09ef00(param_5,param_4,uVar2);
  lVar1 = param_3;
  func_0x00010beb39e0(param_3,param_4,param_5);
  _objc_release(param_5);
  if ((int)lVar1 == 0) {
    func_0x00010bed7340(param_1,param_2,param_3);
    lVar1 = param_3;
    func_0x00010c06ec20();
    if ((int)lVar1 != 0) {
      func_0x00010bf345e0(*(undefined8 *)(param_3 + _DAT_11277c36c));
    }
    func_0x00010bedcc80(param_3);
    if (1.0 < *(double *)(param_3 + _DAT_11277c354)) {
      lVar1 = param_3;
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf411e0();
      _objc_release(lVar1);
      func_0x00010c1677c0(0,*(undefined8 *)(param_3 + _DAT_11277c374));
    }
  }
  else {
    func_0x00010bfe9da0(*(undefined8 *)(param_3 + _DAT_11277c35c));
    lVar1 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41200();
    _objc_release(lVar1);
    func_0x00010c1677c0(0,*(undefined8 *)(param_3 + _DAT_11277c374));
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108e426c0;
    puStack_60 = &UNK_110858dc0;
    lStack_58 = param_3;
    uStack_50 = param_1;
    uStack_48 = param_2;
    func_0x00010bf03460(0x3fd999999999999a,0,0x3feb333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20
                        ,param_4,2,&puStack_78,0);
  }
  func_0x00010bed57c0(param_1,param_2,param_3,param_4,0);
  return;
}



/* Entry: 108e426c0; end: 108e426fb;  */

void FUN_108e426c0(long param_1,undefined8 param_2)

{
  func_0x00010c1a7d20(*(undefined8 *)(param_1 + 0x20),param_2,1);
  func_0x00010bed7340(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bedcc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s__updatePathsForLocation__112594cc8);
  return;
}



/* Entry: 108e426fc; end: 108e427db; -[SCColorPickerView _stateEndedGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e426fc(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  double dStack_38;
  
  lVar1 = param_3;
  func_0x00010bf8ab40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c074ba0();
  *(undefined8 *)(param_3 + _DAT_11277c354) = 0x3ff0000000000000;
  dStack_38 = param_2 * 0.43661971830985913;
  if ((int)lVar1 == 0) {
    dStack_38 = param_2;
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108e427dc;
  puStack_50 = &UNK_110858dc0;
  lStack_48 = param_3;
  uStack_40 = param_1;
  func_0x00010bf03460(0x3fd3333333333333,0,0x3fe851eb851eb852,0,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_4,2,&puStack_68,0);
  return;
}



/* Entry: 108e427dc; end: 108e4293b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e427dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c17e940(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c165da0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277c364),param_2,0);
  func_0x00010c1a7d20(*(undefined8 *)(param_1 + 0x20),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf8ab40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf8ab40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192060();
  _objc_release(uVar1);
  func_0x00010c1677c0(0x3ff0000000000000,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277c374));
  func_0x00010bea3900(*(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bdcaf20(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41220();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_11277c36c);
  func_0x00010bf40c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf411a0(uVar1,param_2,lVar3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 108e4293c; end: 108e429df; -[SCColorPickerView moveDropletToCenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4293c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bf345e0(*(undefined8 *)(param_1 + _DAT_11277c364));
  lVar1 = param_1;
  func_0x00010bde1ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d1440(param_1,param_2,lVar1);
  lVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf411a0();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c36c);
  func_0x00010bf40c40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e429e0; end: 108e42ab7; -[SCColorPickerView moveDropletToColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e429e0(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf8ab40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e800();
  _objc_release(lVar1);
  func_0x00010be4f5a0(param_3);
  _objc_release(param_5);
  *(undefined8 *)(param_3 + _DAT_11277c37c) = param_2;
  lVar1 = param_3;
  func_0x00010bf8ab40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf8ab00();
  _objc_release(lVar1);
  dVar3 = 0.0;
  if (lVar2 == 1) {
    func_0x00010be70b20(param_1,param_2,param_3);
    dVar3 = param_1 + -75.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea3910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,dVar3,param_3,PTR_s__setDropletOriginY_offsetX__1125867e8);
  return;
}



/* Entry: 108e42ab8; end: 108e42b8f; -[SCColorPickerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e42ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_storeWeak(param_1 + _DAT_11277c384,param_3);
  lVar1 = param_1;
  func_0x00010bf8ab40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf40c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8ab40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf411a0(lVar1);
    _objc_release(lVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 108e42b90; end: 108e42d23; -[SCColorPickerView _animatePathToDefault] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e42b90(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277c368;
  uVar1 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  param_1 = param_1 + -7.5;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x00010c0d18c0(0xc019000000000000,0x401e000000000000);
  func_0x00010befac40(0xc019000000000000,param_1,0xc019000000000000,param_1 * 0.5,puVar2);
  func_0x00010bef6d40(0,param_1,0x4019000000000000,0x400921fb54442d18,0,puVar2,param_3,0);
  func_0x00010befac40(0x4019000000000000,0x401e000000000000,0x4019000000000000,param_1 * 0.5,puVar2)
  ;
  func_0x00010bef6d40(0,0x401e000000000000,0x4019000000000000,0,0x400921fb54442d18,puVar2,param_3,0)
  ;
  uVar1 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_s_path_11261b020;
  _NSStringFromSelector(PTR_s_path_11261b020);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c14c6a0(uVar1,param_3,puVar3,puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11277c364;
  func_0x00010c167de0(*(undefined8 *)(param_2 + lVar5),param_3,
                      *(long *)(param_2 + _DAT_11277c358) == 0);
  func_0x00010c1c2c80(*(undefined8 *)(param_2 + lVar5),param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e42d24; end: 108e42e03; -[SCColorPickerView _updatePathsForLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e42d24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  if (*(long *)(param_1 + _DAT_11277c34c) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010be70b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c368);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_s_path_11261b020;
  _NSStringFromSelector(PTR_s_path_11261b020);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  _objc_retainAutorelease(lVar1);
  func_0x00010bdc1040();
  func_0x00010c14c6a0(uVar2,param_2,puVar3,lVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11277c364;
  func_0x00010c167de0(*(undefined8 *)(param_1 + lVar4),param_2,
                      *(long *)(param_1 + _DAT_11277c358) == 0);
  func_0x00010c1c2c80(*(undefined8 *)(param_1 + lVar4),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e42e04; end: 108e4315b; -[SCColorPickerView _pathForLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e42e04(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  dVar7 = param_1;
  _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  lVar5 = (long)_DAT_11277c368;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar5));
  _CGRectGetHeight();
  dVar6 = 0.0;
  if (param_1 <= 0.0) {
    dVar6 = param_1;
  }
  dVar10 = -dVar6;
  if (0.0 <= dVar6) {
    dVar10 = dVar6;
  }
  if (0.0 < dVar10) {
    if (*(long *)(param_3 + _DAT_11277c34c) == 0) {
      dVar10 = (1.0 - 1.0 / ((dVar10 * 0.55) / 50.0 + 1.0)) * 50.0;
    }
    dVar6 = 1.0 - 1.0 / ((dVar10 * 0.55) / 50.0 + 1.0);
    dVar10 = -0.0;
    if (0.0 <= dVar6 * 50.0) {
      dVar10 = -(dVar6 * 50.0);
    }
  }
  dVar8 = dVar7 + -7.5;
  lVar2 = param_3;
  func_0x00010bf8ab40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8ab00();
  _objc_release(lVar2);
  dVar6 = 0.0;
  if (lVar3 != 2) {
    dVar6 = dVar10;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar5));
  _CGRectGetMidY();
  dVar10 = param_2;
  if (dVar7 < param_2) {
    func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar5));
    _CGRectGetHeight();
    dVar10 = dVar10 - param_2;
  }
  dVar7 = dVar10 / 40.0;
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  dVar9 = 0.0;
  if (dVar6 * dVar7 <= 0.0) {
    dVar9 = dVar6 * dVar7;
  }
  if (dVar10 < 40.0) {
    dVar6 = dVar9;
  }
  dVar7 = param_2 + 7.5;
  if (dVar7 <= dVar8 + 10.0) {
    if (dVar7 < 0.0) {
      dVar7 = 20.0;
    }
  }
  else {
    dVar7 = dVar8 + -10.0 + (1.0 - 1.0 / (((dVar7 - dVar8) * 0.55) / 50.0 + 1.0)) * 50.0;
  }
  lVar5 = (long)_DAT_11277c360;
  func_0x00010bf512a0(param_1,param_2,*(undefined8 *)(param_3 + lVar5),param_4,
                      *(undefined8 *)(param_3 + _DAT_11277c364));
  dVar10 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar5));
  _CGRectGetHeight();
  if ((dVar10 + 10.0 < param_2) && (0.0 < param_1)) {
    dVar10 = -10.0;
    func_0x00010bde1f20(param_3);
    dVar9 = (param_2 + -10.0) - dVar10;
    func_0x00010bde1f20(param_3);
    dVar9 = dVar10 + dVar9;
    func_0x00010bde1f20(param_3);
    dVar9 = dVar9 / dVar10;
    if (dVar9 <= 1.0) {
      dVar9 = 1.0;
    }
    dVar9 = dVar9 + -1.0;
    if (0.0 < dVar9) {
      dVar9 = dVar9 + 1.0;
      _log10();
    }
    *(double *)(param_3 + _DAT_11277c354) = dVar9 + 1.0;
    dVar8 = dVar8 * (dVar9 + 1.0);
  }
  dVar10 = dVar8 + -20.0;
  if (dVar7 <= dVar8 + -20.0) {
    dVar10 = dVar7;
  }
  if (dVar10 <= 20.0) {
    dVar10 = 20.0;
  }
  func_0x00010c0d18c0(0xc019000000000000,0x401e000000000000,puVar1);
  func_0x00010befac40(0xc019000000000000,dVar8,dVar6 + -6.25,dVar10,puVar1);
  func_0x00010bef6d40(0,dVar8,0x4019000000000000,0x400921fb54442d18,0,puVar1,param_4,0);
  func_0x00010befac40(0x4019000000000000,0x401e000000000000,dVar6 + 6.25,dVar10,puVar1);
  func_0x00010bef6d40(0,0x401e000000000000,0x4019000000000000,0,0x400921fb54442d18,puVar1,param_4,0)
  ;
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e4315c; end: 108e431e7; -[SCColorPickerView _pathCurveForLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108e4315c(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1 - *(double *)(param_2 + _DAT_11277c380)) + 20.0;
  dVar2 = 0.0;
  if (dVar1 <= 0.0) {
    dVar2 = dVar1;
  }
  dVar1 = -dVar2;
  if (0.0 <= dVar2) {
    dVar1 = dVar2;
  }
  if (0.0 < dVar1) {
    dVar2 = dVar1;
    if (*(long *)(param_2 + _DAT_11277c34c) == 0) {
      dVar2 = (1.0 - 1.0 / ((dVar1 * 0.55) / 50.0 + 1.0)) * 50.0;
    }
    dVar1 = -dVar2;
    if (dVar2 <= 0.0) {
      dVar1 = -0.0;
    }
  }
  return dVar1;
}



/* Entry: 108e431e8; end: 108e4338f; -[SCColorPickerView _shouldExpandHeightWithGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e431e8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (((*(long *)(param_1 + (long)_DAT_11277c34c) == 0) &&
      (uVar1 = param_1, func_0x00010c074ba0(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_1, func_0x00010c06ec20(), (uVar1 & 1) == 0)) {
    dVar5 = 0.0;
    func_0x00010bf512a0(0,param_1,param_2,0);
    dVar5 = dVar5 + 155.0;
    dVar6 = 200.0;
    dVar7 = dVar5 + 200.0;
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMaxY();
    dVar4 = dVar5;
    _objc_release(puVar2);
    if (dVar7 <= dVar5) {
      func_0x00010c09ef00(param_3,param_2,param_1);
      func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + (long)_DAT_11277c364));
      dVar5 = dVar4;
      func_0x00010bf20c00(*(undefined8 *)(param_1 + (long)_DAT_11277c360));
      _CGRectGetHeight();
      if ((dVar6 <= dVar5 + 10.0) || (dVar4 <= 0.0)) {
        bVar3 = false;
        *(undefined8 *)(param_1 + (long)_DAT_11277c354) = 0x3ff0000000000000;
      }
      else {
        dVar4 = -10.0;
        func_0x00010bde1f20(param_1);
        dVar5 = (dVar6 + -10.0) - dVar4;
        func_0x00010bde1f20(param_1);
        dVar5 = dVar4 + dVar5;
        func_0x00010bde1f20(param_1);
        dVar5 = dVar5 / dVar4;
        if (dVar5 <= 1.0) {
          dVar5 = 1.0;
        }
        dVar5 = dVar5 + -1.0;
        if (0.0 < dVar5) {
          dVar5 = dVar5 + 1.0;
          _log10();
        }
        *(double *)(param_1 + (long)_DAT_11277c354) = dVar5 + 1.0;
        bVar3 = 1.25 < dVar5 + 1.0;
      }
      goto LAB_108e43298;
    }
  }
  bVar3 = false;
LAB_108e43298:
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 108e43390; end: 108e4347f; -[SCColorPickerView _setDropletOriginY:offsetX:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e43390(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_3 + _DAT_11277c360));
  _CGRectGetMidX();
  dVar3 = 2.5;
  dVar4 = 2.5;
  if (2.5 <= param_1) {
    dVar4 = param_1;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_3 + _DAT_11277c364));
  _CGRectGetHeight();
  dVar3 = dVar3 * *(double *)(param_3 + _DAT_11277c354);
  if (dVar3 <= dVar4) {
    dVar4 = dVar3;
  }
  lVar1 = param_3;
  func_0x00010bf8ab40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_2 + dVar2);
  _objc_release(lVar1);
  if (*(long *)(param_3 + _DAT_11277c358) != 0) {
    lVar1 = param_3;
    func_0x00010bf8ab40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    *(double *)(param_3 + _DAT_11277c37c) = dVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 108e43480; end: 108e434df; -[SCColorPickerView _setHeightExpanded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e43480(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c074ba0();
  if ((param_3 != (int)lVar1) && (*(long *)(param_1 + _DAT_11277c34c) == 0)) {
    *(char *)(param_1 + _DAT_11277c388) = (char)param_3;
    func_0x00010c23d620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
    return;
  }
  return;
}



/* Entry: 108e434e0; end: 108e4350b; -[SCColorPickerView _colorContainerDefaultHeight] */

undefined8 FUN_108e434e0(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c074ba0();
  uVar1 = 0x4076300000000000;
  if (param_1 == 0) {
    uVar1 = 0x4063600000000000;
  }
  return uVar1;
}



/* Entry: 108e4350c; end: 108e43517; -[SCColorPickerView _defaultHeight] */

undefined8 FUN_108e4350c(void)

{
  return 0x4063600000000000;
}



/* Entry: 108e43518; end: 108e43597; -[SCColorPickerView _containerViewBounds] */

undefined8 FUN_108e43518(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf20c00();
  _CGRectGetHeight();
  func_0x00010be6fd40(param_2);
  func_0x00010bf20c00(param_2);
  _CGRectGetMinX();
  func_0x00010bf20c00(param_2);
  _CGRectGetMinY();
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  return param_1;
}



/* Entry: 108e43598; end: 108e43673; -[SCColorPickerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e43598(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar3;
  long lVar4;
  long lStack_60;
  undefined *puStack_58;
  long lVar2;
  
  plVar3 = &lStack_60;
  _objc_retain(param_5);
  lVar4 = (long)_DAT_11277c360;
  func_0x00010bf512a0(param_1,param_2,param_3);
  lVar2 = param_3;
  func_0x00010be24520();
  iVar1 = (int)lVar2;
  _CGRectContainsPoint();
  if (iVar1 == 0) {
    puStack_58 = PTR_PTR_1126feae8;
    lStack_60 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&lStack_60,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar3 = *(long **)(param_3 + lVar4);
    _objc_retain(plVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 108e43674; end: 108e436ff; -[SCColorPickerView _gradientPickerTouchBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e43674(long param_1)

{
  func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_11277c360));
  return;
}



/* Entry: 108e43700; end: 108e4370f; -[SCColorPickerView _colorAtLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e43700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcd8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c364),PTR_s_gradientColorForLocation__1125d0fd8);
  return;
}



/* Entry: 108e43710; end: 108e4371f; -[SCColorPickerView _locationForColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e43710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09ee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c364),PTR_s_locationForColor__112605590);
  return;
}



/* Entry: 108e43720; end: 108e4394f; -[SCColorPickerView _updateDropletWithLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e43720(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = param_3;
  dVar5 = param_1;
  dVar4 = param_2;
  func_0x00010bf8ab40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  _objc_release(lVar3);
  if ((param_1 < -50.0) ||
     ((lVar3 = param_3, func_0x00010c06ec20(), (int)lVar3 != 0 &&
      (50.0 < SQRT((dVar4 - param_2) * (dVar4 - param_2) + (dVar5 - param_1) * (dVar5 - param_1)))))
     ) {
    dVar4 = param_2;
    func_0x00010be70b20(param_1,param_3);
    dVar5 = 0.0;
    lVar3 = 2;
  }
  else {
    dVar5 = param_1;
    func_0x00010be70b20(param_1,param_2,param_3);
    dVar4 = -75.0;
    dVar5 = dVar5 + -75.0;
    lVar3 = 1;
  }
  lVar1 = param_3;
  func_0x00010c06ec20();
  func_0x00010c17e940(param_3);
  lVar2 = param_3;
  func_0x00010c06ec20();
  if ((int)lVar1 != (int)lVar2) {
    dVar4 = param_2;
    func_0x00010bf512a0(param_1,*(undefined8 *)(param_3 + _DAT_11277c360));
    *(double *)(param_3 + _DAT_11277c38c) = dVar4;
  }
  lVar1 = param_3;
  func_0x00010c06ec20();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf8ab40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    _objc_release(lVar1);
    param_2 = dVar4;
  }
  lVar1 = param_3;
  func_0x00010bf8ab40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf8ab00();
  _objc_release(lVar1);
  if (lVar3 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bea3910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,dVar5,param_3,PTR_s__setDropletOriginY_offsetX__1125867e8);
    return;
  }
  func_0x00010bf03460(0x3fd3333333333333,0,0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bfe9da0(*(undefined8 *)(param_3 + _DAT_11277c35c));
  return;
}



/* Entry: 108e43950; end: 108e439af;  */

void FUN_108e43950(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf8ab40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192060();
  _objc_release(uVar1);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x28) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea3910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),uVar1,*(undefined8 *)(param_1 + 0x20),
             PTR_s__setDropletOriginY_offsetX__1125867e8);
  return;
}



/* Entry: 108e439b0; end: 108e43cf3; -[SCColorPickerView _updateColorWithLocation:animateDroplet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e439b0(double param_1,double param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  
  lVar3 = param_3;
  func_0x00010c06ec20();
  lVar7 = (long)_DAT_11277c364;
  func_0x00010c165da0(*(undefined8 *)(param_3 + lVar7),param_4,lVar3);
  lVar3 = param_3;
  func_0x00010c06ec20();
  lVar8 = (long)_DAT_11277c360;
  if ((int)lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_3 + lVar8);
    lVar3 = param_3;
    func_0x00010c2a71e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    dVar12 = param_1;
    dVar13 = param_2;
    func_0x00010bf512a0(uVar4,param_4,lVar3);
    dVar11 = dVar12;
    dVar14 = dVar13;
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_3 + lVar8);
    lVar3 = param_3;
    func_0x00010bf8ab40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    lVar5 = param_3;
    func_0x00010c2a71e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf512a0(uVar4,param_4,lVar5);
    dVar10 = dVar11;
    _objc_release(lVar5);
    _objc_release(lVar3);
    iVar2 = (int)*(undefined8 *)(param_3 + lVar7);
    func_0x00010c06ba80();
    if (iVar2 != 0) {
      lVar5 = (long)_DAT_11277c34c;
      lVar6 = *(long *)(param_3 + lVar5);
      lVar3 = param_3;
      func_0x00010c2a71e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      if (lVar6 == 0) {
        _CGRectGetWidth();
        dVar9 = dVar12;
      }
      else {
        _CGRectGetHeight();
        dVar9 = dVar13;
      }
      _objc_release(lVar3);
      dVar9 = dVar9 / (dVar10 + -150.0);
      dVar10 = 1.0;
      if (dVar9 <= 1.0) {
        dVar10 = dVar9;
      }
      if (dVar10 <= 0.0) {
        dVar10 = 0.0;
      }
      func_0x00010befd860(*(undefined8 *)(param_3 + lVar7));
      if (*(long *)(param_3 + lVar5) == 0) {
        lVar3 = param_3;
        func_0x00010c2a71e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetHeight();
        _objc_release(lVar3);
        dVar11 = (dVar13 - dVar14) / (dVar10 - dVar14);
      }
      else {
        dVar11 = (dVar11 - dVar12) / dVar11;
      }
      dVar12 = 1.0;
      if (1.0 - dVar11 <= 1.0) {
        dVar12 = 1.0 - dVar11;
      }
      if (dVar12 <= 0.0) {
        dVar12 = 0.0;
      }
      func_0x00010befd980(dVar12,*(undefined8 *)(param_3 + lVar7));
    }
  }
  func_0x00010bf512a0(param_1,param_2,*(undefined8 *)(param_3 + lVar8),param_4,
                      *(undefined8 *)(param_3 + lVar7));
  lVar3 = param_3;
  func_0x00010c06ec20();
  if ((int)lVar3 != 0) {
    param_2 = *(double *)(param_3 + _DAT_11277c38c);
  }
  lVar3 = param_3;
  func_0x00010bde1ec0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_5 == 0) {
    lVar7 = param_3;
    func_0x00010bf8ab40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e800();
  }
  else {
    lVar7 = param_3;
    func_0x00010bf8ab40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_108e43cf4;
    puStack_a8 = &UNK_110841f80;
    lStack_a0 = param_3;
    _objc_retain(lVar3);
    lStack_98 = lVar3;
    func_0x00010c27ac60(0x3fb999999999999a,puVar1,param_4,lVar7,0x500000,&puStack_c0,0);
    _objc_release(lVar7);
    lVar7 = lStack_98;
  }
  _objc_release(lVar7);
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf411a0();
  _objc_release(param_3);
  _objc_release(lVar3);
  return;
}



/* Entry: 108e43cf4; end: 108e43d2b;  */

void FUN_108e43cf4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf8ab40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e43d2c; end: 108e43d63; -[SCColorPickerView _paletteSwitchButtonHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e43d2c(long param_1)

{
  if ((*(long *)(param_1 + _DAT_11277c374) != 0) && (*(long *)(param_1 + _DAT_11277c358) == 1)) {
    return 0x404e000000000000;
  }
  return 0;
}



/* Entry: 108e43d64; end: 108e43e3f; -[SCColorPickerView _togglePaletteModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e43d64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277c350;
  func_0x00010c272a80(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bee1980(param_1);
  func_0x00010c128b40(*(undefined8 *)(param_1 + _DAT_11277c364),param_2,
                      *(undefined8 *)(param_1 + lVar3));
  lVar1 = param_1;
  func_0x00010bf8ab40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  func_0x00010bed57c0(param_1,param_2,1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf5f8a0(uVar2);
  lVar3 = param_1;
  func_0x00010bde1ec0(0,*(undefined8 *)(param_1 + _DAT_11277c37c),param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf411c0(lVar1,param_2,param_1,uVar2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e43e40; end: 108e43fab; -[SCColorPickerView _updateSwitchViewWithPaletteModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e43e40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = (long)_DAT_11277c374;
  if (*(long *)(param_1 + lVar1) == 0) {
    uVar2 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_90);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
  }
  _CGAffineTransformRotate(&uStack_60,0x4000c152382d7365,&uStack_90);
  uStack_e0 = 0xc2000000;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x108e43f18;
  puStack_d0 = &UNK_1108700e8;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uStack_98 = uStack_38;
  uStack_a0 = uStack_40;
  lStack_c8 = param_1;
  func_0x00010c27ac60(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,uVar2,0x500000,
                      &puStack_e8,0);
  return;
}



/* Entry: 108e43fac; end: 108e44017; -[SCColorPickerView willAnimateColorPickerForViewMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e43fac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + _DAT_11277c358) = param_3;
  uVar2 = 0x3ff0000000000000;
  if (param_3 == 1) {
    uVar2 = 0;
  }
  func_0x00010c1677c0(uVar2,*(undefined8 *)(param_1 + _DAT_11277c368));
  lVar1 = (long)_DAT_11277c36c;
  func_0x00010c1677c0(uVar2,*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 108e44018; end: 108e440b7; -[SCColorPickerView animateColorPickerForViewMode:] */

/* WARNING: Possible PIC construction at 0x000108e44058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e4405c) */
/* WARNING: Removing unreachable block (ram,0x000108e440a4) */
/* WARNING: Removing unreachable block (ram,0x000108e44074) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e44018(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (param_3 != 1) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_11277c368),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108e440b8; end: 108e4411b; -[SCColorPickerView didAnimateColorPickerForViewMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e440b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277c36c),param_2,param_3 == 0);
  if (param_3 != 0) {
    return;
  }
  lVar1 = (long)_DAT_11277c360;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + lVar1),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108e4411c; end: 108e4413b; -[SCColorPickerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4411c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277c384);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e4413c; end: 108e4414b; -[SCColorPickerView dropletOriginY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e4413c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c37c);
}



/* Entry: 108e4414c; end: 108e4415b; -[SCColorPickerView dropletView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e4414c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c36c);
}



/* Entry: 108e4415c; end: 108e4416b; -[SCColorPickerView isHeightExpanded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e4415c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c388);
}



/* Entry: 108e4416c; end: 108e4417b; -[SCColorPickerView setHeightExpanded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4416c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c388) = param_3;
  return;
}



/* Entry: 108e4417c; end: 108e4418b; -[SCColorPickerView isColorLocked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e4417c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c340);
}



/* Entry: 108e4418c; end: 108e4419b; -[SCColorPickerView setColorLocked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4418c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c340) = param_3;
  return;
}



/* Entry: 108e4419c; end: 108e44257; -[SCColorPickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e4419c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c36c,0);
  _objc_destroyWeak(param_1 + _DAT_11277c384);
  _objc_storeStrong(param_1 + _DAT_11277c390,0);
  _objc_storeStrong(param_1 + _DAT_11277c360,0);
  _objc_storeStrong(param_1 + _DAT_11277c35c,0);
  _objc_storeStrong(param_1 + _DAT_11277c370,0);
  _objc_storeStrong(param_1 + _DAT_11277c364,0);
  _objc_storeStrong(param_1 + _DAT_11277c368,0);
  _objc_storeStrong(param_1 + _DAT_11277c374,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c350,0);
  return;
}



/* Entry: 108e44258; end: 108e44453; -[SCDrawingDropletView initWithFrame:] */

undefined1 *
FUN_108e44258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126feaf0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e4ccccd);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b52f0;
    _objc_alloc_init(PTR_PTR_1126b52f0);
    func_0x00010c182b00(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d4a0();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    func_0x00010c192080(param_3,param_4,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e44454; end: 108e4449f; -[SCDrawingDropletView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e44454(double param_1,double param_2,undefined8 param_3)

{
  if ((param_1 != 0.0) && (param_2 != 0.0)) {
    return;
  }
  _objc_opt_class(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c23d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e444a0; end: 108e444bb; -[SCDrawingDropletView isExpanded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e444a0(long param_1)

{
  return *(long *)(param_1 + _DAT_11277c394) == 1 || *(long *)(param_1 + _DAT_11277c394) == 4;
}



/* Entry: 108e444bc; end: 108e444cb; -[SCDrawingDropletView setDropletMode:] */

void FUN_108e444bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c192090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGSizeZero_110347620,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8)
             ,param_1,PTR_s_setDropletMode_dropletSize__112642240);
  return;
}



/* Entry: 108e444cc; end: 108e445c7; -[SCDrawingDropletView setDropletMode:dropletSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e444cc(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_70 [48];
  
  *(undefined8 *)(param_3 + _DAT_11277c394) = param_5;
  lVar2 = param_3;
  dVar3 = param_1;
  dVar4 = param_2;
  _objc_opt_class();
  func_0x00010c0f58e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_3);
  func_0x00010c23d1c0();
  if ((((dVar3 == 0.0) || (dVar4 == 0.0)) || (param_1 == 0.0)) || (param_2 == 0.0)) {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    dVar3 = param_1;
    dVar4 = param_2;
  }
  else {
    param_1 = param_1 / dVar3;
    param_2 = param_2 / dVar4;
    dVar3 = *(double *)PTR__CGSizeZero_110347620;
    dVar4 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  bVar1 = false;
  if ((param_1 == dVar3) && (bVar1 = false, !NAN(param_2) && !NAN(dVar4))) {
    bVar1 = param_2 == dVar4;
  }
  if (!bVar1) {
    _CGAffineTransformMakeScale(auStack_70);
    func_0x00010bf08a40(lVar2,param_4,auStack_70);
  }
  func_0x00010c187820(param_3,param_4,lVar2);
  func_0x00010c23d620(param_3);
  _objc_release(lVar2);
  return;
}



/* Entry: 108e445c8; end: 108e446df; -[SCDrawingDropletView setCurrentPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e445c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  lVar2 = (long)_DAT_11277c39c;
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  *(undefined8 *)(param_5 + lVar2) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bf345e0(param_5);
  func_0x000107c308a4(param_3,param_4);
  func_0x00010c1739e0(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108e446e0;
  puStack_70 = &UNK_110858dc0;
  lStack_68 = param_5;
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_6,&puStack_88);
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  lVar2 = param_5;
  func_0x00010c22a660(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9840(param_5,param_6,uVar1,lVar2,1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108e446e0; end: 108e446eb;  */

void FUN_108e446e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 108e446ec; end: 108e447af; -[SCDrawingDropletView setPath:forShapeLayer:animatedShadow:] */

void FUN_108e446ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_s_path_11261b020;
  _NSStringFromSelector(PTR_s_path_11261b020);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1040();
  func_0x00010c14c6a0(param_4,param_2,puVar1,uVar2);
  _objc_release(puVar1);
  if (param_5 != 0) {
    puVar1 = PTR_s_shadowPath_112668258;
    _NSStringFromSelector(PTR_s_shadowPath_112668258);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc1040();
    func_0x00010c14c6a0(param_4,param_2,puVar1,uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e447b0; end: 108e447f3; -[SCDrawingDropletView contentShapeLayer] */

void FUN_108e447b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e447f4; end: 108e4484b; +[SCDrawingDropletView sizeForDropletMode:] */

undefined1  [16]
FUN_108e447f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  
  _objc_opt_class();
  func_0x00010c0f58e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(param_5);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e4484c; end: 108e448f3; +[SCDrawingDropletView pathForDropletMode:] */

void FUN_108e4484c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 == 0) {
      _objc_opt_class();
      func_0x00010bf3dfc0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = param_1;
    }
    else if (param_3 == 1) {
      _objc_opt_class();
      func_0x00010bf9c040();
      _objc_retainAutoreleasedReturnValue();
      param_2 = param_1;
    }
  }
  else if (param_3 == 2) {
    _objc_opt_class();
    func_0x00010c088000();
    _objc_retainAutoreleasedReturnValue();
    param_2 = param_1;
  }
  else if (param_3 == 3) {
    _objc_opt_class();
    func_0x00010c088020(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    param_2 = param_1;
  }
  else if (param_3 == 4) {
    _objc_opt_class();
    func_0x00010bf9efc0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108e448f4; end: 108e44a93; +[SCDrawingDropletView closedPath] */

void FUN_108e448f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_70 [48];
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(0x4032d1eb851eb852,0x4043000000000000);
  func_0x00010bef7ba0(0x4043000000000000,0x4033000000000000,0x4038051eb851eb85,0x4043000000000000,
                      0x4043000000000000,0x4041000000000000,puVar1);
  func_0x00010bef7ba0(0x4043000000000000,0x4033000000000000,0x4043000000000000,0x402e570a3d70a3d7,
                      0x4043000000000000,0x4033000000000000,puVar1);
  func_0x00010bef98c0(0x4043000000000000,0x4033000000000000,puVar1);
  func_0x00010bef98c0(0x4043000000000000,0x4033000000000000,puVar1);
  func_0x00010bef98c0(0x4043000000000000,0x4033000000000000,puVar1);
  func_0x00010bef7ba0(0x4043000000000000,0x4033000000000000,0x4043000000000000,0x4033000000000000,
                      0x4043000000000000,0x4036d47ae147ae14,puVar1);
  func_0x00010bef7ba0(0x4032d1eb851eb852,0,0x4043000000000000,0x4010000000000000,0x4038051eb851eb85,
                      0,puVar1);
  func_0x00010bef7ba0(0,0x4033000000000000,0x4020dc28f5c28f5c,0,0,0x4021051eb851eb85,puVar1);
  func_0x00010bef7ba0(0x4032d1eb851eb852,0x4043000000000000,0,0x403d7d70a3d70a3d,0x4020dc28f5c28f5c,
                      0x4043000000000000,puVar1);
  func_0x00010bf3dc80(puVar1);
  _CGAffineTransformMakeScale(auStack_70,0x3fe0000000000000,0x3fe0000000000000);
  func_0x00010bf08a40(puVar1,param_2,auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e44a94; end: 108e44aaf; +[SCDrawingDropletView largeClosedPath] */

void FUN_108e44a94(undefined8 param_1)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c088030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe999999999999a,param_1,PTR_s_largeClosedPathWithScale__1125ffa18);
  return;
}



/* Entry: 108e44ab0; end: 108e44c53; +[SCDrawingDropletView largeClosedPathWithScale:] */

void FUN_108e44ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_70 [48];
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(0x4032d1eb851eb852,0x4043000000000000);
  func_0x00010bef7ba0(0x4043000000000000,0x4033000000000000,0x4038051eb851eb85,0x4043000000000000,
                      0x4043000000000000,0x4041000000000000,puVar1);
  func_0x00010bef7ba0(0x4043000000000000,0x4033000000000000,0x4043000000000000,0x402e570a3d70a3d7,
                      0x4043000000000000,0x4033000000000000,puVar1);
  func_0x00010bef98c0(0x4043000000000000,0x4033000000000000,puVar1);
  func_0x00010bef98c0(0x4043000000000000,0x4033000000000000,puVar1);
  func_0x00010bef98c0(0x4043000000000000,0x4033000000000000,puVar1);
  func_0x00010bef7ba0(0x4043000000000000,0x4033000000000000,0x4043000000000000,0x4033000000000000,
                      0x4043000000000000,0x4036d47ae147ae14,puVar1);
  func_0x00010bef7ba0(0x4032d1eb851eb852,0,0x4043000000000000,0x4010000000000000,0x4038051eb851eb85,
                      0,puVar1);
  func_0x00010bef7ba0(0,0x4033000000000000,0x4020dc28f5c28f5c,0,0,0x4021051eb851eb85,puVar1);
  func_0x00010bef7ba0(0x4032d1eb851eb852,0x4043000000000000,0,0x403d7d70a3d70a3d,0x4020dc28f5c28f5c,
                      0x4043000000000000,puVar1);
  func_0x00010bf3dc80(puVar1);
  _CGAffineTransformMakeScale(auStack_70,param_1,param_1);
  func_0x00010bf08a40(puVar1,param_3,auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e44c54; end: 108e44eb3; +[SCDrawingDropletView expandedPath] */

void FUN_108e44c54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_90 [48];
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(0x4050fae147ae147b,0x4061000000000000);
  func_0x00010bef7ba0(0x405d0a3d70a3d70a,0x405d533333333333,0x4055ab851eb851ec,0x4061000000000000,
                      0x4059f7ae147ae148,0x4060333333333333,puVar1);
  func_0x00010bef7ba0(0x406176147ae147ae,0x40576b851eb851ec,0x405dd33333333333,0x405c89999999999a,
                      0x40608fae147ae148,0x4059633333333333,puVar1);
  func_0x00010bef7ba0(0x406483851eb851ec,0x4051f66666666666,0x406233851eb851ec,0x4055cd70a3d70a3d,
                      0x406483851eb851ec,0x4051f66666666666,puVar1);
  func_0x00010bef7ba0(0x406482e147ae147b,0x405008f5c28f5c29,0x4064d47ae147ae14,0x40516e147ae147ae,
                      0x4064d3d70a3d70a4,0x40509147ae147ae1,puVar1);
  func_0x00010bef7ba0(0x406175c28f5c28f6,0x404527ae147ae148,0x406482e147ae147b,0x405008f5c28f5c29,
                      0x406233851eb851ec,0x4048651eb851eb85,puVar1);
  func_0x00010bef7ba0(0x405d0a3d70a3d70a,0x4032b33333333333,0x40608fae147ae148,0x404139999999999a,
                      0x405dd33333333333,0x4035d9999999999a,puVar1);
  func_0x00010bef7ba0(0x4050fae147ae147b,0,0x4059f7ae147ae148,0x401999999999999a,0x4055ab851eb851ec,
                      0,puVar1);
  func_0x00010bef7ba0(0,0x4051000000000000,0x403e68f5c28f5c29,0,0,0x403e70a3d70a3d71,puVar1);
  func_0x00010bef7ba0(0x4050fae147ae147b,0x4061000000000000,0,0x405a63d70a3d70a4,0x403e68f5c28f5c29,
                      0x4061000000000000,puVar1);
  func_0x00010bf3dc80(puVar1);
  _CGAffineTransformMakeScale(auStack_90,0x3fe0000000000000,0x3fe0000000000000);
  func_0x00010bf08a40(puVar1,param_2,auStack_90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e44eb4; end: 108e44f03; +[SCDrawingDropletView eyeDropperPath] */

void FUN_108e44eb4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  func_0x00010bf9c040();
  _objc_retainAutoreleasedReturnValue();
  _CGAffineTransformMakeScale(auStack_50,0x3fe8000000000000,0x3fe8000000000000);
  func_0x00010bf08a40(param_1,param_2,auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108e44f04; end: 108e44f13; -[SCDrawingDropletView dropletMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e44f04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c394);
}



/* Entry: 108e44f14; end: 108e44f23; -[SCDrawingDropletView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e44f14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c3a0);
}



/* Entry: 108e44f24; end: 108e44f63; -[SCDrawingDropletView setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e44f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c3a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e44f64; end: 108e44fa3; -[SCDrawingDropletView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e44f64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c3a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c39c,0);
  return;
}



/* Entry: 108e44fa4; end: 108e44faf; -[SCDrawingPaletteModel _loadImageWithName:] */

void FUN_108e44fa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50);
  return;
}



/* Entry: 108e44fb0; end: 108e4535b; -[SCDrawingPaletteModel initWithColorPickerVersion:] */

undefined1 * FUN_108e44fb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  
  puVar1 = &uStack_120;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR_PTR_1126feaf8;
  uStack_120 = param_1;
  _objc_msgSendSuper2(&uStack_120,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_108e4531c;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar7 = *(undefined8 *)((long)puVar1 + 8);
  *(undefined **)((long)puVar1 + 8) = puVar2;
  _objc_release(uVar7);
  *(long *)((long)puVar1 + 0x28) = param_3;
  if (param_3 == 1) {
    uVar7 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(uVar7);
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(uVar7);
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(uVar7);
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(uVar7);
    _objc_release(puVar2);
    ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d06d8;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdee380();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d06f0;
    puVar4 = (undefined1 *)puVar1;
    puStack_b0 = puVar3;
    func_0x00010bdee380();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0708;
    puVar5 = (undefined1 *)puVar1;
    puStack_a8 = puVar4;
    func_0x00010bdee380();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0720;
    puVar6 = (undefined1 *)puVar1;
    puStack_a0 = puVar5;
    func_0x00010bdee380();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 4;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_98 = puVar6;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    ppuStack_110 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d06d8;
    ppuStack_108 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d06f0;
    ppuStack_f0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111856b0;
    ppuStack_e8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111856c0;
    ppuStack_100 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0708;
    ppuStack_f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0720;
    ppuStack_e0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111856b0;
    ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111856b0;
LAB_108e452f0:
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar7);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar8;
  }
  else if (param_3 == 0) {
    uVar7 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(uVar7);
    _objc_release(puVar2);
    ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d06d8;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdee380();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 1;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar7);
    _objc_release(puVar3);
    ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d06d8;
    ppuStack_88 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111856b0;
    goto LAB_108e452f0;
  }
  func_0x00010c1877c0(puVar1);
LAB_108e4531c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126dc258;
  _objc_alloc(PTR_PTR_1126dc258);
  func_0x00010bfffc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar2;
}



/* Entry: 108e4535c; end: 108e4538b; +[SCDrawingPaletteModel createWithColorPickerVersion:] */

void FUN_108e4535c(void)

{
  _objc_alloc(PTR_PTR_1126dc258);
  func_0x00010bfffc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e4538c; end: 108e453b3; -[SCDrawingPaletteModel gradientColorsForCurrentPalette] */

void FUN_108e4538c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf5f8a0();
                    /* WARNING: Could not recover jumptable at 0x00010be24470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__gradientColorsForPaletteType__112566ab8,uVar1);
  return;
}



/* Entry: 108e453b4; end: 108e4542f; -[SCDrawingPaletteModel alphaValueForCurrentPalette] */

double FUN_108e453b4(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf5f8a0();
  func_0x00010c0df840(puVar1,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return (double)param_1;
}



/* Entry: 108e45430; end: 108e4545f; -[SCDrawingPaletteModel nextPaletteType] */

long FUN_108e45430(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = param_1;
  func_0x00010bf5f8a0();
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = (lVar2 + 1U) / uVar3;
  }
  return (lVar2 + 1U) - uVar1 * uVar3;
}



/* Entry: 108e45460; end: 108e45487; -[SCDrawingPaletteModel paletteIconForCurrentPalette] */

void FUN_108e45460(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf5f8a0();
                    /* WARNING: Could not recover jumptable at 0x00010be6fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__paletteIconForPaletteType__1125798e8,uVar1);
  return;
}



/* Entry: 108e45488; end: 108e454df; -[SCDrawingPaletteModel _gradientColorsForPaletteType:] */

void FUN_108e45488(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e454e0; end: 108e45aa7; -[SCDrawingPaletteModel _createGradientColorsForPaletteType:] */

void FUN_108e454e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xe830ce);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
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
  _objc_release(puVar13);
  puVar13 = (undefined *)0x0;
  puStack_188 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x00010bf41580();
      _objc_retainAutoreleasedReturnValue();
      puStack_190 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41580();
      _objc_retainAutoreleasedReturnValue();
LAB_108e459f4:
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puStack_198);
      _objc_release(puStack_190);
      _objc_release(puStack_188);
      goto LAB_108e45a60;
    }
    if (param_3 != 1) goto LAB_108e45a60;
  }
  else if (param_3 != 2) {
    if (param_3 != 3) goto LAB_108e45a60;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_108e459f4;
  }
  _objc_retain(puVar11);
  puVar13 = puVar11;
LAB_108e45a60:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar11 + 8),PTR_s_objectAtIndexedSubscript__112615968);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108e45aa8; end: 108e45aaf; -[SCDrawingPaletteModel _paletteIconForPaletteType:] */

void FUN_108e45aa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectAtIndexedSubscript__112615968);
  return;
}



/* Entry: 108e45ab0; end: 108e45ad7; -[SCDrawingPaletteModel togglePalette] */

void FUN_108e45ab0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0d9d20();
                    /* WARNING: Could not recover jumptable at 0x00010c1877d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCurrentPaletteType__11263f810,uVar1);
  return;
}



/* Entry: 108e45ad8; end: 108e45adf; -[SCDrawingPaletteModel colorPickerVersion] */

undefined8 FUN_108e45ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e45ae0; end: 108e45ae7; -[SCDrawingPaletteModel currentPaletteType] */

undefined8 FUN_108e45ae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108e45ae8; end: 108e45aef; -[SCDrawingPaletteModel setCurrentPaletteType:] */

void FUN_108e45ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108e45af0; end: 108e45b2b; -[SCDrawingPaletteModel .cxx_destruct] */

void FUN_108e45af0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e45b2c; end: 108e45ca7; -[SCEyeDropperColorPickerView initWithFrame:screenshotReferenceView:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e45b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126feb00;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11277c3bc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11277c3c0),param_8);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bfe7ca0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c16d4a0();
    func_0x00010befbb60(puVar1);
    func_0x00010bebfb20(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108e45ca8; end: 108e45e73; -[SCEyeDropperColorPickerView _createDotAndDropletViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e45ca8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126dc268;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11277c3c4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c192060(*(undefined8 *)(param_1 + lVar3),param_2,4);
  _CGAffineTransformMakeRotation(&uStack_70,0x3ff921fb54442d18);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar3),param_2,&uStack_a0);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x402c000000000000,0x402c000000000000);
  lVar3 = (long)_DAT_11277c3c8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x401c000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4004000000000000);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  func_0x00010c1c8340(0);
  func_0x00010bef9040(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 108e45e74; end: 108e45f67; -[SCEyeDropperColorPickerView _startColorEyeDropperWithScreenshot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e45e74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010bded3e0(param_2);
  func_0x00010be1b2a0(param_2,param_3,param_4);
  _objc_release(param_4);
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  uVar4 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  lVar2 = (long)_DAT_11277c3c8;
  func_0x00010c17a6a0(param_1,uVar4,*(undefined8 *)(param_2 + lVar2));
  func_0x00010befbb60(param_2,param_3,*(undefined8 *)(param_2 + lVar2));
  lVar3 = (long)_DAT_11277c3c4;
  func_0x00010befbb60(param_2,param_3,*(undefined8 *)(param_2 + lVar3));
  func_0x00010be612e0(param_2);
  lVar1 = param_2;
  func_0x00010be22520((double)*(int *)(param_2 + _DAT_11277c3cc) / 2.0,
                      (double)*(int *)(param_2 + _DAT_11277c3d0) / 2.0,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e800(*(undefined8 *)(param_2 + lVar3),param_3,lVar1);
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar2),param_3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e45f68; end: 108e45fab; -[SCEyeDropperColorPickerView dealloc] */

void FUN_108e45f68(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bdf8540();
  puStack_28 = PTR_PTR_1126feb00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108e45fac; end: 108e45fdf; -[SCEyeDropperColorPickerView _deallocScreenshotBitmap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e45fac(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277c3d4;
  if (*(long *)(param_1 + lVar1) != 0) {
    _free();
    *(undefined8 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 108e45fe0; end: 108e46133; -[SCEyeDropperColorPickerView _didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e45fe0(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,lVar1);
  _objc_release(lVar1);
  lVar2 = (long)_DAT_11277c3c8;
  func_0x00010c17a6a0(param_1,param_2,*(undefined8 *)(param_5 + lVar2));
  func_0x00010be612e0(param_5);
  lVar1 = (long)_DAT_11277c3bc;
  func_0x00010c09ef00(param_7,param_6,*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  lVar1 = param_5;
  func_0x00010be22520((param_1 / param_3) * (double)*(int *)(param_5 + _DAT_11277c3cc),
                      (param_2 / param_4) * (double)*(int *)(param_5 + _DAT_11277c3d0),param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + lVar2),param_6,lVar1);
  func_0x00010c17e800(*(undefined8 *)(param_5 + _DAT_11277c3c4),param_6,lVar1);
  lVar2 = param_7;
  func_0x00010c252440();
  _objc_release(param_7);
  if (lVar2 == 3) {
    func_0x00010bdf8540(param_5);
    param_5 = param_5 + _DAT_11277c3c0;
    _objc_loadWeakRetained(param_5);
    func_0x00010bf76d20();
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e46134; end: 108e461a7; -[SCEyeDropperColorPickerView _moveDropletViewBasedOnDotView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e46134(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277c3c8;
  func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  lVar1 = (long)_DAT_11277c3c4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2 + -12.0 + param_4 * -0.5,*(undefined8 *)(param_5 + lVar1),
             PTR_s_setCenter__11263c3c8);
  return;
}


