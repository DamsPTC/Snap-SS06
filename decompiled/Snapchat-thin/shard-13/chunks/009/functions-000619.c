/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aef03c8; end: 10aef049f; -[SCARBarLinearGradient isEqual:] */

long FUN_10aef03c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aef0478:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aef0484;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      fVar6 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
      fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10aef0484;
        }
        goto LAB_10aef0478;
      }
    }
    lVar4 = 0;
  }
LAB_10aef0484:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aef04a0; end: 10aef04a7; -[SCARBarLinearGradient segments] */

undefined8 FUN_10aef04a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aef04a8; end: 10aef04af; -[SCARBarLinearGradient angleDeg] */

undefined4 FUN_10aef04a8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10aef04b0; end: 10aef04b7; -[SCARBarLinearGradient fallbackHexColor] */

undefined8 FUN_10aef04b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aef04b8; end: 10aef04e7; -[SCARBarLinearGradient .cxx_destruct] */

void FUN_10aef04b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aef04e8; end: 10aef056f; -[SCARBarGradientSegment initWithStop:hexColor:] */

undefined1 *
FUN_10aef04e8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701c88;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef0570; end: 10aef0593; -[SCARBarGradientSegment copyWithZone:] */

undefined8 FUN_10aef0570(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aef0594; end: 10aef061f; -[SCARBarGradientSegment hash] */

long * FUN_10aef0594(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_28 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10aef06b8:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10aef06c4;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if (((ulong)plVar4 & 1) != 0) {
      fVar8 = ABS(*(float *)(plVar3 + 1) - *(float *)(param_3 + 1));
      fVar7 = ABS(*(float *)(plVar3 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar8) && (bVar1 = false, !NAN(fVar8) && !NAN(fVar7))) {
        bVar1 = fVar8 < fVar7;
      }
      if (bVar1) {
        plVar6 = (long *)plVar3[2];
        if (plVar6 != (long *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10aef06c4;
        }
        goto LAB_10aef06b8;
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10aef06c4:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10aef0620; end: 10aef06df; -[SCARBarGradientSegment isEqual:] */

long FUN_10aef0620(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aef06b8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aef06c4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      fVar6 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
      fVar5 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10aef06c4;
        }
        goto LAB_10aef06b8;
      }
    }
    lVar4 = 0;
  }
LAB_10aef06c4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aef06e0; end: 10aef06e7; -[SCARBarGradientSegment stop] */

undefined4 FUN_10aef06e0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10aef06e8; end: 10aef06ef; -[SCARBarGradientSegment hexColor] */

undefined8 FUN_10aef06e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aef06f0; end: 10aef06fb; -[SCARBarGradientSegment .cxx_destruct] */

void FUN_10aef06f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aef06fc; end: 10aef0703; -[SCInteractiveSwipeTransitionController completionCurve] */

undefined8 FUN_10aef06fc(void)

{
  return 3;
}



/* Entry: 10aef0704; end: 10aef070f; -[SCInteractiveSwipeTransitionController completionSpeed] */

undefined8 FUN_10aef0704(void)

{
  return 0x3feb333333333333;
}



/* Entry: 10aef0710; end: 10aef0b0b; -[SCInteractiveSwipeTransitionController handleGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef0710(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  
  _objc_retain(param_5);
  lVar5 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5,param_4,lVar8);
  dVar10 = param_1;
  uVar12 = param_2;
  _objc_release(lVar8);
  _objc_release(lVar5);
  lVar5 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5,param_4,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar5);
  lVar5 = param_5;
  func_0x00010c252440();
  if (lVar5 - 3U < 3) {
    lVar5 = param_3;
    func_0x00010c0686e0();
    if ((int)lVar5 != 0) {
      func_0x00010c1ae120(param_3,param_4,0);
      if (((*(char *)(param_3 + _DAT_112785a58) == '\x01') &&
          (lVar5 = param_5, func_0x00010c252440(), lVar5 != 4)) &&
         (lVar5 = param_5, func_0x00010c252440(), lVar5 != 5)) {
        func_0x00010bfaf8e0(param_3);
        lVar5 = param_3 + _DAT_112785a48;
        _objc_loadWeakRetained(lVar5);
        func_0x00010c265000();
      }
      else {
        func_0x00010bf2e5a0(param_3);
        lVar5 = param_3 + _DAT_112785a48;
        _objc_loadWeakRetained(lVar5);
        lVar8 = (long)_DAT_112785a38;
        func_0x00010c265060();
        _objc_release(lVar5);
        if (*(long *)(param_3 + lVar8) != 1) goto LAB_10aef0ae4;
        lVar5 = *(long *)(param_3 + _DAT_112785a50);
        *(undefined8 *)(param_3 + _DAT_112785a50) = 0;
      }
      _objc_release(lVar5);
    }
    goto LAB_10aef0ae4;
  }
  if (lVar5 != 2) {
    if (lVar5 != 1) goto LAB_10aef0ae4;
    func_0x00010c1ae120(param_3,param_4,1);
    lVar8 = (long)_DAT_112785a48;
    lVar5 = param_3 + lVar8;
    _objc_loadWeakRetained(lVar5);
    lVar9 = (long)_DAT_112785a38;
    func_0x00010c265040();
    _objc_release(lVar5);
    if (*(long *)(param_3 + lVar9) == 2) {
      lVar5 = param_3 + _DAT_112785a4c;
      _objc_loadWeakRetained(lVar5);
LAB_10aef0980:
      func_0x00010c265020();
      _objc_release(lVar5);
    }
    else if (*(long *)(param_3 + lVar9) == 1) {
      lVar5 = (long)_DAT_112785a4c;
      lVar9 = param_3 + lVar5;
      _objc_loadWeakRetained();
      lVar6 = lVar9;
      func_0x00010c10f9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_3 + _DAT_112785a50);
      *(long *)(param_3 + _DAT_112785a50) = lVar6;
      _objc_release(uVar7);
      _objc_release(lVar9);
      lVar5 = param_3 + lVar5;
      _objc_loadWeakRetained(lVar5);
      goto LAB_10aef0980;
    }
    lVar8 = param_3 + lVar8;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c264fe0();
    _objc_release(lVar8);
  }
  lVar5 = param_3;
  func_0x00010c0686e0();
  if ((int)lVar5 != 0) {
    lVar5 = param_3;
    _objc_opt_class();
    bVar2 = (byte)lVar5;
    lVar8 = (long)_DAT_112785a54;
    func_0x00010be3fa00(dVar10,uVar12);
    lVar5 = param_3;
    _objc_opt_class();
    iVar4 = (int)lVar5;
    func_0x00010be3fa00(param_1,param_2);
    _objc_opt_class(param_3);
    func_0x00010becf620(param_1,param_2);
    dVar11 = param_1;
    func_0x00010be5dd60(param_3,param_4,*(undefined8 *)(param_3 + lVar8));
    fVar13 = 0.0;
    if (iVar4 != 0) {
      fVar13 = (float)(param_1 / dVar11);
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    fVar13 = (float)NEON_fminnm(fVar13,0x3f800000);
    lVar5 = param_3;
    _objc_opt_class();
    bVar3 = (byte)lVar5;
    func_0x00010bee7f80(dVar10,uVar12);
    bVar1 = 1;
    if ((double)fVar13 <= 0.3333333333333333) {
      bVar1 = (byte)iVar4 & bVar2 & bVar3;
    }
    *(byte *)(param_3 + _DAT_112785a58) = bVar1;
    dVar10 = (double)fVar13;
    if (1.0 <= fVar13) {
      dVar10 = 0.99;
    }
    func_0x00010c286a00(dVar10,param_3);
  }
LAB_10aef0ae4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10aef0b0c; end: 10aef0b5f; -[SCInteractiveSwipeTransitionController finishInteractiveTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef0b0c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701c90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_finishInteractiveTransition_1125c97e0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112785a50);
  *(undefined8 *)(param_1 + _DAT_112785a50) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 10aef0b60; end: 10aef0da7; -[SCInteractiveSwipeTransitionController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10aef0b60(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_88;
  long lVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_7);
  uVar6 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_7,param_6,uVar6);
  _objc_release(uVar6);
  lVar3 = param_5;
  _objc_opt_class();
  iVar1 = (int)lVar3;
  dVar11 = *(double *)(param_5 + _DAT_112785a40);
  func_0x00010be454e0(param_1,param_2,dVar11);
  lVar3 = param_5;
  _objc_opt_class();
  iVar2 = (int)lVar3;
  func_0x00010be3fa00();
  if (iVar1 == 0 || iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    lVar3 = param_5;
    func_0x00010c10f3a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      iVar1 = 1;
    }
    else {
      lVar4 = param_5;
      func_0x00010c10f3a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c22e3a0();
      iVar1 = (int)lVar5;
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  if ((lStack_88 == 8) || (lStack_88 == 1)) {
    uVar6 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_7,param_6,uVar6);
    dVar7 = param_1;
    dVar9 = param_2;
    _objc_release(uVar6);
    uVar6 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    dVar8 = dVar7;
    dVar10 = dVar9;
    dVar12 = dVar11;
    dVar13 = param_4;
    _objc_release(uVar6);
    uVar6 = param_7;
    func_0x00010c29bf00();
    iVar2 = (int)uVar6;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release();
    if (iVar1 != 0) {
      _CGRectContainsPoint
                (dVar9 + dVar8,dVar7 + dVar10,dVar12 - (dVar9 + param_4),dVar13 - (dVar7 + dVar11),
                 param_1,param_2);
      iVar1 = iVar2;
      goto joined_r0x00010aef0d44;
    }
  }
  else {
joined_r0x00010aef0d44:
    if (iVar1 != 0) {
      *(long *)(param_5 + _DAT_112785a54) = lStack_88;
      uVar6 = 1;
      goto LAB_10aef0d6c;
    }
  }
  uVar6 = 0;
LAB_10aef0d6c:
  _objc_release(param_7);
  _objc_release(param_7);
  return uVar6;
}



/* Entry: 10aef0da8; end: 10aef0e43; -[SCInteractiveSwipeTransitionController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10aef0da8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_3 == *(long *)(param_1 + _DAT_112785a34)) {
    lVar1 = (long)_DAT_112785a48;
    _objc_retain(param_4);
    param_1 = param_1 + lVar1;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c27a760();
    _objc_release(param_4);
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10aef0e44; end: 10aef0f3f; -[SCInteractiveSwipeTransitionController _maxTranslationWithDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aef0e44(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_2 = param_2 + _DAT_112785a4c;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010c10fe80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
  uVar3 = 0;
  lVar1 = lVar2;
  if (param_4 < 4) {
    if (param_4 == 1) goto LAB_10aef0ed8;
    if (param_4 != 2) goto LAB_10aef0f20;
LAB_10aef0ef8:
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
  }
  else {
    if (param_4 == 4) goto LAB_10aef0ef8;
    if (param_4 != 8) goto LAB_10aef0f20;
LAB_10aef0ed8:
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
  }
  _objc_release(lVar1);
  uVar3 = param_1;
LAB_10aef0f20:
  _objc_release(lVar2);
  return uVar3;
}



/* Entry: 10aef0f40; end: 10aef0f83; +[SCInteractiveSwipeTransitionController _translationMagnitudeWithTranslation:direction:] */

double FUN_10aef0f40(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  if (param_5 < 4) {
    if (param_5 == 1) {
LAB_10aef0f6c:
      return ABS(param_2);
    }
    if (param_5 != 2) {
      return 0.0;
    }
  }
  else if (param_5 != 4) {
    if (param_5 != 8) {
      return 0.0;
    }
    goto LAB_10aef0f6c;
  }
  return ABS(param_1);
}



/* Entry: 10aef0f84; end: 10aef101f; +[SCInteractiveSwipeTransitionController _isDirectionAllowedWithVectorPoint:directions:mainDirectionOut:] */

undefined8
FUN_10aef0f84(double param_1,double param_2,undefined8 param_3,undefined8 param_4,uint param_5,
             undefined8 *param_6)

{
  undefined8 uVar1;
  
  if ((((param_5 >> 3 & 1) == 0) || (0.0 <= param_2)) || (ABS(param_2) <= ABS(param_1))) {
    if ((((param_5 & 1) == 0) || (param_2 <= 0.0)) || (param_2 <= ABS(param_1))) {
      if ((((param_5 >> 1 & 1) == 0) || (0.0 <= param_1)) || (ABS(param_1) <= ABS(param_2))) {
        if ((param_5 >> 2 & 1) == 0) {
          return 0;
        }
        if (param_1 <= 0.0) {
          return 0;
        }
        if (param_1 <= ABS(param_2)) {
          return 0;
        }
        if (param_6 == (undefined8 *)0x0) {
          return 1;
        }
        uVar1 = 4;
      }
      else {
        if (param_6 == (undefined8 *)0x0) {
          return 1;
        }
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 1;
      if (param_6 == (undefined8 *)0x0) {
        return 1;
      }
    }
  }
  else {
    if (param_6 == (undefined8 *)0x0) {
      return 1;
    }
    uVar1 = 8;
  }
  *param_6 = uVar1;
  return 1;
}



/* Entry: 10aef1020; end: 10aef1063; +[SCInteractiveSwipeTransitionController _isValidPlaneWithVelocity:direction:slopFactor:] */

undefined8
FUN_10aef1020(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
             ulong param_6)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = ABS(param_2) * param_3;
  param_1 = ABS(param_1);
  bVar1 = true;
  bVar2 = false;
  if ((param_6 & 9) != 0) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(dVar3) && !NAN(param_1)) {
      bVar1 = dVar3 < param_1;
      bVar2 = false;
    }
  }
  if ((bVar1 != bVar2) && (((param_6 & 6) == 0 || (param_1 * param_3 < ABS(param_2))))) {
    return 0;
  }
  return 1;
}



/* Entry: 10aef1064; end: 10aef10af; +[SCInteractiveSwipeTransitionController _velocity:exceedsSpeedThresholdForDirection:] */

bool FUN_10aef1064(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                  )

{
  if (((param_5 & 9) != 0) && (300.0 <= ABS(param_2))) {
    return true;
  }
  if ((param_5 & 6) != 0) {
    return 300.0 <= ABS(param_1);
  }
  return false;
}



/* Entry: 10aef10b0; end: 10aef10bf; -[SCInteractiveSwipeTransitionController transitionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aef10b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785a38);
}



/* Entry: 10aef10c0; end: 10aef10df; -[SCInteractiveSwipeTransitionController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef10c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112785a48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef10e0; end: 10aef10ff; -[SCInteractiveSwipeTransitionController presentationDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef10e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112785a4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef1100; end: 10aef110f; -[SCInteractiveSwipeTransitionController presentedViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aef1100(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785a50);
}



/* Entry: 10aef1110; end: 10aef111f; -[SCInteractiveSwipeTransitionController panGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aef1110(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785a34);
}



/* Entry: 10aef1120; end: 10aef112f; -[SCInteractiveSwipeTransitionController directionalSlopFactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aef1120(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785a40);
}



/* Entry: 10aef1130; end: 10aef113f; -[SCInteractiveSwipeTransitionController setDirectionalSlopFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef1130(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112785a40) = param_1;
  return;
}



/* Entry: 10aef1140; end: 10aef114f; -[SCInteractiveSwipeTransitionController interactionInProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10aef1140(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112785a30);
}



/* Entry: 10aef1150; end: 10aef115f; -[SCInteractiveSwipeTransitionController setInteractionInProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef1150(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112785a30) = param_3;
  return;
}



/* Entry: 10aef1160; end: 10aef11c3; -[SCInteractiveSwipeTransitionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef1160(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112785a4c);
  _objc_destroyWeak(param_1 + _DAT_112785a48);
  _objc_storeStrong(param_1 + _DAT_112785a50,0);
  _objc_destroyWeak(param_1 + _DAT_112785a44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112785a34,0);
  return;
}



/* Entry: 10aef11c4; end: 10aef1267; -[SCSwipeTransitionController initWithDirection:animationDuration:passthroughViews:] */

undefined1 *
FUN_10aef11c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112701c98;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    puVar2 = PTR_PTR_1126de968;
    _objc_alloc();
    func_0x00010c034440();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef1268; end: 10aef129f; -[SCSwipeTransitionController wasCancelled] */

long FUN_10aef1268(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ac00();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10aef12a0; end: 10aef1303; -[SCSwipeTransitionController _isInteractive] */

long FUN_10aef12a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c075b60();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10aef1304; end: 10aef1337; -[SCSwipeTransitionController resetWithDuration:direction:] */

void FUN_10aef1304(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  _objc_storeWeak(param_2 + 0x28,0);
  *(undefined8 *)(param_2 + 0x10) = param_4;
  return;
}



/* Entry: 10aef1338; end: 10aef15f7; -[SCSwipeTransitionController animateTransition:presentedViewController:presentingViewController:] */

void FUN_10aef1338(long param_1,undefined8 param_2,uint param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1;
  if ((param_3 & 1) == 0) {
    func_0x00010bf84e40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c10f300();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = param_5;
    lVar1 = param_4;
    if (param_3 == 0) {
      lVar3 = param_4;
      lVar1 = param_5;
    }
    _objc_retain(lVar3);
    _objc_retain(lVar1);
    lVar4 = lVar3;
    func_0x00010c29bf00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf03280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf032c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126d4190;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar2;
  uStack_70 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266c20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126d41b0;
  _objc_alloc();
  func_0x00010c035820();
  puVar9 = (undefined8 *)(param_1 + 0x20);
  uVar7 = *puVar9;
  *puVar9 = puVar5;
  _objc_release(uVar7);
  _objc_initWeak(auStack_80,param_1);
  uVar7 = *puVar9;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uStack_88 = (undefined1)param_3;
  func_0x00010c24dd40(uVar7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_80);
    __Unwind_Resume();
    param_4 = param_4 + 0x30;
    _objc_loadWeakRetained();
    if (param_4 != 0) {
      lVar2 = param_4 + 0x28;
      _objc_loadWeakRetained(lVar2);
      _objc_retain();
      func_0x00010c27ac00(lVar2);
      func_0x00010bf43bc0(lVar2);
      _objc_release(lVar2);
      _objc_release(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 10aef15f8; end: 10aef1657;  */

void FUN_10aef15f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    _objc_retain();
    lVar2 = lVar1;
    func_0x00010c27ac00(lVar1);
    func_0x00010bf43bc0(lVar1,param_2,(uint)lVar2 ^ 1);
    _objc_release(lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aef1658; end: 10aef165f; -[SCSwipeTransitionController transitionDuration:] */

undefined8 FUN_10aef1658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aef1660; end: 10aef1737; -[SCSwipeTransitionController animateTransition:] */

void FUN_10aef1660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x28,param_3);
  uVar1 = *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58;
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar1 = *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48;
  }
  _objc_retain(uVar1);
  uVar2 = param_3;
  func_0x00010c29c220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c29c220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf032a0(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aef1738; end: 10aef1857; +[SCSwipeTransitionController _originPointForDirection:presentingViewController:presentedViewController:] */

undefined1  [16]
FUN_10aef1738(double param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  double unaff_d8;
  double unaff_d9;
  undefined1 auVar2 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_6;
  if (param_4 < 4) {
    if (param_4 != 1) {
      if (param_4 != 2) goto LAB_10aef182c;
      uVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      goto LAB_10aef1820;
    }
    func_0x00010c29bf00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    unaff_d9 = -param_1;
LAB_10aef17f8:
    param_1 = 0.0;
  }
  else {
    if (param_4 != 4) {
      if (param_4 != 8) goto LAB_10aef182c;
      uVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      unaff_d9 = param_1;
      goto LAB_10aef17f8;
    }
    func_0x00010c29bf00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    param_1 = -param_1;
LAB_10aef1820:
    unaff_d9 = 0.0;
  }
  _objc_release(uVar1);
  unaff_d8 = param_1;
LAB_10aef182c:
  _objc_release(param_6);
  _objc_release(param_5);
  auVar2._8_8_ = unaff_d9;
  auVar2._0_8_ = unaff_d8;
  return auVar2;
}



/* Entry: 10aef1858; end: 10aef19a3; -[SCSwipeTransitionController presentationAnimationPhaseFromViewController:toViewController:] */

void FUN_10aef1858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_opt_class(param_5);
  func_0x00010be6e5e0();
  _objc_release(param_7);
  uVar1 = param_8;
  func_0x00010c29bf00(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_3;
  uVar3 = param_4;
  _objc_release(uVar1);
  uVar1 = param_8;
  func_0x00010c29bf00(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar1);
  uVar1 = param_8;
  func_0x00010c29bf00(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  uVar1 = param_8;
  func_0x00010c29bf00(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010be18fe0(0,0,uVar2,uVar3,param_5,param_6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10aef19a4; end: 10aef1b03; -[SCSwipeTransitionController dismissalAnimationPhaseFromViewController:toViewController:] */

void FUN_10aef19a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar1 = param_8;
  func_0x00010c29bf00(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_3;
  uVar3 = param_4;
  _objc_release(uVar1);
  _objc_opt_class(param_5);
  func_0x00010be6e5e0();
  _objc_release(param_7);
  uVar1 = param_8;
  func_0x00010c29bf00(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar1);
  uVar1 = param_8;
  func_0x00010c29bf00(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(0,0,param_3,param_4);
  _objc_release(uVar1);
  uVar1 = param_8;
  func_0x00010c29bf00(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010be18fe0(param_1,param_2,uVar2,uVar3,param_5,param_6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10aef1b04; end: 10aef1bcf; -[SCSwipeTransitionController _frameChangeAnimationPhaseWithDestinationFrame:view:] */

void FUN_10aef1b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d4198;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10aef1bd0;
  puStack_88 = &UNK_110c90bf8;
  uStack_80 = param_5;
  uStack_78 = param_7;
  uStack_70 = param_1;
  uStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_7);
  func_0x00010bf61a20(puVar1,param_6,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_78);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aef1bd0; end: 10aef1d0b;  */

void FUN_10aef1bd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  func_0x00010be412e0();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  dVar3 = *(double *)(*(long *)(param_1 + 0x20) + 0x18) + -0.05;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  uVar4 = 0;
  if (dVar3 != 0.0) {
    uVar4 = 0x3fa999999999999a;
  }
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010bf02ee0(dVar3,uVar4,puVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10aef1d0c; end: 10aef1d27;  */

void FUN_10aef1d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10aef1d28; end: 10aef1d2f; -[SCSwipeTransitionController presenting] */

undefined1 FUN_10aef1d28(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 10aef1d30; end: 10aef1d37; -[SCSwipeTransitionController setPresenting:] */

void FUN_10aef1d30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10aef1d38; end: 10aef1d6f; -[SCSwipeTransitionController .cxx_destruct] */

void FUN_10aef1d38(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10aef1d70; end: 10aef1e33; -[SCPassthroughViewsCoordinator initWithPassthroughViews:] */

undefined1 * FUN_10aef1d70(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112701ca0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    func_0x00010bf51e00();
    puVar4 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      puVar4 = puVar2;
    }
    _objc_retain(puVar4);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2c00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef1e34; end: 10aef1f7f; -[SCPassthroughViewsCoordinator resetTransplantedViews] */

long FUN_10aef1e34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0dff20(uVar2,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010becf680(param_1,param_2,uVar5,uVar3,uVar2);
        _objc_release(uVar3);
        _objc_release(uVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar4;
  }
  ___stack_chk_fail();
  lVar1 = lVar4 + 0x18;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = lVar4 + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar6 = lVar4;
    func_0x00010c27ac00();
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  return lVar6;
}



/* Entry: 10aef1f80; end: 10aef1fe3; -[SCPassthroughViewsCoordinator _transitionWasCancelled] */

long FUN_10aef1f80(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c27ac00();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10aef1fe4; end: 10aef20eb; -[SCPassthroughViewsCoordinator animateTransition:presenting:] */

void FUN_10aef1fe4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48;
  if (param_4 == 0) {
    uVar3 = *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58;
  }
  _objc_retain(uVar3);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c29c220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c29c220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x18,param_3);
  _objc_release(param_3);
  func_0x00010bf03280(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10aef20ec; end: 10aef25ab; -[SCPassthroughViewsCoordinator animateTransition:containerView:toViewController:fromViewController:] */

void FUN_10aef20ec(long param_1,undefined8 param_2,int param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [264];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_storeWeak(param_1 + 0x20,param_4);
  _objc_initWeak(auStack_188,param_1);
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_10aef25ac;
  puStack_198 = &UNK_110842c58;
  _objc_copyWeak(auStack_190,auStack_188);
  ppuVar1 = &puStack_1b0;
  _objc_retainBlock();
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_10aef25d8;
  puStack_1d0 = &UNK_110860b18;
  _objc_retain(param_5);
  uStack_1c8 = param_5;
  lStack_1c0 = param_1;
  _objc_retain(param_4);
  ppuVar2 = &puStack_1e8;
  lStack_1b8 = param_4;
  _objc_retainBlock();
  if (param_3 == 0) {
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 8);
    _objc_retain(lVar9);
    lVar3 = lVar9;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_2a0;
      do {
        lVar5 = 0;
        do {
          if (*plStack_2a0 != lVar8) {
            _objc_enumerationMutation(lVar9);
          }
          uVar7 = *(undefined8 *)(lStack_2a8 + lVar5 * 8);
          func_0x00010c262ca0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010becf680(param_1);
          _objc_release(uVar7);
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar3 = lVar9;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar9);
    _objc_initWeak(auStack_2b8,param_1);
    puVar4 = PTR_PTR_1126d4198;
    _objc_copyWeak(auStack_2c0,auStack_2b8);
    _objc_retain(ppuVar2);
    _objc_retain(ppuVar1);
    func_0x00010bf61a20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_2c0);
    _objc_destroyWeak(auStack_2b8);
  }
  else {
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 8);
    _objc_retain(lVar9);
    lVar3 = lVar9;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_220;
      do {
        lVar5 = 0;
        do {
          if (*plStack_220 != lVar8) {
            _objc_enumerationMutation(lVar9);
          }
          uVar10 = *(undefined8 *)(lStack_228 + lVar5 * 8);
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          uVar7 = uVar10;
          func_0x00010c262ca0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar6);
          _objc_release(uVar7);
          func_0x00010c262ca0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010becf680(param_1);
          _objc_release(uVar10);
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar3 = lVar9;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar9);
    puVar4 = PTR_PTR_1126d4198;
    puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_260 = 0xc2000000;
    pcStack_258 = FUN_10aef27ac;
    puStack_250 = &UNK_110c90c28;
    lStack_248 = param_1;
    _objc_retain(ppuVar1);
    ppuStack_240 = ppuVar1;
    _objc_retain(ppuVar2);
    ppuStack_238 = ppuVar2;
    func_0x00010bf61a20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuStack_238);
    _objc_release(ppuStack_240);
  }
  _objc_release(ppuVar2);
  _objc_release(lStack_1b8);
  _objc_release(uStack_1c8);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  __Unwind_Resume(param_4);
  param_4 = param_4 + 0x20;
  _objc_loadWeakRetained(param_4);
  func_0x00010c139aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10aef25ac; end: 10aef25d7;  */

void FUN_10aef25ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c139aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aef25d8; end: 10aef27ab;  */

void FUN_10aef25d8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar8 = *(ulong *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  _objc_opt_isKindOfClass(uVar8,puVar3);
  lVar9 = *(long *)(param_1 + 0x20);
  if ((uVar8 & 1) == 0) {
    _objc_retain(lVar9);
  }
  else {
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar4;
    if (lVar4 == 0) {
      lVar10 = *(long *)(param_1 + 0x20);
    }
    _objc_retain(lVar10);
    _objc_release(lVar4);
    _objc_release(lVar9);
    lVar9 = lVar10;
  }
  lVar10 = lVar9;
  _objc_storeWeak(*(long *)(param_1 + 0x28) + 0x28);
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_2);
      }
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      lVar5 = lVar9;
      func_0x00010c29bf00(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becf680(uVar1);
      _objc_release(lVar5);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  iVar7 = (int)*(undefined8 *)(param_2 + 0x20);
  _objc_retain(lVar10);
  func_0x00010becf3a0();
  lVar9 = 0x28;
  if (iVar7 == 0) {
    lVar9 = 0x30;
  }
  (**(code **)(*(long *)(param_2 + lVar9) + 0x10))
            (*(long *)(param_2 + lVar9),*(undefined8 *)(*(long *)(param_2 + 0x20) + 8));
  (**(code **)(lVar10 + 0x10))(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 10aef27ac; end: 10aef289b;  */

void FUN_10aef27ac(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010becf3a0();
  lVar1 = 0x28;
  if (iVar2 == 0) {
    lVar1 = 0x30;
  }
  (**(code **)(*(long *)(param_1 + lVar1) + 0x10))
            (*(long *)(param_1 + lVar1),*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  (**(code **)(param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aef289c; end: 10aef2a2b; -[SCPassthroughViewsCoordinator _transplantPassthroughView:fromView:toView:] */

void FUN_10aef289c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_7;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == param_8) {
LAB_10aef29a4:
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_7;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5 + 0x20;
    _objc_loadWeakRetained();
    if (lVar2 == lVar3) {
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_10aef29a4;
    }
    lVar4 = param_7;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    param_5 = param_5 + 0x28;
    _objc_loadWeakRetained();
    lVar5 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != lVar5) goto LAB_10aef29f4;
  }
  func_0x00010bfb68e0(param_7);
  func_0x00010bf513e0(param_9,param_6,param_8);
  func_0x00010befbb60(param_9,param_6,param_7);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,param_7);
LAB_10aef29f4:
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10aef2a2c; end: 10aef2a73; -[SCPassthroughViewsCoordinator .cxx_destruct] */

void FUN_10aef2a2c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef2a74; end: 10aef2a8b; -[SCSwipeTransitionCoordinatorImpl dataSource] */

void FUN_10aef2a74(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef2a8c; end: 10aef2aa3; -[SCSwipeTransitionCoordinatorImpl delegate] */

void FUN_10aef2a8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef2aa4; end: 10aef2aaf; -[SCSwipeTransitionCoordinatorImpl setDelegate:] */

void FUN_10aef2aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10aef2ab0; end: 10aef2ab7; -[SCSwipeTransitionCoordinatorImpl shouldSetPresentedViewControllerAfterTransition] */

undefined8 FUN_10aef2ab0(void)

{
  return 0;
}



/* Entry: 10aef2ab8; end: 10aef2af3; -[SCSwipeTransitionCoordinatorImpl isTransitioning] */

undefined8 FUN_10aef2ab8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c06d1e0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010c06d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_isBeingDismissed_1125f8e78);
  return uVar2;
}



/* Entry: 10aef2af4; end: 10aef2c87; -[SCSwipeTransitionCoordinatorImpl presentViewController:animationDuration:completion:] */

void FUN_10aef2af4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar1 = param_2 + 0x30;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c10f9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    _objc_retain(param_4);
    lVar2 = param_4;
  }
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(long *)(param_2 + 0x18) = lVar2;
  _objc_release(uVar3);
  func_0x00010beaf080(param_2);
  _objc_initWeak(auStack_68,param_2);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(lVar2);
  func_0x00010c0f9120(param_1,param_2);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10aef2c88; end: 10aef2ceb;  */

void FUN_10aef2c88(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c233140(), (int)lVar2 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aef2cec; end: 10aef2de3; -[SCSwipeTransitionCoordinatorImpl dismissViewControllerAnimationDuration:completion:] */

void FUN_10aef2cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c0f9120(param_1,param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10aef2de4; end: 10aef2e27;  */

void FUN_10aef2de4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aef2e28; end: 10aef2e8f; -[SCSwipeTransitionCoordinatorImpl _completeDismissViewController:completion:] */

void FUN_10aef2e28(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
    func_0x00010be570e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f311d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10aef2e90; end: 10aef2e93; -[SCSwipeTransitionCoordinatorImpl swipeTransitionController:willBeginWithTransitionType:] */

void FUN_10aef2e90(void)

{
  return;
}



/* Entry: 10aef2e94; end: 10aef2e97; -[SCSwipeTransitionCoordinatorImpl swipeTransitionController:didBeginWithTransitionType:] */

void FUN_10aef2e94(void)

{
  return;
}



/* Entry: 10aef2e98; end: 10aef2ed7; -[SCSwipeTransitionCoordinatorImpl swipeTransitionController:didFinishWithTransitionType:] */

void FUN_10aef2e98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be570f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__logPlatformInfoWithString__1125735d8,
               &PTR____CFConstantStringClassReference_110f311f8);
    return;
  }
  return;
}



/* Entry: 10aef2ed8; end: 10aef2f7b; -[SCSwipeTransitionCoordinatorImpl swipeTransitionController:willFailWithTransitionType:] */

void FUN_10aef2ed8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c27a8a0();
    _objc_release(lVar3);
  }
  if (param_4 == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be570f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__logPlatformInfoWithString__1125735d8,
               &PTR____CFConstantStringClassReference_110f31218);
    return;
  }
  return;
}



/* Entry: 10aef2f7c; end: 10aef3033; -[SCSwipeTransitionCoordinatorImpl transitionController:transitionType:shouldAllowGesture:toRecognizeSimultaneouslyWith:] */

long FUN_10aef2f7c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar3;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c27a860();
    _objc_release(param_1);
  }
  _objc_release(in_x5);
  _objc_release(in_x4);
  return lVar3;
}



/* Entry: 10aef3034; end: 10aef30f7; -[SCSwipeTransitionCoordinatorImpl presentedViewControllerWithSwipeTransitionController:] */

void FUN_10aef3034(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  if ((uVar2 & 1) == 0) {
    func_0x00010c10f9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c10f9e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x00010be570e0(param_1);
  }
  func_0x00010beaf080(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10aef30f8; end: 10aef30fb; -[SCSwipeTransitionCoordinatorImpl presentingViewControllerWithSwipeTransitionController:] */

void FUN_10aef30f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentingViewController_112621960);
  return;
}



/* Entry: 10aef30fc; end: 10aef315b; -[SCSwipeTransitionCoordinatorImpl shouldBeginTransitionWithSwipeTransitionController:gestureRecognizer:] */

undefined8
FUN_10aef30fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c27abe0(param_3);
  func_0x00010c234ee0(param_1,param_2,param_3,param_4,1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10aef315c; end: 10aef328b; -[SCSwipeTransitionCoordinatorImpl swipeTransitionController:transitionViewController:withTransitionType:direction:completion:] */

void FUN_10aef315c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = 0xc2000000;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10aef328c;
  puStack_70 = &UNK_110842508;
  _objc_retain(param_7);
  ppuVar1 = &puStack_88;
  uStack_68 = param_7;
  _objc_retainBlock(ppuVar1);
  uVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  uVar6 = 0x3fd0000000000000;
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf6a600();
    _objc_release(lVar4);
    uVar6 = uVar5;
  }
  func_0x00010c0f9120(uVar6,param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 10aef328c; end: 10aef329f;  */

void FUN_10aef328c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010aef3298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10aef32a0; end: 10aef334b; -[SCSwipeTransitionCoordinatorImpl shouldTransitionWithTransitionType:gestureRecognizer:interactive:] */

long FUN_10aef32a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 1;
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c27a840();
    _objc_release(param_1);
  }
  _objc_release(param_4);
  return lVar3;
}



/* Entry: 10aef334c; end: 10aef3633; -[SCSwipeTransitionCoordinatorImpl performTransitionWithViewController:withTransitionType:direction:animationDuration:interactive:completion:] */

void FUN_10aef334c(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined1 param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  uVar6 = param_2;
  func_0x00010c234ee0();
  if ((uVar6 & 1) == 0) {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,0);
    }
  }
  else {
    if (param_5 == 1) {
      uVar6 = *(ulong *)(param_2 + 0x18);
      _objc_retain(uVar6);
    }
    else {
      uVar6 = param_2;
      func_0x00010c10fd00(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = param_2 + 0x28;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = param_2 + 0x28;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c27a880();
      _objc_release(lVar3);
    }
    if (*(long *)(param_2 + 0x20) == 0) {
      puVar4 = PTR_PTR_1126de978;
      _objc_alloc();
      uVar1 = param_2;
      func_0x00010c0f5160(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00c840(param_1);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      *(undefined **)(param_2 + 0x20) = puVar4;
      _objc_release(uVar5);
      _objc_release(uVar1);
    }
    else {
      func_0x00010c139e80(param_1);
    }
    if (param_1 == 0.0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      uVar1 = param_2;
      func_0x00010c10fd00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf032a0(uVar5);
      _objc_release(uVar1);
    }
    if (*(long *)(param_2 + 8) == 0) {
      _objc_initWeak(auStack_78,param_2);
      _objc_retain(param_8);
      _objc_copyWeak(auStack_90,auStack_78);
      lStack_88 = param_5;
      uStack_80 = param_7;
      func_0x00010c0f8aa0(param_2);
      _objc_destroyWeak(auStack_90);
      _objc_release(param_8);
      _objc_destroyWeak(auStack_78);
    }
    uVar1 = param_2 + 0x28;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = param_2 + 0x28;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c27a7a0();
      _objc_release(lVar3);
    }
    _objc_release(uVar6);
  }
  _objc_release(param_8);
  _objc_release(param_4);
  return;
}



/* Entry: 10aef3634; end: 10aef36db;  */

void FUN_10aef3634(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10aef36dc;
  puStack_40 = &UNK_110849530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  ppuVar1 = &puStack_58;
  uStack_38 = uVar2;
  _objc_retainBlock(ppuVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe420();
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10aef36dc; end: 10aef36f3;  */

void FUN_10aef36dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010aef36ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 10aef36f4; end: 10aef37a7; -[SCSwipeTransitionCoordinatorImpl _didFinishTransitionWithTransitionType:interactive:completion:] */

void FUN_10aef36f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long in_x4;
  
  _objc_retain(in_x4);
  if (in_x4 != 0) {
    (**(code **)(in_x4 + 0x10))(in_x4);
  }
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2a2340(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c27a800(lVar3);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 10aef37a8; end: 10aef37b3; -[SCSwipeTransitionCoordinatorImpl passthroughViews] */

undefined * FUN_10aef37a8(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 10aef37b4; end: 10aef389b; -[SCSwipeTransitionCoordinatorImpl performModalTransitionWithViewController:withTransitionType:animated:completion:] */

void FUN_10aef37b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_4 == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x18),param_2,param_5,param_6);
      goto LAB_10aef3868;
    }
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
  }
  else {
    if (param_4 != 1) goto LAB_10aef3868;
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
  }
  _objc_release(param_1);
LAB_10aef3868:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aef389c; end: 10aef38db; -[SCSwipeTransitionCoordinatorImpl interactionControllerForPresentation:] */

void FUN_10aef389c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
  func_0x00010c0686e0();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10aef38dc; end: 10aef391b; -[SCSwipeTransitionCoordinatorImpl interactionControllerForDismissal:] */

void FUN_10aef38dc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c0686e0();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10aef391c; end: 10aef3953; -[SCSwipeTransitionCoordinatorImpl animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_10aef391c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1e1480(*(undefined8 *)(param_1 + 0x20),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aef3954; end: 10aef398b; -[SCSwipeTransitionCoordinatorImpl animationControllerForDismissedController:] */

void FUN_10aef3954(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1e1480(*(undefined8 *)(param_1 + 0x20),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aef398c; end: 10aef3a3f; -[SCSwipeTransitionCoordinatorImpl presentationControllerForPresentedViewController:presentingViewController:sourceViewController:] */

void FUN_10aef398c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c27a820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10aef3a40; end: 10aef3a87; -[SCSwipeTransitionCoordinatorImpl presentingViewController] */

void FUN_10aef3a40(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10fea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10aef3a88; end: 10aef3b8f; -[SCSwipeTransitionCoordinatorImpl _setupPresentedViewControllerForTransition] */

void FUN_10aef3a88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  func_0x00010c219b20(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  func_0x00010c1c8b80(*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR_PTR_1126de970;
  _objc_alloc();
  func_0x00010c0554a0();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c1e1240(*(undefined8 *)(param_1 + 0x48));
  uVar5 = *(ulong *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  _objc_opt_isKindOfClass(uVar5,puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if ((uVar5 & 1) == 0) {
    _objc_retain(uVar3);
  }
  else {
    func_0x00010c29c580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar2;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = uVar3;
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7400(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10aef3b90; end: 10aef3b93; -[SCSwipeTransitionCoordinatorImpl _logPlatformInfoWithString:] */

void FUN_10aef3b90(void)

{
  return;
}



/* Entry: 10aef3b94; end: 10aef3b9b; -[SCSwipeTransitionCoordinatorImpl presentationDirection] */

undefined8 FUN_10aef3b94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aef3b9c; end: 10aef3ba3; -[SCSwipeTransitionCoordinatorImpl dismissDirection] */

undefined8 FUN_10aef3b9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10aef3ba4; end: 10aef3bab; -[SCSwipeTransitionCoordinatorImpl interactiveDismissController] */

undefined8 FUN_10aef3ba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10aef3bac; end: 10aef3c03; -[SCSwipeTransitionCoordinatorImpl .cxx_destruct] */

void FUN_10aef3bac(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10aef3c04; end: 10aef3c3b;  */

void FUN_10aef3c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,&PTR_PTR_110c90c90,param_3,0x301);
  return;
}


