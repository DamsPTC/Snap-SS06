/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2bd3a8; end: 10b2bd54f; -[SCNoHitClippingScrollView hitTest:withEvent:] */

void FUN_10b2bd3a8(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  double dStack_190;
  undefined8 uStack_188;
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
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_5;
  dVar10 = param_1;
  uVar12 = param_2;
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf3d8e0();
  if ((((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c074c20(), (uVar1 & 1) == 0)) &&
     (func_0x00010bf01b40(param_3), dVar10 != 0.0)) {
    dVar10 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uVar1 = param_3;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bf52a60(uVar2,param_4,&uStack_130,auStack_e8,0x10);
    if (uVar1 != 0) {
      lVar7 = *plStack_120;
      do {
        uVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(uVar2);
          }
          lVar6 = *(long *)(lStack_128 + uVar8 * 8);
          dVar10 = param_1;
          uVar12 = param_2;
          func_0x00010bf51200(param_1,param_2,lVar6,param_4,param_3);
          puVar5 = (undefined8 *)param_5;
          func_0x00010bfe3a40(lVar6,param_4,param_5);
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) goto LAB_10b2bd540;
          uVar8 = uVar8 + 1;
        } while (uVar1 != uVar8);
        uVar1 = uVar2;
        puVar5 = &uStack_130;
        func_0x00010bf52a60(uVar2,param_4,&uStack_130,auStack_e8,0x10);
      } while (uVar1 != 0);
    }
    lVar6 = 0;
LAB_10b2bd540:
    _objc_release(uVar2);
  }
  else {
    puVar5 = (undefined8 *)puVar3;
    lVar6 = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    dVar11 = dVar10;
    dStack_190 = param_1;
    uStack_188 = param_2;
    _objc_retain(puVar5);
    puVar3 = param_5;
    func_0x00010bf3d8e0();
    if (((((ulong)puVar3 & 1) == 0) &&
        (puVar3 = param_5, func_0x00010c074c20(), ((ulong)puVar3 & 1) == 0)) &&
       (func_0x00010bf01b40(param_5), dVar11 != 0.0)) {
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      puVar3 = param_5;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c140180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x00010bf52a60(puVar4,param_4,&uStack_260,auStack_218,0x10);
      if (puVar3 != (undefined1 *)0x0) {
        lVar7 = *plStack_250;
        do {
          puVar9 = (undefined1 *)0x0;
          do {
            if (*plStack_250 != lVar7) {
              _objc_enumerationMutation(puVar4);
            }
            lVar6 = *(long *)(lStack_258 + (long)puVar9 * 8);
            func_0x00010bf51200(dVar10,uVar12,lVar6,param_4,param_5);
            func_0x00010bfe3a40(lVar6,param_4,puVar5);
            _objc_retainAutoreleasedReturnValue();
            if (lVar6 != 0) goto LAB_10b2bd6e8;
            puVar9 = puVar9 + 1;
          } while (puVar3 != puVar9);
          puVar3 = puVar4;
          func_0x00010bf52a60(puVar4,param_4,&uStack_260,auStack_218,0x10);
        } while (puVar3 != (undefined1 *)0x0);
      }
      lVar6 = 0;
LAB_10b2bd6e8:
      _objc_release(puVar4);
    }
    else {
      lVar6 = 0;
    }
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10b2bd550; end: 10b2bd6f7; -[SCNoHitClippingView hitTest:withEvent:] */

void FUN_10b2bd550(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
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
  dVar6 = param_1;
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf3d8e0();
  if ((((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c074c20(), (uVar1 & 1) == 0)) &&
     (func_0x00010bf01b40(param_3), dVar6 != 0.0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uVar1 = param_3;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bf52a60(uVar2,param_4,&uStack_130,auStack_e8,0x10);
    if (uVar1 != 0) {
      lVar4 = *plStack_120;
      do {
        uVar5 = 0;
        do {
          if (*plStack_120 != lVar4) {
            _objc_enumerationMutation(uVar2);
          }
          lVar3 = *(long *)(lStack_128 + uVar5 * 8);
          func_0x00010bf51200(param_1,param_2,lVar3,param_4,param_3);
          func_0x00010bfe3a40(lVar3,param_4,param_5);
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) goto LAB_10b2bd6e8;
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
        uVar1 = uVar2;
        func_0x00010bf52a60(uVar2,param_4,&uStack_130,auStack_e8,0x10);
      } while (uVar1 != 0);
    }
    lVar3 = 0;
LAB_10b2bd6e8:
    _objc_release(uVar2);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 10b2bd6f8; end: 10b2bd703; +[SCPieView layerClass] */

void FUN_10b2bd6f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 10b2bd704; end: 10b2bd797; -[SCPieView tintColorDidChange] */

void FUN_10b2bd704(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1127062e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_tintColorDidChange_11252d268);
  uVar1 = param_1;
  func_0x00010c270f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2bd798; end: 10b2bd79b; -[SCPieView shapeLayer] */

void FUN_10b2bd798(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 10b2bd79c; end: 10b2bd8e3; -[SCPieView setFillPortion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bd79c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  *(double *)(param_2 + _DAT_11278e494) = param_1;
  param_1 = param_1 * -2.0;
  dVar3 = param_1 * 3.141592653589793;
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar4 = param_1 * 0.5;
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  dVar2 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  func_0x00010c0d18c0(param_1,dVar2,puVar1);
  func_0x00010bef6d40(param_1,dVar2,dVar4,0x4012d97c7f3321d2,dVar3 + 4.71238898038469,puVar1,param_3
                      ,0);
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  dVar3 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  func_0x00010bef98c0(param_1,dVar3,puVar1);
  func_0x00010bf3dc80(puVar1);
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c22a660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2bd8e4; end: 10b2bd8f3; -[SCPieView fillPortion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2bd8e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e494);
}



/* Entry: 10b2bd8f4; end: 10b2bd9b3;  */

double FUN_10b2bd8f4(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  return (double)(float)(int)(param_1 * dVar2) / dVar2;
}



/* Entry: 10b2bd9b4; end: 10b2bda27;  */

double FUN_10b2bd9b4(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  return (double)(float)(int)(param_1 * dVar2) / dVar2;
}



/* Entry: 10b2bda28; end: 10b2bda9f; -[SCPlaceholderTextField initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b2bda28(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127062e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e498);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e498) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2bdaa0; end: 10b2bdaab; -[SCPlaceholderTextField textRectForBounds:] */

void FUN_10b2bdaa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectInset_1103475b0)();
  return;
}



/* Entry: 10b2bdaac; end: 10b2bdaaf; -[SCPlaceholderTextField editingRectForBounds:] */

void FUN_10b2bdaac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_textRectForBounds__112678bb8);
  return;
}



/* Entry: 10b2bdab0; end: 10b2bdc53; -[SCPlaceholderTextField drawPlaceholderInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bdab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  
  lVar5 = (long)_DAT_11278e498;
  func_0x00010c19bbe0(*(undefined8 *)(param_5 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_5;
  func_0x00010c26b7a0(param_5);
  func_0x00010bf0dd60(puVar3,param_6,puVar1,4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar4,param_6,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar4,param_6,*(undefined8 *)(param_5 + lVar5),
                      *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8);
  lVar2 = param_5;
  func_0x00010c0fd720(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar7 = param_4;
  func_0x00010c23d680(param_3,param_4);
  _objc_release(lVar2);
  uVar6 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010c0fd720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89960(uVar6,(param_4 - dVar7) * 0.5,param_1,dVar7);
  _objc_release(param_5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2bdc54; end: 10b2bdc63; -[SCPlaceholderTextField placeholderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2bdc54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e498);
}



/* Entry: 10b2bdc64; end: 10b2bdca3; -[SCPlaceholderTextField setPlaceholderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bdc64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e498;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bdca4; end: 10b2bdcb7; -[SCPlaceholderTextField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bdca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e498,0);
  return;
}



/* Entry: 10b2bdcb8; end: 10b2bdccb; -[SCPlaceholderTextView init] */

void FUN_10b2bdcb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),param_1,
             PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 10b2bdccc; end: 10b2bdcd3; -[SCPlaceholderTextView initWithFrame:] */

void FUN_10b2bdccc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFrame_textContainer__1125e2dd8,0);
  return;
}



/* Entry: 10b2bdcd4; end: 10b2bdcdb; -[SCPlaceholderTextView initWithFrame:textContainer:] */

void FUN_10b2bdcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c015010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFrame_textContainer_past_1125e2de0,param_3,0);
  return;
}



/* Entry: 10b2bdcdc; end: 10b2bde67; -[SCPlaceholderTextView initWithFrame:textContainer:pasteMediaDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b2bdcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127062f0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_textContainer__1125e2dd8,param_7);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c2131e0(0x4020000000000000,0x4024000000000000,0x4020000000000000,0x4024000000000000,
                        puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11278e4ac),param_8);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278e4b0) = 1;
    func_0x00010bfef1a0(puVar1);
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
  }
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2bde68; end: 10b2bdfaf; -[SCPlaceholderTextView initPlaceholderLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bde68(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  func_0x00010c013de0(0x4024000000000000,0x4020000000000000,param_1 + -20.0,0);
  lVar3 = (long)_DAT_11278e4b4;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1bdb00(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c1cfce0(*(undefined8 *)(param_2 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar3));
  _objc_release(puVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c213040(*(undefined8 *)(param_2 + lVar3));
  func_0x00010befbb60(param_2);
  func_0x00010c15cda0(param_2);
  puVar1 = PTR_PTR_1126b51f8;
  func_0x00010bfce120(PTR_PTR_1126b51f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dca60(param_2);
  _objc_release(puVar1);
  lVar3 = param_2;
  func_0x00010bfb3a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dcaa0(param_2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1dc9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setPlaceholder__112654c98,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10b2bdfb0; end: 10b2be01f; -[SCPlaceholderTextView setFont:] */

void FUN_10b2bdfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setFont__112645340;
  puStack_38 = PTR_PTR_1127062f0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x00010c19e4a0(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2be020; end: 10b2be16f; -[SCPlaceholderTextView resetTypingAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2be020(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010bfb3ba0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c26b920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  if ((puVar2 != (undefined *)0x0) && (puVar3 != (undefined *)0x0)) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar1;
    func_0x00010c21ade0(param_1);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(puVar2 + _DAT_11278e4b8);
  *(undefined **)(puVar2 + _DAT_11278e4b8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar5);
  puVar1 = puVar2;
  func_0x00010c0fda00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010c233de0(puVar2);
  puVar1 = puVar2;
  func_0x00010c0fda00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b2be170; end: 10b2be21f; -[SCPlaceholderTextView setPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2be170(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278e4b8);
  *(undefined8 *)(param_1 + _DAT_11278e4b8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010c0fda00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010c233de0(param_1);
  lVar1 = param_1;
  func_0x00010c0fda00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b2be220; end: 10b2be22f; -[SCPlaceholderTextView setIsRTL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2be220(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e49c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b2be230; end: 10b2be2a7; -[SCPlaceholderTextView setPlaceholderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2be230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e4bc);
  *(undefined8 *)(param_1 + _DAT_11278e4bc) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0fda00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2be2a8; end: 10b2be31f; -[SCPlaceholderTextView setPlaceholderFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2be2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e4c0);
  *(undefined8 *)(param_1 + _DAT_11278e4c0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0fda00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2be320; end: 10b2be357; -[SCPlaceholderTextView setPlaceholderNumberOfLines:] */

void FUN_10b2be320(undefined8 param_1)

{
  func_0x00010c0fda00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2be358; end: 10b2be40f; -[SCPlaceholderTextView setTextContainerInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2be358(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  double dVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1127062f0;
  dVar1 = param_1;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_setTextContainerInset__1126626a0);
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar1 = dVar1 - param_2;
  param_4 = dVar1 - param_4;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11278e4b4));
  _CGRectGetHeight();
  func_0x00010c0fda00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_2,param_1,param_4,dVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 10b2be410; end: 10b2be487; -[SCPlaceholderTextView shouldShowPlaceholderLabel] */

bool FUN_10b2be410(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    func_0x00010c0fd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c08fa60();
    bVar1 = lVar3 != 0;
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10b2be488; end: 10b2be79b; -[SCPlaceholderTextView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2be488(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  ulong uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1127062f0;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_5;
  func_0x00010bf01b20();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf4cdc0(param_5);
    param_2 = 0.0;
    func_0x00010c1822e0(param_5);
  }
  uVar1 = param_5;
  func_0x00010c0fd720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = param_5;
    func_0x00010bf8d060();
    func_0x00010c26ba40(param_5);
    dVar10 = param_2;
    if (uVar1 != 0) {
      dVar10 = param_4;
    }
    uVar1 = param_5;
    func_0x00010bf8d060();
    func_0x00010c26ba40(param_5);
    if (uVar1 != 0) {
      param_4 = param_2;
    }
    func_0x00010befd360(param_5);
    dVar10 = dVar10 + param_1;
    func_0x00010c26ba40(param_5);
    func_0x00010bf20c00(param_5);
    param_3 = param_3 - (param_4 + dVar10);
    uVar1 = param_5;
    func_0x00010c0fda00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0;
    dVar6 = dVar10;
    func_0x00010c19f0e0(dVar10,param_1,param_3,0);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0fda00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d620();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c07bac0();
    if ((int)uVar1 != 0) {
      lVar5 = (long)_DAT_11278e4b4;
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
      dVar7 = dVar6;
      func_0x00010bfb68e0(param_5);
      _CGRectGetWidth();
      dVar8 = dVar7;
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
      _CGRectGetWidth();
      func_0x00010bc851d4(dVar6,param_1,param_3,uVar9,(dVar7 - dVar8) - dVar10);
      uVar1 = param_5;
      func_0x00010c0fda00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar6,param_1,param_3,uVar9);
      _objc_release(uVar1);
    }
    uVar1 = param_5;
    func_0x00010c0fda00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    uVar2 = param_5;
    func_0x00010c26ba00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar10 = dVar6;
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (dVar6 < param_3) {
      uVar1 = param_5;
      func_0x00010c0fda00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      uVar2 = param_5;
      dVar6 = dVar10;
      func_0x00010c0fda00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      uVar3 = param_5;
      func_0x00010c26ba00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      uVar4 = param_5;
      func_0x00010c0fda00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      func_0x00010c0fda00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar10,param_1,dVar6,uVar9);
      _objc_release(param_5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  return;
}



/* Entry: 10b2be79c; end: 10b2be80b; -[SCPlaceholderTextView setText:] */

void FUN_10b2be79c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127062f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setText__1126625f0);
  func_0x00010c233de0(param_1);
  func_0x00010c0fda00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
  return;
}



/* Entry: 10b2be80c; end: 10b2be84f; -[SCPlaceholderTextView textChanged:] */

void FUN_10b2be80c(undefined8 param_1)

{
  func_0x00010c233de0();
  func_0x00010c0fda00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2be850; end: 10b2be8bf; -[SCPlaceholderTextView setAttributedText:] */

void FUN_10b2be850(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127062f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setAttributedText__1126387e8);
  func_0x00010c233de0(param_1);
  func_0x00010c0fda00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
  return;
}



/* Entry: 10b2be8c0; end: 10b2be953; -[SCPlaceholderTextView becomeFirstResponder] */

void FUN_10b2be8c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c29fa80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c29fa80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0799c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      return;
    }
  }
  puStack_38 = PTR_PTR_1127062f0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 10b2be954; end: 10b2be9cf; -[SCPlaceholderTextView resignFirstResponderIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2be954(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = (long)_DAT_11278e4a0;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10b2be9d0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 10b2be9d0; end: 10b2be9d7;  */

void FUN_10b2be9d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 10b2be9d8; end: 10b2bea67; -[SCPlaceholderTextView resignFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2be9d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x2) {
    *(undefined1 *)(param_1 + _DAT_11278e4a0) = 1;
  }
  else {
    puStack_38 = PTR_PTR_1127062f0;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_resignFirstResponder_11262c258);
  }
  return;
}



/* Entry: 10b2bea68; end: 10b2beb4b; -[SCPlaceholderTextView canPerformAction:withSender:] */

undefined1 * FUN_10b2bea68(ulong param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_4);
  func_0x00010c159e80(param_1);
  if (((param_2 == 0) && (param_3 == PTR_s_selectAll__112633bd0)) ||
     ((param_3 == PTR_s_paste__11252ff78 &&
      ((uVar1 = param_1, func_0x00010bf2d000(), (uVar1 & 1) != 0 ||
       (uVar1 = param_1, func_0x00010bf2cfe0(), (uVar1 & 1) != 0)))))) {
    puVar2 = (ulong *)0x1;
  }
  else if (param_3 == PTR_s_makeTextWritingDirectionLeftToRi_1125311e8 ||
           param_3 == PTR_s_makeTextWritingDirectionRightToL_1125311f0) {
    puVar2 = (ulong *)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1127062f0;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_canPerformAction_withSender__1125311f8,param_3,param_4);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 10b2beb4c; end: 10b2bebb7; -[SCPlaceholderTextView canPasteImage] */

bool FUN_10b2beb4c(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfd7de0();
  if ((int)puVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0f56e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != 0;
    _objc_release();
  }
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 10b2bebb8; end: 10b2bebd3; -[SCPlaceholderTextView canPasteText] */

bool FUN_10b2bebb8(undefined8 param_1,long param_2)

{
  func_0x00010c159e80();
  return param_2 == 0;
}



/* Entry: 10b2bebd4; end: 10b2bed0b; -[SCPlaceholderTextView paste:] */

void FUN_10b2bebd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf63b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be372c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    if (lVar3 != 0) {
      lVar4 = param_1;
      func_0x00010c0f56e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        func_0x00010c0f56e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f56c0();
        goto LAB_10b2bec68;
      }
    }
    puStack_48 = PTR_PTR_1127062f0;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_paste__11252ff78,param_3);
  }
  else {
    func_0x00010c0f56e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f56a0();
LAB_10b2bec68:
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2bed0c; end: 10b2bedb7; -[SCPlaceholderTextView _imageFromPasteboard:] */

void FUN_10b2bed0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f5740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf63b40(param_3,param_2,*(undefined8 *)PTR__kUTTypeImage_11034b1d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b2bedb8; end: 10b2bee13; -[SCPlaceholderTextView toggleItalics:] */

void FUN_10b2bedb8(undefined8 param_1)

{
  func_0x00010bfe2360();
  func_0x00010c159e80(param_1);
  func_0x00010c2729c0(param_1);
  func_0x00010c1fb500(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2386b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showMenuItemsAfterToggle_11266bbd0);
  return;
}



/* Entry: 10b2bee14; end: 10b2bee6f; -[SCPlaceholderTextView toggleBoldface:] */

void FUN_10b2bee14(undefined8 param_1)

{
  func_0x00010bfe2360();
  func_0x00010c159e80(param_1);
  func_0x00010c272640(param_1);
  func_0x00010c1fb500(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2386b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showMenuItemsAfterToggle_11266bbd0);
  return;
}



/* Entry: 10b2bee70; end: 10b2beed3; -[SCPlaceholderTextView toggleUnderline:] */

void FUN_10b2bee70(undefined8 param_1)

{
  func_0x00010bfe2360();
  func_0x00010c159e80(param_1);
  func_0x00010c159e80(param_1);
  func_0x00010c272d00(param_1);
  func_0x00010c1fb500(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2386b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showMenuItemsAfterToggle_11266bbd0);
  return;
}



/* Entry: 10b2beed4; end: 10b2bef13; -[SCPlaceholderTextView hideMenuItemsBeforeToggle] */

void FUN_10b2beed4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIMenuController_1126cb8e8;
  func_0x00010c22bc60(PTR__OBJC_CLASS___UIMenuController_1126cb8e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2bef14; end: 10b2bf033; -[SCPlaceholderTextView showMenuItemsAfterToggle] */

void FUN_10b2bef14(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  
  uVar1 = param_5;
  func_0x00010c15a1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf323a0(param_5,param_6,uVar2);
  dVar4 = param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c15a1e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf323a0(param_5,param_6,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIMenuController_1126cb8e8;
  func_0x00010c22bc60(PTR__OBJC_CLASS___UIMenuController_1126cb8e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2124c0(param_1,param_2,dVar4 - param_1,param_4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIMenuController_1126cb8e8;
  func_0x00010c22bc60(PTR__OBJC_CLASS___UIMenuController_1126cb8e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b2bf034; end: 10b2bf197; -[SCPlaceholderTextView toggleItalicsForRange:] */

void FUN_10b2bf034(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    uVar3 = param_1;
    func_0x00010c27e220(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0d3c80();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010bfb3a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfb3ac0(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1,param_2,uVar2,*(undefined8 *)PTR__NSFontAttributeName_1103457f0);
    _objc_release(uVar2);
    _objc_release(uVar3);
    func_0x00010c21ade0(param_1,param_2,uVar1);
  }
  else {
    uVar3 = param_1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0d3c80();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10b2bf198;
    puStack_58 = &UNK_11092b278;
    uStack_50 = param_1;
    uStack_48 = uVar1;
    _objc_retain(uVar1);
    func_0x00010bf97b00(uVar1,param_2,uVar3,param_3,param_4,0,&puStack_70);
    func_0x00010c16b720(param_1,param_2,uVar1);
    _objc_release(uStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bf198; end: 10b2bf203;  */

void FUN_10b2bf198(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfb3ac0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bef6f20(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2bf204; end: 10b2bf367; -[SCPlaceholderTextView toggleBoldfaceForRange:] */

void FUN_10b2bf204(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    uVar3 = param_1;
    func_0x00010c27e220(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0d3c80();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010bfb3a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfb3aa0(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1,param_2,uVar2,*(undefined8 *)PTR__NSFontAttributeName_1103457f0);
    _objc_release(uVar2);
    _objc_release(uVar3);
    func_0x00010c21ade0(param_1,param_2,uVar1);
  }
  else {
    uVar3 = param_1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0d3c80();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10b2bf368;
    puStack_58 = &UNK_11092b278;
    uStack_50 = param_1;
    uStack_48 = uVar1;
    _objc_retain(uVar1);
    func_0x00010bf97b00(uVar1,param_2,uVar3,param_3,param_4,0,&puStack_70);
    func_0x00010c16b720(param_1,param_2,uVar1);
    _objc_release(uStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bf368; end: 10b2bf3d3;  */

void FUN_10b2bf368(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfb3aa0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bef6f20(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2bf3d4; end: 10b2bf5d7; -[SCPlaceholderTextView toggleUnderlineForRange:] */

void FUN_10b2bf3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    uVar5 = param_1;
    func_0x00010c27e220(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c0d3c80();
    _objc_release(uVar5);
    uVar4 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_110345880;
    uVar5 = uVar1;
    func_0x00010c0e00e0(uVar1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c067ec0();
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)uVar2 == 0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1,param_2,puVar3,uVar4);
    _objc_release(puVar3);
    func_0x00010c21ade0(param_1,param_2,uVar1);
  }
  else {
    uVar5 = param_1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c0d3c80();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_110345880;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x10b2bf550;
    puStack_50 = &UNK_11084b440;
    uStack_48 = uVar1;
    _objc_retain(uVar1);
    func_0x00010bf97b00(uVar1,param_2,uVar5,param_3,param_4,0,&puStack_68);
    func_0x00010c16b720(param_1,param_2,uVar1);
    _objc_release(uStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bf5d8; end: 10b2bf65b; -[SCPlaceholderTextView fontAfterToggleItalicsForFont:] */

void FUN_10b2bf5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bfb3ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c265a80();
  uVar2 = param_3;
  func_0x00010bfb3d60(param_3,param_2,(uint)uVar1 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb4160(0,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b2bf65c; end: 10b2bf72f; -[SCPlaceholderTextView fontAfterToggleBoldfaceForFont:] */

void FUN_10b2bf65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010bfb3ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c265a80();
  uVar2 = param_3;
  func_0x00010c265a80(param_3);
  uVar3 = param_3;
  if (((uint)uVar1 >> 1 & 1) != 0) {
    func_0x00010bfb3ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfb3ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_1);
  }
  uVar1 = uVar3;
  func_0x00010bfb3d60(uVar3,param_2,(uint)uVar2 ^ 2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb4160(0,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b2bf730; end: 10b2bf747; +[SCPlaceholderTextView grayPlaceholderTextColor] */

void FUN_10b2bf730(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_colorWithWhite_alpha__1125adf48);
  return;
}



/* Entry: 10b2bf748; end: 10b2bf757; -[SCPlaceholderTextView allowsVerticalScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2bf748(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e4b0);
}



/* Entry: 10b2bf758; end: 10b2bf767; -[SCPlaceholderTextView setAllowsVerticalScrolling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bf758(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e4b0) = param_3;
  return;
}



/* Entry: 10b2bf768; end: 10b2bf777; -[SCPlaceholderTextView placeholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2bf768(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e4b8);
}



/* Entry: 10b2bf778; end: 10b2bf787; -[SCPlaceholderTextView placeholderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2bf778(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e4bc);
}



/* Entry: 10b2bf788; end: 10b2bf797; -[SCPlaceholderTextView placeholderFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2bf788(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e4c0);
}



/* Entry: 10b2bf798; end: 10b2bf7a7; -[SCPlaceholderTextView placeholderLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2bf798(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e4b4);
}



/* Entry: 10b2bf7a8; end: 10b2bf7e7; -[SCPlaceholderTextView setPlaceholderLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bf7a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e4b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bf7e8; end: 10b2bf7f7; -[SCPlaceholderTextView isRTL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2bf7e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e49c);
}



/* Entry: 10b2bf7f8; end: 10b2bf817; -[SCPlaceholderTextView pasteMediaDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bf7f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278e4ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2bf818; end: 10b2bf82b; -[SCPlaceholderTextView setPasteMediaDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bf818(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278e4ac,param_3);
  return;
}



/* Entry: 10b2bf82c; end: 10b2bf84b; -[SCPlaceholderTextView visibilityDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bf82c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278e4c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2bf84c; end: 10b2bf85f; -[SCPlaceholderTextView setVisibilityDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bf84c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278e4c4,param_3);
  return;
}



/* Entry: 10b2bf860; end: 10b2bf86f; -[SCPlaceholderTextView additionalPlaceholderLeadingHorizontalInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2bf860(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e4a4);
}



/* Entry: 10b2bf870; end: 10b2bf87f; -[SCPlaceholderTextView setAdditionalPlaceholderLeadingHorizontalInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bf870(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e4a4) = param_1;
  return;
}



/* Entry: 10b2bf880; end: 10b2bf88f; -[SCPlaceholderTextView fontBeforeToggle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2bf880(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e4c8);
}



/* Entry: 10b2bf890; end: 10b2bf8cf; -[SCPlaceholderTextView setFontBeforeToggle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bf890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e4c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bf8d0; end: 10b2bf957; -[SCPlaceholderTextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2bf8d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e4c8,0);
  _objc_destroyWeak(param_1 + _DAT_11278e4c4);
  _objc_destroyWeak(param_1 + _DAT_11278e4ac);
  _objc_storeStrong(param_1 + _DAT_11278e4b4,0);
  _objc_storeStrong(param_1 + _DAT_11278e4c0,0);
  _objc_storeStrong(param_1 + _DAT_11278e4bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e4b8,0);
  return;
}



/* Entry: 10b2bf958; end: 10b2bfb8f; -[SCPreviewTooltipBalloonTriangleView initWithTrianglePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b2bf958(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  puStack_58 = PTR_PTR_1127062f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    iVar1 = _DAT_11278e4cc;
    if (param_3 - 7U < 2) {
      ((undefined8 *)((long)puVar3 + (long)_DAT_11278e4cc))[1] = 0x403e000000000000;
      *(undefined8 *)((long)puVar3 + (long)_DAT_11278e4cc) = 0x4020000000000000;
      uVar9 = 0x4020000000000000;
      if (param_3 != 7) {
        uVar9 = 0;
      }
      uVar12 = 0;
      if (param_3 != 7) {
        uVar12 = 0x4020000000000000;
      }
      func_0x00010c0d18c0(uVar9,0,puVar4);
      func_0x00010bef7ba0(uVar12,0x402e000000000000,uVar9,0x4020000000000000,uVar12,
                          0x4028000000000000,puVar4);
      uVar8 = 0x403e000000000000;
      uVar13 = 0x4032000000000000;
      uVar10 = uVar9;
      uVar11 = 0x4036000000000000;
    }
    else {
      ((undefined8 *)((long)puVar3 + (long)_DAT_11278e4cc))[1] = 0x4020000000000000;
      *(undefined8 *)((long)puVar3 + (long)_DAT_11278e4cc) = 0x403e000000000000;
      bVar2 = 3 < param_3 - 3U;
      uVar8 = 0;
      if (bVar2) {
        uVar8 = 0x4020000000000000;
      }
      uVar13 = 0x4020000000000000;
      if (bVar2) {
        uVar13 = 0;
      }
      func_0x00010c0d18c0(0,uVar8,puVar4);
      func_0x00010bef7ba0(0x402e000000000000,uVar13,0x4020000000000000,uVar8,0x4028000000000000,
                          uVar13,puVar4);
      uVar9 = 0x403e000000000000;
      uVar12 = 0x4032000000000000;
      uVar10 = 0x4036000000000000;
      uVar11 = uVar8;
    }
    func_0x00010bef7ba0(uVar9,uVar8,uVar12,uVar13,uVar10,uVar11,puVar4);
    func_0x00010bf3dc80(puVar4);
    func_0x000107c308a4(*(undefined8 *)((long)puVar3 + (long)iVar1),
                        ((undefined8 *)((long)puVar3 + (long)iVar1))[1]);
    func_0x00010c19f0e0(puVar3);
    puVar5 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease(puVar4);
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar5);
    puVar6 = (undefined1 *)puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar6);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10b2bfb90; end: 10b2bfba3; -[SCPreviewTooltipBalloonTriangleView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b2bfb90(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11278e4cc);
}



/* Entry: 10b2bfba4; end: 10b2bff6b; -[SCPreviewTooltipBalloon initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b2bfba4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_112706300;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4024000000000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_11278e4d0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e4d4) = 0x4022000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e4d8) = 0x4022000000000000;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c21a1e0(0,puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 10b2bff6c; end: 10b2c000f; -[SCPreviewTooltipBalloon layoutSubviews] */

void FUN_10b2bff6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706300;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_1);
  func_0x00010bf199a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b2c0010; end: 10b2c001f; -[SCPreviewTooltipBalloon text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c0010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4d0),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b2c0020; end: 10b2c0057; -[SCPreviewTooltipBalloon setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c0020(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278e4d0;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 10b2c0058; end: 10b2c0067; -[SCPreviewTooltipBalloon attributedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c0058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4d0),PTR_s_attributedText_1125a12f8);
  return;
}



/* Entry: 10b2c0068; end: 10b2c009f; -[SCPreviewTooltipBalloon setAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c0068(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278e4d0;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 10b2c00a0; end: 10b2c00af; -[SCPreviewTooltipBalloon textNumberOfLines] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c00a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0def30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4d0),PTR_s_numberOfLines_1126155e0);
  return;
}



/* Entry: 10b2c00b0; end: 10b2c00bf; -[SCPreviewTooltipBalloon setTextNumberOfLines:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c00b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cfcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4d0),PTR_s_setNumberOfLines__112651960);
  return;
}



/* Entry: 10b2c00c0; end: 10b2c027b; -[SCPreviewTooltipBalloon setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c00c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11278e4dc;
  if (*(long *)(param_1 + lVar2) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4014000000000000);
  _objc_release(uVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar2));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10b2c01b4;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar2),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c069fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2c027c; end: 10b2c02eb; -[SCPreviewTooltipBalloon setBackgroundColor:] */

void FUN_10b2c027c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_112706300;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x00010c21a180(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2c02ec; end: 10b2c02fb; -[SCPreviewTooltipBalloon textColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c02ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4d0),PTR_s_textColor_112678870);
  return;
}



/* Entry: 10b2c02fc; end: 10b2c030b; -[SCPreviewTooltipBalloon setTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c02fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4d0),PTR_s_setTextColor__112662688);
  return;
}



/* Entry: 10b2c030c; end: 10b2c031b; -[SCPreviewTooltipBalloon triangleColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c030c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf13d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4e0),PTR_s_backgroundColor_1125a28f8);
  return;
}



/* Entry: 10b2c031c; end: 10b2c032b; -[SCPreviewTooltipBalloon setTriangleColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c031c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4e0),PTR_s_setBackgroundColor__112639330);
  return;
}



/* Entry: 10b2c032c; end: 10b2c033b; -[SCPreviewTooltipBalloon textFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c032c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4d0),PTR_s_font_1125ca848);
  return;
}



/* Entry: 10b2c033c; end: 10b2c034b; -[SCPreviewTooltipBalloon setTextFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c033c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4d0),PTR_s_setFont__112645340);
  return;
}



/* Entry: 10b2c034c; end: 10b2c035b; -[SCPreviewTooltipBalloon textAlignment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c034c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4d0),PTR_s_textAlignment_112678810);
  return;
}



/* Entry: 10b2c035c; end: 10b2c036b; -[SCPreviewTooltipBalloon setTextAlignment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c035c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e4d0),PTR_s_setTextAlignment__112662638);
  return;
}



/* Entry: 10b2c036c; end: 10b2c03df; -[SCPreviewTooltipBalloon setVerticalPadding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c036c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  *(undefined8 *)(param_2 + _DAT_11278e4d4) = param_1;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b2c03e0;
  puStack_20 = &UNK_1108471b0;
  lStack_18 = param_2;
  func_0x00010c0bc060(*(undefined8 *)(param_2 + _DAT_11278e4d0),param_3,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10b2c03e0; end: 10b2c04bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c03e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e4d4);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e4d8);
  (**(code **)(lVar4 + 0x10))(uVar5,uVar6,uVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2c04bc; end: 10b2c052f; -[SCPreviewTooltipBalloon setHorizontalPadding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c04bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  *(undefined8 *)(param_2 + _DAT_11278e4d8) = param_1;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b2c0530;
  puStack_20 = &UNK_1108471b0;
  lStack_18 = param_2;
  func_0x00010c0bc060(*(undefined8 *)(param_2 + _DAT_11278e4d0),param_3,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10b2c0530; end: 10b2c060b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c0530(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e4d4);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e4d8);
  (**(code **)(lVar4 + 0x10))(uVar5,uVar6,uVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2c060c; end: 10b2c094f; -[SCPreviewTooltipBalloon setTrianglePosition:withOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2c060c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar4 = (long)_DAT_11278e4e0;
  func_0x00010c12c960(*(undefined8 *)(param_4 + lVar4));
  puVar1 = PTR_PTR_1126e0150;
  _objc_alloc();
  func_0x00010c0556e0();
  uVar3 = *(undefined8 *)(param_4 + lVar4);
  *(undefined **)(param_4 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_4 + lVar4),param_5,
                      *(undefined1 *)(param_4 + _DAT_11278e4e4));
  func_0x00010befbb60(param_4,param_5,*(undefined8 *)(param_4 + lVar4));
  if (param_6 < 4) {
    if (param_6 < 2) {
      if (param_6 == 0) {
        uVar3 = *(undefined8 *)(param_4 + lVar4);
        puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_140 = 0xc2000000;
        pcStack_138 = FUN_10b2c0f7c;
        puStack_130 = &UNK_11084fc28;
        ppuVar2 = &puStack_148;
        lStack_128 = param_4;
        uStack_120 = param_1;
      }
      else {
        if (param_6 != 1) {
          return;
        }
        uVar3 = *(undefined8 *)(param_4 + lVar4);
        puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_170 = 0xc2000000;
        uStack_168 = 0x10b2c1104;
        puStack_160 = &UNK_11084fc28;
        ppuVar2 = &puStack_178;
        lStack_158 = param_4;
        uStack_150 = param_1;
      }
    }
    else if (param_6 == 2) {
      uVar3 = *(undefined8 *)(param_4 + lVar4);
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a0 = 0xc2000000;
      uStack_198 = 0x10b2c126c;
      puStack_190 = &UNK_11084fc28;
      ppuVar2 = &puStack_1a8;
      lStack_188 = param_4;
      uStack_180 = param_1;
    }
    else {
      if (param_6 != 3) {
        return;
      }
      uVar3 = *(undefined8 *)(param_4 + lVar4);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_10b2c0950;
      puStack_68 = &UNK_11084fc28;
      ppuVar2 = &puStack_80;
      lStack_60 = param_4;
      uStack_58 = param_1;
    }
  }
  else if (param_6 < 6) {
    if (param_6 == 4) {
      uVar3 = *(undefined8 *)(param_4 + lVar4);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10b2c0ad8;
      puStack_98 = &UNK_11084fc28;
      ppuVar2 = &puStack_b0;
      lStack_90 = param_4;
      uStack_88 = param_1;
    }
    else {
      if (param_6 != 5) {
        return;
      }
      uVar3 = *(undefined8 *)(param_4 + lVar4);
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x10b2c0c40;
      puStack_c8 = &UNK_11084fc28;
      ppuVar2 = &puStack_e0;
      lStack_c0 = param_4;
      uStack_b8 = param_1;
    }
  }
  else if (param_6 == 6) {
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar4));
    uVar3 = *(undefined8 *)(param_4 + lVar4);
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_10b2c0dc8;
    puStack_100 = &UNK_11084fbb8;
    ppuVar2 = &puStack_118;
    lStack_f8 = param_4;
    uStack_f0 = param_1;
    uStack_e8 = param_3;
  }
  else if (param_6 == 7) {
    uVar3 = *(undefined8 *)(param_4 + lVar4);
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_10b2c13f4;
    puStack_1c0 = &UNK_11084fc28;
    ppuVar2 = &puStack_1d8;
    lStack_1b8 = param_4;
    uStack_1b0 = param_1;
  }
  else {
    if (param_6 != 8) {
      return;
    }
    uVar3 = *(undefined8 *)(param_4 + lVar4);
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_200 = 0xc2000000;
    uStack_1f8 = 0x10b2c151c;
    puStack_1f0 = &UNK_11084fc28;
    ppuVar2 = &puStack_208;
    lStack_1e8 = param_4;
    uStack_1e0 = param_1;
  }
  func_0x00010c0bbfc0(uVar3,param_5,ppuVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10b2c0950; end: 10b2c0dc7;  */

void FUN_10b2c0950(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xbfe0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b2c0dc8; end: 10b2c0f7b;  */

void FUN_10b2c0dc8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xbfe0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c262ca0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0bbfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x30) * -0.5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


