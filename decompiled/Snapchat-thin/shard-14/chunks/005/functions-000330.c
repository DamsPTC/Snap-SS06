/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2a8298; end: 10b2a82d7; -[SCConfigurableTapGestureRecognizer touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8298(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278e1e8;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x00010c209fc0(param_1,param_2,3);
  }
  *(undefined1 *)(param_1 + lVar1) = 0;
  return;
}



/* Entry: 10b2a82d8; end: 10b2a82fb; -[SCConfigurableTapGestureRecognizer _failIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a82d8(long param_1)

{
  if (*(char *)(param_1 + _DAT_11278e1e8) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11278e1e8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,5);
    return;
  }
  return;
}



/* Entry: 10b2a82fc; end: 10b2a8363; -[SCConfigurableTapGestureRecognizer reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a82fc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127061f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_reset_11262ba18);
  *(undefined1 *)(param_1 + _DAT_11278e1e8) = 0;
  lVar2 = (long)_DAT_11278e1f0;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2a8364; end: 10b2a8373; -[SCConfigurableTapGestureRecognizer touchMovementTolerance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a8364(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e1e4);
}



/* Entry: 10b2a8374; end: 10b2a8383; -[SCConfigurableTapGestureRecognizer setTouchMovementTolerance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8374(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e1e4) = param_1;
  return;
}



/* Entry: 10b2a8384; end: 10b2a8393; -[SCConfigurableTapGestureRecognizer tapDwellTolerance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a8384(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e1e0);
}



/* Entry: 10b2a8394; end: 10b2a83a3; -[SCConfigurableTapGestureRecognizer setTapDwellTolerance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8394(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e1e0) = param_1;
  return;
}



/* Entry: 10b2a83a4; end: 10b2a83b7; -[SCConfigurableTapGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a83a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e1f0,0);
  return;
}



/* Entry: 10b2a83b8; end: 10b2a83e7; -[SCFastDoubleTapGestureRecognizer initWithTarget:action:maximumIntervalBetweenSuccessiveTaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a83b8(undefined8 param_1,long param_2)

{
  func_0x00010c050900();
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + _DAT_11278e1f4) = param_1;
  }
  return;
}



/* Entry: 10b2a83e8; end: 10b2a8443; -[SCFastDoubleTapGestureRecognizer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a83e8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_11278e1f8;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1127061f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b2a8444; end: 10b2a8557; -[SCFastDoubleTapGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8444(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR_s_touchesBegan_withEvent__11267b780;
  puStack_38 = PTR_PTR_1127061f8;
  uStack_40 = param_3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&uStack_40,puVar2,param_5,param_6);
  uVar5 = param_5;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010c268ec0();
  uVar4 = param_3;
  func_0x00010c0df4e0();
  if (uVar5 < uVar4) {
    puVar1 = (undefined8 *)(param_3 + (long)_DAT_11278e1fc);
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(uVar3);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    uVar5 = param_3;
  }
  else {
    lVar6 = (long)_DAT_11278e1f8;
    func_0x00010c069d00(*(undefined8 *)(param_3 + lVar6));
    uVar5 = *(ulong *)(param_3 + lVar6);
    *(undefined8 *)(param_3 + lVar6) = 0;
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
  return;
}



/* Entry: 10b2a8558; end: 10b2a867b; -[SCFastDoubleTapGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8558(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1127061f8;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_touchesMoved_withEvent__11252ca58,param_5,param_6);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 0) {
    uVar2 = param_5;
    func_0x00010bf00560(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(uVar3);
    _objc_release(lVar1);
    param_1 = *(double *)(param_3 + _DAT_11278e1fc) - param_1;
    param_2 = ((double *)(param_3 + _DAT_11278e1fc))[1] - param_2;
    if (40.0 < ABS(SQRT(param_2 * param_2 + param_1 * param_1))) {
      func_0x00010c209fc0(param_3);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 10b2a867c; end: 10b2a87db; -[SCFastDoubleTapGestureRecognizer touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a867c(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar4 = PTR_s_touchesEnded_withEvent__11267b788;
  uVar8 = (undefined4)((ulong)param_1 >> 0x20);
  uVar7 = (undefined4)param_1;
  puStack_38 = PTR_PTR_1127061f8;
  uStack_40 = param_2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_40,puVar4,param_4,param_5);
  uVar1 = param_4;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c268ec0();
  uVar3 = param_2;
  func_0x00010c0df4e0();
  if (uVar1 < uVar3) {
    lVar6 = (long)_DAT_11278e1f8;
    func_0x00010c069d00(*(undefined8 *)(param_2 + lVar6));
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010be5de40(param_2);
    func_0x00010c1503c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar6);
    *(undefined **)(param_2 + lVar6) = puVar4;
    _objc_release(uVar5);
    func_0x00010be5de60(param_2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b2a87dc;
    puStack_50 = &UNK_110842e18;
    uStack_48 = param_2;
    func_0x000107c312d4((float)(double)CONCAT44(uVar8,uVar7),"APPSTORE",&puStack_68);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 10b2a87dc; end: 10b2a87e3;  */

void FUN_10b2a87dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea42b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setGestureRecognizerStateCancel_112586a50);
  return;
}



/* Entry: 10b2a87e4; end: 10b2a883b; -[SCFastDoubleTapGestureRecognizer touchesCancelled:withEvent:] */

void FUN_10b2a87e4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127061f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_touchesCancelled_withEvent__112526c90);
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 != 0) {
    func_0x00010c209fc0(param_1);
  }
  return;
}



/* Entry: 10b2a883c; end: 10b2a88eb; -[SCFastDoubleTapGestureRecognizer canBePreventedByGestureRecognizer:] */

undefined1 * FUN_10b2a883c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  puVar3 = &uStack_40;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puStack_38 = PTR_PTR_1127061f8;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_canBePreventedByGestureRecognize_1125300b0,param_3);
    _objc_release(param_3);
  }
  else {
    uVar2 = param_3;
    func_0x00010c0df4e0(param_3);
    _objc_release(param_3);
    func_0x00010c0df4e0(param_1);
    puVar3 = (ulong *)(ulong)(param_1 < uVar2);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10b2a88ec; end: 10b2a899b; -[SCFastDoubleTapGestureRecognizer canPreventGestureRecognizer:] */

undefined1 * FUN_10b2a88ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  puVar3 = &uStack_40;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puStack_38 = PTR_PTR_1127061f8;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_canPreventGestureRecognizer__11252dff0,param_3);
    _objc_release(param_3);
  }
  else {
    uVar2 = param_3;
    func_0x00010c0df4e0(param_3);
    _objc_release(param_3);
    func_0x00010c0df4e0(param_1);
    puVar3 = (ulong *)(ulong)(uVar2 <= param_1);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10b2a899c; end: 10b2a89a3; -[SCFastDoubleTapGestureRecognizer _setGestureRecognizerStateCancelled] */

void FUN_10b2a899c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,4);
  return;
}



/* Entry: 10b2a89a4; end: 10b2a89b3; -[SCFastDoubleTapGestureRecognizer _maximumIntervalBetweenSuccessiveTaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a89a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e1f4);
}



/* Entry: 10b2a89b4; end: 10b2a89cb; -[SCFastDoubleTapGestureRecognizer _maximumIntervalForCancellingDoubleTap] */

double FUN_10b2a89b4(double param_1)

{
  func_0x00010be5de40();
  return param_1 + param_1;
}



/* Entry: 10b2a89cc; end: 10b2a89df; -[SCFastDoubleTapGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a89cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e1f8,0);
  return;
}



/* Entry: 10b2a89e0; end: 10b2a8a87; -[SCCircularProgressView initWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b2a89e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706200;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278e200;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010bdef8c0(puVar1);
    func_0x00010c1a7f60(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2a8a88; end: 10b2a8adf; -[SCCircularProgressView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8a88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c06c0e0();
  if (((int)lVar1 != 0) && (lVar1 = param_1, func_0x00010c074c20(), (int)lVar1 == 0)) {
    return;
  }
  func_0x00010c1a7f60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bede3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined4 *)(param_1 + _DAT_11278e204),param_1,
             PTR_s__updatePulsingAnimationBasedOnPr_112595290);
  return;
}



/* Entry: 10b2a8ae0; end: 10b2a8b6b; -[SCCircularProgressView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b2a8ae0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_11278e208);
  func_0x00010bf03d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_1 + _DAT_11278e20c);
    func_0x00010bf03d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf529e0();
    bVar1 = lVar3 != 0;
    _objc_release(lVar4);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10b2a8b6c; end: 10b2a8bef; -[SCCircularProgressView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8b6c(long param_1,undefined8 param_2)

{
  long lVar1;
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
  
  lVar1 = (long)_DAT_11278e208;
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + _DAT_11278e20c));
  _CGAffineTransformMakeRotation(&uStack_60,0xbff921fb54442d18);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c166440(*(undefined8 *)(param_1 + lVar1),param_2,&uStack_90);
  func_0x00010c1a7f60(param_1,param_2,1);
  return;
}



/* Entry: 10b2a8bf0; end: 10b2a8c5f; -[SCCircularProgressView setProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8bf0(float param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = (long)_DAT_11278e204;
  if (*(float *)(param_2 + lVar2) != param_1) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar3 = 1.0;
    if (param_1 <= 1.0) {
      fVar3 = param_1;
    }
    *(float *)(param_2 + lVar2) = fVar3;
    uVar1 = param_2;
    func_0x00010c06c0e0();
    if (((int)uVar1 != 0) && (uVar1 = param_2, func_0x00010c074c20(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bede3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined4 *)(param_2 + lVar2),param_2,
                 PTR_s__updatePulsingAnimationBasedOnPr_112595290);
      return;
    }
  }
  return;
}



/* Entry: 10b2a8c60; end: 10b2a8c73; -[SCCircularProgressView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8c60(long param_1)

{
  *(undefined4 *)(param_1 + _DAT_11278e204) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bede3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s__updatePulsingAnimationBasedOnPr_112595290)
  ;
  return;
}



/* Entry: 10b2a8c74; end: 10b2a8ce3; -[SCCircularProgressView layoutSublayersOfLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8c74(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112706200;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSublayersOfLayer__1125377f8);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11278e208));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11278e20c));
  return;
}



/* Entry: 10b2a8ce4; end: 10b2a8d53; -[SCCircularProgressView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8ce4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112706200;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  _CGRectGetMidX();
  lVar1 = (long)_DAT_11278e210;
  func_0x00010c17a840(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf20c00(param_1);
  _CGRectGetMidY();
  func_0x00010c17a860(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10b2a8d54; end: 10b2a8d6b; -[SCCircularProgressView intrinsicContentSize] */

void FUN_10b2a8d54(void)

{
  func_0x00010bee9cc0();
  return;
}



/* Entry: 10b2a8d6c; end: 10b2a8d6f; -[SCCircularProgressView sizeThatFits:] */

void FUN_10b2a8d6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10b2a8d70; end: 10b2a8f57; -[SCCircularProgressView _createLoadingSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8d70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
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
  
  lVar5 = (long)_DAT_11278e204;
  *(undefined4 *)(param_1 + lVar5) = 0;
  puVar1 = PTR_PTR_1126e00f8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffa80(puVar1,param_2,puVar2,0);
  lVar4 = (long)_DAT_11278e208;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010bdf7b00(param_1);
  func_0x00010c1bdd00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c20e920((double)*(float *)(param_1 + lVar5),*(undefined8 *)(param_1 + lVar4));
  _CGAffineTransformMakeRotation(&uStack_80,0xbff921fb54442d18);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c166440(*(undefined8 *)(param_1 + lVar4),param_2,&uStack_b0);
  puVar1 = PTR_PTR_1126e00f8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffa80(puVar1,param_2,puVar2,0);
  lVar5 = (long)_DAT_11278e20c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c1d4bc0(0x3e19999a,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c099460(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1bdd00(*(undefined8 *)(param_1 + lVar5));
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(lVar4);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10b2a8f5c;
  puStack_c0 = &UNK_1108450c8;
  lStack_b8 = param_1;
  func_0x00010c0bd400(*(undefined8 *)(param_1 + _DAT_11278e200),param_2,
                      &PTR___NSConcreteGlobalBlock_110cd14e0,&puStack_d8);
  return;
}



/* Entry: 10b2a8f58; end: 10b2a8f5b;  */

void FUN_10b2a8f58(void)

{
  return;
}



/* Entry: 10b2a8f5c; end: 10b2a90bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a8f5c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11278e210;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  *(undefined **)(*(long *)(param_1 + 0x20) + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4));
  _objc_release(puVar1);
  lVar2 = param_2;
  func_0x00010c08fa60();
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if (lVar2 == 0) {
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfb41a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19e480(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4));
  _objc_release(puVar1);
  func_0x00010c23d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4));
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2a90bc; end: 10b2a918f; -[SCCircularProgressView _cycleLineWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a90bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b2a9190;
  puStack_60 = &UNK_110847658;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10b2a91a4;
  puStack_88 = &UNK_110842b58;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0bd400(*(undefined8 *)(param_1 + _DAT_11278e200),param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 10b2a9190; end: 10b2a91b7;  */

void FUN_10b2a9190(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x4000000000000000;
  return;
}



/* Entry: 10b2a91b8; end: 10b2a928b; -[SCCircularProgressView _viewSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2a91b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b2a928c;
  puStack_60 = &UNK_110847658;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10b2a92a4;
  puStack_88 = &UNK_110842b58;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0bd400(*(undefined8 *)(param_1 + _DAT_11278e200),param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 10b2a928c; end: 10b2a92b7;  */

void FUN_10b2a928c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x4041800000000000;
  return;
}



/* Entry: 10b2a92b8; end: 10b2a93b7; -[SCCircularProgressView _pulsingAnimationWithSecondsPerCycle:isBackgroundLayer:] */

void FUN_10b2a92b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_3,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar3,param_3,puVar4);
  _objc_release(puVar4);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185fd0;
  if (param_4 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185fe0;
  }
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185ff0;
  if (param_4 == 0) {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111186000;
  }
  func_0x00010c1a1180(puVar3,param_3,ppuVar1);
  func_0x00010c216920(puVar3,param_3,ppuVar2);
  func_0x00010c192d40(param_1,puVar3);
  func_0x00010c16d4c0(puVar3,param_3,1);
  func_0x00010c1eabe0(0x7f800000,puVar3);
  func_0x00010c1ea580(puVar3,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b2a93b8; end: 10b2a956f; -[SCCircularProgressView _updatePulsingAnimationBasedOnProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a93b8(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  if (0.0 < param_1) {
    lVar3 = (long)_DAT_11278e208;
    lVar1 = *(long *)(param_2 + lVar3);
    func_0x00010bf03c40(lVar1,param_3,&PTR____CFConstantStringClassReference_110f62558);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010be848c0(0x3ff0000000000000,param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20(*(undefined8 *)(param_2 + lVar3));
      _objc_release(lVar1);
    }
    func_0x00010c12b200(*(undefined8 *)(param_2 + _DAT_11278e20c));
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = (long)_DAT_11278e210;
    func_0x00010c212f20(*(undefined8 *)(param_2 + lVar1));
    _objc_release(puVar2);
    func_0x00010c23d620(*(undefined8 *)(param_2 + lVar1));
  }
  else {
    lVar3 = (long)_DAT_11278e20c;
    lVar1 = *(long *)(param_2 + lVar3);
    func_0x00010bf03c40(lVar1,param_3,&PTR____CFConstantStringClassReference_110f62558);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010be848c0(0x3ff0000000000000,param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20(*(undefined8 *)(param_2 + lVar3));
      _objc_release(lVar1);
    }
    lVar3 = (long)_DAT_11278e208;
    func_0x00010c12b200(*(undefined8 *)(param_2 + lVar3));
  }
  func_0x00010c20e920((double)param_1,*(undefined8 *)(param_2 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_11278e210),PTR_s_setHidden__1126479f8,param_1 <= 0.0);
  return;
}



/* Entry: 10b2a9570; end: 10b2a957f; -[SCCircularProgressView progress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b2a9570(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11278e204);
}



/* Entry: 10b2a9580; end: 10b2a95df; -[SCCircularProgressView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a9580(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e210,0);
  _objc_storeStrong(param_1 + _DAT_11278e20c,0);
  _objc_storeStrong(param_1 + _DAT_11278e208,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e200,0);
  return;
}



/* Entry: 10b2a95e0; end: 10b2a9627; +[SCCircularProgressViewModel defualtStyle] */

void FUN_10b2a95e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1388;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2a9628; end: 10b2a968f; +[SCCircularProgressViewModel showPercentStyleWithFontName:] */

void FUN_10b2a9628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1388;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2a9690; end: 10b2a96b3; -[SCCircularProgressViewModel copyWithZone:] */

undefined8 FUN_10b2a9690(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b2a96b4; end: 10b2a9713; -[SCCircularProgressViewModel hash] */

void FUN_10b2a96b4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_112706208;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2a9714; end: 10b2a9757; -[SCCircularProgressViewModel internalInit] */

void FUN_10b2a9714(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112706208;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2a9758; end: 10b2a97f7; -[SCCircularProgressViewModel isEqual:] */

long FUN_10b2a9758(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b2a97dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b2a97dc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b2a97dc;
    }
  }
  lVar3 = 1;
LAB_10b2a97dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b2a97f8; end: 10b2a987b; -[SCCircularProgressViewModel matchDefualtStyle:showPercentStyle:] */

void FUN_10b2a97f8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2a987c; end: 10b2a9887; -[SCCircularProgressViewModel .cxx_destruct] */

void FUN_10b2a987c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b2a9888; end: 10b2a996b; -[SCLoadingIndicatorLayer initWithColor:direction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b2a9888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706210;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar1);
    _objc_release(puVar2);
    func_0x00010c1bdb40(puVar1);
    _objc_retainAutorelease(param_3);
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(puVar1);
    func_0x00010c1bdd00(0,puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e21c) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2a996c; end: 10b2a99af; -[SCLoadingIndicatorLayer visibleProgress] */

undefined8 FUN_10b2a996c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc60();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b2a99b0; end: 10b2a99b3; -[SCLoadingIndicatorLayer progress] */

void FUN_10b2a99b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25dc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_strokeEnd_112675140);
  return;
}



/* Entry: 10b2a99b4; end: 10b2a9ab3; -[SCLoadingIndicatorLayer layoutSublayers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a99b4(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_112706210;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSublayers_112539578);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  dVar2 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  dVar3 = dVar2;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  dVar4 = dVar3;
  func_0x00010c099460(param_2);
  func_0x00010bf19960(param_1,dVar2,dVar3 + dVar4 * -0.5,0,0x401921fb54442d18,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(param_2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b2a9ab4; end: 10b2a9b03; -[SCLoadingArcConfiguration init] */

undefined1 * FUN_10b2a9ab4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706218;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf46e00(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2a9b04; end: 10b2a9b87; -[SCLoadingArcConfiguration configureDefaults] */

void FUN_10b2a9b04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c098f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)PTR__UIOffsetZero_110345d40;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(PTR__UIOffsetZero_110345d40 + 8);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = 0x4000000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff8000000000000;
  *(undefined8 *)(param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x38) = 0x3fe3333333333333;
  *(undefined8 *)(param_1 + 0x50) = 0x3ff921fb54442d18;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10b2a9b88; end: 10b2a9b8f; -[SCLoadingArcConfiguration direction] */

undefined8 FUN_10b2a9b88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b2a9b90; end: 10b2a9b97; -[SCLoadingArcConfiguration setDirection:] */

void FUN_10b2a9b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b2a9b98; end: 10b2a9b9f; -[SCLoadingArcConfiguration color] */

undefined8 FUN_10b2a9b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b2a9ba0; end: 10b2a9bcf; -[SCLoadingArcConfiguration setColor:] */

void FUN_10b2a9ba0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b2a9bd0; end: 10b2a9bd7; -[SCLoadingArcConfiguration edgeOffsets] */

undefined1  [16] FUN_10b2a9bd0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x58);
}



/* Entry: 10b2a9bd8; end: 10b2a9bdf; -[SCLoadingArcConfiguration setEdgeOffsets:] */

void FUN_10b2a9bd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x58) = param_1;
  *(undefined8 *)(param_3 + 0x60) = param_2;
  return;
}



/* Entry: 10b2a9be0; end: 10b2a9be7; -[SCLoadingArcConfiguration animationStartLineWidth] */

undefined8 FUN_10b2a9be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b2a9be8; end: 10b2a9bef; -[SCLoadingArcConfiguration setAnimationStartLineWidth:] */

void FUN_10b2a9be8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10b2a9bf0; end: 10b2a9bf7; -[SCLoadingArcConfiguration animationEndLineWidth] */

undefined8 FUN_10b2a9bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b2a9bf8; end: 10b2a9bff; -[SCLoadingArcConfiguration setAnimationEndLineWidth:] */

void FUN_10b2a9bf8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10b2a9c00; end: 10b2a9c07; -[SCLoadingArcConfiguration strokeSecondsPerCycle] */

undefined8 FUN_10b2a9c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b2a9c08; end: 10b2a9c0f; -[SCLoadingArcConfiguration setStrokeSecondsPerCycle:] */

void FUN_10b2a9c08(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 10b2a9c10; end: 10b2a9c17; -[SCLoadingArcConfiguration strokeStartPercent] */

undefined8 FUN_10b2a9c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b2a9c18; end: 10b2a9c1f; -[SCLoadingArcConfiguration setStrokeStartPercent:] */

void FUN_10b2a9c18(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 10b2a9c20; end: 10b2a9c27; -[SCLoadingArcConfiguration strokeEndPercent] */

undefined8 FUN_10b2a9c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b2a9c28; end: 10b2a9c2f; -[SCLoadingArcConfiguration setStrokeEndPercent:] */

void FUN_10b2a9c28(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 10b2a9c30; end: 10b2a9c37; -[SCLoadingArcConfiguration secondsPerCycle] */

undefined8 FUN_10b2a9c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b2a9c38; end: 10b2a9c3f; -[SCLoadingArcConfiguration setSecondsPerCycle:] */

void FUN_10b2a9c38(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 10b2a9c40; end: 10b2a9c47; -[SCLoadingArcConfiguration rotationStartAngle] */

undefined8 FUN_10b2a9c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b2a9c48; end: 10b2a9c4f; -[SCLoadingArcConfiguration setRotationStartAngle:] */

void FUN_10b2a9c48(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 10b2a9c50; end: 10b2a9c57; -[SCLoadingArcConfiguration rotationEndAngle] */

undefined8 FUN_10b2a9c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b2a9c58; end: 10b2a9c5f; -[SCLoadingArcConfiguration setRotationEndAngle:] */

void FUN_10b2a9c58(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 10b2a9c60; end: 10b2a9c6b; -[SCLoadingArcConfiguration .cxx_destruct] */

void FUN_10b2a9c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b2a9c6c; end: 10b2a9cc3; -[SCLoadingIndicatorView initWithColorStyle:size:] */

undefined8
FUN_10b2a9c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bde2020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffb60(param_1,param_2,uVar1,param_4);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b2a9cc4; end: 10b2a9d47; -[SCLoadingIndicatorView _colorWithColorStyle:] */

void FUN_10b2a9cc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b2a9d40;
    }
    if (param_3 != 1) goto LAB_10b2a9d40;
    uVar1 = 0x83;
  }
  else if (param_3 == 2) {
    uVar1 = 0x80;
  }
  else {
    if (param_3 != 3) goto LAB_10b2a9d40;
    uVar1 = 0x7b;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_10b2a9d40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2a9d48; end: 10b2a9f03; -[SCLoadingIndicatorView initWithColor:size:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b2a9d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112706220;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e250);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e250) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e254);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e254) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e258);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e258) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e25c) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278e260) = 1;
    func_0x00010c1a7f60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c216160(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2a9f04; end: 10b2aa08f; -[SCLoadingIndicatorView addLoadingArcWithIdentifier:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2a9f04(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126e0100;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = puVar1;
  if (param_4 != (undefined *)0x0) {
    puVar2 = param_4;
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126e00f8;
  _objc_alloc(PTR_PTR_1126e00f8);
  puVar3 = puVar2;
  func_0x00010bf40c40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7f0e0(puVar2);
  func_0x00010bfffa80(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar3);
  func_0x00010c20e920(0,puVar1);
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(lVar4);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11278e250));
  func_0x00010c1d0560(*(undefined8 *)(param_1 + _DAT_11278e258));
  _objc_release(param_3);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + _DAT_11278e254));
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b2aa090; end: 10b2aa1ff; -[SCLoadingIndicatorView startAnimating] */

/* WARNING: Possible PIC construction at 0x00010b2aa0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2aa2f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2aa0f8) */
/* WARNING: Removing unreachable block (ram,0x00010b2aa12c) */
/* WARNING: Removing unreachable block (ram,0x00010b2aa13c) */
/* WARNING: Removing unreachable block (ram,0x00010b2aa140) */
/* WARNING: Removing unreachable block (ram,0x00010b2aa150) */
/* WARNING: Removing unreachable block (ram,0x00010b2aa158) */
/* WARNING: Removing unreachable block (ram,0x00010b2aa1a0) */
/* WARNING: Removing unreachable block (ram,0x00010b2aa1bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2aa090(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c06c0e0();
  if (((int)uVar1 == 0) || (uVar1 = param_1, func_0x00010c074c20(), (int)uVar1 != 0)) {
    *(undefined1 *)(param_1 + (long)_DAT_11278e264) = 1;
    uVar4 = 0;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    ___stack_chk_fail();
    uVar3 = 0xc0;
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 *)(uVar1 + (long)_DAT_11278e264) = 0;
    param_1 = *(ulong *)(uVar1 + (long)_DAT_11278e250);
    _objc_retain(param_1);
    uVar2 = param_1;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010bec2d00(uVar1);
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
      uVar2 = param_1;
      uVar3 = 0xc0;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(char *)(uVar1 + (long)_DAT_11278e260) == '\x01') {
      uVar4 = 1;
      param_1 = uVar1;
    }
    else {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return;
      }
      ___stack_chk_fail();
      *(undefined1 *)(param_1 + (long)_DAT_11278e260) = uVar3;
      uVar1 = param_1;
      func_0x00010c06c0e0();
      if ((uVar1 & 1) != 0) {
        return;
      }
      uVar4 = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,uVar4);
  return;
}



/* Entry: 10b2aa200; end: 10b2aa32b; -[SCLoadingIndicatorView stopAnimating] */

/* WARNING: Possible PIC construction at 0x00010b2aa2f4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2aa200(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = 0xf0;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + (long)_DAT_11278e264) = 0;
  uVar5 = *(ulong *)(param_1 + (long)_DAT_11278e250);
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar5);
      }
      func_0x00010bec2d00(param_1);
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
    uVar2 = uVar5;
    uVar3 = 0xf0;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(char *)(param_1 + (long)_DAT_11278e260) != '\x01') {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
    ___stack_chk_fail();
    *(undefined1 *)(uVar5 + (long)_DAT_11278e260) = uVar3;
    uVar2 = uVar5;
    func_0x00010c06c0e0();
    param_1 = uVar5;
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10b2aa32c; end: 10b2aa36f; -[SCLoadingIndicatorView setHidesWhenStopped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2aa32c(ulong param_1,undefined8 param_2,undefined1 param_3)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + (long)_DAT_11278e260) = param_3;
  uVar1 = param_1;
  func_0x00010c06c0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10b2aa370; end: 10b2aa3ab; -[SCLoadingIndicatorView setColorStyle:] */

void FUN_10b2aa370(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bde2020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2aa3ac; end: 10b2aa427; -[SCLoadingIndicatorView setTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2aa3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setTintColor__112663280;
  puStack_38 = PTR_PTR_112706220;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x00010bde5fc0(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2aa428; end: 10b2aa56b; -[SCLoadingIndicatorView _configureWithSize:color:] */

void FUN_10b2aa428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  func_0x00010bdcb560(param_3,param_4,param_5);
  uVar2 = param_1;
  func_0x00010be06e80(param_3,param_4,param_5);
  func_0x00010be8c6c0(param_3,param_4,&PTR____CFConstantStringClassReference_110f62598);
  func_0x00010be8c6c0(param_3,param_4,&PTR____CFConstantStringClassReference_110f625b8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b2aa56c;
  puStack_78 = &UNK_110cd1500;
  _objc_retain(param_6);
  uStack_70 = param_6;
  uStack_68 = param_1;
  func_0x00010bef9a40(param_3,param_4,&PTR____CFConstantStringClassReference_110f62598,&puStack_90);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10b2aa5bc;
  puStack_b8 = &UNK_110cd1530;
  uStack_b0 = param_6;
  uStack_a8 = uVar2;
  uStack_a0 = param_2;
  uStack_98 = param_1;
  _objc_retain(param_6);
  func_0x00010bef9a40(param_3,param_4,&PTR____CFConstantStringClassReference_110f625b8,&puStack_d0);
  _objc_release(uStack_b0);
  _objc_release(uStack_70);
  _objc_release(param_6);
  return;
}



/* Entry: 10b2aa56c; end: 10b2aa617;  */

void FUN_10b2aa56c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c18e180(param_2);
  func_0x00010c17e800(param_2);
  func_0x00010c1681c0(*(undefined8 *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b2aa618; end: 10b2aa6b3; -[SCLoadingIndicatorView _removeLoadingArcWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2aa618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e258;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c0dff20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c940();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + _DAT_11278e254),param_2,uVar1);
  func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_11278e250),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2aa6b4; end: 10b2aa6d3; -[SCLoadingIndicatorView _edgeOffsetsForInnerArcForSize:] */

void FUN_10b2aa6b4(void)

{
  return;
}



/* Entry: 10b2aa6d4; end: 10b2aa6ef; -[SCLoadingIndicatorView _animationEndLineWidthForSize:] */

undefined8 FUN_10b2aa6d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x4018000000000000;
  if (param_3 < 3) {
    uVar1 = *(undefined8 *)(&UNK_10e5716e8 + param_3 * 8);
  }
  return uVar1;
}



/* Entry: 10b2aa6f0; end: 10b2aa75f; -[SCLoadingIndicatorView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b2aa6f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11278e250);
  func_0x00010c0dfd40(lVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf03d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 10b2aa760; end: 10b2aa87f; -[SCLoadingIndicatorView _startAnimatingArcLayer:withConfiguration:] */

void FUN_10b2aa760(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bf03be0(param_7);
  uVar1 = param_4;
  dVar2 = param_1;
  func_0x00010c14e360();
  if ((int)uVar1 != 0) {
    func_0x00010bf20c00(param_4);
    dVar2 = 12.0;
    param_1 = param_3 / 12.0;
  }
  func_0x00010bf03f00(param_7);
  dVar3 = dVar2;
  func_0x00010c25dcc0(param_7);
  dVar4 = dVar3;
  func_0x00010c25dd60(param_7);
  dVar5 = dVar4;
  func_0x00010c25dca0(param_7);
  dVar6 = dVar5;
  func_0x00010c155360(param_7);
  dVar7 = dVar6;
  func_0x00010c141ce0(param_7);
  dVar8 = dVar7;
  func_0x00010c141ba0(param_7);
  uVar1 = param_7;
  func_0x00010bf7f0e0(param_7);
  _objc_release(param_7);
  func_0x00010bebf5e0(dVar2,param_1,dVar3,dVar4,dVar5,dVar6,dVar7,dVar8,param_4,param_5,param_6,
                      uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10b2aa880; end: 10b2aaabf; -[SCLoadingIndicatorView _startAnimatingCircleArcLayer:startArcWidth:endArcWidth:strokeSecondsPerCycle:strokeStartPercent:strokeEndPercent:secondsPerCycle:rotationStartAngle:rotationEndAngle:direction:] */

void FUN_10b2aa880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [128];
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_10);
  uVar1 = param_8;
  func_0x00010be4c460(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_8;
  func_0x00010bec59a0(param_4,param_5,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be97700(param_7,param_6,param_8,param_9,param_11,param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e920(param_5,param_10);
  func_0x00010c1bdd00(param_2,param_10);
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_140 = uVar1;
  uStack_138 = uVar2;
  uStack_130 = param_8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_9,&uStack_140,3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar6 = *plStack_170;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_170 != lVar6) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c1ea580(*(undefined8 *)(lStack_178 + (long)puVar7 * 8),param_9,0);
        puVar7 = puVar7 + 1;
      } while (puVar4 != puVar7);
      puVar4 = puVar3;
      func_0x00010bf52a60(puVar3,param_9,&uStack_180,auStack_128,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  func_0x00010bef6c20(param_10,param_9,uVar1,&PTR____CFConstantStringClassReference_110ef20b8);
  func_0x00010bef6c20(param_10,param_9,uVar2,&PTR____CFConstantStringClassReference_110ef2078);
  uVar5 = param_8;
  func_0x00010bef6c20(param_10,param_9,param_8,&PTR____CFConstantStringClassReference_110de1f58);
  _objc_release(param_8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_10b2aaac0;
  uStack_1a0 = uVar1;
  uStack_198 = param_10;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(uVar5);
  func_0x00010c12aaa0(uVar5);
  uStack_1c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_1d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_1b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_1c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_1a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_1b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c166440(uVar5,param_9,&uStack_1d0);
  _objc_release(uVar5);
  return;
}



/* Entry: 10b2aaac0; end: 10b2aab1f; -[SCLoadingIndicatorView _stopAnimatingArcLayer:] */

void FUN_10b2aaac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c12aaa0(param_3);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c166440(param_3,param_2,&uStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2aab20; end: 10b2aabe7; -[SCLoadingIndicatorView _lineThicknessAnimationWithStartArcWidth:endArcWidth:] */

void FUN_10b2aab20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_4,
                      &PTR____CFConstantStringClassReference_110ef2138);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_4,puVar2);
  _objc_release(puVar2);
  func_0x00010c192d40(0x3fe0000000000000,puVar1);
  func_0x00010c1ea580(puVar1,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2aabe8; end: 10b2aacbf; -[SCLoadingIndicatorView _strokeEndAnimationWithStrokeStartPercent:strokeEndPercent:secondsPerCycle:] */

void FUN_10b2aabe8(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_5,
                      &PTR____CFConstantStringClassReference_110e1f3f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010c1ea580(puVar1,param_5,1);
  func_0x00010c192d40(param_3 * ABS(param_1 - param_2),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2aacc0; end: 10b2aada7; -[SCLoadingIndicatorView _rotateIndefinitelyAnimationWithRotationStartAngle:secondsPerCycle:direction:onLayer:] */

void FUN_10b2aacc0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = 8;
  if (param_5 != 0) {
    lVar1 = 0;
  }
  uVar4 = *(undefined8 *)(&UNK_10df9f9b0 + lVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_4,
                      &PTR____CFConstantStringClassReference_110e44ab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(uVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar2,param_4,puVar3);
  _objc_release(puVar3);
  func_0x00010c192d40(param_2 * 0.5,puVar2);
  func_0x00010c1eabe0(0x7f800000,puVar2);
  func_0x00010c186980(puVar2,param_4,1);
  func_0x00010c1ea580(puVar2,param_4,1);
  func_0x00010c19bc40(puVar2,param_4,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


