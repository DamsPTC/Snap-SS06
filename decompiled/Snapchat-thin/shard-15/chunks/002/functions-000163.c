/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b96a5a0; end: 10b96a7b7; -[SCValdiScrollView _updateFadingEdge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96a5a0(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar5 = (long)_DAT_112795ea0;
  if (*(long *)(param_5 + lVar5) != 0) {
    func_0x00010bf20c00();
    lVar4 = (long)_DAT_112795e70;
    func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar4));
    dVar6 = param_1;
    dVar8 = param_2;
    func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar4));
    lVar2 = (long)_DAT_112795e98;
    dVar7 = *(double *)(param_5 + lVar2);
    if (*(char *)(param_5 + _DAT_112795e74) == '\x01') {
      param_1 = param_1 - param_3;
      uVar1 = dVar7 == param_1;
      if (param_1 <= dVar7) {
        dVar7 = param_1;
      }
      dVar9 = 0.0;
      dVar10 = 0.0;
      if (*(char *)(param_5 + _DAT_112795e84) != '\0') {
        dVar10 = dVar6;
        func_0x00010be0e0c0(dVar6,dVar7,param_5);
      }
      func_0x00010b96b4e0();
      param_4 = param_3;
      if ((bool)uVar1) {
        dVar9 = param_1 - dVar6;
        func_0x00010be0e0c0(dVar9,dVar7,param_5);
      }
    }
    else {
      param_2 = param_2 - param_4;
      uVar1 = dVar7 == param_2;
      if (param_2 <= dVar7) {
        dVar7 = param_2;
      }
      dVar9 = 0.0;
      dVar10 = 0.0;
      if (*(char *)(param_5 + _DAT_112795e84) != '\0') {
        dVar10 = dVar8;
        func_0x00010be0e0c0(dVar8,dVar7,param_5);
      }
      func_0x00010b96b4e0();
      if ((bool)uVar1) {
        dVar9 = param_2 - dVar8;
        func_0x00010be0e0c0(dVar9,dVar7,param_5);
      }
    }
    param_4 = *(double *)(param_5 + lVar2) / param_4;
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c0df720(dVar10 * param_4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(uVar3);
    func_0x00010b96b374();
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c0df720(1.0 - dVar9 * param_4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(uVar3);
    func_0x00010b96b374();
    func_0x00010bed7c40(param_5);
    lVar5 = (long)_DAT_112795e9c;
    func_0x00010c1bff00(*(undefined8 *)(param_5 + lVar5));
    func_0x00010bf20c00(param_5);
    func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_5 + lVar5),PTR_s_setFrame__112645658);
    return;
  }
  return;
}



/* Entry: 10b96a7b8; end: 10b96a7e3; -[SCValdiScrollView _fadeStrengthForOffset:maxOffset:] */

double FUN_10b96a7b8(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  
  if (0.0 < param_2) {
    dVar1 = 1.0;
    if (param_1 / param_2 <= 1.0) {
      dVar1 = param_1 / param_2;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010be06e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(dVar1,param_3,PTR_s__easeInOut__11255f520);
    return dVar1;
  }
  return 0.0;
}



/* Entry: 10b96a7e4; end: 10b96a80f; -[SCValdiScrollView _easeInOut:] */

double FUN_10b96a7e4(double param_1)

{
  double dVar1;
  
  dVar1 = param_1 * (param_1 + param_1);
  if (0.5 <= param_1) {
    dVar1 = param_1 * (param_1 * -2.0 + 4.0) + -1.0;
  }
  return dVar1;
}



/* Entry: 10b96a810; end: 10b96aa7b; +[SCValdiScrollView bindAttributes:] */

void FUN_10b96a810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b96b394();
  func_0x00010bf1a380(param_3);
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b368();
  func_0x00010bf1a140();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b368();
  func_0x00010bf1a180();
  func_0x00010b96b368();
  func_0x00010bf1a0e0();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b32c();
  func_0x00010b96b368();
  func_0x00010bf1a140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b96aa7c; end: 10b96aacb;  */

void FUN_10b96aa7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setBouncesVerticalWithSmal_112683110);
  return;
}



/* Entry: 10b96aacc; end: 10b96aaff;  */

bool FUN_10b96aacc(undefined8 param_1,long param_2)

{
  func_0x00010c295ce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 10b96ab00; end: 10b96ab27;  */

void FUN_10b96ab00(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c295ce0(param_2,param_2,&PTR____CFConstantStringClassReference_110e547d8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10b96ab28; end: 10b96abc7;  */

void FUN_10b96ab28(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2964d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setTranslatesForKeyboard__112683358);
  return;
}



/* Entry: 10b96abc8; end: 10b96abe3;  */

undefined8 FUN_10b96abc8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c296180(param_2);
  return 1;
}



/* Entry: 10b96abe4; end: 10b96abef;  */

void FUN_10b96abe4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setScrollEnabled__112683288,1);
  return;
}



/* Entry: 10b96abf0; end: 10b96ac0b;  */

undefined8 FUN_10b96abf0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2961a0(param_2);
  return 1;
}



/* Entry: 10b96ac0c; end: 10b96ac17;  */

void FUN_10b96ac0c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2961b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setScrollPerfLoggerBridge__112683290,0)
  ;
  return;
}



/* Entry: 10b96ac18; end: 10b96ac33;  */

undefined8 FUN_10b96ac18(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c295d60(param_2);
  return 1;
}



/* Entry: 10b96ac34; end: 10b96ac83;  */

void FUN_10b96ac34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_2,PTR_s_valdi_setFadingEdgeLength__112683180);
  return;
}



/* Entry: 10b96ac84; end: 10b96ad1f; -[SCValdiScrollView _scrollViewDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96ac84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = (long)_DAT_112795e94;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar1 = PTR_PTR_1126e1b60;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    func_0x00010b96b410(uVar3);
  }
  lVar5 = (long)_DAT_112795e70;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + lVar4);
  _objc_release();
  if (lVar2 != lVar6) {
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined8 *)(param_1 + lVar4));
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b96ad20; end: 10b96af27; -[SCValdiScrollView _keyboardWillShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96ad20(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  double dVar3;
  
  func_0x00010b96b338();
  if (*(char *)(unaff_x20 + _DAT_112795e90) == '\x01') {
    func_0x00010b96b384();
    FUN_10b96af28();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      uVar1 = unaff_x19;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b96b39c();
      _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
      func_0x00010b96b3ac();
      func_0x00010b96b480();
      func_0x00010b96b400();
      func_0x00010bdc1080(uVar1);
      func_0x00010b96b39c();
      uVar1 = unaff_x19;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b96b39c();
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x00010b96b3ac();
      func_0x00010b96b480();
      func_0x00010b96b400();
      func_0x00010bf885a0(uVar1);
      dVar3 = param_1;
      func_0x00010b96b39c();
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b96b39c();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class();
      func_0x00010b96b3ac();
      if (((ulong)puVar2 & 1) == 0) {
        unaff_x19 = 0;
      }
      _objc_retain(unaff_x19);
      func_0x00010b96b400();
      func_0x00010c2827c0(unaff_x19);
      _objc_release(unaff_x19);
      func_0x00010bf20c00(param_3);
      func_0x00010bf51460(param_3,param_4,0);
      _CGRectGetMaxY();
      dVar3 = (dVar3 - param_2) + 10.0;
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      if (dVar3 != 0.0) {
        *(double *)(unaff_x20 + _DAT_112795e8c) = -dVar3;
        func_0x00010b96b490();
        func_0x00010b96b4cc(FUN_10b96b03c,0xc2000000);
        func_0x00010bf03440(param_1);
      }
    }
    func_0x00010b96b374();
  }
  func_0x00010b96b3a4();
  return;
}



/* Entry: 10b96af28; end: 10b96b03b;  */

void FUN_10b96af28(ulong param_1)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar2 == 0) {
      lVar5 = 0;
      lVar3 = 0;
LAB_10b96b00c:
      func_0x00010b96b3a4();
      func_0x00010b96b3b8(uVar4);
      if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be49650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(lVar3 + 0x20),PTR_s__layoutScrollView_11256ff30);
      return;
    }
    uVar6 = 0;
    do {
      in_ZR = lRam0000000000000000 == lVar1;
      if (!(bool)in_ZR) {
        _objc_enumerationMutation(param_1);
      }
      lVar5 = *(long *)(uVar6 * 8);
      lVar3 = lVar5;
      func_0x00010c073040();
      if ((int)lVar3 != 0) {
        func_0x00010b96b4b0();
        goto LAB_10b96b00c;
      }
      FUN_10b96af28();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      if (lVar5 != 0) goto LAB_10b96b00c;
      uVar6 = uVar6 + 1;
      in_ZR = uVar6 == uVar2;
    } while (uVar6 < uVar2);
    uVar2 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10b96b03c; end: 10b96b043;  */

void FUN_10b96b03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be49650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__layoutScrollView_11256ff30);
  return;
}



/* Entry: 10b96b044; end: 10b96b1bb; -[SCValdiScrollView _keyboardWillHide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96b044(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (*(char *)(param_2 + _DAT_112795e90) == '\x01') {
    *(undefined8 *)(param_2 + _DAT_112795e8c) = 0;
    func_0x00010b96b394();
    uVar1 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b96b374();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    func_0x00010b96b4b0();
    func_0x00010b96b39c();
    func_0x00010bf885a0(uVar1);
    func_0x00010b96b374();
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b96b37c();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b96b374();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar1 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    if ((uVar1 & 1) == 0) {
      param_4 = 0;
    }
    func_0x00010b96b4b0();
    func_0x00010b96b37c();
    func_0x00010c2827c0(param_4);
    func_0x00010b96b374();
    func_0x00010b96b490();
    func_0x00010b96b4cc(FUN_10b96b1bc,0xc2000000);
    func_0x00010bf03440(param_1,0);
  }
  return;
}



/* Entry: 10b96b1bc; end: 10b96b1c3;  */

void FUN_10b96b1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be49650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__layoutScrollView_11256ff30);
  return;
}



/* Entry: 10b96b1c4; end: 10b96b2db; -[SCValdiScrollView handleScrollPan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96b1c4(double param_1,double param_2)

{
  ulong uVar1;
  long lVar2;
  ulong unaff_x19;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  func_0x00010b96b338();
  if (((*(char *)(unaff_x20 + _DAT_112795e7c) == '\x01') &&
      (lVar4 = (long)_DAT_112795e80, *(long *)(unaff_x20 + lVar4) != 0)) &&
     (uVar3 = unaff_x19, func_0x00010c252440(), uVar3 == 2)) {
    for (uVar3 = 0; uVar1 = unaff_x19, func_0x00010c0df520(), uVar3 < uVar1; uVar3 = uVar3 + 1) {
      lVar5 = (long)_DAT_112795e70;
      func_0x00010c09f140();
      lVar2 = *(long *)(unaff_x20 + lVar4);
      dVar6 = param_2;
      if (lVar2 == 2) {
        func_0x00010bf20c00(*(undefined8 *)(unaff_x20 + lVar5));
        _CGRectGetMinY();
        if (param_2 < param_1) {
LAB_10b96b28c:
          func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15b480();
          func_0x00010b96b37c();
          break;
        }
      }
      else if (lVar2 == 1) {
        func_0x00010bf20c00(*(undefined8 *)(unaff_x20 + lVar5));
        _CGRectGetMaxY();
        if (param_1 < param_2) goto LAB_10b96b28c;
      }
      param_2 = dVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96b2dc; end: 10b96b32b; -[SCValdiScrollView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96b2dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795ea0,0);
  func_0x00010b96b4c0((long)_DAT_112795e9c);
  func_0x00010b96b4c0((long)_DAT_112795e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795e94,0);
  return;
}



/* Entry: 10b96b32c; end: 10b96b4f3;  */

void FUN_10b96b32c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b96b4f4; end: 10b96b533; -[SCValdiScrollViewDelegate init] */

void FUN_10b96b4f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270c090;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((long)puVar1 + 0x30) = 0x100;
  }
  return;
}



/* Entry: 10b96b534; end: 10b96b5a7; -[SCValdiScrollViewDelegate updateCurrentVelocity:] */

void FUN_10b96b534(undefined8 param_1,double param_2)

{
  double dVar1;
  double dVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  func_0x00010b96ba84();
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)func_0x00010b96bad0();
  func_0x00010b96bae4();
  func_0x00010b96ba94();
  dVar1 = *(double *)(unaff_x20 + 0x10);
  dVar2 = *(double *)(unaff_x20 + 0x18);
  auVar5 = NEON_fmov(0x4008000000000000,8);
  *(double *)(unaff_x20 + 0x10) = dVar3;
  *(double *)(unaff_x20 + 0x18) = param_2;
  auVar4 = NEON_fmov(0xbfd0000000000000,8);
  *(double *)(unaff_x20 + 0x28) = (param_2 + auVar5._8_8_ * dVar2) * auVar4._8_8_;
  *(double *)(unaff_x20 + 0x20) = (dVar3 + auVar5._0_8_ * dVar1) * auVar4._0_8_;
  return;
}



/* Entry: 10b96b5a8; end: 10b96b66b; -[SCValdiScrollViewDelegate scrollViewWillBeginDragging:] */

void FUN_10b96b5a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b96ba84();
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b96bad0();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x00010b96ba94();
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  func_0x00010b96bac4();
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b96badc();
  func_0x00010c0dd460(unaff_x19);
  func_0x00010b96ba94();
  lVar1 = unaff_x20;
  func_0x00010c152180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c152180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d1c0();
    func_0x00010b96ba94();
  }
  if (*(char *)(unaff_x20 + 0x31) == '\x01') {
    FUN_10b96b66c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96b66c; end: 10b96b83b;  */

void FUN_10b96b66c(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  undefined8 uVar12;
  double dStack_240;
  double dStack_238;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar11 = 0.0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010b96babc();
  if (uVar2 != 0) {
    lVar7 = *plStack_1a0;
    do {
      uVar8 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(ulong *)(lStack_1a8 + uVar8 * 8);
        dVar11 = 0.0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uVar3 = uVar5;
        func_0x00010bfc1c00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010b96babc();
        if (uVar4 != 0) {
          lVar9 = *plStack_1e0;
          do {
            uVar10 = 0;
            do {
              if (*plStack_1e0 != lVar9) {
                _objc_enumerationMutation(uVar3);
              }
              uVar6 = *(undefined8 *)(lStack_1e8 + uVar10 * 8);
              uVar12 = uVar6;
              func_0x00010c071800();
              if ((int)uVar12 != 0) {
                func_0x00010c195460(uVar6,param_4,0);
                func_0x00010c195460(uVar6,param_4,1);
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar4);
            uVar4 = uVar3;
            func_0x00010b96babc(uVar3,param_4,&uStack_1f0,auStack_170);
          } while (uVar4 != 0);
        }
        _objc_release(uVar3);
        uVar3 = uVar5;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf529e0();
        _objc_release(uVar3);
        if (uVar4 != 0) {
          FUN_10b96b66c(uVar5);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar2);
      uVar2 = param_3;
      func_0x00010b96babc(param_3,param_4,&uStack_1b0,auStack_f0);
      unaff_x20 = 0;
    } while (uVar2 != 0);
  }
  func_0x00010b96bae4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b96ba84();
  if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
    func_0x00010b96badc();
    dStack_240 = dVar11;
    dStack_238 = param_2;
    func_0x00010b96bac4();
    uVar2 = param_3;
    func_0x00010c2954e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = 0;
    uVar6 = 0;
    if (*(char *)(unaff_x20 + 0x30) == '\x01') {
      uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    }
    func_0x00010c0dd4a0(dVar11,param_2,uVar12,uVar6,uVar2,param_4,&dStack_240);
    func_0x00010b96ba94();
    func_0x00010b96badc();
    bVar1 = false;
    if ((dVar11 == dStack_240) && (bVar1 = false, !NAN(param_2) && !NAN(dStack_238))) {
      bVar1 = param_2 == dStack_238;
    }
    if (!bVar1) {
      *(undefined1 *)(unaff_x20 + 8) = 1;
      func_0x00010c1822e0(param_3);
      *(undefined1 *)(unaff_x20 + 8) = 0;
    }
  }
  func_0x00010b96bae4();
  return;
}



/* Entry: 10b96b83c; end: 10b96b903; -[SCValdiScrollViewDelegate scrollViewDidScroll:] */

void FUN_10b96b83c(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  double dStack_50;
  double dStack_48;
  
  func_0x00010b96ba84();
  if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
    func_0x00010b96badc();
    dStack_50 = param_1;
    dStack_48 = param_2;
    func_0x00010b96bac4();
    func_0x00010c2954e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    uVar3 = 0;
    if (*(char *)(unaff_x20 + 0x30) == '\x01') {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    }
    func_0x00010c0dd4a0(param_1,param_2,uVar2,uVar3,unaff_x19,param_4,&dStack_50);
    func_0x00010b96ba94();
    func_0x00010b96badc();
    bVar1 = false;
    if ((param_1 == dStack_50) && (bVar1 = false, !NAN(param_2) && !NAN(dStack_48))) {
      bVar1 = param_2 == dStack_48;
    }
    if (!bVar1) {
      *(undefined1 *)(unaff_x20 + 8) = 1;
      func_0x00010c1822e0();
      *(undefined1 *)(unaff_x20 + 8) = 0;
    }
  }
  func_0x00010b96bae4();
  return;
}



/* Entry: 10b96b904; end: 10b96b907; -[SCValdiScrollViewDelegate scrollViewDidEndDecelerating:] */

void FUN_10b96b904(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollViewDidEndScrolling__1126324d0);
  return;
}



/* Entry: 10b96b908; end: 10b96b977; -[SCValdiScrollViewDelegate scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

void FUN_10b96b908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2954e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0(param_3);
  func_0x00010b96ba9c();
  func_0x00010c0dd440(uVar1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b96b978; end: 10b96b983; -[SCValdiScrollViewDelegate scrollViewDidEndDragging:willDecelerate:] */

void FUN_10b96b978(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c152ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollViewDidEndScrolling__1126324d0);
  return;
}



/* Entry: 10b96b984; end: 10b96b987; -[SCValdiScrollViewDelegate scrollViewDidEndScrollingAnimation:] */

void FUN_10b96b984(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollViewDidEndScrolling__1126324d0);
  return;
}



/* Entry: 10b96b988; end: 10b96b98b; -[SCValdiScrollViewDelegate scrollViewDidScrollToTop:] */

void FUN_10b96b988(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollViewDidEndScrolling__1126324d0);
  return;
}



/* Entry: 10b96b98c; end: 10b96ba3b; -[SCValdiScrollViewDelegate scrollViewDidEndScrolling:] */

void FUN_10b96b98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2954e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0(param_3);
  func_0x00010b96ba9c();
  func_0x00010c0dd480(uVar1);
  func_0x00010b96ba94();
  lVar2 = param_1;
  func_0x00010c152180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c152180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b96ba3c; end: 10b96ba43; -[SCValdiScrollViewDelegate cancelsTouchesOnScroll] */

undefined1 FUN_10b96ba3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



/* Entry: 10b96ba44; end: 10b96ba4b; -[SCValdiScrollViewDelegate setCancelsTouchesOnScroll:] */

void FUN_10b96ba44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 10b96ba4c; end: 10b96ba53; -[SCValdiScrollViewDelegate scrollPerfLoggerBridge] */

undefined8 FUN_10b96ba4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b96ba54; end: 10b96ba77; -[SCValdiScrollViewDelegate setScrollPerfLoggerBridge:] */

void FUN_10b96ba54(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b96ba84();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b96ba78; end: 10b96baeb; -[SCValdiScrollViewDelegate .cxx_destruct] */

void FUN_10b96ba78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 10b96baec; end: 10b96bb6b; -[SCValdiScrollViewInner initWithFrame:] */

undefined1 * FUN_10b96baec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_30 [2];
  
  puVar1 = auStack_30;
  func_0x00010b96bf10();
  auStack_30[0] = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1a91c0(puVar1);
    func_0x00010c173900(puVar1);
    func_0x00010c1738e0(puVar1);
    func_0x00010c1d8ec0(puVar1);
    func_0x00010c20bf80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b96bb6c; end: 10b96bc47; -[SCValdiScrollViewInner hitTest:withEvent:] */

void FUN_10b96bb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x00010b96befc();
  uVar1 = unaff_x20;
  func_0x00010c256980();
  if ((((int)uVar1 != 0) && (uVar1 = unaff_x20, func_0x00010c070400(), (int)uVar1 != 0)) &&
     (uVar1 = unaff_x20, func_0x00010c102b20(param_1,param_2), (int)uVar1 != 0)) {
    func_0x00010bf4cdc0();
    func_0x00010c182300();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(unaff_x20);
  }
  func_0x00010b96bf10();
  _objc_msgSendSuper2(param_1,param_2,&stack0xffffffffffffffb0,PTR_s_hitTest_withEvent__1125d6850,
                      param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b96bf08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b96bc48; end: 10b96bc8b; -[SCValdiScrollViewInner setPanGestureRecognizerEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96bc48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795ebc) = param_3;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b96bc8c; end: 10b96bcf3; -[SCValdiScrollViewInner didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96bc8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_30 [2];
  
  uVar1 = param_1;
  func_0x00010b96bf10();
  auStack_30[0] = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010c0f36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  func_0x00010b96bf08();
  return;
}



/* Entry: 10b96bcf4; end: 10b96be7f; -[SCValdiScrollViewInner gestureRecognizerShouldBegin:] */

ulong * FUN_10b96bcf4(double param_1,double param_2,double param_3,double param_4,undefined8 param_5
                     ,undefined8 param_6,ulong param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong unaff_x20;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong auStack_a0 [2];
  ulong auStack_90 [2];
  ulong auStack_80 [2];
  
  func_0x00010b96befc();
  uVar5 = unaff_x20;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 == param_7) {
    uVar5 = unaff_x20;
    func_0x00010bf20a20();
    if (((int)uVar5 == 0) || (uVar5 = unaff_x20, func_0x00010bf20a00(), (uVar5 & 1) == 0)) {
      uVar5 = unaff_x20;
      func_0x00010c0f36c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00();
      dVar7 = param_1;
      dVar9 = param_2;
      _objc_release(uVar5);
      func_0x00010bf20c00();
      func_0x00010bf4cdc0();
      dVar8 = dVar7;
      dVar10 = dVar9;
      func_0x00010bf4d5e0();
      uVar5 = unaff_x20;
      func_0x00010bfe4320();
      if ((int)uVar5 != 0) {
        dVar10 = dVar8;
        dVar9 = dVar7;
        param_4 = param_3;
        param_2 = param_1;
      }
      uVar5 = unaff_x20;
      func_0x00010bf20a20();
      if ((uVar5 & 1) == 0) {
        puVar6 = (ulong *)0x0;
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (dVar9 == 0.0) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(param_2)) {
            bVar1 = param_2 < 0.0;
            bVar2 = param_2 == 0.0;
            bVar3 = false;
          }
        }
        if ((!bVar2 && bVar1 == bVar3) || (dVar9 < 0.0)) goto LAB_10b96be54;
      }
      uVar5 = unaff_x20;
      func_0x00010bf20a00();
      puVar6 = auStack_a0;
      if ((uVar5 & 1) == 0) {
        param_4 = param_4 + dVar9;
        bVar1 = false;
        if ((param_4 == dVar10) && (bVar1 = false, !NAN(param_2))) {
          bVar1 = param_2 < 0.0;
        }
        bVar2 = false;
        bVar3 = false;
        bVar4 = false;
        if (!bVar1) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(param_4) && !NAN(dVar10)) {
            bVar2 = param_4 < dVar10;
            bVar3 = param_4 == dVar10;
            bVar4 = false;
          }
        }
        puVar6 = auStack_a0;
        if (!bVar3 && bVar2 == bVar4) {
          puVar6 = (ulong *)0x0;
          goto LAB_10b96be54;
        }
      }
    }
    else {
      puVar6 = auStack_90;
    }
  }
  else {
    puVar6 = auStack_80;
  }
  func_0x00010b96bf10();
  *puVar6 = unaff_x20;
  puVar6[1] = extraout_x8;
  _objc_msgSendSuper2();
LAB_10b96be54:
  func_0x00010b96bf08();
  return puVar6;
}



/* Entry: 10b96be80; end: 10b96be8b; -[SCValdiScrollViewInner horizontalScroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b96be80(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795ec0);
}



/* Entry: 10b96be8c; end: 10b96be97; -[SCValdiScrollViewInner setHorizontalScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96be8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795ec0) = param_3;
  return;
}



/* Entry: 10b96be98; end: 10b96bea3; -[SCValdiScrollViewInner bouncesFromDragAtStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b96be98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795ec4);
}



/* Entry: 10b96bea4; end: 10b96beaf; -[SCValdiScrollViewInner setBouncesFromDragAtStart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96bea4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795ec4) = param_3;
  return;
}



/* Entry: 10b96beb0; end: 10b96bebb; -[SCValdiScrollViewInner bouncesFromDragAtEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b96beb0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795ec8);
}



/* Entry: 10b96bebc; end: 10b96bec7; -[SCValdiScrollViewInner setBouncesFromDragAtEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96bebc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795ec8) = param_3;
  return;
}



/* Entry: 10b96bec8; end: 10b96bed3; -[SCValdiScrollViewInner panGestureRecognizerEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b96bec8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795ebc);
}



/* Entry: 10b96bed4; end: 10b96bedf; -[SCValdiScrollViewInner stopScrollingOnTouch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b96bed4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795ecc);
}



/* Entry: 10b96bee0; end: 10b96bf1b; -[SCValdiScrollViewInner setStopScrollingOnTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96bee0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795ecc) = param_3;
  return;
}



/* Entry: 10b96bf1c; end: 10b96bf37;  */

void FUN_10b96bf1c(void)

{
  _objc_retain(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10b96bf38; end: 10b96c0cf;  */

undefined8 FUN_10b96bf38(void)

{
  int iVar1;
  ulong unaff_x20;
  undefined8 uVar2;
  
  FUN_10b96c520();
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if ((((((unaff_x20 & 1) == 0) && (func_0x00010b96c540(), unaff_x20 != 0)) &&
       (func_0x00010b96c538(), (unaff_x20 & 1) == 0)) &&
      ((func_0x00010b96c538(), (unaff_x20 & 1) == 0 && (func_0x00010b96c538(), (unaff_x20 & 1) == 0)
       ))) && (func_0x00010b96c538(), (unaff_x20 & 1) == 0)) {
    func_0x00010b96c538();
    iVar1 = (int)unaff_x20;
    if (((unaff_x20 & 1) == 0) && (func_0x00010b96c538(), iVar1 == 0)) {
      uVar2 = 0;
      goto LAB_10b96bfa0;
    }
  }
  func_0x00010c1edbe0();
  uVar2 = 1;
LAB_10b96bfa0:
  func_0x00010b96c548();
  func_0x00010b96c550();
  return uVar2;
}



/* Entry: 10b96c0d0; end: 10b96c173;  */

void FUN_10b96c0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c1b6ec0(param_1);
  func_0x00010c213240(param_1);
  _objc_release(param_3);
  func_0x00010c1f9a00(param_1);
  func_0x00010b96c568(1);
  func_0x00010c16d0c0();
  func_0x00010b96c568();
  func_0x00010c207da0();
  func_0x00010b96c568();
  func_0x00010c203420();
  func_0x00010b96c568();
  func_0x00010c2034c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b96c174; end: 10b96c51f;  */

undefined8 FUN_10b96c174(void)

{
  int iVar1;
  ulong unaff_x20;
  undefined8 uVar2;
  
  FUN_10b96c520();
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if (((unaff_x20 & 1) == 0) && (func_0x00010b96c540(), unaff_x20 != 0)) {
    func_0x00010b96c538();
    if (((int)unaff_x20 == 0) && (func_0x00010b96c538(), (int)unaff_x20 == 0)) {
      func_0x00010b96c538();
      if ((int)unaff_x20 == 0) {
        func_0x00010b96c538();
        if ((int)unaff_x20 == 0) {
          func_0x00010b96c538();
          if ((int)unaff_x20 == 0) {
            func_0x00010b96c538();
            if ((int)unaff_x20 == 0) {
              func_0x00010b96c538();
              iVar1 = (int)unaff_x20;
              if ((((unaff_x20 & 1) == 0) && (func_0x00010b96c538(), iVar1 == 0)) &&
                 (func_0x00010b96c538(), iVar1 == 0)) {
                func_0x00010b96c538();
                if (iVar1 == 0) {
                  uVar2 = 0;
                  goto LAB_10b96c1f4;
                }
                func_0x00010b96c574();
                goto LAB_10b96c278;
              }
            }
          }
          else {
            func_0x00010b96c558();
            func_0x00010b96c574();
          }
          goto LAB_10b96c1e4;
        }
        func_0x00010b96c558();
      }
      else {
        func_0x00010b96c558();
        func_0x00010b96c574();
      }
LAB_10b96c278:
      uVar2 = 1;
      FUN_10b96c0d0();
      goto LAB_10b96c1f4;
    }
  }
  else {
    func_0x00010b96c574();
  }
LAB_10b96c1e4:
  FUN_10b96c0d0();
  uVar2 = 1;
LAB_10b96c1f4:
  func_0x00010b96c548();
  func_0x00010b96c550();
  return uVar2;
}



/* Entry: 10b96c520; end: 10b96c57f;  */

void FUN_10b96c520(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b96c580; end: 10b96c5d3; +[SCValdiUndefinedValue undefined] */

void FUN_10b96c580(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fd290 != -1) {
    func_0x000107c27d9c(0x1137fd290,&PTR___NSConcreteGlobalBlock_110d7a950);
  }
  uVar1 = uRam00000001137fd298;
  _objc_retain(uRam00000001137fd298);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b96c5d4; end: 10b96c5ff;  */

void FUN_10b96c5d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b15a8;
  _objc_opt_new();
  uVar1 = puRam00000001137fd298;
  puRam00000001137fd298 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b96c600; end: 10b96c6db; -[SCValdiVideoView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b96c600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270c0a0;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112795ed0);
    *(undefined **)((long)puVar1 + (long)_DAT_112795ed0) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795ed4) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795ed8) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795edc) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795ee0) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795ee4) = 0;
    func_0x00010c17d4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b96c6dc; end: 10b96c72b; -[SCValdiVideoView onValdiAssetDidChange:shouldFlip:] */

void FUN_10b96c6dc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  FUN_10b96d1e0();
  uVar1 = unaff_x19;
  func_0x00010bf481c0();
  if ((int)uVar1 == 0) {
    unaff_x19 = 0;
  }
  _objc_retain(unaff_x19);
  func_0x00010c21ffc0();
  func_0x00010b96d254();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96c72c; end: 10b96c74f; -[SCValdiVideoView onLoad:loadedAsset:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96c72c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != *(long *)(param_1 + _DAT_112795ee8)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e77d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_onValdiAssetDidChange_shouldFlip_112617808,param_4,0);
  return;
}



/* Entry: 10b96c750; end: 10b96c79b; -[SCValdiVideoView setValdiVideoPlayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96c750(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  FUN_10b96d1e0();
  lVar2 = (long)_DAT_112795eec;
  if (*(long *)(unaff_x20 + lVar2) != unaff_x19) {
    func_0x00010b96d234();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = unaff_x19;
    _objc_release(uVar1);
    func_0x00010bee33a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96c79c; end: 10b96c8a7; -[SCValdiVideoView _updateVideo] */

/* WARNING: Possible PIC construction at 0x00010b96c83c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b96c840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96c79c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112795ed0;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
  lVar3 = (long)_DAT_112795eec;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfcc1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar1;
  _objc_release(uVar2);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  func_0x00010c2241a0((float)*(double *)(param_1 + _DAT_112795edc),*(undefined8 *)(param_1 + lVar3))
  ;
  func_0x00010c1dd7c0((float)*(double *)(param_1 + _DAT_112795ee0),*(undefined8 *)(param_1 + lVar3))
  ;
                    /* WARNING: Could not recover jumptable at 0x00010c1f9af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)*(double *)(param_1 + _DAT_112795ee4),*(undefined8 *)(param_1 + lVar3),
             PTR_s_setSeekToTime__11265c0e0);
  return;
}



/* Entry: 10b96c8a8; end: 10b96c98b; -[SCValdiVideoView _applyAsset:shouldFlip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96c8a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010b96d21c();
  lVar4 = (long)_DAT_112795ee8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 != param_3) {
    _objc_retain(lVar3);
    func_0x00010b96d234();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar1);
    lVar5 = (long)_DAT_112795f04;
    if (*(char *)(param_1 + lVar5) == '\x01') {
      *(undefined1 *)(param_1 + lVar5) = 0;
      func_0x00010c12cfc0(lVar3,param_2,param_1);
    }
    func_0x00010c0e77c0(param_1,param_2,0,param_4);
    if (*(long *)(param_1 + lVar4) != 0) {
      *(undefined1 *)(param_1 + lVar5) = 1;
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9a20(uVar1,param_2,param_1,4,0,0,puVar2);
      func_0x00010b96d2a8();
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b96c98c; end: 10b96ca4f; -[SCValdiVideoView valdi_setObjectFit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b96c98c(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10b96d1e0();
  if (unaff_x19 == 0) {
    func_0x00010c182220(*(undefined8 *)(unaff_x20 + _DAT_112795ed0),param_2,0);
    uVar2 = 1;
    goto LAB_10b96ca34;
  }
  func_0x00010b96d234();
  func_0x00010b96d264();
  if ((param_1 & 1) == 0) {
    func_0x00010b96d264();
    if ((param_1 & 1) != 0) {
      uVar2 = 0;
      goto LAB_10b96ca1c;
    }
    func_0x00010b96d264();
    iVar1 = (int)param_1;
    if ((param_1 & 1) != 0) {
      uVar2 = 2;
      goto LAB_10b96ca1c;
    }
    func_0x00010b96d264();
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_10b96ca1c;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
LAB_10b96ca1c:
    func_0x00010c182220(*(undefined8 *)(unaff_x20 + _DAT_112795ed0),param_2,uVar2);
    uVar2 = 1;
  }
  func_0x00010b96d2a0();
LAB_10b96ca34:
  func_0x00010b96d2a0();
  return uVar2;
}



/* Entry: 10b96ca50; end: 10b96ca9b; -[SCValdiVideoView setAsset:tintColor:flipOnRtl:] */

void FUN_10b96ca50(void)

{
  int in_w4;
  
  FUN_10b96d1e0();
  if (in_w4 != 0) {
    func_0x00010bf8d060();
  }
  func_0x00010bdcda80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96ca9c; end: 10b96cc0f; -[SCValdiVideoView valdi_setContentTransform:animator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b96ca9c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 unaff_d8;
  
  func_0x00010b96d21c();
  _objc_retain(param_4);
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + _DAT_112795ed4) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + _DAT_112795ed8) = 0x3ff0000000000000;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      param_3 = 0;
    }
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010bf529e0();
    if (uVar2 != 2) {
      _objc_release(param_3);
      uVar3 = 0;
      goto LAB_10b96cbe0;
    }
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010b96d2b0();
    func_0x00010b96d26c();
    func_0x00010b96d2a8();
    func_0x00010b96d294();
    func_0x00010b96d288();
    *(undefined8 *)(param_1 + _DAT_112795ed4) = unaff_d8;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010b96d2b0();
    func_0x00010b96d26c();
    func_0x00010b96d2a8();
    func_0x00010b96d294();
    func_0x00010b96d288();
    *(undefined8 *)(param_1 + _DAT_112795ed8) = unaff_d8;
    _objc_release(param_3);
  }
  func_0x00010bf08220(param_1);
  uVar3 = 1;
LAB_10b96cbe0:
  _objc_release(param_4);
  func_0x00010b96d2a0();
  return uVar3;
}



/* Entry: 10b96cc10; end: 10b96cc13; -[SCValdiVideoView valdi_applySlowClipping:animator:] */

void FUN_10b96cc10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setClipsToBounds__11263cf50);
  return;
}



/* Entry: 10b96cc14; end: 10b96cd23; +[SCValdiVideoView bindAttributes:] */

void FUN_10b96cc14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b96d21c();
  func_0x00010bf1a020(param_3,param_2,4);
  func_0x00010b96d25c();
  func_0x00010b96d25c();
  func_0x00010b96d25c();
  func_0x00010b96d25c();
  func_0x00010b96d25c();
  func_0x00010b96d23c();
  func_0x00010b96d23c();
  func_0x00010b96d23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b96cd24; end: 10b96cdc3;  */

void FUN_10b96cd24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setOnVideoLoadedCallback__112683238);
  return;
}



/* Entry: 10b96cdc4; end: 10b96cdff; -[SCValdiVideoView valdi_setOnBeginPlayingCallback:] */

void FUN_10b96cdc4(void)

{
  FUN_10b96d1e0();
  func_0x00010b96d27c();
  func_0x00010b96d200();
  func_0x00010b96d254();
  func_0x00010b96d224();
  func_0x00010c1d1720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96ce00; end: 10b96ce3b; -[SCValdiVideoView valdi_setOnVideoLoadedCallback:] */

void FUN_10b96ce00(void)

{
  FUN_10b96d1e0();
  func_0x00010b96d27c();
  func_0x00010b96d200();
  func_0x00010b96d254();
  func_0x00010b96d224();
  func_0x00010c1d4360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96ce3c; end: 10b96ce77; -[SCValdiVideoView valdi_setOnErrorCallback:] */

void FUN_10b96ce3c(void)

{
  FUN_10b96d1e0();
  func_0x00010b96d27c();
  func_0x00010b96d200();
  func_0x00010b96d254();
  func_0x00010b96d224();
  func_0x00010c1d22c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96ce78; end: 10b96ceb3; -[SCValdiVideoView valdi_setOnCompletedCallback:] */

void FUN_10b96ce78(void)

{
  FUN_10b96d1e0();
  func_0x00010b96d27c();
  func_0x00010b96d200();
  func_0x00010b96d254();
  func_0x00010b96d224();
  func_0x00010c1d1c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96ceb4; end: 10b96ceef; -[SCValdiVideoView valdi_setOnProgressUpdatedCallback:] */

void FUN_10b96ceb4(void)

{
  FUN_10b96d1e0();
  func_0x00010b96d27c();
  func_0x00010b96d200();
  func_0x00010b96d254();
  func_0x00010b96d224();
  func_0x00010c1d3060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b96cef0; end: 10b96cf23; -[SCValdiVideoView valdi_setVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b96cef0(double param_1,long param_2)

{
  *(double *)(param_2 + _DAT_112795edc) = param_1;
  func_0x00010c2241a0((float)param_1,*(undefined8 *)(param_2 + _DAT_112795eec));
  return 1;
}



/* Entry: 10b96cf24; end: 10b96cf57; -[SCValdiVideoView valdi_setSeekToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b96cf24(double param_1,long param_2)

{
  *(double *)(param_2 + _DAT_112795ee4) = param_1;
  func_0x00010c1f9ae0((float)param_1,*(undefined8 *)(param_2 + _DAT_112795eec));
  return 1;
}



/* Entry: 10b96cf58; end: 10b96cf8b; -[SCValdiVideoView valdi_setPlaybackRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b96cf58(double param_1,long param_2)

{
  *(double *)(param_2 + _DAT_112795ee0) = param_1;
  func_0x00010c1dd7c0((float)param_1,*(undefined8 *)(param_2 + _DAT_112795eec));
  return 1;
}



/* Entry: 10b96cf8c; end: 10b96cfbf; -[SCValdiVideoView willEnqueueIntoValdiPool] */

bool FUN_10b96cf8c(undefined *param_1)

{
  undefined *puVar1;
  
  _objc_opt_class();
  puVar1 = PTR_PTR_1126e1b68;
  _objc_opt_class(PTR_PTR_1126e1b68);
  return param_1 == puVar1;
}



/* Entry: 10b96cfc0; end: 10b96cfc7; -[SCValdiVideoView clipsToBoundsByDefault] */

undefined8 FUN_10b96cfc0(void)

{
  return 1;
}



/* Entry: 10b96cfc8; end: 10b96d00f; -[SCValdiVideoView layoutSubviews] */

void FUN_10b96cfc8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270c0a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf08220(param_1);
  return;
}



/* Entry: 10b96d010; end: 10b96d07f; -[SCValdiVideoView applyContentTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96d010(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  double dVar2;
  
  func_0x00010bf20c00();
  func_0x00010bf20c00(param_5);
  dVar1 = param_3 * *(double *)(param_5 + _DAT_112795ed4);
  dVar2 = param_4 * *(double *)(param_5 + _DAT_112795ed8);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((dVar1 - param_3) * -0.5,(dVar2 - param_4) * -0.5,dVar1,dVar2,
             *(undefined8 *)(param_5 + _DAT_112795ed0),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b96d080; end: 10b96d10f; -[SCValdiVideoView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b96d080(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  lVar1 = (long)_DAT_112795ee8;
  if (*(long *)(param_3 + lVar1) == 0) {
    dVar3 = *(double *)PTR__CGSizeZero_110347620;
    dVar2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    dVar2 = -1.0;
    if (param_1 != 1.79769313486232e+308) {
      dVar2 = param_1;
    }
    dVar4 = -1.0;
    if (param_2 != 1.79769313486232e+308) {
      dVar4 = param_2;
    }
    dVar3 = dVar2;
    func_0x00010c0c3f40(dVar2,dVar4);
    func_0x00010c0c3ea0(dVar2,dVar4,*(undefined8 *)(param_3 + lVar1));
  }
  auVar5._8_8_ = dVar2;
  auVar5._0_8_ = dVar3;
  return auVar5;
}



/* Entry: 10b96d110; end: 10b96d11f; -[SCValdiVideoView intrinsicContentSize] */

void FUN_10b96d110(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x7fefffffffffffff,0x7fefffffffffffff,param_1,PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 10b96d120; end: 10b96d127; -[SCValdiVideoView isAccessibilityElement] */

undefined8 FUN_10b96d120(void)

{
  return 1;
}



/* Entry: 10b96d128; end: 10b96d137; -[SCValdiVideoView accessibilityLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96d128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795ed0),PTR_s_accessibilityLabel_112598d68);
  return;
}



/* Entry: 10b96d138; end: 10b96d147; -[SCValdiVideoView accessibilityHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96d138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beece70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795ed0),PTR_s_accessibilityHint_112598d40);
  return;
}



/* Entry: 10b96d148; end: 10b96d157; -[SCValdiVideoView accessibilityValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96d148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795ed0),PTR_s_accessibilityValue_112598d98);
  return;
}



/* Entry: 10b96d158; end: 10b96d167; -[SCValdiVideoView accessibilityTraits] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96d158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795ed0),PTR_s_accessibilityTraits_112598d90);
  return;
}



/* Entry: 10b96d168; end: 10b96d1df; -[SCValdiVideoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96d168(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795f00,0);
  func_0x00010b96d210((long)_DAT_112795efc);
  func_0x00010b96d210((long)_DAT_112795ef8);
  func_0x00010b96d210((long)_DAT_112795ef4);
  func_0x00010b96d210((long)_DAT_112795ef0);
  func_0x00010b96d210((long)_DAT_112795f08);
  func_0x00010b96d210((long)_DAT_112795ed0);
  func_0x00010b96d210((long)_DAT_112795eec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795ee8,0);
  return;
}



/* Entry: 10b96d1e0; end: 10b96d2bb;  */

void FUN_10b96d1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b96d2bc; end: 10b96d2ef; -[SCValdiView willEnqueueIntoValdiPool] */

bool FUN_10b96d2bc(undefined *param_1)

{
  undefined *puVar1;
  
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d93f0;
  _objc_opt_class(PTR_PTR_1126d93f0);
  return param_1 == puVar1;
}



/* Entry: 10b96d2f0; end: 10b96d2fb; -[SCValdiView sizeThatFits:] */

undefined1  [16] FUN_10b96d2f0(void)

{
  return ZEXT816(0);
}



/* Entry: 10b96d2fc; end: 10b96d2ff; -[SCValdiView convertPoint:fromView:] */

void FUN_10b96d2fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2956f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_fromView__112682fe0);
  return;
}



/* Entry: 10b96d300; end: 10b96d303; -[SCValdiView convertPoint:toView:] */

void FUN_10b96d300(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_toView__112682fe8);
  return;
}



/* Entry: 10b96d304; end: 10b96d30b; -[SCValdiView requiresLayoutWhenAnimatingBounds] */

undefined8 FUN_10b96d304(void)

{
  return 0;
}



/* Entry: 10b96d30c; end: 10b96d3f3; -[SCValdiView hitTest:withEvent:] */

void FUN_10b96d30c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_50;
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010c2953a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined1 *)0x0) {
    puStack_48 = PTR_PTR_11270c0a8;
    puStack_50 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&puStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_3;
    func_0x00010c2953a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c295740(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    ppuVar2 = (undefined1 **)param_3;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10b96d3f4; end: 10b96d54b;  */

void FUN_10b96d3f4(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class();
  func_0x00010b96d784();
  if (((ulong)puVar1 & 1) != 0) {
    _objc_retain(param_3);
    param_1 = param_3;
    goto LAB_10b96d52c;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010b96d784();
  if (((ulong)puVar1 & 1) != 0) {
    if (param_4 != 0) {
      _objc_retain(param_3);
      puVar1 = param_3;
      func_0x00010c11f420(param_3,param_2,&PTR____CFConstantStringClassReference_110db3eb8);
      if (puVar1 != (undefined *)0x7fffffffffffffff) {
        puVar2 = param_3;
        func_0x00010c260c20(param_3,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c260c00(param_3,param_2,puVar1 + 1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b96d774();
        if (puVar2 != (undefined *)0x0) {
          func_0x00010bfe8260(param_1,param_2,param_3,puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010b96d77c();
          func_0x00010b96d774();
          if (param_1 != (undefined *)0x0) goto LAB_10b96d52c;
          goto LAB_10b96d500;
        }
      }
      func_0x00010b96d774();
    }
LAB_10b96d500:
    puVar1 = param_3;
    func_0x00010c08fa60();
    if (puVar1 != (undefined *)0x0) {
      param_1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b96d52c;
    }
  }
  param_1 = (undefined *)0x0;
LAB_10b96d52c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


