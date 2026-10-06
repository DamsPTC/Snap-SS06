/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062ba8d0; end: 1062ba8ef; -[SCContextSpotlightAvatarSubscribeButton _imageViewVerticalMarginForCurrentStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062ba8d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4008000000000000;
  if (*(long *)(param_1 + _DAT_112744e88) != 1) {
    uVar1 = 0x4018000000000000;
  }
  return uVar1;
}



/* Entry: 1062ba8f0; end: 1062ba907; -[SCContextSpotlightAvatarSubscribeButton _includeCustomShadowForCurrentStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1062ba8f0(long param_1)

{
  return *(long *)(param_1 + _DAT_112744e88) != 1;
}



/* Entry: 1062ba908; end: 1062ba963; -[SCContextSpotlightAvatarSubscribeButton _didTapAvatarSubsButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ba908(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010c09ef00(param_5,param_4,0);
  param_3 = param_3 + _DAT_112744e94;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf7c660(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062ba964; end: 1062ba973; -[SCContextSpotlightAvatarSubscribeButton stateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062ba964(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744ec4);
}



/* Entry: 1062ba974; end: 1062baa6f; -[SCContextSpotlightAvatarSubscribeButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ba974(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744ec4,0);
  _objc_storeStrong(param_1 + _DAT_112744e80,0);
  _objc_storeStrong(param_1 + _DAT_112744eb4,0);
  _objc_storeStrong(param_1 + _DAT_112744eb0,0);
  _objc_destroyWeak(param_1 + _DAT_112744e94);
  _objc_storeStrong(param_1 + _DAT_112744ebc,0);
  _objc_storeStrong(param_1 + _DAT_112744e8c,0);
  _objc_storeStrong(param_1 + _DAT_112744e98,0);
  _objc_storeStrong(param_1 + _DAT_112744e9c,0);
  _objc_storeStrong(param_1 + _DAT_112744eb8,0);
  _objc_storeStrong(param_1 + _DAT_112744ea0,0);
  _objc_storeStrong(param_1 + _DAT_112744ea4,0);
  _objc_storeStrong(param_1 + _DAT_112744ea8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744eac,0);
  return;
}



/* Entry: 1062baa70; end: 1062baabf; -[SCContextSpotlightBasicButton initWithStyle:] */

undefined1 * FUN_1062baa70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0bb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle__1125f14a8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062baac0; end: 1062bad83; -[SCContextSpotlightBasicButton _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062baac0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar16 = (long)_DAT_112744ec8;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar16),param_2,1);
  lVar2 = param_1;
  func_0x00010be37220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar16),param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  lStack_88 = lVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar15;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c25dfa0(param_1);
  func_0x00010c24d7e0(param_1,param_2,lVar10);
  uVar11 = uVar9;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c25dfa0(param_1);
  func_0x00010c24d7e0(param_1,param_2,lVar10);
  uVar13 = uVar12;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar15);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar3;
  func_0x00010c25dfa0();
  if (lVar2 != 2) {
    if (lVar2 == 1) {
      lVar2 = lVar3;
      func_0x00010c25dfa0(lVar3);
      func_0x00010c24d7e0(lVar3,param_2,lVar2);
      func_0x00010bfe7b00(PTR_PTR_1126b0c40,param_2,0x59,0xd5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1062badf4;
    }
    if (lVar2 != 0) goto LAB_1062badf4;
  }
  func_0x0001062cd410();
  _objc_retainAutoreleasedReturnValue();
LAB_1062badf4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062bad84; end: 1062badff; -[SCContextSpotlightBasicButton _imageForSubscribeIconWithCurrentStyle] */

void FUN_1062bad84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c25dfa0();
  if (lVar1 != 2) {
    if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010c25dfa0(param_1);
      func_0x00010c24d7e0(param_1,param_2,lVar1);
      func_0x00010bfe7b00(PTR_PTR_1126b0c40,param_2,0x59,0xd5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1062badf4;
    }
    if (lVar1 != 0) goto LAB_1062badf4;
  }
  func_0x0001062cd410();
  _objc_retainAutoreleasedReturnValue();
LAB_1062badf4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062bae00; end: 1062bae13; -[SCContextSpotlightBasicButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bae00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744ec8,0);
  return;
}



/* Entry: 1062bae14; end: 1062bae1b; -[SCContextSpotlightControl shouldDimOnHighlight] */

undefined8 FUN_1062bae14(void)

{
  return 1;
}



/* Entry: 1062bae1c; end: 1062baeb7; -[SCContextSpotlightControl setHighlighted:] */

void FUN_1062bae1c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0bb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setHighlighted__112647c38);
  func_0x00010c22eca0();
  if ((int)param_1 != 0) {
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  return;
}



/* Entry: 1062baeb8; end: 1062baed3;  */

void FUN_1062baeb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3fe0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062baed4; end: 1062baf23; -[SCContextSpotlightCustomButtonView initWithHitTestInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062baed4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0bc0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744ecc) = param_1;
  }
  return;
}



/* Entry: 1062baf24; end: 1062bafaf; -[SCContextSpotlightCustomButtonView pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062baf24(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = param_1;
  func_0x00010bf20c00();
  lVar1 = (long)_DAT_112744ecc;
  dVar3 = *(double *)(param_5 + lVar1);
  dVar4 = dVar4 - dVar3;
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  dVar2 = *(double *)(param_5 + lVar1);
  func_0x00010bf20c00(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (dVar4,dVar3,param_3 + dVar2 * 2.0,param_4,param_1,param_2);
  return;
}



/* Entry: 1062bafb0; end: 1062bb0ff; -[SCContextSpotlightDoubleTapGestureView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1062bafb0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f0bc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar6 = (long)_DAT_112744ed4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c1d0120(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c178280(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010bef9040(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be3f800();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar1);
    }
    else {
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf414e0(0x3fe0000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar1);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062bb100; end: 1062bb197; -[SCContextSpotlightDoubleTapGestureView doubleTapAction:] */

void FUN_1062bb100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c262ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,uVar1);
  _objc_release(param_5);
  _objc_release(uVar1);
  func_0x00010bf88420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88500(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062bb198; end: 1062bb1e7; -[SCContextSpotlightDoubleTapGestureView layoutSubviews] */

void FUN_1062bb198(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0bc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf8c020(param_1);
  func_0x00010c229800(param_1);
  return;
}



/* Entry: 1062bb1e8; end: 1062bb2d7; -[SCContextSpotlightDoubleTapGestureView setupTouchViewInsetsPercentage:] */

void FUN_1062bb1e8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_3;
  dVar3 = param_4;
  func_0x00010c193400();
  lVar1 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_5;
    func_0x00010bf495c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b8e0(param_5);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2 * dVar2,param_1 * dVar3,dVar2 - (param_2 * dVar2 + param_4 * dVar2),
               dVar3 - (param_1 * dVar3 + param_3 * dVar3),param_5,PTR_s_setFrame__112645658);
    return;
  }
  return;
}



/* Entry: 1062bb2d8; end: 1062bb2df; -[SCContextSpotlightDoubleTapGestureView _isDebugViewEnabled] */

undefined8 FUN_1062bb2d8(void)

{
  return 0;
}



/* Entry: 1062bb2e0; end: 1062bb2e7; -[SCContextSpotlightDoubleTapGestureView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1062bb2e0(void)

{
  return 0;
}



/* Entry: 1062bb2e8; end: 1062bb2ef; -[SCContextSpotlightDoubleTapGestureView gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_1062bb2e8(void)

{
  return 0;
}



/* Entry: 1062bb2f0; end: 1062bb2f7; -[SCContextSpotlightDoubleTapGestureView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_1062bb2f0(void)

{
  return 1;
}



/* Entry: 1062bb2f8; end: 1062bb317; -[SCContextSpotlightDoubleTapGestureView doubleTapDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bb2f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062bb318; end: 1062bb32b; -[SCContextSpotlightDoubleTapGestureView setDoubleTapDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bb318(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744ed8,param_3);
  return;
}



/* Entry: 1062bb32c; end: 1062bb33b; -[SCContextSpotlightDoubleTapGestureView doubleTapGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062bb32c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744ed4);
}



/* Entry: 1062bb33c; end: 1062bb37b; -[SCContextSpotlightDoubleTapGestureView setDoubleTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bb33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112744ed4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062bb37c; end: 1062bb393; -[SCContextSpotlightDoubleTapGestureView edgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062bb37c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744ed0);
}



/* Entry: 1062bb394; end: 1062bb3ab; -[SCContextSpotlightDoubleTapGestureView setEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bb394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112744ed0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1062bb3ac; end: 1062bb3e7; -[SCContextSpotlightDoubleTapGestureView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bb3ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744ed4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112744ed8);
  return;
}



/* Entry: 1062bb3e8; end: 1062bb5ef; -[SCContextSpotlightFavoriteAnimationBackgroundView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1062bb3e8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar6;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_1126f0bd0;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar3 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744edc);
    *(undefined **)((long)puVar1 + (long)_DAT_112744edc) = puVar2;
    _objc_release(uVar5);
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_alloc_init();
    lVar6 = (long)_DAT_112744ee0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c209760(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6))
    ;
    func_0x00010c196020(0x3ff0000000000000,0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar6))
    ;
    func_0x00010c21acc0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    unaff_x21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_58 = puVar4;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x21;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(puVar2);
    unaff_x20 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    puVar3 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1062bb5f0;
  puStack_a8 = PTR_PTR_1126f0bd0;
  puStack_b0 = puVar3;
  puStack_a0 = unaff_x22;
  puStack_98 = unaff_x21;
  puStack_90 = unaff_x20;
  puStack_88 = puVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(puVar3);
  func_0x00010c19f0e0(*(undefined8 *)((long)puVar3 + (long)_DAT_112744ee0));
  func_0x00010bf20c00(puVar3);
  lVar6 = (long)_DAT_112744edc;
  func_0x00010c19f0e0(*(undefined8 *)((long)puVar3 + lVar6));
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(puVar3);
  func_0x00010bf199a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)((long)puVar3 + lVar6));
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 1062bb5f0; end: 1062bb6a7; -[SCContextSpotlightFavoriteAnimationBackgroundView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bb5f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0bd0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112744ee0));
  func_0x00010bf20c00(param_1);
  lVar2 = (long)_DAT_112744edc;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar2));
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_1);
  func_0x00010bf199a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar2));
  _objc_release(puVar1);
  return;
}



/* Entry: 1062bb6a8; end: 1062bb6e7; -[SCContextSpotlightFavoriteAnimationBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bb6a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744edc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744ee0,0);
  return;
}



/* Entry: 1062bb6e8; end: 1062bb747; -[SCContextSpotlightFavoriteButton initWithStyle:shouldAnimate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062bb6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0bd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle__1125f14a8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744ee4) = param_4;
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062bb748; end: 1062bc39b; -[SCContextSpotlightFavoriteButton _setupViews] */

/* WARNING: Possible PIC construction at 0x0001062bb7d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062bbfa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062bc3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062bc3f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062bc3d8) */
/* WARNING: Removing unreachable block (ram,0x0001062bc3e4) */
/* WARNING: Removing unreachable block (ram,0x0001062bc3e8) */
/* WARNING: Removing unreachable block (ram,0x0001062bbfa8) */
/* WARNING: Removing unreachable block (ram,0x0001062bc398) */
/* WARNING: Removing unreachable block (ram,0x0001062bc3c0) */
/* WARNING: Removing unreachable block (ram,0x0001062bc3c4) */
/* WARNING: Removing unreachable block (ram,0x0001062bc374) */
/* WARNING: Removing unreachable block (ram,0x0001062bb7d4) */
/* WARNING: Removing unreachable block (ram,0x0001062bbc28) */
/* WARNING: Removing unreachable block (ram,0x0001062bbeb4) */
/* WARNING: Removing unreachable block (ram,0x0001062bc3f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bb748(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c96a8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112744ee8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + lVar3),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062bc39c; end: 1062bc41f; -[SCContextSpotlightFavoriteButton updateVisibility] */

/* WARNING: Possible PIC construction at 0x0001062bc3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062bc3f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062bc3d8) */
/* WARNING: Removing unreachable block (ram,0x0001062bc3e4) */
/* WARNING: Removing unreachable block (ram,0x0001062bc3e8) */
/* WARNING: Removing unreachable block (ram,0x0001062bc3f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bc39c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c07d660();
  uVar2 = 0;
  if ((int)lVar1 == 0) {
    uVar2 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,*(undefined8 *)(param_1 + _DAT_112744ef0),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062bc420; end: 1062bc593; -[SCContextSpotlightFavoriteButton setSelected:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bc420(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0bd8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setSelected__11265c598);
  func_0x00010c28c1e0(param_1);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar1);
    if (*(char *)(param_1 + _DAT_112744ee4) == '\x01') {
      if (param_3 == 0) {
        func_0x00010c12aaa0(param_1);
      }
      else {
        *(undefined1 *)(param_1 + _DAT_112744ef8) = 1;
        _objc_initWeak(auStack_48,param_1);
        func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
        puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
        _objc_copyWeak(auStack_50,auStack_48);
        func_0x00010c17fb40(puVar1);
        func_0x00010bf02f40(param_1);
        func_0x00010bf03140(param_1);
        func_0x00010bf02c80(param_1);
        _objc_destroyWeak(auStack_50);
        func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
        _objc_destroyWeak(auStack_48);
      }
    }
  }
  return;
}



/* Entry: 1062bc594; end: 1062bc5bf;  */

void FUN_1062bc594(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12aaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062bc5c0; end: 1062bc5cb; -[SCContextSpotlightFavoriteButton titleLabelAccessibilityIdentifier] */

undefined ** FUN_1062bc5c0(void)

{
  return &PTR____CFConstantStringClassReference_110e48058;
}



/* Entry: 1062bc5cc; end: 1062bc723; -[SCContextSpotlightFavoriteButton animateBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bc5cc(long param_1,undefined8 param_2)

{
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3fd3333333333333,0x3fd3333333333333);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_112744ee8),param_2,&uStack_80);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1062bc6b4;
  puStack_90 = &UNK_110842e18;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1062bc724;
  puStack_c0 = &UNK_1108471e0;
  uStack_b0 = 0x3fc47ae147ae147b;
  lStack_b8 = param_1;
  lStack_88 = param_1;
  func_0x00010bf03440(0x3fc47ae147ae147b,0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,0x20000,&puStack_a8,&puStack_d8);
  return;
}



/* Entry: 1062bc724; end: 1062bc793;  */

void FUN_1062bc724(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1062bc794;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf03440(*(undefined8 *)(param_1 + 0x28),0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0
                      ,&puStack_38,0);
  return;
}



/* Entry: 1062bc794; end: 1062bc803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bc794(long param_1,undefined8 param_2)

{
  long lVar1;
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
  
  lVar1 = (long)_DAT_112744ee8;
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  _CGAffineTransformMakeScale(&uStack_50,0x3fd3333333333333,0x3fd3333333333333);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,&uStack_80);
  return;
}



/* Entry: 1062bc804; end: 1062bcb57; -[SCContextSpotlightFavoriteButton animateMainHeart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bc804(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fe3333333333333);
  _dispatch_time(0,280000000);
  func_0x00010058c530();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010befa120(puVar2);
  func_0x00010befa120(puVar3);
  func_0x00010befa120(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fd5555555555556,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0x3e4ccccd,0x3f800000,PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar5);
  func_0x00010befa120(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fe1111111111111,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0x3ecccccd,0,0x3f800000,0x3f800000,
                      PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar5);
  func_0x00010befa120(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fe7777777777778,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0x3e4ccccd,0x3f800000,PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar5);
  func_0x00010befa120(puVar2);
  func_0x00010befa120(puVar3);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar5);
  func_0x00010c220360(puVar1);
  func_0x00010c1b6d00(puVar1);
  func_0x00010c2160a0(puVar1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112744ef4);
  func_0x00010c08c0e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1062bcb58; end: 1062bcbaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bcb58(long param_1)

{
  undefined *puVar1;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744ef8) == '\x01') {
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1062bcbb0; end: 1062bce7b; -[SCContextSpotlightFavoriteButton animateSmallHearts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bcbb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112744eec;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,0);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar8));
  puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fe3333333333333);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5488);
  func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5488);
  func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5488);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fe1111111111111,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88;
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184970);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x3fe7777777777778,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5488);
  func_0x00010befa120(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c54a0);
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c220360(puVar1,param_2,puVar2);
  func_0x00010c1b6d00(puVar1,param_2,puVar3);
  func_0x00010c2160a0(puVar1,param_2,puVar4);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c261580(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  do {
    uVar6 = uVar7;
    func_0x00010c0dfd40(uVar7,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf03120(param_1,param_2,uVar6,lVar8);
    _objc_release(uVar6);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 8);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062bce7c; end: 1062bd077; -[SCContextSpotlightFavoriteButton animateSmallHeart:index:] */

void FUN_1062bce7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_b0 = uVar3;
  uStack_a8 = uVar5;
  uStack_a0 = uVar7;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_88 = uVar6;
  _CGAffineTransformScale(&uStack_80,0x3fe0000000000000,0x3fe0000000000000,&uStack_b0);
  _CGAffineTransformRotate(&uStack_b0,(double)param_4 * 0.7853981633974483,&uStack_80);
  _CGAffineTransformTranslate(&uStack_80,0,0xc024000000000000,&uStack_b0);
  uStack_b0 = uVar3;
  uStack_a8 = uVar5;
  uStack_a0 = uVar7;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_88 = uVar6;
  _CGAffineTransformRotate(&uStack_e0,(double)param_4 * 0.7853981633974483,&uStack_b0);
  _CGAffineTransformTranslate(&uStack_b0,0,0xc044000000000000,&uStack_e0);
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  func_0x00010c219960(param_3,param_2,&uStack_e0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_1062bd078;
  puStack_120 = &UNK_1108700e8;
  _objc_retain(param_3);
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_1062bd0b0;
  puStack_180 = &UNK_11091a938;
  uStack_170 = 0x3fc47ae147ae147a;
  uStack_160 = uStack_78;
  uStack_168 = uStack_80;
  uStack_150 = uStack_68;
  uStack_158 = uStack_70;
  uStack_140 = uStack_58;
  uStack_148 = uStack_60;
  uStack_178 = param_3;
  uStack_118 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fceb851eb851eb8,0x3fc999999999999a,puVar2,param_2,0x20000,&puStack_138,
                      &puStack_198);
  _objc_release(uStack_178);
  _objc_release(uStack_118);
  _objc_release(param_3);
  return;
}



/* Entry: 1062bd078; end: 1062bd0af;  */

void FUN_1062bd078(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_18 = *(undefined8 *)(param_1 + 0x50);
  uStack_20 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 1062bd0b0; end: 1062bd15f;  */

void FUN_1062bd0b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1062bd160;
  puStack_80 = &UNK_1108700e8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = uVar2;
  func_0x00010bf03440(uVar3,0,puVar1,param_2,0x10000,&puStack_98,0);
  _objc_release(uStack_78);
  return;
}



/* Entry: 1062bd160; end: 1062bd197;  */

void FUN_1062bd160(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_18 = *(undefined8 *)(param_1 + 0x50);
  uStack_20 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 1062bd198; end: 1062bd267; -[SCContextSpotlightFavoriteButton removeAllAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bd198(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744ef4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744ef0);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112744eec;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744ee8);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
  *(undefined1 *)(param_1 + _DAT_112744ef8) = 0;
  return;
}



/* Entry: 1062bd268; end: 1062bd2e3; -[SCContextSpotlightFavoriteButton _boostImage] */

void FUN_1062bd268(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c25dfa0();
  if (lVar1 != 2) {
    if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010c25dfa0(param_1);
      func_0x00010c24d7e0(param_1,param_2,lVar1);
      func_0x00010bfe7b00(PTR_PTR_1126b0c40,param_2,0x14d,0xd5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1062bd2d8;
    }
    if (lVar1 != 0) goto LAB_1062bd2d8;
  }
  FUN_1062ccfb4();
  _objc_retainAutoreleasedReturnValue();
LAB_1062bd2d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062bd2e4; end: 1062bd35f; -[SCContextSpotlightFavoriteButton _boostedImage] */

void FUN_1062bd2e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c25dfa0();
  if (lVar1 != 2) {
    if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010c25dfa0(param_1);
      func_0x00010c24d7e0(param_1,param_2,lVar1);
      func_0x00010bfe7b00(PTR_PTR_1126b0c40,param_2,0x14d,0x90);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1062bd354;
    }
    if (lVar1 != 0) goto LAB_1062bd354;
  }
  func_0x0001062cd030();
  _objc_retainAutoreleasedReturnValue();
LAB_1062bd354:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062bd360; end: 1062bd3df; -[SCContextSpotlightFavoriteButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bd360(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744ee8,0);
  _objc_storeStrong(param_1 + _DAT_112744eec,0);
  _objc_storeStrong(param_1 + _DAT_112744ef4,0);
  _objc_storeStrong(param_1 + _DAT_112744ef0,0);
  _objc_storeStrong(param_1 + _DAT_112744efc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744f00,0);
  return;
}



/* Entry: 1062bd3e0; end: 1062bd8f3; -[SCContextSpotlightHashtagView initWithHashtag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1062bd3e0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4008000000000000);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c219b60(param_1,param_2,0);
    puVar1 = param_1;
    func_0x00010bfe0660(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf49420(0x4036000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar18 = (long)_DAT_112744f04;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar18);
    *(undefined **)(param_1 + lVar18) = param_3;
    _objc_release(uVar3);
    puVar1 = param_3;
    func_0x00010c08fa60();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = param_1;
      func_0x00010c2a5060(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf49420(0x4049000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162480();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc_init();
      func_0x00010c219b60();
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSShadow_1126b6158;
      _objc_opt_new();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0x3fdccccccccccccd,PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740(puVar2,param_2,puVar4);
      _objc_release(puVar4);
      func_0x00010c1fe7a0(*(undefined8 *)PTR__CGSizeZero_110347620,
                          *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar2);
      func_0x00010c1fe720(0x4018000000000000,puVar2);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110e28078);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      uStack_78 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_78,1)
      ;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar5,param_2,puVar4,puVar6);
      _objc_release(puVar6);
      func_0x00010c16b720(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
      func_0x00010befbb60(param_1,param_2,puVar1);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar2 = puVar1;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bf49420(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      puStack_a0 = puVar5;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bf493c0(0x4020000000000000,puVar6,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      puStack_98 = puVar8;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_1;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf493c0(0xc020000000000000,puVar9,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      puStack_90 = puVar11;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_1;
      func_0x00010bf348e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00010bf493a0(puVar12,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_1;
      puStack_88 = puVar14;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010bf49580(0x4061800000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_80 = puVar16;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4,param_2,puVar17);
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
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return param_3;
}



/* Entry: 1062bd8f4; end: 1062bd92b; -[SCContextSpotlightHashtagView pointInside:withEvent:] */

void FUN_1062bd8f4(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 1062bd92c; end: 1062bd93b; -[SCContextSpotlightHashtagView hashtag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062bd92c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744f04);
}



/* Entry: 1062bd93c; end: 1062bd94f; -[SCContextSpotlightHashtagView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bd93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744f04,0);
  return;
}



/* Entry: 1062bd950; end: 1062bda8f; +[SCContextSpotlightHeartView presentAnimatedFromView:location:] */

void FUN_1062bd950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x0001062cd48c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1);
  _objc_release(puVar2);
  _CGAffineTransformMakeScale(&uStack_80,0x3fb999999999999a,0x3fb999999999999a);
  _CGAffineTransformMakeRotation(&uStack_b0,0x3fc657184ae74487);
  func_0x00010c17a6a0(param_1,param_2,puVar1);
  func_0x00010c1677c0(0,puVar1);
  uStack_108 = uStack_78;
  uStack_110 = uStack_80;
  uStack_f8 = uStack_68;
  uStack_100 = uStack_70;
  uStack_e8 = uStack_58;
  uStack_f0 = uStack_60;
  uStack_138 = uStack_a8;
  uStack_140 = uStack_b0;
  uStack_128 = uStack_98;
  uStack_130 = uStack_a0;
  uStack_118 = uStack_88;
  uStack_120 = uStack_90;
  _CGAffineTransformConcat(&uStack_e0,&uStack_110,&uStack_140);
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  func_0x00010c219960(puVar1);
  func_0x00010befbb60(param_5);
  _objc_release(param_5);
  func_0x00010bdca8a0(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1062bda90; end: 1062bdb97; +[SCContextSpotlightHeartView _animateAndRemoveFromParentWithView:] */

void FUN_1062bda90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  _objc_retain(param_3);
  uVar3 = 0x14;
  _arc4random_uniform();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  dStack_48 = (double)(uVar3 & 0xffffffff) + -10.0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1062bdb98;
  puStack_58 = &UNK_110848c48;
  _objc_retain(param_3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1062bdc48;
  puStack_88 = &UNK_1108471e0;
  uStack_80 = param_3;
  uStack_78 = param_1;
  uStack_50 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03460(0x3fd999999999999a,0,0x3fe0000000000000,0x3fe3333333333333,puVar2,param_2,0,
                      &puStack_70,&puStack_a0);
  _objc_release(uStack_80);
  _objc_release(uStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 1062bdb98; end: 1062bdc47;  */

void FUN_1062bdb98(long param_1)

{
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeRotation
            (&uStack_50,(*(double *)(param_1 + 0x28) / 180.0) * 3.141592653589793);
  _CGAffineTransformMakeScale(&uStack_80,0x3ff0000000000000,0x3ff0000000000000);
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_108 = uStack_48;
  uStack_110 = uStack_50;
  uStack_f8 = uStack_38;
  uStack_100 = uStack_40;
  uStack_e8 = uStack_28;
  uStack_f0 = uStack_30;
  _CGAffineTransformConcat(&uStack_b0,&uStack_e0,&uStack_110);
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1062bdc48; end: 1062bdc53;  */

void FUN_1062bdc48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde8890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__continueDisappearAnimationWithV_112557bc0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1062bdc54; end: 1062bdd2f; +[SCContextSpotlightHeartView _continueDisappearAnimationWithView:] */

void FUN_1062bdc54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1062bdd30;
  puStack_50 = &UNK_110842e18;
  _objc_retain(param_3);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1062bdeb0;
  puStack_78 = &UNK_110841f20;
  uStack_70 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf02ee0(0x3fe6666666666666,0,puVar2,param_2,2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1062bdd30; end: 1062bde27;  */

void FUN_1062bdd30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1062bde28;
  puStack_70 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_68 = uVar3;
  func_0x00010bef95a0(0x3fe6666666666666,0x3fc999999999999a,puVar2,param_2,&puStack_88);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1062bdea4;
  puStack_98 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_90 = uVar3;
  func_0x00010bef95a0(0x3fe6666666666666,0x3fc999999999999a,puVar2,param_2,&puStack_b0);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  return;
}



/* Entry: 1062bde28; end: 1062bdea3;  */

void FUN_1062bde28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_80);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  _CGAffineTransformScale(&uStack_50,0x3ff8000000000000,0x3ff8000000000000,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(uVar1,param_2,&uStack_80);
  return;
}



/* Entry: 1062bdea4; end: 1062bdeb7;  */

void FUN_1062bdea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062bdeb8; end: 1062be43b; -[SCContextSpotlightHeroContextLabelView initWithHeroContextCardType:friendUserIdsArray:snapchattersDataFetcher:groupAvatarScopeExposer:currentUserId:avatarProvider:isRecommended:heroContextCardDataModel:heroContextCardsCount:contextCardThumbnail:imageDownloader:imagePerformer:circumstanceEngine:bloopsCTATargetsService:ctpItemViewService:storiesConfigProvider:contextExperimentService:profileImageProvider:hasTrailingAccessoryContent:viewLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1062bdeb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,long param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_80 = PTR_PTR_1126f0be0;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112744f08;
    *(undefined8 *)((long)puVar2 + lVar5) = param_3;
    lVar6 = (long)_DAT_112744f0c;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_4;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112744f10;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_5;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112744f14;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_6;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    lVar7 = (long)_DAT_112744f18;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar4;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112744f1c;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_7;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112744f20;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_8;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112744f24) = param_9;
    uVar1 = 0;
    if (*(long *)((long)puVar2 + lVar5) == 5) {
      uVar1 = param_9;
    }
    *(undefined1 *)((long)puVar2 + (long)_DAT_112744f28) = uVar1;
    lVar5 = (long)_DAT_112744f2c;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(long *)((long)puVar2 + lVar5) = param_11;
    _objc_release(uVar3);
    lVar5 = param_11;
    func_0x00010bf4e3c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    if (lVar6 != 0) {
      lVar5 = param_11;
      func_0x00010bf4e3c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112744f30);
      *(long *)((long)puVar2 + (long)_DAT_112744f30) = lVar5;
      _objc_release(uVar3);
    }
    *(undefined8 *)((long)puVar2 + (long)_DAT_112744f34) = param_12;
    lVar5 = (long)_DAT_112744f38;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_13;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744f3c;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_14;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744f40;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_15;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744f44;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_16;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744f48;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_17;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744f4c;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_18;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744f50;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_19;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744f54;
    _objc_retain(param_20);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_20;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112744f58;
    _objc_retain(param_21);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_21;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112744f5c) = param_22;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112744f60) = param_24;
    func_0x00010beb14e0(puVar2);
    _objc_initWeak(auStack_90,puVar2);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    func_0x00010bfbc3e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1062be43c;
    puStack_a0 = &UNK_110864498;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010be1c100(puVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 1062be43c; end: 1062be4cb;  */

void FUN_1062be43c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b140();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062be4cc; end: 1062be58f; -[SCContextSpotlightHeroContextLabelView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062be4cc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0be0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  lVar2 = (long)_DAT_112744f64;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar2));
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_1);
  func_0x00010bf19a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar2));
  _objc_release(puVar1);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112744f68));
  func_0x00010bed2560(param_1);
  return;
}



/* Entry: 1062be590; end: 1062bf6bf; -[SCContextSpotlightHeroContextLabelView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1062be590(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  func_0x00010c219b60(param_1,param_2,0);
  lVar23 = param_1;
  func_0x00010be46b80();
  lVar18 = (long)_DAT_112744f6c;
  *(long *)(param_1 + lVar18) = lVar23;
  puVar21 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar20 = (long)_DAT_112744f70;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar21;
  _objc_release(uVar19);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010c207380(0x4010000000000000,*(undefined8 *)(param_1 + lVar20));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar20),param_2,3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar20));
  puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010bf493c0(0x401c000000000000,uVar2,param_2,lVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  uStack_a0 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010bf493c0(0xc01c000000000000,uVar3,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  uStack_98 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf493c0(0x4010000000000000,uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar20);
  uStack_90 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493c0(0xc010000000000000,uVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar21,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(lVar22);
  _objc_release(uVar3);
  _objc_release(uVar19);
  _objc_release(lVar23);
  _objc_release(uVar2);
  puVar21 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar22 = (long)_DAT_112744f74;
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar21;
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar22),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar22),param_2,
                      &PTR____CFConstantStringClassReference_110e480b8);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar22),param_2,0);
  lVar23 = param_1;
  func_0x00010bee73e0();
  uVar19 = 0x4030000000000000;
  if ((int)lVar23 != 0) {
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar22),param_2,4);
    puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar22),param_2,puVar21);
    _objc_release(puVar21);
    uVar19 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar19);
    uVar19 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar19);
    uVar19 = 0x4034000000000000;
  }
  uVar10 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bfe0660(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar11);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2a5060(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar11);
  _objc_release(uVar10);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar22),param_2,1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar22));
  puVar21 = PTR_PTR_1126b0870;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar23 = (long)_DAT_112744f78;
  uVar19 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar21;
  _objc_release(uVar19);
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar23),param_2,puVar21);
  _objc_release(puVar21);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar23),param_2,
                      &PTR____CFConstantStringClassReference_110e480d8);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar23),param_2,1);
  uVar11 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bfe0660(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar11;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar19);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2a5060(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar11;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar19);
  _objc_release(uVar11);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar23));
  puVar21 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar22 = (long)_DAT_112744f7c;
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar21;
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar22),param_2,1);
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar22),param_2,1);
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar22),param_2,0);
  puVar21 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar23 = (long)_DAT_112744f80;
  uVar19 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar21;
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar23),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar23),param_2,
                      &PTR____CFConstantStringClassReference_110e480f8);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar23),param_2,1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar22),param_2,*(undefined8 *)(param_1 + lVar23));
  puVar21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar23);
  uStack_c0 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar23);
  uStack_b8 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar23);
  uStack_b0 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar21,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010beac760(param_1);
  lVar23 = (long)_DAT_112744f08;
  if (*(long *)(param_1 + lVar23) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112744f50);
    FUN_1062ca2c0();
    if (iVar1 == 0) goto LAB_1062bee38;
    uVar11 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c2a5060(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar19);
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010bfe0660(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar19);
    _objc_release(uVar11);
    func_0x00010c066580(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar22),
                        0);
    func_0x00010c1887e0(0x4000000000000000,*(undefined8 *)(param_1 + lVar20),param_2,
                        *(undefined8 *)(param_1 + lVar22));
  }
  else {
LAB_1062bee38:
    uVar11 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010c2a5060(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar19);
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)(param_1 + lVar22);
    func_0x00010bfe0660(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar19);
    _objc_release(uVar11);
    func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar22))
    ;
  }
  if ((*(ulong *)(param_1 + lVar23) & 0xfffffffffffffffe) == 2) {
    puVar21 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar23 = (long)_DAT_112744f84;
    uVar19 = *(undefined8 *)(param_1 + lVar23);
    *(undefined **)(param_1 + lVar23) = puVar21;
    _objc_release(uVar19);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23),param_2,0);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar23),param_2,
                        &PTR____CFConstantStringClassReference_110e48118);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar23),param_2,0);
    uVar11 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c2a5060(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar19);
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010bfe0660(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar19);
    _objc_release(uVar11);
    uVar19 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar19);
    uVar19 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar19);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar23),param_2,1);
    func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar23))
    ;
  }
  puVar21 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar22 = (long)_DAT_112744f88;
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar21;
  _objc_release(uVar19);
  uVar11 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c219b60(uVar11,param_2,0);
  func_0x00010052bbec();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar11;
  func_0x00010bfb3e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar22),param_2,uVar19);
  _objc_release(uVar19);
  _objc_release(uVar11);
  func_0x00010c165e00(*(undefined8 *)(param_1 + lVar22),param_2,1);
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  lVar23 = param_1;
  func_0x00010bde1ee0(param_1);
  func_0x00010c23ba80(puVar21,param_2,lVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar22),param_2,puVar21);
  _objc_release(puVar21);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar22),param_2,
                      &PTR____CFConstantStringClassReference_110e48138);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar22));
  puVar21 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar22 = (long)_DAT_112744f8c;
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar21;
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar22),param_2,
                      &PTR____CFConstantStringClassReference_110e48158);
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  lVar23 = param_1;
  func_0x00010bde1ee0(param_1);
  func_0x00010c23ba80(puVar21,param_2,lVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar21;
  func_0x00010bf414e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar22),param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar21);
  uVar11 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2a5060(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar11;
  func_0x00010bf49420(0x3ff8000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar19);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bfe0660(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar11;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar19);
  _objc_release(uVar11);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar22),param_2,1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar22));
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08c0e0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x3ff0000000000000);
  _objc_release(uVar19);
  puVar21 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar22 = (long)_DAT_112744f90;
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar21;
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar22),param_2,0x18);
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  lVar23 = param_1;
  func_0x00010bde1ee0(param_1);
  func_0x00010c23ba80(puVar21,param_2,lVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar22),param_2,puVar21);
  _objc_release(puVar21);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar22),param_2,1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar22));
  puVar21 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar23 = (long)_DAT_112744f94;
  uVar19 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar21;
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar23),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar23),param_2,
                      &PTR____CFConstantStringClassReference_110e48178);
  if (*(long *)(param_1 + lVar18) == 1) {
    uVar19 = 0xd4;
  }
  else {
    if (*(long *)(param_1 + lVar18) != 0) {
      puVar21 = (undefined *)0x0;
      goto LAB_1062bf35c;
    }
    uVar19 = 0x5a;
  }
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
LAB_1062bf35c:
  uVar10 = 0x4028000000000000;
  puVar9 = PTR_PTR_1126b0c40;
  func_0x00010bfe7aa0(0x4028000000000000,0x4028000000000000,PTR_PTR_1126b0c40,param_2,0x87,puVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar9;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar23),param_2,puVar16);
  _objc_release(puVar16);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar23),param_2,0);
  uVar11 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2a5060(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar11;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar19);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bfe0660(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar11;
  func_0x00010bf49420(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar19);
  _objc_release(uVar11);
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar23),param_2,1);
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar23),param_2,1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar23));
  lVar23 = param_1;
  func_0x00010beb72e0();
  if ((int)lVar23 == 0) {
    if (*(long *)(param_1 + lVar18) == 0) {
      puVar16 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
      _objc_alloc();
      puVar17 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
      func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,0x10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00ee20(puVar16,param_2,puVar17);
      lVar23 = (long)_DAT_112744f98;
      uVar19 = *(undefined8 *)(param_1 + lVar23);
      *(undefined **)(param_1 + lVar23) = puVar16;
      _objc_release(uVar19);
      _objc_release(puVar17);
      func_0x00010c1677c0(0x3feccccccccccccd,*(undefined8 *)(param_1 + lVar23));
    }
    else if (*(long *)(param_1 + lVar18) == 1) {
      puVar16 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      lVar23 = (long)_DAT_112744f98;
      uVar19 = *(undefined8 *)(param_1 + lVar23);
      *(undefined **)(param_1 + lVar23) = puVar16;
      _objc_release(uVar19);
      puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar23),param_2,puVar16);
      _objc_release(puVar16);
    }
    else {
      lVar23 = (long)_DAT_112744f98;
    }
  }
  else {
    puVar16 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar23 = (long)_DAT_112744f98;
    uVar19 = *(undefined8 *)(param_1 + lVar23);
    *(undefined **)(param_1 + lVar23) = puVar16;
    _objc_release(uVar19);
    puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar23),param_2,puVar16);
    _objc_release(puVar16);
    func_0x00010beada60(param_1);
  }
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar23),param_2,1);
  func_0x00010c066fa0(param_1,param_2,*(undefined8 *)(param_1 + lVar23),0);
  func_0x00010bea8e60(param_1);
  lVar23 = param_1;
  func_0x00010bfe0660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0x403e000000000000;
  lVar22 = lVar23;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar22);
  _objc_release(lVar23);
  puVar16 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_new();
  uVar19 = *(undefined8 *)(param_1 + _DAT_112744f64);
  *(undefined **)(param_1 + _DAT_112744f64) = puVar16;
  _objc_release(uVar19);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    auVar25._8_8_ = uVar10;
    auVar25._0_8_ = uVar11;
    return auVar25;
  }
  ___stack_chk_fail();
  if (puVar21[_DAT_112744f5c] == '\x01') {
    dVar24 = *(double *)PTR__UILayoutFittingExpandedSize_110345d30;
    uVar19 = 0x403e000000000000;
    func_0x00010c267060(dVar24,0x403e000000000000,0x42480000,0x447a0000,
                        *(undefined8 *)(puVar21 + _DAT_112744f70));
    auVar26._0_8_ = dVar24 + 14.0;
    auVar26._8_8_ = uVar19;
    return auVar26;
  }
  auVar27._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar27._8_8_ = 0x403e000000000000;
  return auVar27;
}



/* Entry: 1062bf6c0; end: 1062bf72f; -[SCContextSpotlightHeroContextLabelView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1062bf6c0(long param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (*(char *)(param_1 + _DAT_112744f5c) == '\x01') {
    dVar1 = *(double *)PTR__UILayoutFittingExpandedSize_110345d30;
    uVar2 = 0x403e000000000000;
    func_0x00010c267060(dVar1,0x403e000000000000,0x42480000,0x447a0000,
                        *(undefined8 *)(param_1 + _DAT_112744f70));
    auVar3._0_8_ = dVar1 + 14.0;
    auVar3._8_8_ = uVar2;
    return auVar3;
  }
  auVar4._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar4._8_8_ = 0x403e000000000000;
  return auVar4;
}



/* Entry: 1062bf730; end: 1062bf7e7; -[SCContextSpotlightHeroContextLabelView isPointInTrailingTapZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1062bf730(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_112744f8c;
  uVar2 = *(ulong *)(param_5 + lVar3);
  bVar1 = false;
  if (uVar2 != 0) {
    dVar4 = param_1;
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
      func_0x00010bf513e0(param_5,param_6,*(undefined8 *)(param_5 + lVar3));
      func_0x00010bf8d060();
      if (param_5 == 1) {
        _CGRectGetMaxX();
        bVar1 = param_1 <= dVar4;
      }
      else {
        _CGRectGetMinX(dVar4,param_2,param_3,param_4);
        bVar1 = dVar4 <= param_1;
      }
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



/* Entry: 1062bf7e8; end: 1062bfacb; -[SCContextSpotlightHeroContextLabelView _updateAccessibilityElementsIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001062bf918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062bf9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062bf9e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062bf9b0) */
/* WARNING: Removing unreachable block (ram,0x0001062bf9b4) */
/* WARNING: Removing unreachable block (ram,0x0001062bf9b8) */
/* WARNING: Removing unreachable block (ram,0x0001062bf91c) */
/* WARNING: Removing unreachable block (ram,0x0001062bf930) */
/* WARNING: Removing unreachable block (ram,0x0001062bf9e4) */
/* WARNING: Removing unreachable block (ram,0x0001062bfa10) */
/* WARNING: Removing unreachable block (ram,0x0001062bfa94) */
/* WARNING: Removing unreachable block (ram,0x0001062bfaac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bf7e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112744f8c);
  if ((lVar1 == 0) || (func_0x00010c074c20(), (int)lVar1 != 0)) {
    func_0x00010c1af000(param_1);
    func_0x00010c160ee0(param_1);
    lVar1 = (long)_DAT_112744f88;
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010beecec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_1);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar1);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c161020(param_1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
      ___stack_chk_fail();
      _objc_retain(lVar1);
      lVar4 = lVar1;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        func_0x00010c1a7f60(lVar3);
        *(undefined1 *)(lVar3 + _DAT_112744f9c) = 0;
      }
      else {
        func_0x00010c1a7f60(*(undefined8 *)(lVar3 + _DAT_112744f98));
        func_0x00010c212f20(*(undefined8 *)(lVar3 + _DAT_112744f88));
        func_0x00010bdcec20(lVar3);
        func_0x00010bde5d60(lVar3);
        func_0x00010be005e0(lVar3);
        func_0x00010c1cbe20(lVar3);
        if (*(char *)(lVar3 + _DAT_112744f5c) == '\x01') {
          func_0x00010c069fa0(lVar3);
          lVar4 = lVar3;
          func_0x00010c262ca0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1cbe20();
          _objc_release(lVar4);
        }
        *(undefined1 *)(lVar3 + _DAT_112744f9c) = 1;
      }
      lVar4 = lVar3;
      func_0x00010c0e5fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        func_0x00010c0e5fe0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar3 + 0x10))();
        _objc_release(lVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
    uVar2 = *(undefined8 *)PTR__UIAccessibilityTraitButton_110345920;
  }
  else {
    func_0x00010c1af000(param_1);
    func_0x00010c160fc0(param_1);
    func_0x00010c161020(param_1);
    uVar2 = *(undefined8 *)PTR__UIAccessibilityTraitNone_110345948;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c161090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAccessibilityTraits__112635e40,uVar2);
  return;
}



/* Entry: 1062bfacc; end: 1062bfc0b; -[SCContextSpotlightHeroContextLabelView _handleLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bfacc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c1a7f60(param_1);
    *(undefined1 *)(param_1 + _DAT_112744f9c) = 0;
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744f98));
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112744f88));
    func_0x00010bdcec20(param_1);
    func_0x00010bde5d60(param_1);
    func_0x00010be005e0(param_1);
    func_0x00010c1cbe20(param_1);
    if (*(char *)(param_1 + _DAT_112744f5c) == '\x01') {
      func_0x00010c069fa0(param_1);
      lVar1 = param_1;
      func_0x00010c262ca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbe20();
      _objc_release(lVar1);
    }
    *(undefined1 *)(param_1 + _DAT_112744f9c) = 1;
  }
  lVar1 = param_1;
  func_0x00010c0e5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0e5fe0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062bfc0c; end: 1062bfc1b; -[SCContextSpotlightHeroContextLabelView _fulfillPromiseWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bfc0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744f18),PTR_s_completeWithValue__1125ae900);
  return;
}



/* Entry: 1062bfc1c; end: 1062bfe47; -[SCContextSpotlightHeroContextLabelView _setUpBackgroundViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1062bfc1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112744f98;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  lStack_88 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar2;
  }
  ___stack_chk_fail();
  lVar3 = 0xd4;
  if (*(long *)(lVar2 + _DAT_112744f6c) != 1) {
    lVar3 = 0xd5;
  }
  return lVar3;
}



/* Entry: 1062bfe48; end: 1062bfe63; -[SCContextSpotlightHeroContextLabelView _colorBasedOnLabelStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062bfe48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd4;
  if (*(long *)(param_1 + _DAT_112744f6c) != 1) {
    uVar1 = 0xd5;
  }
  return uVar1;
}



/* Entry: 1062bfe64; end: 1062bff67; -[SCContextSpotlightHeroContextLabelView _labelStyleFromConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1062bfe64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + _DAT_112744f08) == 4) {
    return 1;
  }
  if (*(long *)(param_1 + _DAT_112744f08) == 5) {
    if (*(long *)(param_1 + _DAT_112744f60) != 0x1e) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112744f54);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c132220();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) goto LAB_1062bfedc;
    }
    uVar6 = 1;
  }
  else {
LAB_1062bfedc:
    lVar3 = param_1;
    func_0x00010be44d20();
    if ((int)lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar4 = *(ulong *)(param_1 + _DAT_112744f50);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c9500;
      func_0x00010c24c7e0(PTR_PTR_1126c9500);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf1f320(uVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar4);
      uVar6 = uVar6 & 1;
    }
  }
  return uVar6;
}



/* Entry: 1062bff68; end: 1062bff83; -[SCContextSpotlightHeroContextLabelView _isTrendingCardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1062bff68(long param_1)

{
  return (*(ulong *)(param_1 + _DAT_112744f08) & 0xfffffffffffffffe) == 10;
}



/* Entry: 1062bff84; end: 1062bffbb; -[SCContextSpotlightHeroContextLabelView _usesTrendingLightStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062bff84(void)

{
  func_0x00010be44d20();
  return;
}



/* Entry: 1062bffbc; end: 1062c002f; -[SCContextSpotlightHeroContextLabelView _shouldUseLensPlusBranding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062bffbc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744f54);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112744f2c);
  func_0x00010c076700();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar2;
    func_0x00010c095ca0(uVar2);
  }
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 1062c0030; end: 1062c0063; -[SCContextSpotlightHeroContextLabelView _shouldShowExclusiveLensThumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1062c0030(long param_1)

{
  if ((*(long *)(param_1 + _DAT_112744f08) == 0xd || *(long *)(param_1 + _DAT_112744f08) == 0xb) &&
     (*(long *)(param_1 + _DAT_112744fa0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010beb72f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldUseLensPlusBranding_11258b660);
    return param_1;
  }
  return 0;
}



/* Entry: 1062c0064; end: 1062c015b; -[SCContextSpotlightHeroContextLabelView _exclusiveLensThumbnailImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c0064(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112744f38;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010bf4e000();
  if (iVar1 != 1) {
    lVar6 = 0;
    goto LAB_1062c0144;
  }
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bfd4360();
  if ((int)lVar6 == 0) {
LAB_1062c0138:
    lVar6 = 0;
  }
  else {
    lVar6 = lVar2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c24cb80();
    if ((int)lVar3 != 2) {
      _objc_release(lVar6);
      goto LAB_1062c0138;
    }
    lVar3 = lVar2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c129b60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar6);
    if (lVar5 == 0) goto LAB_1062c0138;
    _objc_retain(lVar2);
    lVar6 = lVar2;
  }
  _objc_release(lVar2);
LAB_1062c0144:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1062c015c; end: 1062c04f3; -[SCContextSpotlightHeroContextLabelView _setupExclusiveLensThumbnailViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c015c(long param_1)

{
  long lVar1;
  long lVar2;
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
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if (((*(long *)(param_1 + _DAT_112744f08) == 0xd || *(long *)(param_1 + _DAT_112744f08) == 0xb) &&
      (lVar20 = (long)_DAT_112744fa0, *(long *)(param_1 + lVar20) == 0)) &&
     (func_0x00010beb72e0(), (int)lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00010be0b760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + _DAT_112744f3c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (lVar2 != 0)) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112744f44);
      FUN_10646addc(0x4030000000000000,0x4030000000000000,0x4030000000000000,0x4030000000000000,
                    uVar3,lVar2,*(undefined8 *)(param_1 + _DAT_112744f40),
                    *(undefined8 *)(param_1 + _DAT_112744f48),0,0,
                    *(undefined8 *)(param_1 + _DAT_112744f4c));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      func_0x00010c1a7f60(uVar3);
      func_0x00010c160fc0(uVar3);
      uVar16 = uVar3;
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4010000000000000);
      _objc_release(uVar16);
      uVar16 = uVar3;
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(uVar16);
      func_0x00010bf47900(uVar3);
      lVar19 = (long)_DAT_112744f7c;
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar19));
      puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar16 = uVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar16;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010c274200(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + lVar19);
      func_0x00010bf1ff80(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar17);
      _objc_release(puVar15);
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
      _objc_release(uVar16);
      uVar16 = *(undefined8 *)(param_1 + lVar20);
      *(undefined8 *)(param_1 + lVar20) = uVar3;
      _objc_release(uVar16);
    }
    _objc_release(lVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = (long)_DAT_112744f68;
  if (*(long *)(lVar1 + lVar18) != 0) {
    return;
  }
  puVar17 = PTR_PTR_1126c96b0;
  _objc_opt_new();
  func_0x00010bf20c00(lVar1);
  func_0x00010c19f0e0(puVar17);
  lVar20 = lVar1;
  func_0x00010c08c0e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(lVar20);
  lVar20 = lVar1;
  func_0x00010c08c0e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar20);
  func_0x00010c228ac0(0x401c000000000000,puVar17);
  uVar16 = *(undefined8 *)(lVar1 + lVar18);
  *(undefined **)(lVar1 + lVar18) = puVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return;
}



/* Entry: 1062c04f4; end: 1062c05b7; -[SCContextSpotlightHeroContextLabelView _setupLensPlusLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c04f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112744f68;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c96b0;
  _objc_opt_new();
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(puVar1);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar2);
  func_0x00010c228ac0(0x401c000000000000,puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1062c05b8; end: 1062c065b; -[SCContextSpotlightHeroContextLabelView _configureTrailingClusterForSplitTapTarget] */

/* WARNING: Possible PIC construction at 0x0001062c0638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062c063c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c05b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_112744f34) < 2) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcc618);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112744f90;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 1062c065c; end: 1062c0b3f; -[SCContextSpotlightHeroContextLabelView _didSetBitmojiAndText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c065c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar5 = (long)_DAT_112744f90;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c074c20();
  if (iVar1 == 0) {
    func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar5));
    lVar6 = (long)_DAT_112744f88;
    uVar2 = 0x437a0000;
    func_0x00010c181cc0(0x437a0000,*(undefined8 *)(param_1 + lVar6));
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar5));
  }
  else {
    lVar6 = (long)_DAT_112744f88;
    uVar2 = 0x447a0000;
  }
  func_0x00010c181f00(uVar2,*(undefined8 *)(param_1 + lVar6));
  func_0x00010beb5d80(param_1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744f94));
  lVar5 = param_1;
  func_0x00010beb60c0();
  if ((int)lVar5 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744f7c));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744f80));
    iVar1 = _DAT_112744fa0;
LAB_1062c0790:
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + iVar1));
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744f7c));
    lVar5 = param_1;
    func_0x00010beb5f60();
    if ((int)lVar5 != 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744fa0));
      iVar1 = _DAT_112744f80;
      goto LAB_1062c0790;
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744fa0));
    lVar6 = (long)_DAT_112744f80;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
    lVar5 = param_1;
    func_0x00010be369a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar6));
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010beb6120();
  if ((int)lVar5 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744f74);
  }
  else {
    lVar5 = param_1;
    func_0x00010be49d60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112744f74;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar6));
    _objc_release(lVar5);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
  }
  func_0x00010c1a7f60(uVar2);
  if ((*(ulong *)(param_1 + _DAT_112744f08) & 0xfffffffffffffffe) != 2) {
    return;
  }
  _objc_initWeak(auStack_58,param_1);
  lVar3 = *(long *)(param_1 + _DAT_112744f2c);
  func_0x00010c105760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c116d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar6 == 0) {
    lVar5 = lVar3;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    if (lVar6 == 0) {
      lVar6 = lVar3;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c08fa60();
      _objc_release(lVar6);
      _objc_release(lVar5);
      if (lVar7 == 0) {
        lVar7 = (long)_DAT_112744f84;
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7));
        lVar5 = lVar3;
        func_0x00010c2923e0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x000108ffe710();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = 0;
        func_0x000108ffef38(0,lVar6,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar7));
        _objc_release(uVar2);
        _objc_release(lVar6);
        _objc_release(lVar5);
        goto LAB_1062c0a68;
      }
    }
    else {
      _objc_release(lVar5);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744f84));
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744f58);
    lVar5 = lVar3;
    func_0x00010bf1acc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf1c0a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c2923e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_58);
    func_0x00010bfa5500(uVar2);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    puVar4 = auStack_90;
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744f84));
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744f58);
    lVar5 = lVar3;
    func_0x00010c116d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1062c0b40;
    puStack_70 = &UNK_110855f90;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar3);
    lStack_68 = lVar3;
    func_0x00010bfa97c0(uVar2);
    _objc_release(lVar5);
    _objc_release(lStack_68);
    puVar4 = auStack_60;
  }
  _objc_destroyWeak(puVar4);
LAB_1062c0a68:
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1062c0b40; end: 1062c0c27;  */

void FUN_1062c0b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1062c0c28;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1062c0c28; end: 1062c0ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c0c28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c2923e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000108ffe710();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0;
      func_0x000108ffef38(0,uVar3,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_112744f84));
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_112744f84));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062c0ce8; end: 1062c0db7;  */

void FUN_1062c0ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1062c0db8;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1062c0db8; end: 1062c0dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c0db8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_112744f84),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062c0dfc; end: 1062c0f87; -[SCContextSpotlightHeroContextLabelView _generateTextWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c0dfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar1 = param_3;
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_1062c0f74;
  switch(*(undefined8 *)(param_1 + _DAT_112744f08)) {
  case 0:
  case 5:
    func_0x00010be1ba20(param_1);
    goto LAB_1062c0f74;
  case 1:
    func_0x0001062cce64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1ac20(param_1);
    break;
  case 2:
  case 3:
  case 6:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    lVar3 = (long)_DAT_112744f30;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar2 = *(undefined ***)(param_1 + lVar3);
    }
    (**(code **)(param_3 + 0x10))(param_3,ppuVar2);
    goto LAB_1062c0f74;
  case 4:
    func_0x0001062cce1c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x0001062cce04();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1ac20(param_1);
    goto code_r0x0001062c0f68;
  case 7:
    func_0x0001062ccf3c();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001062c0f38;
  case 8:
    func_0x0001062ccf24();
    _objc_retainAutoreleasedReturnValue();
code_r0x0001062c0f38:
    func_0x00010bec8dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,param_1);
    lVar3 = param_1;
code_r0x0001062c0f68:
    _objc_release(lVar3);
    break;
  case 0x12:
    func_0x0001062cce4c();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
    break;
  default:
    goto LAB_1062c0f74;
  }
  _objc_release(lVar1);
LAB_1062c0f74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062c0f88; end: 1062c113b; -[SCContextSpotlightHeroContextLabelView _generateCalloutViewTextWithText:fallbackText:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c0f88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + _DAT_112744f0c);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,&PTR____CFConstantStringClassReference_110daafd8);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744f10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_retain(param_5);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c244e80(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062c113c; end: 1062c127f;  */

void FUN_1062c113c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),&PTR____CFConstantStringClassReference_110daafd8);
    goto LAB_1062c1268;
  }
  func_0x00010bf529e0();
  lVar1 = param_2;
  func_0x00010c25e980(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfb1920(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010be61dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar5);
  lVar5 = lVar3;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    plVar4 = (long *)(param_1 + 0x20);
    lVar5 = *plVar4;
    func_0x00010c08fa60();
    if (lVar5 == 0) goto LAB_1062c11ec;
  }
  else {
LAB_1062c11ec:
    plVar4 = (long *)(param_1 + 0x28);
  }
  lVar5 = *plVar4;
  _objc_retain(lVar5);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1aba0();
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar1);
LAB_1062c1268:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062c1280; end: 1062c130b; -[SCContextSpotlightHeroContextLabelView _suggestedSearchTextWithPrefix:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c1280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_112744f30);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db27b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1062c130c; end: 1062c149b; -[SCContextSpotlightHeroContextLabelView _applySuggestedSearchPrefixHighlightIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c130c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = param_3;
  _objc_retain();
  uVar7 = 0;
  uVar2 = *(long *)(param_1 + _DAT_112744f08) + 1;
  if (uVar2 < 0x14) {
    if ((1L << (uVar2 & 0x3f) & 0xffcffU) != 0) goto LAB_1062c1368;
    if (uVar2 == 8) {
      func_0x0001062ccf3c();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
    }
    else {
      func_0x0001062ccf24();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
    }
  }
  uVar2 = uVar7;
  func_0x00010c08fa60();
  if ((uVar2 != 0) && (uVar2 = param_3, func_0x00010bfda7c0(param_3,param_2,uVar7), (int)uVar2 != 0)
     ) {
    lVar8 = (long)_DAT_112744f88;
    uVar3 = *(ulong *)(param_1 + lVar8);
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c08fa60();
    uVar1 = uVar7;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    if (uVar1 <= uVar2) {
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf0e540(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0d3c80();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2e);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010c08fa60(uVar7);
      func_0x00010bef6f20(uVar5,param_2,uVar4,puVar6,0,uVar2);
      _objc_release(puVar6);
      func_0x00010c16b720(*(undefined8 *)(param_1 + lVar8),param_2,uVar5);
      _objc_release(uVar5);
    }
  }
LAB_1062c1368:
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062c149c; end: 1062c155b; -[SCContextSpotlightHeroContextLabelView _nameToDisplayFromSnapchatter:] */

void FUN_1062c149c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    ppuVar3 = (undefined **)PTR_PTR_1126b2c18;
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = param_3;
      func_0x00010c294420(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar2 = param_3;
      func_0x00010bf85d80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1120(ppuVar3,param_2,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
    }
    _objc_release(ppuVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1062c155c; end: 1062c1673; -[SCContextSpotlightHeroContextLabelView _generateRecommendCalloutViewWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c155c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_3;
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_112744f24) == '\x01') {
    if (*(long *)(param_1 + _DAT_112744f08) == 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112744f1c);
      uVar1 = *(undefined8 *)(param_1 + _DAT_112744f20);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 0;
      FUN_1062c1674(0,1,uVar3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x0001062cce94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1c0c0(param_1);
      _objc_release(uVar1);
      goto LAB_1062c15d4;
    }
    func_0x0001062cce94();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001062cce7c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be1ac20(param_1);
LAB_1062c15d4:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062c1674; end: 1062c18bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c1674(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    puVar3 = PTR_PTR_1126b5978;
    _objc_alloc(PTR_PTR_1126b5978);
    uVar8 = param_4;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ad80(puVar3);
    _objc_release(uVar8);
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_1);
  puVar6 = &uStack_130;
  puVar7 = auStack_f0;
  uVar8 = 0x10;
  lVar4 = param_1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        puVar3 = PTR_PTR_1126b5978;
        _objc_alloc();
        uVar8 = uVar11;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05ad80();
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar8);
        func_0x00010befa120(puVar2);
        _objc_release(puVar3);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      puVar6 = &uStack_130;
      puVar7 = auStack_f0;
      uVar8 = 0x10;
      lVar4 = param_1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_1);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined1 *)(param_1 + _DAT_112744f28);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112744f1c);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112744f20);
  _objc_retain(param_6);
  _objc_retain(uVar8);
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  FUN_1062c1674(puVar6,uVar1,uVar11,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar12);
  func_0x00010be1c0c0(param_1);
  _objc_release(param_6);
  _objc_release(uVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1062c18c0; end: 1062c19cf; -[SCContextSpotlightHeroContextLabelView _generateBitmojiWithSnapchatters:text:displayName:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062c18c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_112744f28);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744f1c);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112744f20);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_1062c1674(param_3,uVar1,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  func_0x00010be1c0c0(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1062c19d0; end: 1062c1ab7; -[SCContextSpotlightHeroContextLabelView _generateTextAndBitmojisWithDisplayName:text:groupAvatarParticipants:completion:] */

void FUN_1062c19d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1062c1ab8;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_3;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be1abc0(param_1,param_2,param_5,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1062c1ab8; end: 1062c1aff;  */

void FUN_1062c1ab8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010becb760(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


