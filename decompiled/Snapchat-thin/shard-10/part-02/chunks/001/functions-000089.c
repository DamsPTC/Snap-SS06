/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b666a4; end: 107b66747;  */

void FUN_107b666a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  uVar1 = puRam0000000113727648;
  puRam0000000113727648 = puVar2;
  _objc_release(uVar1);
  puVar2 = puRam0000000113727648;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2);
  _objc_release(puVar3);
  puVar2 = puRam0000000113727648;
  ppuVar4 = &PTR____CFConstantStringClassReference_110eb00d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb00d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 107b66748; end: 107b669e7; -[SCOperaSubscribeButtonFullView initWithFrame:isSubscribed:theme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b66748(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fa008;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276aef4);
    *(undefined **)((long)puVar1 + (long)_DAT_11276aef4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276aef8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar5));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c173280(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402e000000000000);
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar6 = (long)_DAT_11276aefc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar3);
    _objc_release(puVar2);
    func_0x00010bea87e0(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar6 = (long)_DAT_11276af00;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar6));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c1fbe00(uVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    if ((param_3 & 1) == 0) {
      FUN_107b67268();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107b671d8();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1a9f00(uVar4);
    _objc_release(uVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b669e8; end: 107b66b5b; -[SCOperaSubscribeButtonFullView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b669e8(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fa008;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_11276aefc;
  func_0x00010be0c4c0(PTR_PTR_1126d6b68);
  dVar2 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar4 = dVar2 - param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c19f0e0(dVar4,0,param_1,dVar2,*(undefined8 *)(param_2 + _DAT_11276aef8));
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar4 = dVar4 + -18.0;
  dVar2 = dVar4 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetMinX();
  dVar4 = dVar4 + 13.0;
  func_0x00010b8166f8(dVar4,dVar2,0x402c000000000000,0x4032000000000000,param_2);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_11276af00));
  _CGRectGetMaxX(dVar4,dVar2,0x402c000000000000,0x4032000000000000);
  dVar3 = dVar4 + 3.0;
  func_0x00010bf20c00(param_2);
  _CGRectGetMinY();
  dVar2 = dVar4;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar2 = dVar2 - dVar3;
  dVar5 = dVar2 + -16.0;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010b8166f8(dVar3,dVar4,dVar5,dVar2,param_2);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 107b66b5c; end: 107b66bb3; -[SCOperaSubscribeButtonFullView sizeThatFits:] */

undefined1  [16] FUN_107b66b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_PTR_1126d6b68;
  FUN_107b672f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0c4c0(puVar1,param_3,param_2);
  _objc_release(param_2);
  auVar2._8_8_ = 0x403e000000000000;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107b66bb4; end: 107b66bc3; -[SCOperaSubscribeButtonFullView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b66bb4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276aef0);
}



/* Entry: 107b66bc4; end: 107b66c07; -[SCOperaSubscribeButtonFullView updateIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b66bc4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11276af04) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276af04) = (char)param_3;
  func_0x00010bea3620();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b66c08; end: 107b66c5b; +[SCOperaSubscribeButtonFullView largestExpectedWidth] */

undefined8 FUN_107b66c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6b68;
  FUN_107b672f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0c4c0(puVar1,param_3,param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107b66c5c; end: 107b66cc3; -[SCOperaSubscribeButtonFullView _subscribeButtonViewTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b66c5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276af04;
  *(byte *)(param_1 + lVar2) = *(byte *)(param_1 + lVar2) ^ 1;
  lVar1 = param_1 + _DAT_11276af08;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eb580();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdca9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__animateButtonToIsSubscribed__112550410,*(undefined1 *)(param_1 + lVar2))
  ;
  return;
}



/* Entry: 107b66cc4; end: 107b66ceb; +[SCOperaSubscribeButtonFullView _expectedWidthWithLabel:] */

double FUN_107b66cc4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0699c0(param_4);
  return param_1 + 30.0 + 16.0;
}



/* Entry: 107b66cec; end: 107b66e27; -[SCOperaSubscribeButtonFullView _animateButtonToIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b66cec(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + _DAT_11276aef0) & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010bea4ce0(param_1);
    func_0x00010c1cbe20(param_1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107b66e28;
    puStack_60 = &UNK_11084ceb8;
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_3;
    _objc_copyWeak(auStack_80,auStack_48);
    func_0x00010bf03420(0x3fd3333333333333,puVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 107b66e28; end: 107b66e5f;  */

void FUN_107b66e28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b66e60; end: 107b66f47;  */

void FUN_107b66e60(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b66f48;
  puStack_50 = &UNK_1108434b0;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010bf03420(0x3fd3333333333333,puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b66f48; end: 107b66fa3;  */

void FUN_107b66f48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9ab40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b66fa4; end: 107b66fb3; -[SCOperaSubscribeButtonFullView _setIsButtonAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b66fa4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276aef0) = param_3;
  return;
}



/* Entry: 107b66fb4; end: 107b67067; -[SCOperaSubscribeButtonFullView _setDetailsForIsSubscribed:shouldUseScaleTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b66fb4(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
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
  
  lVar1 = param_1;
  if (param_4 != 0) {
    _CGAffineTransformMakeScale(&uStack_60,0x3ff2666666666666,0x3ff2666666666666);
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    func_0x00010c219960(param_1,param_2,&uStack_90);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276af00);
  if ((param_3 & 1) == 0) {
    FUN_107b67268();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107b671d8();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9f00(uVar2,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010bea87e0(param_1,param_2,param_3);
  return;
}



/* Entry: 107b67068; end: 107b670b7; -[SCOperaSubscribeButtonFullView _scaleViewToIdentity] */

void FUN_107b67068(undefined8 param_1,undefined8 param_2)

{
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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff0000000000000,0x3ff0000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(param_1,param_2,&uStack_80);
  return;
}



/* Entry: 107b670b8; end: 107b67117; -[SCOperaSubscribeButtonFullView _setTitleLabelForIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b670b8(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276aefc);
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb00b8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e04f78;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 107b67118; end: 107b67127; -[SCOperaSubscribeButtonFullView isSubscribed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b67118(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276af04);
}



/* Entry: 107b67128; end: 107b67137; -[SCOperaSubscribeButtonFullView setIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67128(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276af04) = param_3;
  return;
}



/* Entry: 107b67138; end: 107b67157; -[SCOperaSubscribeButtonFullView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67138(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276af08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b67158; end: 107b6716b; -[SCOperaSubscribeButtonFullView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67158(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276af08,param_3);
  return;
}



/* Entry: 107b6716c; end: 107b6722b; -[SCOperaSubscribeButtonFullView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6716c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276af08);
  _objc_storeStrong(param_1 + _DAT_11276aefc,0);
  _objc_storeStrong(param_1 + _DAT_11276af00,0);
  _objc_storeStrong(param_1 + _DAT_11276aef8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aef4,0);
  return;
}



/* Entry: 107b6722c; end: 107b67267;  */

void FUN_107b6722c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eb0158);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113727658;
  puRam0000000113727658 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b67268; end: 107b672bb;  */

void FUN_107b67268(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727670 != -1) {
    func_0x00010002a2fc(0x113727670,&PTR___NSConcreteGlobalBlock_1109fe328);
  }
  uVar1 = uRam0000000113727668;
  _objc_retain(uRam0000000113727668);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b672bc; end: 107b672f7;  */

void FUN_107b672bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eb0178);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113727668;
  puRam0000000113727668 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b672f8; end: 107b6734b;  */

void FUN_107b672f8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727680 != -1) {
    func_0x00010002a2fc(0x113727680,&PTR___NSConcreteGlobalBlock_1109fe348);
  }
  uVar1 = uRam0000000113727678;
  _objc_retain(uRam0000000113727678);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b6734c; end: 107b673ef;  */

void FUN_107b6734c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  uVar1 = puRam0000000113727678;
  puRam0000000113727678 = puVar2;
  _objc_release(uVar1);
  puVar2 = puRam0000000113727678;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2);
  _objc_release(puVar3);
  puVar2 = puRam0000000113727678;
  ppuVar4 = &PTR____CFConstantStringClassReference_110eb00b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb00b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 107b673f0; end: 107b674af; -[SCOperaSubscribeButtonLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b673f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa010;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d6b68;
    _objc_alloc();
    func_0x00010c014720(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_11276af0c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b674b0; end: 107b6752b; +[SCOperaSubscribeButtonLayerView layerViewWithFrame:properties:] */

void FUN_107b674b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d52a0;
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  func_0x00010c014b60(param_1,param_2,param_3,param_4);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b6752c; end: 107b6773f; -[SCOperaSubscribeButtonLayerView initWithFrame:properties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b6752c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126fa010;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 == (undefined8 *)0x0) goto LAB_107b67714;
  lVar2 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar8 = (long)_DAT_11276af10;
    *(undefined1 *)((long)puVar1 + lVar8) = 1;
    lVar2 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2827c0();
    _objc_release(lVar2);
    ppuVar6 = &PTR_PTR_1126d6b70;
    switch(lVar3) {
    case 0:
      *(undefined1 *)((long)puVar1 + lVar8) = 0;
      ppuVar6 = &PTR_PTR_1126d6b68;
      break;
    case 1:
      *(undefined1 *)((long)puVar1 + lVar8) = 0;
      ppuVar6 = &PTR_PTR_1126d6b08;
      break;
    case 2:
      break;
    case 6:
      ppuVar6 = &PTR_PTR_1126d6b78;
      break;
    case 7:
      ppuVar6 = &PTR_PTR_1126d6b78;
    case 3:
      break;
    case 8:
      ppuVar6 = &PTR_PTR_1126d6b78;
    case 4:
      break;
    case 9:
      ppuVar6 = &PTR_PTR_1126d6b78;
    case 5:
      break;
    case 0xb:
      ppuVar6 = &PTR_PTR_1126d6b78;
    case 10:
      break;
    default:
      goto LAB_107b676e0;
    }
    puVar4 = *ppuVar6;
    _objc_alloc();
    func_0x00010c014720(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276af0c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276af0c) = puVar4;
    _objc_release(uVar7);
  }
LAB_107b676e0:
  func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + (long)_DAT_11276af0c));
  puVar5 = (undefined1 *)puVar1;
  func_0x00010bf4dce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar5);
LAB_107b67714:
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107b67740; end: 107b67787; -[SCOperaSubscribeButtonLayerView didMoveToWindow] */

void FUN_107b67740(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa010;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 107b67788; end: 107b6793b; -[SCOperaSubscribeButtonLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67788(ulong param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double in_d3;
  double dVar10;
  double dVar11;
  double dVar12;
  ulong uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fa010;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_layoutSubviews_112600e60);
  lVar6 = (long)_DAT_11276af0c;
  uVar3 = *(ulong *)(param_1 + lVar6);
  func_0x00010c06c0e0();
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar5 = (long)_DAT_11276af14;
  if (((*(byte *)(param_1 + lVar5) & 1) != 0) ||
     (dVar11 = 0.0, *(char *)(param_1 + (long)_DAT_11276af18) == '\x01')) {
    dVar11 = *(double *)(param_1 + (long)_DAT_11276af1c);
  }
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar6));
  dVar8 = *(double *)(param_1 + (long)_DAT_11276af20);
  lVar7 = (long)_DAT_11276af18;
  if (*(char *)(param_1 + lVar7) == '\x01') {
    dVar8 = dVar8 + *(double *)(param_1 + (long)_DAT_11276af1c);
  }
  uVar3 = param_1;
  func_0x00010c14d760();
  if (*(char *)(param_1 + lVar5) == '\x01') {
    bVar2 = false;
    if ((0.0 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar11))) {
      bVar2 = dVar8 < dVar11;
    }
    if (bVar2) goto LAB_107b67878;
  }
  if ((*(byte *)(param_1 + lVar7) & dVar8 == 0.0) == 0) {
    dVar11 = dVar8;
  }
LAB_107b67878:
  if (!NAN(dVar11)) {
    func_0x0001008522a8();
    dVar10 = 0.0;
    if (((uVar3 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_11276af24) & 1) == 0)) {
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252d80();
      _objc_release(puVar4);
      dVar10 = in_d3;
    }
    cVar1 = *(char *)(param_1 + (long)_DAT_11276af10);
    func_0x00010bf20c00(param_1);
    _CGRectGetMaxX();
    bVar2 = cVar1 == '\0';
    dVar9 = -35.0;
    if (bVar2) {
      dVar9 = -50.0;
    }
    dVar12 = 11.0;
    if (bVar2) {
      dVar12 = 13.0;
    }
    func_0x00010c1ee020(dVar8 + dVar9,*(undefined8 *)(param_1 + lVar6));
    func_0x00010c2172c0(dVar10 + dVar11 + dVar12,*(undefined8 *)(param_1 + lVar6));
  }
  return;
}



/* Entry: 107b6793c; end: 107b67967; +[SCOperaSubscribeButtonLayerView xPositionOfButtonInBounds:withWidth:paddingRight:] */

double FUN_107b6793c(double param_1)

{
  double in_d4;
  double in_d5;
  
  _CGRectGetMaxX();
  return (param_1 - in_d5) - in_d4;
}



/* Entry: 107b67968; end: 107b67a27; +[SCOperaSubscribeButtonLayerView xPositionOfButtonInBounds:withType:] */

void FUN_107b67968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  if (param_7 - 2U < 10) {
    func_0x00010c088140(PTR_PTR_1126d6b68);
    uVar2 = 0x4041800000000000;
  }
  else {
    if (param_7 == 1) {
      func_0x00010c23eae0(PTR_PTR_1126d6b08);
    }
    else {
      if (param_7 != 0) {
        return;
      }
      func_0x00010c088140(PTR_PTR_1126d6b68);
    }
    uVar2 = 0x4049000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2beab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,uVar1,uVar2,param_5,
             PTR_s_xPositionOfButtonInBounds_withWi_11268d4d0);
  return;
}



/* Entry: 107b67a28; end: 107b67af7; -[SCOperaSubscribeButtonLayerView updateYOffset:] */

void FUN_107b67a28(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar2 = param_4;
  _objc_release(uVar1);
  if ((param_1 != 0.0) && (param_4 != 0.0)) {
    uVar1 = param_5;
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    param_1 = param_1 / dVar2;
    _objc_release(uVar1);
    func_0x00010c1677c0(param_5);
    func_0x00010bf01b40(param_5);
    if (param_1 < 0.1) {
      param_1 = 0.0;
      func_0x00010c1677c0(param_5);
    }
    func_0x00010bf01b40(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_5,PTR_s_setUserInteractionEnabled__112665468,0.0 < param_1);
    return;
  }
  return;
}



/* Entry: 107b67af8; end: 107b67b8b; -[SCOperaSubscribeButtonLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67af8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c082800();
  if ((int)lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (long)_DAT_11276af0c;
    func_0x00010bf512a0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_3 + lVar2));
    uVar1 = *(undefined8 *)(param_3 + lVar2);
    func_0x00010bfe3a40(uVar1,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b67b8c; end: 107b67bd7; -[SCOperaSubscribeButtonLayerView operaSubscribeButtonViewDidPressButton:isSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67b8c(long param_1)

{
  param_1 = param_1 + _DAT_11276af28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b67bd8; end: 107b67c4f; -[SCOperaSubscribeButtonLayerView operaSubscribeButtonViewWillAnimateToWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67bd8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11276af28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf20c00(param_1);
  func_0x00010c2beaa0(lVar2);
  func_0x00010c15d8a0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b67c50; end: 107b67d9b; -[SCOperaSubscribeButtonLayerView setupViewForLayer:page:animated:animationDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67c50(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  double dVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_5);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x0001008522a8();
  uVar2 = param_5;
  func_0x000107d36174(param_5,uVar1);
  _objc_release(param_5);
  *(char *)(param_2 + _DAT_11276af24) = (char)uVar2;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  dVar4 = 1.60807493534087e-314;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107b67d9c;
  puStack_60 = &UNK_110842e18;
  ppuVar3 = &puStack_78;
  lStack_58 = param_2;
  _objc_retainBlock();
  if ((param_6 == 0) || (param_1 <= 0.0)) {
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  else {
    func_0x00010bf03440(param_1,0,PTR__OBJC_CLASS___UIView_1126aec20);
    dVar4 = param_1;
  }
  uVar1 = param_4;
  func_0x00010c07b480();
  *(char *)(param_2 + _DAT_11276af14) = (char)uVar1;
  uVar1 = param_4;
  func_0x00010bf021e0();
  *(char *)(param_2 + _DAT_11276af18) = (char)uVar1;
  func_0x00010c2747c0(param_4);
  _objc_release(param_4);
  *(double *)(param_2 + _DAT_11276af1c) = dVar4;
  _objc_release(ppuVar3);
  return;
}



/* Entry: 107b67d9c; end: 107b67da7;  */

void FUN_107b67d9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b67da8; end: 107b67dc7; -[SCOperaSubscribeButtonLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67da8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276af28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b67dc8; end: 107b67ddb; -[SCOperaSubscribeButtonLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276af28,param_3);
  return;
}



/* Entry: 107b67ddc; end: 107b67deb; -[SCOperaSubscribeButtonLayerView subscribeButtonView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b67ddc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276af0c);
}



/* Entry: 107b67dec; end: 107b67e03; -[SCOperaSubscribeButtonLayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b67dec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276af20);
}



/* Entry: 107b67e04; end: 107b67e1b; -[SCOperaSubscribeButtonLayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276af20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107b67e1c; end: 107b67e2b; -[SCOperaSubscribeButtonLayerView isProgressBarAlignedToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b67e1c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276af14);
}



/* Entry: 107b67e2c; end: 107b67e3b; -[SCOperaSubscribeButtonLayerView setIsProgressBarAlignedToTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67e2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276af14) = param_3;
  return;
}



/* Entry: 107b67e3c; end: 107b67e4b; -[SCOperaSubscribeButtonLayerView alwaysUseTopOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b67e3c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276af18);
}



/* Entry: 107b67e4c; end: 107b67e5b; -[SCOperaSubscribeButtonLayerView setAlwaysUseTopOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67e4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276af18) = param_3;
  return;
}



/* Entry: 107b67e5c; end: 107b67e97; -[SCOperaSubscribeButtonLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67e5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276af0c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276af28);
  return;
}



/* Entry: 107b67e98; end: 107b67f67; -[SCOperaSubscribeButtonLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67e98(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = PTR_PTR_1126d52a0;
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c6c0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11276af2c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c08c520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  func_0x00010c1d5660(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 107b67f68; end: 107b67fbb; -[SCOperaSubscribeButtonLayerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67f68(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa018;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + _DAT_11276af2c));
  return;
}



/* Entry: 107b67fbc; end: 107b68017; -[SCOperaSubscribeButtonLayerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b67fbc(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa018;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276af30);
  *(undefined8 *)(param_1 + _DAT_11276af30) = 0;
  _objc_release(uVar1);
  func_0x00010be667a0(param_1);
  return;
}



/* Entry: 107b68018; end: 107b68133; -[SCOperaSubscribeButtonLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b68018(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276af2c);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == lVar1) {
    lVar1 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee8c0();
    func_0x00010c229960(uVar4);
    _objc_release(lVar1);
  }
  else {
    func_0x00010c229960(0,uVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be667b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeOnSubscriptionHandler_112577388);
  return;
}



/* Entry: 107b68134; end: 107b6837b; -[SCOperaSubscribeButtonLayerViewController _observeOnSubscriptionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b68134(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar10 = (long)_DAT_11276af30;
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = 0;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11276af34;
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    *(long *)(param_1 + lVar9) = lVar4;
    _objc_release(uVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_initWeak(auStack_58,param_1);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar10));
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar5;
    _objc_release(uVar1);
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010bfa7b60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e0ea0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar8 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b6837c; end: 107b683db;  */

void FUN_107b6837c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bec8980(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b683dc; end: 107b6841f; -[SCOperaSubscribeButtonLayerViewController _subscriptionUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b683dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276af2c);
  func_0x00010c25fdc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b68420; end: 107b685e3; -[SCOperaSubscribeButtonLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b68420(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c23a4e0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c23a4e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276af2c);
    func_0x00010c25fdc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c23a4c0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c23a500(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(puVar1);
    if (lVar5 == 0) goto LAB_107b685c8;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276af2c);
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c23a4c0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c23a500(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c220(uVar3,param_2,param_3,puVar1,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
LAB_107b685c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b685e4; end: 107b6863b; -[SCOperaSubscribeButtonLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b685e4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_11276af2c;
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar1),param_3,0);
  dVar2 = ABS(param_1) * -2.0 + 1.0;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar2,*(undefined8 *)(param_2 + lVar1),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b6863c; end: 107b6868f; -[SCOperaSubscribeButtonLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6863c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa018;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276af2c));
  return;
}



/* Entry: 107b68690; end: 107b687cf; -[SCOperaSubscribeButtonLayerViewController operaSubscribeButtonLayerDidTapSubscribeButton:shouldSubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b68690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_5 == 0) {
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9410;
  func_0x00010bf39360();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + _DAT_11276af34,0);
  _objc_storeStrong(puVar1 + _DAT_11276af30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_11276af2c,0);
  return;
}



/* Entry: 107b687d0; end: 107b688cb; -[SCOperaSubscribeButtonLayerViewController sendUpdateChromeMaxX:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b687d0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf39360();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + _DAT_11276af34,0);
  _objc_storeStrong(param_2 + _DAT_11276af30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + _DAT_11276af2c,0);
  return;
}



/* Entry: 107b688cc; end: 107b6891b; -[SCOperaSubscribeButtonLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b688cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276af34,0);
  _objc_storeStrong(param_1 + _DAT_11276af30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276af2c,0);
  return;
}



/* Entry: 107b6891c; end: 107b68b93; -[SCOperaSubscribeButtonPillView initWithFrame:isSubscribed:theme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b6891c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126fa020;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276af3c) = param_4;
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276af40);
    *(undefined **)((long)puVar1 + (long)_DAT_11276af40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar4 = (long)_DAT_11276af44;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar4));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c173280(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402e000000000000);
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276af48;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar3);
    _objc_release(puVar2);
    func_0x00010bea87e0(puVar1);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276af4c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1fbe00(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1aac40(puVar1);
    func_0x00010c222c80(puVar1);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b68b94; end: 107b68d07; -[SCOperaSubscribeButtonPillView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b68b94(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fa020;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_11276af48;
  func_0x00010be0c4c0(PTR_PTR_1126d6b78);
  dVar3 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar5 = dVar3 - param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  lVar2 = (long)_DAT_11276af44;
  func_0x00010c19f0e0(dVar5,0,param_1,dVar3,*(undefined8 *)(param_2 + lVar2));
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar5 = dVar5 + -18.0;
  dVar3 = dVar5 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetMinX();
  dVar5 = dVar5 + 13.0;
  func_0x00010b8166f8(dVar5,dVar3,0x402c000000000000,0x4032000000000000,
                      *(undefined8 *)(param_2 + lVar2));
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_11276af4c));
  _CGRectGetMaxX(dVar5,dVar3,0x402c000000000000,0x4032000000000000);
  dVar4 = dVar5 + 5.0;
  func_0x00010bf20c00(param_2);
  _CGRectGetMinY();
  dVar3 = dVar5;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar3 = dVar3 - dVar4;
  dVar6 = dVar3 + -16.0;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010b8166f8(dVar4,dVar5,dVar6,dVar3,*(undefined8 *)(param_2 + lVar2));
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 107b68d08; end: 107b68d63; -[SCOperaSubscribeButtonPillView sizeThatFits:] */

void FUN_107b68d08(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6b78;
  if (lRam0000000113727690 != -1) {
    func_0x00010002a2fc(0x113727690,&PTR___NSConcreteGlobalBlock_1109fe368);
  }
  func_0x00010be0c4c0(puVar1);
  return;
}



/* Entry: 107b68d64; end: 107b69147; -[SCOperaSubscribeButtonPillView setViewTheme:subscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b68d64(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_3 < 3) {
    if (param_3 == 1) {
      lVar6 = (long)_DAT_11276af44;
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c173280(uVar1,param_2,puVar2);
      _objc_release(puVar3);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0x4000006b;
    }
    else {
      if (param_3 != 2) {
LAB_107b68ed4:
        uVar1 = *(undefined8 *)(param_1 + _DAT_11276af44);
        func_0x00010c08c0e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        func_0x00010c173280(uVar1,param_2,puVar2);
        goto LAB_107b68f24;
      }
      lVar6 = (long)_DAT_11276af44;
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c173280(uVar1,param_2,puVar2);
      _objc_release(puVar3);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0x34;
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(uVar1,param_2,puVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276af48);
    uVar1 = 0x400000c6;
  }
  else {
    if (param_3 == 3) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11276af48);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x400000c6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(uVar1,param_2,puVar3);
      _objc_release(puVar3);
      lVar6 = (long)_DAT_11276af44;
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c173280(uVar1,param_2,puVar2);
      _objc_release(puVar3);
      _objc_release(uVar1);
      puVar3 = *(undefined **)(param_1 + lVar6);
      func_0x00010c08c0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      if (param_4 == 0) {
        lVar6 = -0x92;
      }
      else {
        lVar6 = -0x5b;
      }
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,lVar6 + 0x400000c6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c16e440(puVar3,param_2,puVar4);
      _objc_release(puVar2);
      goto LAB_107b69030;
    }
    if (param_3 != 4) goto LAB_107b68ed4;
    lVar6 = (long)_DAT_11276af44;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c173280(uVar1,param_2,puVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x4000006a);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(uVar1,param_2,puVar2);
LAB_107b68f24:
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276af48);
    uVar1 = 0xd5;
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar5,param_2,puVar3);
LAB_107b69030:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107b69148; end: 107b69157; -[SCOperaSubscribeButtonPillView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b69148(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276af38);
}



/* Entry: 107b69158; end: 107b6919b; -[SCOperaSubscribeButtonPillView updateIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b69158(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11276af50) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276af50) = (char)param_3;
  func_0x00010bea3620();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b6919c; end: 107b691df; -[SCOperaSubscribeButtonPillView updateIsSubscribedWithNoAnimations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6919c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11276af50) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276af50) = (char)param_3;
  func_0x00010bea3620();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b691e0; end: 107b69267; -[SCOperaSubscribeButtonPillView _subscribeButtonViewTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b691e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar2);
  lVar1 = (long)_DAT_11276af50;
  lVar3 = param_1 + _DAT_11276af54;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0eb580();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdca9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__animateButtonToIsSubscribed__112550410,*(undefined1 *)(param_1 + lVar1))
  ;
  return;
}



/* Entry: 107b69268; end: 107b69293; +[SCOperaSubscribeButtonPillView _expectedWidthWithLabel:] */

double FUN_107b69268(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0699c0(param_4);
  return param_1 + 32.0 + 16.0;
}



/* Entry: 107b69294; end: 107b693cf; -[SCOperaSubscribeButtonPillView _animateButtonToIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b69294(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + _DAT_11276af38) & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010bea4ce0(param_1);
    func_0x00010c1cbe20(param_1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107b693d0;
    puStack_60 = &UNK_11084ceb8;
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_3;
    _objc_copyWeak(auStack_80,auStack_48);
    func_0x00010bf03420(0x3fd3333333333333,puVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 107b693d0; end: 107b69407;  */

void FUN_107b693d0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b69408; end: 107b694ef;  */

void FUN_107b69408(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b694f0;
  puStack_50 = &UNK_1108434b0;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010bf03420(0x3fd3333333333333,puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b694f0; end: 107b6954b;  */

void FUN_107b694f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9ab40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6954c; end: 107b6955b; -[SCOperaSubscribeButtonPillView _setIsButtonAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6954c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276af38) = param_3;
  return;
}



/* Entry: 107b6955c; end: 107b6966f; -[SCOperaSubscribeButtonPillView _setDetailsForIsSubscribed:shouldUseScaleTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6955c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
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
  
  lVar1 = param_1;
  if (param_4 != 0) {
    _CGAffineTransformMakeScale(&uStack_70,0x3ff2666666666666,0x3ff2666666666666);
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c219960(param_1,param_2,&uStack_a0);
  }
  lVar3 = (long)_DAT_11276af3c;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276af4c);
  if (*(long *)(param_1 + lVar3) == 0) {
    if ((*(byte *)(param_1 + _DAT_11276af50) & 1) == 0) {
      FUN_107b69998();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107b69908();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if ((*(byte *)(param_1 + _DAT_11276af50) & 1) == 0) {
    FUN_107b69ab8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_107b69a28();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9f00(uVar2,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c1aac40(param_1,param_2,*(undefined8 *)(param_1 + lVar3),param_3);
  func_0x00010c222c80(param_1,param_2,*(undefined8 *)(param_1 + lVar3),param_3);
  func_0x00010bea87e0(param_1,param_2,param_3);
  return;
}



/* Entry: 107b69670; end: 107b696bf; -[SCOperaSubscribeButtonPillView _scaleViewToIdentity] */

void FUN_107b69670(undefined8 param_1,undefined8 param_2)

{
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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff0000000000000,0x3ff0000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(param_1,param_2,&uStack_80);
  return;
}



/* Entry: 107b696c0; end: 107b69773; -[SCOperaSubscribeButtonPillView setImageView:subscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b696c0(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined8 uVar1;
  
  if (param_3 - 1U < 3) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276af4c);
    if ((param_4 & 1) == 0) {
      FUN_107b69ab8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_107b69a28();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if ((param_3 != 0) && (param_3 != 4)) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276af4c);
    if ((*(byte *)(param_1 + _DAT_11276af50) & 1) == 0) {
      FUN_107b69998();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107b69908();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  func_0x00010c1a9f00(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b69774; end: 107b697d3; -[SCOperaSubscribeButtonPillView _setTitleLabelForIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b69774(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276af48);
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb00b8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e04f78;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 107b697d4; end: 107b697e3; -[SCOperaSubscribeButtonPillView isSubscribed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b697d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276af50);
}



/* Entry: 107b697e4; end: 107b697f3; -[SCOperaSubscribeButtonPillView setIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b697e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276af50) = param_3;
  return;
}



/* Entry: 107b697f4; end: 107b69813; -[SCOperaSubscribeButtonPillView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b697f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276af54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b69814; end: 107b69827; -[SCOperaSubscribeButtonPillView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b69814(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276af54,param_3);
  return;
}



/* Entry: 107b69828; end: 107b6995b; -[SCOperaSubscribeButtonPillView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b69828(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276af54);
  _objc_storeStrong(param_1 + _DAT_11276af48,0);
  _objc_storeStrong(param_1 + _DAT_11276af4c,0);
  _objc_storeStrong(param_1 + _DAT_11276af44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276af40,0);
  return;
}



/* Entry: 107b6995c; end: 107b69997;  */

void FUN_107b6995c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eb0198);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113727698;
  puRam0000000113727698 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b69998; end: 107b699eb;  */

void FUN_107b69998(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137276b0 != -1) {
    func_0x00010002a2fc(0x1137276b0,&PTR___NSConcreteGlobalBlock_1109fe3a8);
  }
  uVar1 = uRam00000001137276a8;
  _objc_retain(uRam00000001137276a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b699ec; end: 107b69a27;  */

void FUN_107b699ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eb01b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137276a8;
  puRam00000001137276a8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b69a28; end: 107b69a7b;  */

void FUN_107b69a28(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137276c0 != -1) {
    func_0x00010002a2fc(0x1137276c0,&PTR___NSConcreteGlobalBlock_1109fe3c8);
  }
  uVar1 = uRam00000001137276b8;
  _objc_retain(uRam00000001137276b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b69a7c; end: 107b69ab7;  */

void FUN_107b69a7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eb01d8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137276b8;
  puRam00000001137276b8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b69ab8; end: 107b69b0b;  */

void FUN_107b69ab8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137276d0 != -1) {
    func_0x00010002a2fc(0x1137276d0,&PTR___NSConcreteGlobalBlock_1109fe3e8);
  }
  uVar1 = uRam00000001137276c8;
  _objc_retain(uRam00000001137276c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b69b0c; end: 107b69b47;  */

void FUN_107b69b0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eb01f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137276c8;
  puRam00000001137276c8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b69b48; end: 107b69cc7; -[SCOperaSubscribeButtonTextView initWithFrame:isSubscribed:theme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b69b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fa028;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276af5c) = param_4;
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276af60);
    *(undefined **)((long)puVar1 + (long)_DAT_11276af60) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276af64;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar5));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402e000000000000);
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar4 = (long)_DAT_11276af68;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010bea87e0(puVar1);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c222c80(puVar1);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b69cc8; end: 107b69dbf; -[SCOperaSubscribeButtonTextView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b69cc8(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fa028;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_11276af68;
  func_0x00010be0c4c0(PTR_PTR_1126d6b70);
  dVar3 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar4 = dVar3 - param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  lVar2 = (long)_DAT_11276af64;
  func_0x00010c19f0e0(dVar4,0,param_1,dVar3,*(undefined8 *)(param_2 + lVar2));
  func_0x00010bf20c00(param_2);
  _CGRectGetMinY();
  dVar3 = dVar4;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar5 = dVar3 + -13.0;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010b8166f8(0x402a000000000000,dVar4,dVar5,dVar3,*(undefined8 *)(param_2 + lVar2));
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 107b69dc0; end: 107b69e1b; -[SCOperaSubscribeButtonTextView sizeThatFits:] */

void FUN_107b69dc0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6b70;
  if (lRam00000001137276e0 != -1) {
    func_0x00010002a2fc(0x1137276e0,&PTR___NSConcreteGlobalBlock_1109fe408);
  }
  func_0x00010be0c4c0(puVar1);
  return;
}



/* Entry: 107b69e1c; end: 107b6a207; -[SCOperaSubscribeButtonTextView setViewTheme:subscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b69e1c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_3 < 3) {
    if (param_3 == 1) {
      lVar6 = (long)_DAT_11276af64;
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c173280(uVar1,param_2,puVar2);
      _objc_release(puVar3);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0x4000006b;
    }
    else {
      if (param_3 != 2) {
LAB_107b69f94:
        uVar1 = *(undefined8 *)(param_1 + _DAT_11276af64);
        func_0x00010c08c0e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        func_0x00010c173280(uVar1,param_2,puVar2);
        goto LAB_107b69fe4;
      }
      lVar6 = (long)_DAT_11276af64;
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c173280(uVar1,param_2,puVar2);
      _objc_release(puVar3);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0x40000034;
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(uVar1,param_2,puVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276af68);
    uVar1 = 0x400000c6;
  }
  else {
    if (param_3 == 3) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11276af68);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x400000c6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(uVar1,param_2,puVar3);
      _objc_release(puVar3);
      lVar6 = (long)_DAT_11276af64;
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c173280(uVar1,param_2,puVar2);
      _objc_release(puVar3);
      _objc_release(uVar1);
      puVar3 = *(undefined **)(param_1 + lVar6);
      func_0x00010c08c0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      if (param_4 == 0) {
        lVar6 = -0x92;
      }
      else {
        lVar6 = -0x5b;
      }
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,lVar6 + 0x400000c6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c16e440(puVar3,param_2,puVar4);
      _objc_release(puVar2);
      goto LAB_107b6a0f0;
    }
    if (param_3 != 4) goto LAB_107b69f94;
    lVar6 = (long)_DAT_11276af64;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c173280(uVar1,param_2,puVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x4000006a);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(uVar1,param_2,puVar2);
LAB_107b69fe4:
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276af68);
    uVar1 = 0xd5;
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar5,param_2,puVar3);
LAB_107b6a0f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107b6a208; end: 107b6a217; -[SCOperaSubscribeButtonTextView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b6a208(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276af58);
}



/* Entry: 107b6a218; end: 107b6a25b; -[SCOperaSubscribeButtonTextView updateIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6a218(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11276af6c) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276af6c) = (char)param_3;
  func_0x00010bea3620();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b6a25c; end: 107b6a29f; -[SCOperaSubscribeButtonTextView updateIsSubscribedWithNoAnimations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6a25c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11276af6c) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276af6c) = (char)param_3;
  func_0x00010bea3620();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}


