/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b837bc0; end: 10b837bc7; -[SIGCardCustomDismissTransition fractionalPresentationHeight] */

undefined8 FUN_10b837bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b837bc8; end: 10b837bcf; -[SIGCardCustomDismissTransition setFractionalPresentationHeight:] */

void FUN_10b837bc8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 10b837bd0; end: 10b837bdb; -[SIGCardCustomPresentationTransition transitionDuration:] */

undefined8 FUN_10b837bd0(void)

{
  return 0x3fd3333333333333;
}



/* Entry: 10b837bdc; end: 10b838073; -[SIGCardCustomPresentationTransition animateTransition:] */

void FUN_10b837bdc(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  undefined *puStack_128;
  long lStack_120;
  ulong uStack_118;
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
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar2);
  dVar13 = param_4 * *(double *)(param_5 + 8);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_6,puVar4);
  _objc_release(puVar4);
  func_0x00010c1677c0(0,puVar3);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar7 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar12 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dVar8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_b0 = uVar7;
  uStack_a8 = uVar9;
  uStack_a0 = uVar11;
  uStack_98 = uVar12;
  dStack_90 = dVar8;
  uStack_88 = uVar10;
  func_0x00010c219960(uVar5,param_6,&uStack_b0);
  func_0x00010c19f0e0(param_1,param_2 + (param_4 - dVar13),param_3,dVar13,uVar5);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010c06c000();
  if ((uVar2 & 1) == 0) {
    func_0x00010c12c960(puVar3);
    func_0x00010bf43bc0(param_7,param_6,1);
  }
  else {
    uVar2 = param_7;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uStack_e0 = uVar7;
    uStack_d8 = uVar9;
    uStack_d0 = uVar11;
    uStack_c8 = uVar12;
    dStack_c0 = dVar8;
    uStack_b8 = uVar10;
    _CGAffineTransformTranslate(&uStack_b0,0,dVar13,&uStack_e0);
    _objc_release(uVar2);
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    dStack_c0 = dStack_90;
    dVar13 = dStack_90;
    func_0x00010c219960(uVar5,param_6,&uStack_e0);
    func_0x00010c148fc0(uVar5);
    if (dVar13 != 0.0) {
      uVar2 = uVar5;
      func_0x00010c0bc260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 == 0) {
        puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x00010bf20c00(uVar5);
        func_0x00010c013de0(puVar4);
        func_0x00010c1c2ca0(uVar5,param_6,puVar4);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010c0bc260(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(uVar2);
        _objc_release(puVar4);
      }
    }
    uVar2 = uVar5;
    func_0x00010c0bc260(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uStack_e0 = uVar7;
    uStack_d8 = uVar9;
    uStack_d0 = uVar11;
    uStack_c8 = uVar12;
    dStack_c0 = dVar8;
    uStack_b8 = uVar10;
    _CGAffineTransformTranslate(&uStack_110,0,dVar13,&uStack_e0);
    uVar2 = uVar5;
    func_0x00010c0bc260(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uStack_108;
    uStack_e0 = uStack_110;
    uStack_c8 = uStack_f8;
    uStack_d0 = uStack_100;
    uStack_b8 = uStack_e8;
    dStack_c0 = (double)uStack_f0;
    func_0x00010c219960();
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar7 = uStack_f0;
    func_0x00010c27a940(param_5,param_6,0);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_10b838074;
    puStack_138 = &UNK_11084c4a0;
    _objc_retain(param_7);
    uStack_130 = param_7;
    _objc_retain(puVar3);
    puStack_128 = puVar3;
    lStack_120 = param_5;
    _objc_retain(uVar5);
    puStack_190 = puVar4;
    uStack_188 = 0xc2000000;
    uStack_180 = 0x10b838164;
    puStack_178 = &UNK_11089eec8;
    lStack_170 = param_5;
    uStack_118 = uVar5;
    _objc_retain(uVar5);
    uStack_168 = uVar5;
    _objc_retain(puVar3);
    puStack_160 = puVar3;
    _objc_retain(param_7);
    uStack_158 = param_7;
    func_0x00010bf03420(uVar7,puVar1,param_6,&puStack_150,&puStack_190);
    _objc_release(uStack_158);
    _objc_release(puStack_160);
    _objc_release(uStack_168);
    _objc_release(uStack_118);
    _objc_release(puStack_128);
    _objc_release(uStack_130);
  }
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(param_7);
  return;
}



/* Entry: 10b838074; end: 10b8381df;  */

void FUN_10b838074(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c075b60();
  if (iVar1 != 0) {
    func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_2,3);
  }
  func_0x00010c1677c0(*(double *)(*(long *)(param_1 + 0x30) + 8) * 0.5,
                      *(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_50 = uVar3;
  uStack_48 = uVar5;
  uStack_40 = uVar7;
  uStack_38 = uVar8;
  uStack_30 = uVar4;
  uStack_28 = uVar6;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x38),param_2,&uStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0bc260(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = uVar3;
  uStack_48 = uVar5;
  uStack_40 = uVar7;
  uStack_38 = uVar8;
  uStack_30 = uVar4;
  uStack_28 = uVar6;
  func_0x00010c219960();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0bc260(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 10b8381e0; end: 10b8381e7; -[SIGCardCustomPresentationTransition fractionalPresentationHeight] */

undefined8 FUN_10b8381e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b8381e8; end: 10b8381ef; -[SIGCardCustomPresentationTransition setFractionalPresentationHeight:] */

void FUN_10b8381e8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 10b8381f0; end: 10b8381fb; -[SIGCardCustomTransition setExperimentalGestureCancelRecoveryEnabled:] */

void FUN_10b8381f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c198b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setExperimentalGestureCancelReco_112643ce8);
  return;
}



/* Entry: 10b8381fc; end: 10b838203; -[SIGCardCustomTransition experimentalGestureCancelRecoveryEnabled] */

undefined1 FUN_10b8381fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b838204; end: 10b8382d3; -[SIGCardCustomTransition setFractionalPresentationHeight:] */

void FUN_10b838204(double param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  
  *(double *)(param_2 + 0x28) = param_1;
  dVar6 = ABS(param_1 + 1.0) * 2.220446049250313e-16;
  if (dVar6 <= 2.2250738585072014e-308) {
    dVar6 = 2.2250738585072014e-308;
  }
  ppuVar1 = &PTR_PTR_1126e16e0;
  if (dVar6 <= ABS(param_1 + -1.0)) {
    ppuVar1 = &PTR_PTR_1126e16e8;
  }
  puVar2 = *ppuVar1;
  _objc_alloc_init(puVar2);
  puVar3 = PTR_PTR_1126e16f0;
  _objc_alloc();
  func_0x00010c017980();
  uVar5 = *(undefined8 *)(param_2 + 8);
  *(undefined **)(param_2 + 8) = puVar3;
  _objc_release(uVar5);
  lVar4 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c1797c0(*(undefined8 *)(param_2 + 8),param_3,lVar4);
  _objc_release(lVar4);
  func_0x00010c198b20(*(undefined8 *)(param_2 + 8),param_3,*(undefined1 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b8382d4; end: 10b838327; -[SIGCardCustomTransition init] */

undefined1 * FUN_10b8382d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b400;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c19efc0(0x3ff0000000000000,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b838328; end: 10b83836b; -[SIGCardCustomTransition setCardTransitionDelegate:] */

void FUN_10b838328(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x20,param_3);
  func_0x00010c1797c0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b83836c; end: 10b838373; -[SIGCardCustomTransition installSwipeToDismissGestureRecognizerOnViews:] */

void FUN_10b83836c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_installSwipeToDismissGestureReco_1125f7898);
  return;
}



/* Entry: 10b838374; end: 10b8383ab; -[SIGCardCustomTransition animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_10b838374(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e16f8;
  _objc_opt_new(PTR_PTR_1126e16f8);
  func_0x00010c19efc0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b8383ac; end: 10b8383e3; -[SIGCardCustomTransition animationControllerForDismissedController:] */

void FUN_10b8383ac(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1700;
  _objc_opt_new(PTR_PTR_1126e1700);
  func_0x00010c19efc0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b8383e4; end: 10b8383eb; -[SIGCardCustomTransition interactionControllerForDismissal:] */

void FUN_10b8383e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dismissalTransition_1125bed88);
  return;
}



/* Entry: 10b8383ec; end: 10b8383f3; -[SIGCardCustomTransition animationDuration] */

undefined8 FUN_10b8383ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b8383f4; end: 10b838423; -[SIGCardCustomTransition setAnimationDuration:] */

void FUN_10b8383f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b838424; end: 10b83843b; -[SIGCardCustomTransition cardTransitionDelegate] */

void FUN_10b838424(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b83843c; end: 10b838443; -[SIGCardCustomTransition fractionalPresentationHeight] */

undefined8 FUN_10b83843c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b838444; end: 10b83847b; -[SIGCardCustomTransition .cxx_destruct] */

void FUN_10b838444(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b83847c; end: 10b8384c3; -[SIGCardFullscreenDismissTransition initWithAnimationDuration:] */

void FUN_10b83847c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b408;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 10b8384c4; end: 10b8384cf; -[SIGCardFullscreenDismissTransition init] */

void FUN_10b8384c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff2f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fc3333333333333,param_1,PTR_s_initWithAnimationDuration__1125da590);
  return;
}



/* Entry: 10b8384d0; end: 10b8384d7; -[SIGCardFullscreenDismissTransition transitionDuration:] */

undefined8 FUN_10b8384d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b8384d8; end: 10b838917; -[SIGCardFullscreenDismissTransition animateTransition:] */

void FUN_10b8384d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar3 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_5,puVar4);
  _objc_release(puVar4);
  func_0x00010c1677c0(0x3fe0000000000000,puVar2);
  uVar3 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010c29ce60(param_6,param_5,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(uVar6);
  uVar6 = param_6;
  func_0x00010c29ce60(param_6,param_5,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_6;
  func_0x00010c06c000();
  if ((uVar7 & 1) == 0) {
    func_0x00010c12c960(puVar2);
    func_0x00010bf43bc0(param_6,param_5,1);
  }
  else {
    uVar12 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar11 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar15 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar14 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uVar13 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uStack_c0 = uVar11;
    uStack_b8 = uVar12;
    uStack_b0 = uVar14;
    uStack_a8 = uVar15;
    uStack_a0 = uVar9;
    uStack_98 = uVar13;
    func_0x00010c219960(uVar6,param_5,&uStack_c0);
    func_0x00010bfb68e0(uVar6);
    func_0x00010bfb68e0(uVar6);
    dVar10 = 0.0;
    func_0x00010c19f0e0(0,0,param_3,uVar6);
    func_0x00010c148fc0(uVar6);
    if (dVar10 != 0.0) {
      uVar7 = uVar6;
      func_0x00010c0bc260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar7 == 0) {
        puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x00010bf20c00(uVar6);
        func_0x00010c013de0(puVar4);
        func_0x00010c1c2ca0(uVar6,param_5,puVar4);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0bc260(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(uVar7);
        _objc_release(puVar4);
      }
    }
    uVar7 = uVar6;
    func_0x00010c0bc260(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar11;
    uStack_b8 = uVar12;
    uStack_b0 = uVar14;
    uStack_a8 = uVar15;
    uStack_a0 = uVar9;
    uStack_98 = uVar13;
    func_0x00010c219960();
    _objc_release(uVar7);
    uVar7 = uVar6;
    func_0x00010c0bc260(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = 0;
    func_0x00010c1842e0(0);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_4,param_5,param_6);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_10b838918;
    puStack_e8 = &UNK_11084d788;
    _objc_retain(param_6);
    uStack_e0 = param_6;
    _objc_retain(puVar2);
    puStack_d8 = puVar2;
    _objc_retain(uVar6);
    puStack_148 = puVar4;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_10b838bf4;
    puStack_130 = &UNK_110958838;
    uStack_d0 = uVar6;
    dStack_c8 = dVar10;
    _objc_retain(puVar2);
    puStack_128 = puVar2;
    _objc_retain(param_6);
    uStack_120 = param_6;
    _objc_retain(uVar3);
    uStack_118 = uVar3;
    _objc_retain(uVar5);
    uStack_110 = uVar5;
    _objc_retain(uVar6);
    uStack_108 = uVar6;
    func_0x00010bf03420(uVar11,puVar1,param_5,&puStack_100,&puStack_148);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    _objc_release(puStack_128);
    _objc_release(uStack_d0);
    _objc_release(puStack_d8);
    _objc_release(uStack_e0);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  return;
}



/* Entry: 10b838918; end: 10b838a87;  */

void FUN_10b838918(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d3;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
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
  
  iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c075b60();
  if (iVar3 != 0) {
    func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_2,3);
  }
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(&uStack_80,0,in_d3,&uStack_b0);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_b0);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10b838a88;
  puStack_c8 = &UNK_110848c48;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uStack_b8 = *(undefined8 *)(param_1 + 0x38);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10b838be8;
  puStack_f0 = &UNK_110841f20;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_c0 = uVar5;
  _objc_retain(uVar4);
  uStack_e8 = uVar4;
  func_0x00010bf02ee0(0,0,puVar2,param_2,0,&puStack_e0,&puStack_108);
  _objc_release(uStack_e8);
  _objc_release(uStack_c0);
  return;
}



/* Entry: 10b838a88; end: 10b838be7;  */

void FUN_10b838a88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10b838b20;
  puStack_48 = &UNK_110848c48;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bef95a0(0,0x3fb999999999999a,puVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10b838be8; end: 10b838bf3;  */

void FUN_10b838be8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c2cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setMaskView__11264e550,0);
  return;
}



/* Entry: 10b838bf4; end: 10b838c7b;  */

void FUN_10b838bf4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c27ac00();
  if (iVar1 == 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x30));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = uVar3;
  func_0x00010c27ac00(uVar3);
  func_0x00010bf43bc0(uVar3,param_2,(uint)uVar2 ^ 1);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x40),param_2,&uStack_50);
  return;
}



/* Entry: 10b838c7c; end: 10b838cc3; -[SIGCardFullscreenPresentationTransition initWithAnimationDuration:] */

void FUN_10b838c7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b410;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 10b838cc4; end: 10b838ccf; -[SIGCardFullscreenPresentationTransition init] */

void FUN_10b838cc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff2f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd3333333333333,param_1,PTR_s_initWithAnimationDuration__1125da590);
  return;
}



/* Entry: 10b838cd0; end: 10b838cd7; -[SIGCardFullscreenPresentationTransition transitionDuration:] */

undefined8 FUN_10b838cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b838cd8; end: 10b839153; -[SIGCardFullscreenPresentationTransition animateTransition:] */

void FUN_10b838cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  ulong uStack_108;
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
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_6,puVar4);
  _objc_release(puVar4);
  func_0x00010c1677c0(0,puVar3);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar7 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar13 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar12 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dVar8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_a0 = uVar7;
  uStack_98 = uVar10;
  uStack_90 = uVar12;
  uStack_88 = uVar13;
  dStack_80 = dVar8;
  uStack_78 = uVar11;
  func_0x00010c219960(uVar5,param_6,&uStack_a0);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,uVar5);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010c06c000();
  if ((uVar2 & 1) == 0) {
    func_0x00010c12c960(puVar3);
    func_0x00010bf43bc0(param_7,param_6,1);
  }
  else {
    uVar2 = param_7;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uStack_d0 = uVar7;
    uStack_c8 = uVar10;
    uStack_c0 = uVar12;
    uStack_b8 = uVar13;
    dStack_b0 = dVar8;
    uStack_a8 = uVar11;
    _CGAffineTransformTranslate(&uStack_a0,0,param_4,&uStack_d0);
    _objc_release(uVar2);
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    dStack_b0 = dStack_80;
    dVar9 = dStack_80;
    func_0x00010c219960(uVar5,param_6,&uStack_d0);
    func_0x00010c148fc0(uVar5);
    if (dVar9 != 0.0) {
      uVar2 = uVar5;
      func_0x00010c0bc260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 == 0) {
        puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x00010bf20c00(uVar5);
        func_0x00010c013de0(puVar4);
        func_0x00010c1c2ca0(uVar5,param_6,puVar4);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010c0bc260(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(uVar2);
        _objc_release(puVar4);
      }
    }
    uVar2 = uVar5;
    func_0x00010c0bc260(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uStack_d0 = uVar7;
    uStack_c8 = uVar10;
    uStack_c0 = uVar12;
    uStack_b8 = uVar13;
    dStack_b0 = dVar8;
    uStack_a8 = uVar11;
    _CGAffineTransformTranslate(&uStack_100,0,dVar9,&uStack_d0);
    uVar2 = uVar5;
    func_0x00010c0bc260(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uStack_f8;
    uStack_d0 = uStack_100;
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    uStack_a8 = uStack_d8;
    dStack_b0 = (double)uStack_e0;
    func_0x00010c219960();
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar7 = uStack_e0;
    func_0x00010c27a940(param_5,param_6,param_7);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_10b839154;
    puStack_120 = &UNK_110848ba8;
    _objc_retain(param_7);
    uStack_118 = param_7;
    _objc_retain(puVar3);
    puStack_110 = puVar3;
    _objc_retain(uVar5);
    puStack_170 = puVar4;
    uStack_168 = 0xc2000000;
    uStack_160 = 0x10b83923c;
    puStack_158 = &UNK_1108500c8;
    uStack_108 = uVar5;
    _objc_retain(uVar5);
    uStack_150 = uVar5;
    _objc_retain(puVar3);
    puStack_148 = puVar3;
    _objc_retain(param_7);
    uStack_140 = param_7;
    func_0x00010bf03420(uVar7,puVar1,param_6,&puStack_138,&puStack_170);
    _objc_release(uStack_140);
    _objc_release(puStack_148);
    _objc_release(uStack_150);
    _objc_release(uStack_108);
    _objc_release(puStack_110);
    _objc_release(uStack_118);
  }
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(param_7);
  return;
}



/* Entry: 10b839154; end: 10b8392a3;  */

void FUN_10b839154(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c075b60();
  if (iVar1 != 0) {
    func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_2,3);
  }
  func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_50 = uVar3;
  uStack_48 = uVar5;
  uStack_40 = uVar7;
  uStack_38 = uVar8;
  uStack_30 = uVar4;
  uStack_28 = uVar6;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0bc260(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = uVar3;
  uStack_48 = uVar5;
  uStack_40 = uVar7;
  uStack_38 = uVar8;
  uStack_30 = uVar4;
  uStack_28 = uVar6;
  func_0x00010c219960();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0bc260(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 10b8392a4; end: 10b8392ab; -[SIGCardFullscreenTransition setExperimentalGestureCancelRecoveryEnabled:] */

void FUN_10b8392a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c198b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setExperimentalGestureCancelReco_112643ce8);
  return;
}



/* Entry: 10b8392ac; end: 10b8392b3; -[SIGCardFullscreenTransition experimentalGestureCancelRecoveryEnabled] */

void FUN_10b8392ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9c5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_experimentalGestureCancelRecover_1125c4b20);
  return;
}



/* Entry: 10b8392b4; end: 10b839347; -[SIGCardFullscreenTransition init] */

undefined1 * FUN_10b8392b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b418;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126e16f0;
    _objc_alloc();
    puVar3 = PTR_PTR_1126e16e0;
    _objc_alloc_init(PTR_PTR_1126e16e0);
    func_0x00010c017980();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b839348; end: 10b83934f; -[SIGCardFullscreenTransition setCardTransitionDelegate:] */

void FUN_10b839348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1797d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCardTransitionDelegate__11263c010);
  return;
}



/* Entry: 10b839350; end: 10b839357; -[SIGCardFullscreenTransition cardTransitionDelegate] */

void FUN_10b839350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf31fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cardTransitionDelegate_1125aa198);
  return;
}



/* Entry: 10b839358; end: 10b83935f; -[SIGCardFullscreenTransition installSwipeToDismissGestureRecognizerOnViews:] */

void FUN_10b839358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_installSwipeToDismissGestureReco_1125f7898);
  return;
}



/* Entry: 10b839360; end: 10b8393eb; -[SIGCardFullscreenTransition animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_10b839360(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010bf03ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126df6e0;
  if (lVar1 == 0) {
    _objc_opt_new(PTR_PTR_1126df6e0);
  }
  else {
    _objc_alloc();
    func_0x00010bf03ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010bff2f20(puVar2);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b8393ec; end: 10b839477; -[SIGCardFullscreenTransition animationControllerForDismissedController:] */

void FUN_10b8393ec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010bf03ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126df6f0;
  if (lVar1 == 0) {
    _objc_opt_new(PTR_PTR_1126df6f0);
  }
  else {
    _objc_alloc();
    func_0x00010bf03ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010bff2f20(puVar2);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b839478; end: 10b83947f; -[SIGCardFullscreenTransition interactionControllerForDismissal:] */

void FUN_10b839478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dismissalTransition_1125bed88);
  return;
}



/* Entry: 10b839480; end: 10b839487; -[SIGCardFullscreenTransition animationDuration] */

undefined8 FUN_10b839480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b839488; end: 10b8394b7; -[SIGCardFullscreenTransition setAnimationDuration:] */

void FUN_10b839488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8394b8; end: 10b8394bf; -[SIGCardFullscreenTransition fractionalPresentationHeight] */

undefined8 FUN_10b8394b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b8394c0; end: 10b8394c7; -[SIGCardFullscreenTransition setFractionalPresentationHeight:] */

void FUN_10b8394c0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10b8394c8; end: 10b8394f7; -[SIGCardFullscreenTransition .cxx_destruct] */

void FUN_10b8394c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b8394f8; end: 10b8394ff; -[SIGCardHorizontalDismissTransition init] */

void FUN_10b8394f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c040190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithReversed__1125eda60,0);
  return;
}



/* Entry: 10b839500; end: 10b839547; -[SIGCardHorizontalDismissTransition initWithReversed:] */

void FUN_10b839500(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b420;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b839548; end: 10b839553; -[SIGCardHorizontalDismissTransition transitionDuration:] */

undefined8 FUN_10b839548(void)

{
  return 0x3fc3333333333333;
}



/* Entry: 10b839554; end: 10b839873; -[SIGCardHorizontalDismissTransition animateTransition:] */

void FUN_10b839554(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_6);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar4 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_5,puVar5);
  _objc_release(puVar5);
  func_0x00010c1677c0(0x3fe0000000000000,puVar3);
  uVar4 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(uVar4);
  uVar4 = param_6;
  func_0x00010c29ce60(param_6,param_5,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(uVar7);
  uVar7 = param_6;
  func_0x00010c29ce60(param_6,param_5,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_6;
  func_0x00010c06c000();
  if ((uVar8 & 1) == 0) {
    func_0x00010c12c960(puVar3);
    func_0x00010bf43bc0(param_6,param_5,1);
  }
  else {
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(uVar7,param_5,&uStack_a0);
    func_0x00010bfb68e0(uVar7);
    func_0x00010bfb68e0(uVar7);
    uVar9 = 0;
    func_0x00010c19f0e0(0,0,param_3,uVar7);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar1 = *(undefined1 *)(param_4 + 8);
    func_0x00010c27a940(param_4,param_5,param_6);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10b839874;
    puStack_c8 = &UNK_110858b70;
    _objc_retain(param_6);
    uStack_c0 = param_6;
    _objc_retain(puVar3);
    puStack_b8 = puVar3;
    uStack_a8 = uVar1;
    _objc_retain(uVar7);
    puStack_128 = puVar5;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_10b839948;
    puStack_110 = &UNK_110958838;
    uStack_b0 = uVar7;
    _objc_retain(puVar3);
    puStack_108 = puVar3;
    _objc_retain(param_6);
    uStack_100 = param_6;
    _objc_retain(uVar4);
    uStack_f8 = uVar4;
    _objc_retain(uVar6);
    uStack_f0 = uVar6;
    _objc_retain(uVar7);
    uStack_e8 = uVar7;
    func_0x00010bf03420(uVar9,puVar2,param_5,&puStack_e0,&puStack_128);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(puStack_108);
    _objc_release(uStack_b0);
    _objc_release(puStack_b8);
    _objc_release(uStack_c0);
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(param_6);
  return;
}



/* Entry: 10b839874; end: 10b839947;  */

void FUN_10b839874(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
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
  
  iVar2 = (int)*(undefined8 *)(param_4 + 0x20);
  func_0x00010c075b60();
  if (iVar2 != 0) {
    func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_5,3);
  }
  func_0x00010c1677c0(0,*(undefined8 *)(param_4 + 0x28));
  cVar1 = *(char *)(param_4 + 0x38);
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar4 = -param_3;
  if (cVar1 == '\0') {
    dVar4 = param_3;
  }
  _objc_release(uVar3);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(&uStack_70,dVar4,0,&uStack_a0);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960(*(undefined8 *)(param_4 + 0x30),param_5,&uStack_a0);
  return;
}



/* Entry: 10b839948; end: 10b8399cf;  */

void FUN_10b839948(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c27ac00();
  if (iVar1 == 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x30));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = uVar3;
  func_0x00010c27ac00(uVar3);
  func_0x00010bf43bc0(uVar3,param_2,(uint)uVar2 ^ 1);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x40),param_2,&uStack_50);
  return;
}



/* Entry: 10b8399d0; end: 10b8399db; -[SIGCardHorizontalPresentationTransition transitionDuration:] */

undefined8 FUN_10b8399d0(void)

{
  return 0x3fd3333333333333;
}



/* Entry: 10b8399dc; end: 10b839d0f; -[SIGCardHorizontalPresentationTransition animateTransition:] */

void FUN_10b8399dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
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
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_6,puVar4);
  _objc_release(puVar4);
  func_0x00010c1677c0(0,puVar3);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar6 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar10;
  uStack_88 = uVar11;
  uStack_80 = uVar7;
  uStack_78 = uVar9;
  func_0x00010c219960(uVar5,param_6,&uStack_a0);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,uVar5);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010c06c000();
  if ((uVar2 & 1) == 0) {
    func_0x00010c12c960(puVar3);
    func_0x00010bf43bc0(param_7,param_6,1);
  }
  else {
    uVar2 = param_7;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uStack_d0 = uVar6;
    uStack_c8 = uVar8;
    uStack_c0 = uVar10;
    uStack_b8 = uVar11;
    uStack_b0 = uVar7;
    uStack_a8 = uVar9;
    _CGAffineTransformTranslate(&uStack_a0,param_3,0,&uStack_d0);
    _objc_release(uVar2);
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uVar6 = uStack_80;
    func_0x00010c219960(uVar5,param_6,&uStack_d0);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_5,param_6,param_7);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_10b839d10;
    puStack_f0 = &UNK_110848ba8;
    _objc_retain(param_7);
    uStack_e8 = param_7;
    _objc_retain(puVar3);
    puStack_e0 = puVar3;
    _objc_retain(uVar5);
    puStack_138 = puVar4;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x10b839d80;
    puStack_120 = &UNK_110848bd8;
    uStack_d8 = uVar5;
    _objc_retain(puVar3);
    puStack_118 = puVar3;
    _objc_retain(param_7);
    uStack_110 = param_7;
    func_0x00010bf03420(uVar6,puVar1,param_6,&puStack_108,&puStack_138);
    _objc_release(uStack_110);
    _objc_release(puStack_118);
    _objc_release(uStack_d8);
    _objc_release(puStack_e0);
    _objc_release(uStack_e8);
  }
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(param_7);
  return;
}



/* Entry: 10b839d10; end: 10b839db7;  */

void FUN_10b839d10(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c075b60();
  if (iVar1 != 0) {
    func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_2,3);
  }
  func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + 0x28));
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_50);
  return;
}



/* Entry: 10b839db8; end: 10b839e57; -[SIGCardHorizontalTransition init] */

undefined1 * FUN_10b839db8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b428;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126e16f0;
    _objc_alloc();
    puVar3 = PTR_PTR_1126e1708;
    _objc_alloc_init(PTR_PTR_1126e1708);
    func_0x00010c017980();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c18f540(*(undefined8 *)((long)puVar1 + 8));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b839e58; end: 10b839e5f; -[SIGCardHorizontalTransition setCardTransitionDelegate:] */

void FUN_10b839e58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1797d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCardTransitionDelegate__11263c010);
  return;
}



/* Entry: 10b839e60; end: 10b839e67; -[SIGCardHorizontalTransition cardTransitionDelegate] */

void FUN_10b839e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf31fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cardTransitionDelegate_1125aa198);
  return;
}



/* Entry: 10b839e68; end: 10b839e6f; -[SIGCardHorizontalTransition setExperimentalGestureCancelRecoveryEnabled:] */

void FUN_10b839e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c198b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setExperimentalGestureCancelReco_112643ce8);
  return;
}



/* Entry: 10b839e70; end: 10b839e77; -[SIGCardHorizontalTransition experimentalGestureCancelRecoveryEnabled] */

void FUN_10b839e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9c5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_experimentalGestureCancelRecover_1125c4b20);
  return;
}



/* Entry: 10b839e78; end: 10b839e7f; -[SIGCardHorizontalTransition installSwipeToDismissGestureRecognizerOnViews:] */

void FUN_10b839e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_installSwipeToDismissGestureReco_1125f7898);
  return;
}



/* Entry: 10b839e80; end: 10b839e9b; -[SIGCardHorizontalTransition animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_10b839e80(void)

{
  _objc_opt_new(PTR_PTR_1126df6e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b839e9c; end: 10b839eb7; -[SIGCardHorizontalTransition animationControllerForDismissedController:] */

void FUN_10b839e9c(void)

{
  _objc_opt_new(PTR_PTR_1126df6f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b839eb8; end: 10b839ebf; -[SIGCardHorizontalTransition interactionControllerForDismissal:] */

void FUN_10b839eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dismissalTransition_1125bed88);
  return;
}



/* Entry: 10b839ec0; end: 10b839ec7; -[SIGCardHorizontalTransition animationDuration] */

undefined8 FUN_10b839ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b839ec8; end: 10b839ef7; -[SIGCardHorizontalTransition setAnimationDuration:] */

void FUN_10b839ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b839ef8; end: 10b839eff; -[SIGCardHorizontalTransition fractionalPresentationHeight] */

undefined8 FUN_10b839ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b839f00; end: 10b839f07; -[SIGCardHorizontalTransition setFractionalPresentationHeight:] */

void FUN_10b839f00(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10b839f08; end: 10b839f37; -[SIGCardHorizontalTransition .cxx_destruct] */

void FUN_10b839f08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b839f38; end: 10b839fcf; -[SIGCardGestureAggregator initWithGestureHandler:] */

undefined1 * FUN_10b839f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270b430;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b839fd0; end: 10b839fdb; -[SIGCardGestureAggregator setExperimentalGestureCancelRecoveryEnabled:] */

void FUN_10b839fd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c198b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setExperimentalGestureCancelReco_112643ce8);
  return;
}



/* Entry: 10b839fdc; end: 10b839fe3; -[SIGCardGestureAggregator setCardTransitionDelegate:] */

void FUN_10b839fdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1797d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCardTransitionDelegate__11263c010);
  return;
}



/* Entry: 10b839fe4; end: 10b839feb; -[SIGCardGestureAggregator cardTransitionDelegate] */

void FUN_10b839fe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf31fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cardTransitionDelegate_1125aa198);
  return;
}



/* Entry: 10b839fec; end: 10b83a01f; -[SIGCardGestureAggregator dismissalTransition] */

void FUN_10b839fec(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010bf84f80(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b83a020; end: 10b83a1a7; -[SIGCardGestureAggregator installSwipeToDismissGestureRecognizerOnViews:] */

void FUN_10b83a020(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar11 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_5);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
        func_0x00010c050900();
        func_0x00010c1ec5c0();
        func_0x00010c178280(puVar2,param_4,0);
        func_0x00010c18b5a0(puVar2,param_4,0);
        func_0x00010c18b5c0(puVar2,param_4,0);
        func_0x00010c18b5e0(puVar2,param_4,param_3);
        func_0x00010c1c3c20(puVar2,param_4,1);
        func_0x00010bef9040(uVar8,param_4,puVar2);
        func_0x00010befa120(*(undefined8 *)(param_3 + 0x10),param_4,puVar2);
        _objc_release(puVar2);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_5;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar5 = (undefined1 *)puVar6;
  if (*(long *)(param_5 + 0x20) == 1) {
    puVar3 = (undefined1 *)puVar6;
    func_0x00010c29bf00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(puVar6,param_4,puVar4);
    unaff_d9 = uVar11;
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c29bf00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(puVar6,param_4,puVar3);
LAB_10b83a2d0:
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  else {
    uVar11 = unaff_d8;
    if (*(long *)(param_5 + 0x20) == 0) {
      puVar3 = (undefined1 *)puVar6;
      func_0x00010c29bf00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(puVar6,param_4,puVar4);
      unaff_d9 = param_2;
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c29bf00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(puVar6,param_4,puVar3);
      uVar11 = param_2;
      goto LAB_10b83a2d0;
    }
  }
  puVar5 = (undefined1 *)puVar6;
  func_0x00010c252440();
  if ((long)puVar5 < 3) {
    puVar3 = (undefined1 *)puVar6;
    if (puVar5 == (undefined1 *)0x1) {
      *(undefined1 *)(param_5 + 0x18) = 1;
      uVar8 = *(undefined8 *)(param_5 + 8);
      func_0x00010c29bf00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24f060(uVar11,unaff_d9,uVar8,param_4,puVar3);
    }
    else {
      if (puVar5 != (undefined1 *)0x2) goto LAB_10b83a40c;
      uVar8 = *(undefined8 *)(param_5 + 8);
      func_0x00010c29bf00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2869a0(uVar11,unaff_d9,uVar8,param_4,puVar3);
    }
    _objc_release(puVar3);
  }
  else {
    puVar3 = (undefined1 *)puVar6;
    if (puVar5 == (undefined1 *)0x3) {
      uVar8 = *(undefined8 *)(param_5 + 8);
      func_0x00010c29bf00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0;
    }
    else {
      if ((puVar5 != (undefined1 *)0x4) &&
         (((puVar5 != (undefined1 *)0x5 || (*(char *)(param_5 + 0x18) != '\x01')) ||
          (*(char *)(param_5 + 0x19) != '\x01')))) goto LAB_10b83a40c;
      uVar8 = *(undefined8 *)(param_5 + 8);
      func_0x00010c29bf00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 1;
    }
    func_0x00010bf94b00(uVar11,unaff_d9,uVar8,param_4,puVar3,uVar7);
    _objc_release(puVar3);
    *(undefined1 *)(param_5 + 0x18) = 0;
  }
LAB_10b83a40c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10b83a1a8; end: 10b83a423; -[SIGCardGestureAggregator _pullGestureUpdated:] */

void FUN_10b83a1a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  _objc_retain(param_5);
  lVar3 = param_5;
  if (*(long *)(param_3 + 0x20) == 1) {
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_5,param_4,lVar2);
    unaff_d9 = param_1;
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_5,param_4,lVar1);
LAB_10b83a2d0:
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  else {
    param_1 = unaff_d8;
    if (*(long *)(param_3 + 0x20) == 0) {
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(param_5,param_4,lVar2);
      unaff_d9 = param_2;
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(param_5,param_4,lVar1);
      param_1 = param_2;
      goto LAB_10b83a2d0;
    }
  }
  lVar3 = param_5;
  func_0x00010c252440();
  if (lVar3 < 3) {
    lVar1 = param_5;
    if (lVar3 == 1) {
      *(undefined1 *)(param_3 + 0x18) = 1;
      uVar5 = *(undefined8 *)(param_3 + 8);
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24f060(param_1,unaff_d9,uVar5,param_4,lVar1);
    }
    else {
      if (lVar3 != 2) goto LAB_10b83a40c;
      uVar5 = *(undefined8 *)(param_3 + 8);
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2869a0(param_1,unaff_d9,uVar5,param_4,lVar1);
    }
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_5;
    if (lVar3 == 3) {
      uVar5 = *(undefined8 *)(param_3 + 8);
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0;
    }
    else {
      if ((lVar3 != 4) &&
         (((lVar3 != 5 || (*(char *)(param_3 + 0x18) != '\x01')) ||
          (*(char *)(param_3 + 0x19) != '\x01')))) goto LAB_10b83a40c;
      uVar5 = *(undefined8 *)(param_3 + 8);
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 1;
    }
    func_0x00010bf94b00(param_1,unaff_d9,uVar5,param_4,lVar1,uVar4);
    _objc_release(lVar1);
    *(undefined1 *)(param_3 + 0x18) = 0;
  }
LAB_10b83a40c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b83a424; end: 10b83a5af; -[SIGCardGestureAggregator gestureRecognizerShouldBegin:] */

undefined8
FUN_10b83a424(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar1 == 0) || ((*(byte *)(param_3 + 0x18) & 1) != 0)) {
LAB_10b83a528:
    uVar5 = 0;
  }
  else {
    uVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_5);
    dVar6 = param_1;
    dVar7 = param_2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5);
    _objc_release(uVar3);
    if (*(long *)(param_3 + 0x20) == 1) {
      uVar5 = 0;
      if ((param_1 <= 0.0) || (param_1 <= ABS(param_2))) goto LAB_10b83a52c;
    }
    else {
      if (*(long *)(param_3 + 0x20) != 0) goto LAB_10b83a528;
      uVar5 = 0;
      if ((param_2 <= 0.0) || (param_2 <= ABS(param_1))) goto LAB_10b83a52c;
    }
    uVar5 = *(undefined8 *)(param_3 + 8);
    uVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22dce0(dVar6,dVar7,uVar5);
    _objc_release(uVar3);
  }
LAB_10b83a52c:
  _objc_release(uVar1);
  _objc_release(param_5);
  return uVar5;
}



/* Entry: 10b83a5b0; end: 10b83a5b7; -[SIGCardGestureAggregator gestureRecognizer:shouldReceivePress:] */

undefined8 FUN_10b83a5b0(void)

{
  return 0;
}



/* Entry: 10b83a5b8; end: 10b83a5bf; -[SIGCardGestureAggregator gestureRecognizer:shouldReceiveTouch:] */

undefined8 FUN_10b83a5b8(void)

{
  return 1;
}



/* Entry: 10b83a5c0; end: 10b83a5c7; -[SIGCardGestureAggregator gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_10b83a5c0(void)

{
  return 0;
}



/* Entry: 10b83a5c8; end: 10b83a5cf; -[SIGCardGestureAggregator gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_10b83a5c8(void)

{
  return 0;
}



/* Entry: 10b83a5d0; end: 10b83a5ef; -[SIGCardGestureAggregator gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_10b83a5d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_4);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10b83a5f0; end: 10b83a5f7; -[SIGCardGestureAggregator dismissDirection] */

undefined8 FUN_10b83a5f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b83a5f8; end: 10b83a5ff; -[SIGCardGestureAggregator setDismissDirection:] */

void FUN_10b83a5f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b83a600; end: 10b83a607; -[SIGCardGestureAggregator experimentalGestureCancelRecoveryEnabled] */

undefined1 FUN_10b83a600(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 10b83a608; end: 10b83a637; -[SIGCardGestureAggregator .cxx_destruct] */

void FUN_10b83a608(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b83a638; end: 10b83a65b; +[SIGCell standardCell] */

void FUN_10b83a638(void)

{
  _objc_alloc(PTR_PTR_1126b50b8);
  func_0x00010c04ea80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b83a65c; end: 10b83a6cb; +[SIGCell standardCellWithAvatar] */

void FUN_10b83a65c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50b8;
  _objc_alloc(PTR_PTR_1126b50b8);
  func_0x00010c04ea80();
  puVar2 = PTR_PTR_1126e1688;
  _objc_alloc(PTR_PTR_1126e1688);
  func_0x00010c013de0(0,0,0x4041000000000000,0x4041000000000000);
  func_0x00010c1b9fe0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b83a6cc; end: 10b83a6ef; +[SIGCell compressedCell] */

void FUN_10b83a6cc(void)

{
  _objc_alloc(PTR_PTR_1126b50b8);
  func_0x00010c04ea80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b83a6f0; end: 10b83a75f; +[SIGCell compressedCellWithAvatar] */

void FUN_10b83a6f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50b8;
  _objc_alloc(PTR_PTR_1126b50b8);
  func_0x00010c04ea80();
  puVar2 = PTR_PTR_1126e1688;
  _objc_alloc(PTR_PTR_1126e1688);
  func_0x00010c013de0(0,0,0x4041000000000000,0x4041000000000000);
  func_0x00010c1b9fe0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b83a760; end: 10b83a783; +[SIGCell tallCell] */

void FUN_10b83a760(void)

{
  _objc_alloc(PTR_PTR_1126b50b8);
  func_0x00010c04ea80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b83a784; end: 10b83a7f3; +[SIGCell tallCellWithAvatar] */

void FUN_10b83a784(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50b8;
  _objc_alloc(PTR_PTR_1126b50b8);
  func_0x00010c04ea80();
  puVar2 = PTR_PTR_1126e1688;
  _objc_alloc(PTR_PTR_1126e1688);
  func_0x00010c013de0(0,0,0x4049000000000000,0x4049000000000000);
  func_0x00010c1b9fe0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b83a7f4; end: 10b83a817; +[SIGCell heightForCellWithStyle:] */

undefined8 FUN_10b83a7f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 9) {
    return *(undefined8 *)(&UNK_10e5f3158 + param_3 * 8);
  }
  return 0x4052000000000000;
}



/* Entry: 10b83a818; end: 10b83a837; +[SIGCell defaultEdgeInsetsDynamicTypeEnabled:] */

void FUN_10b83a818(void)

{
  return;
}



/* Entry: 10b83a838; end: 10b83a9cb; -[SIGCell initWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b83a838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_11270b438;
  uVar7 = 0x4050800000000000;
  uVar8 = 0x4049000000000000;
  uVar5 = 0;
  uVar6 = 0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + (long)_DAT_112794700) = param_3;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112794704);
    func_0x00010bf69400(PTR_PTR_1126b50b8);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794708);
    *(undefined **)((long)puVar2 + (long)_DAT_112794708) = puVar3;
    _objc_release(uVar5);
    func_0x00010bef9680(puVar2);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c1c3ae0(0x4035000000000000);
    func_0x00010c219b60(puVar3);
    func_0x00010c181cc0(0x443b8000,puVar3);
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_11279470c);
    *(undefined **)((long)puVar2 + (long)_DAT_11279470c) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar5);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112794710) = 0;
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794714);
    *(undefined **)((long)puVar2 + (long)_DAT_112794714) = puVar4;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112794718) = 1;
    func_0x00010bec5b40(puVar2);
    func_0x00010befbb60(puVar2);
    _objc_release(puVar3);
    func_0x00010beaab80(puVar2);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10b83a9cc; end: 10b83ac8f; -[SIGCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83a9cc(double param_1,undefined8 param_2,double param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  puVar3 = PTR_s_layoutSubviews_112600e60;
  puStack_78 = PTR_PTR_11270b438;
  lStack_80 = param_4;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  lVar4 = (long)_DAT_112794720;
  cVar1 = *(char *)(param_4 + _DAT_11279471c);
  dVar13 = *(double *)(param_4 + lVar4);
  lVar11 = (long)_DAT_112794724;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar11));
  if (cVar1 == '\x01') {
    if (dVar13 != param_3) {
      func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar11));
      *(double *)(param_4 + lVar4) = param_3;
      func_0x00010be929c0(param_4);
    }
    lVar4 = param_4;
    func_0x00010bfab8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_112794728;
    iVar9 = (int)*(undefined8 *)(param_4 + lVar10);
    lVar11 = lVar4;
    func_0x00010c1069c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar11);
    lVar11 = lVar4;
    func_0x00010c1069c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_4 + lVar10);
    *(long *)(param_4 + lVar10) = lVar11;
    _objc_release(uVar8);
    if ((iVar9 == 0) || (*(char *)(param_4 + _DAT_11279472c) == '\x01')) {
      func_0x00010c08cd20(*(undefined8 *)(param_4 + _DAT_112794708));
      lVar12 = (long)_DAT_112794730;
      puVar5 = PTR_PTR_1126b50b8;
      func_0x00010c0875e0();
      lVar11 = (long)_DAT_112794734;
      func_0x00010c2a5140(PTR_PTR_1126b50b8);
      param_3 = param_3 - param_1;
      puVar6 = PTR_PTR_1126b50b8;
      func_0x00010c08df00();
      lVar10 = (long)_DAT_11279470c;
      if (((int)puVar5 != 0) && ((int)puVar6 == 0)) {
        puVar6 = PTR_PTR_1126b50b8;
        func_0x00010c0875e0();
        puVar7 = PTR_PTR_1126b50b8;
        func_0x00010c0875e0();
        puVar5 = PTR_PTR_1126b50b8;
        uVar2 = (uint)puVar6 | (uint)puVar7;
        if ((uVar2 & 1) == 0) {
          if (*(long *)(param_4 + lVar11) != 0) {
            param_3 = param_3 + -8.0;
          }
        }
        else {
          param_3 = param_3 + -8.0;
        }
        dVar13 = param_3 - (double)(long)(param_3 * 0.3);
        if ((uVar2 & 1) == 0) {
          dVar13 = param_3;
        }
        uVar8 = *(undefined8 *)(param_4 + lVar12);
        func_0x00010c26b700(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dfe0(*(undefined8 *)(param_4 + lVar12));
        func_0x00010bf01dc0(dVar13,0x7fefffffffffffff,puVar5);
        param_3 = param_3 - dVar13;
        _objc_release(uVar8);
      }
      func_0x00010c1e0180(param_3,*(undefined8 *)(param_4 + lVar10));
      *(undefined1 *)(param_4 + _DAT_11279472c) = 0;
    }
    else {
      lVar11 = (long)_DAT_11279470c;
      func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar11));
      func_0x00010c1e0180(param_3,*(undefined8 *)(param_4 + lVar11));
    }
    puStack_88 = PTR_PTR_11270b438;
    lStack_90 = param_4;
    _objc_msgSendSuper2(&lStack_90,puVar3);
    _objc_release(lVar4);
  }
  else if (dVar13 != param_3) {
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar11));
    *(double *)(param_4 + lVar4) = param_3;
    func_0x00010be929c0(param_4);
  }
  return;
}



/* Entry: 10b83ac90; end: 10b83acfb; -[SIGCell invalidateTextContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83ac90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c1e0180(param_3,*(undefined8 *)(param_4 + _DAT_11279470c));
  _objc_release(puVar1);
  *(undefined1 *)(param_4 + _DAT_11279472c) = 1;
  return;
}



/* Entry: 10b83acfc; end: 10b83ad13; -[SIGCell setEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b83acfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112794704);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010beaab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__setupAutolayoutConstraints_112588488);
  return;
}


