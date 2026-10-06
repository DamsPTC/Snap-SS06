/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b308c0; end: 107b308f3;  */

void FUN_107b308c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bedae40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b308f4; end: 107b30a6f; -[SCOperaLoadingLayerViewController loadingLayerView:didPressErrorButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b308f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0eaa40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_4;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126c95c8;
    func_0x00010c09d2c0(PTR_PTR_1126c95c8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9680;
    func_0x00010bf98900();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b6008;
    puStack_78 = puVar5;
    lStack_68 = lVar3;
    func_0x00010c0f12c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar6;
    lStack_60 = lVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_68,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_1,param_2,puVar4,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_4 + _DAT_11276a910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b30a70; end: 107b30a8f; -[SCOperaLoadingLayerViewController loadingIndicatorDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b30a70(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b30a90; end: 107b30aa3; -[SCOperaLoadingLayerViewController setLoadingIndicatorDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b30a90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a910,param_3);
  return;
}



/* Entry: 107b30aa4; end: 107b30ac3; -[SCOperaLoadingLayerViewController blockingViewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b30aa4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b30ac4; end: 107b30ad7; -[SCOperaLoadingLayerViewController setBlockingViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b30ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a920,param_3);
  return;
}



/* Entry: 107b30ad8; end: 107b30b5b; -[SCOperaLoadingLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b30ad8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a920);
  _objc_destroyWeak(param_1 + _DAT_11276a908);
  _objc_destroyWeak(param_1 + _DAT_11276a910);
  _objc_storeStrong(param_1 + _DAT_11276a918,0);
  _objc_storeStrong(param_1 + _DAT_11276a914,0);
  _objc_storeStrong(param_1 + _DAT_11276a90c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a900,0);
  return;
}



/* Entry: 107b30b5c; end: 107b30da3; -[SCOperaInterstitialLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b30b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126f9ec0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar4 = (long)_DAT_11276a928;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_11276a92c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4008000000000000);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x402e000000000000);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar4 = (long)_DAT_11276a930;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4000000000000000);
    _objc_release(uVar3);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b30da4; end: 107b30ebb; -[SCOperaInterstitialLayerView setupViewForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b30da4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11276a92c;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar2),param_2,4);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar2));
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_11276a928),param_2,&uStack_70);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276a930),param_2,1);
  lVar1 = param_3;
  func_0x00010c26e5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c26e5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130300(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
  func_0x00010c1cbe20(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 107b30ebc; end: 107b30f63; -[SCOperaInterstitialLayerView renderThumbnailWithViewProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b30ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11276a930;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar4 = (long)_DAT_11276a934;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010bfcb300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276a934;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar1;
  _objc_release(uVar2);
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b30f64; end: 107b30faf; -[SCOperaInterstitialLayerView tearDownThumbnailIfNeccesary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b30f64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276a934;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a930),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107b30fb0; end: 107b3100f; -[SCOperaInterstitialLayerView updateWithHorizontalOffset:layerContentAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b30fb0(long param_1,undefined8 param_2,long param_3)

{
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
  
  if (param_3 != 0) {
    func_0x00010c14e200(param_3);
    _CGAffineTransformMakeScale(&uStack_50);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_11276a928),param_2,&uStack_80);
  }
  return;
}



/* Entry: 107b31010; end: 107b3101f; -[SCOperaInterstitialLayerView updateWithAdditionalBottomInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b31010(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276a924) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b31020; end: 107b3102f; -[SCOperaInterstitialLayerView scalableContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b31020(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a928);
}



/* Entry: 107b31030; end: 107b3103f; -[SCOperaInterstitialLayerView titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b31030(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a92c);
}



/* Entry: 107b31040; end: 107b3104f; -[SCOperaInterstitialLayerView thumbnailMediaContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b31040(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a930);
}



/* Entry: 107b31050; end: 107b3105f; -[SCOperaInterstitialLayerView thumbnailMediaView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b31050(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a934);
}



/* Entry: 107b31060; end: 107b310bf; -[SCOperaInterstitialLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b31060(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a934,0);
  _objc_storeStrong(param_1 + _DAT_11276a930,0);
  _objc_storeStrong(param_1 + _DAT_11276a92c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a928,0);
  return;
}



/* Entry: 107b310c0; end: 107b31177; -[SCOperaInterstitialLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b310c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_11276a940;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1c8340(0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  lVar3 = param_1;
  func_0x00010c08c460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222380(param_1,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b31178; end: 107b3141f; -[SCOperaInterstitialLayerViewController _didUpdateSubviewsVisible:] */

void FUN_107b31178(undefined8 param_1)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf393e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010c235980();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010c23a4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9410;
  func_0x00010c237680();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c9410;
  func_0x00010c238dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9410;
  func_0x00010bf0a240();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c9410;
  func_0x00010bf4ea80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
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
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940();
  _objc_release(param_1);
  _objc_release(puVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar15;
  func_0x00010c08c460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar15;
  func_0x00010c08c0e0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2298c0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar15;
  func_0x00010c08c460(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar15;
  func_0x00010c08c520(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1de0();
  func_0x00010c28c420(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be01870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar15,PTR_s__didUpdateSubviewsVisible__11255dfb8,0);
  return;
}



/* Entry: 107b31420; end: 107b314cf; -[SCOperaInterstitialLayerViewController updateViewWithPreviousLayer:currentLayer:] */

void FUN_107b31420(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c08c460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2298c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c08c460(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08c520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1de0();
  func_0x00010c28c420(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be01870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didUpdateSubviewsVisible__11255dfb8,0);
  return;
}



/* Entry: 107b314d0; end: 107b31567; -[SCOperaInterstitialLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b314d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010be01860(param_1,param_2,1);
  lVar1 = param_1;
  func_0x00010c08c460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2298c0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c08c460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ac20();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + _DAT_11276a938) = 0;
  puStack_28 = PTR_PTR_1126f9ec8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  return;
}



/* Entry: 107b31568; end: 107b315cf; -[SCOperaInterstitialLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

void FUN_107b31568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010c08c460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c7e0(param_1,uVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b315d0; end: 107b315d7; -[SCOperaInterstitialLayerViewController layerView] */

undefined8 FUN_107b315d0(void)

{
  return 0;
}



/* Entry: 107b315d8; end: 107b315db; -[SCOperaInterstitialLayerViewController beginGestureRecognizerWithTouchDownLocation:] */

void FUN_107b315d8(void)

{
  return;
}



/* Entry: 107b315dc; end: 107b315f3; -[SCOperaInterstitialLayerViewController gestureRecognizerStateChangedForValidLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b315dc(long param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c14c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a940),PTR_s_sc_cancel_112630c48);
  return;
}



/* Entry: 107b315f4; end: 107b315f7; -[SCOperaInterstitialLayerViewController gestureRecognizerCancelledOrFailed] */

void FUN_107b315f4(void)

{
  return;
}



/* Entry: 107b315f8; end: 107b315fb; -[SCOperaInterstitialLayerViewController gestureRecognizerEndedByDismissingInterstitial:] */

void FUN_107b315f8(void)

{
  return;
}



/* Entry: 107b315fc; end: 107b31607; -[SCOperaInterstitialLayerViewController eventForEndingGestureRecognizer:] */

undefined ** FUN_107b315fc(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 107b31608; end: 107b3160f; -[SCOperaInterstitialLayerViewController isTappingAwayWithLeftTap:] */

undefined8 FUN_107b31608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



/* Entry: 107b31610; end: 107b317bb; -[SCOperaInterstitialLayerViewController dismissInterstitialWithEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b31610(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_11276a938) = 1;
  lVar1 = param_1;
  func_0x00010bf1d9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1da00();
  _objc_release(lVar1);
  func_0x00010be01860(param_1,param_2,1);
  lVar1 = param_1;
  func_0x00010c08c460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107b31700;
  puStack_48 = &UNK_1109fdc28;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfc1b80(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107b317bc; end: 107b317cb; -[SCOperaInterstitialLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

bool FUN_107b317bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 4U < 0xfffffffffffffffd;
}



/* Entry: 107b317cc; end: 107b317cf; -[SCOperaInterstitialLayerViewController didTryPagingWhenPagingDisabled:] */

void FUN_107b317cc(void)

{
  return;
}



/* Entry: 107b317d0; end: 107b317e7; -[SCOperaInterstitialLayerViewController isBlocking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107b317d0(long param_1)

{
  return (*(byte *)(param_1 + _DAT_11276a938) ^ 0xff) & 1;
}



/* Entry: 107b317e8; end: 107b317f7; -[SCOperaInterstitialLayerViewController isBeingDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b317e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a938);
}



/* Entry: 107b317f8; end: 107b3180f; -[SCOperaInterstitialLayerViewController shouldBlockOtherLayersFromDisplayingWithCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107b317f8(long param_1)

{
  return (*(byte *)(param_1 + _DAT_11276a938) ^ 0xff) & 1;
}



/* Entry: 107b31810; end: 107b31817; -[SCOperaInterstitialLayerViewController actionBarContentViewForConfiguration:] */

undefined8 FUN_107b31810(void)

{
  return 0;
}



/* Entry: 107b31818; end: 107b31857; -[SCOperaInterstitialLayerViewController shouldHideActionBar] */

bool FUN_107b31818(long param_1)

{
  long lVar1;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0da1c0();
  _objc_release(param_1);
  return lVar1 == 2;
}



/* Entry: 107b31858; end: 107b318ab; -[SCOperaInterstitialLayerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_107b31858(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_retain(in_x3);
  _objc_opt_class(puVar1);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return ((uint)uVar2 ^ 0xffffffff) & 1;
}



/* Entry: 107b318ac; end: 107b318fb; -[SCOperaInterstitialLayerViewController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

uint FUN_107b318ac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_retain(in_x3);
  _objc_opt_class(puVar1);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return (uint)uVar2 & 1;
}



/* Entry: 107b318fc; end: 107b31b0f; -[SCOperaInterstitialLayerViewController _didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b318fc(double param_1,double param_2,undefined *param_3,undefined8 param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c252440();
  if (lVar2 < 4) {
    if (lVar2 == 1) {
      pdVar1 = (double *)(param_3 + _DAT_11276a93c);
      puVar5 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5,param_4,puVar5);
      *pdVar1 = param_1;
      pdVar1[1] = param_2;
      _objc_release(puVar5);
      func_0x00010bf18220(*pdVar1,pdVar1[1],param_3);
    }
    else {
      puVar5 = param_3;
      if (lVar2 == 2) {
        func_0x00010c29bf00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_5,param_4,puVar5);
        puVar6 = param_3;
        func_0x00010be45480(param_3);
        func_0x00010bfc1be0(param_3,param_4,puVar6);
      }
      else {
        if (lVar2 != 3) goto LAB_107b31af4;
        puVar6 = param_3;
        func_0x00010c29bf00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_5,param_4,puVar6);
        dVar8 = param_1;
        _objc_release(puVar6);
        puVar6 = param_3;
        func_0x00010c29bf00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetWidth();
        puVar3 = param_3;
        dVar9 = dVar8;
        func_0x00010bf46560(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2690e0();
        if (dVar8 * dVar9 <= param_1) {
          puVar7 = (undefined *)0x0;
        }
        else {
          puVar4 = param_3;
          func_0x00010bf46560(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar4;
          func_0x00010c123040();
          _objc_release(puVar4);
        }
        _objc_release(puVar3);
        _objc_release(puVar6);
        puVar6 = param_3;
        func_0x00010c080b40(param_3,param_4,puVar7);
        if ((int)puVar6 == 0) {
          func_0x00010bf99e20(param_3,param_4,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf83be0(param_3,param_4,puVar5);
        }
        else {
          puVar5 = PTR_PTR_1126b2638;
          func_0x00010c1526a0(PTR_PTR_1126b2638);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf04420(param_3,param_4,puVar5);
        }
      }
      _objc_release(puVar5);
    }
  }
  else if (lVar2 - 4U < 2) {
    func_0x00010bfc1b20(param_3);
  }
LAB_107b31af4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b31b10; end: 107b31b43; -[SCOperaInterstitialLayerViewController _isValidLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b31b10(double param_1,double param_2,long param_3)

{
  param_1 = param_1 - *(double *)(param_3 + _DAT_11276a93c);
  param_2 = param_2 - ((double *)(param_3 + _DAT_11276a93c))[1];
  return SQRT(param_2 * param_2 + param_1 * param_1) <= 1.0;
}



/* Entry: 107b31b44; end: 107b31b63; -[SCOperaInterstitialLayerViewController blockingViewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b31b44(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a944);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b31b64; end: 107b31b77; -[SCOperaInterstitialLayerViewController setBlockingViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b31b64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a944,param_3);
  return;
}



/* Entry: 107b31b78; end: 107b31b87; -[SCOperaInterstitialLayerViewController setIsBeingDismissed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b31b78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276a938) = param_3;
  return;
}



/* Entry: 107b31b88; end: 107b31bc3; -[SCOperaInterstitialLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b31b88(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a944);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a940,0);
  return;
}



/* Entry: 107b31bc4; end: 107b32307; -[SCOperaOptOutInterstitialLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b31bc4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  puStack_88 = PTR_PTR_1126f9ed0;
  uStack_90 = param_1;
  _objc_msgSendSuper2(&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c26e040(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4018000000000000);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar2);
    _objc_release(puVar4);
    func_0x00010c160fc0(puVar1);
    puVar4 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    func_0x00010c00ee20();
    lVar7 = (long)_DAT_11276a94c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar5;
    _objc_release(uVar6);
    if (*(double *)((long)puVar1 + (long)_DAT_11276a950) != 0.0) {
      uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
      func_0x00010c08c0e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4030000000000000);
      _objc_release(uVar6);
      func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar7));
    }
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c14e100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x405fc00000000000,0x405fc00000000000);
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276a954);
    *(undefined **)((long)puVar1 + (long)_DAT_11276a954) = puVar5;
    _objc_release(uVar6);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c14e100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276a958);
    *(undefined **)((long)puVar1 + (long)_DAT_11276a958) = puVar5;
    _objc_release(uVar6);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c14e100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c26e040(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c14e100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
    lVar7 = (long)_DAT_11276a95c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar5;
    _objc_release(uVar6);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c14e100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
    lVar8 = (long)_DAT_11276a960;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar5;
    _objc_release(uVar6);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar5);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4008000000000000);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x402e000000000000);
    _objc_release(uVar6);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar5 = PTR_PTR_1126cb800;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4028000000000000,0x4028000000000000);
    lVar8 = (long)_DAT_11276a964;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar5);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar12,uVar13,uVar14,uVar15);
    lVar8 = (long)_DAT_11276a968;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar5;
    _objc_release(uVar6);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar5);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    dVar11 = 3.0;
    func_0x00010c1fe7a0(0,0x4008000000000000);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    dVar9 = 15.0;
    func_0x00010c1fe840(0x402e000000000000);
    _objc_release(uVar6);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be36b20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c23d0a0(puVar2);
    func_0x00010c23d0a0(puVar2);
    dVar10 = 0.0;
    func_0x00010c013de0(0,0,dVar9 + 30.0,dVar11 + 30.0);
    lVar7 = (long)_DAT_11276a96c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar5;
    _objc_release(uVar6);
    func_0x00010befbb60(puVar1);
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c013de0();
    lVar8 = (long)_DAT_11276a970;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar5;
    _objc_release(uVar6);
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar8));
    _CGRectGetWidth();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar10 * 0.5);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff8000000000000);
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar6);
    _objc_release(puVar5);
    func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b32308; end: 107b32323;  */

void FUN_107b32308(void)

{
  _objc_opt_new(PTR_PTR_1126d68a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b32324; end: 107b3248b; -[SCOperaOptOutInterstitialLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b32324(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f9ed0;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010be49020(param_5);
  func_0x00010be49900(param_5);
  func_0x00010be49920(param_5);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_11276a954));
  _CGRectInset();
  uVar1 = *(undefined8 *)(param_5 + _DAT_11276a958);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010be497a0(param_5);
  lVar2 = (long)_DAT_11276a96c;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  dVar3 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar4 = dVar3;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  _CGRectGetHeight();
  func_0x00010bc8525c(param_1,param_2,param_3,param_4,(dVar3 - dVar4) + -16.0);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010c17a6a0(param_1,*(undefined8 *)(param_5 + lVar2));
  return;
}



/* Entry: 107b3248c; end: 107b32623; -[SCOperaOptOutInterstitialLayerView _layoutContainers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3248c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_5;
  func_0x00010c14e100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_5;
  dVar4 = param_1;
  uVar5 = param_2;
  uVar6 = param_3;
  uVar7 = param_4;
  func_0x00010bf20c00();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,dVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(param_5);
    uVar1 = param_5;
    func_0x00010c14e100(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c14e100(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + (long)_DAT_11276a94c));
    _objc_release(uVar1);
  }
  lVar3 = (long)_DAT_11276a954;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  dVar4 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  func_0x00010bc8525c(param_1,param_2,param_3,param_4,dVar4 * 0.3499999940395355);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  uVar1 = param_5;
  func_0x00010c14e100(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010c17a6a0(param_1,*(undefined8 *)(param_5 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b32624; end: 107b327c7; -[SCOperaOptOutInterstitialLayerView _layoutThumbnailView] */

void FUN_107b32624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_5;
  func_0x00010c26e0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be23540(param_5);
    func_0x00010c26e040(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  }
  else {
    lVar1 = param_5;
    func_0x00010c26e0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c26e0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c26e0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    uVar3 = param_3;
    uVar4 = param_4;
    func_0x00010be23560(param_3,param_4,param_5);
    lVar2 = param_5;
    func_0x00010c26e040(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_3,param_4,uVar3,uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c26e0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010bc852e4();
    func_0x00010c26e0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_3,param_4,uVar3,uVar4);
    _objc_release(param_5);
    param_5 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b327c8; end: 107b32847; -[SCOperaOptOutInterstitialLayerView _getThumbnailImageViewSuggestedFrame] */

double FUN_107b327c8(undefined8 param_1)

{
  double dVar1;
  
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar1 = 1.6666666269302368;
  func_0x00010bf20c00(param_1);
  _CGRectGetWidth();
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  return dVar1 * 0.25;
}



/* Entry: 107b32848; end: 107b32907; -[SCOperaOptOutInterstitialLayerView _getThumbnailImageViewSuggestedFrameWithThumbnailViewSize:] */

double FUN_107b32848(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = param_3;
  dVar3 = param_1;
  func_0x00010c26e0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf34800();
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  dVar4 = (dVar3 - param_2) * 0.5;
  if ((int)uVar2 == 0) {
    dVar4 = dVar3 * 0.6500000059604645 - param_2;
  }
  _objc_release(uVar1);
  func_0x00010bf20c00(param_3);
  _CGRectGetWidth();
  return (dVar4 - param_1) * 0.5 + -2.0;
}



/* Entry: 107b32908; end: 107b32b1f; -[SCOperaOptOutInterstitialLayerView _layoutTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b32908(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  uVar1 = param_5;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar3 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  func_0x00010bc85050(param_1,param_2,param_3,param_4,dVar3 + -32.0);
  uVar2 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + (long)_DAT_11276a954));
  _CGRectGetMaxY();
  uVar1 = param_5;
  func_0x00010c26e040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010c26e040(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMaxY();
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bc8525c();
  uVar2 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  uVar1 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b32b20; end: 107b32ddf; -[SCOperaOptOutInterstitialLayerView _layoutSubtitleLabel] */

/* WARNING: Possible PIC construction at 0x000107b32be4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b32be8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b32b20(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276a960);
  func_0x00010c23d620(*puVar1);
  lVar7 = (long)_DAT_11276a968;
  func_0x00010c23d620(*(undefined8 *)(param_5 + lVar7));
  puVar2 = (undefined8 *)(param_5 + _DAT_11276a964);
  func_0x00010bfad5c0(*puVar2);
  if (param_1 != 0.0) {
    func_0x00010bfb68e0(*puVar2);
    dVar8 = param_1;
    func_0x00010bfb68e0(*puVar1);
    _CGRectGetMaxX();
    func_0x00010bc851d4(param_1,param_2,param_3,param_4,dVar8 + 4.0);
    func_0x00010c19f0e0(*puVar2);
    func_0x00010bf345e0(*puVar2);
    func_0x00010bf345e0(*puVar1);
    uVar3 = *puVar2;
    goto code_r0x00010c17a6a0;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  dVar8 = param_1;
  func_0x00010bfb68e0(*puVar1);
  _CGRectGetMaxX();
  func_0x00010bc851d4(param_1,param_2,param_3,param_4,dVar8 + 4.0);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
  lVar4 = *(long *)(param_5 + lVar7);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    _objc_release(lVar4);
LAB_107b32ce0:
    func_0x00010bfb68e0(*puVar1);
    _CGRectGetMaxX();
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    uVar3 = 0xc040000000000000;
    param_1 = param_1 + -32.0;
    func_0x00010bf20c00(*puVar1);
    _CGRectGetHeight();
  }
  else {
    uVar5 = *(ulong *)(param_5 + lVar7);
    func_0x00010c074c20();
    _objc_release(lVar4);
    if ((uVar5 & 1) != 0) goto LAB_107b32ce0;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
    _CGRectGetMaxX();
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    uVar3 = 0xc040000000000000;
    dVar8 = param_1 + -32.0;
    func_0x00010bf20c00(*puVar1);
    _CGRectGetHeight();
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
    _CGRectGetHeight();
    param_1 = dVar8;
    func_0x00010bf20c00(*puVar2);
    _CGRectGetHeight();
    if (param_1 <= dVar8) {
      param_1 = dVar8;
    }
  }
  lVar6 = (long)_DAT_11276a95c;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
  func_0x00010bc85160();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
  lVar7 = param_5;
  dVar8 = param_1;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  func_0x00010bc8525c(param_1,uVar3,param_3,param_4,dVar8 + 2.0);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  _objc_release(lVar7);
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar6));
  uVar3 = *(undefined8 *)(param_5 + lVar6);
code_r0x00010c17a6a0:
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,uVar3,PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 107b32de0; end: 107b32f67; -[SCOperaOptOutInterstitialLayerView setupViewForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b32de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c113060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276a960));
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11276a968;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2));
  lVar3 = (long)_DAT_11276a964;
  func_0x00010c19bc60(0,*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a958);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11276a94c));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11276a95c));
  lVar2 = (long)_DAT_11276a970;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar2));
  *(undefined1 *)(param_1 + _DAT_11276a974) = 0;
  func_0x00010c271500(param_3);
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(lVar2);
  puStack_78 = PTR_PTR_1126f9ed0;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_setupViewForLayer__112668058,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 107b32f68; end: 107b3303f; -[SCOperaOptOutInterstitialLayerView _showStoryBitmojiAvatarViewWithImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b32f68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276a958;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e02c0(0x405c400000000000,0x405c400000000000);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276a954);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b33040; end: 107b3308f; -[SCOperaOptOutInterstitialLayerView buttonViewForTouchPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33040(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be756c0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11276a96c));
  if ((int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276a970);
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b33090; end: 107b33167; -[SCOperaOptOutInterstitialLayerView _point:inButtonContainerView:] */

void FUN_107b33090(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_7);
  func_0x00010bfb68e0(param_7);
  dVar1 = param_1;
  uVar2 = param_2;
  uVar3 = param_3;
  uVar4 = param_4;
  func_0x00010bf20c00(param_7);
  _CGRectGetWidth();
  dVar1 = dVar1 + -60.0;
  dVar5 = dVar1 * 0.5;
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  _CGRectGetHeight(dVar1,uVar2,uVar3,uVar4);
  _CGRectInset(param_1,param_2,param_3,param_4,dVar5,(dVar1 + -60.0) * 0.5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 107b33168; end: 107b33333; -[SCOperaOptOutInterstitialLayerView replaceSubtitleWithText:hideSuffix:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  if ((param_5 & 1) == 0) {
    lVar4 = (long)_DAT_11276a95c;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(uVar1);
    if ((int)param_4 == 0) {
      lVar2 = *(long *)(param_1 + _DAT_11276a968);
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276a960),param_2,param_3);
      }
      else {
        uVar1 = param_3;
        func_0x00010c25ce40(param_3,param_2,&PTR____CFConstantStringClassReference_110eae358);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276a960),param_2,uVar1);
        _objc_release(uVar1);
      }
      _objc_release(lVar2);
    }
    else {
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276a960),param_2,param_3);
    }
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276a964),param_2,param_4);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276a968),param_2,param_4);
    func_0x00010be497a0(param_1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276a960);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107b33334;
    puStack_60 = &UNK_11084d5f8;
    uStack_48 = (undefined1)param_4;
    lStack_58 = param_1;
    uStack_50 = uVar1;
    _objc_retain();
    func_0x00010be8ece0(param_1,param_2,param_3,param_4,&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b33334; end: 107b33367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33334(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a974) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8ecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__replaceSubtitleWithText_hideSuf_1125814d8,
             *(undefined8 *)(param_1 + 0x28),(*(byte *)(param_1 + 0x30) ^ 0xff) & 1,0);
  return;
}



/* Entry: 107b33368; end: 107b33467; -[SCOperaOptOutInterstitialLayerView _replaceSubtitleWithText:hideSuffix:completion:] */

void FUN_107b33368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b33468;
  puStack_50 = &UNK_110842e18;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107b33480;
  puStack_90 = &UNK_1109fdc98;
  uStack_88 = param_1;
  uStack_80 = param_3;
  uStack_78 = param_5;
  uStack_70 = param_4;
  uStack_48 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fd3333340000000,0x4000000000000000,puVar1,param_2,0,&puStack_68,&puStack_a8
                     );
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107b33468; end: 107b3347f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a95c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b33480; end: 107b3358f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33480(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a974) & 1) == 0)) {
    func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a960),param_2,
                        *(undefined8 *)(param_1 + 0x28));
    func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a964));
    func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a968));
    func_0x00010be497a0(*(undefined8 *)(param_1 + 0x20));
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010bf03420(0x3fd3333340000000,puVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107b33590; end: 107b335d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a95c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b335d4; end: 107b336b7; -[SCOperaOptOutInterstitialLayerView updateWithHorizontalOffset:layerContentAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b335d4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  double dVar2;
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
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f9ed0;
  dVar2 = param_1;
  lStack_50 = param_2;
  _objc_msgSendSuper2(param_1,&lStack_50,PTR_s_updateWithHorizontalOffset_layer_112680c20,param_4);
  if (param_4 != 0) {
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    _CGAffineTransformTranslate(&uStack_80,-(dVar2 * param_1),0,&uStack_b0);
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    lVar1 = (long)_DAT_11276a970;
    func_0x00010c219960(*(undefined8 *)(param_2 + lVar1));
    func_0x00010bf01be0(param_1,param_4);
    func_0x00010c1677c0(*(undefined8 *)(param_2 + lVar1));
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107b336b8; end: 107b3379b; -[SCOperaOptOutInterstitialLayerView beginButtonTouchDownAnimation:] */

void FUN_107b336b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x107b33748;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03400(0x3fc3333340000000,puVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107b3379c; end: 107b337ff; -[SCOperaOptOutInterstitialLayerView beginTouchDownAnimation] */

void FUN_107b3379c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107b33800;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03400(0x3fc3333340000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}



/* Entry: 107b33800; end: 107b33877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33800(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  
  _CGAffineTransformMakeScale(auStack_50,0x3fee666660000000,0x3fee666660000000);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a958);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 107b33878; end: 107b339af; -[SCOperaOptOutInterstitialLayerView endTouchDownAnimationWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_11276a974) = 1;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107b339b0;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107b33a58;
  puStack_98 = &UNK_110842508;
  uStack_90 = param_3;
  lStack_68 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fd3333340000000,puVar2,param_2,&puStack_88,&puStack_b0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276a95c);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar3);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107b33a6c;
  puStack_c0 = &UNK_110842e18;
  lStack_b8 = param_1;
  func_0x00010bf03400(0x3fc99999a0000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_d8);
  _objc_release(uStack_90);
  _objc_release(param_3);
  return;
}



/* Entry: 107b339b0; end: 107b33a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b339b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [48];
  
  _CGAffineTransformMakeScale(auStack_60,0x3ff19999a0000000,0x3ff19999a0000000);
  lVar2 = (long)_DAT_11276a958;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar1);
  return;
}



/* Entry: 107b33a58; end: 107b33a6b;  */

void FUN_107b33a58(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107b33a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107b33a6c; end: 107b33af3;  */

/* WARNING: Possible PIC construction at 0x000107b33a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b33ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b33ad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b33ab8) */
/* WARNING: Removing unreachable block (ram,0x000107b33a9c) */
/* WARNING: Removing unreachable block (ram,0x000107b33ad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a94c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b33af4; end: 107b33b57; -[SCOperaOptOutInterstitialLayerView cancelTouchDownAnimation] */

void FUN_107b33af4(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107b33b58;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03400(0x3fc3333340000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}



/* Entry: 107b33b58; end: 107b33bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33b58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a958);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  uStack_50 = uVar6;
  uStack_48 = uVar7;
  uStack_40 = uVar3;
  uStack_38 = uVar5;
  func_0x00010c219960();
  _objc_release(uVar1);
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  uStack_50 = uVar6;
  uStack_48 = uVar7;
  uStack_40 = uVar3;
  uStack_38 = uVar5;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a970),param_2,
                      &uStack_60);
  return;
}



/* Entry: 107b33bfc; end: 107b33c77; -[SCOperaOptOutInterstitialLayerView _iconXSignFillImage] */

void FUN_107b33bfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4034000000000000,0x4034000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      0x3ff0000000000000,0x3ff0000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b33c78; end: 107b33c87; -[SCOperaOptOutInterstitialLayerView xButtonImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b33c78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a970);
}



/* Entry: 107b33c88; end: 107b33c9f; -[SCOperaOptOutInterstitialLayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b33c88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a950);
}



/* Entry: 107b33ca0; end: 107b33cb7; -[SCOperaOptOutInterstitialLayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276a950);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107b33cb8; end: 107b33d77; -[SCOperaOptOutInterstitialLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33cb8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a970,0);
  _objc_storeStrong(param_1 + _DAT_11276a978,0);
  _objc_storeStrong(param_1 + _DAT_11276a964,0);
  _objc_storeStrong(param_1 + _DAT_11276a968,0);
  _objc_storeStrong(param_1 + _DAT_11276a960,0);
  _objc_storeStrong(param_1 + _DAT_11276a95c,0);
  _objc_storeStrong(param_1 + _DAT_11276a96c,0);
  _objc_storeStrong(param_1 + _DAT_11276a958,0);
  _objc_storeStrong(param_1 + _DAT_11276a954,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a94c,0);
  return;
}



/* Entry: 107b33d78; end: 107b33e1f; -[SCOperaOptOutInterstitialLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33d78(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126d68a8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11276a97c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c08c520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  func_0x00010c1d5660(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  puStack_38 = PTR_PTR_1126f9ed8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  return;
}



/* Entry: 107b33e20; end: 107b33e73; -[SCOperaOptOutInterstitialLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33e20(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a980);
  *(undefined8 *)(param_1 + _DAT_11276a980) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f9ed8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  return;
}



/* Entry: 107b33e74; end: 107b33f2b; -[SCOperaOptOutInterstitialLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33e74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9ed8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidFullyDisappear_112684ca8);
  lVar2 = (long)_DAT_11276a984;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a97c);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c113060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c131160(uVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 107b33f2c; end: 107b33f9b; -[SCOperaOptOutInterstitialLayerViewController beginGestureRecognizerWithTouchDownLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33f2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276a97c;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf25b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11276a980;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  if (*(long *)(param_1 + lVar3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf17d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_beginButtonTouchDownAnimation__1125a3900);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf18c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_beginTouchDownAnimation_1125a3cc0);
  return;
}



/* Entry: 107b33f9c; end: 107b33ff7; -[SCOperaOptOutInterstitialLayerViewController gestureRecognizerStateChangedForValidLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33f9c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ed8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_gestureRecognizerStateChangedFor_1125ce0a0);
  if ((param_3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276a980);
    *(undefined8 *)(param_1 + _DAT_11276a980) = 0;
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 107b33ff8; end: 107b34007; -[SCOperaOptOutInterstitialLayerViewController gestureRecognizerCancelledOrFailed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b33ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2f290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a97c),PTR_s_cancelTouchDownAnimation_1125a9648);
  return;
}



/* Entry: 107b34008; end: 107b3409f; -[SCOperaOptOutInterstitialLayerViewController gestureRecognizerEndedByDismissingInterstitial:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a97c);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107b340a0;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf95900(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107b340a0; end: 107b340f3;  */

void FUN_107b340a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f0be0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b340f4; end: 107b3416f; -[SCOperaOptOutInterstitialLayerViewController eventForEndingGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b340f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11276a980);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11276a97c);
    func_0x00010c2be8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == lVar1) {
      func_0x00010c152660(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107b34164;
    }
  }
  func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
  _objc_retainAutoreleasedReturnValue();
LAB_107b34164:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b34170; end: 107b341bb; -[SCOperaOptOutInterstitialLayerViewController isTappingAwayWithLeftTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b34170(long param_1)

{
  long *plVar1;
  long lStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + _DAT_11276a980) != 0) {
    return (undefined1 *)0x0;
  }
  plVar1 = &lStack_20;
  puStack_18 = PTR_PTR_1126f9ed8;
  lStack_20 = param_1;
  _objc_msgSendSuper2(&lStack_20,PTR_s_isTappingAwayWithLeftTap__1125fdce0);
  return (undefined1 *)plVar1;
}



/* Entry: 107b341bc; end: 107b341ff; -[SCOperaOptOutInterstitialLayerViewController _autoDismiss] */

void FUN_107b341bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca2c0;
  func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83be0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b34200; end: 107b3420f; -[SCOperaOptOutInterstitialLayerViewController layerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b34200(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a97c);
}



/* Entry: 107b34210; end: 107b3425f; -[SCOperaOptOutInterstitialLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34210(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a984,0);
  _objc_storeStrong(param_1 + _DAT_11276a980,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a97c,0);
  return;
}



/* Entry: 107b34260; end: 107b3447b; -[SCOperaPlayerDebuggerLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b34260(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f9ee0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11276a988;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c198080(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1aa240(0x4014000000000000,0x4014000000000000,0x4014000000000000,0x4014000000000000,
                        *(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11276a98c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c198080(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1aa240(0x4014000000000000,0x4014000000000000,0x4014000000000000,0x4014000000000000,
                        *(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar5));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b3447c; end: 107b3452f; -[SCOperaPlayerDebuggerLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3447c(long param_1)

{
  double dVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9ee0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  dVar1 = *(double *)(param_1 + _DAT_11276a990);
  func_0x00010c14d760(dVar1,param_1);
  func_0x00010c19f0e0(0x4024000000000000,dVar1 + 100.0,0x4044000000000000,0x4044000000000000,
                      *(undefined8 *)(param_1 + _DAT_11276a988));
  func_0x00010c19f0e0(0x4024000000000000,dVar1 + 100.0 + 50.0,0x4044000000000000,0x4044000000000000,
                      *(undefined8 *)(param_1 + _DAT_11276a98c));
  return;
}



/* Entry: 107b34530; end: 107b345b3; -[SCOperaPlayerDebuggerLayerView hitTest:withEvent:] */

void FUN_107b34530(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9ee0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  puVar3 = (undefined1 *)puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar4 = (undefined1 *)0x0;
  if ((((ulong)puVar3 & 1) != 0) && (puVar1 != (undefined8 *)0x0)) {
    _objc_retain(puVar1);
    puVar4 = (undefined1 *)puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107b345b4; end: 107b345cb; -[SCOperaPlayerDebuggerLayerView refreshViewWithPlaybackMonitorsActivated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b345b4(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__refreshButton_enabled__11257fa70,
             *(undefined8 *)(param_1 + _DAT_11276a98c),param_3 ^ 1);
  return;
}



/* Entry: 107b345cc; end: 107b34617; -[SCOperaPlayerDebuggerLayerView refreshViewWithPlaybackLogViewerVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b345cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be88340(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11276a988),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a98c),PTR_s_setHidden__1126479f8,(uint)param_3 ^ 1)
  ;
  return;
}



/* Entry: 107b34618; end: 107b34653; -[SCOperaPlayerDebuggerLayerView _infoButtonDidTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34618(long param_1)

{
  param_1 = param_1 + _DAT_11276a994;
  _objc_loadWeakRetained(param_1);
  func_0x00010c100880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b34654; end: 107b3468f; -[SCOperaPlayerDebuggerLayerView _pauseButtonDidTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34654(long param_1)

{
  param_1 = param_1 + _DAT_11276a994;
  _objc_loadWeakRetained(param_1);
  func_0x00010c100860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


