/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b6a2a0; end: 107b6a327; -[SCOperaSubscribeButtonTextView _subscribeButtonViewTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6a2a0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar2);
  lVar1 = (long)_DAT_11276af6c;
  lVar3 = param_1 + _DAT_11276af70;
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



/* Entry: 107b6a328; end: 107b6a347; +[SCOperaSubscribeButtonTextView _expectedWidthWithLabel:] */

double FUN_107b6a328(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0699c0(param_4);
  return param_1 + 26.0;
}



/* Entry: 107b6a348; end: 107b6a483; -[SCOperaSubscribeButtonTextView _animateButtonToIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6a348(long param_1,undefined8 param_2,undefined1 param_3)

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
  
  if ((*(byte *)(param_1 + _DAT_11276af58) & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010bea4ce0(param_1);
    func_0x00010c1cbe20(param_1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107b6a484;
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



/* Entry: 107b6a484; end: 107b6a4bb;  */

void FUN_107b6a484(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6a4bc; end: 107b6a5a3;  */

void FUN_107b6a4bc(long param_1)

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
  pcStack_58 = FUN_107b6a5a4;
  puStack_50 = &UNK_1108434b0;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010bf03420(0x3fd3333333333333,puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b6a5a4; end: 107b6a5ff;  */

void FUN_107b6a5a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9ab40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6a600; end: 107b6a60f; -[SCOperaSubscribeButtonTextView _setIsButtonAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6a600(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276af58) = param_3;
  return;
}



/* Entry: 107b6a610; end: 107b6a68f; -[SCOperaSubscribeButtonTextView _setDetailsForIsSubscribed:shouldUseScaleTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6a610(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
  
  if (param_4 != 0) {
    _CGAffineTransformMakeScale(&uStack_50,0x3ff199999999999a,0x3ff199999999999a);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(param_1,param_2,&uStack_80);
  }
  func_0x00010bea87e0(param_1,param_2,param_3);
  func_0x00010c222c80(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11276af5c),param_3);
  return;
}



/* Entry: 107b6a690; end: 107b6a6df; -[SCOperaSubscribeButtonTextView _scaleViewToIdentity] */

void FUN_107b6a690(undefined8 param_1,undefined8 param_2)

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



/* Entry: 107b6a6e0; end: 107b6a73f; -[SCOperaSubscribeButtonTextView _setTitleLabelForIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6a6e0(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276af68);
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



/* Entry: 107b6a740; end: 107b6a74f; -[SCOperaSubscribeButtonTextView isSubscribed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b6a740(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276af6c);
}



/* Entry: 107b6a750; end: 107b6a75f; -[SCOperaSubscribeButtonTextView setIsSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6a750(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276af6c) = param_3;
  return;
}



/* Entry: 107b6a760; end: 107b6a77f; -[SCOperaSubscribeButtonTextView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6a760(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276af70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b6a780; end: 107b6a793; -[SCOperaSubscribeButtonTextView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6a780(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276af70,param_3);
  return;
}



/* Entry: 107b6a794; end: 107b6a873; -[SCOperaSubscribeButtonTextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6a794(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276af70);
  _objc_storeStrong(param_1 + _DAT_11276af68,0);
  _objc_storeStrong(param_1 + _DAT_11276af74,0);
  _objc_storeStrong(param_1 + _DAT_11276af64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276af60,0);
  return;
}



/* Entry: 107b6a874; end: 107b6a983; -[SCOperaToggleView updateVisibilityWithProperties:isVisibleKey:animationDurationKey:] */

void FUN_107b6a874(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_4;
      func_0x00010c0e00e0(param_4,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf1f3c0();
      _objc_release(lVar1);
      lVar1 = param_4;
      func_0x00010c0e00e0(param_4,param_3,param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(lVar1);
      func_0x00010c223820(param_1,param_2,param_3,lVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b6a984; end: 107b6aa27; -[SCOperaToggleView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b6a984(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276af78) = 1;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276af7c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276af7c) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b6aa28; end: 107b6aa7f; -[SCOperaToggleView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6aa28(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa030;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11276af7c));
  return;
}



/* Entry: 107b6aa80; end: 107b6aa87; -[SCOperaToggleView setVisible:] */

void FUN_107b6aa80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c223830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_setVisible_animationDuration__112666830);
  return;
}



/* Entry: 107b6aa88; end: 107b6ab9f; -[SCOperaToggleView setVisible:animationDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6aa88(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  if (*(byte *)(param_2 + _DAT_11276af78) != param_4) {
    uVar1 = (undefined1)param_4;
    *(undefined1 *)(param_2 + _DAT_11276af78) = uVar1;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107b6aba0;
    puStack_68 = &UNK_110845ce0;
    ppuVar4 = &puStack_80;
    lStack_60 = param_2;
    uStack_58 = uVar1;
    _objc_retainBlock();
    if (param_4 != 0) {
      (*(code *)ppuVar4[2])(ppuVar4);
    }
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_b0 = puVar2;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107b6acb8;
    puStack_98 = &UNK_110845ce0;
    puStack_d8 = puVar2;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x107b6acd4;
    puStack_c0 = &UNK_110842508;
    ppuStack_b8 = ppuVar4;
    lStack_90 = param_2;
    uStack_88 = uVar1;
    _objc_retain(ppuVar4);
    func_0x00010bf03420(param_1,puVar3,param_3,&puStack_b0,&puStack_d8);
    _objc_release(ppuStack_b8);
    _objc_release(ppuVar4);
  }
  return;
}



/* Entry: 107b6aba0; end: 107b6acb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6aba0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = (long)_DAT_11276af7c;
  func_0x00010c21e900(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4),param_2,
                      *(undefined1 *)(param_1 + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c21e900(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = NEON_ucvtf((ulong)*(byte *)(lVar2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar6,*(undefined8 *)(*(long *)(lVar2 + 0x20) + (long)_DAT_11276af7c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b6acb8; end: 107b6ace7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6acb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276af7c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b6ace8; end: 107b6acf7; -[SCOperaToggleView isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b6ace8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276af78);
}



/* Entry: 107b6acf8; end: 107b6ad07; -[SCOperaToggleView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b6acf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276af7c);
}



/* Entry: 107b6ad08; end: 107b6ad47; -[SCOperaToggleView setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6ad08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276af7c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b6ad48; end: 107b6ad5b; -[SCOperaToggleView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6ad48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276af7c,0);
  return;
}



/* Entry: 107b6ad5c; end: 107b6af8b; -[SCOperaInlineVideo initWithParameters:scrollViewYOffset:] */

undefined1 * FUN_107b6ad5c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  dVar7 = param_1;
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126fa038;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    dVar8 = dVar7;
    _objc_release(puVar2);
    uVar6 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar9 = dVar8 / dVar7;
    uVar5 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar8 = dVar8 / dVar7;
    param_1 = param_1 + dVar8;
    uVar3 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar10 = dVar8 / dVar7;
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    *(double *)((long)puVar1 + 0x30) = dVar9;
    *(double *)((long)puVar1 + 0x38) = param_1;
    *(double *)((long)puVar1 + 0x40) = dVar10;
    *(double *)((long)puVar1 + 0x48) = dVar8 / dVar7;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar6);
    uVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar6;
    _objc_release(uVar5);
    uVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar6;
    _objc_release(uVar5);
    uVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar6;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + 0x28));
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107b6af8c; end: 107b6af93; -[SCOperaInlineVideo screenshot] */

undefined8 FUN_107b6af8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107b6af94; end: 107b6afc3; -[SCOperaInlineVideo setScreenshot:] */

void FUN_107b6af94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b6afc4; end: 107b6afcf; -[SCOperaInlineVideo frame] */

undefined8 FUN_107b6afc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107b6afd0; end: 107b6afd7; -[SCOperaInlineVideo videoID] */

undefined8 FUN_107b6afd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107b6afd8; end: 107b6afdf; -[SCOperaInlineVideo videoURL] */

undefined8 FUN_107b6afd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107b6afe0; end: 107b6afe7; -[SCOperaInlineVideo firstFrameImageKey] */

undefined8 FUN_107b6afe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107b6afe8; end: 107b6afef; -[SCOperaInlineVideo playButton] */

undefined8 FUN_107b6afe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107b6aff0; end: 107b6b043; -[SCOperaInlineVideo .cxx_destruct] */

void FUN_107b6aff0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b6b044; end: 107b6b107; -[SCOperaInlineVideoDismissalAnimator initWithBlackView:startingFrame:endingFrame:] */

undefined1 *
FUN_107b6b044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fa040;
  uStack_70 = param_9;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_11;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
  }
  _objc_release(param_11);
  return (undefined1 *)puVar1;
}



/* Entry: 107b6b108; end: 107b6b10b; -[SCOperaInlineVideoDismissalAnimator startInteractiveTransition:] */

void FUN_107b6b108(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startAnimatingWithContext__112671130);
  return;
}



/* Entry: 107b6b10c; end: 107b6b12f; -[SCOperaInlineVideoDismissalAnimator animateTransition:] */

void FUN_107b6b10c(undefined8 param_1)

{
  func_0x00010c24dc20();
                    /* WARNING: Could not recover jumptable at 0x00010bfaf790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finishDismiss_1125c9788);
  return;
}



/* Entry: 107b6b130; end: 107b6b36f; -[SCOperaInlineVideoDismissalAnimator startAnimatingWithContext:] */

void FUN_107b6b130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58;
  func_0x00010c29c220(uVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c29c220(uVar3,param_2,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b6b370;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfe0(*(undefined8 *)(param_1 + 8),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c29c220(uVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x10));
  _CGRectGetWidth();
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x10));
  _CGRectGetHeight();
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x10));
  _CGRectGetWidth();
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x10));
  _CGRectGetHeight();
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x10));
  _CGRectStandardize();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b6b370; end: 107b6b3fb;  */

void FUN_107b6b370(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b6b3fc; end: 107b6b403; -[SCOperaInlineVideoDismissalAnimator transitionDuration:] */

undefined8 FUN_107b6b3fc(void)

{
  return 0x3fe0000000000000;
}



/* Entry: 107b6b404; end: 107b6b45b; -[SCOperaInlineVideoDismissalAnimator shouldDismissWithVelocity:translation:] */

bool FUN_107b6b404(undefined8 param_1,double param_2,undefined8 param_3,double param_4)

{
  if (param_2 < -800.0) {
    return false;
  }
  if (800.0 < param_2) {
    return true;
  }
  func_0x00010c11ff20();
  return param_4 < 0.85;
}



/* Entry: 107b6b45c; end: 107b6b50b; -[SCOperaInlineVideoDismissalAnimator finishDismiss] */

void FUN_107b6b45c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  iVar2 = (int)*(undefined8 *)(param_2 + 0x58);
  func_0x00010c075b60();
  if (iVar2 != 0) {
    func_0x00010bfaf8e0(*(undefined8 *)(param_2 + 0x58));
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(param_2,param_3,*(undefined8 *)(param_2 + 0x58));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107b6b50c;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107b6b5f0;
  puStack_58 = &UNK_110841f20;
  lStack_50 = param_2;
  lStack_28 = param_2;
  func_0x00010bf03440(param_1,0,puVar1,param_3,4,&puStack_48,&puStack_70);
  return;
}



/* Entry: 107b6b50c; end: 107b6b5ef;  */

void FUN_107b6b50c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = *(undefined8 *)(lVar2 + 0x48);
  uVar6 = *(undefined8 *)(lVar2 + 0x50);
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 107b6b5f0; end: 107b6b65b;  */

void FUN_107b6b5f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76660();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  uVar1 = uVar2;
  func_0x00010c27ac00(uVar2);
  func_0x00010bf43bc0(uVar2,param_2,(uint)uVar1 ^ 1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b6b65c; end: 107b6b703; -[SCOperaInlineVideoDismissalAnimator cancelTransition] */

void FUN_107b6b65c(long param_1,undefined8 param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010bf2e5a0();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107b6b704;
    puStack_30 = &UNK_110842e18;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107b6b79c;
    puStack_58 = &UNK_110841f20;
    lStack_50 = param_1;
    lStack_28 = param_1;
    func_0x00010bf03460(0x3fd999999999999a,0,0x3fe8000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20
                        ,param_2,4,&puStack_48,&puStack_70);
  }
  return;
}



/* Entry: 107b6b704; end: 107b6b79b;  */

void FUN_107b6b704(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)(lVar2 + 0x20);
  uVar5 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x30);
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b6b79c; end: 107b6b807;  */

void FUN_107b6b79c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  uVar1 = uVar2;
  func_0x00010c27ac00(uVar2);
  func_0x00010bf43bc0(uVar2,param_2,(uint)uVar1 ^ 1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b6b808; end: 107b6b863; -[SCOperaInlineVideoDismissalAnimator ratio:] */

double FUN_107b6b808(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  dVar2 = ABS(param_1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(puVar1);
  return 1.0 - dVar2 / param_1;
}



/* Entry: 107b6b864; end: 107b6b927; -[SCOperaInlineVideoDismissalAnimator didPan:] */

void FUN_107b6b864(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  
  func_0x00010c27adc0(param_7,param_6,*(undefined8 *)(param_5 + 0x10));
  uVar1 = *(undefined8 *)(param_5 + 0x60);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectStandardize();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + 0x60);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  dVar2 = ABS(param_2) / -100.0 + 1.0;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar2,*(undefined8 *)(param_5 + 8),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b6b928; end: 107b6b9d7; -[SCOperaInlineVideoDismissalAnimator finishPan:] */

void FUN_107b6b928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  func_0x00010c27adc0(param_5);
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010c297a00(param_5);
  _objc_release(param_5);
  uVar1 = param_3;
  func_0x00010c22f1e0(uVar2,uVar3,param_1,param_2);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfaf790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_finishDismiss_1125c9788);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf2f370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_cancelTransition_1125a9680);
  return;
}



/* Entry: 107b6b9d8; end: 107b6b9ef; -[SCOperaInlineVideoDismissalAnimator delegate] */

void FUN_107b6b9d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b6b9f0; end: 107b6b9fb; -[SCOperaInlineVideoDismissalAnimator setDelegate:] */

void FUN_107b6b9f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 107b6b9fc; end: 107b6ba4b; -[SCOperaInlineVideoDismissalAnimator .cxx_destruct] */

void FUN_107b6b9fc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b6ba4c; end: 107b6bb0f; -[SCOperaInlineVideoPresentationAnimator initWithStartingFrame:endingFrame:blackView:] */

undefined1 *
FUN_107b6ba4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fa048;
  uStack_70 = param_9;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  return (undefined1 *)puVar1;
}



/* Entry: 107b6bb10; end: 107b6be93; -[SCOperaInlineVideoPresentationAnimator animateTransition:] */

void FUN_107b6bb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar6);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar6);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x48),param_2,puVar4);
  _objc_release(puVar4);
  lVar5 = *(long *)(param_1 + 0x48);
  func_0x00010b816b5c();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  if (lVar5 - 3U < 2) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107b6be94;
    puStack_70 = &UNK_1108471b0;
    lStack_68 = param_1;
    func_0x00010c0bbfe0(uVar6,param_2,&puStack_88);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x48));
  }
  else {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x107b6bf20;
    puStack_98 = &UNK_1108471b0;
    _objc_retain(uVar2);
    uStack_90 = uVar2;
    func_0x00010c0bbfe0(uVar6,param_2,&puStack_b0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uStack_90);
  }
  func_0x00010c141d20(&uStack_e0,param_1);
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  func_0x00010c219960(uVar2,param_2,&uStack_110);
  uVar7 = *(undefined8 *)(param_1 + 8);
  _CGRectGetMidX(uVar7,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20));
  uVar8 = *(undefined8 *)(param_1 + 8);
  _CGRectGetMidY(uVar8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20));
  uVar6 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(uVar7,uVar8,uVar3,param_2,uVar6);
  func_0x00010c17a6a0(uVar2);
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(param_1,param_2,param_3);
  puStack_148 = puVar4;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_107b6bf88;
  puStack_130 = &UNK_110848ba8;
  lStack_128 = param_1;
  uStack_120 = uVar2;
  _objc_retain(param_3);
  puStack_170 = puVar4;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_107b6c010;
  puStack_158 = &UNK_110841f20;
  uStack_150 = param_3;
  uStack_118 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010bf03420(uVar7,puVar1,param_2,&puStack_148,&puStack_170);
  _objc_release(uStack_150);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 107b6be94; end: 107b6bf87;  */

void FUN_107b6be94(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b6bf88; end: 107b6c00f;  */

void FUN_107b6bf88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_50);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c19f0e0(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),
                      *(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40),
                      *(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar2);
  return;
}



/* Entry: 107b6c010; end: 107b6c01b;  */

void FUN_107b6c010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 107b6c01c; end: 107b6c067; -[SCOperaInlineVideoPresentationAnimator rotationTransform] */

void FUN_107b6c01c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_2 + 0x48);
  func_0x00010b816b5c();
  uVar2 = 0x3ff921fb54442d18;
  if (lVar1 != 4) {
    uVar2 = 0;
  }
  uVar3 = 0xbff921fb54442d18;
  if (lVar1 != 3) {
    uVar3 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbaaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGAffineTransformMakeRotation_110347020)(param_1,uVar3);
  return;
}



/* Entry: 107b6c068; end: 107b6c06f; -[SCOperaInlineVideoPresentationAnimator transitionDuration:] */

undefined8 FUN_107b6c068(void)

{
  return 0x3fe0000000000000;
}



/* Entry: 107b6c070; end: 107b6c07b; -[SCOperaInlineVideoPresentationAnimator .cxx_destruct] */

void FUN_107b6c070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,0);
  return;
}



/* Entry: 107b6c07c; end: 107b6c103; -[SCOperaInlineVideoTransitioningDelegate initWithStartingFrame:endingFrame:] */

void FUN_107b6c07c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fa050;
  uStack_60 = param_9;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    *(undefined8 *)((long)puVar1 + 0x58) = param_8;
  }
  return;
}



/* Entry: 107b6c104; end: 107b6c13f; -[SCOperaInlineVideoTransitioningDelegate presentationWillBegin] */

void FUN_107b6c104(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c2288d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setupDismissalAnimation_112667c58);
  return;
}



/* Entry: 107b6c140; end: 107b6c183; -[SCOperaInlineVideoTransitioningDelegate didFinishAnimating:cancelled:] */

void FUN_107b6c140(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  if ((param_4 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b6c184; end: 107b6c21f; -[SCOperaInlineVideoTransitioningDelegate animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_107b6c184(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126d6b80;
  _objc_opt_class(PTR_PTR_1126d6b80);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) = param_3;
    _objc_release(uVar2);
    func_0x00010c10f800(param_1);
    puVar3 = PTR_PTR_1126d6b88;
    _objc_alloc(PTR_PTR_1126d6b88);
    func_0x00010c04bce0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b6c220; end: 107b6c2c7; -[SCOperaInlineVideoTransitioningDelegate setupDismissalAnimation] */

void FUN_107b6c220(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6b90;
  _objc_alloc();
  func_0x00010bff8480(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b6c2c8; end: 107b6c41b; -[SCOperaInlineVideoTransitioningDelegate handleDownPan:] */

void FUN_107b6c2c8(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(uVar3,param_4,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 3) {
    func_0x00010bfafa60(*(undefined8 *)(param_3 + 0x18),param_4,param_5);
  }
  else if (lVar1 == 2) {
    func_0x00010bf781e0(*(undefined8 *)(param_3 + 0x18),param_4,param_5);
  }
  else if (lVar1 == 1) {
    if (ABS(param_1) <= ABS(param_2) * 0.4) {
      uVar3 = *(undefined8 *)(param_3 + 0x60);
      func_0x00010c10fd00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf84b00();
      _objc_release(uVar3);
    }
    else {
      func_0x00010c195460(param_5,param_4,0);
      func_0x00010c195460(param_5,param_4,1);
    }
    func_0x00010c2353a0();
    if ((param_3 & 1) == 0) {
      func_0x00010c195460(param_5,param_4,0);
      func_0x00010c195460(param_5,param_4,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b6c41c; end: 107b6c443; -[SCOperaInlineVideoTransitioningDelegate animationControllerForDismissedController:] */

void FUN_107b6c41c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b6c444; end: 107b6c47f; -[SCOperaInlineVideoTransitioningDelegate interactionControllerForDismissal:] */

void FUN_107b6c444(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c2353a0();
  if ((int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b6c480; end: 107b6c4e3; -[SCOperaInlineVideoTransitioningDelegate shouldUseInteractiveTransition] */

bool FUN_107b6c480(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c252440();
  if (lVar2 == 1) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c29bf00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010b816b5c();
    bVar1 = lVar2 - 1U < 2;
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 107b6c4e4; end: 107b6c52b; -[SCOperaInlineVideoTransitioningDelegate .cxx_destruct] */

void FUN_107b6c4e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b6c52c; end: 107b6c5d7; -[SCOperaMultiWebViewWrapper init] */

undefined1 * FUN_107b6c52c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa058;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b6c5d8; end: 107b6c647; -[SCOperaMultiWebViewWrapper webViewWrapperForUrl:] */

void FUN_107b6c5d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0e00e0(uVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107b6c648; end: 107b6c74b; -[SCOperaMultiWebViewWrapper setWebViewWrapper:forUrl:] */

void FUN_107b6c648(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0dff20(lVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,lVar1,param_4);
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      lVar1 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar2,param_2,param_3,lVar1);
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      lVar1 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar2,param_2,param_4,lVar1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b6c74c; end: 107b6c79f; -[SCOperaMultiWebViewWrapper initialLoadUrlForWebViewWrapper:] */

void FUN_107b6c74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b6c7a0; end: 107b6c863; -[SCOperaMultiWebViewWrapper setDidFinishLoadingTimestamp:forWebViewWrapper:] */

void FUN_107b6c7a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    uVar1 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(lVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (lVar3 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = param_4;
      func_0x00010be36bc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar2,param_2,param_3,uVar1);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b6c864; end: 107b6c8b7; -[SCOperaMultiWebViewWrapper didFinishLoadingTimestampForWebViewWrapper:] */

void FUN_107b6c864(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b6c8b8; end: 107b6c9cf; -[SCOperaMultiWebViewWrapper tearDown] */

void FUN_107b6c8b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c26ab80(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c12adc0(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + 0x20,0);
  _objc_storeStrong(lVar3 + 0x18,0);
  _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 107b6c9d0; end: 107b6ca17; -[SCOperaMultiWebViewWrapper .cxx_destruct] */

void FUN_107b6c9d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b6ca18; end: 107b6ca5b; -[SCOperaWebViewAVControlScript init] */

void FUN_107b6ca18(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fa060;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithSource_injectionTime_for_1125f03d8,
                      &PTR____CFConstantStringClassReference_110eb0378,0,1);
  return;
}



/* Entry: 107b6ca5c; end: 107b6ca5f; -[SCOperaWebViewAVControlScript didShowWebView:] */

void FUN_107b6ca5c(void)

{
  return;
}



/* Entry: 107b6ca60; end: 107b6cac3; -[SCOperaWebViewAVControlScript didHideWebView:] */

void FUN_107b6ca60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf999c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0398,0);
  func_0x00010bf999c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb03b8,0);
  func_0x00010bf999c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb03d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b6cac4; end: 107b6cb73; -[SCOperaWebViewAudioController initWithOperaWebViewWrapper:audioSession:] */

undefined1 *
FUN_107b6cac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa068;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x10));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b6cb74; end: 107b6cbbf; -[SCOperaWebViewAudioController dealloc] */

void FUN_107b6cb74(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  puStack_28 = PTR_PTR_1126fa068;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b6cbc0; end: 107b6cbcb; -[SCOperaWebViewAudioController muteWebView] */

void FUN_107b6cbc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_eval__1125c3ff0,&PTR____CFConstantStringClassReference_110eb03f8);
  return;
}



/* Entry: 107b6cbcc; end: 107b6cbd7; -[SCOperaWebViewAudioController unmuteWebView] */

void FUN_107b6cbcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_eval__1125c3ff0,&PTR____CFConstantStringClassReference_110eb0418);
  return;
}



/* Entry: 107b6cbd8; end: 107b6cca3; -[SCOperaWebViewAudioController eval:] */

void FUN_107b6cbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107b6cc60;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107b6cca4; end: 107b6cd2b; -[SCOperaWebViewAudioController syncMuteStatus] */

void FUN_107b6cca4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107b6cd2c;
  puStack_40 = &UNK_110853ba0;
  lStack_38 = param_1;
  func_0x00010bf385a0(uVar2,param_2,lVar1,&puStack_58);
  _objc_release(lVar1);
  return;
}



/* Entry: 107b6cd2c; end: 107b6cd3f;  */

void FUN_107b6cd2c(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  if (((param_3 & 1) == 0) && ((param_4 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d41b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_muteWebView_112612a80);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2819f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_unmuteWebView_11267e0a0);
  return;
}



/* Entry: 107b6cd40; end: 107b6cd43; -[SCOperaWebViewAudioController audioSession:didChangeVolume:] */

void FUN_107b6cd40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2819f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unmuteWebView_11267e0a0);
  return;
}



/* Entry: 107b6cd44; end: 107b6cd73; -[SCOperaWebViewAudioController .cxx_destruct] */

void FUN_107b6cd44(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b6cd74; end: 107b6d353; -[SCOperaWebViewHeaderView initWithFrame:useWebviewStandardization:enableActionMenuButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107b6cd74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,int param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126fa070;
  puVar1 = &uStack_a0;
  uStack_a0 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_11276aff0;
    *(undefined1 *)((long)puVar1 + lVar8) = param_7;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar4 = (long)_DAT_11276aff4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c3298;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11276aff8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1a8c20(0xc034000000000000,0xc02e000000000000,0xc034000000000000,0xc024000000000000,
                        *(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c195460(*(undefined8 *)((long)puVar1 + lVar5));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e720(uVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    lVar6 = (long)_DAT_11276affc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(uVar3);
    _objc_release(puVar2);
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    lVar6 = (long)_DAT_11276b000;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar6));
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4008000000000000);
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bf21300(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    lVar6 = (long)_DAT_11276b004;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1677c0(0x3fd999999999999a,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    lVar7 = (long)_DAT_11276b008;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010c1677c0(0x3fd999999999999a,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar7));
    if ((param_8 != 0) && ((*(byte *)((long)puVar1 + lVar8) & 1) != 0)) {
      puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
      _objc_alloc_init();
      lVar6 = (long)_DAT_11276b00c;
      uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
      *(undefined **)((long)puVar1 + lVar6) = puVar2;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9fc0(uVar3);
      _objc_release(puVar2);
      func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar6));
      func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
    }
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar6 = (long)_DAT_11276b010;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1c8340(0x3f847ae147ae147b,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar6 = (long)_DAT_11276b014;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126b0880;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    lVar6 = (long)_DAT_11276b018;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c182b00(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
  }
  return puVar1;
}



/* Entry: 107b6d354; end: 107b6d383; -[SCOperaWebViewHeaderView operaWebViewHeaderViewDidPressActionMenuButton] */

void FUN_107b6d354(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b6d384; end: 107b6d73b; -[SCOperaWebViewHeaderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6d384(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fa070;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276aff4));
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276b018));
  lVar3 = (long)_DAT_11276aff8;
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar3));
  lVar4 = (long)_DAT_11276aff0;
  if ((*(byte *)(param_5 + lVar4) & 1) == 0) {
    func_0x00010bf20c00(param_5);
    dVar6 = param_3 + -12.0 + -20.0;
    dVar9 = 0.0;
    dVar8 = 20.0;
  }
  else {
    dVar9 = 28.0;
    dVar8 = 15.0;
    dVar6 = 13.0;
  }
  lVar5 = (long)_DAT_11276b01c;
  *(double *)(param_5 + lVar5) = dVar6;
  func_0x00010bf20c00(param_5);
  dVar7 = (param_4 - dVar8) * 0.5;
  *(double *)(param_5 + _DAT_11276b020) = dVar7;
  dVar6 = dVar8;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5),dVar7,dVar8,dVar8,
                      *(undefined8 *)(param_5 + lVar3));
  lVar3 = *(long *)(param_5 + _DAT_11276b024);
  if (lVar3 != 0) {
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf32ee0();
    _objc_release(lVar3);
    if (lVar5 == 0) {
      lVar3 = (long)_DAT_11276b004;
      func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar3));
      lVar5 = (long)_DAT_11276b008;
      func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar5));
      func_0x00010bf20c00(param_5);
      dVar8 = 13.0;
      func_0x00010c19f0e0(dVar9 + 12.0,(dVar6 + -13.0) * 0.5,0x4028000000000000,0x402a000000000000,
                          *(undefined8 *)(param_5 + lVar3));
      func_0x00010bf20c00(param_5);
      dVar7 = 20.0;
      func_0x00010c19f0e0(dVar9 + 36.0,(dVar8 + -20.0) * 0.5,0x3ff0000000000000,0x4034000000000000,
                          *(undefined8 *)(param_5 + lVar5));
      func_0x00010bf20c00(param_5);
      dVar6 = 20.0;
      func_0x00010c19f0e0(dVar9 + 36.0 + 1.0 + 8.0,(dVar7 + -20.0) * 0.5,0x4034000000000000,
                          0x4034000000000000,*(undefined8 *)(param_5 + _DAT_11276b000));
      cVar1 = *(char *)(param_5 + lVar4);
      func_0x00010bf20c00(param_5);
      if (cVar1 == '\x01') {
        dVar6 = dVar6 + -73.0 + -24.0;
        if (*(long *)(param_5 + _DAT_11276b00c) != 0) {
          dVar6 = dVar6 + -36.0;
        }
      }
      else {
        dVar6 = dVar6 + -73.0 + -20.0 + -24.0;
      }
      dVar7 = 73.0;
      goto LAB_107b6d6a8;
    }
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11276b004));
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11276b008));
  lVar3 = (long)_DAT_11276b000;
  uVar2 = *(ulong *)(param_5 + lVar3);
  func_0x00010c074c20();
  dVar7 = 8.0;
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(param_5);
    dVar8 = 20.0;
    func_0x00010c19f0e0(dVar9 + 8.0,(dVar6 + -20.0) * 0.5,0x4034000000000000,0x4034000000000000,
                        *(undefined8 *)(param_5 + lVar3));
    dVar7 = 36.0;
  }
  cVar1 = *(char *)(param_5 + lVar4);
  func_0x00010bf20c00(param_5);
  dVar6 = dVar8 + -36.0 + -24.0;
  if (cVar1 == '\x01') {
    if (*(long *)(param_5 + _DAT_11276b00c) != 0) {
      dVar6 = dVar6 + -36.0;
    }
  }
  else {
    dVar6 = dVar6 + -20.0;
  }
LAB_107b6d6a8:
  dVar8 = 16.5;
  func_0x00010c19f0e0(dVar9 + dVar7,0x4024000000000000,dVar6,0x4030800000000000,
                      *(undefined8 *)(param_5 + _DAT_11276affc));
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(dVar6 + -33.0 + -3.0,(dVar8 + -33.0) * 0.5,0x4040800000000000,
                      0x4040800000000000,*(undefined8 *)(param_5 + _DAT_11276b00c));
  return;
}



/* Entry: 107b6d73c; end: 107b6d7c3; -[SCOperaWebViewHeaderView setFaviconForURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6d73c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b000;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
  uVar1 = *(ulong *)(param_1 + _DAT_11276affc);
  func_0x00010c074c20();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x000108fe4e6c();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2));
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b6d7c4; end: 107b6d86f; -[SCOperaWebViewHeaderView updateUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6d7c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b024);
  *(undefined8 *)(param_1 + _DAT_11276b024) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c25cf40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276affc),param_2,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b6d870; end: 107b6d89f; -[SCOperaWebViewHeaderView setUrlBarLoadingText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b6d870(long param_1)

{
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276affc));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b6d8a0; end: 107b6d8b7; -[SCOperaWebViewHeaderView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b6d8a0(long param_1,undefined8 param_2,long param_3)

{
  return *(long *)(param_1 + _DAT_11276b010) == param_3;
}



/* Entry: 107b6d8b8; end: 107b6d8bf; -[SCOperaWebViewHeaderView gestureRecognizer:shouldReceiveTouch:] */

undefined8 FUN_107b6d8b8(void)

{
  return 1;
}


