/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b51580; end: 107b51593; -[SCOperaActionMenuHeaderView showBrowserButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b51580(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ac80),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 107b51594; end: 107b515cb; -[SCOperaActionMenuHeaderView updateURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b51594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ac84);
  *(undefined8 *)(param_1 + _DAT_11276ac84) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b515cc; end: 107b515d3; -[SCOperaActionMenuHeaderView sendButton] */

undefined8 FUN_107b515cc(void)

{
  return 0;
}



/* Entry: 107b515d4; end: 107b518b7; -[SCOperaActionMenuHeaderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b515d4(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f9f80;
  lStack_60 = param_4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar3 = (long)_DAT_11276ac88;
  if (*(long *)(param_4 + lVar3) == 0) {
    lVar4 = (long)_DAT_11276ac8c;
  }
  else {
    func_0x00010c1a7d00(0x4036000000000000);
    func_0x00010c1ba100(0x4032000000000000,*(undefined8 *)(param_4 + lVar3));
    lVar4 = (long)_DAT_11276ac8c;
    lVar1 = *(long *)(param_4 + lVar4);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010bf20c00(param_4);
      _CGRectGetMidY();
      func_0x00010c17a860(*(undefined8 *)(param_4 + lVar3));
    }
    else {
      func_0x00010c2172c0(0x4022000000000000,*(undefined8 *)(param_4 + lVar3));
    }
    func_0x00010bf20c00(param_4);
    param_1 = param_3 + -18.0 + -47.0;
    func_0x00010c2256c0(param_1,*(undefined8 *)(param_4 + lVar3));
    func_0x00010c23d620(*(undefined8 *)(param_4 + lVar3));
  }
  if (*(long *)(param_4 + lVar4) != 0) {
    func_0x00010c1a7d00(0x4030800000000000);
    if (*(long *)(param_4 + lVar3) == 0) {
      func_0x00010c0699c0(*(undefined8 *)(param_4 + lVar4));
    }
    else {
      func_0x00010c2a5040();
    }
    func_0x00010c2256c0(*(undefined8 *)(param_4 + lVar4));
    param_1 = 18.0;
    func_0x00010c1ba100(0x4032000000000000,*(undefined8 *)(param_4 + lVar4));
    if (*(long *)(param_4 + lVar3) == 0) {
      param_1 = 9.0;
    }
    else {
      func_0x00010bf1fec0();
    }
    func_0x00010c2172c0(*(undefined8 *)(param_4 + lVar4));
    func_0x00010c23d620(*(undefined8 *)(param_4 + lVar4));
  }
  lVar4 = (long)_DAT_11276ac90;
  if (*(long *)(param_4 + lVar4) != 0) {
    func_0x00010c2256c0(0x4049000000000000);
    param_1 = 38.0;
    func_0x00010c1a7d00(0x4043000000000000,*(undefined8 *)(param_4 + lVar4));
    func_0x00010bf20c00(param_4);
    _CGRectGetMaxX();
    func_0x00010c1ee020(*(undefined8 *)(param_4 + lVar4));
    func_0x00010bf20c00(param_4);
    _CGRectGetMinY();
    func_0x00010c2172c0(*(undefined8 *)(param_4 + lVar4));
  }
  if (*(long *)(param_4 + _DAT_11276ac80) != 0) {
    param_1 = 242.0;
    func_0x00010c19f0e0(0x406e400000000000,0x402a000000000000,0x405da00000000000,0x403e000000000000)
    ;
  }
  func_0x00010bf20c00(param_4);
  _CGRectGetMaxX();
  lVar4 = (long)_DAT_11276ac94;
  if (*(long *)(param_4 + lVar4) != 0) {
    func_0x00010c2256c0(0x4040800000000000);
    func_0x00010c1a7d00(0x4040800000000000,*(undefined8 *)(param_4 + lVar4));
    param_1 = param_1 + -10.0;
    func_0x00010c1ee020(param_1,*(undefined8 *)(param_4 + lVar4));
    lVar1 = *(long *)(param_4 + lVar3);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      param_1 = 20.0;
    }
    else {
      func_0x00010bf348c0(*(undefined8 *)(param_4 + lVar3));
    }
    func_0x00010c17a860(*(undefined8 *)(param_4 + lVar4));
    _objc_release(lVar1);
    func_0x00010c0ed1a0(*(undefined8 *)(param_4 + lVar4));
  }
  lVar4 = (long)_DAT_11276ac98;
  if (*(long *)(param_4 + lVar4) != 0) {
    func_0x00010c160fc0();
    func_0x00010c2256c0(0x4040800000000000,*(undefined8 *)(param_4 + lVar4));
    func_0x00010c1a7d00(0x4040800000000000,*(undefined8 *)(param_4 + lVar4));
    func_0x00010c1ee020(param_1 + -10.0,*(undefined8 *)(param_4 + lVar4));
    if (*(long *)(param_4 + lVar3) != 0) {
      func_0x00010bf348c0();
    }
    func_0x00010c17a860(*(undefined8 *)(param_4 + lVar4));
  }
  return;
}



/* Entry: 107b518b8; end: 107b519df; -[SCOperaActionMenuHeaderView _setupDisplayNameLabelWithLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b518b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be8be60(param_1);
  }
  else {
    lVar4 = (long)_DAT_11276ac88;
    lVar1 = *(long *)(param_1 + lVar4);
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,1);
      lVar1 = param_1;
      _objc_opt_class(param_1);
      func_0x00010bf85e40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,lVar1);
      _objc_release(lVar1);
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                          &PTR____CFConstantStringClassReference_110eaf3f8);
      lVar1 = *(long *)(param_1 + lVar4);
    }
    func_0x00010c212f20(lVar1,param_2,param_3);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b519e0; end: 107b51a1f; -[SCOperaActionMenuHeaderView _removeDisplayNameLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b519e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ac88;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,0);
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b51a20; end: 107b51c5b; -[SCOperaActionMenuHeaderView _setupUsernameAndScoreLabelWithLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b51a20(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  _objc_release(ppuVar1);
  lVar6 = (long)_DAT_11276ac8c;
  if (ppuVar2 == (undefined **)0x0) {
    func_0x00010c212f20();
  }
  else {
    if (*(long *)(param_1 + lVar6) == 0) {
      puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar3;
      _objc_release(uVar5);
      puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6));
      _objc_release(puVar3);
      func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar6));
      lVar4 = param_1;
      _objc_opt_class(param_1);
      func_0x00010c294540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_1 + lVar6));
      _objc_release(lVar4);
      func_0x00010befbb60(param_1);
    }
    ppuVar1 = param_3;
    func_0x00010bf86360();
    if ((int)ppuVar1 == 0) {
      ppuVar1 = param_3;
      func_0x00010c294420(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6));
    }
    else {
      ppuVar2 = param_3;
      func_0x00010c150c20();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (ppuVar2 == (undefined **)0x0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110eaf418;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eaf418,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c150c20(param_3);
        func_0x00010c0df840(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb5c60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar2 = param_3;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6));
      _objc_release(puVar3);
      _objc_release(ppuVar2);
    }
    _objc_release(ppuVar1);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar6));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b51c5c; end: 107b51d17; -[SCOperaActionMenuHeaderView _setupHdIconViewWithLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b51c5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfdef00();
  lVar5 = (long)_DAT_11276ac90;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
    func_0x00010c12c960(lVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar3);
  }
  else {
    if (lVar4 == 0) {
      puVar2 = PTR_PTR_1126d6af8;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar3);
      func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
      lVar4 = *(long *)(param_1 + lVar5);
    }
    lVar1 = param_3;
    func_0x00010bfdef00(param_3);
    func_0x00010c1a4ea0(lVar4,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b51d18; end: 107b51f2b; -[SCOperaActionMenuHeaderView _setupBrowserButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b51d18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276ac80;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbb60(param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x402e000000000000);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(uVar4);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf85e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar4);
  _objc_release(lVar2);
  func_0x00010c2163a0(0x4018000000000000,0x4030000000000000,0x4018000000000000,0x4030000000000000,
                      *(undefined8 *)(param_1 + lVar5));
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  ppuVar3 = &PTR____CFConstantStringClassReference_110eaf458;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110eaf458,
                      &PTR____CFConstantStringClassReference_110e34d78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar4);
  _objc_release(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar5),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 107b51f2c; end: 107b51fbf; -[SCOperaActionMenuHeaderView _didPressBrowserButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b51f2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + _DAT_11276ac9c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0e9f00();
  _objc_release(lVar1);
  if (*(long *)(param_1 + _DAT_11276ac84) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107b51fc0; end: 107b52117; -[SCOperaActionMenuHeaderView _setupNotificationViewWithLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b51fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf2d760();
  if ((((int)uVar1 == 0) || (uVar1 = param_3, func_0x00010c2606e0(), (int)uVar1 == 0)) ||
     (uVar1 = param_3, func_0x00010c06b7e0(), (int)uVar1 != 0)) {
    lVar6 = (long)_DAT_11276ac98;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar6));
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar1);
  }
  else {
    lVar7 = (long)_DAT_11276ac98;
    lVar6 = *(long *)(param_1 + lVar7);
    if (lVar6 == 0) {
      puVar2 = PTR_PTR_1126d6b00;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110eaf478);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110eaf498);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c014aa0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar2,param_2,puVar3,
                          puVar4);
      uVar1 = *(undefined8 *)(param_1 + lVar7);
      *(undefined **)(param_1 + lVar7) = puVar2;
      _objc_release(uVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
      lVar6 = *(long *)(param_1 + lVar7);
    }
    uVar1 = param_3;
    func_0x00010c079480(param_3);
    func_0x00010c286ac0(lVar6,param_2,uVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    uVar1 = param_3;
    func_0x00010bf2d760(param_3);
    func_0x00010c2841c0(uVar5,param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b52118; end: 107b521fb; -[SCOperaActionMenuHeaderView _setupSubscribeViewWithLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b52118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf2d7c0();
  if ((((int)uVar1 == 0) || (uVar1 = param_3, func_0x00010c2606e0(), (int)uVar1 == 0)) ||
     (uVar1 = param_3, func_0x00010c06b7e0(), (int)uVar1 != 0)) {
    lVar3 = (long)_DAT_11276ac94;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  else {
    lVar3 = (long)_DAT_11276ac94;
    if (*(long *)(param_1 + lVar3) == 0) {
      puVar2 = PTR_PTR_1126d6b08;
      _objc_alloc();
      func_0x00010c014720(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(undefined **)(param_1 + lVar3) = puVar2;
      _objc_release(uVar1);
      uVar4 = *(undefined8 *)(param_1 + lVar3);
      uVar1 = param_3;
      func_0x00010c080120(param_3);
      func_0x00010c286b00(uVar4,param_2,uVar1);
      func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b521fc; end: 107b5220b; +[SCOperaActionMenuHeaderView headerColor] */

void FUN_107b521fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x7b);
  return;
}



/* Entry: 107b5220c; end: 107b5221b; +[SCOperaActionMenuHeaderView displayNameColor] */

void FUN_107b5220c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x84);
  return;
}



/* Entry: 107b5221c; end: 107b5222b; +[SCOperaActionMenuHeaderView usernameColor] */

void FUN_107b5221c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x7d);
  return;
}



/* Entry: 107b5222c; end: 107b5223b; -[SCOperaActionMenuHeaderView hdButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b5222c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ac90);
}



/* Entry: 107b5223c; end: 107b5224b; -[SCOperaActionMenuHeaderView browserButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b5223c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ac80);
}



/* Entry: 107b5224c; end: 107b5225b; -[SCOperaActionMenuHeaderView notificationOptInView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b5224c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ac98);
}



/* Entry: 107b5225c; end: 107b5226b; -[SCOperaActionMenuHeaderView subscribeButtonView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b5225c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ac94);
}



/* Entry: 107b5226c; end: 107b5228b; -[SCOperaActionMenuHeaderView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5226c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ac9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b5228c; end: 107b5229f; -[SCOperaActionMenuHeaderView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5228c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ac9c,param_3);
  return;
}



/* Entry: 107b522a0; end: 107b5233b; -[SCOperaActionMenuHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b522a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276ac9c);
  _objc_storeStrong(param_1 + _DAT_11276ac94,0);
  _objc_storeStrong(param_1 + _DAT_11276ac98,0);
  _objc_storeStrong(param_1 + _DAT_11276ac80,0);
  _objc_storeStrong(param_1 + _DAT_11276ac90,0);
  _objc_storeStrong(param_1 + _DAT_11276ac84,0);
  _objc_storeStrong(param_1 + _DAT_11276ac8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ac88,0);
  return;
}



/* Entry: 107b5233c; end: 107b52477; -[SCOperaActionMenuLayerView setupViewForLayer:animationDuration:animationOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5233c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c15dfe0();
  if ((int)uVar2 == 0) {
    bVar4 = 0;
  }
  else {
    uVar2 = param_4;
    func_0x00010c15e040();
    bVar4 = (byte)uVar2 ^ 1;
  }
  *(byte *)(param_2 + _DAT_11276aca0) = bVar4;
  uVar2 = param_4;
  func_0x00010c15dfe0();
  uVar1 = 0;
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c15e040();
    uVar1 = (undefined1)uVar2;
  }
  *(undefined1 *)(param_2 + _DAT_11276aca4) = uVar1;
  uVar2 = param_4;
  func_0x00010c2611e0();
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(param_2 + _DAT_11276aca8) = 0;
  }
  else {
    uVar2 = param_4;
    func_0x00010bf92720();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4b900();
    *(char *)(param_2 + _DAT_11276aca8) = (char)uVar3;
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010bf92720();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + _DAT_11276acac);
  *(ulong *)(param_2 + _DAT_11276acac) = uVar2;
  _objc_release(uVar5);
  func_0x00010beab3a0(param_2,param_3,param_4);
  func_0x00010beacf60(param_2,param_3,param_4);
  func_0x00010c223be0(*(undefined8 *)(param_2 + _DAT_11276acb0),param_1,param_2,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b52478; end: 107b5248f; -[SCOperaActionMenuLayerView isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b52478(long param_1)

{
  return 0.0 < *(double *)(param_1 + _DAT_11276acb0);
}



/* Entry: 107b52490; end: 107b524f3; -[SCOperaActionMenuLayerView _setupButtonsWithLayer:] */

void FUN_107b52490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010beaa5c0(param_1);
  uVar1 = param_3;
  func_0x00010c15dfe0();
  if ((int)uVar1 != 0) {
    func_0x00010beafaa0(param_1);
  }
  uVar1 = param_3;
  func_0x00010c15e040();
  if ((int)uVar1 != 0) {
    func_0x00010beadd20(param_1);
  }
  func_0x00010c08cdc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b524f4; end: 107b526bf; -[SCOperaActionMenuLayerView _setupSendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b524f4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double extraout_d1;
  undefined1 auVar8 [16];
  
  lVar5 = (long)_DAT_11276acb4;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b6138;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4048000000000000,0x4048000000000000);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar4);
  uVar6 = 0x9999999a;
  uVar7 = 0x3ff19999;
  func_0x00010c1c3c80(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1d4b80(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
  ppuVar2 = &PTR____CFConstantStringClassReference_110e22d58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22d58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
  _objc_release(ppuVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar5));
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe6ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  auVar8 = NEON_fmov(0x3fe0000000000000,8);
  func_0x00010c1aa420(SUB84((double)(float)(int)((48.0 - (double)CONCAT44(uVar7,uVar6)) *
                                                auVar8._0_8_),0),
                      (double)(float)(int)((48.0 - extraout_d1) * auVar8._8_8_),
                      *(undefined8 *)(param_1 + lVar5));
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 107b526c0; end: 107b52897; -[SCOperaActionMenuLayerView _setupLoadingSendButton] */

/* WARNING: Possible PIC construction at 0x000107b52824: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b526c0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double extraout_d1;
  undefined1 auVar8 [16];
  
  lVar5 = (long)_DAT_11276acb8;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar2 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4048000000000000,0x4048000000000000);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0);
    _objc_release(uVar3);
    func_0x00010c1c8380(0,*(undefined8 *)(param_1 + lVar5));
    uVar6 = 0;
    uVar7 = 0x3ff00000;
    func_0x00010c1c3c80(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1d4b80(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfe6ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfe6ac0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    auVar8 = NEON_fmov(0x3fe0000000000000,8);
    func_0x00010c1aa420(SUB84((double)(float)(int)((48.0 - (double)CONCAT44(uVar7,uVar6)) *
                                                  auVar8._0_8_),0),
                        (double)(float)(int)((48.0 - extraout_d1) * auVar8._8_8_),
                        *(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    lVar5 = param_1;
  }
  else {
    lVar4 = (long)_DAT_11276acbc;
    if (*(long *)(param_1 + lVar4) != 0) {
      return;
    }
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    lVar5 = *(long *)(param_1 + lVar5);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar5,PTR_s_addSubview__11259c880,uVar3);
  return;
}



/* Entry: 107b52898; end: 107b529a7; -[SCOperaActionMenuLayerView _setupActionButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b52898(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar4 = *(long *)(param_1 + _DAT_11276acac);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c067fc0(*(undefined8 *)(lStack_108 + lVar7 * 8));
        func_0x00010beab300(param_1);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  func_0x00010beacd40();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((long)puVar2 < 0xd) {
    if ((long)puVar2 < 2) {
      if (puVar2 == (undefined8 *)0x0) {
        plVar6 = (long *)(param_1 + _DAT_11276acc0);
        lVar1 = *plVar6;
        if (lVar1 != 0) goto LAB_107b52c90;
        lVar1 = param_1;
        func_0x00010bdc42c0(0x4049000000000000,0x4043000000000000);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *plVar6;
        *plVar6 = lVar1;
        _objc_release(lVar4);
        lVar1 = *plVar6;
        goto LAB_107b52c00;
      }
      if (puVar2 != (undefined8 *)0x1) {
        return;
      }
      plVar6 = (long *)(param_1 + _DAT_11276acc4);
      lVar1 = *plVar6;
joined_r0x000107b52a9c:
      if (lVar1 != 0) goto LAB_107b52c90;
      lVar1 = param_1;
      func_0x00010bdc42c0(0x4044000000000000,0x4044000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = (undefined *)*plVar6;
      *plVar6 = lVar1;
LAB_107b52c88:
      _objc_release(puVar3);
    }
    else {
      if (puVar2 == (undefined8 *)0x2) {
LAB_107b52ad4:
        plVar6 = (long *)(param_1 + _DAT_11276acc8);
        lVar1 = *plVar6;
        if (lVar1 == 0) {
          lVar1 = param_1;
          func_0x00010bdc42c0(0x4044000000000000,0x4044000000000000);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = *plVar6;
          *plVar6 = lVar1;
          _objc_release(lVar4);
          lVar1 = *plVar6;
        }
        func_0x00010c08c0e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d4bc0(0);
        _objc_release(lVar1);
        func_0x00010c160fc0(*plVar6);
        goto LAB_107b52cb0;
      }
      if (puVar2 != (undefined8 *)0x3) {
        return;
      }
      plVar6 = (long *)(param_1 + _DAT_11276accc);
      lVar1 = *plVar6;
      if (lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010bdc42c0(0x4044000000000000,0x4044000000000000);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *plVar6;
        *plVar6 = lVar1;
        _objc_release(lVar4);
        lVar1 = *plVar6;
      }
LAB_107b52c00:
      func_0x00010c160fc0(lVar1);
    }
    lVar1 = *plVar6;
  }
  else if ((long)puVar2 < 0x14) {
    if (puVar2 != (undefined8 *)0xd) {
      if (puVar2 != (undefined8 *)0xe) {
        return;
      }
      goto LAB_107b52ad4;
    }
    plVar6 = (long *)(param_1 + _DAT_11276acd0);
    lVar1 = *plVar6;
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010bdc42c0(0x403e000000000000,0x403e000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *plVar6;
      *plVar6 = lVar1;
      _objc_release(lVar4);
      lVar1 = *plVar6;
      goto LAB_107b52c00;
    }
  }
  else {
    if (puVar2 != (undefined8 *)0x14) {
      if (puVar2 != (undefined8 *)0x24) {
        return;
      }
      plVar6 = (long *)(param_1 + _DAT_11276acd8);
      lVar1 = *plVar6;
      goto joined_r0x000107b52a9c;
    }
    plVar6 = (long *)(param_1 + _DAT_11276acd4);
    lVar1 = *plVar6;
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010bdc42c0(0x4044000000000000,0x4044000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *plVar6;
      *plVar6 = lVar1;
      _objc_release(lVar4);
      lVar1 = *plVar6;
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9fc0(lVar1);
      goto LAB_107b52c88;
    }
  }
LAB_107b52c90:
  func_0x00010c08c0e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(lVar1);
LAB_107b52cb0:
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addSubview__11259c880,*plVar6);
  return;
}



/* Entry: 107b529a8; end: 107b52cd7; -[SCOperaActionMenuLayerView _setupButtonForButtonType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b529a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  if (0xc < param_3) {
    if (param_3 < 0x14) {
      if (param_3 != 0xd) {
        if (param_3 != 0xe) {
          return;
        }
        goto LAB_107b52ad4;
      }
      plVar5 = (long *)(param_1 + _DAT_11276acd0);
      lVar1 = *plVar5;
      if (lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010bdc42c0(0x403e000000000000,0x403e000000000000,param_1,param_2,
                            &PTR____CFConstantStringClassReference_110eae378);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *plVar5;
        *plVar5 = lVar1;
        _objc_release(lVar4);
        lVar1 = *plVar5;
        goto LAB_107b52c00;
      }
    }
    else if (param_3 == 0x14) {
      plVar5 = (long *)(param_1 + _DAT_11276acd4);
      lVar1 = *plVar5;
      if (lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010bdc42c0(0x4044000000000000,0x4044000000000000,param_1,param_2,
                            &PTR____CFConstantStringClassReference_110eaf5f8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *plVar5;
        *plVar5 = lVar1;
        _objc_release(lVar4);
        lVar1 = *plVar5;
        puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9fc0(lVar1);
        goto LAB_107b52c88;
      }
    }
    else {
      if (param_3 != 0x24) {
        return;
      }
      plVar5 = (long *)(param_1 + _DAT_11276acd8);
      lVar1 = *plVar5;
      if (lVar1 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e847d8;
        goto LAB_107b52aa8;
      }
    }
    goto LAB_107b52c90;
  }
  if (param_3 < 2) {
    if (param_3 == 0) {
      plVar5 = (long *)(param_1 + _DAT_11276acc0);
      lVar1 = *plVar5;
      if (lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010bdc42c0(0x4049000000000000,0x4043000000000000,param_1,param_2,
                            &PTR____CFConstantStringClassReference_110eaf4f8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *plVar5;
        *plVar5 = lVar1;
        _objc_release(lVar4);
        lVar1 = *plVar5;
        goto LAB_107b52c00;
      }
    }
    else {
      if (param_3 != 1) {
        return;
      }
      plVar5 = (long *)(param_1 + _DAT_11276acc4);
      lVar1 = *plVar5;
      if (lVar1 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110eaf538;
LAB_107b52aa8:
        lVar1 = param_1;
        func_0x00010bdc42c0(0x4044000000000000,0x4044000000000000,param_1,param_2,ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = (undefined *)*plVar5;
        *plVar5 = lVar1;
LAB_107b52c88:
        _objc_release(puVar3);
        goto LAB_107b52c8c;
      }
    }
  }
  else {
    if (param_3 == 2) {
LAB_107b52ad4:
      plVar5 = (long *)(param_1 + _DAT_11276acc8);
      lVar1 = *plVar5;
      if (lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010bdc42c0(0x4044000000000000,0x4044000000000000,param_1,param_2,
                            &PTR____CFConstantStringClassReference_110eaf558);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *plVar5;
        *plVar5 = lVar1;
        _objc_release(lVar4);
        lVar1 = *plVar5;
      }
      func_0x00010c08c0e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d4bc0(0);
      _objc_release(lVar1);
      func_0x00010c160fc0(*plVar5);
      goto LAB_107b52cb0;
    }
    if (param_3 != 3) {
      return;
    }
    plVar5 = (long *)(param_1 + _DAT_11276accc);
    lVar1 = *plVar5;
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010bdc42c0(0x4044000000000000,0x4044000000000000,param_1,param_2,
                          &PTR____CFConstantStringClassReference_110eaf598);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *plVar5;
      *plVar5 = lVar1;
      _objc_release(lVar4);
      lVar1 = *plVar5;
    }
LAB_107b52c00:
    func_0x00010c160fc0(lVar1);
LAB_107b52c8c:
    lVar1 = *plVar5;
  }
LAB_107b52c90:
  func_0x00010c08c0e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(lVar1);
LAB_107b52cb0:
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addSubview__11259c880,*plVar5);
  return;
}



/* Entry: 107b52cd8; end: 107b52d9f; -[SCOperaActionMenuLayerView _actionButtonWithImageName:width:height:] */

void FUN_107b52cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1a9fc0(puVar1,param_4,puVar2,0);
  _objc_release(puVar2);
  func_0x00010c182220(puVar1,param_4,4);
  func_0x00010c1a7d00(param_2,puVar1);
  func_0x00010c2256c0(param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b52da0; end: 107b52e63; -[SCOperaActionMenuLayerView _setupGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b52da0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276acdc;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eaf638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107b52e64; end: 107b52eef; -[SCOperaActionMenuLayerView _setupHeaderWithLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b52e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276ace0;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126d6b10;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c229be0(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b52ef0; end: 107b52eff; -[SCOperaActionMenuLayerView setBrowserButtonVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b52ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2363f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ace0),PTR_s_showBrowserButton__11266b320);
  return;
}



/* Entry: 107b52f00; end: 107b52f0f; -[SCOperaActionMenuLayerView updateURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b52f00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28b750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ace0),PTR_s_updateURL__1126807f8);
  return;
}



/* Entry: 107b52f10; end: 107b52f2f; -[SCOperaActionMenuLayerView setVisible:contentFrame:animationDuration:animationOptions:] */

void FUN_107b52f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8,
                  undefined8 param_9)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_8,param_1,param_2,param_3,param_4,param_5,param_6,
             PTR_s__setVisiblePercent_contentFrame__112588260,param_9);
  return;
}



/* Entry: 107b52f30; end: 107b52f4b; -[SCOperaActionMenuLayerView setVisiblePercent:animationDuration:animationOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b52f30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_3 + _DAT_11276ace4);
                    /* WARNING: Could not recover jumptable at 0x00010beaa2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*puVar1,puVar1[1],puVar1[2],puVar1[3],param_2,param_3,
             PTR_s__setVisiblePercent_contentFrame__112588260);
  return;
}



/* Entry: 107b52f4c; end: 107b5306b; -[SCOperaActionMenuLayerView _setVisiblePercent:contentFrame:animationDuration:animationOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b52f4c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,double param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined **ppuVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  double dStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = (undefined8 *)(param_7 + _DAT_11276ace4);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  dVar5 = *(double *)(param_7 + _DAT_11276acb0);
  *(double *)(param_7 + _DAT_11276acb0) = param_1;
  func_0x00010c21e900(param_7,param_8,param_1 == 1.0);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107b5306c;
  puStack_58 = &UNK_110848c48;
  lStack_50 = param_7;
  dStack_48 = param_1;
  _objc_retainBlock();
  if (0.0 < param_6) {
    dVar4 = ABS(dVar5 - param_1);
    dVar5 = ABS(param_1 + dVar5) * 2.220446049250313e-16;
    bVar2 = true;
    if ((2.2250738585072014e-308 <= dVar4) && (bVar2 = false, !NAN(dVar4) && !NAN(dVar5))) {
      bVar2 = dVar4 < dVar5;
    }
    if (!bVar2) {
      func_0x00010bf03440(param_6,0,PTR__OBJC_CLASS___UIView_1126aec20,param_8,0x20004,ppuVar3,0);
      goto LAB_107b5304c;
    }
  }
  (**(code **)((long)ppuVar3 + 0x10))(ppuVar3);
LAB_107b5304c:
  _objc_release(ppuVar3);
  return;
}



/* Entry: 107b5306c; end: 107b533e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5306c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276aca0) == '\x01') {
    fVar6 = (float)*(double *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276acb4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar6);
  _objc_release(uVar2);
  lVar4 = (long)_DAT_11276aca4;
  if (*(char *)(*(long *)(param_1 + 0x20) + lVar4) == '\x01') {
    fVar5 = (float)*(double *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276acb8);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar5);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb6520();
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (iVar1 != 0) {
    fVar6 = (float)*(double *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276acc0);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar6);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb5ec0();
  if (iVar1 != 0) {
    fVar5 = (float)*(double *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276acc4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar5);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb6580();
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (iVar1 != 0) {
    fVar6 = (float)*(double *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276accc);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar6);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb5e40();
  if (iVar1 != 0) {
    fVar5 = (float)*(double *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276acc8);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar5);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb60e0();
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (iVar1 != 0) {
    fVar6 = (float)*(double *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276acd0);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar6);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb7620();
  if (iVar1 != 0) {
    fVar5 = (float)*(double *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276acdc);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar5);
  _objc_release(uVar2);
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276aca8) == '\x01') {
    fVar6 = (float)*(double *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276acd4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar6);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb5fc0();
  if (iVar1 != 0) {
    fVar5 = (float)*(double *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276acd8);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar5);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  if ((*(char *)(lVar3 + lVar4) != '\x01') || (*(double *)(param_1 + 0x28) <= 0.0)) {
    func_0x00010c2558c0(*(undefined8 *)(lVar3 + _DAT_11276acbc));
  }
  else {
    func_0x00010c24dbc0(*(undefined8 *)(lVar3 + _DAT_11276acbc));
  }
  func_0x00010c223bc0(*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276ace0));
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107b533e4; end: 107b533fb; -[SCOperaActionMenuLayerView _shouldShowReportButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b533e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276acac),PTR_s_containsObject__1125b07e8,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb7d0);
  return;
}



/* Entry: 107b533fc; end: 107b53413; -[SCOperaActionMenuLayerView _shouldShowFeedbackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b533fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276acac),PTR_s_containsObject__1125b07e8,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb7e8);
  return;
}



/* Entry: 107b53414; end: 107b5342b; -[SCOperaActionMenuLayerView _shouldShowEditButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b53414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276acac),PTR_s_containsObject__1125b07e8,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb800);
  return;
}



/* Entry: 107b5342c; end: 107b53443; -[SCOperaActionMenuLayerView _shouldShowSaveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5342c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276acac),PTR_s_containsObject__1125b07e8,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb818);
  return;
}



/* Entry: 107b53444; end: 107b5345b; -[SCOperaActionMenuLayerView _shouldShowDeleteButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b53444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276acac),PTR_s_containsObject__1125b07e8,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb830);
  return;
}



/* Entry: 107b5345c; end: 107b53473; -[SCOperaActionMenuLayerView _shouldShowInfoButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5345c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276acac),PTR_s_containsObject__1125b07e8,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb848);
  return;
}



/* Entry: 107b53474; end: 107b5349b; -[SCOperaActionMenuLayerView _shouldshowGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b53474(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276acac);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 107b5349c; end: 107b534e3; -[SCOperaActionMenuLayerView didMoveToWindow] */

void FUN_107b5349c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9f88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 107b534e4; end: 107b53997; -[SCOperaActionMenuLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b534e4(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  double *pdVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_138;
  undefined *puStack_130;
  long lStack_a8;
  
  puVar3 = &uStack_180;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = PTR_PTR_1126f9f88;
  uStack_138 = param_1;
  _objc_msgSendSuper2(&uStack_138,PTR_s_layoutSubviews_112600e60);
  uVar2 = param_1;
  func_0x00010bfb68e0();
  _CGRectIsEmpty();
  if ((uVar2 & 1) == 0) {
    lVar6 = (long)_DAT_11276ace8;
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010bf20c00(param_1);
      uVar2 = *(ulong *)(param_1 + lVar6);
      func_0x00010c19f0e0();
    }
    lVar6 = (long)_DAT_11276acdc;
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010c2a5040(param_1);
      func_0x00010c2256c0(*(undefined8 *)(param_1 + lVar6));
      func_0x00010c1ba100(0,*(undefined8 *)(param_1 + lVar6));
      func_0x00010bf20c00(param_1);
      _CGRectGetMaxY();
      uVar2 = *(ulong *)(param_1 + lVar6);
      func_0x00010c173440();
    }
    pdVar1 = (double *)(param_1 + (long)_DAT_11276ace4);
    dVar11 = *pdVar1;
    dVar13 = pdVar1[1];
    dVar15 = pdVar1[2];
    dVar17 = pdVar1[3];
    _CGRectEqualToRect();
    if ((uVar2 & 1) == 0) {
      dVar11 = *pdVar1;
    }
    else {
      func_0x00010bfb68e0(param_1);
      *pdVar1 = dVar11;
      pdVar1[1] = dVar13;
      pdVar1[2] = dVar15;
      pdVar1[3] = dVar17;
    }
    _CGRectGetWidth();
    dVar13 = *pdVar1;
    _CGRectGetHeight(dVar13,pdVar1[1],pdVar1[2],pdVar1[3]);
    lVar8 = (long)_DAT_11276acb0;
    dVar15 = *(double *)(param_1 + lVar8);
    dVar17 = dVar15 * -0.17100000000000004 + 1.0;
    dVar11 = (dVar11 - dVar11 * dVar17) * 0.5;
    lVar6 = (long)_DAT_11276ace0;
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010c2a5040(param_1);
      func_0x00010c2256c0(*(undefined8 *)(param_1 + lVar6));
      func_0x00010c1a7d00(0x404c000000000000,*(undefined8 *)(param_1 + lVar6));
      func_0x00010c1ba100(0,*(undefined8 *)(param_1 + lVar6));
      dVar12 = *(double *)(param_1 + (long)_DAT_11276acec);
      if (dVar12 == 0.0) {
        func_0x00010bf20c00(param_1);
        _CGRectGetMinY();
        dVar12 = dVar12 + *(double *)(param_1 + lVar8) * 56.0;
      }
      else {
        func_0x00010c14d760();
        dVar12 = (dVar12 + 56.0) * *(double *)(param_1 + lVar8);
      }
      func_0x00010c173440(dVar12,*(undefined8 *)(param_1 + lVar6));
    }
    dVar12 = dVar11 + 11.0;
    dVar13 = (dVar13 - dVar13 * dVar17) * 0.5 + dVar13 * -0.035 * dVar15 + 10.0;
    lVar6 = (long)_DAT_11276acb4;
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010c2256c0(0x4048000000000000);
      func_0x00010c1a7d00(0x4048000000000000,*(undefined8 *)(param_1 + lVar6));
      dVar15 = *pdVar1;
      _CGRectGetMaxX(dVar15,pdVar1[1],pdVar1[2],pdVar1[3]);
      func_0x00010c1ee020(dVar15 - dVar12,*(undefined8 *)(param_1 + lVar6));
      dVar15 = *pdVar1;
      _CGRectGetMaxY(dVar15,pdVar1[1],pdVar1[2],pdVar1[3]);
      func_0x00010c173440(dVar15 - dVar13,*(undefined8 *)(param_1 + lVar6));
    }
    lVar6 = (long)_DAT_11276acb8;
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010c2256c0(0x4048000000000000);
      func_0x00010c1a7d00(0x4048000000000000,*(undefined8 *)(param_1 + lVar6));
      dVar15 = *pdVar1;
      _CGRectGetMaxX(dVar15,pdVar1[1],pdVar1[2],pdVar1[3]);
      func_0x00010c1ee020(dVar15 - dVar12,*(undefined8 *)(param_1 + lVar6));
      dVar12 = *pdVar1;
      dVar14 = pdVar1[1];
      dVar16 = pdVar1[2];
      dVar18 = pdVar1[3];
      _CGRectGetMaxY(dVar12,dVar14,dVar16,dVar18);
      dVar12 = dVar12 - dVar13;
      func_0x00010c173440(dVar12,*(undefined8 *)(param_1 + lVar6));
      func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar6));
      dVar15 = dVar16;
      dVar17 = dVar18;
      func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar6));
      func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar6));
      _CGRectInset(dVar12,dVar14,dVar16,dVar18,dVar15 * 0.25,dVar17 * 0.25);
      func_0x00010c19f0e0(*(undefined8 *)(param_1 + (long)_DAT_11276acbc));
    }
    dVar17 = *pdVar1;
    _CGRectGetMinX(dVar17,pdVar1[1],pdVar1[2],pdVar1[3]);
    dVar15 = 0.0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lVar7 = *(long *)(param_1 + (long)_DAT_11276acac);
    _objc_retain(lVar7);
    lVar6 = lVar7;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      dVar11 = dVar11 + dVar17 + 6.0;
      lVar9 = *plStack_170;
      do {
        lVar10 = 0;
        do {
          if (*plStack_170 != lVar9) {
            _objc_enumerationMutation(lVar7);
          }
          func_0x00010c067fc0(*(undefined8 *)(lStack_178 + lVar10 * 8));
          uVar2 = param_1;
          func_0x00010bdd7320(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ba100((double)(ulong)(long)dVar11 + 2.0);
          dVar11 = *pdVar1;
          _CGRectGetMaxY(dVar11,pdVar1[1],pdVar1[2],pdVar1[3]);
          dVar11 = dVar11 - dVar13;
          func_0x00010c173440(uVar2);
          func_0x00010bfb68e0(uVar2);
          _CGRectGetMaxX();
          dVar15 = dVar11;
          _objc_release(uVar2);
          lVar10 = lVar10 + 1;
        } while (lVar6 != lVar10);
        lVar6 = lVar7;
        puVar3 = &uStack_180;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar7);
    func_0x00010bfe0640(param_1);
    uVar2 = *(ulong *)(param_1 + (long)_DAT_11276acf0);
    func_0x00010c2172c0(dVar15 * (1.0 - *(double *)(param_1 + lVar8)));
    param_3 = (undefined1 *)puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = 0;
  if ((long)param_3 < 0xd) {
    if ((long)param_3 < 2) {
      if (param_3 == (undefined1 *)0x0) {
        piVar4 = (int *)&DAT_11276acc0;
      }
      else {
        if (param_3 != (undefined1 *)0x1) goto LAB_107b53a60;
        piVar4 = (int *)&DAT_11276acc4;
      }
    }
    else if (param_3 == (undefined1 *)0x2) {
LAB_107b53a24:
      piVar4 = (int *)&DAT_11276acc8;
    }
    else {
      if (param_3 != (undefined1 *)0x3) goto LAB_107b53a60;
      piVar4 = (int *)&DAT_11276accc;
    }
  }
  else if ((long)param_3 < 0x14) {
    if (param_3 != (undefined1 *)0xd) {
      if (param_3 != (undefined1 *)0xe) goto LAB_107b53a60;
      goto LAB_107b53a24;
    }
    piVar4 = (int *)&DAT_11276acd0;
  }
  else if (param_3 == (undefined1 *)0x14) {
    piVar4 = (int *)&DAT_11276acd4;
  }
  else {
    if (param_3 != (undefined1 *)0x24) goto LAB_107b53a60;
    piVar4 = (int *)&DAT_11276acd8;
  }
  uVar5 = *(undefined8 *)(uVar2 + (long)*piVar4);
  _objc_retain(uVar5);
LAB_107b53a60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107b53998; end: 107b53a6f; -[SCOperaActionMenuLayerView _buttonForType:] */

void FUN_107b53998(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_3 < 0xd) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        piVar1 = (int *)&DAT_11276acc0;
      }
      else {
        if (param_3 != 1) goto LAB_107b53a60;
        piVar1 = (int *)&DAT_11276acc4;
      }
    }
    else if (param_3 == 2) {
LAB_107b53a24:
      piVar1 = (int *)&DAT_11276acc8;
    }
    else {
      if (param_3 != 3) goto LAB_107b53a60;
      piVar1 = (int *)&DAT_11276accc;
    }
  }
  else if (param_3 < 0x14) {
    if (param_3 != 0xd) {
      if (param_3 != 0xe) goto LAB_107b53a60;
      goto LAB_107b53a24;
    }
    piVar1 = (int *)&DAT_11276acd0;
  }
  else if (param_3 == 0x14) {
    piVar1 = (int *)&DAT_11276acd4;
  }
  else {
    if (param_3 != 0x24) goto LAB_107b53a60;
    piVar1 = (int *)&DAT_11276acd8;
  }
  uVar2 = *(undefined8 *)(param_1 + *piVar1);
  _objc_retain(uVar2);
LAB_107b53a60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b53a70; end: 107b53bcb; -[SCOperaActionMenuLayerView setOverlayContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b53a70(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11276acf0;
  if (*(long *)(param_1 + lVar3) != param_3) {
    bVar1 = param_3 != 0;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276acd8),param_2,bVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276acd4),param_2,bVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276ace8),param_2,bVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276acd0),param_2,bVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276accc),param_2,bVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276acc8),param_2,bVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276acc0),param_2,bVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276acb4),param_2,bVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276acc4),param_2,bVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276ace0);
    func_0x00010c15b700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    if (*(long *)(param_1 + lVar3) != 0) {
      func_0x00010c066fa0(param_1,param_2,*(long *)(param_1 + lVar3),0);
      func_0x00010bfe0640(param_1);
      func_0x00010c2172c0(*(undefined8 *)(param_1 + lVar3));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b53bcc; end: 107b53bdb; +[SCOperaActionMenuLayerView headerColor] */

void FUN_107b53bcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x7b);
  return;
}



/* Entry: 107b53bdc; end: 107b53beb; +[SCOperaActionMenuLayerView displayNameColor] */

void FUN_107b53bdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x84);
  return;
}



/* Entry: 107b53bec; end: 107b53bfb; +[SCOperaActionMenuLayerView usernameColor] */

void FUN_107b53bec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x7d);
  return;
}



/* Entry: 107b53bfc; end: 107b53c0b; -[SCOperaActionMenuLayerView header] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53bfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ace0);
}



/* Entry: 107b53c0c; end: 107b53c1b; -[SCOperaActionMenuLayerView sendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53c0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276acb4);
}



/* Entry: 107b53c1c; end: 107b53c2b; -[SCOperaActionMenuLayerView editButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53c1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276acc4);
}



/* Entry: 107b53c2c; end: 107b53c3b; -[SCOperaActionMenuLayerView reportButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53c2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276acc0);
}



/* Entry: 107b53c3c; end: 107b53c4b; -[SCOperaActionMenuLayerView deleteButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53c3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276acc8);
}



/* Entry: 107b53c4c; end: 107b53c5b; -[SCOperaActionMenuLayerView saveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53c4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276accc);
}



/* Entry: 107b53c5c; end: 107b53c6b; -[SCOperaActionMenuLayerView infoButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53c5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276acd0);
}



/* Entry: 107b53c6c; end: 107b53c7b; -[SCOperaActionMenuLayerView subtitlesButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53c6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276acd4);
}



/* Entry: 107b53c7c; end: 107b53c8b; -[SCOperaActionMenuLayerView blurOverlayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53c7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ace8);
}



/* Entry: 107b53c8c; end: 107b53c9b; -[SCOperaActionMenuLayerView dreamsFeedbackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53c8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276acd8);
}



/* Entry: 107b53c9c; end: 107b53cab; -[SCOperaActionMenuLayerView overlayContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53c9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276acf0);
}



/* Entry: 107b53cac; end: 107b53cbb; -[SCOperaActionMenuLayerView visiblePercent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53cac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276acb0);
}



/* Entry: 107b53cbc; end: 107b53cd3; -[SCOperaActionMenuLayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b53cbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276acec);
}



/* Entry: 107b53cd4; end: 107b53ceb; -[SCOperaActionMenuLayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b53cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276acec);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107b53cec; end: 107b53dfb; -[SCOperaActionMenuLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b53cec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276acf0,0);
  _objc_storeStrong(param_1 + _DAT_11276acd8,0);
  _objc_storeStrong(param_1 + _DAT_11276ace8,0);
  _objc_storeStrong(param_1 + _DAT_11276acd4,0);
  _objc_storeStrong(param_1 + _DAT_11276acd0,0);
  _objc_storeStrong(param_1 + _DAT_11276accc,0);
  _objc_storeStrong(param_1 + _DAT_11276acc8,0);
  _objc_storeStrong(param_1 + _DAT_11276acc0,0);
  _objc_storeStrong(param_1 + _DAT_11276acc4,0);
  _objc_storeStrong(param_1 + _DAT_11276acb4,0);
  _objc_storeStrong(param_1 + _DAT_11276ace0,0);
  _objc_storeStrong(param_1 + _DAT_11276acbc,0);
  _objc_storeStrong(param_1 + _DAT_11276acb8,0);
  _objc_storeStrong(param_1 + _DAT_11276acac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276acdc,0);
  return;
}



/* Entry: 107b53dfc; end: 107b53e93; -[SCOperaActionMenuLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b53dfc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d6b18;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11276acf4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c08c520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  func_0x00010c1d5660(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107b53e94; end: 107b53f43; -[SCOperaActionMenuLayerViewController _updateNotificationOptInViewWithIsOptedInForNotifications:canOptInForNotifications:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b53e94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276acf4;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dc4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286ac0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dc4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2841c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b53f44; end: 107b54063; -[SCOperaActionMenuLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b53f44(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar2 != lVar3) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276acf8);
    *(undefined8 *)(param_1 + _DAT_11276acf8) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276acfc);
    *(undefined8 *)(param_1 + _DAT_11276acfc) = 0;
    _objc_release(uVar4);
  }
  if ((*(byte *)(param_1 + _DAT_11276ad00) & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276acf4);
    func_0x00010c083820();
    if (iVar1 == 0) goto LAB_107b54044;
  }
  lVar2 = param_3;
  func_0x00010c0f0be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c0f0be0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdce340(param_1,param_2,lVar2 == lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_107b54044:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b54064; end: 107b5474f; -[SCOperaActionMenuLayerViewController _applyLayerSetupAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b54064(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x23;
  long lVar8;
  long lVar9;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  *(undefined1 *)(param_2 + _DAT_11276ad00) = 1;
  lVar8 = (long)_DAT_11276acf4;
  uVar7 = *(undefined8 *)(param_2 + lVar8);
  lVar6 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    param_1 = 0;
  }
  else {
    unaff_x23 = param_2;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee8c0();
  }
  lVar5 = param_2;
  func_0x00010bf46560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beee920();
  func_0x00010c2298e0(param_1,uVar7);
  _objc_release(lVar5);
  if (param_4 != 0) {
    _objc_release(unaff_x23);
  }
  _objc_release(lVar6);
  func_0x00010beacd00(param_2);
  uVar1 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c25fdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0dc4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar7 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010bfdef60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar7);
  lVar6 = param_2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  _objc_release(lVar6);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    lVar6 = param_2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar6);
    lVar5 = lVar2;
    func_0x00010010fab4(lVar2,PTR_DAT_1126a59d8);
    lVar6 = lVar2;
    if ((int)lVar5 == 0) {
      lVar6 = 0;
    }
    _objc_retain(lVar6);
    _objc_release(lVar2);
    _objc_initWeak(auStack_78,param_2);
    puStack_a0 = puVar3;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107b54750;
    puStack_88 = &UNK_110871898;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c175bc0(lVar6);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar6);
  }
  lVar6 = param_2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  _objc_release(lVar6);
  if (lVar2 != 0) {
    lVar6 = param_2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar6);
    lVar5 = lVar2;
    func_0x00010010fab4(lVar2,PTR_DAT_1126a59d8);
    lVar6 = lVar2;
    if ((int)lVar5 == 0) {
      lVar6 = 0;
    }
    _objc_retain(lVar6);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_2 + lVar8);
    func_0x00010bfdef60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0dc4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079480();
    func_0x00010c286ac0(uVar7);
    _objc_release(lVar5);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_initWeak(auStack_78,param_2);
    puStack_c8 = puVar3;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_107b54794;
    puStack_b0 = &UNK_110871898;
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c175bc0(lVar6);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar6);
  }
  lVar9 = (long)_DAT_11276ad04;
  uVar7 = *(undefined8 *)(param_2 + lVar9);
  *(undefined8 *)(param_2 + lVar9) = 0;
  _objc_release(uVar7);
  lVar6 = param_2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  _objc_release(lVar6);
  if (lVar2 == 0) {
    lVar5 = *(long *)(param_2 + lVar8);
    func_0x00010bfdef60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c25fdc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar6);
  }
  else {
    lVar6 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_initWeak(auStack_78,param_2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_2 + lVar9);
    *(undefined **)(param_2 + lVar9) = puVar3;
    _objc_release(uVar7);
    lVar6 = lVar5;
    func_0x00010bfa7b60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c0e0ea0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_78);
    lVar4 = lVar9;
    func_0x00010c25ff60(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar9);
    _objc_release(lVar2);
    _objc_release(lVar6);
    uVar1 = *(undefined8 *)(param_2 + lVar8);
    func_0x00010bfdef60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c25fdc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(lVar5);
  lVar6 = (long)_DAT_11276acf8;
  if (*(long *)(param_2 + lVar6) != 0) {
    uVar7 = *(undefined8 *)(param_2 + lVar8);
    func_0x00010bf1f3c0();
    func_0x00010c173d80(uVar7);
    uVar7 = *(undefined8 *)(param_2 + lVar6);
    *(undefined8 *)(param_2 + lVar6) = 0;
    _objc_release(uVar7);
  }
  lVar6 = (long)_DAT_11276acfc;
  if (*(long *)(param_2 + lVar6) != 0) {
    func_0x00010c28b740(*(undefined8 *)(param_2 + lVar8));
    uVar7 = *(undefined8 *)(param_2 + lVar6);
    *(undefined8 *)(param_2 + lVar6) = 0;
    _objc_release(uVar7);
  }
  return;
}



/* Entry: 107b54750; end: 107b54793;  */

void FUN_107b54750(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b54794; end: 107b547cb;  */

void FUN_107b54794(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b547cc; end: 107b5482b;  */

void FUN_107b547cc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010c28a840(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b5482c; end: 107b5488f; -[SCOperaActionMenuLayerViewController updateSubscribeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5482c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276acf4);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25fdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286b00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b54890; end: 107b54be3; -[SCOperaActionMenuLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b54890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010beeec40(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_7;
  func_0x00010c0e00e0(param_7,param_6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010beeec40(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_7;
    func_0x00010c0e00e0(param_7,param_6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    if (((*(byte *)(param_5 + _DAT_11276ad00) & 1) == 0) && ((int)lVar7 != 0)) {
      lVar2 = param_5;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        func_0x00010bdce340(param_5,param_6,0);
      }
    }
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010beeea20(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_7;
    func_0x00010c0e00e0(param_7,param_6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    uVar6 = param_1;
    _objc_release(lVar2);
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_5 + _DAT_11276acf4);
    lVar2 = param_5;
    func_0x00010bf46560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee8c0();
    lVar3 = param_5;
    func_0x00010bf46560(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010beee920();
    func_0x00010c223840(param_1,param_2,param_3,param_4,uVar6,uVar5,param_6,lVar7,lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_7;
  func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110f0cef8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    if ((*(byte *)(param_5 + _DAT_11276ad00) & 1) == 0) {
      lVar2 = param_7;
      func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110f0cef8);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_5 + _DAT_11276acf8);
      *(long *)(param_5 + _DAT_11276acf8) = lVar2;
    }
    else {
      uVar6 = *(undefined8 *)(param_5 + _DAT_11276acf4);
      lVar7 = param_7;
      func_0x00010c0e00e0(param_7,param_6,&PTR____CFConstantStringClassReference_110f0cef8);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      func_0x00010bf1f3c0();
      func_0x00010c173d80(uVar6,param_6,lVar2);
    }
    _objc_release(lVar7);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010beeec00(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_7;
  func_0x00010c0e00e0(param_7,param_6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    if ((*(byte *)(param_5 + _DAT_11276ad00) & 1) == 0) {
      func_0x00010beeec00(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_7;
      func_0x00010c0e00e0(param_7,param_6,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_5 + _DAT_11276acfc);
      *(long *)(param_5 + _DAT_11276acfc) = lVar2;
    }
    else {
      uVar6 = *(undefined8 *)(param_5 + _DAT_11276acf4);
      func_0x00010beeec00(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_7;
      func_0x00010c0e00e0(param_7,param_6,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28b740(uVar6,param_6,lVar7);
    }
    _objc_release(lVar7);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107b54be4; end: 107b54c0f; -[SCOperaActionMenuLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b54be4(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11276acf4);
  func_0x00010c082800();
  uVar1 = 0xffffffffffffffff;
  if (iVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107b54c10; end: 107b54f5f; -[SCOperaActionMenuLayerViewController _setupGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b54c10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11276acf4;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c15b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c15b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf8c160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf8c160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c132780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bfed900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf6b7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c14a0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar1);
  puVar3 = *(undefined **)(param_1 + lVar11);
  func_0x00010c261200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release();
  lVar10 = (long)_DAT_11276ad08;
  if (*(long *)(param_1 + lVar10) == 0) {
    puVar3 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010c18e180();
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar11),param_2,puVar3);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar1 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar4;
    _objc_release(uVar1);
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar11),param_2,*(undefined8 *)(param_1 + lVar10))
    ;
    puVar4 = PTR_PTR_1126b2638;
    func_0x00010c113c60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b6008;
    func_0x00010c113c40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar3;
    puStack_58 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&puStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_1,param_2,puVar4,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = (long)_DAT_11276acf4;
  lVar10 = *(long *)(puVar3 + lVar11);
  func_0x00010c132780();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 != 0) {
    lVar8 = *(long *)(puVar3 + lVar11);
    func_0x00010c132780();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010beffd80();
    _objc_release(lVar8);
    _objc_release(lVar10);
    if (lVar9 == 0) {
      uVar1 = *(undefined8 *)(puVar3 + lVar11);
      func_0x00010c132780(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 107b54f60; end: 107b5501b; -[SCOperaActionMenuLayerViewController _updateGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b54f60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276acf4;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c132780();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010c132780();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beffd80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c132780(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 107b5501c; end: 107b550e3; -[SCOperaActionMenuLayerViewController _tap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5501c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276acf4;
  uVar2 = *(undefined8 *)(param_3 + lVar3);
  _objc_retain(param_5);
  func_0x00010bfdef60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c102b20(param_1,param_2);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be34e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__headerTapped_11256ad28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be096d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__endActionMenuSession_11255ff50);
  return;
}



/* Entry: 107b550e4; end: 107b55127; -[SCOperaActionMenuLayerViewController _endActionMenuSession] */

void FUN_107b550e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf940a0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b55128; end: 107b5516b; -[SCOperaActionMenuLayerViewController _sendPressed] */

void FUN_107b55128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c15c9e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b5516c; end: 107b551a7; -[SCOperaActionMenuLayerViewController _copyLinkTapped] */

void FUN_107b5516c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf52060(PTR_PTR_1126b2d30);
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b551a8; end: 107b551eb; -[SCOperaActionMenuLayerViewController _editPressed] */

void FUN_107b551a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf8c140(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b551ec; end: 107b5522f; -[SCOperaActionMenuLayerViewController _reportPressed] */

void FUN_107b551ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b55230; end: 107b55273; -[SCOperaActionMenuLayerViewController _infoPressed] */

void FUN_107b55230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bfc65c0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b55274; end: 107b552b7; -[SCOperaActionMenuLayerViewController _savePressed] */

void FUN_107b55274(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c149e20(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b552b8; end: 107b552fb; -[SCOperaActionMenuLayerViewController _deletePressed] */

void FUN_107b552b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b552fc; end: 107b5533f; -[SCOperaActionMenuLayerViewController _headerTapped] */

void FUN_107b552fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bfdffe0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b55340; end: 107b55383; -[SCOperaActionMenuLayerViewController _subtitlesPressed] */

void FUN_107b55340(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c261280(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b55384; end: 107b5557b; -[SCOperaActionMenuLayerViewController operaSubscribeButtonViewDidPressButton:isSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b55384(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276acf4);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25fdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4ca0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_4 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110eb0258;
    ppuVar3 = (undefined **)PTR_PTR_1126b5bf0;
    func_0x00010c25fd00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_78 = ppuVar3;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110eb0278;
    puVar5 = PTR_PTR_1126b2d30;
    puStack_68 = puVar4;
    func_0x00010c25fd00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_78,2)
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = (undefined **)PTR_PTR_1126b2d30;
    func_0x00010c25fd00(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5bf0;
    func_0x00010c25fd00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_58 = puVar4;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&puStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar7;
  }
  func_0x00010bf04440(param_1,param_2,ppuVar7,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107b5557c; end: 107b5557f; -[SCOperaActionMenuLayerViewController operaSubscribeButtonViewWillAnimateToWidth:] */

void FUN_107b5557c(void)

{
  return;
}



/* Entry: 107b55580; end: 107b556cf; -[SCOperaActionMenuLayerViewController operaOptInNotificationViewDidTap:isOptedIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b55580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276acf4);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dc4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286ac0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2d30;
  func_0x00010c0dc460(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b5bf0;
  func_0x00010c0ebe20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar4;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar3,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126b2638;
  func_0x00010c269be0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(puVar3,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107b556d0; end: 107b55713; -[SCOperaActionMenuLayerViewController operaActionMenuHeaderViewDidPressBrowserButton] */

void FUN_107b556d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c269be0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b55714; end: 107b55783; -[SCOperaActionMenuLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b55714(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276acfc,0);
  _objc_storeStrong(param_1 + _DAT_11276acf8,0);
  _objc_storeStrong(param_1 + _DAT_11276ad04,0);
  _objc_storeStrong(param_1 + _DAT_11276ad08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276acf4,0);
  return;
}



/* Entry: 107b55784; end: 107b558c3; -[SCOperaNotificationOptInView initWithFrame:onImage:offImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b55784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f9f90;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276ad10) = 0;
    lVar4 = (long)_DAT_11276ad14;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11276ad18;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    func_0x00010c1a9f00(puVar1);
    func_0x00010c21e900(puVar1);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107b558c4; end: 107b55903; -[SCOperaNotificationOptInView updateIsOptedInForNotifications:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b558c4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if (*(byte *)(param_1 + _DAT_11276ad10) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276ad10) = (char)param_3;
  lVar1 = 4;
  if (param_3 == 0) {
    lVar1 = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setImage__1126481e8,
             *(undefined8 *)(param_1 + *(int *)(&DAT_11276ad10 + lVar1)));
  return;
}



/* Entry: 107b55904; end: 107b5594b; -[SCOperaNotificationOptInView updateCanOptInForNotifications:] */

/* WARNING: Possible PIC construction at 0x000107b55934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b55938) */
/* WARNING: Removing unreachable block (ram,0x00010c286ac0) */

void FUN_107b55904(undefined8 param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,param_3 == 0);
  return;
}



/* Entry: 107b5594c; end: 107b5599f; -[SCOperaNotificationOptInView tapOptInView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5594c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b559a0; end: 107b559af; -[SCOperaNotificationOptInView isOptedInForNotifications] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b559a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ad10);
}


