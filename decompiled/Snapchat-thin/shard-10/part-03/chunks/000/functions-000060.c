/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107df7b3c; end: 107df7b4b; -[SCConnectionErrorStateView textColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df7b3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fdc0);
}



/* Entry: 107df7b4c; end: 107df7b8b; -[SCConnectionErrorStateView setTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df7b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df7b8c; end: 107df7b9b; -[SCConnectionErrorStateView retryIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df7b8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fdd8);
}



/* Entry: 107df7b9c; end: 107df7bdb; -[SCConnectionErrorStateView setRetryIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df7b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fdd8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df7bdc; end: 107df7beb; -[SCConnectionErrorStateView retryLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df7bdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fddc);
}



/* Entry: 107df7bec; end: 107df7c2b; -[SCConnectionErrorStateView setRetryLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df7bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fddc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df7c2c; end: 107df7c3b; -[SCConnectionErrorStateView activityIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df7c2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fde0);
}



/* Entry: 107df7c3c; end: 107df7c7b; -[SCConnectionErrorStateView setActivityIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df7c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fde0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df7c7c; end: 107df7d27; -[SCConnectionErrorStateView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df7c7c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fde0,0);
  _objc_storeStrong(param_1 + _DAT_11276fddc,0);
  _objc_storeStrong(param_1 + _DAT_11276fdd8,0);
  _objc_storeStrong(param_1 + _DAT_11276fdc0,0);
  _objc_storeStrong(param_1 + _DAT_11276fdd4,0);
  _objc_storeStrong(param_1 + _DAT_11276fdd0,0);
  _objc_storeStrong(param_1 + _DAT_11276fdcc,0);
  _objc_storeStrong(param_1 + _DAT_11276fdc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276fdc4);
  return;
}



/* Entry: 107df7d28; end: 107df7ddb; -[SCWebViewProgressIndicator initWithFrame:] */

undefined8
FUN_107df7d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x20d7ff);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014800(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_5;
}



/* Entry: 107df7ddc; end: 107df7ff7; -[SCWebViewProgressIndicator initWithFrame:leftColor:rightColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107df7ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126fb3f0;
  uStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11276fde4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c209760(0,0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6))
    ;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease(param_7);
    func_0x00010bdc0fe0();
    func_0x00010befa120(puVar2);
    _objc_retainAutorelease(param_8);
    func_0x00010bdc0fe0();
    func_0x00010befa120(puVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(uVar5);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126d7ec0;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11276fde8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c1ff540(0x3fe8000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1ff640(param_3,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c182120(*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276fdec) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276fdf0) = 0;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    func_0x00010bde4660(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107df7ff8; end: 107df8003; +[SCWebViewProgressIndicator layerClass] */

void FUN_107df7ff8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 107df8004; end: 107df80b7; -[SCWebViewProgressIndicator layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8004(long param_1)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fb3f0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bedfd60(param_1);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c220220(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11276fde4));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11276fde8));
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  return;
}



/* Entry: 107df80b8; end: 107df80c3; -[SCWebViewProgressIndicator setProgress:] */

void FUN_107df80b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e4710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0,param_2,PTR_s_setProgress_withExplicitDuration_112656be8,0);
  return;
}



/* Entry: 107df80c4; end: 107df848f; -[SCWebViewProgressIndicator setProgress:withExplicitDuration:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df80c4(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  _objc_retain(param_7);
  lVar7 = (long)_DAT_11276fdf4;
  if (*(double *)(param_5 + lVar7) != param_1) {
    if (param_1 == 0.0) {
      *(undefined1 *)(param_5 + _DAT_11276fdf0) = 1;
      *(undefined1 *)(param_5 + _DAT_11276fdec) = 0;
      func_0x00010c1ff520(*(undefined8 *)(param_5 + _DAT_11276fde8));
      *(double *)(param_5 + lVar7) = param_1;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_107df8490;
      puStack_a0 = &UNK_110842e18;
      lStack_98 = param_5;
      func_0x000100c749e0(0x3e99999a,"APPSTORE",&puStack_b8);
    }
    else if (*(double *)(param_5 + lVar7) < param_1) {
      if (*(char *)(param_5 + _DAT_11276fdf0) == '\x01') {
        func_0x00010be93740(param_5);
      }
      func_0x00010c1677c0(0x3ff0000000000000,param_5);
      *(undefined1 *)(param_5 + _DAT_11276fdec) = 1;
      lVar8 = (long)_DAT_11276fde8;
      func_0x00010c1ff520(*(undefined8 *)(param_5 + lVar8));
      dVar11 = *(double *)(param_5 + lVar7);
      *(double *)(param_5 + lVar7) = param_1;
      uVar1 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c0bc120(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c10f4e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c0bc120(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(uVar1);
      func_0x00010bfb68e0(param_5);
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bfb68e0(param_5);
      dVar10 = *(double *)(param_5 + lVar7);
      func_0x00010bfb68e0(param_5);
      func_0x00010bf199e0(0,0,dVar10 * (param_4 * 0.5 + param_3),puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
      func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc1040();
      func_0x00010c1d9820(puVar4);
      func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
      puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
      func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216080(puVar5);
      _objc_release(puVar6);
      if (param_2 == 0.0) {
        fVar9 = (float)((param_1 - dVar11) * 0.5);
        if (fVar9 <= 0.2) {
          fVar9 = 0.2;
        }
        param_2 = (double)fVar9;
      }
      func_0x00010c192d40(param_2,puVar5);
      func_0x00010c0f5800(uVar2);
      func_0x00010c1a1180(puVar5);
      func_0x00010c0f5800(puVar4);
      func_0x00010c216920(puVar5);
      func_0x00010c19bc40(puVar5);
      func_0x00010c1ea580(puVar5);
      puVar6 = PTR__OBJC_CLASS___CATransaction_1126b5718;
      _objc_retain(param_7);
      func_0x00010c17fb40(puVar6);
      uVar1 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c0bc120(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar1);
      func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
      _objc_release(param_7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_7);
  return;
}



/* Entry: 107df8490; end: 107df853b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8490(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_40 = *(long *)(param_1 + 0x20);
  if (((*(byte *)(lStack_40 + _DAT_11276fdec) & 1) == 0) &&
     (*(double *)(lStack_40 + _DAT_11276fdf4) == 0.0)) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107df853c;
    puStack_20 = &UNK_110842e18;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x107df8548;
    puStack_48 = &UNK_110841f20;
    lStack_18 = lStack_40;
    func_0x00010bf03420(0x3fd3333340000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,
                        &puStack_60);
    return;
  }
  return;
}



/* Entry: 107df853c; end: 107df859b;  */

void FUN_107df853c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107df859c; end: 107df86ab; -[SCWebViewProgressIndicator _resetProgressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df859c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bfb68e0();
  func_0x00010bf199c0(0,0,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c220220(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,
                      *(undefined8 *)PTR__kCFBooleanTrue_11034ab90,
                      *(undefined8 *)PTR__kCATransactionDisableActions_110346d98);
  lVar5 = (long)_DAT_11276fde8;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c0bc120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar3);
  puVar4 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar2,param_2,puVar4);
  func_0x00010c1c2c00(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  *(undefined1 *)(param_1 + _DAT_11276fdf0) = 0;
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107df86ac; end: 107df890b; -[SCWebViewProgressIndicator rotateProgressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df86ac(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  if (*(char *)(param_5 + _DAT_11276fdec) == '\x01') {
    *(undefined1 *)(param_5 + _DAT_11276fdec) = 0;
    lVar7 = (long)_DAT_11276fde8;
    uVar1 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c0bc120(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c10f4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c0bc120(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bfb68e0(param_5);
    dVar8 = *(double *)(param_5 + _DAT_11276fdf4);
    func_0x00010bfb68e0(param_5);
    dVar9 = param_4;
    func_0x00010bfb68e0(param_5);
    dVar10 = dVar9 * 0.5;
    func_0x00010bfb68e0(param_5);
    func_0x00010bf199e0(0,0,param_3 * dVar8,param_4,dVar10,dVar9 * 0.5,puVar3,param_6,10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    _objc_retainAutorelease(puVar3);
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar4,param_6,puVar5);
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_6,
                        &PTR____CFConstantStringClassReference_110dbfab8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0f5800(uVar2);
    func_0x00010c1a1180(puVar5,param_6,uVar1);
    puVar6 = puVar4;
    func_0x00010c0f5800(puVar4);
    func_0x00010c216920(puVar5,param_6,puVar6);
    func_0x00010c19bc40(puVar5,param_6,*(undefined8 *)PTR__kCAFillModeBoth_110346cd8);
    func_0x00010c1ea580(puVar5,param_6,0);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107df890c;
    puStack_80 = &UNK_110842e18;
    lStack_78 = param_5;
    func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_6,&puStack_98);
    uVar1 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c0bc120(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar1);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107df890c; end: 107df891f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df890c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276fdec) = 0;
  return;
}



/* Entry: 107df8920; end: 107df899f; -[SCWebViewProgressIndicator _updateShimmeringIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8920(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_11276fde8;
  func_0x00010c22c900(*(undefined8 *)(param_2 + lVar1));
  dVar2 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  if (param_1 != dVar2) {
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    func_0x00010c1ff640(*(undefined8 *)(param_2 + lVar1));
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010bde4670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__configMaskLayerWithHeight__112556b38);
    return;
  }
  return;
}



/* Entry: 107df89a0; end: 107df8a87; -[SCWebViewProgressIndicator _configMaskLayerWithHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df89a0(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(puVar1,param_3,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(0,0,0,param_1,param_1 * 0.5,param_1 * 0.5,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_3,10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1,param_3,puVar3);
  func_0x00010c1c2c00(*(undefined8 *)(param_2 + _DAT_11276fde8),param_3,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107df8a88; end: 107df8a97; -[SCWebViewProgressIndicator progress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df8a88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fdf4);
}



/* Entry: 107df8a98; end: 107df8aa7; -[SCWebViewProgressIndicator isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107df8a98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276fdec);
}



/* Entry: 107df8aa8; end: 107df8ab7; -[SCWebViewProgressIndicator setAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8aa8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276fdec) = param_3;
  return;
}



/* Entry: 107df8ab8; end: 107df8af7; -[SCWebViewProgressIndicator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8ab8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fde4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fde8,0);
  return;
}



/* Entry: 107df8af8; end: 107df8bab; -[FBShimmeringMaskLayer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107df8af8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb3f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11276fdf8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb20(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107df8bac; end: 107df8c67; -[FBShimmeringMaskLayer layoutSublayers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fb3f8;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSublayers_112539578);
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_11276fdf8;
  func_0x00010c1739e0(*(undefined8 *)(param_5 + lVar1));
  uVar2 = param_1;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  func_0x00010c1dee80(uVar2,param_1,*(undefined8 *)(param_5 + lVar1));
  return;
}



/* Entry: 107df8c68; end: 107df8c77; -[FBShimmeringMaskLayer fadeLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df8c68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fdf8);
}



/* Entry: 107df8c78; end: 107df8c8b; -[FBShimmeringMaskLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8c78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fdf8,0);
  return;
}



/* Entry: 107df8c8c; end: 107df8d47; -[FBShimmeringLayer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8c8c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fb400;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fdfc) = 0x3fd999999999999a;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fe00) = 0x406cc00000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fe04) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fe08) = 0x3fe0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fe0c) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fe10) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fe14) = 0x3fb999999999999a;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fe18) = 0x3fd3333333333333;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fe1c) = 0x7ff0000000000000;
  }
  return;
}



/* Entry: 107df8d48; end: 107df8e2f; -[FBShimmeringLayer setContentLayer:] */

/* WARNING: Possible PIC construction at 0x000107df8df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107df8df8) */
/* WARNING: Removing unreachable block (ram,0x000107df8e2c) */
/* WARNING: Removing unreachable block (ram,0x000107df8e48) */
/* WARNING: Removing unreachable block (ram,0x000107df8e44) */
/* WARNING: Removing unreachable block (ram,0x000107df8e18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8d48(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c1c2c40(param_1);
  lVar3 = (long)_DAT_11276fe20;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  if (param_3 == 0) {
    func_0x00010c20f040(param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f040(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateShimmering_1125958f8);
  return;
}



/* Entry: 107df8e30; end: 107df8e4f; -[FBShimmeringLayer setShimmering:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8e30(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11276fe24) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276fe24) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bedfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateShimmering_1125958f8);
  return;
}



/* Entry: 107df8e50; end: 107df8e6f; -[FBShimmeringLayer setShimmeringSpeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8e50(double param_1,long param_2)

{
  if (param_1 != *(double *)(param_2 + _DAT_11276fe00)) {
    *(double *)(param_2 + _DAT_11276fe00) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bedfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateShimmering_1125958f8);
    return;
  }
  return;
}



/* Entry: 107df8e70; end: 107df8e8f; -[FBShimmeringLayer setShimmeringHighlightLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8e70(double param_1,long param_2)

{
  if (param_1 != *(double *)(param_2 + _DAT_11276fe04)) {
    *(double *)(param_2 + _DAT_11276fe04) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bedfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateShimmering_1125958f8);
    return;
  }
  return;
}



/* Entry: 107df8e90; end: 107df8eaf; -[FBShimmeringLayer setShimmeringDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8e90(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_11276fe10)) {
    return;
  }
  *(long *)(param_1 + _DAT_11276fe10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bedfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateShimmering_1125958f8);
  return;
}



/* Entry: 107df8eb0; end: 107df8ecf; -[FBShimmeringLayer setShimmeringPauseDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8eb0(double param_1,long param_2)

{
  if (param_1 != *(double *)(param_2 + _DAT_11276fdfc)) {
    *(double *)(param_2 + _DAT_11276fdfc) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bedfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateShimmering_1125958f8);
    return;
  }
  return;
}



/* Entry: 107df8ed0; end: 107df8eef; -[FBShimmeringLayer setShimmeringAnimationOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8ed0(double param_1,long param_2)

{
  if (param_1 != *(double *)(param_2 + _DAT_11276fe08)) {
    *(double *)(param_2 + _DAT_11276fe08) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bedb2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateMaskColors_112594660);
    return;
  }
  return;
}



/* Entry: 107df8ef0; end: 107df8f0f; -[FBShimmeringLayer setShimmeringOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8ef0(double param_1,long param_2)

{
  if (param_1 != *(double *)(param_2 + _DAT_11276fe0c)) {
    *(double *)(param_2 + _DAT_11276fe0c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bedb2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateMaskColors_112594660);
    return;
  }
  return;
}



/* Entry: 107df8f10; end: 107df8f2f; -[FBShimmeringLayer setShimmeringBeginTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8f10(double param_1,long param_2)

{
  if (param_1 != *(double *)(param_2 + _DAT_11276fe1c)) {
    *(double *)(param_2 + _DAT_11276fe1c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bedfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateShimmering_1125958f8);
    return;
  }
  return;
}



/* Entry: 107df8f30; end: 107df902b; -[FBShimmeringLayer layoutSublayers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df8f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fb400;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSublayers_112539578);
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_11276fe20;
  func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(param_5 + lVar1));
  func_0x00010c1739e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar1));
  uVar2 = param_1;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  func_0x00010c1dee80(uVar2,param_1,*(undefined8 *)(param_5 + lVar1));
  if (*(long *)(param_5 + _DAT_11276fe28) != 0) {
    func_0x00010bedb300(param_5);
  }
  return;
}



/* Entry: 107df902c; end: 107df90ef; -[FBShimmeringLayer setBounds:] */

void FUN_107df902c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar1 = 0;
  uVar2 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x00010bf20c00();
  puStack_68 = PTR_PTR_1126fb400;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_setBounds__11263a898);
  _CGRectEqualToRect(uVar2,uVar3,uVar4,uVar5,param_1,param_2,param_3,param_4);
  if ((uVar1 & 1) == 0) {
    func_0x00010bedfd40(param_5);
  }
  return;
}



/* Entry: 107df90f0; end: 107df916b; -[FBShimmeringLayer _clearMask] */

/* WARNING: Possible PIC construction at 0x000107df912c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107df9130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df90f0(long param_1)

{
  if (*(long *)(param_1 + _DAT_11276fe28) != 0) {
    func_0x00010bf7fa00(PTR__OBJC_CLASS___CATransaction_1126b5718);
                    /* WARNING: Could not recover jumptable at 0x00010c18e5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_setDisableActions__112641398,1);
    return;
  }
  return;
}



/* Entry: 107df916c; end: 107df9207; -[FBShimmeringLayer _createMaskIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df916c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(char *)(param_1 + _DAT_11276fe24) == '\x01') &&
     (lVar3 = (long)_DAT_11276fe28, *(long *)(param_1 + lVar3) == 0)) {
    puVar1 = PTR_PTR_1126d7ec8;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c1c2c00(*(undefined8 *)(param_1 + _DAT_11276fe20));
    func_0x00010bedb2e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bedb310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateMaskLayout_112594668);
    return;
  }
  return;
}



/* Entry: 107df9208; end: 107df9337; -[FBShimmeringLayer _updateMaskColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df9208(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_11276fe28;
  puVar4 = param_2;
  if (*(long *)(param_2 + lVar8) != 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,*(undefined8 *)(param_2 + _DAT_11276fe0c));
    _objc_retainAutoreleasedReturnValue();
    param_1 = 1.0;
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,*(undefined8 *)(param_2 + _DAT_11276fe08));
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)(param_2 + lVar8));
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11276fe10;
  uVar7 = *(ulong *)(puVar4 + lVar11);
  lVar9 = (long)_DAT_11276fe20;
  lVar6 = *(long *)(puVar4 + lVar9);
  func_0x00010bf20c00();
  if ((uVar7 & 0xfffffffffffffffe) == 2) {
    _CGRectGetHeight();
  }
  else {
    _CGRectGetWidth();
  }
  if (param_1 != 0.0) {
    dVar16 = param_1 + *(double *)(puVar4 + _DAT_11276fdfc) * *(double *)(puVar4 + _DAT_11276fe00);
    dVar13 = dVar16 + param_1 * 3.0;
    dVar15 = dVar16 + param_1 * 2.0;
    dVar14 = (1.0 - *(double *)(puVar4 + _DAT_11276fe04)) * 0.5;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(1.0 - dVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11276fe28;
    func_0x00010c1bff00(*(undefined8 *)(puVar4 + lVar6));
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar5);
    dVar14 = (param_1 + dVar16) / dVar13;
    func_0x00010c167d20(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                        *(undefined8 *)(puVar4 + lVar6));
    if ((*(ulong *)(puVar4 + lVar11) & 0xfffffffffffffffe) == 2) {
      func_0x00010c209760(0,dVar14,*(undefined8 *)(puVar4 + lVar6));
      func_0x00010c196020(0,dVar15 / dVar13,*(undefined8 *)(puVar4 + lVar6));
      dVar14 = 0.0;
      func_0x00010c1dee80(0,-dVar15,*(undefined8 *)(puVar4 + lVar6));
      func_0x00010bf20c00(*(undefined8 *)(puVar4 + lVar9));
      _CGRectGetWidth();
      dVar15 = dVar13;
    }
    else {
      func_0x00010c209760(dVar14,0,*(undefined8 *)(puVar4 + lVar6));
      func_0x00010c196020(dVar15 / dVar13,0,*(undefined8 *)(puVar4 + lVar6));
      dVar15 = -dVar15;
      func_0x00010c1dee80(dVar15,0,*(undefined8 *)(puVar4 + lVar6));
      func_0x00010bf20c00(*(undefined8 *)(puVar4 + lVar9));
      _CGRectGetHeight();
      dVar14 = dVar13;
    }
    lVar6 = *(long *)(puVar4 + lVar6);
    param_1 = 0.0;
    func_0x00010c1739e0(0,0,dVar14,dVar15);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bdefe00();
  lVar8 = (long)_DAT_11276fe24;
  if (((*(byte *)(lVar6 + lVar8) & 1) == 0) && (*(long *)(lVar6 + _DAT_11276fe28) == 0)) {
    return;
  }
  func_0x00010c08cdc0(lVar6);
  puVar4 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  func_0x00010bf7fa00();
  if ((*(byte *)(lVar6 + lVar8) & 1) == 0) {
    if ((int)puVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar6,PTR_s__clearMask_112555bd0);
      return;
    }
    lVar9 = (long)_DAT_11276fe28;
    lVar8 = *(long *)(lVar6 + lVar9);
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      param_1 = 0.0;
    }
    else {
      _CACurrentMediaTime();
      dVar15 = param_1;
      func_0x00010bf18c20(lVar8);
      dVar13 = param_1 - dVar15;
      func_0x00010bf8b160(lVar8);
      _fmod(dVar13,dVar15);
      lVar11 = lVar8;
      func_0x00010bf51e00(lVar8);
      func_0x00010c1eabe0(0);
      param_1 = param_1 - dVar13;
      func_0x00010c16fd40(lVar11);
      func_0x00010bf18c20(lVar11);
      dVar15 = param_1;
      func_0x00010bf8b160(lVar8);
      param_1 = param_1 + dVar15;
      func_0x00010bef6c20(*(undefined8 *)(lVar6 + lVar9));
      _objc_release(lVar11);
    }
    puVar5 = *(undefined **)(lVar6 + lVar9);
    func_0x00010bf9f780(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    FUN_107df9a98(0x3ff0000000000000,*(undefined8 *)(lVar6 + _DAT_11276fe18));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c18b5e0(puVar4);
    func_0x00010c220220(puVar4);
    func_0x00010c16fd40(param_1,puVar4);
    uVar3 = *(undefined8 *)(lVar6 + lVar9);
    func_0x00010bf9f780(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar3);
    *(double *)(lVar6 + _DAT_11276fe2c) = param_1;
  }
  else {
    lVar9 = (long)_DAT_11276fe14;
    if (0.0 < *(double *)(lVar6 + lVar9) && ((ulong)puVar4 & 1) == 0) {
      lVar10 = (long)_DAT_11276fe28;
      lVar11 = *(long *)(lVar6 + lVar10);
      func_0x00010bf9f780(lVar11);
      _objc_retainAutoreleasedReturnValue();
      dVar15 = 0.0;
      lVar8 = lVar11;
      FUN_107df9a98(0,*(undefined8 *)(lVar6 + lVar9));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      uVar3 = *(undefined8 *)(lVar6 + lVar10);
      func_0x00010bf9f780(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar3);
    }
    else {
      func_0x00010bf7fa00(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
      lVar10 = (long)_DAT_11276fe28;
      uVar3 = *(undefined8 *)(lVar6 + lVar10);
      func_0x00010bf9f780(uVar3);
      _objc_retainAutoreleasedReturnValue();
      dVar15 = 0.0;
      func_0x00010c1d4bc0(0);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar6 + lVar10);
      func_0x00010bf9f780(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(uVar3);
      func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
      lVar8 = 0;
    }
    puVar4 = *(undefined **)(lVar6 + lVar10);
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11276fe10;
    uVar7 = *(ulong *)(lVar6 + lVar9);
    func_0x00010bf20c00(*(undefined8 *)(lVar6 + _DAT_11276fe20));
    if ((uVar7 & 0xfffffffffffffffe) == 2) {
      _CGRectGetHeight();
    }
    else {
      _CGRectGetWidth();
    }
    dVar15 = dVar15 / *(double *)(lVar6 + _DAT_11276fe00) + *(double *)(lVar6 + _DAT_11276fdfc);
    if (puVar4 == (undefined *)0x0) {
      lVar9 = *(long *)(lVar6 + lVar9);
      puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297180(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                          PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216920(puVar4);
      _objc_release(puVar5);
      func_0x00010c192d40(dVar15,puVar4);
      fVar12 = INFINITY;
      func_0x00010c1eabe0(0x7f800000,puVar4);
      if (lVar9 - 1U < 2) {
        func_0x00010c249ca0(puVar4);
        func_0x00010c207c40(-ABS(fVar12),puVar4);
      }
      func_0x00010c19bc40(puVar4);
      func_0x00010c1ea580(puVar4);
      lVar9 = (long)_DAT_11276fe1c;
      dVar15 = *(double *)(lVar6 + lVar9);
      if (dVar15 == INFINITY) {
        _CACurrentMediaTime();
        dVar13 = dVar15;
        func_0x00010bf8b160(lVar8);
        *(double *)(lVar6 + lVar9) = dVar15 + dVar13;
      }
      func_0x00010c16fd40(puVar4);
      func_0x00010bef6c20(*(undefined8 *)(lVar6 + lVar10));
    }
    else {
      uVar3 = *(undefined8 *)(lVar6 + lVar10);
      lVar6 = *(long *)(lVar6 + lVar9);
      puVar5 = puVar4;
      func_0x00010bf51e00(puVar4);
      func_0x00010c1eabe0(0x7f800000);
      func_0x00010c192d40(dVar15,puVar5);
      fVar12 = SUB84(dVar15,0);
      if ((lVar6 == 3) || (lVar6 == 0)) {
        func_0x00010c249ca0(puVar5);
        fVar12 = ABS(fVar12);
      }
      else {
        func_0x00010c249ca0(puVar5);
        fVar12 = -ABS(fVar12);
      }
      func_0x00010c207c40(fVar12,puVar5);
      func_0x00010bef6c20(uVar3);
      _objc_release(puVar5);
    }
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 107df9338; end: 107df958b; -[FBShimmeringLayer _updateMaskLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df9338(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11276fe10;
  uVar7 = *(ulong *)(param_2 + lVar10);
  lVar8 = (long)_DAT_11276fe20;
  lVar1 = *(long *)(param_2 + lVar8);
  func_0x00010bf20c00();
  if ((uVar7 & 0xfffffffffffffffe) == 2) {
    _CGRectGetHeight();
  }
  else {
    _CGRectGetWidth();
  }
  if (param_1 != 0.0) {
    dVar15 = param_1 + *(double *)(param_2 + _DAT_11276fdfc) * *(double *)(param_2 + _DAT_11276fe00)
    ;
    dVar12 = dVar15 + param_1 * 3.0;
    dVar14 = dVar15 + param_1 * 2.0;
    dVar13 = (1.0 - *(double *)(param_2 + _DAT_11276fe04)) * 0.5;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(1.0 - dVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = (long)_DAT_11276fe28;
    func_0x00010c1bff00(*(undefined8 *)(param_2 + lVar1));
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    dVar13 = (param_1 + dVar15) / dVar12;
    func_0x00010c167d20(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                        *(undefined8 *)(param_2 + lVar1));
    if ((*(ulong *)(param_2 + lVar10) & 0xfffffffffffffffe) == 2) {
      func_0x00010c209760(0,dVar13,*(undefined8 *)(param_2 + lVar1));
      func_0x00010c196020(0,dVar14 / dVar12,*(undefined8 *)(param_2 + lVar1));
      dVar13 = 0.0;
      func_0x00010c1dee80(0,-dVar14,*(undefined8 *)(param_2 + lVar1));
      func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar8));
      _CGRectGetWidth();
      dVar14 = dVar12;
    }
    else {
      func_0x00010c209760(dVar13,0,*(undefined8 *)(param_2 + lVar1));
      func_0x00010c196020(dVar14 / dVar12,0,*(undefined8 *)(param_2 + lVar1));
      dVar14 = -dVar14;
      func_0x00010c1dee80(dVar14,0,*(undefined8 *)(param_2 + lVar1));
      func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar8));
      _CGRectGetHeight();
      dVar13 = dVar12;
    }
    lVar1 = *(long *)(param_2 + lVar1);
    param_1 = 0.0;
    func_0x00010c1739e0(0,0,dVar13,dVar14);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bdefe00();
  lVar6 = (long)_DAT_11276fe24;
  if (((*(byte *)(lVar1 + lVar6) & 1) == 0) && (*(long *)(lVar1 + _DAT_11276fe28) == 0)) {
    return;
  }
  func_0x00010c08cdc0(lVar1);
  puVar4 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  func_0x00010bf7fa00();
  if ((*(byte *)(lVar1 + lVar6) & 1) == 0) {
    if ((int)puVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__clearMask_112555bd0);
      return;
    }
    lVar8 = (long)_DAT_11276fe28;
    lVar6 = *(long *)(lVar1 + lVar8);
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      param_1 = 0.0;
    }
    else {
      _CACurrentMediaTime();
      dVar14 = param_1;
      func_0x00010bf18c20(lVar6);
      dVar12 = param_1 - dVar14;
      func_0x00010bf8b160(lVar6);
      _fmod(dVar12,dVar14);
      lVar10 = lVar6;
      func_0x00010bf51e00(lVar6);
      func_0x00010c1eabe0(0);
      param_1 = param_1 - dVar12;
      func_0x00010c16fd40(lVar10);
      func_0x00010bf18c20(lVar10);
      dVar14 = param_1;
      func_0x00010bf8b160(lVar6);
      param_1 = param_1 + dVar14;
      func_0x00010bef6c20(*(undefined8 *)(lVar1 + lVar8));
      _objc_release(lVar10);
    }
    puVar5 = *(undefined **)(lVar1 + lVar8);
    func_0x00010bf9f780(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    FUN_107df9a98(0x3ff0000000000000,*(undefined8 *)(lVar1 + _DAT_11276fe18));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c18b5e0(puVar4);
    func_0x00010c220220(puVar4);
    func_0x00010c16fd40(param_1,puVar4);
    uVar3 = *(undefined8 *)(lVar1 + lVar8);
    func_0x00010bf9f780(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar3);
    *(double *)(lVar1 + _DAT_11276fe2c) = param_1;
  }
  else {
    lVar8 = (long)_DAT_11276fe14;
    if (0.0 < *(double *)(lVar1 + lVar8) && ((ulong)puVar4 & 1) == 0) {
      lVar9 = (long)_DAT_11276fe28;
      lVar10 = *(long *)(lVar1 + lVar9);
      func_0x00010bf9f780(lVar10);
      _objc_retainAutoreleasedReturnValue();
      dVar14 = 0.0;
      lVar6 = lVar10;
      FUN_107df9a98(0,*(undefined8 *)(lVar1 + lVar8));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      uVar3 = *(undefined8 *)(lVar1 + lVar9);
      func_0x00010bf9f780(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar3);
    }
    else {
      func_0x00010bf7fa00(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
      lVar9 = (long)_DAT_11276fe28;
      uVar3 = *(undefined8 *)(lVar1 + lVar9);
      func_0x00010bf9f780(uVar3);
      _objc_retainAutoreleasedReturnValue();
      dVar14 = 0.0;
      func_0x00010c1d4bc0(0);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar1 + lVar9);
      func_0x00010bf9f780(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(uVar3);
      func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
      lVar6 = 0;
    }
    puVar4 = *(undefined **)(lVar1 + lVar9);
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11276fe10;
    uVar7 = *(ulong *)(lVar1 + lVar8);
    func_0x00010bf20c00(*(undefined8 *)(lVar1 + _DAT_11276fe20));
    if ((uVar7 & 0xfffffffffffffffe) == 2) {
      _CGRectGetHeight();
    }
    else {
      _CGRectGetWidth();
    }
    dVar14 = dVar14 / *(double *)(lVar1 + _DAT_11276fe00) + *(double *)(lVar1 + _DAT_11276fdfc);
    if (puVar4 == (undefined *)0x0) {
      lVar8 = *(long *)(lVar1 + lVar8);
      puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297180(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                          PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216920(puVar4);
      _objc_release(puVar5);
      func_0x00010c192d40(dVar14,puVar4);
      fVar11 = INFINITY;
      func_0x00010c1eabe0(0x7f800000,puVar4);
      if (lVar8 - 1U < 2) {
        func_0x00010c249ca0(puVar4);
        func_0x00010c207c40(-ABS(fVar11),puVar4);
      }
      func_0x00010c19bc40(puVar4);
      func_0x00010c1ea580(puVar4);
      lVar8 = (long)_DAT_11276fe1c;
      dVar14 = *(double *)(lVar1 + lVar8);
      if (dVar14 == INFINITY) {
        _CACurrentMediaTime();
        dVar12 = dVar14;
        func_0x00010bf8b160(lVar6);
        *(double *)(lVar1 + lVar8) = dVar14 + dVar12;
      }
      func_0x00010c16fd40(puVar4);
      func_0x00010bef6c20(*(undefined8 *)(lVar1 + lVar9));
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + lVar9);
      lVar1 = *(long *)(lVar1 + lVar8);
      puVar5 = puVar4;
      func_0x00010bf51e00(puVar4);
      func_0x00010c1eabe0(0x7f800000);
      func_0x00010c192d40(dVar14,puVar5);
      fVar11 = SUB84(dVar14,0);
      if ((lVar1 == 3) || (lVar1 == 0)) {
        func_0x00010c249ca0(puVar5);
        fVar11 = ABS(fVar11);
      }
      else {
        func_0x00010c249ca0(puVar5);
        fVar11 = -ABS(fVar11);
      }
      func_0x00010c207c40(fVar11,puVar5);
      func_0x00010bef6c20(uVar3);
      _objc_release(puVar5);
    }
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 107df958c; end: 107df9a97; -[FBShimmeringLayer _updateShimmering] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df958c(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  
  func_0x00010bdefe00();
  lVar6 = (long)_DAT_11276fe24;
  if (((*(byte *)(param_2 + lVar6) & 1) == 0) && (*(long *)(param_2 + _DAT_11276fe28) == 0)) {
    return;
  }
  func_0x00010c08cdc0(param_2);
  puVar3 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  func_0x00010bf7fa00();
  if ((*(byte *)(param_2 + lVar6) & 1) == 0) {
    if ((int)puVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__clearMask_112555bd0);
      return;
    }
    lVar7 = (long)_DAT_11276fe28;
    lVar6 = *(long *)(param_2 + lVar7);
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      param_1 = 0.0;
    }
    else {
      _CACurrentMediaTime();
      dVar10 = param_1;
      func_0x00010bf18c20(lVar6);
      dVar11 = param_1 - dVar10;
      func_0x00010bf8b160(lVar6);
      _fmod(dVar11,dVar10);
      lVar2 = lVar6;
      func_0x00010bf51e00(lVar6);
      func_0x00010c1eabe0(0);
      param_1 = param_1 - dVar11;
      func_0x00010c16fd40(lVar2);
      func_0x00010bf18c20(lVar2);
      dVar10 = param_1;
      func_0x00010bf8b160(lVar6);
      param_1 = param_1 + dVar10;
      func_0x00010bef6c20(*(undefined8 *)(param_2 + lVar7));
      _objc_release(lVar2);
    }
    puVar4 = *(undefined **)(param_2 + lVar7);
    func_0x00010bf9f780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    FUN_107df9a98(0x3ff0000000000000,*(undefined8 *)(param_2 + _DAT_11276fe18));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c18b5e0(puVar3);
    func_0x00010c220220(puVar3);
    func_0x00010c16fd40(param_1,puVar3);
    uVar1 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010bf9f780(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar1);
    *(double *)(param_2 + _DAT_11276fe2c) = param_1;
  }
  else {
    lVar7 = (long)_DAT_11276fe14;
    if (0.0 < *(double *)(param_2 + lVar7) && ((ulong)puVar3 & 1) == 0) {
      lVar8 = (long)_DAT_11276fe28;
      lVar2 = *(long *)(param_2 + lVar8);
      func_0x00010bf9f780(lVar2);
      _objc_retainAutoreleasedReturnValue();
      dVar10 = 0.0;
      lVar6 = lVar2;
      FUN_107df9a98(0,*(undefined8 *)(param_2 + lVar7));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      uVar1 = *(undefined8 *)(param_2 + lVar8);
      func_0x00010bf9f780(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar1);
    }
    else {
      func_0x00010bf7fa00(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
      lVar8 = (long)_DAT_11276fe28;
      uVar1 = *(undefined8 *)(param_2 + lVar8);
      func_0x00010bf9f780(uVar1);
      _objc_retainAutoreleasedReturnValue();
      dVar10 = 0.0;
      func_0x00010c1d4bc0(0);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_2 + lVar8);
      func_0x00010bf9f780(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(uVar1);
      func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
      lVar6 = 0;
    }
    puVar3 = *(undefined **)(param_2 + lVar8);
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11276fe10;
    uVar5 = *(ulong *)(param_2 + lVar7);
    func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11276fe20));
    if ((uVar5 & 0xfffffffffffffffe) == 2) {
      _CGRectGetHeight();
    }
    else {
      _CGRectGetWidth();
    }
    dVar10 = dVar10 / *(double *)(param_2 + _DAT_11276fe00) + *(double *)(param_2 + _DAT_11276fdfc);
    if (puVar3 == (undefined *)0x0) {
      lVar7 = *(long *)(param_2 + lVar7);
      puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297180(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                          PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216920(puVar3);
      _objc_release(puVar4);
      func_0x00010c192d40(dVar10,puVar3);
      fVar9 = INFINITY;
      func_0x00010c1eabe0(0x7f800000,puVar3);
      if (lVar7 - 1U < 2) {
        func_0x00010c249ca0(puVar3);
        func_0x00010c207c40(-ABS(fVar9),puVar3);
      }
      func_0x00010c19bc40(puVar3);
      func_0x00010c1ea580(puVar3);
      lVar7 = (long)_DAT_11276fe1c;
      dVar10 = *(double *)(param_2 + lVar7);
      if (dVar10 == INFINITY) {
        _CACurrentMediaTime();
        dVar11 = dVar10;
        func_0x00010bf8b160(lVar6);
        *(double *)(param_2 + lVar7) = dVar10 + dVar11;
      }
      func_0x00010c16fd40(puVar3);
      func_0x00010bef6c20(*(undefined8 *)(param_2 + lVar8));
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + lVar8);
      lVar7 = *(long *)(param_2 + lVar7);
      puVar4 = puVar3;
      func_0x00010bf51e00(puVar3);
      func_0x00010c1eabe0(0x7f800000);
      func_0x00010c192d40(dVar10,puVar4);
      fVar9 = SUB84(dVar10,0);
      if ((lVar7 == 3) || (lVar7 == 0)) {
        func_0x00010c249ca0(puVar4);
        fVar9 = ABS(fVar9);
      }
      else {
        func_0x00010c249ca0(puVar4);
        fVar9 = -ABS(fVar9);
      }
      func_0x00010c207c40(fVar9,puVar4);
      func_0x00010bef6c20(uVar1);
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 107df9a98; end: 107df9bc7;  */

void FUN_107df9a98(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  uVar5 = param_1;
  _objc_retain();
  func_0x00010bf04040(puVar2,param_4,&PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = param_3;
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  func_0x00010c0e8ca0(lVar1);
  _objc_release(param_3);
  func_0x00010c0df740(uVar5,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar2,param_4,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar2,param_4,puVar4);
  _objc_release(puVar4);
  func_0x00010c19bc40(puVar2,param_4,*(undefined8 *)PTR__kCAFillModeBoth_110346cd8);
  func_0x00010c1ea580(puVar2,param_4,0);
  func_0x00010c192d40(param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107df9bc8; end: 107df9bf7; -[FBShimmeringLayer actionForLayer:forKey:] */

void FUN_107df9bc8(void)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__kCFNull_11034abd8;
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107df9bf8; end: 107df9c97; -[FBShimmeringLayer animationDidStop:finished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df9bf8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    func_0x00010c296f60(param_3,param_2,&PTR____CFConstantStringClassReference_110ebf898);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf1f3c0();
    _objc_release(param_3);
    if ((int)uVar1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11276fe28);
      func_0x00010bf9f780(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b200();
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bde08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearMask_112555bd0);
      return;
    }
  }
  return;
}



/* Entry: 107df9c98; end: 107df9ca7; -[FBShimmeringLayer isShimmering] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107df9c98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276fe24);
}



/* Entry: 107df9ca8; end: 107df9cb7; -[FBShimmeringLayer shimmeringPauseDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9ca8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fdfc);
}



/* Entry: 107df9cb8; end: 107df9cc7; -[FBShimmeringLayer shimmeringAnimationOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9cb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe08);
}



/* Entry: 107df9cc8; end: 107df9cd7; -[FBShimmeringLayer shimmeringOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9cc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe0c);
}



/* Entry: 107df9cd8; end: 107df9ce7; -[FBShimmeringLayer shimmeringSpeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9cd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe00);
}



/* Entry: 107df9ce8; end: 107df9cf7; -[FBShimmeringLayer shimmeringHighlightLength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9ce8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe04);
}



/* Entry: 107df9cf8; end: 107df9d07; -[FBShimmeringLayer shimmeringDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9cf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe10);
}



/* Entry: 107df9d08; end: 107df9d17; -[FBShimmeringLayer shimmeringFadeTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9d08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe2c);
}



/* Entry: 107df9d18; end: 107df9d27; -[FBShimmeringLayer shimmeringBeginFadeDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9d18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe14);
}



/* Entry: 107df9d28; end: 107df9d37; -[FBShimmeringLayer setShimmeringBeginFadeDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df9d28(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276fe14) = param_1;
  return;
}



/* Entry: 107df9d38; end: 107df9d47; -[FBShimmeringLayer shimmeringEndFadeDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9d38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe18);
}



/* Entry: 107df9d48; end: 107df9d57; -[FBShimmeringLayer setShimmeringEndFadeDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df9d48(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276fe18) = param_1;
  return;
}



/* Entry: 107df9d58; end: 107df9d67; -[FBShimmeringLayer shimmeringBeginTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9d58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe1c);
}



/* Entry: 107df9d68; end: 107df9d77; -[FBShimmeringLayer contentLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9d68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe20);
}



/* Entry: 107df9d78; end: 107df9d87; -[FBShimmeringLayer maskLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107df9d78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe28);
}



/* Entry: 107df9d88; end: 107df9dc7; -[FBShimmeringLayer setMaskLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df9d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fe28;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107df9dc8; end: 107df9e07; -[FBShimmeringLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107df9dc8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fe28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fe20,0);
  return;
}



/* Entry: 107df9e08; end: 107df9e13; +[FBShimmeringView layerClass] */

void FUN_107df9e08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d7ec0);
  return;
}



/* Entry: 107df9e14; end: 107df9e4f; -[FBShimmeringView isShimmering] */

undefined8 FUN_107df9e14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07ddc0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107df9e50; end: 107df9e87; -[FBShimmeringView setShimmering:] */

void FUN_107df9e50(undefined8 param_1)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107df9e88; end: 107df9ecb; -[FBShimmeringView shimmeringPauseDuration] */

undefined8 FUN_107df9e88(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22c8e0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107df9ecc; end: 107df9f0b; -[FBShimmeringView setShimmeringPauseDuration:] */

void FUN_107df9ecc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107df9f0c; end: 107df9f4f; -[FBShimmeringView shimmeringAnimationOpacity] */

undefined8 FUN_107df9f0c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22c7e0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107df9f50; end: 107df9f8f; -[FBShimmeringView setShimmeringAnimationOpacity:] */

void FUN_107df9f50(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff540(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107df9f90; end: 107df9fd3; -[FBShimmeringView shimmeringOpacity] */

undefined8 FUN_107df9f90(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22c8c0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107df9fd4; end: 107dfa013; -[FBShimmeringView setShimmeringOpacity:] */

void FUN_107df9fd4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff600(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107dfa014; end: 107dfa057; -[FBShimmeringView shimmeringSpeed] */

undefined8 FUN_107dfa014(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22c900();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107dfa058; end: 107dfa097; -[FBShimmeringView setShimmeringSpeed:] */

void FUN_107dfa058(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff640(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107dfa098; end: 107dfa0db; -[FBShimmeringView shimmeringHighlightLength] */

undefined8 FUN_107dfa098(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22c8a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107dfa0dc; end: 107dfa11b; -[FBShimmeringView setShimmeringHighlightLength:] */

void FUN_107dfa0dc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff5e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107dfa11c; end: 107dfa157; -[FBShimmeringView shimmeringDirection] */

undefined8 FUN_107dfa11c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22c840();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107dfa158; end: 107dfa18f; -[FBShimmeringView setShimmeringDirection:] */

void FUN_107dfa158(undefined8 param_1)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dfa190; end: 107dfa1d3; -[FBShimmeringView shimmeringFadeTime] */

undefined8 FUN_107dfa190(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22c880();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107dfa1d4; end: 107dfa217; -[FBShimmeringView shimmeringBeginFadeDuration] */

undefined8 FUN_107dfa1d4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22c800();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107dfa218; end: 107dfa257; -[FBShimmeringView setShimmeringBeginFadeDuration:] */

void FUN_107dfa218(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff560(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107dfa258; end: 107dfa29b; -[FBShimmeringView shimmeringEndFadeDuration] */

undefined8 FUN_107dfa258(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22c860();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107dfa29c; end: 107dfa2db; -[FBShimmeringView setShimmeringEndFadeDuration:] */

void FUN_107dfa29c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff5c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107dfa2dc; end: 107dfa31f; -[FBShimmeringView shimmeringBeginTime] */

undefined8 FUN_107dfa2dc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22c820();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107dfa320; end: 107dfa35f; -[FBShimmeringView setShimmeringBeginTime:] */

void FUN_107dfa320(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff580(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107dfa360; end: 107dfa407; -[FBShimmeringView setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dfa360(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11276fe30;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010befbb60(param_1,param_2,param_3);
    lVar2 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182120();
    _objc_release(param_1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dfa408; end: 107dfa46b; -[FBShimmeringView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dfa408(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf20c00();
  lVar1 = (long)_DAT_11276fe30;
  func_0x00010c1739e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf345e0(param_1);
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + lVar1));
  puStack_28 = PTR_PTR_1126fb408;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 107dfa46c; end: 107dfa47b; -[FBShimmeringView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dfa46c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fe30);
}



/* Entry: 107dfa47c; end: 107dfa48f; -[FBShimmeringView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dfa47c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fe30,0);
  return;
}



/* Entry: 107dfa490; end: 107dfa5e3; -[SCMotionManager initWithDeviceMotionManager:] */

undefined1 * FUN_107dfa490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fb410;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    puVar3 = PTR_PTR_1126d7ed0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d7ed0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x00010bf85b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc2c0(uVar2);
    _objc_release(puVar3);
    func_0x00010c1d9980(*(undefined8 *)((long)puVar1 + 0x68));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dfa5e4; end: 107dfa63b; -[SCMotionManager beginMotionUpdates] */

void FUN_107dfa5e4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107dfa63c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107dfa63c; end: 107dfa653;  */

void FUN_107dfa63c(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0x18) = *(long *)(*(long *)(param_1 + 0x20) + 0x18) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bec06f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startMotionUpdatesIfNecessary_11258db60);
  return;
}



/* Entry: 107dfa654; end: 107dfa6ab; -[SCMotionManager endMotionUpdates] */

void FUN_107dfa654(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107dfa6ac;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107dfa6ac; end: 107dfa6c3;  */

void FUN_107dfa6ac(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0x18) = *(long *)(*(long *)(param_1 + 0x20) + 0x18) + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bec3270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__stopMotionUpdatesIfNecessary_11258e640);
  return;
}



/* Entry: 107dfa6c4; end: 107dfa9bb; -[SCMotionManager _updateMotion] */

void FUN_107dfa6c4(double param_1,double param_2,double param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar4 = *(undefined8 *)(param_4 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5e660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c141cc0(uVar5);
  dVar10 = param_3 * 0.016666666666666666;
  *(double *)(param_4 + 0x30) = *(double *)(param_4 + 0x30) + dVar10;
  func_0x00010bfce0a0(uVar5);
  *(double *)(param_4 + 0x40) = param_3;
  dVar7 = 0.8;
  if (0.8 <= ABS(param_3)) {
    dVar7 = *(double *)(param_4 + 0x30);
  }
  else {
    func_0x00010bfce0a0(uVar5);
    func_0x00010bfce0a0(uVar5);
    _atan2();
    dVar7 = (dVar7 + 3.141592653589793) - *(double *)(param_4 + 0x30);
    func_0x00010c0db3e0(PTR_PTR_1126c48c0);
    dVar7 = *(double *)(param_4 + 0x30) + ABS(param_3) * dVar7 * 0.1;
    *(double *)(param_4 + 0x30) = dVar7;
  }
  func_0x00010c0db3e0(PTR_PTR_1126c48c0);
  *(double *)(param_4 + 0x30) = dVar7;
  dVar7 = dVar7 - *(double *)(param_4 + 0x38);
  func_0x00010c0db3e0(PTR_PTR_1126c48c0);
  if (ABS(dVar7 / 0.016666666666666666) <= 3.141592653589793) {
    dVar7 = *(double *)(param_4 + 0x30);
  }
  else {
    dVar8 = -dVar7;
    if (0.0 <= dVar7) {
      dVar8 = dVar7;
    }
    dVar8 = -2.3025850929940455 / (double)(long)((dVar8 / 4.71238898038469) / 0.016666666666666666);
    _exp();
    dVar7 = dVar7 * (1.0 - dVar8) * 1.1111111111111112 + *(double *)(param_4 + 0x38);
    func_0x00010c0db3e0(PTR_PTR_1126c48c0);
  }
  *(double *)(param_4 + 0x38) = dVar7;
  dVar7 = ABS(param_1 * 0.016666666666666666);
  dVar8 = ABS(param_2 * 0.016666666666666666);
  dVar10 = ABS(dVar10);
  dVar9 = dVar10 + 0.002908882086657216;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (dVar8 + 0.002908882086657216 < dVar7) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar7) && !NAN(dVar9)) {
      bVar1 = dVar7 < dVar9;
      bVar2 = dVar7 == dVar9;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (dVar7 + 0.002908882086657216 < dVar8) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar8) && !NAN(dVar9)) {
        bVar1 = dVar8 < dVar9;
        bVar2 = dVar8 == dVar9;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      dVar8 = dVar8 + 0.005817764173314432;
      dVar9 = *(double *)(param_4 + 0x20);
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (dVar7 + 0.005817764173314432 < dVar10) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar10) && !NAN(dVar8)) {
          bVar1 = dVar10 < dVar8;
          bVar2 = dVar10 == dVar8;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        dVar7 = *(double *)(param_4 + 0x28);
      }
      else {
        dVar9 = dVar9 * 0.98;
        dVar7 = *(double *)(param_4 + 0x28) * 0.98;
      }
    }
    else {
      dVar9 = *(double *)(param_4 + 0x20) * 0.98;
      dVar7 = param_2 * 0.016666666666666666 + *(double *)(param_4 + 0x28);
    }
  }
  else {
    dVar9 = param_1 * 0.016666666666666666 + *(double *)(param_4 + 0x20);
    dVar7 = *(double *)(param_4 + 0x28) * 0.98;
  }
  dVar10 = -0.39269908169872414;
  if (-0.39269908169872414 <= dVar9) {
    dVar10 = dVar9;
  }
  uVar4 = NEON_fminnm(dVar10,0x3fd921fb54442d18);
  dVar10 = -0.39269908169872414;
  if (-0.39269908169872414 <= dVar7) {
    dVar10 = dVar7;
  }
  dVar7 = (double)NEON_fminnm(dVar10,0x3fd921fb54442d18);
  *(undefined8 *)(param_4 + 0x20) = uVar4;
  *(double *)(param_4 + 0x28) = dVar7;
  dVar7 = dVar7 / -0.39269908169872414;
  func_0x00010bf99960(*(undefined8 *)(param_4 + 0x58));
  dVar10 = *(double *)(param_4 + 0x20) / -0.39269908169872414;
  func_0x00010bf99960(*(undefined8 *)(param_4 + 0x60));
  *(double *)(param_4 + 0x50) = dVar10 * 0.0;
  *(double *)(param_4 + 0x48) = dVar7 * 0.0;
  puVar6 = PTR_PTR_1126d7ed8;
  _objc_alloc();
  func_0x00010c040480(*(undefined8 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x48),
                      *(undefined8 *)(param_4 + 0x50),*(undefined8 *)(param_4 + 0x40));
  uVar4 = *(undefined8 *)(param_4 + 0x78);
  *(undefined **)(param_4 + 0x78) = puVar6;
  _objc_release(uVar4);
  func_0x00010c0d9840(*(undefined8 *)(param_4 + 0x10),param_5,*(undefined8 *)(param_4 + 0x78));
  func_0x00010bec3260(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107dfa9bc; end: 107dfaa43; -[SCMotionManager _startMotionUpdatesIfNecessary] */

void FUN_107dfa9bc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
  func_0x00010c079ba0();
  if ((iVar1 != 0) && (0 < *(long *)(param_1 + 0x18))) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c24e980(0x4059000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x68),PTR_s_setPaused__112654088,0);
    return;
  }
  return;
}


