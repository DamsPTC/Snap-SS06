/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2aada8; end: 10b2aae23; -[SCLoadingIndicatorView appDidEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2aada8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11278e250);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf03c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  func_0x00010c2558c0(param_1);
  *(bool *)(param_1 + _DAT_11278e264) = lVar2 != 0;
  return;
}



/* Entry: 10b2aae24; end: 10b2aae3f; -[SCLoadingIndicatorView appWillEnterForeground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2aae24(long param_1)

{
  if (*(char *)(param_1 + _DAT_11278e264) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startAnimating_112671118);
    return;
  }
  return;
}



/* Entry: 10b2aae40; end: 10b2ab047; -[SCLoadingIndicatorView layoutSublayersOfLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2aae40(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_138;
  undefined *puStack_130;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = PTR_PTR_112706220;
  lStack_138 = param_4;
  _objc_msgSendSuper2(&lStack_138,PTR_s_layoutSublayersOfLayer__1125377f8);
  lVar5 = *(long *)(param_4 + _DAT_11278e250);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      uVar3 = *(undefined8 *)(param_4 + _DAT_11278e254);
      func_0x00010c0dff20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf03be0();
      func_0x00010bf8c0e0(uVar3);
      lVar4 = param_4;
      func_0x00010c14e360();
      if ((int)lVar4 != 0) {
        func_0x00010bf20c00(param_4);
        func_0x00010c1bdd00(param_3 / 12.0,uVar6);
      }
      func_0x00010bf20c00(param_4);
      _CGRectInset();
      _CGRectInset();
      func_0x00010c19f0e0(uVar6);
      _objc_release(uVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 10b2ab048; end: 10b2ab077; -[SCLoadingIndicatorView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ab048(void)

{
  return;
}



/* Entry: 10b2ab078; end: 10b2ab07b; -[SCLoadingIndicatorView sizeThatFits:] */

void FUN_10b2ab078(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10b2ab07c; end: 10b2ab08b; -[SCLoadingIndicatorView hidesWhenStopped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2ab07c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e260);
}



/* Entry: 10b2ab08c; end: 10b2ab09b; -[SCLoadingIndicatorView scaleLineWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2ab08c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e24c);
}



/* Entry: 10b2ab09c; end: 10b2ab0ab; -[SCLoadingIndicatorView setScaleLineWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ab09c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e24c) = param_3;
  return;
}



/* Entry: 10b2ab0ac; end: 10b2ab0fb; -[SCLoadingIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ab0ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e254,0);
  _objc_storeStrong(param_1 + _DAT_11278e258,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e250,0);
  return;
}



/* Entry: 10b2ab0fc; end: 10b2ab107; +[SCStoryLoadingIndicatorView layerClass] */

void FUN_10b2ab0fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 10b2ab108; end: 10b2ab1eb; -[SCStoryLoadingIndicatorView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b2ab108(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706228;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bef80(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e270);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e270) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar3);
    func_0x00010c1399a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2ab1ec; end: 10b2ab35f; -[SCStoryLoadingIndicatorView layoutSublayersOfLayer:] */

void FUN_10b2ab1ec(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_112706228;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_layoutSublayersOfLayer__1125377f8,param_7);
  func_0x00010c112660(param_5);
  dVar4 = param_1;
  func_0x00010bf20c00(param_5);
  bVar1 = false;
  if ((param_1 == param_3) && (bVar1 = false, !NAN(param_2) && !NAN(param_4))) {
    bVar1 = param_2 == param_4;
  }
  if (!bVar1) {
    func_0x00010bf20c00(param_5);
    _CGRectGetMidX();
    uVar7 = 0x4012d97c7f3321d2;
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    dVar5 = dVar4;
    dVar6 = dVar4;
    func_0x00010bf19960(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar3 = param_5;
    func_0x00010c22a660(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar3);
    func_0x00010bf20c00(param_7);
    uVar3 = param_5;
    func_0x00010c22a660(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar4,dVar5,dVar6,uVar7);
    _objc_release(uVar3);
    func_0x00010bf20c00(param_7);
    func_0x00010c1e2520(dVar6,uVar7,param_5);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 10b2ab360; end: 10b2ab3f3; -[SCStoryLoadingIndicatorView tintColorDidChange] */

void FUN_10b2ab360(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706228;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_tintColorDidChange_11252d268);
  uVar1 = param_1;
  func_0x00010c270f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2ab3f4; end: 10b2ab423; -[SCStoryLoadingIndicatorView shapeLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ab3f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e270);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2ab424; end: 10b2ab6e3; -[SCStoryLoadingIndicatorView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ab424(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + _DAT_11278e274) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11278e274) = 1;
  func_0x00010c1a7f60(param_1,param_2,0);
  _CACurrentMediaTime();
  func_0x00010c168060(param_1);
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e9a0(0);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110e1f3f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c192d40(0x3fd3333333333333,puVar2);
  func_0x00010c1ea580(puVar2,param_2,0);
  lVar6 = (long)_DAT_11278e270;
  func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar6),param_2,puVar2,
                      &PTR____CFConstantStringClassReference_110f625f8);
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110ed5918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fd3333333333333);
  lVar1 = param_1;
  func_0x00010c270f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c1a1180(puVar3,param_2,lVar4);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c09d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c216920(puVar3,param_2,lVar4);
  _objc_release(lVar1);
  func_0x00010c1ea580(puVar3,param_2,0);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar6),param_2,puVar3,0);
  lVar1 = param_1;
  func_0x00010c09d4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar4 = param_1;
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110e2a518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111186010);
  func_0x00010c192d40(0x3fe6666666666666,puVar5);
  func_0x00010c1eabe0(0x7f800000,puVar5);
  func_0x00010c186980(puVar5,param_2,1);
  func_0x00010c19bc40(puVar5,param_2,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
  func_0x00010c1ea580(puVar5,param_2,0);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + lVar6),param_2,puVar5,
                      &PTR____CFConstantStringClassReference_110f625d8);
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b2ab6e4; end: 10b2aba47; -[SCStoryLoadingIndicatorView stopAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ab6e4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + _DAT_11278e274) & 1) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    _CACurrentMediaTime();
    dVar8 = param_1;
    func_0x00010bf03a00(param_2);
    param_1 = param_1 - dVar8;
    if (0.6 <= param_1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4);
      }
      lVar7 = (long)_DAT_11278e270;
      lVar1 = *(long *)(param_2 + lVar7);
      func_0x00010c10f4e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      if (lVar1 == 0) {
        lVar6 = *(long *)(param_2 + lVar7);
      }
      _objc_retain(lVar6);
      _objc_release(lVar1);
      func_0x00010c25dc60(lVar6);
      func_0x00010c25dbc0(lVar6);
      func_0x00010c12b200(*(undefined8 *)(param_2 + lVar7));
      lVar1 = param_2;
      func_0x00010c22a660(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e920(param_1);
      _objc_release(lVar1);
      func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718);
      puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1180();
      lVar1 = param_2;
      func_0x00010c270f20(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c216920(puVar2);
      _objc_release(lVar1);
      func_0x00010c192d40(0x3fd3333333333333,puVar2);
      func_0x00010bef6c20(*(undefined8 *)(param_2 + lVar7));
      lVar1 = param_2;
      func_0x00010c270f20(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      lVar3 = param_2;
      func_0x00010c22a660(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e8e0();
      _objc_release(lVar3);
      _objc_release(lVar1);
      puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1180();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216920(puVar4);
      _objc_release(puVar5);
      func_0x00010c192d40(0x3fd3333333333333,puVar4);
      func_0x00010bef6c20(*(undefined8 *)(param_2 + lVar7));
      func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x00010c22a660(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e9a0(param_1);
      _objc_release(param_2);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    else {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10b2aba48;
      puStack_88 = &UNK_11084aaa8;
      lStack_80 = param_2;
      _objc_retain(param_4);
      lStack_78 = param_4;
      func_0x000107c312d4(0x3c23d70a,"APPSTORE",&puStack_a0);
      lVar6 = lStack_78;
    }
    _objc_release(lVar6);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10b2aba48; end: 10b2aba53;  */

void FUN_10b2aba48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_stopAnimating__112673060,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b2aba54; end: 10b2abaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2aba54(long param_1,undefined8 param_2)

{
  func_0x00010c12b200(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e270),param_2,
                      &PTR____CFConstantStringClassReference_110f625d8);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e274) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10b2abaa4; end: 10b2abbbf; -[SCStoryLoadingIndicatorView setSpinnerProgress:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2abaa4(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_2;
  uVar4 = param_1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc60();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c22a660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e920(param_1);
  _objc_release(lVar1);
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                        &PTR____CFConstantStringClassReference_110e1f3f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar2,param_3,puVar3);
    _objc_release(puVar3);
    func_0x00010c192d40(0x3fd3333333333333,puVar2);
    func_0x00010c1ea580(puVar2,param_3,0);
    func_0x00010bef6c20(*(undefined8 *)(param_2 + _DAT_11278e270),param_3,puVar2,
                        &PTR____CFConstantStringClassReference_110f625f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10b2abbc0; end: 10b2abd2b; -[SCStoryLoadingIndicatorView resetToInitialState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2abbc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + _DAT_11278e270));
  func_0x00010c1a7f60(param_1,param_2,1);
  lVar1 = param_1;
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(0x3ff8000000000000);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb40();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar1 = param_1;
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(lVar1);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010c270f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar3 = param_1;
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e920(0x3fe47ae140000000);
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + _DAT_11278e274) = 0;
  return;
}



/* Entry: 10b2abd2c; end: 10b2abd3b; -[SCStoryLoadingIndicatorView loadingTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2abd2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e278);
}



/* Entry: 10b2abd3c; end: 10b2abd7b; -[SCStoryLoadingIndicatorView setLoadingTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2abd3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e278;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2abd7c; end: 10b2abdbb; -[SCStoryLoadingIndicatorView setShapeLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2abd7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e27c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2abdbc; end: 10b2abdcf; -[SCStoryLoadingIndicatorView previousBoundsSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b2abdbc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11278e268);
}



/* Entry: 10b2abdd0; end: 10b2abde3; -[SCStoryLoadingIndicatorView setPreviousBoundsSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2abdd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278e268;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10b2abde4; end: 10b2abdf3; -[SCStoryLoadingIndicatorView animationBeginTimeInterval] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2abde4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e26c);
}



/* Entry: 10b2abdf4; end: 10b2abe03; -[SCStoryLoadingIndicatorView setAnimationBeginTimeInterval:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2abdf4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e26c) = param_1;
  return;
}



/* Entry: 10b2abe04; end: 10b2abe53; -[SCStoryLoadingIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2abe04(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e27c,0);
  _objc_storeStrong(param_1 + _DAT_11278e278,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e270,0);
  return;
}



/* Entry: 10b2abe54; end: 10b2abf43;  */

void FUN_10b2abe54(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e0108;
  _objc_opt_class(PTR_PTR_1126e0108);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar3 & 1) != 0) {
    func_0x00010c2803c0(uVar1);
    func_0x00010c12d3e0(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2abf44; end: 10b2ac03f;  */

void FUN_10b2abf44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126da528;
  func_0x00010c067aa0(PTR_PTR_1126da528,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      func_0x00010c2803c0(*(undefined8 *)((long)puVar5 * 8));
      puVar5 = puVar5 + 1;
    } while (puVar3 != puVar5);
    puVar3 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_s_sc_userInfo_112542de0;
  puVar5 = puVar2;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_setAssociatedObject(puVar2,puVar3,puVar5,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b2ac040; end: 10b2ac0ab; -[MASConstraint sc_userInfo] */

void FUN_10b2ac040(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_sc_userInfo_112542de0;
  puVar2 = param_1;
  _objc_getAssociatedObject(param_1,PTR_s_sc_userInfo_112542de0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_setAssociatedObject(param_1,puVar1,puVar2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2ac0ac; end: 10b2ac0fb; -[MASConstraint sc_track] */

void FUN_10b2ac0ac(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b2ac0fc;
  puStack_20 = &UNK_110cd1560;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2ac0fc; end: 10b2ac173;  */

void FUN_10b2ac0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c14df20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
  _objc_release(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2ac174; end: 10b2ac1c3; -[MASConstraint sc_priorityHighestOptional] */

void FUN_10b2ac174(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b2ac1c4;
  puStack_20 = &UNK_110855710;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2ac1c4; end: 10b2ac223;  */

void FUN_10b2ac1c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(0x4479c000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b2ac224; end: 10b2ac273; -[MASConstraint sc_priorityLowOffset] */

void FUN_10b2ac224(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b2ac274;
  puStack_20 = &UNK_110cd1590;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2ac274; end: 10b2ac2e7;  */

void FUN_10b2ac274(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))((float)(param_1 + 250.0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b2ac2e8; end: 10b2ac35b; -[SCMotionEffect keyPathsAndRelativeValuesForViewerOffset:] */

undefined8 FUN_10b2ac2e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x00010c0e7820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0e7820();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_1,param_2);
    _objc_release(param_3);
  }
  return 0;
}



/* Entry: 10b2ac35c; end: 10b2ac36b; -[SCMotionEffect onValueChanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ac35c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e280);
}



/* Entry: 10b2ac36c; end: 10b2ac377; -[SCMotionEffect setOnValueChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ac36c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b2ac378; end: 10b2ac38b; -[SCMotionEffect .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ac378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e280,0);
  return;
}



/* Entry: 10b2ac38c; end: 10b2ac3eb; -[SCCornerRadii initWithTopLeftRadius:topRightRadius:bottomLeftRadius:bottomRightRadius:] */

void FUN_10b2ac38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706230;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  return;
}



/* Entry: 10b2ac3ec; end: 10b2ac40f; -[SCCornerRadii copyWithZone:] */

undefined8 FUN_10b2ac3ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b2ac410; end: 10b2ac4e3; -[SCCornerRadii hash] */

ulong * FUN_10b2ac410(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_38;
  func_0x000107c3191c(puVar3,4);
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
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
        dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
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
              dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
              if (dVar7 <= 2.2250738585072014e-308) {
                dVar7 = 2.2250738585072014e-308;
              }
              puVar6 = (ulong *)(ulong)(ABS((double)puVar3[4] - (double)param_3[4]) < dVar7);
              goto LAB_10b2ac610;
            }
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_10b2ac610:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b2ac4e4; end: 10b2ac62b; -[SCCornerRadii isEqual:] */

bool FUN_10b2ac4e4(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
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
              dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              if (dVar4 <= 2.2250738585072014e-308) {
                dVar4 = 2.2250738585072014e-308;
              }
              bVar1 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) < dVar4;
              goto LAB_10b2ac610;
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_10b2ac610:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b2ac62c; end: 10b2ac633; -[SCCornerRadii topLeftRadius] */

undefined8 FUN_10b2ac62c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b2ac634; end: 10b2ac63b; -[SCCornerRadii topRightRadius] */

undefined8 FUN_10b2ac634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b2ac63c; end: 10b2ac643; -[SCCornerRadii bottomLeftRadius] */

undefined8 FUN_10b2ac63c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b2ac644; end: 10b2ac64b; -[SCCornerRadii bottomRightRadius] */

undefined8 FUN_10b2ac644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b2ac64c; end: 10b2ac727; -[SCRoundedCornerContainerView initWithCornerRadius:rectCorner:cornerColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b2ac64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  _objc_retain(param_5);
  puVar2 = PTR__CGRectZero_110347608;
  puStack_58 = PTR_PTR_112706238;
  uStack_60 = param_2;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11278e294;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_5;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar3 + (long)_DAT_11278e298) = 1;
    puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_11278e29c);
    uVar7 = *(undefined8 *)puVar2;
    uVar6 = *(undefined8 *)(puVar2 + 0x18);
    uVar4 = *(undefined8 *)(puVar2 + 0x10);
    puVar1[1] = *(undefined8 *)(puVar2 + 8);
    *puVar1 = uVar7;
    puVar1[3] = uVar6;
    puVar1[2] = uVar4;
    func_0x00010bf08260(param_1,puVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar3;
}



/* Entry: 10b2ac728; end: 10b2ac7a3; -[SCRoundedCornerContainerView addCornerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ac728(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b52f0;
  _objc_alloc_init(PTR_PTR_1126b52f0);
  func_0x00010bdc0fe0(*(undefined8 *)(param_1 + _DAT_11278e294));
  puVar2 = puVar1;
  func_0x00010c22a660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(puVar2);
  func_0x00010befbb60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2ac7a4; end: 10b2ac91f; -[SCRoundedCornerContainerView setRectCorner:] */

/* WARNING: Possible PIC construction at 0x00010b2ac8dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2ac8fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2ac8e0) */
/* WARNING: Removing unreachable block (ram,0x00010b2ac900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ac7a4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(ulong *)(param_1 + _DAT_11278e2a0) == param_3) {
    return;
  }
  *(ulong *)(param_1 + _DAT_11278e2a0) = param_3;
  uVar3 = (uint)param_3;
  if ((param_3 & 1) != 0) {
    lVar4 = (long)_DAT_11278e2a4;
    if (*(long *)(param_1 + lVar4) == 0) {
      lVar1 = param_1;
      func_0x00010bef7b40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(long *)(param_1 + lVar4) = lVar1;
      _objc_release(uVar2);
    }
  }
  if ((uVar3 >> 1 & 1) != 0) {
    lVar4 = (long)_DAT_11278e2a8;
    if (*(long *)(param_1 + lVar4) == 0) {
      lVar1 = param_1;
      func_0x00010bef7b40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(long *)(param_1 + lVar4) = lVar1;
      _objc_release(uVar2);
    }
  }
  if ((uVar3 >> 3 & 1) != 0) {
    lVar4 = (long)_DAT_11278e2ac;
    if (*(long *)(param_1 + lVar4) == 0) {
      lVar1 = param_1;
      func_0x00010bef7b40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(long *)(param_1 + lVar4) = lVar1;
      _objc_release(uVar2);
    }
  }
  if ((uVar3 >> 2 & 1) != 0) {
    lVar4 = (long)_DAT_11278e2b0;
    if (*(long *)(param_1 + lVar4) == 0) {
      lVar1 = param_1;
      func_0x00010bef7b40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(long *)(param_1 + lVar4) = lVar1;
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e2a4),PTR_s_setHidden__1126479f8,(param_3 & 1) == 0
            );
  return;
}



/* Entry: 10b2ac920; end: 10b2ac9b3; -[SCRoundedCornerContainerView applyCornerRadius:rectCorner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ac920(double param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  if (*(long *)(param_2 + _DAT_11278e2a0) == param_4) {
    dVar3 = ABS(*(double *)(param_2 + _DAT_11278e2b4) - param_1);
    dVar2 = ABS(param_1 + *(double *)(param_2 + _DAT_11278e2b4)) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar2))) {
      bVar1 = dVar3 < dVar2;
    }
    if (bVar1) {
      return;
    }
  }
  func_0x00010c1e9140(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bed6290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s__updateCornerRadius__112593248);
  return;
}



/* Entry: 10b2ac9b4; end: 10b2aca77; -[SCRoundedCornerContainerView setBorderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ac9b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11278e2b8;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_10b2aca60;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    func_0x00010bea7880(param_1);
  }
LAB_10b2aca60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2aca78; end: 10b2acabb; -[SCRoundedCornerContainerView setBorderWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2aca78(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(param_2 + _DAT_11278e2bc);
  dVar3 = ABS(param_1 - dVar2);
  dVar2 = ABS(param_1 + dVar2) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar2))) {
    bVar1 = dVar3 < dVar2;
  }
  if (bVar1) {
    return;
  }
  *(double *)(param_2 + _DAT_11278e2bc) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bea7890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setShouldRedrawBorder_1125877c8);
  return;
}



/* Entry: 10b2acabc; end: 10b2acb3b; -[SCRoundedCornerContainerView setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2acabc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11278e2c0;
  if (*(long *)(param_1 + lVar2) != param_3) {
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c12c960();
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010c066fa0(param_1,param_2,*(undefined8 *)(param_1 + lVar2),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2acb3c; end: 10b2acd0f; -[SCRoundedCornerContainerView setCornerColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2acb3c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11278e294;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  uVar2 = param_3;
  if (uVar3 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar2 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar2 & 1) != 0) goto LAB_10b2accf8;
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar1);
    lVar4 = param_1;
    func_0x00010c279540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c13afc0(param_3,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_retainAutorelease(uVar3);
    func_0x00010bdc0fe0();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278e2a4);
    func_0x00010c22a660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar1);
    _objc_retainAutorelease(uVar3);
    func_0x00010bdc0fe0();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278e2a8);
    func_0x00010c22a660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar1);
    _objc_retainAutorelease(uVar3);
    func_0x00010bdc0fe0();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278e2b0);
    func_0x00010c22a660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar1);
    _objc_retainAutorelease(uVar3);
    func_0x00010bdc0fe0();
    uVar2 = *(ulong *)(param_1 + _DAT_11278e2ac);
    func_0x00010c22a660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
LAB_10b2accf8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2acd10; end: 10b2acd4f; -[SCRoundedCornerContainerView setCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2acd10(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = ABS(*(double *)(param_2 + _DAT_11278e2b4) - param_1);
  dVar2 = ABS(param_1 + *(double *)(param_2 + _DAT_11278e2b4)) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar2))) {
    bVar1 = dVar3 < dVar2;
  }
  if (bVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed6290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateCornerRadius__112593248);
  return;
}



/* Entry: 10b2acd50; end: 10b2ace7b; -[SCRoundedCornerContainerView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2acd50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_112706238;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_traitCollectionDidChange__11267bf88);
  lVar2 = (long)_DAT_11278e294;
  func_0x00010bdc0fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e2a4);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar1);
  func_0x00010bdc0fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e2a8);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar1);
  func_0x00010bdc0fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e2b0);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar1);
  func_0x00010bdc0fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e2ac);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2ace7c; end: 10b2ad057; -[SCRoundedCornerContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ace7c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_112706238;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  dVar2 = param_1;
  _CGRectGetMinX();
  dVar3 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  lVar1 = (long)_DAT_11278e2b4;
  func_0x00010c19f0e0(dVar2,dVar3,*(undefined8 *)(param_5 + lVar1),*(undefined8 *)(param_5 + lVar1),
                      *(undefined8 *)(param_5 + _DAT_11278e2a4));
  dVar2 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  dVar4 = *(double *)(param_5 + lVar1);
  dVar3 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  func_0x00010c19f0e0(dVar2 - dVar4,dVar3,*(undefined8 *)(param_5 + lVar1),
                      *(undefined8 *)(param_5 + lVar1),*(undefined8 *)(param_5 + _DAT_11278e2a8));
  dVar2 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar3 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  dVar4 = *(double *)(param_5 + lVar1);
  func_0x00010c19f0e0(dVar2,dVar3 - dVar4,dVar4,dVar4,*(undefined8 *)(param_5 + _DAT_11278e2b0));
  dVar2 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  dVar4 = *(double *)(param_5 + lVar1);
  dVar3 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  dVar5 = *(double *)(param_5 + lVar1);
  func_0x00010c19f0e0(dVar2 - dVar4,dVar3 - dVar5,dVar5,dVar5,
                      *(undefined8 *)(param_5 + _DAT_11278e2ac));
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_11278e2c4));
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_11278e2c0));
  func_0x00010be87fe0(param_5);
  return;
}



/* Entry: 10b2ad058; end: 10b2ad28f; -[SCRoundedCornerContainerView _updateCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ad058(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [48];
  
  *(double *)(param_2 + _DAT_11278e2b4) = param_1;
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(0,param_1);
  func_0x00010bef6d40(param_1,param_1,param_1,0x400921fb54442d18,0x4012d97c7f3321d2,puVar1,param_3,1
                     );
  func_0x00010bef98c0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),puVar1);
  func_0x00010bf3dc80(puVar1);
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11278e2a4);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
  _CGAffineTransformMakeRotation(auStack_b0,0x3ff921fb54442d18);
  param_1 = -param_1;
  _CGAffineTransformTranslate(auStack_80,0,param_1,auStack_b0);
  func_0x00010bf08a40(puVar1,param_3,auStack_80);
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11278e2a8);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
  _CGAffineTransformMakeRotation(auStack_b0,0x3ff921fb54442d18);
  _CGAffineTransformTranslate(auStack_80,0,param_1,auStack_b0);
  func_0x00010bf08a40(puVar1,param_3,auStack_80);
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11278e2ac);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
  _CGAffineTransformMakeRotation(auStack_b0,0x3ff921fb54442d18);
  _CGAffineTransformTranslate(auStack_80,0,param_1,auStack_b0);
  func_0x00010bf08a40(puVar1,param_3,auStack_80);
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11278e2b0);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
  func_0x00010c1cbe20(param_2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b2ad290; end: 10b2ad353; -[SCRoundedCornerContainerView _setShouldRedrawBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ad290(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11278e2c4;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b52f0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10b2ad354; end: 10b2ad4ef; -[SCRoundedCornerContainerView _redrawBorderIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ad354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = (long)_DAT_11278e298;
  if ((*(byte *)(param_5 + lVar5) & 1) == 0) {
    puVar1 = (undefined8 *)(param_5 + (long)_DAT_11278e29c);
    uVar2 = param_5;
    func_0x00010bf20c00();
    param_2 = puVar1[1];
    param_3 = puVar1[2];
    param_4 = puVar1[3];
    _CGRectEqualToRect(*puVar1);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  *(undefined1 *)(param_5 + lVar5) = 0;
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar5 = (long)_DAT_11278e2c4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bf199e0(puVar3,param_6,*(undefined8 *)(param_5 + (long)_DAT_11278e2a0));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11278e2bc;
  func_0x00010c1bdd00(*(undefined8 *)(param_5 + lVar6));
  func_0x00010bdc0fe0(*(undefined8 *)(param_5 + (long)_DAT_11278e2b8));
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar4);
  uVar7 = *(undefined8 *)(param_5 + lVar6);
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00();
  _objc_release(uVar4);
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc1040();
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar4);
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11278e29c);
  func_0x00010bf20c00(param_5);
  *puVar1 = uVar7;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b2ad4f0; end: 10b2ad4ff; -[SCRoundedCornerContainerView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ad4f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e2c0);
}



/* Entry: 10b2ad500; end: 10b2ad50f; -[SCRoundedCornerContainerView borderWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ad500(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e2bc);
}



/* Entry: 10b2ad510; end: 10b2ad51f; -[SCRoundedCornerContainerView borderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ad510(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e2b8);
}



/* Entry: 10b2ad520; end: 10b2ad52f; -[SCRoundedCornerContainerView cornerColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ad520(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e294);
}



/* Entry: 10b2ad530; end: 10b2ad53f; -[SCRoundedCornerContainerView rectCorner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ad530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e2a0);
}



/* Entry: 10b2ad540; end: 10b2ad54f; -[SCRoundedCornerContainerView cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ad540(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e2b4);
}



/* Entry: 10b2ad550; end: 10b2ad55f; -[SCRoundedCornerContainerView topLeftCornerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ad550(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e2a4);
}



/* Entry: 10b2ad560; end: 10b2ad59f; -[SCRoundedCornerContainerView setTopLeftCornerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ad560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e2a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2ad5a0; end: 10b2ad5af; -[SCRoundedCornerContainerView topRightCornerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ad5a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e2a8);
}



/* Entry: 10b2ad5b0; end: 10b2ad5ef; -[SCRoundedCornerContainerView setTopRightCornerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ad5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e2a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2ad5f0; end: 10b2ad5ff; -[SCRoundedCornerContainerView bottomLeftCornerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ad5f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e2b0);
}



/* Entry: 10b2ad600; end: 10b2ad63f; -[SCRoundedCornerContainerView setBottomLeftCornerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ad600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e2b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2ad640; end: 10b2ad64f; -[SCRoundedCornerContainerView bottomRightCornerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ad640(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e2ac);
}



/* Entry: 10b2ad650; end: 10b2ad68f; -[SCRoundedCornerContainerView setBottomRightCornerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ad650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e2ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2ad690; end: 10b2ad69f; -[SCRoundedCornerContainerView borderShapeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ad690(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e2c4);
}



/* Entry: 10b2ad6a0; end: 10b2ad6df; -[SCRoundedCornerContainerView setBorderShapeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ad6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e2c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2ad6e0; end: 10b2ad77f; -[SCRoundedCornerContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ad6e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e2c4,0);
  _objc_storeStrong(param_1 + _DAT_11278e2ac,0);
  _objc_storeStrong(param_1 + _DAT_11278e2b0,0);
  _objc_storeStrong(param_1 + _DAT_11278e2a8,0);
  _objc_storeStrong(param_1 + _DAT_11278e2a4,0);
  _objc_storeStrong(param_1 + _DAT_11278e294,0);
  _objc_storeStrong(param_1 + _DAT_11278e2b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e2c0,0);
  return;
}



/* Entry: 10b2ad780; end: 10b2ad80f;  */

undefined * FUN_10b2ad780(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = param_1;
  _objc_retain();
  func_0x00010c2745a0(param_3);
  dVar3 = dVar2;
  func_0x00010c274880(param_3);
  dVar4 = dVar3;
  func_0x00010bf20260(param_3);
  dVar5 = dVar4;
  func_0x00010bf20420(param_3);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(0,dVar2);
  func_0x00010bef6d40(dVar2,dVar2,dVar2,0x400921fb54442d18,0x4012d97c7f3321d2,puVar1,param_4,1);
  func_0x00010bef98c0(param_1 - dVar3,0,puVar1);
  func_0x00010bef6d40(param_1 - dVar3,dVar3,dVar3,0x4012d97c7f3321d2,0x401921fb54442d18,puVar1,
                      param_4,1);
  func_0x00010bef98c0(param_1,param_2 - dVar5,puVar1);
  func_0x00010bef6d40(param_1 - dVar5,param_2 - dVar5,dVar5,0x401921fb54442d18,0x401f6a7a2955385e,
                      puVar1,param_4,1);
  func_0x00010bef98c0(dVar4,param_2,puVar1);
  func_0x00010bef6d40(dVar4,param_2 - dVar4,dVar4,0x401f6a7a2955385e,0x400921fb54442d18,puVar1,
                      param_4,1);
  func_0x00010bef98c0(0,dVar2,puVar1);
  func_0x00010bf3dc80(puVar1);
  return puVar1;
}



/* Entry: 10b2ad810; end: 10b2ad983;  */

undefined *
FUN_10b2ad810(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(0,param_1);
  func_0x00010bef6d40(param_1,param_1,param_1,0x400921fb54442d18,0x4012d97c7f3321d2,puVar1,param_8,1
                     );
  func_0x00010bef98c0(param_5 - param_2,0,puVar1);
  func_0x00010bef6d40(param_5 - param_2,param_2,param_2,0x4012d97c7f3321d2,0x401921fb54442d18,puVar1
                      ,param_8,1);
  func_0x00010bef98c0(param_5,param_6 - param_4,puVar1);
  func_0x00010bef6d40(param_5 - param_4,param_6 - param_4,param_4,0x401921fb54442d18,
                      0x401f6a7a2955385e,puVar1,param_8,1);
  func_0x00010bef98c0(param_3,param_6,puVar1);
  func_0x00010bef6d40(param_3,param_6 - param_3,param_3,0x401f6a7a2955385e,0x400921fb54442d18,puVar1
                      ,param_8,1);
  func_0x00010bef98c0(0,param_1,puVar1);
  func_0x00010bf3dc80(puVar1);
  return puVar1;
}



/* Entry: 10b2ad984; end: 10b2adcaf; -[SCActionSheetCoordinator initWithActions:orientationMask:delegate:onDismiss:] */

undefined8 *
FUN_10b2ad984(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR_PTR_112706240;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292ac0();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
    func_0x00010beff3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar6);
    uVar6 = param_6;
    _objc_retainBlock();
    uVar7 = puVar1[4];
    puVar1[4] = uVar6;
    _objc_release(uVar7);
    _objc_storeWeak(puVar1 + 5,param_5);
    _objc_initWeak(auStack_90,puVar1);
    for (uVar8 = 0; uVar3 = param_3, func_0x00010bf529e0(),
        puVar2 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80, uVar8 < uVar3; uVar8 = uVar8 + 1) {
      uVar3 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
      uVar4 = uVar3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_10b2adcb0;
      puStack_a8 = &UNK_110cd15c0;
      _objc_copyWeak(auStack_98,auStack_90);
      _objc_retain(uVar3);
      uStack_a0 = uVar3;
      func_0x00010beef340(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010bef6960(puVar1[1]);
      _objc_release(puVar2);
      _objc_release(uStack_a0);
      _objc_destroyWeak(auStack_98);
      _objc_release(uVar3);
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110daf8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c8,auStack_90);
    _objc_retain(param_6);
    func_0x00010beef340(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    func_0x00010bef6960(puVar1[1]);
    _objc_release(puVar2);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b2adcb0; end: 10b2add17;  */

void FUN_10b2adcb0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2add18; end: 10b2add1f; -[SCActionSheetCoordinator initWithActions:orientationMask:delegate:] */

void FUN_10b2add18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff0b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithActions_orientationMask__1125d9ca8);
  return;
}



/* Entry: 10b2add20; end: 10b2add2b; -[SCActionSheetCoordinator initWithActions:orientationMask:] */

void FUN_10b2add20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff0b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithActions_orientationMask__1125d9ca8,param_3,param_4,0,0);
  return;
}



/* Entry: 10b2add2c; end: 10b2addcb; -[SCActionSheetCoordinator present] */

void FUN_10b2add2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beef0c0();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  uVar3 = 1;
  FUN_10b2d0d24();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1417c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b2addcc; end: 10b2ade33; -[SCActionSheetCoordinator dismissWithAnimation:] */

void FUN_10b2addcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beef0e0();
  _objc_release(lVar1);
  func_0x00010bf84b00(*(undefined8 *)(param_1 + 8),param_2,param_3,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2ade34; end: 10b2ade93; -[SCActionSheetCoordinator _performActionItem:] */

void FUN_10b2ade34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beef0e0();
  _objc_release(lVar1);
  func_0x00010c0f7fa0(param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2ade94; end: 10b2adf0b; -[SCActionSheetCoordinator _performCancelActionWithDismissBlock:] */

void FUN_10b2ade94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beef0e0();
  _objc_release(lVar1);
  func_0x00010bf84b00(*(undefined8 *)(param_1 + 8),param_2,1,0);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2adf0c; end: 10b2adf5b; -[SCActionSheetCoordinator .cxx_destruct] */

void FUN_10b2adf0c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2adf5c; end: 10b2ae003; -[SCActionSheetItem initWithName:block:] */

undefined1 *
FUN_10b2adf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706248;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2ae004; end: 10b2ae033; -[SCActionSheetItem perform] */

void FUN_10b2ae004(long param_1)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2ae034; end: 10b2ae03b; -[SCActionSheetItem name] */

undefined8 FUN_10b2ae034(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b2ae03c; end: 10b2ae043; -[SCActionSheetItem block] */

undefined8 FUN_10b2ae03c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b2ae044; end: 10b2ae073; -[SCActionSheetItem .cxx_destruct] */

void FUN_10b2ae044(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2ae074; end: 10b2ae0df; -[SCBareboneNavigationBar isKindOfClass:] */

void FUN_10b2ae074(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationBar_1126e0110);
  uVar1 = param_3;
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    puStack_28 = PTR_PTR_112706250;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_isKindOfClass__1125fb1d0,param_3);
  }
  return;
}



/* Entry: 10b2ae0e0; end: 10b2ae14b; +[SCBareboneNavigationBar isSubclassOfClass:] */

void FUN_10b2ae0e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationBar_1126e0110);
  uVar1 = param_3;
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    puStack_28 = PTR_PTR_112706258;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_isSubclassOfClass__1125fda30,param_3);
  }
  return;
}



/* Entry: 10b2ae14c; end: 10b2ae177; -[SCBareboneNavigationBar methodSignatureForSelector:] */

void FUN_10b2ae14c(void)

{
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationBar_1126e0110);
                    /* WARNING: Could not recover jumptable at 0x00010c067bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b2ae178; end: 10b2ae17b; -[SCBareboneNavigationBar forwardInvocation:] */

void FUN_10b2ae178(void)

{
  return;
}


