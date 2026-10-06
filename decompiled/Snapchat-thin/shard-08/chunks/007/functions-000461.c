/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10649fb08; end: 10649fb0f; -[SCContextOperaLayerPresenterTappableElements prepareToAppear] */

void FUN_10649fb08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a5830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_willAppear_112687030)
  ;
  return;
}



/* Entry: 10649fb10; end: 10649fb4f; -[SCContextOperaLayerPresenterTappableElements didAppear] */

void FUN_10649fb10(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000100162d98("APPSTORE");
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf72470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_didAppear_1125ba2c0);
  return;
}



/* Entry: 10649fb50; end: 10649fbbf; -[SCContextOperaLayerPresenterTappableElements teardown] */

void FUN_10649fb50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12b8c0();
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x48),param_2,param_1);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10649fbc0; end: 10649fbcf; -[SCContextOperaLayerPresenterTappableElements isSwipeUpAllowed] */

byte FUN_10649fbc0(long param_1)

{
  return (*(byte *)(param_1 + 0x68) ^ 0xff) & 1;
}



/* Entry: 10649fbd0; end: 10649fbd7; -[SCContextOperaLayerPresenterTappableElements shouldRespondToSubscreenAppearance] */

undefined8 FUN_10649fbd0(void)

{
  return 0;
}



/* Entry: 10649fbd8; end: 10649fbdb; -[SCContextOperaLayerPresenterTappableElements subscreenWillAppearWithUnhideContainers:] */

void FUN_10649fbd8(void)

{
  return;
}



/* Entry: 10649fbdc; end: 10649fbdf; -[SCContextOperaLayerPresenterTappableElements subscreenWillDisappear] */

void FUN_10649fbdc(void)

{
  return;
}



/* Entry: 10649fbe0; end: 10649fea3; -[SCContextOperaLayerPresenterTappableElements operaViewDidSendEvent:page:params:] */

void FUN_10649fbe0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x20);
    uVar1 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if (iVar6 != 0) {
      puVar2 = PTR_PTR_1126c95c8;
      func_0x00010bf98f20(PTR_PTR_1126c95c8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)uVar3 == 0) {
        puVar2 = PTR_PTR_1126b2338;
        func_0x00010bfe8ca0(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126b2338;
        func_0x00010c0c6900(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if (((uVar3 & 1) != 0) || ((int)uVar5 != 0)) {
          if (((uVar5 & 1) != 0) || ((*(byte *)(param_1 + 0x98) & 1) == 0)) {
            func_0x00010c19e920(*(undefined8 *)(param_1 + 0x50));
            *(undefined1 *)(param_1 + 0x98) = 0;
          }
          if (*(char *)(param_1 + 0x2a) == '\x01') {
            uVar1 = param_4;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_initWeak(auStack_58,param_1);
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0xc2000000;
            pcStack_80 = FUN_10649fea4;
            puStack_78 = &UNK_110848218;
            _objc_copyWeak(auStack_60,auStack_58);
            _objc_retain(uVar1);
            uStack_70 = uVar1;
            _objc_retain(param_5);
            uStack_68 = param_5;
            func_0x000100162d98("APPSTORE",&puStack_90);
            _objc_release(uStack_68);
            _objc_release(uStack_70);
            _objc_destroyWeak(auStack_60);
            _objc_destroyWeak(auStack_58);
            _objc_release(uVar1);
          }
          else {
            func_0x00010be73f20(param_1);
          }
        }
      }
      else {
        puVar2 = PTR_PTR_1126c9680;
        func_0x00010c06eb00(PTR_PTR_1126c9680);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar4 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar2);
        uVar3 = uVar5;
        if ((uVar4 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar5);
        uVar5 = uVar3;
        func_0x00010bf1f3c0();
        _objc_release(uVar3);
        *(char *)(param_1 + 0x98) = (char)uVar5;
        func_0x00010c19e920(*(undefined8 *)(param_1 + 0x50));
      }
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10649fea4; end: 10649fefb;  */

void FUN_10649fea4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x28) == '\x01')) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c0720c0(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    if ((int)uVar2 != 0) {
      func_0x00010be73f20(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10649fefc; end: 1064a02eb; -[SCContextOperaLayerPresenterTappableElements _pinOverlayForDisplayEventWithParams:] */

void FUN_10649fefc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c12b8c0(param_1);
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d9e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cae08;
  _objc_opt_class(PTR_PTR_1126cae08);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) goto LAB_1064a02a0;
  uVar5 = uVar2;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010010fab4();
  uVar4 = uVar5;
  if ((int)uVar6 == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  if (uVar4 != 0) {
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010bfe90c0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar7 = uVar18;
    _objc_opt_isKindOfClass(uVar18,puVar3);
    uVar6 = uVar18;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar18);
    if (uVar6 == 0) {
      if (*(char *)(param_1 + 0x29) == '\x01') {
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar2;
        goto joined_r0x0001064a00a0;
      }
      uVar18 = 0;
    }
    else {
      func_0x00010c29bf00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar18;
      func_0x00010c070780();
      _objc_release(uVar5);
      uVar2 = uVar2 & 1;
joined_r0x0001064a00a0:
      if (uVar2 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar18;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar8;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar18;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar18;
        func_0x00010bf1ff80(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar18;
        func_0x00010c2793a0(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_1 + 0x58);
        *(undefined **)(param_1 + 0x58) = puVar3;
        _objc_release(uVar17);
        _objc_release(uVar14);
        _objc_release(uVar7);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar6);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar5);
        _objc_release(uVar9);
        _objc_release(uVar15);
        _objc_release(uVar2);
        _objc_release(uVar8);
        func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        if (*(char *)(param_1 + 0x29) == '\x01') {
          uVar15 = *(undefined8 *)(param_1 + 0x60);
          func_0x00010c0f0780(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08cdc0();
          _objc_release(uVar15);
        }
      }
    }
    _objc_release(uVar18);
  }
  _objc_release(uVar4);
LAB_1064a02a0:
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)(param_3 + 0x58);
  func_0x00010bf529e0();
  if (lVar16 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  uVar15 = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_3 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 1064a02ec; end: 1064a032b; -[SCContextOperaLayerPresenterTappableElements removeConstraints] */

void FUN_1064a02ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + 0x58));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064a032c; end: 1064a03bf; -[SCContextOperaLayerPresenterTappableElements tappableElements:willStartAction:] */

void FUN_1064a032c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x68) = 1;
  uVar1 = param_4;
  func_0x00010bf31ca0();
  if ((int)uVar1 != 0x1a) {
    func_0x00010bf31ca0(param_4);
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10fb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064a03c0; end: 1064a03ff; -[SCContextOperaLayerPresenterTappableElements tappableElements:didEndAction:] */

void FUN_1064a03c0(long param_1)

{
  *(undefined1 *)(param_1 + 0x68) = 0;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10fac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064a0400; end: 1064a04d3; -[SCContextOperaLayerPresenterTappableElements pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

long FUN_1064a0400(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 in_x5;
  long lVar3;
  
  _objc_retain(in_x5);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010010fab4(lVar3,PTR_DAT_1126a53d0);
  lVar1 = lVar3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = -1;
  }
  else {
    func_0x00010c0f24a0(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(in_x5);
  return lVar3;
}



/* Entry: 1064a04d4; end: 1064a0ab7; -[SCContextOperaLayerPresenterTappableElements _hideForPrompt:] */

void FUN_1064a04d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar2 = uVar1;
  func_0x0001084365e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd8500();
  uVar16 = 0;
  if ((int)uVar3 != 0) {
    uVar3 = uVar2;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010c1185e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uVar3 = uVar16;
  func_0x00010c08fa60();
  if (uVar3 == 0) goto LAB_1064a0a24;
  uVar3 = uVar2;
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c11cb60();
  _objc_release(uVar3);
  if ((int)uVar5 != 3) goto LAB_1064a0a24;
  uVar3 = uVar2;
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c118560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010bfe2ee0();
  uVar6 = uVar5;
  func_0x00010c0b5940(uVar5);
  func_0x000100c4a928(uVar3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c08bda0();
  if (uVar3 == 0x14) {
    uVar3 = uVar6;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) goto LAB_1064a06ac;
    func_0x00010bfe1560(*(undefined8 *)(param_1 + 0x50));
  }
  else {
LAB_1064a06ac:
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1064a0ab8;
    uStack_88 = 0x1064a0ac8;
    uVar17 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar17);
    uVar3 = uVar2;
    uStack_80 = uVar17;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bfdab40();
    _objc_release(uVar3);
    if ((int)uVar7 == 0) {
      uVar3 = uVar6;
      func_0x00010c0720c0();
      if ((int)uVar3 != 0) {
        uVar3 = uVar1;
        func_0x00010c290fa0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0xc2000000;
        pcStack_c0 = FUN_1064a0ad0;
        puStack_b8 = &UNK_110842b58;
        puStack_b0 = &uStack_a8;
        func_0x00010c0c12a0();
        goto LAB_1064a082c;
      }
    }
    else {
      uVar3 = uVar2;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c118860();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfe2ee0();
      uVar9 = uVar2;
      func_0x00010c091b80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c118860();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c0b5940();
      func_0x000100c4a928(uVar8,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar8;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = puStack_a0[5];
      puStack_a0[5] = uVar11;
      _objc_release(uVar17);
      _objc_release(uVar8);
      _objc_release(uVar10);
      _objc_release(uVar9);
LAB_1064a082c:
      _objc_release(uVar7);
      _objc_release(uVar3);
    }
    _objc_initWeak(auStack_d8,param_1);
    uVar12 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar12;
    func_0x00010bf60a40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar17;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_1064a0b08;
    puStack_100 = &UNK_110924d50;
    _objc_copyWeak(auStack_e0,auStack_d8);
    uStack_f8 = uVar16;
    _objc_retain(uVar6);
    puStack_e8 = &uStack_a8;
    uVar14 = uVar13;
    uStack_f0 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar14;
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(puVar4);
    _objc_release(uVar17);
    _objc_release(uVar12);
    uVar17 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c091b80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_120,auStack_d8);
    func_0x00010bfc92c0(uVar17);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar17);
    _objc_destroyWeak(auStack_120);
    _objc_release(uStack_f0);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_d8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
LAB_1064a0a24:
  _objc_release(uVar16);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1064a0ab8; end: 1064a0acf;  */

void FUN_1064a0ab8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064a0ad0; end: 1064a0b07;  */

void FUN_1064a0ad0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064a0b08; end: 1064a0bbb;  */

void FUN_1064a0b08(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = param_2;
    func_0x00010c1185e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010c0720c0();
      if (((iVar1 == 0) || (uVar3 = param_2, func_0x00010c073080(), (uVar3 & 1) != 0)) ||
         (uVar3 = param_2, func_0x00010c06eda0(), (int)uVar3 != 0)) {
        func_0x00010bfe1560(*(undefined8 *)(lVar2 + 0x50));
      }
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064a0bbc; end: 1064a0c8f;  */

void FUN_1064a0bbc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    uVar1 = param_2;
    func_0x00010c27d340();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x50) != 0) {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_1064a0c90;
      puStack_48 = &UNK_110841f80;
      _objc_retain(uVar1);
      uStack_40 = uVar1;
      lStack_38 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_60);
      _objc_release(uStack_40);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1064a0c90; end: 1064a0cef;  */

void FUN_1064a0c90(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06fe80();
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50),PTR_s_hide_1125d5f18);
    return;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x28) + 0x80) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c235850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50),PTR_s_show_11266b038);
  return;
}



/* Entry: 1064a0cf0; end: 1064a0d07; -[SCContextOperaLayerPresenterTappableElements delegate] */

void FUN_1064a0cf0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064a0d08; end: 1064a0d13; -[SCContextOperaLayerPresenterTappableElements setDelegate:] */

void FUN_1064a0d08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 1064a0d14; end: 1064a0de3; -[SCContextOperaLayerPresenterTappableElements .cxx_destruct] */

void FUN_1064a0d14(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064a0de4; end: 1064a1143; -[SCContextCenterTapPillView initWithTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1064a0de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_3);
  puStack_78 = PTR_PTR_1126f15f8;
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_80 = param_1;
  _objc_msgSendSuper2(uVar8,uVar9,uVar10,uVar11,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0);
    _objc_release(puVar3);
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_1127489bc;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f40();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b08d8;
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100b74f58(0x4020000000000000,0x3fbeb851eb851eb8,0,0x4010000000000000,puVar2,puVar1,
                        puVar4);
    _objc_release(puVar4);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar7 = (long)_DAT_1127489c0;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar8);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar5 = puVar2;
    func_0x00010bfe9720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_1127489c4;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar8);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127489c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127489c8) = puVar4;
    _objc_release(uVar8);
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064a1144; end: 1064a117b; -[SCContextCenterTapPillView _handlePillTap:] */

void FUN_1064a1144(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf347e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064a117c; end: 1064a1763; -[SCContextCenterTapPillView showAtLocation:inView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a117c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                  ,undefined8 param_6,long param_7)

{
  double *pdVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar19 = param_1;
  dVar16 = param_2;
  _objc_retain(param_7);
  func_0x00010c12c960(param_5);
  pdVar1 = (double *)(param_5 + (long)_DAT_1127489cc);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  func_0x00010befbb60(param_7);
  func_0x00010bf21300(param_7);
  func_0x00010c1cbe20(param_5);
  func_0x00010c08cdc0(param_5);
  func_0x00010bfb68e0(param_5);
  dVar20 = *pdVar1;
  dVar12 = dVar19;
  _CGRectGetMinX();
  dVar13 = dVar19;
  _CGRectGetWidth(dVar19,dVar16,param_3,param_4);
  dVar14 = dVar19;
  dVar17 = dVar16;
  uVar15 = param_3;
  uVar23 = param_4;
  _CGRectGetWidth(dVar19,dVar16,param_3,param_4);
  dVar22 = 0.5;
  if (0.0 < dVar14) {
    dVar22 = 7.0;
    if (7.0 <= dVar20 - dVar12) {
      dVar22 = dVar20 - dVar12;
    }
    if (dVar13 + -7.0 <= dVar22) {
      dVar22 = dVar13 + -7.0;
    }
    _CGRectGetWidth(dVar19,dVar16,param_3,param_4);
    dVar22 = dVar22 / dVar19;
    dVar14 = dVar19;
    dVar17 = dVar16;
    uVar15 = param_3;
    uVar23 = param_4;
  }
  func_0x00010bfb68e0(param_5);
  uVar4 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = 0x3ff0000000000000;
  func_0x00010c167d20(dVar22,0x3ff0000000000000);
  _objc_release(uVar4);
  dVar19 = dVar14;
  _CGRectGetMinX(dVar14,dVar17,uVar15,uVar23);
  dVar12 = dVar14;
  _CGRectGetWidth(dVar14,dVar17,uVar15,uVar23);
  dVar13 = dVar14;
  _CGRectGetMinY(dVar14,dVar17,uVar15,uVar23);
  _CGRectGetHeight(dVar14,dVar17,uVar15,uVar23);
  uVar4 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dee80(dVar19 + dVar12 * dVar22,dVar13 + dVar14);
  _objc_release(uVar4);
  uVar23 = 0;
  uVar4 = param_5;
  func_0x00010c1677c0(0);
  _UIAccessibilityIsReduceMotionEnabled();
  bVar3 = (int)uVar4 == 0;
  uVar15 = 0x3ff0000000000000;
  if (bVar3) {
    uVar15 = 0x3fe6666666666666;
  }
  uVar18 = 0x3ff0000000000000;
  if (bVar3) {
    uVar18 = 0x3fe199999999999a;
  }
  _CGAffineTransformMakeScale(&uStack_f8,uVar15,uVar18);
  uStack_128 = uStack_f0;
  uStack_130 = uStack_f8;
  uStack_118 = uStack_e0;
  uStack_120 = uStack_e8;
  uStack_108 = uStack_d0;
  uStack_110 = uStack_d8;
  func_0x00010c219960(param_5);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(param_1 + -8.0,param_2 + -8.0,0x4030000000000000,0x4030000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar5);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar5);
    _objc_release(puVar7);
    func_0x00010c1d4bc0(0x3da3d70a,puVar5);
    lVar8 = param_7;
    func_0x00010c08c0e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(lVar8);
    puVar7 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180();
    func_0x00010c216920(puVar7);
    dVar19 = 0.315;
    func_0x00010c192d40(0x3fd428f5c28f5c29,puVar7);
    puVar9 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180();
    func_0x00010c216920(puVar9);
    func_0x00010c192d40(0x3fd428f5c28f5c29,puVar9);
    puVar10 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
    func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c8 = puVar7;
    puStack_c0 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168400(puVar10);
    _objc_release(puVar11);
    func_0x00010c192d40(0x3fd428f5c28f5c29,puVar10);
    puVar11 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar10);
    _objc_release(puVar11);
    func_0x00010c1ea580(puVar10);
    func_0x00010c19bc40(puVar10);
    func_0x00010bef6c20(puVar5);
    func_0x00010bf8b160(puVar10);
    uVar15 = 0;
    _dispatch_time(0,(long)(dVar19 * 1000000000.0));
    puStack_158 = puVar2;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_1064a1764;
    puStack_140 = &UNK_110842e18;
    puStack_138 = puVar5;
    _objc_retain(puVar5);
    func_0x00010058c530(uVar15,PTR___dispatch_main_q_11034be20,&puStack_158);
    _objc_release(puStack_138);
    _objc_release(puVar5);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    uVar21 = 0x3fe8000000000000;
    uVar23 = 0x3fe999999999999a;
    uVar15 = 0x3fd6666666666666;
  }
  else {
    uVar15 = 0x3fc999999999999a;
  }
  func_0x00010bf03460(uVar15,0,uVar21,uVar23,PTR__OBJC_CLASS___UIView_1126aec20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_7 + 0x20),PTR_s_removeFromSuperlayer_112628c70);
    return;
  }
  return;
}



/* Entry: 1064a1764; end: 1064a176b;  */

void FUN_1064a1764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperlayer_112628c70);
  return;
}



/* Entry: 1064a176c; end: 1064a17bf;  */

void FUN_1064a176c(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_50);
  return;
}



/* Entry: 1064a17c0; end: 1064a17c3; -[SCContextCenterTapPillView hide] */

void FUN_1064a17c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1064a17c4; end: 1064a1a83; -[SCContextCenterTapPillView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a17c4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126f15f8;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  lVar5 = (long)_DAT_1127489c0;
  func_0x00010c23d620(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  dVar8 = 16.0;
  if (16.0 <= param_4) {
    dVar8 = param_4;
  }
  dVar8 = dVar8 + 20.0;
  dVar11 = param_3 + 8.0 + 16.0;
  dVar10 = dVar11 + 32.0;
  dVar9 = dVar8 + 6.0;
  dVar7 = dVar10;
  func_0x00010c1739e0(0,0,dVar10,dVar9,param_5);
  lVar2 = param_5;
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  if (dVar7 == 0.0) {
    dVar7 = dVar10;
  }
  _objc_release(lVar2);
  pdVar1 = (double *)(param_5 + _DAT_1127489cc);
  dVar6 = *pdVar1 - dVar10 * 0.5;
  dVar7 = (dVar7 - dVar10) + -8.0;
  if (dVar7 <= dVar6) {
    dVar6 = dVar7;
  }
  if (dVar6 <= 8.0) {
    dVar6 = 8.0;
  }
  dVar7 = dVar9;
  func_0x00010c19f0e0(dVar6,pdVar1[1] - dVar9,dVar10,dVar9,param_5);
  dVar11 = (dVar10 - dVar11) * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010c19f0e0(dVar11,dVar8 * 0.5 - dVar7 * 0.5,param_3,*(undefined8 *)(param_5 + lVar5));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetMaxX();
  func_0x00010c19f0e0(dVar11 + 8.0,dVar8 * 0.5 + -8.0,0x4030000000000000,0x4030000000000000,
                      *(undefined8 *)(param_5 + _DAT_1127489c4));
  dVar11 = 0.0;
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(0,0,dVar10,dVar8,0x4036000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = *pdVar1;
  func_0x00010bfb68e0(param_5);
  dVar7 = 7.0;
  if (7.0 <= dVar6 - dVar11) {
    dVar7 = dVar6 - dVar11;
  }
  if (dVar10 + -7.0 <= dVar7) {
    dVar7 = dVar10 + -7.0;
  }
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(dVar7 + -7.0,dVar8);
  func_0x00010bef98c0(dVar7,dVar9,puVar4);
  func_0x00010bef98c0(dVar7 + 7.0,dVar8,puVar4);
  func_0x00010bf06f40(puVar3);
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_5 + _DAT_1127489bc));
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc1040();
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 1064a1a84; end: 1064a1aa3; -[SCContextCenterTapPillView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a1a84(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127489d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064a1aa4; end: 1064a1ab7; -[SCContextCenterTapPillView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a1aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127489d0,param_3);
  return;
}



/* Entry: 1064a1ab8; end: 1064a1b23; -[SCContextCenterTapPillView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a1ab8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127489d0);
  _objc_storeStrong(param_1 + _DAT_1127489c8,0);
  _objc_storeStrong(param_1 + _DAT_1127489bc,0);
  _objc_storeStrong(param_1 + _DAT_1127489c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127489c0,0);
  return;
}



/* Entry: 1064a1b24; end: 1064a1c63; -[SCContextMenuStateManager initWithOperaConfiguration:operaController:V3InteropProvider:circumstanceEngine:contextExperimentService:storiesConfigProvider:] */

undefined1 *
FUN_1064a1b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_48 = PTR_PTR_1126f1600;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126caea0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1064a1c64; end: 1064a1cbb; -[SCContextMenuStateManager setContainerView:contextMenuController:] */

void FUN_1064a1c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c181a20(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064a1cbc; end: 1064a1cc3; -[SCContextMenuStateManager isLongPressing] */

undefined1 FUN_1064a1cbc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 1064a1cc4; end: 1064a1e2f; -[SCContextMenuStateManager registeredEventsForOperaSession] */

void FUN_1064a1cc4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **in_x4;
  undefined1 uVar15;
  long lVar16;
  undefined *puVar17;
  int iVar18;
  undefined8 uVar19;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar11 = &puStack_90;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = PTR_PTR_1126b2ea8;
  func_0x00010c22d420();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2ea8;
  puStack_90 = puVar17;
  func_0x00010c22d440();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ea8;
  puStack_88 = puVar1;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2ea8;
  puStack_80 = puVar2;
  func_0x00010c0b4d80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2ea8;
  puStack_78 = puVar3;
  func_0x00010c0b4e00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2ea8;
  puStack_70 = puVar4;
  func_0x00010c0b4d60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2ea8;
  puStack_68 = puVar5;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = (undefined **)0x7;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = ppuVar13;
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar13);
  _objc_retain(in_x4);
  iVar18 = (int)*(undefined8 *)(puVar17 + 0x48);
  ppuVar8 = ppuVar13;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar8;
  func_0x00010c0720c0();
  _objc_release(ppuVar8);
  if ((iVar18 == 0) ||
     (ppuVar8 = ppuVar11, ppuVar12 = in_x4, func_0x000107b27f14(ppuVar11,ppuVar13),
     (int)ppuVar8 == 0)) goto LAB_1064a2198;
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar11;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if (((ulong)ppuVar8 & 1) == 0) {
    puVar1 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4e00(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar11;
    func_0x00010c0720c0();
    if ((int)ppuVar8 != 0) {
      _objc_release(puVar1);
LAB_1064a1f74:
      uVar15 = 0;
      goto LAB_1064a1f78;
    }
    puVar2 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4d60(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar11;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)ppuVar8 != 0) goto LAB_1064a1f74;
  }
  else {
    uVar15 = 1;
LAB_1064a1f78:
    puVar17[0x19] = uVar15;
  }
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar11;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)ppuVar8 == 0) {
    _objc_retain(ppuVar13);
    ppuVar8 = ppuVar13;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &PTR____CFConstantStringClassReference_110f0e078;
    ppuVar10 = ppuVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar10;
    func_0x00010bf1f3c0();
    _objc_release(ppuVar10);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar13;
    if (((ulong)ppuVar9 & 1) != 0) {
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &PTR____CFConstantStringClassReference_110dcab38;
      ppuVar10 = ppuVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      puVar1 = PTR_PTR_1126b2390;
      _objc_opt_class(PTR_PTR_1126b2390);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar1);
      ppuVar8 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar8 = (undefined **)0x0;
      }
      _objc_retain(ppuVar8);
      _objc_release(ppuVar10);
      ppuVar10 = ppuVar8;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar10;
      func_0x00010c06b5c0();
      _objc_release(ppuVar10);
      _objc_release(ppuVar13);
      if ((int)ppuVar8 != 0) {
        ppuVar12 = ppuVar11;
        ppuVar14 = ppuVar13;
        func_0x00010be2e640(puVar17);
      }
      goto LAB_1064a2198;
    }
  }
  else {
    uVar19 = *(undefined8 *)(puVar17 + 0x60);
    ppuVar8 = (undefined **)PTR_PTR_1126b2ea8;
    func_0x00010c236be0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = *(undefined ***)(puVar17 + 0x38);
    func_0x00010beeed40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126b2cf0;
    func_0x00010bfb6480();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b2ea8;
    func_0x00010c235940();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar8;
    ppuVar14 = ppuVar10;
    func_0x00010c0eb7c0(uVar19);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar17);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar8);
LAB_1064a2198:
  _objc_release(in_x4);
  _objc_release(ppuVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar14);
  puVar17 = ppuVar11[9];
  ppuVar11[9] = (undefined *)ppuVar14;
  _objc_retain(ppuVar14);
  _objc_release(puVar17);
  puVar17 = ppuVar11[0xc];
  ppuVar11[0xc] = (undefined *)ppuVar12;
  _objc_retain(ppuVar12);
  _objc_release(puVar17);
  _objc_release(ppuVar14);
  func_0x00010c127820(ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(ppuVar12);
  _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 1064a1e30; end: 1064a21eb; -[SCContextMenuStateManager operaViewDidSendEvent:page:params:] */

void FUN_1064a1e30(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 uVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar11 = (int)*(undefined8 *)(param_1 + 0x48);
  ppuVar1 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar1;
  func_0x00010c0720c0();
  _objc_release(ppuVar1);
  if ((iVar11 == 0) ||
     (ppuVar1 = param_3, ppuVar6 = param_5, func_0x000107b27f14(param_3,param_4), (int)ppuVar1 == 0)
     ) goto LAB_1064a2198;
  puVar10 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar10);
  if (((ulong)ppuVar1 & 1) == 0) {
    puVar10 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4e00(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)ppuVar1 != 0) {
      _objc_release(puVar10);
LAB_1064a1f74:
      uVar8 = 0;
      goto LAB_1064a1f78;
    }
    puVar2 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4d60(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar10);
    if ((int)ppuVar1 != 0) goto LAB_1064a1f74;
  }
  else {
    uVar8 = 1;
LAB_1064a1f78:
    *(undefined1 *)(param_1 + 0x19) = uVar8;
  }
  puVar10 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar10);
  if ((int)ppuVar1 == 0) {
    _objc_retain(param_4);
    ppuVar1 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110f0e078;
    ppuVar5 = ppuVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar5;
    func_0x00010bf1f3c0();
    _objc_release(ppuVar5);
    _objc_release(ppuVar1);
    ppuVar1 = param_4;
    if (((ulong)ppuVar3 & 1) != 0) {
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110dcab38;
      ppuVar5 = ppuVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      puVar10 = PTR_PTR_1126b2390;
      _objc_opt_class(PTR_PTR_1126b2390);
      ppuVar3 = ppuVar5;
      _objc_opt_isKindOfClass(ppuVar5,puVar10);
      ppuVar1 = ppuVar5;
      if (((ulong)ppuVar3 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar5);
      ppuVar5 = ppuVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      ppuVar1 = ppuVar5;
      func_0x00010c06b5c0();
      _objc_release(ppuVar5);
      _objc_release(param_4);
      if ((int)ppuVar1 != 0) {
        ppuVar6 = param_3;
        ppuVar7 = param_4;
        func_0x00010be2e640(param_1);
      }
      goto LAB_1064a2198;
    }
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0x60);
    ppuVar1 = (undefined **)PTR_PTR_1126b2ea8;
    func_0x00010c236be0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = *(undefined ***)(param_1 + 0x38);
    func_0x00010beeed40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b2cf0;
    func_0x00010bfb6480();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2ea8;
    func_0x00010c235940();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar1;
    ppuVar7 = ppuVar5;
    func_0x00010c0eb7c0(uVar12);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar10);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar1);
LAB_1064a2198:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar7);
  puVar10 = param_3[9];
  param_3[9] = (undefined *)ppuVar7;
  _objc_retain(ppuVar7);
  _objc_release(puVar10);
  puVar10 = param_3[0xc];
  param_3[0xc] = (undefined *)ppuVar6;
  _objc_retain(ppuVar6);
  _objc_release(puVar10);
  _objc_release(ppuVar7);
  func_0x00010c127820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(ppuVar6);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064a21ec; end: 1064a228f; -[SCContextMenuStateManager attachListener:pageId:] */

void FUN_1064a21ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _objc_release(param_4);
  lVar1 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3,param_2,param_1,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064a2290; end: 1064a22eb; -[SCContextMenuStateManager detachListener:] */

void FUN_1064a2290(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c12cf80(param_3,param_2,param_1);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064a22ec; end: 1064a2acb; -[SCContextMenuStateManager _handlePressAndHoldOptOutTreamentEvent:page:params:] */

void FUN_1064a22ec(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  ulong param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 uVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_6;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar16 = 0;
  }
  else {
    uVar4 = param_6;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c067fc0();
    uVar16 = (uint)(uVar6 == 0x62);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = (uint)*(undefined8 *)(param_3 + 0x58);
  func_0x00010c23e020();
  puVar7 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  if ((int)lVar8 != 0) {
    puVar7 = PTR_PTR_1126b2e48;
    func_0x00010c09f960(PTR_PTR_1126b2e48);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_7;
    func_0x00010c0e00e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar18 = param_1;
    _objc_release(uVar10);
    _objc_release(puVar7);
    func_0x00010c100240(PTR_PTR_1126c95f0);
    uVar2 = param_6;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b2d20;
    func_0x00010c100260(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    _objc_release(puVar7);
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c06b7e0();
    if (((((int)uVar2 != 0) || (uVar3 == 0)) || ((int)uVar5 == 0)) ||
       (((double)(float)dVar18 <= param_1 &&
        (param_2 = 0x3ff0000000000000, param_1 <= 1.0 - (double)(float)dVar18)))) {
      if ((uVar1 & uVar16) == 0) {
        func_0x00010c0f5b20(*(undefined8 *)(param_3 + 0x30));
        func_0x00010bfe1c20(*(undefined8 *)(param_3 + 0x30));
        puVar7 = PTR_PTR_1126b2348;
        func_0x00010c0b4f60(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_7;
        func_0x00010c0e00e0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc1060();
        *(undefined8 *)(param_3 + 8) = param_2;
        _objc_release(uVar10);
        _objc_release(puVar7);
        *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_3 + 8);
        *(undefined1 *)(param_3 + 0x18) = 1;
        func_0x00010bf03ec0(0x3ff0000000000000,*(undefined8 *)(param_3 + 0x40));
        puVar7 = PTR_PTR_1126affa8;
        func_0x00010c22bc20(PTR_PTR_1126affa8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f8760();
        _objc_release(puVar7);
      }
      else {
        uVar17 = *(undefined8 *)(param_3 + 0x60);
        puVar7 = PTR_PTR_1126b2ea8;
        func_0x00010c236be0(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_3 + 0x38);
        func_0x00010beeed40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0ea8e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126b2cf0;
        func_0x00010bfb6480();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126b2ea8;
        func_0x00010c0b4cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(uVar17);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(puVar7);
        puVar7 = PTR_PTR_1126affa8;
        func_0x00010c22bc20(PTR_PTR_1126affa8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f8760();
        _objc_release(puVar7);
      }
    }
    else {
      *(undefined1 *)(param_3 + 0x1a) = 1;
    }
    goto LAB_1064a2a74;
  }
  puVar7 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4d80(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  func_0x00010c0720c0();
  _objc_release(puVar7);
  if ((int)lVar8 == 0) {
    puVar7 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4e00(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)lVar8 == 0) {
      puVar7 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4d60(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_5;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      if ((int)lVar8 == 0) goto LAB_1064a2a74;
LAB_1064a2914:
      func_0x00010c2368e0(*(undefined8 *)(param_3 + 0x30));
      func_0x00010c13d1c0(*(undefined8 *)(param_3 + 0x30));
    }
    else {
      if (*(char *)(param_3 + 0x1a) == '\x01') {
        *(undefined1 *)(param_3 + 0x1a) = 0;
        goto LAB_1064a2a74;
      }
      puVar7 = PTR_PTR_1126b2348;
      func_0x00010c0b4f60(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_7;
      func_0x00010c0e00e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1060();
      *(undefined8 *)(param_3 + 0x10) = param_2;
      _objc_release(uVar10);
      _objc_release(puVar7);
      if (15.0 < *(double *)(param_3 + 0x10) - *(double *)(param_3 + 8)) goto LAB_1064a2914;
      uVar17 = *(undefined8 *)(param_3 + 0x60);
      puVar7 = PTR_PTR_1126b2ea8;
      func_0x00010c236be0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010beeed40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126b2cf0;
      func_0x00010bfb6480();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4e00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(uVar17);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(puVar7);
      uVar2 = param_6;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
        func_0x00010c13d1c0(*(undefined8 *)(param_3 + 0x30));
      }
      func_0x00010c2368e0(*(undefined8 *)(param_3 + 0x30));
    }
    func_0x00010bf03ec0(0,*(undefined8 *)(param_3 + 0x40));
    goto LAB_1064a2a74;
  }
  if ((*(byte *)(param_3 + 0x1a) & 1) != 0) goto LAB_1064a2a74;
  puVar7 = PTR_PTR_1126b2348;
  func_0x00010c0b4f60(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_7;
  func_0x00010c0e00e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1060();
  *(undefined8 *)(param_3 + 0x10) = param_2;
  _objc_release(uVar10);
  _objc_release(puVar7);
  dVar19 = *(double *)(param_3 + 0x10) - *(double *)(param_3 + 8);
  dVar20 = (double)NEON_fminnm(dVar19,0);
  dVar18 = dVar19 + -50.0;
  if (dVar19 <= 50.0) {
    dVar18 = dVar20;
  }
  dVar20 = (double)NEON_fminnm(dVar19,0x4049000000000000);
  dVar19 = 0.0;
  if (0.0 <= dVar20) {
    dVar19 = dVar20;
  }
  func_0x00010bf03ec0(dVar19 / -50.0 + 1.0,*(undefined8 *)(param_3 + 0x40));
  dVar19 = *(double *)(param_3 + 8);
  if (*(double *)(param_3 + 0x10) - dVar19 <= 15.0) {
    if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
      uVar14 = 1;
      goto LAB_1064a287c;
    }
  }
  else if (*(byte *)(param_3 + 0x18) != 0) {
    uVar14 = 0;
LAB_1064a287c:
    *(undefined1 *)(param_3 + 0x18) = uVar14;
    puVar7 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar7);
    dVar19 = *(double *)(param_3 + 8);
  }
  *(double *)(param_3 + 8) = dVar18 + dVar19;
LAB_1064a2a74:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_5 + 0x68,0);
  _objc_storeStrong(param_5 + 0x60,0);
  _objc_storeStrong(param_5 + 0x58,0);
  _objc_storeStrong(param_5 + 0x50,0);
  _objc_storeStrong(param_5 + 0x48,0);
  _objc_storeStrong(param_5 + 0x40,0);
  _objc_storeStrong(param_5 + 0x38,0);
  _objc_storeStrong(param_5 + 0x30,0);
  _objc_storeStrong(param_5 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_5 + 0x20,0);
  return;
}



/* Entry: 1064a2acc; end: 1064a2b5b; -[SCContextMenuStateManager .cxx_destruct] */

void FUN_1064a2acc(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1064a2b5c; end: 1064a2bcf; -[SCContextOperaController initWithEventAnnouncer:] */

undefined1 * FUN_1064a2b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1608;
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



/* Entry: 1064a2bd0; end: 1064a2c13; -[SCContextOperaController showChrome] */

void FUN_1064a2bd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c2368e0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064a2c14; end: 1064a2c57; -[SCContextOperaController hideChrome] */

void FUN_1064a2c14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010bfe1c20(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064a2c58; end: 1064a2c9b; -[SCContextOperaController pause] */

void FUN_1064a2c58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c0f5e80(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064a2c9c; end: 1064a2cdf; -[SCContextOperaController resume] */

void FUN_1064a2c9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c13d5c0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064a2ce0; end: 1064a2ceb; -[SCContextOperaController .cxx_destruct] */

void FUN_1064a2ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064a2cec; end: 1064a2de7; -[SCContextOperaExperimentsProvider initWithCircumstanceEngine:context:ucc:memories:] */

undefined1 *
FUN_1064a2cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f1610;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064a2de8; end: 1064a2def; -[SCContextOperaExperimentsProvider circumstanceEngine] */

undefined8 FUN_1064a2de8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1064a2df0; end: 1064a2df7; -[SCContextOperaExperimentsProvider context] */

undefined8 FUN_1064a2df0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1064a2df8; end: 1064a2dff; -[SCContextOperaExperimentsProvider ucc] */

undefined8 FUN_1064a2df8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1064a2e00; end: 1064a2e07; -[SCContextOperaExperimentsProvider memories] */

undefined8 FUN_1064a2e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1064a2e08; end: 1064a2e4f; -[SCContextOperaExperimentsProvider .cxx_destruct] */

void FUN_1064a2e08(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064a2e50; end: 1064a2e97; +[SCContextOperaLayer layerWithPage:] */

void FUN_1064a2e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1064a2e98; end: 1064a2f03; -[SCContextOperaLayer initWithPage:] */

undefined1 * FUN_1064a2e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1618;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064a2f04; end: 1064a2f0b; -[SCContextOperaLayer type] */

undefined8 FUN_1064a2f04(void)

{
  return 0x13;
}



/* Entry: 1064a2f0c; end: 1064a31cf; -[SCContextOperaLayer isEqual:] */

uint FUN_1064a2f0c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uStack_6c;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar1 = 1;
  }
  else {
    puVar2 = param_3;
    _objc_opt_class();
    puVar3 = PTR_PTR_1126cae10;
    _objc_opt_class();
    if (puVar2 == puVar3) {
      _objc_retain(param_3);
      puVar2 = param_1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == puVar5) {
        uStack_6c = 1;
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0720c0(puVar4,param_2,puVar5);
        uStack_6c = (uint)puVar2;
      }
      puVar2 = param_1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar6 == puVar7) {
        uVar1 = 1;
      }
      else {
        puVar2 = puVar6;
        func_0x00010c0720c0(puVar6,param_2,puVar7);
        uVar1 = (uint)puVar2;
      }
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010c0f0be0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x00010c0720c0(puVar2,param_2,puVar8);
      uVar1 = (uint)puVar9 & uStack_6c & uVar1;
      _objc_release(puVar8);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_1);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(param_3);
    }
    else {
      uVar1 = 0;
    }
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1064a31d0; end: 1064a31e7; -[SCContextOperaLayer page] */

void FUN_1064a31d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064a31e8; end: 1064a31f3; -[SCContextOperaLayer setPage:] */

void FUN_1064a31e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1064a31f4; end: 1064a31fb; -[SCContextOperaLayer .cxx_destruct] */

void FUN_1064a31f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1064a31fc; end: 1064a3273; -[SCContextOperaLayerView hitTest:withEvent:] */

void FUN_1064a31fc(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f1620;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)0x0 || ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064a3274; end: 1064a41a7; -[SCContextOperaLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:userSession:experimentsProvider:contextSpotlightScopeExposer:contextSpotlightScopeServices:tappableElementsScopeExposer:pollsDynamicStickerScopeExposer:pollsDynamicStickerScopeServices:planDynamicStickerScopeExposer:planDynamicStickerScopeServices:viewLogger:contextServices:operaChromeScopeExposer:operaChromeScopeServices:dataPublisher:aifTopLevelCardsExperimentsService:performerProvider:customAppThemeProvider:lensPromptDataProvider:nglStudySettings:storiesConfigProvider:appStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1064a3274(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
             undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puStack_80 = PTR_PTR_1126f1628;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar13 = (long)_DAT_112748a2c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_8;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112748a30;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_21;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126caea8;
    _objc_alloc();
    func_0x00010c001860();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748a34);
    *(undefined **)((long)puVar1 + (long)_DAT_112748a34) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126caeb0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748a38);
    *(undefined **)((long)puVar1 + (long)_DAT_112748a38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126caeb8;
    _objc_alloc();
    uVar4 = param_5;
    func_0x00010bf461c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c001480();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748a3c);
    *(undefined **)((long)puVar1 + (long)_DAT_112748a3c) = puVar3;
    _objc_release(uVar2);
    _objc_release(uVar4);
    lVar14 = (long)_DAT_112748a40;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_6;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112748a44;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_7;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112748a48;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_9;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112748a4c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_10;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112748a50;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_11;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112748a54;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_12;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112748a58;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_13;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112748a5c;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_14;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112748a60;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_15;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112748a64;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_18;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112748a68;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_19;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112748a6c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748a70);
    *(undefined **)((long)puVar1 + (long)_DAT_112748a70) = puVar3;
    _objc_release(uVar2);
    uVar4 = param_3;
    func_0x00010bf4c640();
    if ((long)uVar4 < 0) {
      uVar4 = param_5;
      func_0x00010bf461c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfbe4c0();
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    else {
      uVar6 = param_3;
      func_0x00010bf4c640();
    }
    puVar7 = PTR_PTR_1126ae720;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1064a41a8;
    puStack_a0 = &UNK_110924db0;
    _objc_retain(param_3);
    uStack_98 = param_3;
    uStack_90 = uVar6 < 7;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748a74);
    *(undefined **)((long)puVar1 + (long)_DAT_112748a74) = puVar7;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_112748a78;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined8 *)((long)puVar1 + lVar16) = param_23;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112748a7c;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_24;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112748a80;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_25;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748a84);
    *(undefined **)((long)puVar1 + (long)_DAT_112748a84) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748a88);
    *(undefined **)((long)puVar1 + (long)_DAT_112748a88) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748a8c);
    *(undefined **)((long)puVar1 + (long)_DAT_112748a8c) = puVar7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112748a90) = 0x3ff0000000000000;
    lVar14 = (long)_DAT_112748a94;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_17;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112748a98) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112748a9c) = 1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112748aa0) = 0x3ff0000000000000;
    lVar14 = (long)_DAT_112748aa4;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_20;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112748aa8;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_26;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_112748aac;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_27;
    _objc_release(uVar2);
    uVar4 = param_5;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf9d520();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((int)uVar8 != 0) {
      uVar2 = param_22;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010c0f9920();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748ab0);
      *(undefined8 *)((long)puVar1 + (long)_DAT_112748ab0) = uVar9;
      _objc_release(uVar11);
      _objc_release(uVar2);
    }
    _objc_initWeak(auStack_c0,puVar1);
    puVar7 = PTR_PTR_1126ae720;
    puStack_e8 = puVar3;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x1064a420c;
    puStack_d0 = &UNK_110924de0;
    _objc_copyWeak(auStack_c8,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748ab4);
    *(undefined **)((long)puVar1 + (long)_DAT_112748ab4) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126caec8;
    _objc_alloc();
    func_0x00010beb53e0(puVar1);
    func_0x00010c021c00();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748ab8);
    *(undefined **)((long)puVar1 + (long)_DAT_112748ab8) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126caed0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748abc);
    *(undefined **)((long)puVar1 + (long)_DAT_112748abc) = puVar7;
    _objc_release(uVar2);
    func_0x00010c125f40(puVar1);
    puVar7 = PTR_PTR_1126ae720;
    puStack_110 = puVar3;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1064a426c;
    puStack_f8 = &UNK_110911990;
    _objc_copyWeak(auStack_f0,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748acc);
    *(undefined **)((long)puVar1 + (long)_DAT_112748acc) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae720;
    puStack_138 = puVar3;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_1064a4500;
    puStack_120 = &UNK_110911990;
    _objc_copyWeak(auStack_118,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748ad0);
    *(undefined **)((long)puVar1 + (long)_DAT_112748ad0) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae720;
    puStack_160 = puVar3;
    uStack_158 = 0xc2000000;
    uStack_150 = 0x1064a47f0;
    puStack_148 = &UNK_110911990;
    _objc_copyWeak(auStack_140,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748adc);
    *(undefined **)((long)puVar1 + (long)_DAT_112748adc) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae720;
    puStack_188 = puVar3;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_1064a4b08;
    puStack_170 = &UNK_110911990;
    _objc_copyWeak(auStack_168,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748ae4);
    *(undefined **)((long)puVar1 + (long)_DAT_112748ae4) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae720;
    puStack_1b0 = puVar3;
    uStack_1a8 = 0xc2000000;
    uStack_1a0 = 0x1064a4f84;
    puStack_198 = &UNK_110911990;
    _objc_copyWeak(auStack_190,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748ae8);
    *(undefined **)((long)puVar1 + (long)_DAT_112748ae8) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae720;
    puStack_1d8 = puVar3;
    uStack_1d0 = 0xc2000000;
    uStack_1c8 = 0x1064a52c8;
    puStack_1c0 = &UNK_110911990;
    _objc_copyWeak(auStack_1b8,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748aec);
    *(undefined **)((long)puVar1 + (long)_DAT_112748aec) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae720;
    puStack_200 = puVar3;
    uStack_1f8 = 0xc2000000;
    uStack_1f0 = 0x1064a56ac;
    puStack_1e8 = &UNK_110911990;
    _objc_copyWeak(auStack_1e0,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748af0);
    *(undefined **)((long)puVar1 + (long)_DAT_112748af0) = puVar7;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae720;
    puStack_228 = puVar3;
    uStack_220 = 0xc2000000;
    pcStack_218 = FUN_1064a5b80;
    puStack_210 = &UNK_110911990;
    _objc_copyWeak(auStack_208,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748af4);
    *(undefined **)((long)puVar1 + (long)_DAT_112748af4) = puVar7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126caed8;
    _objc_alloc();
    func_0x00010c010a20();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748af8);
    *(undefined **)((long)puVar1 + (long)_DAT_112748af8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126caee0;
    _objc_alloc();
    uVar9 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010bf398e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010bf4e080(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031c00();
    uVar12 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748afc);
    *(undefined **)((long)puVar1 + (long)_DAT_112748afc) = puVar3;
    _objc_release(uVar12);
    _objc_release(uVar2);
    _objc_release(uVar11);
    _objc_release(uVar9);
    puVar3 = PTR_PTR_1126caee8;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748b00);
    *(undefined **)((long)puVar1 + (long)_DAT_112748b00) = puVar3;
    _objc_release(uVar2);
    *(byte *)((long)puVar1 + (long)_DAT_112748b04) = (byte)(uVar6 >> 0x3f) ^ 1;
    _objc_initWeak(auStack_230,puVar1);
    uVar10 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010c0d6280();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar11;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_238,auStack_230);
    uVar2 = uVar9;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(puVar3);
    _objc_release(uVar11);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_238);
    _objc_destroyWeak(auStack_230);
    _objc_destroyWeak(auStack_208);
    _objc_destroyWeak(auStack_1e0);
    _objc_destroyWeak(auStack_1b8);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_168);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uStack_98);
  }
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1064a41a8; end: 1064a426b;  */

void FUN_1064a41a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126caec0;
  _objc_alloc(PTR_PTR_1126caec0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d6c60(uVar2);
  func_0x00010c0149c0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,param_2,uVar2,
                      *(undefined1 *)(param_1 + 0x28));
  func_0x00010c16a200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064a426c; end: 1064a44ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a426c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(lVar1);
    puVar2 = puVar6;
    func_0x00010c274200(puVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf493a0(puVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
    puVar2 = puVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf493a0(puVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112748ac0;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar7),param_2,1);
    puVar2 = puVar6;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf493a0(puVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112748ac4;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar7),param_2,1);
    puVar2 = puVar6;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf493a0(puVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112748ac8;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar7),param_2,1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1064a4500; end: 1064a4b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1064a4500(double param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  undefined *puVar27;
  float fVar28;
  double dVar29;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar27 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_2 + _DAT_112748a74);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(lVar26);
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar27;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar26;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar27;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar27;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar27;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar25);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar26);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar27 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    lVar26 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(lVar26);
    puVar17 = puVar27;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar26;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_2 + _DAT_112748ad4);
    *(undefined **)(param_2 + _DAT_112748ad4) = puVar3;
    _objc_release(uVar25);
    _objc_release(lVar4);
    _objc_release(lVar26);
    _objc_release(puVar17);
    puVar17 = puVar27;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar26;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_2 + _DAT_112748ad8);
    *(undefined **)(param_2 + _DAT_112748ad8) = puVar3;
    _objc_release(uVar25);
    _objc_release(lVar4);
    _objc_release(lVar26);
    _objc_release(puVar17);
    lVar26 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(lVar26);
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar27;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar26;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar27;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar17);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar26);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (uVar18 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar27 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    uVar19 = uVar18;
    func_0x00010c29bf00(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(uVar19);
    uVar19 = uVar18;
    func_0x00010bf5d2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar20);
    _objc_release(uVar19);
    puVar17 = puVar27;
    uVar19 = uVar18;
    if (uVar21 == 0) {
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c149080(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      param_1 = -23.0;
    }
    else {
      param_1 = -4.0;
      if (*(char *)(uVar18 + (long)_DAT_112748ae0) == '\0') {
        param_1 = -20.0;
      }
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5d2e0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = puVar17;
    func_0x00010bf493c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(puVar17);
    uVar19 = uVar18;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    _objc_release(uVar19);
    puVar17 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar20 = uVar21;
    _objc_opt_isKindOfClass(uVar21,puVar17);
    uVar19 = uVar21;
    if ((uVar20 & 1) == 0) {
      uVar19 = 0;
    }
    _objc_retain(uVar19);
    _objc_release(uVar21);
    uVar20 = uVar19;
    func_0x00010c08bda0();
    _objc_release(uVar19);
    puVar17 = puVar3;
    if (uVar20 == 9) {
      puVar5 = puVar27;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      func_0x00010c29bf00(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf49220(*(undefined8 *)(uVar18 + (long)_DAT_112748ad8));
      param_1 = param_1 + -37.0 + -20.0;
      puVar17 = puVar5;
      func_0x00010bf493c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(puVar5);
    }
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar27;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar27;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar18;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(puVar5);
    _objc_release(puVar17);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = uVar18 + 0x20;
  _objc_loadWeakRetained();
  if (lVar24 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar27 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    lVar4 = lVar24;
    func_0x00010c29bf00(lVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(lVar4);
    uVar25 = 0xc024000000000000;
    lVar4 = lVar24;
    if (*(char *)(lVar24 + _DAT_112748ae0) == '\0') {
      uVar25 = 0xc03a000000000000;
      lVar9 = lVar24;
      func_0x00010bf5d2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar10;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar10);
      _objc_release(lVar9);
      if (lVar13 != 0) {
        func_0x00010bf5d2e0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064a5090;
      }
      func_0x00010c149080();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c274640();
      _objc_retainAutoreleasedReturnValue();
LAB_1064a5090:
      lVar9 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar9);
    _objc_release(lVar4);
    puVar17 = puVar27;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar17;
    func_0x00010bf493c0(uVar25);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar27;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar24;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar27;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar24;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = -60.0;
    puVar8 = puVar7;
    func_0x00010bf493c0(0xc04e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar17);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar9);
    _objc_release(lVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(lVar10);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = lVar24 + 0x20;
  _objc_loadWeakRetained();
  if (uVar18 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar27 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    uVar19 = uVar18;
    func_0x00010c29bf00(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(uVar19);
    uVar19 = uVar18;
    if (*(char *)(uVar18 + (long)_DAT_112748ae0) == '\x01') {
      func_0x00010c274640();
      _objc_retainAutoreleasedReturnValue();
LAB_1064a53f8:
      uVar20 = uVar19;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar20 = uVar18;
      func_0x00010bf5d2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar21);
      _objc_release(uVar20);
      if (uVar22 == 0) {
        func_0x00010c149080();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064a53f8;
      }
      func_0x00010bf5d2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar20);
    _objc_release(uVar19);
    uVar19 = uVar18;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    _objc_release(uVar19);
    puVar17 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar20 = uVar22;
    _objc_opt_isKindOfClass(uVar22,puVar17);
    uVar19 = uVar22;
    if ((uVar20 & 1) == 0) {
      uVar19 = 0;
    }
    _objc_retain(uVar19);
    _objc_release(uVar22);
    uVar20 = uVar19;
    func_0x00010c08bda0();
    _objc_release(uVar19);
    uVar25 = 0x4041800000000000;
    if (uVar20 != 9) {
      uVar25 = 0xc024000000000000;
    }
    puVar17 = puVar27;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar17;
    func_0x00010bf493c0(uVar25);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar27;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493c0(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar27;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar18;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = -60.0;
    puVar8 = puVar7;
    func_0x00010bf493c0(0xc04e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar17);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar21);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
    ___stack_chk_fail();
    lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar18 = uVar18 + 0x20;
    _objc_loadWeakRetained();
    if (uVar18 == 0) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar27 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
      _objc_alloc_init();
      uVar19 = uVar18;
      func_0x00010c29bf00(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9680();
      _objc_release(uVar19);
      uVar19 = uVar18;
      func_0x00010bf5d2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar20);
      _objc_release(uVar19);
      bVar1 = *(char *)(uVar18 + (long)_DAT_112748ae0) == '\0';
      puVar17 = puVar27;
      uVar19 = uVar18;
      if (uVar21 == 0) {
        param_1 = -39.0;
        if (bVar1) {
          param_1 = -23.0;
        }
        uVar20 = uVar18;
        func_0x00010c0f0be0(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar20;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        FUN_1064a5a38();
        _objc_release(uVar21);
        _objc_release(uVar20);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c149080(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar19;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar20;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_1 = -4.0;
        if (bVar1) {
          param_1 = -20.0;
        }
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5d2e0(uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar19;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar20;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar3 = puVar17;
      func_0x00010bf493c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(puVar17);
      puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar5 = puVar27;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar27;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar18;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar17);
      _objc_release(puVar11);
      _objc_release(puVar8);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
      ___stack_chk_fail();
      dVar29 = param_1;
      _objc_retain();
      fVar28 = SUB84(dVar29,0);
      puVar27 = PTR_PTR_1126bfe00;
      func_0x00010bef2100(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar18;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar27);
      puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar21 = uVar20;
      _objc_opt_isKindOfClass(uVar20,puVar27);
      uVar19 = uVar20;
      if ((uVar21 & 1) == 0) {
        uVar19 = 0;
      }
      _objc_retain(uVar19);
      if ((uVar19 != 0) && (uVar21 = uVar20, func_0x00010c067fc0(), uVar21 == 2)) {
        puVar27 = PTR_PTR_1126bfe00;
        func_0x00010bf4dd00(PTR_PTR_1126bfe00);
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar18;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar27);
        puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar23 = uVar22;
        _objc_opt_isKindOfClass(uVar22,puVar27);
        uVar21 = uVar22;
        if ((uVar23 & 1) == 0) {
          uVar21 = 0;
        }
        _objc_retain(uVar21);
        if (uVar21 != 0) {
          func_0x00010bfb2c80(uVar22);
          param_1 = (double)-fVar28;
          _objc_release(uVar22);
        }
        _objc_release(uVar22);
      }
      _objc_release(uVar19);
      _objc_release(uVar20);
      _objc_release(uVar18);
      return param_1;
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return param_1;
}



/* Entry: 1064a4b08; end: 1064a5a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1064a4b08(double param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  float fVar23;
  double dVar24;
  undefined8 uVar25;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (uVar2 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    puVar22 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    uVar3 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010bf5d2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = puVar22;
    uVar3 = uVar2;
    if (uVar5 == 0) {
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c149080(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      param_1 = -23.0;
    }
    else {
      param_1 = -4.0;
      if (*(char *)(uVar2 + (long)_DAT_112748ae0) == '\0') {
        param_1 = -20.0;
      }
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5d2e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = puVar6;
    func_0x00010bf493c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar6);
    uVar3 = uVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar3 = uVar5;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar5);
    uVar4 = uVar3;
    func_0x00010c08bda0();
    _objc_release(uVar3);
    puVar6 = puVar7;
    if (uVar4 == 9) {
      puVar8 = puVar22;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf49220(*(undefined8 *)(uVar2 + (long)_DAT_112748ad8));
      param_1 = param_1 + -37.0 + -20.0;
      puVar6 = puVar8;
      func_0x00010bf493c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(puVar8);
    }
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar22;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar7);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = uVar2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar20 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    puVar22 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    lVar14 = lVar20;
    func_0x00010c29bf00(lVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(lVar14);
    uVar25 = 0xc024000000000000;
    lVar14 = lVar20;
    if (*(char *)(lVar20 + _DAT_112748ae0) == '\0') {
      uVar25 = 0xc03a000000000000;
      lVar15 = lVar20;
      func_0x00010bf5d2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar16);
      _objc_release(lVar15);
      if (lVar17 != 0) {
        func_0x00010bf5d2e0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064a5090;
      }
      func_0x00010c149080();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c274640();
      _objc_retainAutoreleasedReturnValue();
LAB_1064a5090:
      lVar15 = lVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar15);
    _objc_release(lVar14);
    puVar6 = puVar22;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493c0(uVar25);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar22;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar20;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar20;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = -60.0;
    puVar12 = puVar10;
    func_0x00010bf493c0(0xc04e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar16);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = lVar20 + 0x20;
  _objc_loadWeakRetained();
  if (uVar2 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    puVar22 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    uVar3 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(uVar3);
    uVar3 = uVar2;
    if (*(char *)(uVar2 + (long)_DAT_112748ae0) == '\x01') {
      func_0x00010c274640();
      _objc_retainAutoreleasedReturnValue();
LAB_1064a53f8:
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar4 = uVar2;
      func_0x00010bf5d2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if (uVar11 == 0) {
        func_0x00010c149080();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064a53f8;
      }
      func_0x00010bf5d2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar4 = uVar11;
    _objc_opt_isKindOfClass(uVar11,puVar6);
    uVar3 = uVar11;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar11);
    uVar4 = uVar3;
    func_0x00010c08bda0();
    _objc_release(uVar3);
    uVar25 = 0x4041800000000000;
    if (uVar4 != 9) {
      uVar25 = 0xc024000000000000;
    }
    puVar6 = puVar22;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493c0(uVar25);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar22;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493c0(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = -60.0;
    puVar12 = puVar10;
    func_0x00010bf493c0(0xc04e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar19);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
    ___stack_chk_fail();
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = uVar2 + 0x20;
    _objc_loadWeakRetained();
    if (uVar2 == 0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      puVar22 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
      _objc_alloc_init();
      uVar3 = uVar2;
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9680();
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010bf5d2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar4);
      _objc_release(uVar3);
      bVar1 = *(char *)(uVar2 + (long)_DAT_112748ae0) == '\0';
      puVar6 = puVar22;
      uVar3 = uVar2;
      if (uVar5 == 0) {
        param_1 = -39.0;
        if (bVar1) {
          param_1 = -23.0;
        }
        uVar4 = uVar2;
        func_0x00010c0f0be0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        FUN_1064a5a38();
        _objc_release(uVar5);
        _objc_release(uVar4);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c149080(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_1 = -4.0;
        if (bVar1) {
          param_1 = -20.0;
        }
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5d2e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = puVar6;
      func_0x00010bf493c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar8 = puVar22;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar22;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar6);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(uVar5);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
      ___stack_chk_fail();
      dVar24 = param_1;
      _objc_retain();
      fVar23 = SUB84(dVar24,0);
      puVar22 = PTR_PTR_1126bfe00;
      func_0x00010bef2100(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar22);
      uVar3 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      if ((uVar3 != 0) && (uVar5 = uVar4, func_0x00010c067fc0(), uVar5 == 2)) {
        puVar22 = PTR_PTR_1126bfe00;
        func_0x00010bf4dd00(PTR_PTR_1126bfe00);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar22);
        puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar19 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar22);
        uVar5 = uVar11;
        if ((uVar19 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        if (uVar5 != 0) {
          func_0x00010bfb2c80(uVar11);
          param_1 = (double)-fVar23;
          _objc_release(uVar11);
        }
        _objc_release(uVar11);
      }
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar2);
      return param_1;
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return param_1;
}



/* Entry: 1064a5a38; end: 1064a5b7f;  */

double FUN_1064a5a38(double param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  double dVar8;
  
  dVar8 = param_1;
  _objc_retain();
  fVar7 = SUB84(dVar8,0);
  puVar2 = PTR_PTR_1126bfe00;
  func_0x00010bef2100(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar1 != 0) && (uVar4 = uVar3, func_0x00010c067fc0(), uVar4 == 2)) {
    puVar2 = PTR_PTR_1126bfe00;
    func_0x00010bf4dd00(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    if (uVar4 != 0) {
      func_0x00010bfb2c80(uVar5);
      param_1 = (double)-fVar7;
      _objc_release(uVar5);
    }
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1064a5b80; end: 1064a5f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a5b80(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uStack_a0;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uStack_a0 = (undefined *)0x0;
  }
  else {
    uStack_a0 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf5d2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    bVar1 = *(char *)(param_1 + _DAT_112748ae0) == '\0';
    puVar5 = uStack_a0;
    lVar2 = param_1;
    if (lVar4 == 0) {
      uVar18 = 0xc043800000000000;
      if (bVar1) {
        uVar18 = 0xc037000000000000;
      }
      lVar3 = param_1;
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      FUN_1064a5a38(uVar18);
      _objc_release(lVar4);
      _objc_release(lVar3);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c149080(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar18 = 0xc010000000000000;
      if (bVar1) {
        uVar18 = 0xc034000000000000;
      }
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5d2e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = puVar5;
    func_0x00010bf493c0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar7 = uStack_a0;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = uStack_a0;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = uStack_a0;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(lVar10);
    _objc_release(lVar4);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_a0);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar18 = *(undefined8 *)(param_1 + _DAT_112748a74);
  func_0x00010c269d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb640();
  _objc_release(param_2);
  _objc_release(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064a5f80; end: 1064a5ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a5f80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748a74);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb640();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064a5ff4; end: 1064a717b; -[SCContextOperaLayerViewController preparePresenters] */

/* WARNING: Removing unreachable block (ram,0x0001064a6e40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1064a5ff4(undefined *param_1,undefined *param_2,undefined *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  ulong uStack_1a0;
  uint uStack_14c;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = (long)_DAT_112748b08;
  puVar6 = param_1;
  if (*(long *)(param_1 + lVar22) != 0) goto LAB_1064a7140;
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bffc4a0();
  puVar24 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar24;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar24);
  param_2 = PTR_PTR_1126b2390;
  _objc_opt_class();
  puVar7 = puVar13;
  _objc_opt_isKindOfClass();
  puVar24 = puVar13;
  if (((ulong)puVar7 & 1) == 0) {
    puVar24 = (undefined *)0x0;
  }
  _objc_retain(puVar24);
  _objc_release(puVar13);
  puVar7 = puVar24;
  func_0x00010c08bda0();
  puVar13 = puVar24;
  func_0x00010c29d360();
  lVar21 = (long)_DAT_112748b0c;
  *(undefined **)(param_1 + lVar21) = puVar13;
  puVar13 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar13;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar9;
  func_0x00010bf1f3c0();
  lVar31 = (long)_DAT_112748b10;
  param_1[lVar31] = (char)puVar25;
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar13);
  puVar13 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar13;
  func_0x00010c06b7e0();
  _objc_release(puVar13);
  puVar13 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar13;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126c93d0;
  func_0x00010c0ea900(PTR_PTR_1126c93d0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf1f3c0();
  uVar1 = (uint)puVar11 & ((uint)puVar8 ^ 1);
  _objc_release(puVar10);
  _objc_release(puVar25);
  _objc_release(puVar9);
  _objc_release(puVar13);
  param_1[_DAT_112748b14] = (param_1[lVar31] | (byte)uVar1) & 1;
  lVar23 = (long)_DAT_112748ae0;
  param_1[lVar23] = 0;
  bVar26 = param_1[lVar31];
  if ((bVar26 == 1) && (((ulong)puVar8 & 1) == 0)) {
    uVar12 = *(undefined8 *)(param_1 + _DAT_112748a2c);
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = (undefined *)0x0;
    uVar18 = uVar12;
    func_0x000108f4b700();
    uVar27 = 0;
    if ((int)uVar18 != 0) {
      uVar27 = (uint)*(undefined8 *)(param_1 + lVar21);
      puVar13 = *(undefined **)(param_1 + _DAT_112748aa8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      param_2 = puVar13;
      func_0x000108f4b9ec();
      _objc_release(puVar13);
    }
    _objc_release(uVar12);
    bVar26 = param_1[lVar31];
  }
  else {
    uVar27 = 0;
  }
  if ((bVar26 & 1) == 0) {
    uVar3 = 0;
    if (puVar7 != (undefined *)0x9) {
      uVar3 = uVar1;
    }
    if ((uVar3 & 1) == 0) {
      bVar4 = false;
      uStack_14c = (uint)(puVar7 != (undefined *)0x9 && puVar7 != (undefined *)0x20);
      bVar2 = true;
    }
    else {
      uStack_14c = 0;
      bVar2 = true;
      bVar4 = true;
    }
  }
  else {
    bVar2 = ((ulong)puVar8 & 1) == 0;
    uStack_14c = uVar27;
    if (!bVar2) {
      puVar13 = param_1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar13;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR_PTR_1126b2d20;
      func_0x00010c24c3e0(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf1f3c0();
      _objc_release(puVar10);
      _objc_release(puVar25);
      _objc_release(puVar9);
      _objc_release(puVar13);
      uStack_14c = (uint)puVar11 | uVar27;
    }
    bVar4 = true;
  }
  puVar13 = puVar24;
  func_0x0001084365e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar13;
  func_0x00010bfd8500();
  if ((int)puVar9 == 0) {
    bVar5 = false;
  }
  else {
    puVar9 = puVar13;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar9;
    func_0x00010c1185e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar25;
    func_0x00010c08fa60();
    bVar5 = puVar10 != (undefined *)0x0;
    _objc_release(puVar25);
    _objc_release(puVar9);
  }
  if ((uVar1 & 1) == 0 && !bVar5) {
    puVar9 = puVar24;
    func_0x000108437e04();
    if (((ulong)puVar9 & 1) == 0) {
      uVar30 = *(ulong *)(param_1 + _DAT_112748a2c);
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar30;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_1a0 = uVar29;
      func_0x00010c235560();
      uStack_1a0 = uStack_1a0 & 0xffffffff;
      _objc_release(uVar29);
      _objc_release(uVar30);
    }
    else {
      uStack_1a0 = 1;
    }
    lVar21 = (long)_DAT_112748a30;
    uVar30 = *(ulong *)(param_1 + lVar21);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360(puVar24);
    uVar29 = uVar30;
    func_0x00010c233ca0();
    _objc_release(uVar30);
    uVar14 = *(ulong *)(param_1 + lVar21);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar14;
    func_0x00010c2345a0();
    _objc_release(uVar14);
    uVar15 = *(ulong *)(param_1 + lVar21);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010c234480();
    _objc_release(uVar15);
    uVar12 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar12;
    func_0x00010c234380();
    _objc_release(uVar12);
    uVar16 = *(ulong *)(param_1 + _DAT_112748a2c);
    func_0x00010c27e540();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar15;
    func_0x00010bf09b80();
    if ((((((uVar17 & 1) == 0) && ((uStack_1a0 & 1) == 0)) && ((uVar29 & 1) == 0)) &&
        (((uVar30 & 1) == 0 && ((uVar14 & 1) == 0)))) && ((int)uVar18 == 0)) {
      bVar26 = 0;
    }
    else {
      bVar26 = param_1[lVar31] ^ 1;
    }
    _objc_release(uVar15);
    _objc_release(uVar16);
  }
  else {
    bVar26 = 0;
  }
  if (puVar7 + -9 < (undefined *)0xd) {
    uVar29 = *(ulong *)(&UNK_10dddc4d0 + (long)(puVar7 + -9) * 8);
  }
  else {
    uVar29 = 0;
  }
  if ((uStack_14c & 1) != 0) {
    puVar9 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar9;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar25;
    FUN_1064a717c();
    _objc_release(puVar25);
    _objc_release(puVar9);
    param_2 = puVar7;
    if ((int)puVar10 != 0) {
      uVar29 = uVar29 | 1;
      uVar18 = *(undefined8 *)(param_1 + _DAT_112748a74);
      func_0x00010c269d40(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c200920();
      _objc_release(uVar18);
      param_2 = puVar7;
    }
  }
  puVar7 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar25;
  func_0x00010bf1f3c0();
  _objc_release(puVar25);
  _objc_release(puVar9);
  _objc_release(puVar7);
  uVar30 = uVar29 | 2;
  if ((int)puVar10 == 0) {
    uVar30 = uVar29;
  }
  if ((bVar26 & 1) != 0) {
    param_1[lVar23] = 1;
    uVar30 = uVar30 | 8;
  }
  if (bVar4) {
LAB_1064a6798:
    puVar7 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar25;
    func_0x00010bf1f3c0();
    _objc_release(puVar25);
    _objc_release(puVar9);
    _objc_release(puVar7);
    uVar29 = 0x20;
    if ((((uint)puVar8 | uVar27) & 1) == 0) {
      uVar29 = 0x60;
    }
    uVar14 = 0x24;
    if ((int)puVar10 == 0) {
      uVar14 = uVar29;
    }
    uVar30 = uVar14 | uVar30;
    puVar7 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar9;
    func_0x00010bf1f3c0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    if ((int)puVar25 != 0) {
      uVar18 = *(undefined8 *)(param_1 + _DAT_112748a74);
      func_0x00010c269d40(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c200920();
      _objc_release(uVar18);
    }
    puVar7 = PTR_PTR_1126caef0;
    _objc_alloc();
    puVar8 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da1c0();
    puVar9 = param_1;
    func_0x00010c118dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05fac0(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010c18b5e0(puVar7);
    func_0x00010befa120(puVar6);
    _objc_release(puVar7);
  }
  else {
    puVar7 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar25;
    func_0x00010bf1f3c0();
    _objc_release(puVar25);
    _objc_release(puVar9);
    _objc_release(puVar7);
    if ((int)puVar10 != 0) goto LAB_1064a6798;
  }
  puVar7 = param_1;
  func_0x00010beb38e0();
  iVar28 = _DAT_112748a2c;
  uVar29 = uVar30 | 4;
  if ((int)puVar7 == 0) {
    uVar29 = uVar30;
  }
  if (uVar29 == 0) {
    uVar19 = *(undefined8 *)(param_1 + _DAT_112748a2c);
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar18;
    func_0x00010beff1c0();
    _objc_release(uVar18);
    _objc_release(uVar19);
    if ((int)uVar12 != 0) goto LAB_1064a6a44;
  }
  else {
LAB_1064a6a44:
    puVar7 = PTR_PTR_1126caef8;
    _objc_alloc();
    iVar28 = _DAT_112748a2c;
    uVar18 = *(undefined8 *)(param_1 + _DAT_112748a2c);
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dfa0();
    func_0x00010c05fa80();
    uVar12 = *(undefined8 *)(param_1 + _DAT_112748b18);
    *(undefined **)(param_1 + _DAT_112748b18) = puVar7;
    _objc_release(uVar12);
    _objc_release(uVar18);
    func_0x00010befa120(puVar6);
    uVar18 = *(undefined8 *)(param_1 + _DAT_112748a6c);
    func_0x00010c269d40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar24;
    func_0x00010c15ffa0(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4e540(uVar18);
    _objc_release(puVar7);
    _objc_release(uVar18);
  }
  puVar7 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2d20;
  func_0x00010c06be00();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar8;
  param_3 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar25;
  func_0x00010bf1f3c0();
  _objc_release(puVar25);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  if ((int)puVar10 != 0) {
    puVar7 = PTR_PTR_1126caf00;
    _objc_alloc(PTR_PTR_1126caf00);
    func_0x00010c01e8a0();
    param_3 = puVar7;
    func_0x00010befa120(puVar6);
    _objc_release(puVar7);
  }
  if (bVar2) {
    puVar8 = PTR_PTR_1126caf08;
    _objc_alloc();
    lVar21 = (long)_DAT_112748a44;
    uVar18 = *(undefined8 *)(param_1 + lVar21);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e8c0();
    _objc_release(uVar18);
    func_0x00010c18b5e0(puVar8);
    func_0x00010befa120(puVar6);
    puVar7 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar7);
    param_2 = PTR_PTR_1126b2390;
    _objc_opt_class();
    puVar9 = puVar25;
    _objc_opt_isKindOfClass();
    puVar7 = puVar25;
    if (((ulong)puVar9 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    _objc_retain(puVar7);
    _objc_release(puVar25);
    puVar9 = puVar7;
    func_0x0001084365e0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar9;
    func_0x00010c269920();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar25;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar25);
    _objc_release(puVar9);
    _objc_retain(puVar10);
    puVar9 = puVar10;
    func_0x00010bf52a60();
    lVar23 = lRam0000000000000000;
    if (puVar9 == (undefined *)0x0) {
      bVar2 = false;
      bVar4 = false;
    }
    else {
      bVar2 = false;
      bVar4 = false;
      do {
        puVar25 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar23) {
            _objc_enumerationMutation(puVar10);
          }
          uVar19 = *(undefined8 *)((long)puVar25 * 8);
          uVar18 = uVar19;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar18;
          func_0x00010bf31ca0();
          _objc_release(uVar18);
          if ((int)uVar12 == 0x23) {
            bVar2 = true;
LAB_1064a6e74:
            if (bVar4) {
              bVar2 = true;
              bVar4 = true;
              goto LAB_1064a6eb8;
            }
          }
          else {
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar19;
            func_0x00010bf31ca0();
            _objc_release(uVar19);
            bVar4 = (bool)((int)uVar18 == 0x4d | bVar4);
            if (bVar2) goto LAB_1064a6e74;
          }
          puVar25 = puVar25 + 1;
        } while (puVar9 != puVar25);
        puVar9 = puVar10;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
LAB_1064a6eb8:
    _objc_release(puVar10);
    uVar30 = *(ulong *)(param_1 + lVar21);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar9;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar25;
    func_0x000108437e88();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar30;
    param_3 = puVar11;
    func_0x00010c071ae0();
    _objc_release(puVar11);
    _objc_release(puVar25);
    _objc_release(puVar9);
    _objc_release(uVar30);
    if (((bVar2) && (puVar9 = puVar7, func_0x00010c08bda0(), puVar9 < (undefined *)0x24)) &&
       (((1L << ((ulong)puVar9 & 0x3f) & 0x813f3fe07U) != 0 && ((uVar29 & 1) == 0)))) {
      puVar9 = PTR_PTR_1126caf10;
      _objc_alloc(PTR_PTR_1126caf10);
      func_0x00010c01e8e0();
      param_3 = puVar9;
      func_0x00010befa120(puVar6);
      _objc_release(puVar9);
    }
    puVar9 = PTR_PTR_1126caf18;
    if (bVar4) {
      uVar18 = *(undefined8 *)(param_1 + iVar28);
      func_0x00010bf398e0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3f240();
      _objc_release(uVar18);
      uVar18 = *(undefined8 *)(param_1 + iVar28);
      func_0x00010bf398e0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7ef80();
      _objc_release(uVar18);
      puVar25 = PTR_PTR_1126caf18;
      param_3 = puVar7;
      func_0x00010c08bda0(puVar7);
      func_0x00010bf927e0();
      if (((int)puVar9 != 0) && ((int)puVar25 != 0)) {
        puVar9 = PTR_PTR_1126caf20;
        _objc_alloc(PTR_PTR_1126caf20);
        uVar18 = *(undefined8 *)(param_1 + lVar21);
        func_0x00010c2923e0(uVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01e900(puVar9);
        param_3 = puVar9;
        func_0x00010befa120(puVar6);
        _objc_release(puVar9);
        _objc_release(uVar18);
      }
    }
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar8);
  }
  param_1[_DAT_112748b1c] = (byte)uStack_14c & 1;
  puVar7 = puVar6;
  func_0x00010bf51e00();
  uVar18 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar7;
  _objc_release(uVar18);
  _objc_release(puVar13);
  _objc_release(puVar24);
  _objc_release();
LAB_1064a7140:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(param_3);
    puVar24 = (undefined *)0x0;
    if ((param_2 != (undefined *)0x1b) && (param_2 != (undefined *)0x21)) {
      puVar24 = PTR_PTR_1126b2d20;
      func_0x00010c27fe20(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar24);
      if (puVar7 == (undefined *)0x0) {
        puVar24 = (undefined *)0x1;
      }
      else {
        puVar24 = puVar7;
        func_0x00010bf1f3c0(puVar7);
      }
      _objc_release(puVar7);
    }
    _objc_release(param_3);
    _objc_release(puVar6);
    return puVar24;
  }
  return puVar6;
}



/* Entry: 1064a717c; end: 1064a7233;  */

long FUN_1064a717c(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar3 = 0;
  if ((param_2 != 0x1b) && (param_2 != 0x21)) {
    puVar1 = PTR_PTR_1126b2d20;
    func_0x00010c27fe20(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (lVar2 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = lVar2;
      func_0x00010bf1f3c0(lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1064a7234; end: 1064a72bf; -[SCContextOperaLayerViewController enumeratePresentersUsingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a7234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748b08);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1064a72c0;
  puStack_30 = &UNK_110924e10;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064a72c0; end: 1064a72cf;  */

void FUN_1064a72c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001064a72cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_4);
  return;
}



/* Entry: 1064a72d0; end: 1064a73ab; -[SCContextOperaLayerViewController registerCenterTapHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a72d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  func_0x00010beb53e0();
  puVar2 = PTR_PTR_1126caf28;
  _objc_alloc(PTR_PTR_1126caf28);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112748ab8);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112748a3c);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112748ab4);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112748aac);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112748a2c);
  func_0x00010bf4e080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038ba0(puVar2,param_2,uVar4,uVar5,param_1,uVar6,uVar7,uVar3,(char)lVar1);
  _objc_release(uVar3);
  func_0x00010c126760(*(undefined8 *)(param_1 + _DAT_112748abc),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1064a73ac; end: 1064a73cb; -[SCContextOperaLayerViewController _shouldRenameSpotlightToReals] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a73ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112748aac),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e50db8,0,0);
  return;
}



/* Entry: 1064a73cc; end: 1064a7407; -[SCContextOperaLayerViewController pageViewName] */

undefined8 FUN_1064a73cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f2240();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1064a7408; end: 1064a741b; -[SCContextOperaLayerViewController prepareOperaUIForSwipeUpContentPresented:shouldMute:] */

void FUN_1064a7408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setOperaUIPreparedForContentPre_112587208,param_3,1,param_4,0,1);
  return;
}



/* Entry: 1064a741c; end: 1064a756b; -[SCContextOperaLayerViewController isSwipeUpAllowed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1064a741c(undefined *param_1,undefined *param_2,undefined1 *param_3,int param_4,int param_5,
             int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  int iVar15;
  long lVar17;
  undefined *puVar18;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  ulong uVar16;
  
  puVar11 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(double *)(param_1 + _DAT_112748a90) == 1.0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    param_1 = *(undefined **)(param_1 + _DAT_112748b08);
    _objc_retain(param_1);
    puVar12 = auStack_d8;
    uVar13 = 0x10;
    puVar14 = param_1;
    func_0x00010bf52a60();
    param_5 = (int)uVar13;
    param_4 = (int)puVar12;
    if (puVar14 != (undefined *)0x0) {
      lVar17 = *plStack_110;
      do {
        puVar1 = PTR_s_isSwipeUpAllowed_1125fdbb8;
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar17) {
            _objc_enumerationMutation(param_1);
          }
          uVar16 = *(ulong *)(lStack_118 + (long)puVar18 * 8);
          iVar15 = (int)uVar16;
          param_2 = puVar1;
          _objc_opt_respondsToSelector();
          if ((uVar16 & 1) != 0) {
            func_0x00010c0806a0();
            param_5 = (int)uVar13;
            param_4 = (int)puVar12;
            if (iVar15 == 0) {
              puVar14 = (undefined *)0x0;
              goto LAB_1064a7528;
            }
          }
          puVar18 = puVar18 + 1;
        } while (puVar14 != puVar18);
        puVar12 = auStack_d8;
        uVar13 = 0x10;
        puVar14 = param_1;
        puVar11 = &uStack_120;
        func_0x00010bf52a60();
        param_5 = (int)uVar13;
        param_4 = (int)puVar12;
      } while (puVar14 != (undefined *)0x0);
    }
    puVar14 = (undefined *)0x1;
LAB_1064a7528:
    _objc_release();
    param_3 = (undefined1 *)puVar11;
  }
  else {
    puVar14 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar14;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_1;
  if ((uint)(byte)param_1[_DAT_112748b20] != (uint)param_3) {
    param_1[_DAT_112748b20] = (char)param_3;
    if (((ulong)param_3 & 1) == 0) {
      func_0x00010c13d600();
    }
    else {
      puVar18 = param_1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar18;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf1f3c0();
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar18);
      if ((int)puVar3 != 0) {
        func_0x00010c0f5b20(*(undefined8 *)(param_1 + _DAT_112748af8));
      }
    }
    func_0x00010bf97f60(param_1);
    func_0x00010bf03440(0x3fc3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c118dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c9410;
    func_0x00010c238dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9410;
    func_0x00010c0c5840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c23a4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9410;
    func_0x00010c237680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c9410;
    func_0x00010c235980();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(puVar14);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar18);
    _objc_release();
    if (param_4 != 0) {
      puVar14 = param_1;
      func_0x00010c118dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126c9410;
      if (param_5 == 0) {
        func_0x00010bf9f6a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf9f820();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7e940(puVar14);
      _objc_release(puVar1);
      _objc_release(puVar18);
      _objc_release();
      if (param_6 != 0) {
        puVar14 = *(undefined **)(param_1 + _DAT_112748af8);
        func_0x00010c0f5b20();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return puVar14;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar18 = param_2;
  func_0x00010c232a40();
  if ((int)puVar18 != 0) {
    if (puVar14[0x20] == '\x01') {
      func_0x00010c25fca0(param_2);
    }
    else {
      func_0x00010c25fcc0(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return param_2;
}



/* Entry: 1064a756c; end: 1064a7997; -[SCContextOperaLayerViewController _setOperaUIPreparedForContentPresented:shouldPerformMuteUpdate:shouldMute:shouldPause:shouldHideHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a756c(long param_1,undefined8 param_2,uint param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_1;
  if (*(byte *)(param_1 + _DAT_112748b20) != param_3) {
    *(char *)(param_1 + _DAT_112748b20) = (char)param_3;
    if ((param_3 & 1) == 0) {
      func_0x00010c13d600();
    }
    else {
      lVar1 = param_1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf1f3c0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar4 != 0) {
        func_0x00010c0f5b20(*(undefined8 *)(param_1 + _DAT_112748af8));
      }
    }
    func_0x00010bf97f60(param_1);
    func_0x00010bf03440(0x3fc3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c118dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010c238dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010c0c5840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c9410;
    func_0x00010c23a4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c9410;
    func_0x00010c237680();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126c9410;
    func_0x00010c235980();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(lVar16);
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
    _objc_release();
    if (param_4 != 0) {
      lVar16 = param_1;
      func_0x00010c118dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c9410;
      if (param_5 == 0) {
        func_0x00010bf9f6a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf9f820();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7e940(lVar16);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release();
      if (param_6 != 0) {
        lVar16 = *(long *)(param_1 + _DAT_112748af8);
        func_0x00010c0f5b20();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar17 = param_2;
  func_0x00010c232a40();
  if ((int)uVar17 != 0) {
    if (*(char *)(lVar16 + 0x20) == '\x01') {
      func_0x00010c25fca0(param_2);
    }
    else {
      func_0x00010c25fcc0(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064a7998; end: 1064a79ff;  */

void FUN_1064a7998(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c232a40();
  if ((int)uVar1 != 0) {
    if (*(char *)(param_1 + 0x20) == '\x01') {
      func_0x00010c25fca0(param_2);
    }
    else {
      func_0x00010c25fcc0(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064a7a00; end: 1064a7beb;  */

void FUN_1064a7a00(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9410;
  func_0x00010c2708e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9410;
  func_0x00010bf392a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9410;
  func_0x00010c23a4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9410;
  func_0x00010c237680();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(uVar1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar1);
  uVar11 = uVar12;
  func_0x00010010fab4(uVar12,PTR_DAT_1126a53d8);
  uVar1 = uVar12;
  if ((int)uVar11 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064a7bec; end: 1064a7c83; -[SCContextOperaLayerViewController _contextMenuProvider] */

void FUN_1064a7bec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a53d8);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064a7c84; end: 1064a7c9f; -[SCContextOperaLayerViewController setPageable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a7c84(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  *(undefined8 *)(param_1 + _DAT_112748b24) = uVar1;
  return;
}



/* Entry: 1064a7ca0; end: 1064a7cb7; -[SCContextOperaLayerViewController isPageable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1064a7ca0(long param_1)

{
  return *(long *)(param_1 + _DAT_112748b24) != 1;
}



/* Entry: 1064a7cb8; end: 1064a7d27; -[SCContextOperaLayerViewController requestNativeVolumeUI:] */

void FUN_1064a7cb8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2638;
  if ((param_3 & 1) == 0) {
    func_0x00010c0f0300(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1402c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf99b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064a7d28; end: 1064a7d5f; -[SCContextOperaLayerViewController resumePlaybackIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a7d28(long param_1)

{
  if (((*(byte *)(param_1 + _DAT_112748b28) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112748a9c) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c13d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112748af8),PTR_s_resume_11262ce90);
    return;
  }
  return;
}



/* Entry: 1064a7d60; end: 1064a7dff; -[SCContextOperaLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a7d60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126caf30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112748b2c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c1739e0(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  *(undefined8 *)(param_1 + _DAT_112748b24) = 0xffffffffffffffff;
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1064a7e00; end: 1064a811b; -[SCContextOperaLayerViewController viewWillLayoutSubviews] */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001064a7fec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1064a7e00(long param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  double dVar24;
  double dVar25;
  long lVar26;
  double dVar27;
  double dVar28;
  long lVar29;
  double dVar30;
  double dVar31;
  double in_d3;
  double dStack_80;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f1628;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_viewWillLayoutSubviews_112526958);
  dVar25 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  dVar27 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  dVar28 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  dVar24 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  lVar5 = (long)_DAT_112748ac0;
  if (((*(long *)(param_1 + lVar5) != 0) &&
      (lVar7 = (long)_DAT_112748ac4, *(long *)(param_1 + lVar7) != 0)) &&
     (lVar6 = (long)_DAT_112748ac8, *(long *)(param_1 + lVar6) != 0)) {
    lVar4 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar8 = (undefined1)uVar3;
    uVar10 = (undefined1)((ulong)uVar3 >> 8);
    uVar12 = (undefined1)((ulong)uVar3 >> 0x10);
    uVar14 = (undefined1)((ulong)uVar3 >> 0x18);
    uVar16 = (undefined1)((ulong)uVar3 >> 0x20);
    uVar18 = (undefined1)((ulong)uVar3 >> 0x28);
    uVar20 = (undefined1)((ulong)uVar3 >> 0x30);
    uVar22 = (undefined1)((ulong)uVar3 >> 0x38);
    dVar25 = *(double *)(PTR__CGPointZero_110347540 + 8);
    dVar24 = dVar27;
    dVar28 = in_d3;
    func_0x00010c14caa0();
    dVar27 = (double)CONCAT17(uVar22,CONCAT16(uVar20,CONCAT15(uVar18,CONCAT14(uVar16,CONCAT13(uVar14
                                                  ,CONCAT12(uVar12,CONCAT11(uVar10,uVar8)))))));
    dVar30 = dVar24;
    dVar31 = dVar28;
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar4);
    if (!NAN(dVar24 - dVar31)) {
      func_0x00010c181140(*(undefined8 *)(param_1 + lVar5));
    }
    lVar5 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x0001008cd514();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010bf20c00(lVar4);
    lVar5 = param_1;
    dVar31 = dVar30;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar5);
    if (!NAN(dVar30 - dVar31)) {
      func_0x00010c181140(*(undefined8 *)(param_1 + lVar7));
      func_0x00010c181140(*(undefined8 *)(param_1 + lVar6));
    }
    _objc_release(lVar4);
    in_d3 = dVar28;
  }
  lVar5 = (long)_DAT_112748ad4;
  if ((*(long *)(param_1 + lVar5) != 0) &&
     (lVar7 = (long)_DAT_112748ad8, *(long *)(param_1 + lVar7) != 0)) {
    lVar6 = -(ulong)(dVar27 == 0.0);
    lVar4 = -(ulong)(dVar25 == 0.0);
    lVar26 = -(ulong)(dVar24 == 0.0);
    lVar29 = -(ulong)(dVar28 == 0.0);
    auVar1[1] = ~(byte)((ulong)lVar6 >> 8);
    auVar1[0] = ~(byte)lVar6;
    auVar1[2] = ~(byte)((ulong)lVar6 >> 0x10);
    auVar1[3] = ~(byte)((ulong)lVar6 >> 0x18);
    auVar1[4] = ~(byte)lVar4;
    auVar1[5] = ~(byte)((ulong)lVar4 >> 8);
    auVar1[6] = ~(byte)((ulong)lVar4 >> 0x10);
    auVar1[7] = ~(byte)((ulong)lVar4 >> 0x18);
    auVar1[8] = ~(byte)lVar26;
    auVar1[9] = ~(byte)((ulong)lVar26 >> 8);
    auVar1[10] = ~(byte)((ulong)lVar26 >> 0x10);
    auVar1[0xb] = ~(byte)((ulong)lVar26 >> 0x18);
    auVar1[0xc] = ~(byte)lVar29;
    auVar1[0xd] = ~(byte)((ulong)lVar29 >> 8);
    auVar1[0xe] = ~(byte)((ulong)lVar29 >> 0x10);
    auVar1[0xf] = ~(byte)((ulong)lVar29 >> 0x18);
    uVar2 = NEON_umaxv(auVar1,4);
    uVar8 = (undefined1)uVar2;
    uVar10 = (undefined1)(uVar2 >> 8);
    uVar12 = (undefined1)(uVar2 >> 0x10);
    uVar14 = (undefined1)(uVar2 >> 0x18);
    uVar16 = 0;
    uVar18 = 0;
    uVar20 = 0;
    uVar22 = 0;
    dStack_80 = dVar27;
    if ((uVar2 & 1) == 0) {
      lVar6 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)PTR__CGPointZero_110347540;
      uVar8 = (char)uVar3;
      uVar10 = (char)((ulong)uVar3 >> 8);
      uVar12 = (char)((ulong)uVar3 >> 0x10);
      uVar14 = (char)((ulong)uVar3 >> 0x18);
      uVar16 = (char)((ulong)uVar3 >> 0x20);
      uVar18 = (char)((ulong)uVar3 >> 0x28);
      uVar20 = (char)((ulong)uVar3 >> 0x30);
      uVar22 = (char)((ulong)uVar3 >> 0x38);
      func_0x00010c14caa0(CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar19,CONCAT14(uVar17,CONCAT13(
                                                  uVar15,CONCAT12(uVar13,CONCAT11(uVar11,uVar9))))))
                                  ),*(undefined8 *)(PTR__CGPointZero_110347540 + 8));
      uVar23 = uVar22;
      uVar21 = uVar20;
      uVar19 = uVar18;
      uVar17 = uVar16;
      uVar15 = uVar14;
      uVar13 = uVar12;
      uVar11 = uVar10;
      uVar9 = uVar8;
      uVar8 = uVar9;
      uVar10 = uVar11;
      uVar12 = uVar13;
      uVar14 = uVar15;
      uVar16 = uVar17;
      uVar18 = uVar19;
      uVar20 = uVar21;
      uVar22 = uVar23;
      _objc_release(lVar6);
      dStack_80 = (double)CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar19,CONCAT14(uVar17,CONCAT13(
                                                  uVar15,CONCAT12(uVar13,CONCAT11(uVar11,uVar9))))))
                                  );
    }
    lVar6 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar4 != 0) {
      lVar6 = param_1;
      func_0x00010c0f2520(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c149200();
      _objc_release(lVar6);
      lVar6 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00(lVar4);
      dVar27 = in_d3 - dVar27;
      func_0x00010bf51200(lVar6);
      _objc_release(lVar6);
      lVar6 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(lVar6);
      if ((!NAN(dVar27)) && (!NAN(in_d3))) {
        func_0x00010c181140(*(undefined8 *)(param_1 + lVar7));
      }
      dStack_80 = (double)CONCAT17(uVar22,CONCAT16(uVar20,CONCAT15(uVar18,CONCAT14(uVar16,CONCAT13(
                                                  uVar14,CONCAT12(uVar12,CONCAT11(uVar10,uVar8))))))
                                  ) - dStack_80;
      uVar9 = 0;
      uVar11 = 0;
      uVar13 = 0;
      uVar15 = 0;
      uVar17 = 0;
      uVar19 = 0;
      uVar21 = 0;
      uVar23 = 0;
      if (0.0 <= dStack_80) {
        uVar9 = SUB81(dStack_80,0);
        uVar11 = (char)((ulong)dStack_80 >> 8);
        uVar13 = (char)((ulong)dStack_80 >> 0x10);
        uVar15 = (char)((ulong)dStack_80 >> 0x18);
        uVar17 = (char)((ulong)dStack_80 >> 0x20);
        uVar19 = (char)((ulong)dStack_80 >> 0x28);
        uVar21 = (char)((ulong)dStack_80 >> 0x30);
        uVar23 = (char)((ulong)dStack_80 >> 0x38);
      }
      if (!NAN((double)CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar19,CONCAT14(uVar17,CONCAT13(
                                                  uVar15,CONCAT12(uVar13,CONCAT11(uVar11,uVar9))))))
                               )) &&
          !NAN((double)CONCAT17(uVar23,CONCAT16(uVar21,CONCAT15(uVar19,CONCAT14(uVar17,CONCAT13(
                                                  uVar15,CONCAT12(uVar13,CONCAT11(uVar11,uVar9))))))
                               ))) {
        func_0x00010c181140(*(undefined8 *)(param_1 + lVar5));
      }
    }
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 1064a811c; end: 1064a8193; -[SCContextOperaLayerViewController didUpdateOperaPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a811c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748b30);
  *(undefined8 *)(param_1 + _DAT_112748b30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112748a84),param_2,param_3);
  func_0x00010bf7e560(*(undefined8 *)(param_1 + _DAT_112748a3c),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064a8194; end: 1064a81c3; -[SCContextOperaLayerViewController pageObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a8194(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748a84);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064a81c4; end: 1064a8cc3; -[SCContextOperaLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a81c4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c16ac40(*(undefined8 *)(param_1 + (long)_DAT_112748a38),param_2,0);
  uVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + (long)_DAT_112748b30);
  *(ulong *)(param_1 + (long)_DAT_112748b30) = uVar1;
  _objc_release(uVar21);
  lVar25 = (long)_DAT_112748a34;
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  uVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47a60(uVar21);
  _objc_release(uVar1);
  uVar21 = *(undefined8 *)(param_1 + (long)_DAT_112748a84);
  uVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar21);
  _objc_release(uVar1);
  func_0x00010c109da0(param_1);
  uVar2 = param_1;
  func_0x00010bde83a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + (long)_DAT_112748a94);
  func_0x00010c10fb00(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dfa0(*(undefined8 *)(param_1 + lVar25));
  uVar1 = uVar2;
  func_0x00010bf4ea60();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_112748b34;
  uVar22 = *(undefined8 *)(param_1 + lVar25);
  *(ulong *)(param_1 + lVar25) = uVar1;
  _objc_release(uVar22);
  _objc_release(uVar21);
  func_0x00010bf0c860(param_1);
  uVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar19;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar19 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar19 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  lVar24 = (long)_DAT_112748b38;
  if ((*(long *)(param_1 + lVar24) == 0) && (uVar1 != 0)) {
    uVar19 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar19;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c08bda0(uVar3);
    uVar7 = uVar5;
    FUN_1064a717c(uVar5,uVar6,*(undefined8 *)(param_1 + (long)_DAT_112748a2c));
    if (((int)uVar7 != 0) &&
       ((((*(byte *)(param_1 + (long)_DAT_112748b14) & 1) == 0 &&
         (uVar6 = uVar3, func_0x00010c08bda0(), 5 < uVar6 - 3)) && (uVar6 != 0x22)))) {
      _objc_release(uVar5);
      _objc_release(uVar19);
      uVar19 = uVar3;
      func_0x00010c08bda0();
      if (uVar19 == 10) {
        func_0x00010c25a6e0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar3;
        func_0x00010bf82a60();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar19;
        func_0x00010c08fa60();
        _objc_release(uVar19);
        _objc_release(uVar3);
        if (uVar5 == 0) {
          puVar4 = PTR_PTR_1126ae560;
          _objc_opt_new();
          uVar21 = *(undefined8 *)(param_1 + (long)_DAT_112748b3c);
          *(undefined **)(param_1 + (long)_DAT_112748b3c) = puVar4;
          _objc_release(uVar21);
        }
      }
      uVar19 = *(ulong *)(param_1 + (long)_DAT_112748aa4);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c118dc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25dfa0();
      func_0x00010c0ea460();
      uVar21 = *(undefined8 *)(param_1 + lVar25);
      func_0x00010bf4f500(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(param_1 + (long)_DAT_112748b3c);
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar19;
      func_0x00010c11aca0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar24);
      *(ulong *)(param_1 + lVar24) = uVar3;
      _objc_release(uVar8);
      _objc_release(uVar22);
      _objc_release(uVar21);
    }
    _objc_release(uVar5);
    _objc_release(uVar19);
  }
  uVar19 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar19;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar19);
  if ((int)uVar6 != 0) {
    uVar22 = *(undefined8 *)(param_1 + (long)_DAT_112748aa4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_1;
    func_0x00010c118dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar25);
    func_0x00010bf4f500(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar22;
    func_0x00010c11ae00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + (long)_DAT_112748b40);
    *(undefined8 *)(param_1 + (long)_DAT_112748b40) = uVar21;
    _objc_release(uVar23);
    _objc_release(uVar8);
    _objc_release(uVar19);
    _objc_release(uVar22);
  }
  uVar19 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar19;
  func_0x00010c0da1c0();
  _objc_release(uVar19);
  lVar24 = *(long *)(param_1 + (long)_DAT_112748a74);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    lVar9 = lVar24;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 == 0) {
      uVar19 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar19);
      uVar19 = param_1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar19;
      func_0x00010c06b7e0();
      if ((int)uVar3 != 0) {
        uVar3 = param_1;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b2d20;
        func_0x00010c24c3e0(PTR_PTR_1126b2d20);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        _objc_release(uVar6);
        _objc_release(puVar4);
        _objc_release(uVar5);
        _objc_release(uVar3);
      }
      _objc_release(uVar19);
      func_0x00010c1c8c60(lVar24);
      func_0x00010c1a7f60(lVar24);
      uVar19 = param_1;
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar19;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = 0;
      FUN_1064a5a38(0);
      _objc_release(uVar3);
      _objc_release(uVar19);
      lVar9 = lVar24;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = param_1;
      func_0x00010bfbbac0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar19;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar24;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010bfbbac0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar7;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar24;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_1;
      func_0x00010bfbbac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar14;
      func_0x00010bf493c0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + (long)_DAT_112748b44);
      *(undefined **)(param_1 + (long)_DAT_112748b44) = puVar4;
      _objc_release(uVar21);
      _objc_release(lVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(uVar12);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar19);
      _objc_release(lVar9);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
  }
  uVar21 = *(undefined8 *)(param_1 + (long)_DAT_112748a3c);
  uVar19 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf99b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1420(uVar21);
  _objc_release(uVar3);
  _objc_release(uVar19);
  func_0x00010c1d8c80(*(undefined8 *)(param_1 + lVar25));
  fVar26 = -32.0;
  func_0x00010bf97f60(param_1);
  lVar25 = (long)_DAT_112748b18;
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bfdf3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + (long)_DAT_112748b48);
  *(undefined8 *)(param_1 + (long)_DAT_112748b48) = uVar21;
  _objc_release(uVar22);
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c298e80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + (long)_DAT_112748b4c);
  *(undefined8 *)(param_1 + (long)_DAT_112748b4c) = uVar21;
  _objc_release(uVar22);
  uVar21 = *(undefined8 *)(param_1 + (long)_DAT_112748afc);
  uVar19 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181a40(uVar21);
  _objc_release(uVar19);
  puVar4 = PTR_PTR_1126b2340;
  uVar19 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar19;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079440();
  *(char *)(param_1 + (long)_DAT_112748b50) = (char)puVar4;
  _objc_release(uVar3);
  _objc_release(uVar19);
  uVar19 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar19;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ca7c8;
  func_0x00010c0e8cc0(PTR_PTR_1126ca7c8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar19);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar19 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar19 = 0;
  }
  _objc_retain(uVar19);
  _objc_release(uVar5);
  if (uVar19 != 0) {
    func_0x00010bfb2c80(uVar5);
    func_0x00010c287000((double)fVar26,param_1);
  }
  _objc_release(uVar19);
  _objc_release(lVar24);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c229c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar4,PTR_s_setupWithPresenter_viewControlle_112668148,
               *(undefined8 *)(*(long *)(uVar2 + 0x20) + (long)_DAT_112748b34));
    return;
  }
  return;
}



/* Entry: 1064a8cc4; end: 1064a8cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a8cc4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c229c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setupWithPresenter_viewControlle_112668148,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748b34));
  return;
}



/* Entry: 1064a8cdc; end: 1064a8daf; -[SCContextOperaLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a8cdc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_60,uVar2,uVar2);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  _objc_release(lVar1);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_112748b2c));
  return;
}



/* Entry: 1064a8db0; end: 1064a8e13; -[SCContextOperaLayerViewController updateViewWithVerticalPageOffset:relativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a8db0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748a34);
  func_0x00010c0b82c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c4e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064a8e14; end: 1064a8f5f; -[SCContextOperaLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a8e14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  lVar2 = param_1;
  func_0x00010be3f2a0();
  if ((int)lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112748b34);
    *(undefined8 *)(param_1 + _DAT_112748b34) = 0;
    _objc_release(uVar1);
  }
  else {
    _objc_initWeak(&uStack_90,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112748b34);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1064a8f60;
    puStack_40 = &UNK_1108434b0;
    _objc_copyWeak(auStack_38,&uStack_90);
    func_0x00010bf84660(uVar1);
    _objc_destroyWeak(auStack_38);
    _objc_destroyWeak(&uStack_90);
  }
  lVar2 = (long)_DAT_112748b2c;
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar2));
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar2));
  *(undefined1 *)(param_1 + _DAT_112748b20) = 0;
  func_0x00010bf97f60(param_1);
  puStack_98 = PTR_PTR_1126f1628;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_teardown_112678538);
  return;
}



/* Entry: 1064a8f60; end: 1064a8f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a8f60(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112748b34);
    *(undefined8 *)(param_1 + _DAT_112748b34) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064a8fa0; end: 1064a8fa7;  */

void FUN_1064a8fa0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_teardown_112678538);
  return;
}



/* Entry: 1064a8fa8; end: 1064a901b; -[SCContextOperaLayerViewController resume] */

void FUN_1064a8fa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(uVar1);
  func_0x00010be3f2a0(param_1);
  func_0x00010c109c40(param_1);
  puStack_28 = PTR_PTR_1126f1628;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_resume_11262ce90);
  return;
}



/* Entry: 1064a901c; end: 1064a908b; -[SCContextOperaLayerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a901c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1628;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  if (((*(byte *)(param_1 + _DAT_112748b54) & 1) == 0) &&
     ((*(byte *)(param_1 + _DAT_112748b58) & 1) == 0)) {
    func_0x00010bf97f60(param_1);
  }
  return;
}


