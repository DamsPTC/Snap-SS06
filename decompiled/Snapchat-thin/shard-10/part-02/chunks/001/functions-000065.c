/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ae8590; end: 107ae86a3; -[SCAdTapToSkipLayerViewController didTapLayerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae8590(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c288220(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6008;
  func_0x00010c0ea660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b5b08;
  func_0x00010c269720(PTR_PTR_1126b5b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_11276a1cc,0);
  return;
}



/* Entry: 107ae86a4; end: 107ae86b7; -[SCAdTapToSkipLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae86a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a1cc,0);
  return;
}



/* Entry: 107ae86b8; end: 107ae8963; -[SCOperaExpandButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107ae86b8(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f9c38;
  puVar13 = &uStack_98;
  uStack_98 = param_2;
  _objc_msgSendSuper2(puVar13,PTR_s_initWithFrame__1125e2948);
  lVar3 = 0;
  if (puVar13 != (undefined8 *)0x0) {
    puVar2 = puVar13;
    FUN_107ae8b34();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11276a1d4;
    uVar14 = *(undefined8 *)((long)puVar13 + lVar15);
    *(undefined8 **)((long)puVar13 + lVar15) = puVar2;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar13 + lVar15));
    func_0x00010c21e900(*(undefined8 *)((long)puVar13 + lVar15));
    func_0x00010befbb60(puVar13);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = *(long *)((long)puVar13 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar3;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_88 = lVar16;
    uVar4 = *(undefined8 *)((long)puVar13 + lVar15);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar13;
    func_0x00010c1408a0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar4;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar14;
    uVar6 = *(undefined8 *)((long)puVar13 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010bf1ff80(puVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493c0(0xc042000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar8;
    uVar9 = *(undefined8 *)((long)puVar13 + lVar15);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar13;
    func_0x00010c08e400(puVar13);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 36.0;
    uVar11 = uVar9;
    func_0x00010bf493c0(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar14);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(lVar16);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar13;
  }
  ___stack_chk_fail();
  puStack_f8 = PTR_PTR_1126f9c38;
  lStack_100 = lVar3;
  _objc_msgSendSuper2(&lStack_100,PTR_s_layoutSubviews_112600e60);
  lVar16 = (long)_DAT_11276a1d4;
  func_0x00010bf20c00(*(undefined8 *)(lVar3 + lVar16));
  _CGRectGetHeight();
  puVar13 = *(undefined8 **)(lVar3 + lVar16);
  func_0x00010c08c0e0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
  _objc_release(puVar13);
  return puVar13;
}



/* Entry: 107ae8964; end: 107ae89eb; -[SCOperaExpandButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae8964(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9c38;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_11276a1d4;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetHeight();
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
  _objc_release(uVar1);
  return;
}



/* Entry: 107ae89ec; end: 107ae8af3; -[SCOperaExpandButton configureWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae89ec(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11276a1d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(ulong *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a1d4);
  uVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfe3320();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((uVar2 & 1) == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar4);
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae8af4; end: 107ae8b33; -[SCOperaExpandButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae8af4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a1d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a1d4,0);
  return;
}



/* Entry: 107ae8b34; end: 107ae8d3f;  */

void FUN_107ae8b34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181e40(0x4020000000000000,0x4030000000000000,0x4020000000000000,0x4030000000000000);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eac618);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1,param_2,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  dVar4 = 0.0;
  func_0x00010c1aa240(0,0x401c000000000000,0,0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bf20c00(puVar1);
  _CGRectGetHeight();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar4 * 0.5);
  _objc_release(puVar2);
  func_0x00010c1fbe00(puVar1,param_2,4);
  puVar2 = PTR_PTR_1126d6560;
  func_0x00010bf9bee0(PTR_PTR_1126d6560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ae8d40; end: 107ae8e0b;  */

void FUN_107ae8d40(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6568;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c052fe0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ae8e0c; end: 107ae8e9b;  */

void FUN_107ae8e0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6570;
  if (param_3 != 0) {
    _objc_retain();
    _objc_alloc(puVar1);
    func_0x00010c24f200(param_3);
    uVar2 = param_1;
    func_0x00010c24f260(param_3);
    uVar3 = uVar2;
    func_0x00010c24f280(param_3);
    _objc_release(param_3);
    FUN_107aeb444(param_1,param_2,uVar2,uVar3,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ae8e9c; end: 107ae8f37;  */

void FUN_107ae8e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c98a0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c27dd80(param_3);
  func_0x00010c24f200(param_3);
  _objc_release(param_3);
  func_0x00010c0689e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ae8f38; end: 107ae8f8f; -[SCAdOperaInteractiveAreaView initWithFrame:] */

undefined8 FUN_107ae8f38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x00010c050900();
  func_0x00010c033740(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 107ae8f90; end: 107ae902b; -[SCAdOperaInteractiveAreaView initWithPanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ae8f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9c40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11276a1dc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010bea8d60(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ae902c; end: 107ae90d7; -[SCAdOperaInteractiveAreaView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae902c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_3;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079a80();
  if (((uVar2 & 1) == 0) && (uVar2 = param_3, func_0x00010c082800(), (int)uVar2 != 0)) {
    lVar3 = *(long *)(param_3 + (long)_DAT_11276a1e0);
    _objc_release(uVar1);
    if (lVar3 != 0) {
      func_0x00010bf512a0(param_1,param_2,param_3,param_4,param_3);
      uVar1 = param_3;
      func_0x00010be44c20();
      if ((int)uVar1 != 0) {
        _objc_retain(param_3);
        goto LAB_107ae90c0;
      }
    }
  }
  else {
    _objc_release(uVar1);
  }
  param_3 = 0;
LAB_107ae90c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107ae90d8; end: 107ae917f; -[SCAdOperaInteractiveAreaView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae90d8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f9c40;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010be06e20(param_5);
  func_0x00010c181140(*(undefined8 *)(param_5 + _DAT_11276a1e4));
  func_0x00010c181140(-param_4,*(undefined8 *)(param_5 + _DAT_11276a1e8));
  func_0x00010c181140(-param_3,*(undefined8 *)(param_5 + _DAT_11276a1ec));
  func_0x00010c181140(param_2,*(undefined8 *)(param_5 + _DAT_11276a1f0));
  return;
}



/* Entry: 107ae9180; end: 107ae9213; -[SCAdOperaInteractiveAreaView configureWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae9180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a1e0);
  *(undefined8 *)(param_1 + _DAT_11276a1e0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c236f20(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276a1f4));
  func_0x00010bf8ef20(param_3);
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_11276a1dc));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107ae9214; end: 107ae922b; -[SCAdOperaInteractiveAreaView setDelegateViewForGestures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae9214(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_addGestureRecognizer__11259bdb8,*(undefined8 *)(param_1 + _DAT_11276a1dc)
            );
  return;
}



/* Entry: 107ae922c; end: 107ae9233; -[SCAdOperaInteractiveAreaView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107ae922c(void)

{
  return 1;
}



/* Entry: 107ae9234; end: 107ae957b; -[SCAdOperaInteractiveAreaView _setUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae9234(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + _DAT_11276a1dc),param_2,param_1);
  puVar2 = PTR_PTR_1126c9d90;
  _objc_opt_new();
  lVar8 = (long)_DAT_11276a1f4;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar2;
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar8),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar8),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8),param_2,0);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11276a1e4;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = uVar5;
  _objc_release(uVar6);
  _objc_release(lVar7);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c1408a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11276a1e8;
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = uVar5;
  _objc_release(uVar6);
  _objc_release(lVar7);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11276a1ec;
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = uVar5;
  _objc_release(uVar6);
  _objc_release(lVar7);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c08e400(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11276a1f0;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = uVar5;
  _objc_release(uVar6);
  _objc_release(lVar7);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_88 = *(undefined8 *)(param_1 + lVar9);
  uStack_80 = *(undefined8 *)(param_1 + lVar10);
  uStack_78 = *(undefined8 *)(param_1 + lVar11);
  uStack_70 = *(undefined8 *)(param_1 + lVar8);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x3b);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276a1f8);
  *(undefined **)(param_1 + _DAT_11276a1f8) = puVar2;
  _objc_release(uVar5);
  lVar8 = 0xd4;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + _DAT_11276a1fc);
  *(undefined **)(param_1 + _DAT_11276a1fc) = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar8);
  iVar1 = (int)*(undefined8 *)(lVar7 + _DAT_11276a1e0);
  func_0x00010bf8ef20();
  if (iVar1 != 0) {
    lVar9 = lVar8;
    func_0x00010c252440();
    if (lVar9 < 3) {
      if (lVar9 == 1) {
        func_0x00010be2dbc0(lVar7);
      }
      else if (lVar9 == 2) {
        func_0x00010be2dc00(lVar7);
      }
    }
    else if (lVar9 == 3) {
      func_0x00010be2dc20(lVar7);
    }
    else if (lVar9 == 4) {
      func_0x00010be2dbe0(lVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 107ae957c; end: 107ae9617; -[SCAdOperaInteractiveAreaView _didSwipe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae957c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276a1e0);
  func_0x00010bf8ef20();
  if (iVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c252440();
    if (lVar2 < 3) {
      if (lVar2 == 1) {
        func_0x00010be2dbc0(param_1);
      }
      else if (lVar2 == 2) {
        func_0x00010be2dc00(param_1);
      }
    }
    else if (lVar2 == 3) {
      func_0x00010be2dc20(param_1);
    }
    else if (lVar2 == 4) {
      func_0x00010be2dbe0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ae9618; end: 107ae972f; -[SCAdOperaInteractiveAreaView _handlePanGestureRecognizerBegan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae9618(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c09ef00(*(undefined8 *)(param_3 + _DAT_11276a1dc),param_4,param_3);
  puVar1 = PTR_PTR_1126c98a0;
  func_0x00010c0689e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11276a200;
  uVar3 = *(undefined8 *)(param_3 + lVar5);
  *(undefined **)(param_3 + lVar5) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276a204;
  uVar3 = *(undefined8 *)(param_3 + lVar4);
  *(undefined **)(param_3 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c0d18c0(param_1,param_2,*(undefined8 *)(param_3 + lVar4));
  uVar2 = *(undefined8 *)(param_3 + lVar5);
  FUN_107ae8e9c(uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_107ae8e0c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c068b20(param_3);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ae9730; end: 107ae977f; -[SCAdOperaInteractiveAreaView _handlePanGestureRecognizerChanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae9730(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a204);
  func_0x00010c09ef00(*(undefined8 *)(param_1 + _DAT_11276a1dc),param_2,param_1);
  func_0x00010bef98c0(uVar1);
  func_0x00010bee1920(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdde3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkSwipeGestureThreshold_112555290);
  return;
}



/* Entry: 107ae9780; end: 107ae9897; -[SCAdOperaInteractiveAreaView _updateSwipeLeftHintState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae9780(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar4 = (long)_DAT_11276a1e0;
  uVar1 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010bfe3700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar5 = param_1;
  _objc_release(uVar1);
  if (0.0 < param_1) {
    lVar2 = param_2;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c068c40();
    _objc_release(lVar2);
    if (lVar3 == 1) {
      func_0x00010c27adc0(*(undefined8 *)(param_2 + _DAT_11276a1dc));
      dVar6 = -dVar5;
      uVar1 = *(undefined8 *)(param_2 + lVar4);
      func_0x00010bfe3700(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar1);
      if ((bool)*(char *)(param_2 + _DAT_11276a208) != dVar5 <= dVar6) {
        *(bool *)(param_2 + _DAT_11276a208) = dVar5 <= dVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdcc650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_2,PTR_s__announceSwipeLeftHintThresholdC_112550b30,dVar5 <= dVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 107ae9898; end: 107ae9963; -[SCAdOperaInteractiveAreaView _announceSwipeLeftHintThresholdCrossed:] */

void FUN_107ae9898(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar2 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_interactiveAreaViewDidRecedeSwip_1125f7d18);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c068c20();
  }
  else {
    uVar2 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_interactiveAreaViewDidCrossSwipe_1125f7d10);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c068c00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ae9964; end: 107ae99cf; -[SCAdOperaInteractiveAreaView _handlePanGestureRecognizerEnded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae9964(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c09ef00(*(undefined8 *)(param_1 + _DAT_11276a1dc),param_2,param_1);
  puVar1 = PTR_PTR_1126c98a0;
  func_0x00010c0689e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a20c);
  *(undefined **)(param_1 + _DAT_11276a20c) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be00a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didSwipeWithSwipeRecognized__11255dc38,0);
  return;
}



/* Entry: 107ae99d0; end: 107ae99e7; -[SCAdOperaInteractiveAreaView _handlePanGestureRecognizerCancelled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae99d0(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11276a210) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2dc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePanGestureRecognizerEnded_1125690a8);
  return;
}



/* Entry: 107ae99e8; end: 107ae9bd3; -[SCAdOperaInteractiveAreaView _checkSwipeGestureThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae99e8(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  
  lVar6 = (long)_DAT_11276a1dc;
  func_0x00010c27adc0(*(undefined8 *)(param_3 + lVar6),param_4,param_3);
  dVar10 = param_1;
  uVar9 = param_2;
  func_0x00010c297a00(*(undefined8 *)(param_3 + lVar6),param_4,param_3);
  lVar1 = param_3;
  func_0x00010bec92e0(param_3,param_4,*(undefined8 *)(param_3 + lVar6));
  lVar6 = param_3;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c068c40();
  _objc_release(lVar6);
  if (lVar1 != lVar2) {
    return;
  }
  lVar6 = param_3;
  func_0x00010bebeb00(dVar10,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010be05380(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0 && lVar2 != 0) {
    lVar7 = (long)_DAT_11276a214;
    if ((*(byte *)(param_3 + lVar7) & 1) == 0) {
      func_0x00010bfb2c80(lVar2);
      fVar8 = SUB84(param_1,0);
      func_0x00010bf87020(*(undefined8 *)(param_3 + _DAT_11276a1e0));
      bVar5 = (double)fVar8 < param_1;
    }
    else {
      bVar5 = true;
    }
    *(bool *)(param_3 + lVar7) = bVar5;
    func_0x00010bfb2c80(lVar6);
    fVar8 = SUB84(param_1,0);
    lVar7 = (long)_DAT_11276a1e0;
    func_0x00010c297a40(*(undefined8 *)(param_3 + lVar7));
    if (param_1 <= (double)fVar8) {
      func_0x00010bfb2c80(lVar2);
      fVar8 = SUB84(param_1,0);
      func_0x00010bf87020(*(undefined8 *)(param_3 + lVar7));
      if (param_1 <= (double)fVar8) {
        if (lVar1 != 1) {
          if (lVar1 != 0) goto LAB_107ae9bac;
          uVar3 = param_3 + _DAT_11276a218;
          _objc_loadWeakRetained();
          uVar4 = uVar3;
          func_0x00010c083480();
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) goto LAB_107ae9bac;
        }
        fVar8 = SUB84(param_1,0);
        func_0x00010bfb2c80(lVar6);
        dVar10 = (double)fVar8;
        func_0x00010bfb2c80(lVar2);
        func_0x00010be31800(dVar10,(double)fVar8,param_3);
      }
    }
  }
LAB_107ae9bac:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 107ae9bd4; end: 107ae9c47; -[SCAdOperaInteractiveAreaView _handleSwipeRecognizedWithSpeed:distance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae9bd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c09ef00(*(undefined8 *)(param_1 + _DAT_11276a1dc),param_2,param_1);
  puVar1 = PTR_PTR_1126c98a0;
  func_0x00010c0689e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a20c);
  *(undefined **)(param_1 + _DAT_11276a20c) = puVar1;
  _objc_release(uVar2);
  func_0x00010be93620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be00a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didSwipeWithSwipeRecognized__11255dc38,1);
  return;
}



/* Entry: 107ae9c48; end: 107ae9c9f; -[SCAdOperaInteractiveAreaView _resetPanGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae9c48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_11276a210;
  *(undefined1 *)(param_1 + lVar1) = 1;
  lVar2 = (long)_DAT_11276a1dc;
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar2),param_2,0);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar2),param_2,1);
  *(undefined1 *)(param_1 + lVar1) = 0;
  return;
}



/* Entry: 107ae9ca0; end: 107aea117; -[SCAdOperaInteractiveAreaView _didSwipeWithSwipeRecognized:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ae9ca0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  uint param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar2 = param_3;
  func_0x00010be42780();
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar12 = (long)_DAT_11276a200;
  func_0x00010c24f200(*(undefined8 *)(param_3 + lVar12));
  func_0x00010bf51200(param_3);
  uVar2 = param_3;
  func_0x00010be44c20();
  lVar10 = (long)_DAT_11276a1dc;
  func_0x00010c297a00(*(undefined8 *)(param_3 + lVar10));
  uVar3 = param_3;
  func_0x00010bebeb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(*(undefined8 *)(param_3 + lVar10));
  uVar4 = param_3;
  func_0x00010be05380();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d6578;
  _objc_alloc(PTR_PTR_1126d6578);
  uVar1 = param_5 & (uint)uVar2;
  func_0x00010c0688e0(*(undefined8 *)(param_3 + lVar12));
  lVar13 = (long)_DAT_11276a20c;
  uVar6 = param_1;
  func_0x00010c0688e0(*(undefined8 *)(param_3 + lVar13));
  uVar14 = uVar6;
  func_0x00010c24f200(*(undefined8 *)(param_3 + lVar12));
  uVar15 = uVar14;
  uVar18 = param_2;
  func_0x00010c24f260(*(undefined8 *)(param_3 + lVar12));
  uVar16 = uVar15;
  func_0x00010c24f280(*(undefined8 *)(param_3 + lVar12));
  lVar10 = (long)_DAT_11276a21c;
  uVar17 = uVar16;
  func_0x00010c24f200(*(undefined8 *)(param_3 + lVar10));
  func_0x00010c24f260(*(undefined8 *)(param_3 + lVar10));
  func_0x00010c24f280(*(undefined8 *)(param_3 + lVar10));
  func_0x00010c24f200(*(undefined8 *)(param_3 + lVar13));
  func_0x00010c24f260(*(undefined8 *)(param_3 + lVar13));
  func_0x00010c24f280(*(undefined8 *)(param_3 + lVar13));
  func_0x00010bfb2c80(uVar4);
  func_0x00010bfb2c80(uVar3);
  lVar11 = (long)_DAT_11276a1e0;
  func_0x00010bf87020(*(undefined8 *)(param_3 + lVar11));
  func_0x00010c297a40(*(undefined8 *)(param_3 + lVar11));
  FUN_107aeae04(param_1,uVar6,uVar14,param_2,uVar15,uVar16,uVar17,uVar18,puVar5,uVar1,uVar2);
  uVar7 = param_3;
  if (uVar1 == 1) {
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + lVar13);
    FUN_107ae8e0c(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c068b40(uVar7);
    _objc_release(uVar6);
  }
  else {
    if ((uVar2 & 1) == 0) {
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c068b60();
  }
  _objc_release(uVar7);
  uVar2 = param_3;
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c068ba0();
  _objc_release(uVar2);
  lVar11 = (long)_DAT_11276a204;
  func_0x00010c25dba0(*(undefined8 *)(param_3 + lVar11));
  puVar8 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_new(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  func_0x00010bdc1040(*(undefined8 *)(param_3 + lVar11));
  func_0x00010c1d9820(puVar8);
  func_0x00010c1bdd00(0x4008000000000000,puVar8);
  lVar11 = 0x1c;
  if (param_5 == 0) {
    lVar11 = 0x20;
  }
  func_0x00010bdc0fe0(*(undefined8 *)(param_3 + (long)*(int *)(&DAT_11276a1dc + lVar11)));
  func_0x00010c20e8e0(puVar8);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar8);
  _objc_release(puVar9);
  func_0x00010c1bdb40(puVar8);
  uVar6 = *(undefined8 *)(param_3 + (long)_DAT_11276a1f4);
  func_0x00010c08c0e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + lVar12);
  *(undefined8 *)(param_3 + lVar12) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + lVar10);
  *(undefined8 *)(param_3 + lVar10) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + lVar13);
  *(undefined8 *)(param_3 + lVar13) = 0;
  _objc_release(uVar6);
  *(undefined1 *)(param_3 + (long)_DAT_11276a220) = 0;
  *(undefined1 *)(param_3 + (long)_DAT_11276a214) = 0;
  *(undefined1 *)(param_3 + (long)_DAT_11276a224) = 0;
  if (*(char *)(param_3 + (long)_DAT_11276a208) == '\x01') {
    *(undefined1 *)(param_3 + (long)_DAT_11276a208) = 0;
    func_0x00010bdcc640(param_3);
  }
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107aea118; end: 107aea197; -[SCAdOperaInteractiveAreaView _speedFromVelocity:] */

void FUN_107aea118(double param_1,double param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c068c40();
  _objc_release(param_3);
  if ((lVar1 == 1) || (param_1 = param_2, lVar1 == 0)) {
    func_0x00010c0df720(ABS(param_1),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107aea198; end: 107aea22b; -[SCAdOperaInteractiveAreaView _distanceFromTranslation:] */

void FUN_107aea198(double param_1,double param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c068c40();
  _objc_release(param_3);
  if (((lVar1 == 1) || (param_1 = param_2, lVar1 == 0)) && (param_1 <= 0.0)) {
    func_0x00010c0df720(ABS(param_1),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107aea22c; end: 107aea3ff; -[SCAdOperaInteractiveAreaView _swipeDirectionFromPanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107aea22c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_5);
  uVar5 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5);
  _objc_release(uVar5);
  dVar7 = *(double *)PTR__CGPointZero_110347540;
  dVar8 = *(double *)(PTR__CGPointZero_110347540 + 8);
  bVar1 = false;
  if ((param_1 == dVar7) && (bVar1 = false, !NAN(param_2) && !NAN(dVar8))) {
    bVar1 = param_2 == dVar8;
  }
  if (bVar1) {
    param_3 = -1;
  }
  else {
    lVar6 = (long)_DAT_11276a21c;
    if (*(long *)(param_3 + lVar6) == 0) {
      func_0x00010c09ef00(param_5);
      dVar7 = param_1 + dVar7;
      puVar2 = PTR_PTR_1126c98a0;
      func_0x00010c0689e0(dVar7,param_2 + dVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_3 + lVar6);
      *(undefined **)(param_3 + lVar6) = puVar2;
      _objc_retain();
      _objc_release(uVar5);
      puVar3 = puVar2;
      FUN_107ae8e9c(puVar2,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      lVar6 = param_3;
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      FUN_107ae8e0c(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c068b80(lVar6);
      _objc_release(puVar2);
      _objc_release(lVar6);
      _objc_release(puVar3);
    }
    lVar6 = (long)_DAT_11276a1e0;
    uVar5 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010c2645c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e440();
    uVar4 = *(undefined8 *)(param_3 + lVar6);
    dVar8 = dVar7;
    func_0x00010c2645c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1408c0();
    func_0x00010bec92c0(param_1,param_2,dVar7,dVar8,param_3);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  return param_3;
}



/* Entry: 107aea400; end: 107aea5ef; -[SCAdOperaInteractiveAreaView _edgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107aea400(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    long param_5,undefined8 param_6)

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
  long lVar10;
  double dVar11;
  
  lVar10 = (long)_DAT_11276a1e0;
  if (*(long *)(param_5 + lVar10) == 0) {
    param_1 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    lVar1 = param_5;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_5 + lVar10);
    func_0x00010c068b00(uVar2);
    func_0x00010c068bc0(lVar1,param_6,param_5,uVar2);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_5 + lVar10);
    func_0x00010bf8c020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2744e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(param_5);
    dVar11 = param_4;
    FUN_107aea5f0(param_4,uVar2);
    param_1 = param_1 + param_4;
    uVar4 = *(undefined8 *)(param_5 + lVar10);
    func_0x00010bf8c020(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08e800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(param_5);
    FUN_107aea5f0(param_3,uVar5);
    uVar6 = *(undefined8 *)(param_5 + lVar10);
    func_0x00010bf8c020(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf201c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(param_5);
    FUN_107aea5f0(dVar11,uVar7);
    uVar8 = *(undefined8 *)(param_5 + lVar10);
    func_0x00010bf8c020(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c140c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(param_5);
    FUN_107aea5f0(param_3,uVar9);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  return param_1;
}



/* Entry: 107aea5f0; end: 107aea6db;  */

double FUN_107aea5f0(undefined8 param_1)

{
  float fVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bf760(param_1);
  fVar1 = *(float *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return (double)fVar1;
}



/* Entry: 107aea6dc; end: 107aea70b;  */

void FUN_107aea6dc(double param_1,long param_2)

{
  *(float *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = (float)param_1;
  return;
}



/* Entry: 107aea70c; end: 107aea7ab; -[SCAdOperaInteractiveAreaView _isTouchPointWithinInteractiveArea:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107aea70c(double param_1,double param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = (int)*(undefined8 *)(param_3 + _DAT_11276a1e0);
  dVar4 = param_1;
  dVar6 = param_2;
  func_0x00010bf8ef20();
  if ((iVar3 != 0) && (func_0x00010be06e20(param_3), dVar6 <= param_1)) {
    dVar5 = dVar4;
    func_0x00010bf20ca0(param_3);
    bVar1 = true;
    bVar2 = false;
    if (param_1 <= dVar5 - dVar6) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_2) && !NAN(dVar4)) {
        bVar1 = param_2 < dVar4;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      func_0x00010bf20c60(param_3);
    }
  }
  return;
}



/* Entry: 107aea7ac; end: 107aea843; -[SCAdOperaInteractiveAreaView _swipeDirectionFromHorizontalMovement:verticalMovement:leftAngle:rightAngle:] */

void FUN_107aea7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_5;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c068c40();
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec9290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__swipeDirectionForSwipeLeftFromH_11258fe48)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec92b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,param_5,
             PTR_s__swipeDirectionForSwipeUpFromHor_11258fe50);
  return;
}



/* Entry: 107aea844; end: 107aea907; -[SCAdOperaInteractiveAreaView _swipeDirectionForSwipeUpFromHorizontalMovement:verticalMovement:leftAngle:rightAngle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107aea844(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  if (0.0 <= param_1) {
    dVar2 = (param_4 * 3.141592653589793) / 180.0;
    _tan();
    if (dVar2 < param_1 / ABS(param_2)) {
      *(undefined1 *)(param_5 + _DAT_11276a220) = 1;
      return 3;
    }
  }
  else {
    dVar2 = (param_3 * 3.141592653589793) / 180.0;
    _tan();
    if (dVar2 < -param_1 / ABS(param_2)) {
      *(undefined1 *)(param_5 + _DAT_11276a220) = 1;
      return 1;
    }
  }
  uVar1 = 0;
  if (0.0 <= param_2) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 107aea908; end: 107aea9cb; -[SCAdOperaInteractiveAreaView _swipeDirectionForSwipeLeftFromHorizontalMovement:verticalMovement:leftAngle:rightAngle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107aea908(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  if (0.0 <= param_2) {
    dVar2 = (param_4 * 3.141592653589793) / 180.0;
    _tan();
    if (dVar2 < param_2 / ABS(param_1)) {
      *(undefined1 *)(param_5 + _DAT_11276a220) = 1;
      return 2;
    }
  }
  else {
    dVar2 = (param_3 * 3.141592653589793) / 180.0;
    _tan();
    if (dVar2 < -param_2 / ABS(param_1)) {
      *(undefined1 *)(param_5 + _DAT_11276a220) = 1;
      return 0;
    }
  }
  uVar1 = 3;
  if (param_1 < 0.0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107aea9cc; end: 107aeaa47; -[SCAdOperaInteractiveAreaView _isOperaAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107aea9cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c068c40();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    param_1 = param_1 + _DAT_11276a218;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c083480();
    _objc_release(param_1);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 107aeaa48; end: 107aeaa67; -[SCAdOperaInteractiveAreaView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107aeaa48(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a228);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107aeaa68; end: 107aeaa7b; -[SCAdOperaInteractiveAreaView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107aeaa68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a228,param_3);
  return;
}



/* Entry: 107aeaa7c; end: 107aeaa9b; -[SCAdOperaInteractiveAreaView dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107aeaa7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107aeaa9c; end: 107aeaaaf; -[SCAdOperaInteractiveAreaView setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107aeaa9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a218,param_3);
  return;
}



/* Entry: 107aeaab0; end: 107aeabb7; -[SCAdOperaInteractiveAreaView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107aeaab0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a218);
  _objc_destroyWeak(param_1 + _DAT_11276a228);
  _objc_storeStrong(param_1 + _DAT_11276a1fc,0);
  _objc_storeStrong(param_1 + _DAT_11276a1f8,0);
  _objc_storeStrong(param_1 + _DAT_11276a20c,0);
  _objc_storeStrong(param_1 + _DAT_11276a21c,0);
  _objc_storeStrong(param_1 + _DAT_11276a200,0);
  _objc_storeStrong(param_1 + _DAT_11276a1e0,0);
  _objc_storeStrong(param_1 + _DAT_11276a1f0,0);
  _objc_storeStrong(param_1 + _DAT_11276a1ec,0);
  _objc_storeStrong(param_1 + _DAT_11276a1e8,0);
  _objc_storeStrong(param_1 + _DAT_11276a1e4,0);
  _objc_storeStrong(param_1 + _DAT_11276a1dc,0);
  _objc_storeStrong(param_1 + _DAT_11276a204,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a1f4,0);
  return;
}



/* Entry: 107aeabb8; end: 107aeac2f;  */

void FUN_107aeabb8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eac638;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eac638,
                      &PTR____CFConstantStringClassReference_110eac658,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107aeac30; end: 107aeacb7; -[SCOperaExpandButtonViewModel initWithTitle:highlightTapArea:] */

undefined1 *
FUN_107aeac30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9c48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107aeacb8; end: 107aeacdb; -[SCOperaExpandButtonViewModel copyWithZone:] */

undefined8 FUN_107aeacb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107aeacdc; end: 107aead47; -[SCOperaExpandButtonViewModel hash] */

undefined8 * FUN_107aeacdc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107aeadcc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107aeadcc;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107aeadcc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107aeadcc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107aead48; end: 107aeade7; -[SCOperaExpandButtonViewModel isEqual:] */

long FUN_107aead48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107aeadcc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107aeadcc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107aeadcc;
    }
  }
  lVar3 = 1;
LAB_107aeadcc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107aeade8; end: 107aeadef; -[SCOperaExpandButtonViewModel title] */

undefined8 FUN_107aeade8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107aeadf0; end: 107aeadf7; -[SCOperaExpandButtonViewModel highlightTapArea] */

undefined1 FUN_107aeadf0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107aeadf8; end: 107aeae03; -[SCOperaExpandButtonViewModel .cxx_destruct] */

void FUN_107aeadf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107aeae04; end: 107aeaecf;  */

void FUN_107aeae04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined1 param_10,undefined1 param_11)

{
  long *plVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long lStack_70;
  undefined *puStack_68;
  
  if (param_9 != 0) {
    plVar1 = &lStack_70;
    puStack_68 = PTR_PTR_1126f9c50;
    lStack_70 = param_9;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      *(undefined1 *)((long)plVar1 + 8) = param_10;
      *(undefined8 *)((long)plVar1 + 0x10) = param_1;
      *(undefined8 *)((long)plVar1 + 0x18) = param_2;
      *(undefined8 *)((long)plVar1 + 0x40) = param_3;
      *(undefined8 *)((long)plVar1 + 0x48) = param_4;
      *(undefined8 *)((long)plVar1 + 0x50) = param_5;
      *(undefined8 *)((long)plVar1 + 0x58) = param_6;
      *(undefined8 *)((long)plVar1 + 0x60) = param_7;
      *(undefined8 *)((long)plVar1 + 0x68) = param_8;
      *(undefined8 *)((long)plVar1 + 0x70) = in_stack_00000000;
      *(undefined8 *)((long)plVar1 + 0x78) = in_stack_00000008;
      *(undefined8 *)((long)plVar1 + 0x80) = in_stack_00000010;
      *(undefined8 *)((long)plVar1 + 0x88) = in_stack_00000018;
      *(undefined8 *)((long)plVar1 + 0x90) = in_stack_00000020;
      *(undefined8 *)((long)plVar1 + 0x98) = in_stack_00000028;
      *(undefined1 *)((long)plVar1 + 9) = param_11;
      *(undefined8 *)((long)plVar1 + 0x20) = in_stack_00000030;
      *(undefined8 *)((long)plVar1 + 0x28) = in_stack_00000038;
      *(undefined8 *)((long)plVar1 + 0x30) = in_stack_00000040;
      *(undefined8 *)((long)plVar1 + 0x38) = in_stack_00000048;
    }
  }
  return;
}



/* Entry: 107aeaed0; end: 107aeaef3; -[SCAdInteractiveAreaViewSwipeParameters copyWithZone:] */

undefined8 FUN_107aeaed0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107aeaef4; end: 107aeb193; -[SCAdInteractiveAreaViewSwipeParameters hash] */

ulong * FUN_107aeaef4(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uStack_b8 = (ulong)*(byte *)(param_1 + 8);
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_b0 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_b0 = uStack_b0 ^ uStack_b0 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_a8 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_a0 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_98 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_90 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_88 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_80 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_78 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_70 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_68 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_58 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x98) + *(ulong *)(param_1 + 0x98) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_b8;
  func_0x000100505190(puVar3,0x14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if ((((ulong)puVar4 & 1) != 0) &&
         (((char)puVar3[1] == (char)param_3[1] &&
          (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
        dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
        dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
          dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            puVar6 = (ulong *)0x0;
            if ((((((((double)puVar3[8] != (double)param_3[8]) ||
                    ((double)puVar3[9] != (double)param_3[9])) ||
                   (puVar6 = (ulong *)0x0, (double)puVar3[10] != (double)param_3[10])) ||
                  (((double)puVar3[0xb] != (double)param_3[0xb] ||
                   (puVar6 = (ulong *)0x0, (double)puVar3[0xc] != (double)param_3[0xc])))) ||
                 (((double)puVar3[0xd] != (double)param_3[0xd] ||
                  ((puVar6 = (ulong *)0x0, (double)puVar3[0xe] != (double)param_3[0xe] ||
                   ((double)puVar3[0xf] != (double)param_3[0xf])))))) ||
                (puVar6 = (ulong *)0x0, (double)puVar3[0x10] != (double)param_3[0x10])) ||
               ((((double)puVar3[0x11] != (double)param_3[0x11] ||
                 (puVar6 = (ulong *)0x0, (double)puVar3[0x12] != (double)param_3[0x12])) ||
                ((double)puVar3[0x13] != (double)param_3[0x13])))) goto LAB_107aeb3f0;
            dVar7 = ABS((double)puVar3[4] - (double)param_3[4]);
            if ((dVar7 < 2.2250738585072014e-308) ||
               (dVar7 < ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16)) {
              dVar7 = ABS((double)puVar3[5] - (double)param_3[5]);
              if ((dVar7 < 2.2250738585072014e-308) ||
                 (dVar7 < ABS((double)puVar3[5] + (double)param_3[5]) * 2.220446049250313e-16)) {
                dVar7 = ABS((double)puVar3[6] - (double)param_3[6]);
                if ((dVar7 < 2.2250738585072014e-308) ||
                   (dVar7 < ABS((double)puVar3[6] + (double)param_3[6]) * 2.220446049250313e-16)) {
                  dVar7 = ABS((double)puVar3[7] + (double)param_3[7]) * 2.220446049250313e-16;
                  if (dVar7 <= 2.2250738585072014e-308) {
                    dVar7 = 2.2250738585072014e-308;
                  }
                  puVar6 = (ulong *)(ulong)(ABS((double)puVar3[7] - (double)param_3[7]) < dVar7);
                  goto LAB_107aeb3f0;
                }
              }
            }
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_107aeb3f0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107aeb194; end: 107aeb443; -[SCAdInteractiveAreaViewSwipeParameters isEqual:] */

bool FUN_107aeb194(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) != 0) &&
         ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
        dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
          dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            bVar1 = false;
            if (((((((*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40)) ||
                    (*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) ||
                   (bVar1 = false, *(double *)(param_1 + 0x50) != *(double *)(param_3 + 0x50))) ||
                  ((*(double *)(param_1 + 0x58) != *(double *)(param_3 + 0x58) ||
                   (bVar1 = false, *(double *)(param_1 + 0x60) != *(double *)(param_3 + 0x60))))) ||
                 ((*(double *)(param_1 + 0x68) != *(double *)(param_3 + 0x68) ||
                  ((bVar1 = false, *(double *)(param_1 + 0x70) != *(double *)(param_3 + 0x70) ||
                   (*(double *)(param_1 + 0x78) != *(double *)(param_3 + 0x78))))))) ||
                (bVar1 = false, *(double *)(param_1 + 0x80) != *(double *)(param_3 + 0x80))) ||
               (((*(double *)(param_1 + 0x88) != *(double *)(param_3 + 0x88) ||
                 (bVar1 = false, *(double *)(param_1 + 0x90) != *(double *)(param_3 + 0x90))) ||
                (*(double *)(param_1 + 0x98) != *(double *)(param_3 + 0x98))))) goto LAB_107aeb3f0;
            dVar4 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
            if ((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                        2.220446049250313e-16)) {
              dVar4 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
              if ((dVar4 < 2.2250738585072014e-308) ||
                 (dVar4 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                          2.220446049250313e-16)) {
                dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
                if ((dVar4 < 2.2250738585072014e-308) ||
                   (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                            2.220446049250313e-16)) {
                  dVar4 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                          2.220446049250313e-16;
                  if (dVar4 <= 2.2250738585072014e-308) {
                    dVar4 = 2.2250738585072014e-308;
                  }
                  bVar1 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38)) < dVar4;
                  goto LAB_107aeb3f0;
                }
              }
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_107aeb3f0:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107aeb444; end: 107aeb4a7;  */

void FUN_107aeb444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  long lStack_40;
  undefined *puStack_38;
  
  if (param_5 != 0) {
    plVar1 = &lStack_40;
    puStack_38 = PTR_PTR_1126f9c58;
    lStack_40 = param_5;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_1;
      *(undefined8 *)((long)plVar1 + 0x10) = param_2;
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
    }
  }
  return;
}



/* Entry: 107aeb4a8; end: 107aeb4cb; -[SCAdInteractiveAreaViewParameters copyWithZone:] */

undefined8 FUN_107aeb4a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107aeb4cc; end: 107aeb59f; -[SCAdInteractiveAreaViewParameters hash] */

ulong * FUN_107aeb4cc(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_28 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_20 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_38;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar7 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar7);
      if (((ulong)puVar4 & 1) != 0) {
        bVar2 = false;
        if (((double)puVar3[1] == (double)param_3[1]) &&
           (bVar2 = false, !NAN((double)puVar3[2]) && !NAN((double)param_3[2]))) {
          bVar2 = (double)puVar3[2] == (double)param_3[2];
        }
        if (bVar2) {
          uVar5 = 0;
          if ((double)puVar3[4] == (double)param_3[4]) {
            uVar5 = (uint)((double)puVar3[3] == (double)param_3[3]);
          }
          puVar7 = (ulong *)(ulong)uVar5;
          goto LAB_107aeb60c;
        }
      }
      puVar7 = (ulong *)0x0;
    }
  }
LAB_107aeb60c:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 107aeb5a0; end: 107aeb643; -[SCAdInteractiveAreaViewParameters isEqual:] */

bool FUN_107aeb5a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        bVar1 = false;
        if ((*(double *)(param_1 + 8) == *(double *)(param_3 + 8)) &&
           (bVar1 = false, !NAN(*(double *)(param_1 + 0x10)) && !NAN(*(double *)(param_3 + 0x10))))
        {
          bVar1 = *(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10);
        }
        if (bVar1) {
          bVar1 = false;
          if (*(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20)) {
            bVar1 = *(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18);
          }
          goto LAB_107aeb60c;
        }
      }
      bVar1 = false;
    }
  }
LAB_107aeb60c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107aeb644; end: 107aeb6ef; -[SCAdOperaBaseLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:featureFlags:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107aeb644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9c60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11276a274;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107aeb6f0; end: 107aeb7ab; -[SCAdOperaBaseLayerViewController isRecyclable] */

void FUN_107aeb6f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c07bfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puStack_38 = PTR_PTR_1126f9c60;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_isRecyclable_1125fca00);
  }
  else {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c07bfc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107aeb7ac; end: 107aeb7df; -[SCAdOperaBaseLayerViewController viewDidFullyAppear] */

void FUN_107aeb7ac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9c60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidFullyAppear_112684c88);
  return;
}



/* Entry: 107aeb7e0; end: 107aeb813; -[SCAdOperaBaseLayerViewController viewDidFullyDisappear] */

void FUN_107aeb7e0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9c60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidFullyDisappear_112684ca8);
  return;
}



/* Entry: 107aeb814; end: 107aeb817; -[SCAdOperaBaseLayerViewController updateViewWithPreviousLayer:currentLayer:] */

void FUN_107aeb814(void)

{
  return;
}



/* Entry: 107aeb818; end: 107aeb953; -[SCAdOperaBaseLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107aeb818(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
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
  
  if (param_4 != 0) {
    *(bool *)(param_2 + _DAT_11276a278) = param_1 != 0.0;
  }
  lVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb2260();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    dVar4 = -2.0;
    dVar3 = ABS(param_1) * -2.0 + 1.0;
    dVar5 = 0.0;
    if (0.0 <= dVar3) {
      dVar5 = dVar3;
    }
    lVar1 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(dVar5);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(lVar1);
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    _CGAffineTransformTranslate(&uStack_70,-(dVar4 * param_1),0,&uStack_a0);
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(param_2);
  }
  return;
}



/* Entry: 107aeb954; end: 107aeb987; -[SCAdOperaBaseLayerViewController teardown] */

void FUN_107aeb954(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9c60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_teardown_112678538);
  return;
}



/* Entry: 107aeb988; end: 107aeb997; -[SCAdOperaBaseLayerViewController featureFlags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107aeb988(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a274);
}



/* Entry: 107aeb998; end: 107aeb9a7; -[SCAdOperaBaseLayerViewController isAnimatingHorizontally] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107aeb998(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a278);
}



/* Entry: 107aeb9a8; end: 107aeb9bb; -[SCAdOperaBaseLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107aeb9a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a274,0);
  return;
}



/* Entry: 107aeb9bc; end: 107aeba2f; -[SCPageLauncherPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_107aeb9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9c68;
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



/* Entry: 107aeba30; end: 107aeba37; -[SCPageLauncherPluginScope plugInRegistry] */

undefined8 FUN_107aeba30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107aeba38; end: 107aeba43; -[SCPageLauncherPluginScope .cxx_destruct] */

void FUN_107aeba38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107aeba44; end: 107aeba4f; -[SCPageLauncherServices .cxx_destruct] */

void FUN_107aeba44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107aeba50; end: 107aebacb;  */

undefined8 FUN_107aeba50(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c247940();
  if (((int)uVar2 == 6) || (uVar2 = param_1, func_0x00010c247940(), (int)uVar2 == 7)) {
    uVar2 = 0x1b;
  }
  else {
    uVar2 = param_1;
    func_0x00010bfa1820();
    uVar1 = (int)uVar2 - 1;
    if (uVar1 < 0x11) {
      uVar2 = *(undefined8 *)(&UNK_10dee0f60 + (ulong)uVar1 * 8);
    }
    else {
      uVar2 = 0xffffffffffffffff;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107aebacc; end: 107aebb8b;  */

undefined8 FUN_107aebacc(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010c247940();
  if ((int)uVar3 == 6) {
    uVar3 = 7;
    goto LAB_107aebb70;
  }
  uVar3 = param_1;
  func_0x00010c247940();
  if ((int)uVar3 == 7) {
    uVar3 = param_1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c247520();
    iVar2 = (int)uVar1;
    _objc_release(uVar3);
LAB_107aebb50:
    if (iVar2 - 1U < 0x11) {
      uVar3 = *(undefined8 *)(&UNK_10dee0fe8 + (ulong)(iVar2 - 1U) * 8);
      goto LAB_107aebb70;
    }
  }
  else {
    uVar3 = param_1;
    func_0x00010c247940();
    if ((int)uVar3 == 8) {
      uVar3 = param_1;
      func_0x00010bfa1820();
      iVar2 = (int)uVar3;
      goto LAB_107aebb50;
    }
  }
  uVar3 = 0xffffffffffffffff;
LAB_107aebb70:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107aebb8c; end: 107aebc17; +[PLPageLaunchResult descriptor] */

undefined * FUN_107aebb8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137274d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b70330,
                        &PTR____CFConstantStringClassReference_110eac6f8,&PTR_DAT_11323f900,
                        &PTR_DAT_11323f918,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137274d0 = puVar1;
  }
  return puRam00000001137274d0;
}



/* Entry: 107aebc18; end: 107aebc7f; +[PLPromotionInsightsTrayResult descriptor] */

void FUN_107aebc18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137274d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b703d0,
                        &PTR____CFConstantStringClassReference_110eac718,&PTR_DAT_11323f958,
                        &PTR_DAT_11323f970,1,0x10,0x1c);
    puRam00000001137274d8 = puVar1;
  }
  return;
}



/* Entry: 107aebc80; end: 107aebcfb; +[PLLensExplorerPostCaptureResult descriptor] */

undefined * FUN_107aebc80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137274e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b70470,
                        &PTR____CFConstantStringClassReference_110eac738,&PTR_DAT_11323f990,
                        &PTR_s_lensId_11323f9a8,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137274e0 = puVar1;
  }
  return puRam00000001137274e0;
}



/* Entry: 107aebcfc; end: 107aebedf;  */

void FUN_107aebcfc(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar8 = param_1;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_1);
    puVar8 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar9 = *(long *)((long)puVar10 * 8);
        lVar3 = lVar9;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          puVar5 = PTR_PTR_1126b23d8;
          _objc_alloc(PTR_PTR_1126b23d8);
          puVar6 = PTR_PTR_1126c9a78;
          func_0x00010c1015e0(PTR_PTR_1126c9a78);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0558c0(puVar5);
          _objc_release(lVar9);
          _objc_release(puVar6);
          func_0x00010befa120(puVar2);
          _objc_release(puVar5);
        }
        puVar10 = puVar10 + 1;
      } while (puVar8 != puVar10);
      puVar8 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    puVar8 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(param_2);
    puVar8 = param_1;
    func_0x00010bf529e0();
    if ((puVar8 == (undefined *)0x0) && (lVar7 = param_2, func_0x00010bf529e0(), lVar7 == 0)) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = param_1;
      func_0x000107aebf78(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      FUN_107aebcfc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_release(param_2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107aebee0; end: 107aec017;  */

void FUN_107aebee0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x00010bf529e0();
  if ((lVar2 == 0) && (lVar2 = param_2, func_0x00010bf529e0(), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107aebf78(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_107aebcfc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107aec018; end: 107aec14b;  */

void FUN_107aec018(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107aec14c;
  uStack_30 = 0x107aec15c;
  uStack_28 = 0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107aec14c;
  uStack_60 = 0x107aec15c;
  uStack_58 = 0;
  func_0x00010c0bebc0(param_1);
  uVar1 = puStack_48[5];
  if (puStack_78[5] == 0) {
    FUN_107aebcfc(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_107aebee0();
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107aec14c; end: 107aec163;  */

void FUN_107aec14c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107aec164; end: 107aec1e7;  */

void FUN_107aec164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bef3160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_4;
  func_0x00010c0ec600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107aec1e8; end: 107aec27b;  */

ulong FUN_107aec1e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c250f20(param_3);
  dVar2 = param_1;
  func_0x00010c250f20(param_4);
  if (dVar2 <= param_1) {
    func_0x00010c250f20(param_3);
    dVar3 = dVar2;
    func_0x00010c250f20(param_4);
    uVar1 = (ulong)(dVar2 != dVar3);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107aec27c; end: 107aec32b;  */

void FUN_107aec27c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0ec600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bef3160(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c0ec600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107aebf78(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107aec32c; end: 107aec503;  */

void FUN_107aec32c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c26fe00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar7 = param_1;
    func_0x00010c26fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf529e0();
    _objc_release(uVar7);
    _objc_release(uVar1);
    puVar8 = (undefined *)0x0;
    if (uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010c26fe00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      uVar7 = uVar1;
      func_0x00010bf529e0();
      if (uVar7 != 0) {
        uVar7 = 0;
        do {
          puVar4 = PTR_PTR_1126b23d8;
          _objc_alloc(PTR_PTR_1126b23d8);
          puVar5 = PTR_PTR_1126c9a78;
          func_0x00010c1015e0(PTR_PTR_1126c9a78);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar2 = param_1;
          func_0x00010c15f2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110e4da78);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0558c0(puVar4,param_2,puVar5,puVar8,0);
          _objc_release(puVar8);
          _objc_release(puVar6);
          _objc_release(uVar2);
          _objc_release(puVar5);
          func_0x00010befa120(puVar3,param_2,puVar4);
          _objc_release(puVar4);
          uVar7 = uVar7 + 1;
          uVar2 = uVar1;
          func_0x00010bf529e0();
        } while (uVar7 < uVar2);
      }
      puVar8 = puVar3;
      func_0x00010bf51e00(puVar3);
      _objc_release(puVar3);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107aec504; end: 107aec637; -[SCCommerceSession initWithSource:productType:originType:grapheneRegistry:blizzardUserLogger:] */

undefined1 *
FUN_107aec504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9c78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x60) = 0xffffffffffffffff;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined **)((long)puVar1 + 0xd8) = puVar2;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b0490;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xe0);
    *(undefined **)((long)puVar1 + 0xe0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b0468;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xe8);
    *(undefined **)((long)puVar1 + 0xe8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0xf0);
    *(undefined8 *)((long)puVar1 + 0xf0) = param_7;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 107aec638; end: 107aec81f; -[SCCommerceSession initWithSessionConfig:source:grapheneRegistry:blizzardUserLogger:] */

long FUN_107aec638(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c247960(param_3);
  func_0x000107af144c();
  func_0x00010c247960(param_3);
  func_0x000107af1314();
  func_0x00010c04a840();
  _objc_release(param_6);
  _objc_release(param_5);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(long *)(param_1 + 0xd0) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010c247800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = param_3;
      func_0x00010c247800();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(long *)(param_1 + 0xa8) = lVar4;
    _objc_release(uVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c247b60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = param_3;
      func_0x00010c247b60();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(long *)(param_1 + 0xb0) = lVar4;
    _objc_release(uVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = param_3;
      func_0x00010c115e60();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar4;
    _objc_release(uVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = param_3;
      func_0x00010c257800();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar4;
    _objc_release(uVar1);
    _objc_release(lVar2);
    lVar4 = param_3;
    func_0x00010c07f200();
    *(char *)(param_1 + 10) = (char)lVar4;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107aec820; end: 107aecc6b; +[SCCommerceSession sessionFromCommerceSource:grapheneRegistry:blizzardUserLogger:] */

void FUN_107aec820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0xffffffffffffffff;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0xe;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0xffffffffffffffff;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_107aecc6c;
  uStack_b0 = 0x107aecc7c;
  uStack_a8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_107aecc6c;
  uStack_e0 = 0x107aecc7c;
  uStack_d8 = 0;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_107aecc6c;
  uStack_110 = 0x107aecc7c;
  uStack_108 = 0;
  func_0x00010c0be8a0(param_3);
  puVar1 = PTR_PTR_1126b0308;
  _objc_alloc();
  func_0x00010c04a840();
  func_0x00010c206ea0();
  func_0x00010c207140(puVar1);
  func_0x00010c163bc0(puVar1);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107aecc6c; end: 107aecc83;  */

void FUN_107aecc6c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107aecc84; end: 107aeccdb;  */

void FUN_107aecc84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x3a;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107aeccdc; end: 107aecd2f;  */

void FUN_107aeccdc(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0x1a;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0x2c;
  return;
}



/* Entry: 107aecd30; end: 107aecd87;  */

void FUN_107aecd30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x5c;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0x25;
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107aecd88; end: 107aecdcf;  */

void FUN_107aecd88(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 100;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0x26;
  return;
}



/* Entry: 107aecdd0; end: 107aece27;  */

void FUN_107aecdd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x2a;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0x27;
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107aece28; end: 107aece4b;  */

void FUN_107aece28(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x6b;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0x26;
  return;
}



/* Entry: 107aece4c; end: 107aecf7b;  */

void FUN_107aece4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x51;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0x16;
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b04d0;
  _objc_alloc();
  func_0x00010bff1780();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
  _objc_release(uVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107aecf7c; end: 107aecf9f;  */

void FUN_107aecf7c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x3c;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0x1c;
  return;
}


