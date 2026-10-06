/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105da5e14; end: 105da5e23; -[SCCropOverlayViewImpl currentScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da5e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127361ac),PTR_s_scale_112631268);
  return;
}



/* Entry: 105da5e24; end: 105da5ebb; -[SCCropOverlayViewImpl setTranslation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da5e24(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  pdVar1 = (double *)(param_3 + _DAT_1127361a8);
  dVar2 = *pdVar1;
  _CGRectGetWidth(dVar2,pdVar1[1],pdVar1[2],pdVar1[3]);
  dVar3 = dVar2;
  func_0x00010bf20c00(param_3);
  _CGRectGetMidX();
  dVar4 = *pdVar1;
  _CGRectGetHeight(dVar4,pdVar1[1],pdVar1[2],pdVar1[3]);
  dVar5 = dVar4;
  func_0x00010bf20c00(param_3);
  _CGRectGetMidY();
                    /* WARNING: Could not recover jumptable at 0x00010c219b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar3 + dVar2 * param_1,dVar5 + dVar4 * param_2,
             *(undefined8 *)(param_3 + _DAT_1127361ac),PTR_s_setTranslation__112664108);
  return;
}



/* Entry: 105da5ebc; end: 105da5ecb; -[SCCropOverlayViewImpl setRotation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da5ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ee7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127361ac),PTR_s_setRotation__112659410);
  return;
}



/* Entry: 105da5ecc; end: 105da5edb; -[SCCropOverlayViewImpl setScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da5ecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127361ac),PTR_s_setScale__11265b220);
  return;
}



/* Entry: 105da5edc; end: 105da5fbf; -[SCCropOverlayViewImpl updateWithCroppingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da5edc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_4);
  func_0x00010c27ade0(param_4);
  pdVar1 = (double *)(param_2 + _DAT_1127361a8);
  dVar3 = *pdVar1;
  _CGRectGetWidth(dVar3,pdVar1[1],pdVar1[2],pdVar1[3]);
  dVar4 = dVar3;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  dVar6 = dVar4 + dVar3 * param_1;
  func_0x00010c27ae20(param_4);
  dVar5 = *pdVar1;
  _CGRectGetHeight(dVar5,pdVar1[1],pdVar1[2],pdVar1[3]);
  dVar3 = dVar5;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  lVar2 = (long)_DAT_1127361ac;
  func_0x00010c219b80(dVar6,dVar3 + dVar5 * dVar4,*(undefined8 *)(param_2 + lVar2));
  func_0x00010c141a80(param_4);
  func_0x00010c1ee7a0(*(undefined8 *)(param_2 + lVar2));
  func_0x00010c14e120(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c1f5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar6,*(undefined8 *)(param_2 + lVar2),PTR_s_setScale__11265b220);
  return;
}



/* Entry: 105da5fc0; end: 105da605b; -[SCCropOverlayViewImpl currentTouchTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da5fc0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c0df520();
  if (lVar3 == 2) {
    func_0x00010c09ef00(param_3,param_2,param_1);
    lVar3 = (long)_DAT_1127361ac;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010bfb68e0();
    _CGRectContainsPoint();
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      _objc_retain(uVar2);
      goto LAB_105da603c;
    }
  }
  uVar2 = 0;
LAB_105da603c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105da605c; end: 105da60bb; -[SCCropOverlayViewImpl containingGesture:] */

bool FUN_105da605c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bf606e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c262ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != 0;
    _objc_release();
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 105da60bc; end: 105da60bf; -[SCCropOverlayViewImpl beginGesture:] */

void FUN_105da60bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe2b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideTeachingTooltipView_1125d6498);
  return;
}



/* Entry: 105da60c0; end: 105da60e7; -[SCCropOverlayViewImpl isFillScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da60c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c4938,PTR_s_canSubView_completelyCoverSuperV_1125a9010,
             *(undefined8 *)(param_1 + _DAT_1127361ac),param_1,
             *(undefined1 *)(param_1 + _DAT_1127361a0));
  return;
}



/* Entry: 105da60e8; end: 105da610f; -[SCCropOverlayViewImpl isInsideScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da60e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c4938,PTR_s_canSubView_completelyCoverSuperV_1125a9010,param_1,
             *(undefined8 *)(param_1 + _DAT_1127361ac),*(undefined1 *)(param_1 + _DAT_1127361a0));
  return;
}



/* Entry: 105da6110; end: 105da61bf; -[SCCropOverlayViewImpl isEligibleForReset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105da6110(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_1127361ac;
  func_0x00010c141a80(*(undefined8 *)(param_2 + lVar1));
  param_1 = ABS(param_1);
  if (0.2617993877991494 <= param_1) {
    func_0x00010c141a80(*(undefined8 *)(param_2 + lVar1));
    dVar2 = -param_1;
    if (0.0 <= param_1) {
      dVar2 = param_1;
    }
    dVar2 = 3.141592653589793 - dVar2;
    if (0.2617993877991494 <= dVar2) {
      func_0x00010c141a80(*(undefined8 *)(param_2 + lVar1));
      dVar2 = ABS(1.5707963267948966 - dVar2);
      if (0.2617993877991494 <= dVar2) {
        func_0x00010c141a80(*(undefined8 *)(param_2 + lVar1));
        return ABS(-1.5707963267948966 - dVar2) < 0.2617993877991494;
      }
    }
  }
  return true;
}



/* Entry: 105da61c0; end: 105da61ff; -[SCCropOverlayViewImpl adjustTransformToFillScreenWithCompletion:] */

void FUN_105da61c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bed3320(param_1);
  func_0x00010be16ca0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105da6200; end: 105da63df; -[SCCropOverlayViewImpl scaleToAspectFillWithCompletion:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da6200(double param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_4);
  lVar2 = (long)_DAT_1127361ac;
  func_0x00010c14e120(*(undefined8 *)(param_2 + lVar2));
  dVar3 = param_1;
  func_0x00010c141a80(*(undefined8 *)(param_2 + lVar2));
  dVar4 = ABS(dVar3);
  dVar5 = ABS(dVar3 + 0.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar5))) {
    bVar1 = dVar4 < dVar5;
  }
  if (!bVar1) {
    dVar4 = -dVar3;
    if (0.0 <= dVar3) {
      dVar4 = dVar3;
    }
    dVar5 = ABS(dVar4 + -3.141592653589793);
    dVar4 = ABS(dVar4 + 3.141592653589793) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
      bVar1 = dVar5 < dVar4;
    }
    dVar5 = param_1;
    if (!bVar1) goto LAB_105da62e0;
  }
  dVar4 = *(double *)(param_2 + _DAT_1127361bc);
  dVar5 = dVar4;
  if (dVar4 <= param_1) {
    dVar5 = param_1;
  }
LAB_105da62e0:
  func_0x00010c14e120(*(undefined8 *)(param_2 + lVar2));
  dVar6 = ABS((double)(float)dVar5 - (double)(float)dVar4);
  dVar4 = ABS((double)(float)dVar5 + (double)(float)dVar4) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar4))) {
    bVar1 = dVar6 < dVar4;
  }
  if (bVar1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    func_0x00010bf20c00(param_2);
    _CGRectGetMidX();
    dVar6 = dVar4;
    func_0x00010bf20c00(param_2);
    _CGRectGetMidY();
    _objc_retain(param_4);
    func_0x00010becee80(dVar4,dVar6,dVar3,dVar5,param_2);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105da63e0; end: 105da63f7;  */

void FUN_105da63e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105da63f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 105da63f8; end: 105da6583; -[SCCropOverlayViewImpl scaleToAspectFitWithCompletion:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da63f8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  piVar3 = (int *)&DAT_1127361c0;
  func_0x00010c141a80(*(undefined8 *)(param_2 + _DAT_1127361ac));
  func_0x00010bde4420(param_2);
  dVar4 = ABS(param_1);
  dVar5 = ABS(param_1 + 0.0) * 2.220446049250313e-16;
  bVar2 = true;
  if ((2.2250738585072014e-308 <= dVar4) && (bVar2 = false, !NAN(dVar4) && !NAN(dVar5))) {
    bVar2 = dVar4 < dVar5;
  }
  if (!bVar2) {
    dVar5 = -param_1;
    if (0.0 <= param_1) {
      dVar5 = param_1;
    }
    dVar4 = ABS(dVar5 + 3.141592653589793) * 2.220446049250313e-16;
    if (dVar4 <= 2.2250738585072014e-308) {
      dVar4 = 2.2250738585072014e-308;
    }
    lVar1 = 0x24;
    if (dVar4 <= ABS(dVar5 + -3.141592653589793)) {
      lVar1 = 0x28;
    }
    piVar3 = (int *)(&DAT_11273619c + lVar1);
  }
  uVar6 = *(undefined8 *)(param_2 + *piVar3);
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  dVar5 = dVar4;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105da6584;
  puStack_60 = &UNK_110849530;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010becee80(dVar4,dVar5,param_1,uVar6,param_2,param_3,param_5,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 105da6584; end: 105da659b;  */

void FUN_105da6584(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105da6594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 105da659c; end: 105da65e7; -[SCCropOverlayViewImpl updateTransformWithCurrentState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da659c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127361ac);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105da65e8; end: 105da677f; -[SCCropOverlayViewImpl showTeachingTooltipView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da65e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar4 = (long)_DAT_1127361c8;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010befbb60(param_1);
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127361ac);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5c9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  puVar2 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0,param_2,&PTR____CFConstantStringClassReference_110e2a138);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273619c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c13e600(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 105da6780; end: 105da67d3;  */

void FUN_105da6780(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be27b20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105da67d4; end: 105da6923; -[SCCropOverlayViewImpl _handleCropTooltipAnimationContentResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da67d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010b7f5374(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2720;
  _objc_alloc();
  func_0x00010c008240();
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105da6924;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar2);
  puStack_68 = puVar2;
  func_0x000100162d98("APPSTORE",&puStack_88);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127361ac);
  func_0x00010bf6b020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c9a0();
  _objc_release(uVar3);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105da6924; end: 105da6a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da6924(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
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
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf20c00(lVar1);
    _CGRectGetWidth();
    param_1 = param_1 + -162.5;
    dVar5 = param_1 * 0.5;
    func_0x00010bf20c00(lVar1);
    _CGRectGetHeight();
    puVar2 = PTR_PTR_1126bb2a0;
    _objc_alloc();
    func_0x00010c013de0(dVar5,param_1 * 0.4,0x4064500000000000,0x4064500000000000);
    lVar4 = (long)_DAT_1127361c8;
    uVar3 = *(undefined8 *)(lVar1 + lVar4);
    *(undefined **)(lVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    if (*(long *)(lVar1 + _DAT_1127361b8) == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_70);
    }
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c219960(*(undefined8 *)(lVar1 + lVar4),param_3,&uStack_a0);
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + lVar4),param_3,*(undefined8 *)(param_2 + 0x20));
    func_0x00010befbb60(lVar1,param_3,*(undefined8 *)(lVar1 + lVar4));
    func_0x00010c24dbc0(*(undefined8 *)(lVar1 + lVar4));
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105da6a48; end: 105da6a87; -[SCCropOverlayViewImpl hideTeachingTooltipView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da6a48(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127361c8;
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x00010c2558c0();
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 105da6a88; end: 105da6a97; -[SCCropOverlayViewImpl addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da6a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127361ac),PTR_s_setDelegate__112640798);
  return;
}



/* Entry: 105da6a98; end: 105da6aab; -[SCCropOverlayViewImpl removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da6a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127361ac),PTR_s_setDelegate__112640798,0);
  return;
}



/* Entry: 105da6aac; end: 105da6e1f; -[SCCropOverlayViewImpl _updateLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da6aac(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar16 = param_1 + -13.0;
  lVar5 = (long)_DAT_1127361b0;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetHeight();
  dVar16 = dVar16 - param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetWidth();
  param_1 = param_1 + 16.0;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  lVar6 = (long)_DAT_1127361b8;
  dVar10 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
  _CGRectGetWidth();
  param_1 = param_1 - dVar10 * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetHeight();
  dVar16 = dVar16 + dVar10 * 0.5;
  uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  dVar10 = *(double *)PTR__CGAffineTransformIdentity_110347008;
  uVar14 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar13 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dVar8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  dStack_b0 = dVar10;
  uStack_a8 = uVar11;
  uStack_a0 = uVar13;
  uStack_98 = uVar14;
  dStack_90 = dVar8;
  uStack_88 = uVar12;
  func_0x00010c219960(*(undefined8 *)(param_5 + lVar5),param_6,&dStack_b0);
  lVar7 = (long)_DAT_1127361b4;
  dStack_b0 = dVar10;
  uStack_a8 = uVar11;
  uStack_a0 = uVar13;
  uStack_98 = uVar14;
  dStack_90 = dVar8;
  uStack_88 = uVar12;
  func_0x00010c219960(*(undefined8 *)(param_5 + lVar7),param_6,&dStack_b0);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bc852e4();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  func_0x00010bc852e4();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
  dStack_b0 = dVar10;
  uStack_a8 = uVar11;
  uStack_a0 = uVar13;
  uStack_98 = uVar14;
  dStack_90 = dVar8;
  uStack_88 = uVar12;
  func_0x00010c219960(*(undefined8 *)(param_5 + lVar6),param_6,&dStack_b0);
  func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar6));
  lVar6 = (long)_DAT_1127361c8;
  lVar5 = *(long *)(param_5 + lVar6);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    dStack_b0 = dVar10;
    uStack_a8 = uVar11;
    uStack_a0 = uVar13;
    uStack_98 = uVar14;
    dStack_90 = dVar8;
    uStack_88 = uVar12;
    func_0x00010c219960(*(undefined8 *)(param_5 + lVar6),param_6,&dStack_b0);
    param_1 = dVar8;
    dVar16 = dVar10;
  }
  pdVar1 = (double *)(param_5 + _DAT_1127361cc);
  func_0x00010bde44c0(param_5,param_6,0);
  *pdVar1 = param_1;
  pdVar1[1] = dVar16;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
  pdVar2 = (double *)(param_5 + _DAT_1127361d0);
  func_0x00010bde44c0(param_5,param_6,1);
  *pdVar2 = param_1;
  pdVar2[1] = dVar16;
  pdVar2[2] = param_3;
  pdVar2[3] = param_4;
  pdVar3 = (double *)(param_5 + _DAT_1127361d4);
  func_0x00010bde44c0(param_5,param_6,2);
  *pdVar3 = param_1;
  pdVar3[1] = dVar16;
  pdVar3[2] = param_3;
  pdVar3[3] = param_4;
  pdVar4 = (double *)(param_5 + _DAT_1127361d8);
  func_0x00010bde44c0(param_5,param_6,3);
  *pdVar4 = param_1;
  pdVar4[1] = dVar16;
  pdVar4[2] = param_3;
  pdVar4[3] = param_4;
  lVar5 = (long)_DAT_1127361bc;
  *(undefined8 *)(param_5 + lVar5) = 0x3ff0000000000000;
  dVar16 = *pdVar1;
  _CGRectGetWidth(dVar16,pdVar1[1],pdVar1[2],pdVar1[3]);
  dVar8 = *pdVar2;
  _CGRectGetWidth(dVar8,pdVar2[1],pdVar2[2],pdVar2[3]);
  dVar15 = *pdVar1;
  _CGRectGetHeight(dVar15,pdVar1[1],pdVar1[2],pdVar1[3]);
  dVar9 = *pdVar2;
  _CGRectGetHeight(dVar9,pdVar2[1],pdVar2[2],pdVar2[3]);
  dVar10 = dVar16 / dVar8;
  if (dVar15 / dVar9 <= dVar16 / dVar8) {
    dVar10 = dVar15 / dVar9;
  }
  func_0x00010bfc9ac0(dVar10,*(undefined8 *)(param_5 + lVar5),PTR_PTR_1126bf720);
  lVar6 = (long)_DAT_1127361c0;
  *(double *)(param_5 + lVar6) = dVar10;
  dVar10 = *pdVar4;
  _CGRectGetHeight(dVar10,pdVar4[1],pdVar4[2],pdVar4[3]);
  dVar16 = *pdVar2;
  _CGRectGetWidth(dVar16,pdVar2[1],pdVar2[2],pdVar2[3]);
  lVar7 = (long)_DAT_1127361dc;
  *(double *)(param_5 + lVar7) = dVar10 / dVar16;
  dVar16 = *pdVar3;
  _CGRectGetWidth(dVar16,pdVar3[1],pdVar3[2],pdVar3[3]);
  dVar8 = *pdVar2;
  _CGRectGetHeight(dVar8,pdVar2[1],pdVar2[2],pdVar2[3]);
  dVar15 = *pdVar3;
  _CGRectGetHeight(dVar15,pdVar3[1],pdVar3[2],pdVar3[3]);
  dVar9 = *pdVar2;
  _CGRectGetWidth(dVar9,pdVar2[1],pdVar2[2],pdVar2[3]);
  dVar10 = dVar16 / dVar8;
  if (dVar15 / dVar9 <= dVar16 / dVar8) {
    dVar10 = dVar15 / dVar9;
  }
  func_0x00010bfc9ac0(dVar10,*(undefined8 *)(param_5 + lVar7),PTR_PTR_1126bf720);
  *(double *)(param_5 + _DAT_1127361c4) = dVar10;
  dVar16 = *(double *)(param_5 + lVar6);
  if (dVar10 <= dVar16) {
    dVar16 = dVar10;
  }
  lVar6 = (long)_DAT_1127361ac;
  func_0x00010c1c8180(dVar16 * 0.5,*(undefined8 *)(param_5 + lVar6));
  dVar10 = *(double *)(param_5 + lVar7);
  if (*(double *)(param_5 + lVar7) <= *(double *)(param_5 + lVar5)) {
    dVar10 = *(double *)(param_5 + lVar5);
  }
  func_0x00010c1c3a40(dVar10 * 10.0,*(undefined8 *)(param_5 + lVar6));
  func_0x00010bed3320(param_5);
  return;
}



/* Entry: 105da6e20; end: 105da6eb7; -[SCCropOverlayViewImpl _finishAdjustingWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da6e20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127361ac;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5c980();
    _objc_release(uVar2);
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  func_0x00010c1af4a0(*(undefined8 *)(param_1 + lVar3),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105da6eb8; end: 105da714f; -[SCCropOverlayViewImpl _computeRegularFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105da6eb8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    long param_5,undefined8 param_6,long param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dStack_78;
  
  func_0x00010bf20c00();
  uVar6 = *(undefined8 *)(param_5 + _DAT_1127361a4);
  uVar8 = param_4;
  func_0x00010b690934(param_3,param_4,uVar6);
  dVar1 = param_3;
  uVar5 = param_4;
  func_0x00010bf20c00(param_5);
  dVar2 = dVar1;
  _CGRectGetMidX();
  _CGRectGetMidY(dVar1,uVar5,uVar6,uVar8);
  dVar7 = param_3;
  uVar5 = param_4;
  func_0x00010b690910(dVar2,dVar1,param_3,param_4);
  if (param_7 == 3) {
    dVar4 = dVar2;
    dVar3 = dVar1;
    dVar9 = dVar7;
    uVar8 = uVar5;
    func_0x00010bf20c00(param_5);
    dStack_78 = dVar4;
    _CGRectGetMidX();
    _CGRectGetMidY(dVar4,dVar3,dVar9,uVar8);
    dVar3 = dVar4;
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    dVar9 = dVar2;
    _CGRectGetHeight(dVar2,dVar1,dVar7,uVar5);
    dVar3 = dVar3 / dVar9;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    _CGRectGetWidth(dVar2,dVar1,dVar7,uVar5);
    dVar9 = dVar9 / dVar2;
    dVar2 = dVar4;
    if (dVar9 <= dVar3) {
      dVar9 = dVar3;
    }
  }
  else {
    if (param_7 != 2) {
      if (param_7 != 1) {
        return dVar2;
      }
      func_0x00010bf20c00(param_5);
      dStack_78 = dVar2;
      _CGRectGetMidX();
      _CGRectGetMidY(dVar2,dVar1,dVar7,uVar5);
      param_3 = *(double *)(param_5 + _DAT_1127361a8 + 0x10);
      param_4 = *(undefined8 *)(param_5 + _DAT_1127361a8 + 0x18);
      goto LAB_105da710c;
    }
    dVar4 = dVar2;
    dVar3 = dVar1;
    dVar9 = dVar7;
    uVar8 = uVar5;
    func_0x00010bf20c00(param_5);
    dStack_78 = dVar4;
    _CGRectGetMidX();
    _CGRectGetMidY(dVar4,dVar3,dVar9,uVar8);
    dVar9 = dVar4;
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    dVar3 = dVar2;
    _CGRectGetHeight(dVar2,dVar1,dVar7,uVar5);
    dVar9 = dVar9 / dVar3;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    _CGRectGetWidth(dVar2,dVar1,dVar7,uVar5);
    dVar3 = dVar3 / dVar2;
    dVar2 = dVar4;
    if (dVar3 <= dVar9) {
      dVar9 = dVar3;
    }
  }
  func_0x00010b690ad8(param_3,param_4,dVar9);
  func_0x00010b690bf4();
LAB_105da710c:
  func_0x00010b690910(dStack_78,dVar2,param_3,param_4);
  return dStack_78;
}



/* Entry: 105da7150; end: 105da750b; -[SCCropOverlayViewImpl _transformTouchControlViewToTranslation:rotation:scale:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da7150(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [8];
  
  dVar7 = param_1;
  dVar9 = param_2;
  _objc_retain(param_8);
  lVar5 = (long)_DAT_1127361ac;
  func_0x00010c27ada0(*(undefined8 *)(param_5 + lVar5));
  dVar11 = dVar7;
  func_0x00010c141a80(*(undefined8 *)(param_5 + lVar5));
  dVar8 = dVar11;
  func_0x00010c14e120(*(undefined8 *)(param_5 + lVar5));
  bVar2 = false;
  if ((dVar7 == param_1) && (bVar2 = false, !NAN(dVar9) && !NAN(param_2))) {
    bVar2 = dVar9 == param_2;
  }
  if (bVar2) {
    fVar10 = ABS((float)dVar11 - (float)param_3);
    fVar6 = ABS((float)param_3 + (float)dVar11) * 1.1920929e-07;
    bVar2 = true;
    if ((1.1754944e-38 <= fVar10) && (bVar2 = false, !NAN(fVar10) && !NAN(fVar6))) {
      bVar2 = fVar10 < fVar6;
    }
    if (!bVar2) goto LAB_105da723c;
    fVar10 = ABS((float)dVar8 - (float)param_4);
    fVar6 = ABS((float)param_4 + (float)dVar8) * 1.1920929e-07;
    bVar2 = true;
    if ((1.1754944e-38 <= fVar10) && (bVar2 = false, !NAN(fVar10) && !NAN(fVar6))) {
      bVar2 = fVar10 < fVar6;
    }
    if (!bVar2) goto LAB_105da723c;
  }
  else {
LAB_105da723c:
    if (3.141592653589793 < ABS(param_3 - dVar11)) {
      if (param_3 < dVar11) {
        param_3 = param_3 + 6.283185307179586;
      }
      else {
        dVar11 = dVar11 + 6.283185307179586;
      }
    }
    if ((param_7 & 1) != 0) {
      _objc_initWeak(auStack_a8,param_5);
      puVar3 = PTR_PTR_1126c4940;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0;
      uStack_b8 = 0x2020000000;
      uStack_b0 = 0;
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_105da750c;
      puStack_120 = &UNK_1108e8a90;
      puStack_c0 = &uStack_c8;
      _objc_copyWeak(auStack_110,auStack_a8);
      puStack_118 = &uStack_c8;
      dStack_108 = dVar7;
      dStack_100 = dVar9;
      dStack_f8 = param_1;
      dStack_f0 = param_2;
      dStack_e8 = dVar11;
      dStack_e0 = param_3;
      dStack_d8 = dVar8;
      dStack_d0 = param_4;
      func_0x00010c118e00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c4230;
      func_0x00010bf039a0(PTR_PTR_1126c4230);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5080();
      func_0x00010c1a1180(puVar4);
      func_0x00010c216920(puVar4);
      func_0x00010c208f20(0x402c000000000000,puVar4);
      func_0x00010c208f00(0x4000000000000000,puVar4);
      puStack_160 = puVar1;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_105da7690;
      puStack_148 = &UNK_1108e8ac0;
      _objc_copyWeak(auStack_140,auStack_a8);
      func_0x00010c168180(puVar4);
      _objc_copyWeak(auStack_168,auStack_a8);
      _objc_retain(param_8);
      func_0x00010c17fb40(puVar4);
      func_0x00010c103a40(*(undefined8 *)(param_5 + lVar5));
      _objc_release(param_8);
      _objc_destroyWeak(auStack_168);
      _objc_destroyWeak(auStack_140);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_110);
      __Block_object_dispose(&uStack_c8,8);
      _objc_destroyWeak(auStack_a8);
      goto LAB_105da7484;
    }
    func_0x00010c219b80(param_1,param_2,*(undefined8 *)(param_5 + lVar5));
    func_0x00010c1ee7a0(param_3,*(undefined8 *)(param_5 + lVar5));
    func_0x00010c1f5fe0(param_4,*(undefined8 *)(param_5 + lVar5));
  }
  func_0x00010bed46e0(param_5);
  func_0x00010be16ca0(param_5);
LAB_105da7484:
  _objc_release(param_8);
  return;
}



/* Entry: 105da750c; end: 105da75db;  */

void FUN_105da750c(long param_1,undefined8 param_2)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_78,param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c227400(param_2);
  func_0x00010c213d60(0x3f847ae147ae147b,param_2);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_2);
  return;
}



/* Entry: 105da75dc; end: 105da768f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da75dc(long param_1,undefined8 param_2,double *param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    dVar3 = *param_3;
    if ((1.0 <= dVar3) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8), (*(byte *)(lVar2 + 0x18) & 1) == 0)) {
      *(undefined1 *)(lVar2 + 0x18) = 1;
    }
    lVar2 = (long)_DAT_1127361ac;
    func_0x00010c219b80(*(double *)(param_1 + 0x30) +
                        (*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x30)) * dVar3,
                        *(double *)(param_1 + 0x38) +
                        (*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x38)) * dVar3,
                        *(undefined8 *)(lVar1 + lVar2));
    func_0x00010c1ee7a0(*(double *)(param_1 + 0x50) +
                        *param_3 * (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50)),
                        *(undefined8 *)(lVar1 + lVar2));
    func_0x00010c1f5fe0(*(double *)(param_1 + 0x60) +
                        *param_3 * (*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x60)),
                        *(undefined8 *)(lVar1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105da7690; end: 105da7723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da7690(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1af4a0(*(undefined8 *)(param_1 + _DAT_1127361ac),param_2,1);
    func_0x00010bed46e0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105da7724; end: 105da7797; -[SCCropOverlayViewImpl _updateButtonsWithEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da7724(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_1127361b4));
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_1127361b0));
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_1127361b8));
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed3330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAspectSwitchButton_112592670);
    return;
  }
  return;
}



/* Entry: 105da7798; end: 105da7833; -[SCCropOverlayViewImpl _computeNearestTargetRotation:] */

undefined8 FUN_105da7798(double param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = -param_1;
  if (0.0 <= param_1) {
    dVar7 = param_1;
  }
  dVar4 = dVar7 + -1.5707963267948966;
  dVar8 = -dVar4;
  if (0.0 <= dVar4) {
    dVar8 = dVar4;
  }
  dVar5 = dVar7 + -3.141592653589793;
  dVar4 = -dVar5;
  if (0.0 <= dVar5) {
    dVar4 = dVar5;
  }
  uVar6 = 0;
  bVar1 = false;
  if ((dVar7 < dVar4) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar8))) {
    bVar1 = dVar7 < dVar8;
  }
  if (!bVar1) {
    bVar1 = false;
    if ((dVar8 < dVar7) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar4))) {
      bVar1 = dVar8 < dVar4;
    }
    if (bVar1) {
      lVar2 = 8;
      if (param_1 < 0.0) {
        lVar2 = 0;
      }
      puVar3 = &UNK_10ddd0990;
    }
    else {
      bVar1 = false;
      if ((dVar4 < dVar7) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar8))) {
        bVar1 = dVar4 < dVar8;
      }
      if (!bVar1) {
        return 0;
      }
      lVar2 = 8;
      if (param_1 < 0.0) {
        lVar2 = 0;
      }
      puVar3 = &UNK_10ddd0980;
    }
    uVar6 = *(undefined8 *)(puVar3 + lVar2);
  }
  return uVar6;
}



/* Entry: 105da7834; end: 105da783f; -[SCCropOverlayViewImpl _aspectSwitchButtonPressed] */

void FUN_105da7834(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1386f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_resetCropWithAnimated_needAspect_11262bbd8,1,1);
  return;
}



/* Entry: 105da7840; end: 105da79fb; -[SCCropOverlayViewImpl resetCropWithAnimated:needAspectSwitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da7840(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = (long)_DAT_1127361ac;
  func_0x00010c141a80(*(undefined8 *)(param_2 + lVar4));
  func_0x00010bde4420(param_2);
  dVar5 = param_1;
  func_0x00010c14e120(*(undefined8 *)(param_2 + lVar4));
  dVar6 = ABS(param_1);
  dVar7 = ABS(param_1 + 0.0) * 2.220446049250313e-16;
  bVar2 = true;
  if ((2.2250738585072014e-308 <= dVar6) && (bVar2 = false, !NAN(dVar6) && !NAN(dVar7))) {
    bVar2 = dVar6 < dVar7;
  }
  if (bVar2) {
LAB_105da7904:
    if (param_5 != 0) {
      func_0x00010c14e120(*(undefined8 *)(param_2 + lVar4));
      piVar3 = (int *)&DAT_1127361bc;
      iVar1 = _DAT_1127361c0;
      goto LAB_105da7948;
    }
    piVar3 = (int *)&DAT_1127361bc;
    iVar1 = _DAT_1127361c0;
LAB_105da7998:
    dVar6 = *(double *)(param_2 + iVar1);
    if (dVar5 <= dVar6) goto LAB_105da79ac;
  }
  else {
    dVar6 = -param_1;
    if (0.0 <= param_1) {
      dVar6 = param_1;
    }
    dVar7 = ABS(dVar6 + -3.141592653589793);
    dVar6 = ABS(dVar6 + 3.141592653589793) * 2.220446049250313e-16;
    bVar2 = true;
    if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar6))) {
      bVar2 = dVar7 < dVar6;
    }
    if (bVar2) goto LAB_105da7904;
    if (param_5 == 0) {
      piVar3 = (int *)&DAT_1127361dc;
      iVar1 = _DAT_1127361c4;
      goto LAB_105da7998;
    }
    func_0x00010c14e120(*(undefined8 *)(param_2 + lVar4));
    piVar3 = (int *)&DAT_1127361dc;
    iVar1 = _DAT_1127361c4;
LAB_105da7948:
    dVar6 = *(double *)(param_2 + iVar1);
    dVar7 = ABS((double)(float)dVar5 - (double)(float)dVar6);
    dVar5 = ABS((double)(float)dVar5 + (double)(float)dVar6) * 2.220446049250313e-16;
    bVar2 = true;
    if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar5))) {
      bVar2 = dVar7 < dVar5;
    }
    if (!bVar2) goto LAB_105da79ac;
  }
  dVar6 = *(double *)(param_2 + *piVar3);
LAB_105da79ac:
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  dVar7 = dVar5;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
                    /* WARNING: Could not recover jumptable at 0x00010becee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar5,dVar7,param_1,dVar6,param_2,PTR_s__transformTouchControlViewToTran_112591548,
             param_4,0);
  return;
}



/* Entry: 105da79fc; end: 105da7bfb; -[SCCropOverlayViewImpl _rotateButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da79fc(double param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar3 = (long)_DAT_1127361ac;
  func_0x00010c141a80(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bde4420(param_2);
  dVar5 = param_1;
  func_0x00010c141a80(*(undefined8 *)(param_2 + lVar3));
  dVar4 = 1.5707963267948966;
  if (dVar5 < param_1) {
    dVar4 = 0.0;
  }
  param_1 = param_1 + dVar4;
  func_0x00010c14e120(*(undefined8 *)(param_2 + lVar3));
  dVar5 = ABS(param_1);
  bVar2 = true;
  if ((2.2250738585072014e-308 <= dVar5) &&
     (bVar2 = false, !NAN(dVar5) && !NAN(dVar5 * 2.220446049250313e-16))) {
    bVar2 = dVar5 < dVar5 * 2.220446049250313e-16;
  }
  if (bVar2) {
LAB_105da7ac8:
    dVar5 = *(double *)(param_2 + _DAT_1127361c4);
    iVar1 = _DAT_1127361c0;
    if (dVar4 <= dVar5) {
LAB_105da7b94:
      dVar6 = *(double *)(param_2 + iVar1);
      goto LAB_105da7bb0;
    }
    dVar6 = *(double *)(param_2 + _DAT_1127361dc);
    iVar1 = _DAT_1127361bc;
    if (dVar4 < dVar6) {
      dVar4 = (dVar4 - dVar5) / (dVar6 - dVar5);
      dVar6 = *(double *)(param_2 + _DAT_1127361c0) +
              (*(double *)(param_2 + _DAT_1127361bc) - *(double *)(param_2 + _DAT_1127361c0)) *
              dVar4;
      goto LAB_105da7bb0;
    }
  }
  else {
    dVar5 = -param_1;
    if (0.0 <= param_1) {
      dVar5 = param_1;
    }
    dVar6 = ABS(dVar5 + -3.141592653589793);
    dVar5 = ABS(dVar5 + 3.141592653589793) * 2.220446049250313e-16;
    bVar2 = true;
    if ((2.2250738585072014e-308 <= dVar6) && (bVar2 = false, !NAN(dVar6) && !NAN(dVar5))) {
      bVar2 = dVar6 < dVar5;
    }
    if (bVar2) goto LAB_105da7ac8;
    dVar5 = *(double *)(param_2 + _DAT_1127361c0);
    iVar1 = _DAT_1127361c4;
    if (dVar4 <= dVar5) goto LAB_105da7b94;
    dVar6 = *(double *)(param_2 + _DAT_1127361bc);
    iVar1 = _DAT_1127361dc;
    if (dVar4 < dVar6) {
      dVar4 = (dVar4 - dVar5) / (dVar6 - dVar5);
      dVar6 = *(double *)(param_2 + _DAT_1127361c4) +
              (*(double *)(param_2 + _DAT_1127361dc) - *(double *)(param_2 + _DAT_1127361c4)) *
              dVar4;
      goto LAB_105da7bb0;
    }
  }
  dVar4 = dVar4 + *(double *)(param_2 + iVar1);
  dVar6 = dVar4 - dVar6;
LAB_105da7bb0:
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  dVar5 = dVar4;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
                    /* WARNING: Could not recover jumptable at 0x00010becee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar4,dVar5,param_1,dVar6,param_2,PTR_s__transformTouchControlViewToTran_112591548,1,0)
  ;
  return;
}



/* Entry: 105da7bfc; end: 105da7c47; -[SCCropOverlayViewImpl _checkmarkButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da7bfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127361ac);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5ca00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105da7c48; end: 105da7ec7; -[SCCropOverlayViewImpl _updateAspectSwitchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da7c48(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  double *pdVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  
  lVar5 = (long)_DAT_1127361ac;
  func_0x00010c141a80(*(undefined8 *)(param_2 + lVar5));
  dVar10 = ABS(param_1);
  dVar9 = ABS(param_1 + 0.0) * 2.220446049250313e-16;
  bVar3 = true;
  if ((2.2250738585072014e-308 <= dVar10) && (bVar3 = false, !NAN(dVar10) && !NAN(dVar9))) {
    bVar3 = dVar10 < dVar9;
  }
  if (bVar3) {
LAB_105da7cfc:
    pdVar7 = (double *)(param_2 + _DAT_1127361c0);
    dVar9 = *pdVar7;
    iVar1 = _DAT_1127361bc;
LAB_105da7d10:
    dVar10 = ABS((double)(float)dVar9 - (double)(float)*(double *)(param_2 + iVar1));
    dVar9 = ABS((double)(float)dVar9 + (double)(float)*(double *)(param_2 + iVar1)) *
            2.220446049250313e-16;
    bVar3 = true;
    if ((2.2250738585072014e-308 <= dVar10) && (bVar3 = false, !NAN(dVar10) && !NAN(dVar9))) {
      bVar3 = dVar10 < dVar9;
    }
    if ((bVar3) && (func_0x00010c14e120(*(undefined8 *)(param_2 + lVar5)), dVar9 <= *pdVar7)) {
      uVar8 = 0;
      uVar12 = 0x3fe0000000000000;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e2a158;
      goto LAB_105da7e88;
    }
    func_0x00010c14e120(*(undefined8 *)(param_2 + lVar5));
    fVar2 = ABS((float)dVar9 + (float)*pdVar7) * 2.220446e-16;
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110e2a1b8;
    if (fVar2 <= ABS((float)dVar9 - (float)*pdVar7)) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110e2a158;
    }
    _objc_retain(ppuVar6);
  }
  else {
    func_0x00010c141a80(*(undefined8 *)(param_2 + lVar5));
    dVar10 = -dVar9;
    if (0.0 <= dVar9) {
      dVar10 = dVar9;
    }
    dVar11 = ABS(dVar10 + -3.141592653589793);
    dVar9 = ABS(dVar10 + 3.141592653589793) * 2.220446049250313e-16;
    bVar3 = true;
    if ((2.2250738585072014e-308 <= dVar11) && (bVar3 = false, !NAN(dVar11) && !NAN(dVar9))) {
      bVar3 = dVar11 < dVar9;
    }
    if (bVar3) goto LAB_105da7cfc;
    func_0x00010c141a80(*(undefined8 *)(param_2 + lVar5));
    dVar10 = -dVar9;
    if (0.0 <= dVar9) {
      dVar10 = dVar9;
    }
    dVar11 = ABS(dVar10 + -1.5707963267948966);
    dVar9 = ABS(dVar10 + 1.5707963267948966) * 2.220446049250313e-16;
    bVar3 = true;
    if ((2.2250738585072014e-308 <= dVar11) && (bVar3 = false, !NAN(dVar11) && !NAN(dVar9))) {
      bVar3 = dVar11 < dVar9;
    }
    if (bVar3) {
      pdVar7 = (double *)(param_2 + _DAT_1127361c4);
      dVar9 = *pdVar7;
      iVar1 = _DAT_1127361dc;
      goto LAB_105da7d10;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110e2a158;
  }
  uVar8 = *(undefined8 *)(param_2 + _DAT_1127361b0);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar8,param_3,puVar4);
  _objc_release(puVar4);
  uVar12 = 0x3ff0000000000000;
  uVar8 = 1;
LAB_105da7e88:
  lVar5 = (long)_DAT_1127361b0;
  func_0x00010c195460(*(undefined8 *)(param_2 + lVar5),param_3,uVar8);
  func_0x00010c1677c0(uVar12,*(undefined8 *)(param_2 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 105da7ec8; end: 105da7f47; -[SCCropOverlayViewImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da7ec8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127361c8,0);
  _objc_storeStrong(param_1 + _DAT_1127361b8,0);
  _objc_storeStrong(param_1 + _DAT_1127361b4,0);
  _objc_storeStrong(param_1 + _DAT_1127361b0,0);
  _objc_storeStrong(param_1 + _DAT_1127361ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273619c,0);
  return;
}



/* Entry: 105da7f48; end: 105da7fcb; -[SCCropTransparentTouchableViewImpl initWithFrame:] */

undefined1 * FUN_105da7f48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed120;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1ee7a0(0,puVar1);
    func_0x00010c1f5fe0(0x3ff0000000000000,puVar1);
    func_0x00010c1c8180(0x3fe0000000000000,puVar1);
    func_0x00010c1c3a40(0x4024000000000000,puVar1);
    func_0x00010c1b32a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105da7fcc; end: 105da8067; -[SCCropTransparentTouchableViewImpl setRotation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da7fcc(double param_1,long param_2)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 <= 3.141592653589793) {
    if (-3.141592653589793 <= param_1) goto LAB_105da8018;
    dVar2 = 6.283185307179586;
  }
  else {
    dVar2 = -6.283185307179586;
  }
  param_1 = param_1 + dVar2;
LAB_105da8018:
  *(double *)(param_2 + _DAT_112736204) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_112736208);
  func_0x00010c141a80(param_2);
  _CGAffineTransformMakeRotation(&uStack_50);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  puVar1[3] = uStack_38;
  puVar1[2] = uStack_40;
  puVar1[5] = uStack_28;
  puVar1[4] = uStack_30;
  func_0x00010be872e0(param_2);
  return;
}



/* Entry: 105da8068; end: 105da80e3; -[SCCropTransparentTouchableViewImpl setScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da8068(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_2 + _DAT_11273620c) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_112736210);
  func_0x00010c14e120();
  uVar2 = param_1;
  func_0x00010c14e120(param_2);
  _CGAffineTransformMakeScale(&uStack_60,param_1,uVar2);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  puVar1[3] = uStack_48;
  puVar1[2] = uStack_50;
  puVar1[5] = uStack_38;
  puVar1[4] = uStack_40;
  func_0x00010be872e0(param_2);
  return;
}



/* Entry: 105da80e4; end: 105da80e7; -[SCCropTransparentTouchableViewImpl translation] */

void FUN_105da80e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf345f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_center_1125aab20);
  return;
}



/* Entry: 105da80e8; end: 105da815b; -[SCCropTransparentTouchableViewImpl setTranslation:] */

void FUN_105da80e8(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = true;
  if ((!NAN(param_1)) && (bVar1 = true, !NAN(param_2))) {
    bVar1 = false;
  }
  if (!bVar1) {
    func_0x00010c17a6a0();
    lVar2 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
  }
  return;
}



/* Entry: 105da815c; end: 105da81ff; -[SCCropTransparentTouchableViewImpl _recomputeTransform] */

void FUN_105da815c(long param_1)

{
  long lVar1;
  undefined1 auStack_b0 [48];
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
  
  func_0x00010c14e480(&uStack_80);
  func_0x00010c141d20(auStack_b0,param_1);
  _CGAffineTransformConcat(&uStack_50,&uStack_80,auStack_b0);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5c960();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105da8200; end: 105da82fb; -[SCCropTransparentTouchableViewImpl pan:] */

void FUN_105da8200(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0798e0();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar1 != 0) && (lVar1 = param_5, func_0x00010c252440(), lVar1 == 2)) {
      lVar1 = param_3;
      func_0x00010c262ca0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(param_5,param_4,lVar1);
      dVar2 = param_1;
      dVar3 = param_2;
      _objc_release(lVar1);
      func_0x00010c27ada0(param_3);
      func_0x00010c27ada0(param_3);
      func_0x00010c219b80(param_1 + dVar2,param_2 + dVar3,param_3);
      func_0x00010c262ca0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219ba0(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_5,param_4,param_3);
      _objc_release(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105da82fc; end: 105da842b; -[SCCropTransparentTouchableViewImpl rotation:] */

void FUN_105da82fc(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && (lVar1 = param_5, func_0x00010c252440(), lVar1 == 2)) {
    func_0x00010c141a80(param_5);
    lVar1 = param_3;
    dVar5 = param_1;
    func_0x00010c262ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5,param_4,lVar1);
    dVar6 = dVar5;
    dVar3 = param_2;
    _objc_release(lVar1);
    func_0x00010bf345e0(param_3);
    dVar5 = dVar5 - dVar6;
    func_0x00010bf345e0(param_3);
    param_2 = param_2 - dVar3;
    dVar2 = param_1;
    ___sincos_stret(param_1);
    dVar6 = param_2 * dVar2;
    dVar4 = dVar3 * param_2;
    dVar7 = dVar4 + dVar5 * dVar2;
    func_0x00010c27ada0(param_3);
    dVar6 = (dVar5 + dVar2) - (-dVar6 + dVar5 * dVar3);
    func_0x00010c27ada0(param_3);
    func_0x00010c219b80(dVar6,(param_2 + dVar4) - dVar7,param_3);
    func_0x00010c141a80(param_3);
    func_0x00010c1ee7a0(param_1 + dVar6,param_3);
    func_0x00010c1ee7a0(0,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105da842c; end: 105da857b; -[SCCropTransparentTouchableViewImpl pinch:] */

void FUN_105da842c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && (lVar1 = param_5, func_0x00010c252440(), lVar1 == 2)) {
    func_0x00010c14e120(param_5);
    if ((param_1 != 0.0) && (!NAN(param_1))) {
      dVar2 = param_1;
      func_0x00010c14e120(param_3);
      dVar7 = param_1 * dVar2;
      func_0x00010c0ce2a0(param_3);
      if ((dVar2 <= dVar7) && (func_0x00010c0c3300(param_3), dVar7 <= dVar2)) {
        lVar1 = param_3;
        func_0x00010c262ca0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_5,param_4,lVar1);
        dVar5 = param_2;
        _objc_release(lVar1);
        dVar3 = 1.0;
        func_0x00010c27ada0(param_3);
        dVar4 = dVar3;
        func_0x00010bf345e0(param_3);
        func_0x00010c27ada0(param_3);
        dVar6 = dVar5;
        func_0x00010bf345e0(param_3);
        func_0x00010c219b80(dVar3 + (dVar2 - dVar4) * (1.0 - param_1),
                            dVar5 + (param_2 - dVar6) * (1.0 - param_1),param_3);
        func_0x00010c1f5fe0(dVar7,param_3);
      }
    }
    func_0x00010c1f5fe0(0x3ff0000000000000,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105da857c; end: 105da857f; -[SCCropTransparentTouchableViewImpl alignableTouchControlView] */

void FUN_105da857c(void)

{
  return;
}



/* Entry: 105da8580; end: 105da8583; -[SCCropTransparentTouchableViewImpl alignableContentRect] */

void FUN_105da8580(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf20c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_bounds_1125a5ca8);
  return;
}



/* Entry: 105da8584; end: 105da858b; -[SCCropTransparentTouchableViewImpl shouldProcessGesture:] */

undefined8 FUN_105da8584(void)

{
  return 1;
}



/* Entry: 105da858c; end: 105da858f; -[SCCropTransparentTouchableViewImpl updateAnchorState:withGestureRecognizer:] */

void FUN_105da858c(void)

{
  return;
}



/* Entry: 105da8590; end: 105da8597; -[SCCropTransparentTouchableViewImpl deletableView] */

undefined8 FUN_105da8590(void)

{
  return 0;
}



/* Entry: 105da8598; end: 105da85a7; -[SCCropTransparentTouchableViewImpl isPanGestureEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105da8598(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127361e0);
}



/* Entry: 105da85a8; end: 105da85b7; -[SCCropTransparentTouchableViewImpl setIsPanGestureEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da85a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127361e0) = param_3;
  return;
}



/* Entry: 105da85b8; end: 105da85c7; -[SCCropTransparentTouchableViewImpl scale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105da85b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273620c);
}



/* Entry: 105da85c8; end: 105da85d7; -[SCCropTransparentTouchableViewImpl rotation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105da85c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736204);
}



/* Entry: 105da85d8; end: 105da85e7; -[SCCropTransparentTouchableViewImpl maximalScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105da85d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127361e4);
}



/* Entry: 105da85e8; end: 105da85f7; -[SCCropTransparentTouchableViewImpl setMaximalScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da85e8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127361e4) = param_1;
  return;
}



/* Entry: 105da85f8; end: 105da8607; -[SCCropTransparentTouchableViewImpl minimalScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105da85f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127361e8);
}



/* Entry: 105da8608; end: 105da8617; -[SCCropTransparentTouchableViewImpl setMinimalScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da8608(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127361e8) = param_1;
  return;
}



/* Entry: 105da8618; end: 105da8627; -[SCCropTransparentTouchableViewImpl isUseTouchCenterAsPivot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105da8618(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127361ec);
}



/* Entry: 105da8628; end: 105da8637; -[SCCropTransparentTouchableViewImpl setUseTouchCenterAsPivot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da8628(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127361ec) = param_3;
  return;
}



/* Entry: 105da8638; end: 105da8647; -[SCCropTransparentTouchableViewImpl maxScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105da8638(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127361f0);
}



/* Entry: 105da8648; end: 105da8657; -[SCCropTransparentTouchableViewImpl minScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105da8648(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127361f4);
}



/* Entry: 105da8658; end: 105da8667; -[SCCropTransparentTouchableViewImpl deleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105da8658(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127361f8);
}



/* Entry: 105da8668; end: 105da8677; -[SCCropTransparentTouchableViewImpl setDeleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da8668(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127361f8) = param_3;
  return;
}



/* Entry: 105da8678; end: 105da8697; -[SCCropTransparentTouchableViewImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da8678(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127361fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da8698; end: 105da86ab; -[SCCropTransparentTouchableViewImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da8698(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127361fc,param_3);
  return;
}



/* Entry: 105da86ac; end: 105da86bb; -[SCCropTransparentTouchableViewImpl isAutoAdjusting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105da86ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112736200);
}



/* Entry: 105da86bc; end: 105da86cb; -[SCCropTransparentTouchableViewImpl setIsAutoAdjusting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da86bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112736200) = param_3;
  return;
}



/* Entry: 105da86cc; end: 105da86eb; -[SCCropTransparentTouchableViewImpl rotationTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da86cc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112736208);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 105da86ec; end: 105da870b; -[SCCropTransparentTouchableViewImpl setRotationTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da86ec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112736208);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 105da870c; end: 105da872b; -[SCCropTransparentTouchableViewImpl scaleTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da870c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112736210);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 105da872c; end: 105da874b; -[SCCropTransparentTouchableViewImpl setScaleTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da872c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112736210);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 105da874c; end: 105da875b; -[SCCropTransparentTouchableViewImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da874c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127361fc);
  return;
}



/* Entry: 105da875c; end: 105da8923; -[SCPreviewFeatureSnapCropImpl initWithPreviewConfiguration:previewABServices:creativeToolsABServices:previewScopeServices:] */

undefined8 *
FUN_105da875c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ed128;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c180a40(puVar2);
    func_0x00010c1e2160(puVar2);
    func_0x00010c1e18c0(puVar2);
    func_0x00010c185a20(puVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar2[2];
    puVar2[2] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126afee0;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    _objc_initWeak(auStack_68,puVar2);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010befa300(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105da8924; end: 105da894f;  */

void FUN_105da8924(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c129080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105da8950; end: 105da8a3b; -[SCPreviewFeatureSnapCropImpl configureWithView:] */

void FUN_105da8950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_7);
  func_0x00010c1e2420(param_5,param_6,param_7);
  uVar1 = param_5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf91760();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar4 = param_7;
    func_0x00010bf1fbc0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c40(param_5,param_6,uVar4);
    _objc_release(uVar4);
    func_0x00010c1732c0(param_1,param_2,param_3,param_4,0xbff0000000000000,param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105da8a3c; end: 105da8a43; -[SCPreviewFeatureSnapCropImpl responderChainPriority] */

undefined8 FUN_105da8a3c(void)

{
  return 3;
}



/* Entry: 105da8a44; end: 105da8a4b; -[SCPreviewFeatureSnapCropImpl createCropToolBarButtonItemWithTarget:selector:] */

undefined8 FUN_105da8a44(void)

{
  return 0;
}



/* Entry: 105da8a4c; end: 105da8a53; -[SCPreviewFeatureSnapCropImpl createOverlayViewWithFrame:] */

undefined8 FUN_105da8a4c(void)

{
  return 0;
}



/* Entry: 105da8a54; end: 105da8da3; -[SCPreviewFeatureSnapCropImpl createInitialCroppingState:containerView:contentScaleFactor:contentAspectFitSize:] */

void FUN_105da8a54(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar8 = param_3;
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = param_5;
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar4 = param_5;
    func_0x00010bfe6060();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar4 = param_5;
      dVar8 = param_1;
      func_0x00010bf54860(param_2,param_3,param_1,param_5,param_6,param_8);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_5;
    func_0x00010beb5780(param_5,param_6,param_7);
    if ((int)lVar5 != 0) {
      dVar6 = param_2;
      dVar10 = param_3;
      dVar8 = param_1;
      func_0x00010b690ad8();
      lVar5 = param_7;
      func_0x00010c0c5ae0();
      if (lVar5 == 3) {
        uVar7 = 0x3ff921fb54442d18;
      }
      else {
        lVar5 = param_7;
        func_0x00010c0c5ae0();
        if (lVar5 != 2) goto LAB_105da8d18;
        uVar7 = 0xbff921fb54442d18;
      }
      func_0x00010c1ee7a0(uVar7,lVar4);
      puVar3 = PTR_PTR_1126bf720;
      func_0x00010bf20c00(param_8);
      dVar11 = dVar8 / dVar10;
      func_0x00010bf20c00(param_8);
      dVar10 = dVar10 / dVar8;
      func_0x00010bf20c00(param_8);
      dVar9 = dVar6 / param_4;
      if (dVar6 / param_4 <= dVar10) {
        dVar9 = dVar10;
      }
      func_0x00010bfc9ac0(dVar11,dVar9,puVar3);
      func_0x00010c1f5fe0(lVar4);
    }
LAB_105da8d18:
    func_0x00010bf20c00(param_8);
    func_0x00010beb70a0(dVar8,param_4,param_1,param_2,param_3,param_5,param_6,param_7);
    if ((int)param_5 == 0) goto LAB_105da8d68;
    func_0x00010b690ad8(param_2,param_3,param_1);
    func_0x00010c173a00(lVar4);
    dVar8 = 1.0;
  }
  else {
    lVar4 = lVar2;
    func_0x00010bf52160(lVar2);
    func_0x00010b690ad8(param_2,param_3,param_1);
    dVar8 = param_2;
    func_0x00010c173a00(lVar4);
    func_0x00010c14e120(lVar4);
    dVar6 = dVar8;
    func_0x00010c141a80(lVar4);
    dVar10 = -dVar6;
    if (0.0 <= dVar6) {
      dVar10 = dVar6;
    }
    dVar6 = ABS(dVar6);
    if ((dVar6 < 2.2250738585072014e-308) || (dVar6 < ABS(dVar10 + 0.0) * 2.220446049250313e-16)) {
LAB_105da8b88:
      puVar3 = PTR_PTR_1126bf720;
      dVar6 = 1.0;
    }
    else {
      func_0x00010c141a80(lVar4);
      dVar10 = -dVar6;
      if (0.0 <= dVar6) {
        dVar10 = dVar6;
      }
      dVar9 = ABS(dVar10 + -3.141592653589793);
      dVar6 = ABS(dVar10 + 3.141592653589793) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar6))) {
        bVar1 = dVar9 < dVar6;
      }
      if (bVar1) goto LAB_105da8b88;
      func_0x00010c141a80(lVar4);
      puVar3 = PTR_PTR_1126bf720;
      dVar10 = -dVar6;
      if (0.0 <= dVar6) {
        dVar10 = dVar6;
      }
      dVar9 = ABS(dVar10 + -1.5707963267948966);
      dVar6 = ABS(dVar10 + 1.5707963267948966) * 2.220446049250313e-16;
      dVar10 = 2.2250738585072014e-308;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar6))) {
        bVar1 = dVar9 < dVar6;
      }
      if (!bVar1) goto LAB_105da8d64;
      func_0x00010bf20c00(param_8);
      func_0x00010bf20c00(param_8);
      dVar6 = param_2 / param_4;
      if (param_2 / param_4 <= param_3 / dVar10) {
        dVar6 = param_3 / dVar10;
      }
    }
    func_0x00010bfc9ac0(dVar8,dVar6,puVar3);
  }
LAB_105da8d64:
  func_0x00010c1f5fe0(dVar8,lVar4);
LAB_105da8d68:
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105da8da4; end: 105da8e0f; -[SCPreviewFeatureSnapCropImpl createAndSetIdentityCroppingState:containerView:contentScaleFactor:] */

void FUN_105da8da4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c20c0;
  _objc_alloc();
  func_0x00010c040460(0,0x3ff0000000000000,0,0,param_1,param_2);
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(undefined **)(param_3 + 8) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf52160(*(undefined8 *)(param_3 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da8e10; end: 105da8e27; -[SCPreviewFeatureSnapCropImpl identityCroppingState] */

void FUN_105da8e10(long param_1)

{
  func_0x00010bf52160(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da8e28; end: 105da8e2f; -[SCPreviewFeatureSnapCropImpl currentCroppingState] */

undefined8 FUN_105da8e28(void)

{
  return 0;
}



/* Entry: 105da8e30; end: 105da8e73; -[SCPreviewFeatureSnapCropImpl croppingAspectRatio] */

undefined8 FUN_105da8e30(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc43e0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105da8e74; end: 105da8e7b; -[SCPreviewFeatureSnapCropImpl isCroppingActivated] */

undefined8 FUN_105da8e74(void)

{
  return 0;
}



/* Entry: 105da8e7c; end: 105da8e83; -[SCPreviewFeatureSnapCropImpl activateCropToolWithAnimated:] */

undefined8 FUN_105da8e7c(void)

{
  return 0;
}



/* Entry: 105da8e84; end: 105da8e8b; -[SCPreviewFeatureSnapCropImpl deactivateCropTool] */

undefined8 FUN_105da8e84(void)

{
  return 0;
}



/* Entry: 105da8e8c; end: 105da8e93; -[SCPreviewFeatureSnapCropImpl aiCropToolApplied] */

undefined8 FUN_105da8e8c(void)

{
  return 0;
}



/* Entry: 105da8e94; end: 105da8f33; -[SCPreviewFeatureSnapCropImpl boundsForBorderOverlayView:] */

undefined8
FUN_105da8e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x00010bf20c00(param_7);
  uVar1 = param_1;
  func_0x00010bf46560(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c4080();
  func_0x00010b69097c(param_1,param_2,param_3,param_4,uVar1);
  _CGRectIntegral();
  _objc_release(param_5);
  return param_1;
}



/* Entry: 105da8f34; end: 105da9077; -[SCPreviewFeatureSnapCropImpl cropAwareMediaOrientation] */

undefined8 FUN_105da8f34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = param_1;
  func_0x00010c111b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf926c0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar4 = param_1;
  if ((int)uVar2 == 0) {
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c111b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x000107ffcb24(uVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c072080();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0c5ae0();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105da9078; end: 105da90ab; -[SCPreviewFeatureSnapCropImpl preferredImageSizeForMediaSize:maxImageSize:] */

undefined1  [16] FUN_105da9078(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  dVar2 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar2 = INFINITY;
    }
    else {
      dVar2 = param_1 / param_2;
    }
  }
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    if (dVar2 == INFINITY) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_3;
      return auVar4;
    }
    dVar1 = dVar2 * param_4;
    if (param_3 <= dVar1) {
      auVar5._8_8_ = param_3 / dVar2;
      auVar5._0_8_ = param_3;
      return auVar5;
    }
  }
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = dVar1;
  return auVar3;
}



/* Entry: 105da90ac; end: 105da91f3; -[SCPreviewFeatureSnapCropImpl _shouldUseAspectFillByDefault:containerSize:contentScaleFactor:contentAspectFitSize:] */

bool FUN_105da90ac(double param_1,double param_2,undefined8 param_3,double param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_8);
  uVar3 = param_8;
  func_0x00010c07e880();
  if ((((int)uVar3 == 0) || (uVar3 = param_8, func_0x00010c07ec00(), (uVar3 & 1) != 0)) ||
     (uVar3 = param_8, func_0x00010c07e860(), (int)uVar3 != 0)) {
    uVar3 = param_8;
    func_0x00010c243400();
    if (uVar3 != 0x1d) {
      uVar3 = param_8;
      func_0x00010c243400();
      if (uVar3 == 0x11) {
        dVar4 = param_4;
        dVar5 = param_5;
        func_0x00010b690ad8(param_4,param_5,param_3);
        if (1.1920928955078125e-07 < dVar5 - param_2) {
          lVar1 = 8;
          if (param_5 * 9.0 <= param_4 * 16.0) {
            lVar1 = 0;
          }
          bVar2 = (dVar5 - param_2) / dVar5 < *(double *)(&UNK_10ddd09a0 + lVar1);
          goto LAB_105da91d0;
        }
        if (1.1920928955078125e-07 < dVar4 - param_1) {
          dVar4 = (dVar4 - param_1) / dVar4;
          bVar2 = false;
          if (!NAN(dVar4)) {
            bVar2 = dVar4 < 0.0;
          }
          goto LAB_105da91d0;
        }
      }
      else {
        uVar3 = param_8;
        func_0x00010c07e940();
        if ((((uVar3 & 1) != 0) || (uVar3 = param_8, func_0x00010c07e920(), (int)uVar3 == 0)) ||
           (uVar3 = param_8, func_0x00010c07ec00(), (int)uVar3 != 0)) goto LAB_105da91ac;
      }
    }
    bVar2 = true;
  }
  else {
LAB_105da91ac:
    bVar2 = false;
  }
LAB_105da91d0:
  _objc_release(param_8);
  return bVar2;
}



/* Entry: 105da91f4; end: 105da9267; -[SCPreviewFeatureSnapCropImpl _shouldRotateByDefault:] */

bool FUN_105da91f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c07e920();
  if (((int)uVar2 == 0) || (uVar2 = param_3, func_0x00010c07e880(), (uVar2 & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010c07e960();
    if ((int)uVar2 == 0) {
      bVar1 = false;
    }
    else {
      uVar2 = param_3;
      func_0x00010c242400(param_3);
      bVar1 = uVar2 == 3;
    }
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105da9268; end: 105da93df; -[SCPreviewFeatureSnapCropImpl currentlyDisplayingSegmentCroppingState] */

void FUN_105da9268(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar1 = param_1;
  func_0x00010c111b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf926c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_1;
    func_0x00010c111b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126affe8;
    func_0x00010c111b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c240640();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf60f00();
    func_0x00010c09e180(puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x000107ffcb24(uVar3,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_1);
    _objc_release(uVar3);
    param_1 = uVar2;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105da93e0; end: 105da947f; -[SCPreviewFeatureSnapCropImpl setToolbarItemViewModel:] */

void FUN_105da93e0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105da9480; end: 105da9517; -[SCPreviewFeatureSnapCropImpl reloadToolbarItemViewModel] */

/* WARNING: Possible PIC construction at 0x000105da9500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105da9504) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105da9480(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c243400();
    _objc_release(lVar1);
    if (lVar2 != 0x11) {
      puVar3 = PTR_PTR_1126c3cc0;
      _objc_alloc(PTR_PTR_1126c3cc0);
      func_0x00010c020360();
      goto code_r0x00010c216fa0;
    }
  }
  puVar3 = (undefined *)0x0;
code_r0x00010c216fa0:
                    /* WARNING: Could not recover jumptable at 0x00010c216fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToolbarItemViewModel__112663610,puVar3);
  return;
}



/* Entry: 105da9518; end: 105da953f; -[SCPreviewFeatureSnapCropImpl toolbarItemViewModelObservable] */

void FUN_105da9518(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


