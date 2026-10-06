/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2b13e4; end: 10b2b148f; -[SCDownSwipableViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b13e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706288;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_11278e37c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(param_1);
  return;
}



/* Entry: 10b2b1490; end: 10b2b1563; -[SCDownSwipableViewController dealloc] */

void FUN_10b2b1490(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010bf886c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf886c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf886c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c191120(param_1);
  }
  puStack_38 = PTR_PTR_112706288;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b2b1564; end: 10b2b156b; -[SCDownSwipableViewController inValidView:] */

undefined8 FUN_10b2b1564(void)

{
  return 1;
}



/* Entry: 10b2b156c; end: 10b2b1573; -[SCDownSwipableViewController disableDownSwipe] */

undefined8 FUN_10b2b156c(void)

{
  return 0;
}



/* Entry: 10b2b1574; end: 10b2b1577; -[SCDownSwipableViewController downSwipePrepare] */

void FUN_10b2b1574(void)

{
  return;
}



/* Entry: 10b2b1578; end: 10b2b157b; -[SCDownSwipableViewController downSwipeCancelled] */

void FUN_10b2b1578(void)

{
  return;
}



/* Entry: 10b2b157c; end: 10b2b157f; -[SCDownSwipableViewController downSwipeSucceed] */

void FUN_10b2b157c(void)

{
  return;
}



/* Entry: 10b2b1580; end: 10b2b1587; -[SCDownSwipableViewController downSwipeContentOffsetY] */

undefined8 FUN_10b2b1580(void)

{
  return 0;
}



/* Entry: 10b2b1588; end: 10b2b158f; -[SCDownSwipableViewController preferredStatusBarStyle] */

undefined8 FUN_10b2b1588(void)

{
  return 1;
}



/* Entry: 10b2b1590; end: 10b2b1597; -[SCDownSwipableViewController prefersStatusBarHidden] */

undefined8 FUN_10b2b1590(void)

{
  return 1;
}



/* Entry: 10b2b1598; end: 10b2b1647; -[SCDownSwipableViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_10b2b1598(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706288;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b2b1648; end: 10b2b1683; -[SCDownSwipableViewController navigationController:animationControllerForOperation:fromViewController:toViewController:] */

void FUN_10b2b1648(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0130;
  _objc_opt_new(PTR_PTR_1126e0130);
  func_0x00010c18f800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2b1684; end: 10b2b16b3; -[SCDownSwipableViewController navigationController:interactionControllerForAnimationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b1684(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e380);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2b16b4; end: 10b2b19fb; -[SCDownSwipableViewController handlePanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b16b4(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c252440();
  if (lVar1 == 1) {
    func_0x00010bf88680(param_5);
    *(undefined8 *)(param_5 + _DAT_11278e384) = param_1;
  }
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_7,param_6,lVar1);
  dVar4 = *(double *)(param_5 + _DAT_11278e384);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  param_4 = (param_2 - dVar4) / param_4;
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar6 = 1.0;
  dVar4 = 1.0;
  if (param_4 <= 1.0) {
    dVar4 = param_4;
  }
  lVar1 = param_7;
  dVar5 = param_4;
  func_0x00010c252440();
  if (lVar1 == 1) {
    *(undefined1 *)(param_5 + _DAT_11278e388) = 1;
    puVar3 = PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8;
    _objc_alloc_init(PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8);
    func_0x00010c1ae380(param_5,param_6,puVar3);
    _objc_release(puVar3);
    lVar1 = param_5;
    func_0x00010c0d66a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf886a0(param_5);
  }
  else {
    lVar1 = param_7;
    func_0x00010c252440();
    if (lVar1 == 2) {
      func_0x00010c068d60(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c286a00(dVar4);
      _objc_release(param_5);
    }
    else {
      lVar1 = param_7;
      func_0x00010c252440();
      if ((lVar1 == 3) || (lVar1 = param_7, func_0x00010c252440(), lVar1 == 4)) {
        lVar1 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297a00(param_7,param_6,lVar1);
        _objc_release(lVar1);
        lVar1 = param_5;
        func_0x00010c068d60(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c286a00(dVar4);
        _objc_release(lVar1);
        if ((0.5 < param_4) || (((0.2 < param_4 && (700.0 < dVar6)) && (ABS(dVar5) < dVar6)))) {
          dVar6 = 100.0;
          if (0.01 <= 1.0 - dVar4) {
            dVar6 = 1.0 - dVar4;
          }
          lVar1 = param_5;
          func_0x00010c068d60(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17fc20(dVar6);
          _objc_release(lVar1);
          lVar1 = param_5;
          func_0x00010c068d60(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfaf8e0();
          _objc_release(lVar1);
          func_0x00010bf886e0(param_5);
        }
        else {
          lVar1 = param_5;
          if (param_4 <= 0.0) {
            func_0x00010c068d60(param_5);
            _objc_retainAutoreleasedReturnValue();
            dVar6 = 100.0;
          }
          else {
            dVar6 = 100.0;
            if (0.01 <= dVar4) {
              dVar6 = dVar4;
            }
            func_0x00010c068d60(param_5);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c17fc20(dVar6);
          _objc_release(lVar1);
          lVar1 = param_5;
          func_0x00010c068d60(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2e5a0();
          _objc_release(lVar1);
          func_0x00010bf88660(param_5);
        }
        *(undefined1 *)(param_5 + _DAT_11278e388) = 0;
        func_0x00010c1ae380(param_5,param_6,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10b2b19fc; end: 10b2b1a53; -[SCDownSwipableViewController gestureRecognizerShouldBegin:] */

ulong FUN_10b2b19fc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf7fe40();
  if ((uVar1 & 1) == 0) {
    func_0x00010bfeb880(param_1,param_2,param_3);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b2b1a54; end: 10b2b1a5b; -[SCDownSwipableViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10b2b1a54(void)

{
  return 0;
}



/* Entry: 10b2b1a5c; end: 10b2b1a63; -[SCDownSwipableViewController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_10b2b1a5c(void)

{
  return 0;
}



/* Entry: 10b2b1a64; end: 10b2b1a6b; -[SCDownSwipableViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_10b2b1a64(void)

{
  return 0;
}



/* Entry: 10b2b1a6c; end: 10b2b1a7b; -[SCDownSwipableViewController downSwipeRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b1a6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e37c);
}



/* Entry: 10b2b1a7c; end: 10b2b1abb; -[SCDownSwipableViewController setDownSwipeRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b1a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e37c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b1abc; end: 10b2b1acb; -[SCDownSwipableViewController interactivePopTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b1abc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e380);
}



/* Entry: 10b2b1acc; end: 10b2b1b0b; -[SCDownSwipableViewController setInteractivePopTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b1acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e380;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b1b0c; end: 10b2b1b1b; -[SCDownSwipableViewController interactionInProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2b1b0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e388);
}



/* Entry: 10b2b1b1c; end: 10b2b1b2b; -[SCDownSwipableViewController setInteractionInProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b1b1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e388) = param_3;
  return;
}



/* Entry: 10b2b1b2c; end: 10b2b1b3b; -[SCDownSwipableViewController contentOffsetY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b1b2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e384);
}



/* Entry: 10b2b1b3c; end: 10b2b1b4b; -[SCDownSwipableViewController setContentOffsetY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b1b3c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e384) = param_1;
  return;
}



/* Entry: 10b2b1b4c; end: 10b2b1b8b; -[SCDownSwipableViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b1b4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e380,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e37c,0);
  return;
}



/* Entry: 10b2b1b8c; end: 10b2b1f5f; -[SCDownSwipeTransitionAnimator animateTransition:] */

void FUN_10b2b1b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_d3;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar6,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar6 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cda0(uVar6,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  uVar6 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar6);
  _CGAffineTransformMakeTranslation(&uStack_a0,0,in_d3);
  uVar6 = uVar5;
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960();
  _objc_release(uVar6);
  if (*(char *)(param_1 + 8) == '\0') {
    puVar1 = &uStack_a0;
  }
  uStack_c8 = puVar1[1];
  uStack_d0 = *puVar1;
  uStack_b8 = puVar1[3];
  uStack_c0 = puVar1[2];
  uStack_a8 = puVar1[5];
  uVar7 = puVar1[4];
  uVar6 = uVar4;
  uStack_b0 = uVar7;
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c075b60();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(param_1,param_2,param_3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar6 == 0) {
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_10b2b20e4;
    puStack_1c0 = &UNK_110870740;
    _objc_retain(uVar5);
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_188 = uStack_88;
    uStack_190 = uStack_90;
    uStack_178 = uStack_78;
    uStack_180 = uStack_80;
    uStack_1b8 = uVar5;
    lStack_1b0 = param_1;
    _objc_retain(uVar4);
    puStack_210 = puVar2;
    uStack_208 = 0xc2000000;
    pcStack_200 = FUN_10b2b21b4;
    puStack_1f8 = &UNK_1108500c8;
    uStack_1a8 = uVar4;
    _objc_retain(uVar5);
    uStack_1f0 = uVar5;
    _objc_retain(uVar4);
    uStack_1e8 = uVar4;
    uStack_1e0 = param_3;
    _objc_retain(param_3);
    func_0x00010bf03440(uVar7,0,puVar3,param_2,0x20000,&puStack_1d8,&puStack_210);
    _objc_release(uStack_1e0);
    _objc_release(uStack_1e8);
    _objc_release(uStack_1f0);
    _objc_release(uStack_1a8);
    uVar6 = uStack_1b8;
  }
  else {
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_10b2b1f60;
    puStack_120 = &UNK_110870740;
    _objc_retain(uVar5);
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    uStack_118 = uVar5;
    lStack_110 = param_1;
    _objc_retain(uVar4);
    puStack_170 = puVar2;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_10b2b2030;
    puStack_158 = &UNK_1108500c8;
    uStack_108 = uVar4;
    _objc_retain(uVar5);
    uStack_150 = uVar5;
    _objc_retain(uVar4);
    uStack_148 = uVar4;
    uStack_140 = param_3;
    _objc_retain(param_3);
    func_0x00010bf03440(uVar7,0,puVar3,param_2,0x30000,&puStack_138,&puStack_170);
    _objc_release(uStack_140);
    _objc_release(uStack_148);
    _objc_release(uStack_150);
    _objc_release(uStack_108);
    uVar6 = uStack_118;
  }
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 10b2b1f60; end: 10b2b202f;  */

void FUN_10b2b1f60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2b2030; end: 10b2b20e3;  */

void FUN_10b2b2030(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c27ac00(uVar1);
  func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x30),param_2,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 10b2b20e4; end: 10b2b21b3;  */

void FUN_10b2b20e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2b21b4; end: 10b2b2267;  */

void FUN_10b2b21b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c27ac00(uVar1);
  func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x30),param_2,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 10b2b2268; end: 10b2b2273; -[SCDownSwipeTransitionAnimator transitionDuration:] */

undefined8 FUN_10b2b2268(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 10b2b2274; end: 10b2b227b; -[SCDownSwipeTransitionAnimator dismissal] */

undefined1 FUN_10b2b2274(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b2b227c; end: 10b2b2283; -[SCDownSwipeTransitionAnimator setDismissal:] */

void FUN_10b2b227c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b2b2284; end: 10b2b228b; -[SCFriendsTableIndex initWithFrame:style:] */

void FUN_10b2b2284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFrame_style_lightColorSc_1125e2d90,param_3,0);
  return;
}



/* Entry: 10b2b228c; end: 10b2b27d3; -[SCFriendsTableIndex initWithFrame:style:lightColorSchemeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b2b228c(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_112706290;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c1d4c20(puVar2);
    func_0x00010c182220(puVar2);
    if (param_3 != 4) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c16e380(puVar2);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c420(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf13c20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar4 = puVar2;
      func_0x00010bf13c20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d4bc0(0x3f000000);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010bf13c20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(puVar4);
      func_0x00010befbb60(puVar2);
    }
    lVar10 = (long)_DAT_11278e39c;
    *(undefined1 *)((long)puVar2 + lVar10) = param_4;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac0a0(puVar2);
    puVar4 = puVar2;
    func_0x00010bfeca40();
    if (0 < (long)puVar4) {
      lVar9 = 0;
      do {
        puVar4 = puVar2;
        func_0x00010bf358c0();
        uVar1 = (uint)puVar4 & 0xff;
        puVar4 = puVar2;
        if (uVar1 < 0x33) {
          if (uVar1 != 0x30) {
            if (uVar1 == 0x31) {
              puVar5 = puVar2;
              func_0x00010bfed340();
              if (((puVar5 != (undefined8 *)0x2) &&
                  (puVar5 = puVar2, func_0x00010bfed340(), puVar5 != (undefined8 *)0x3)) &&
                 ((puVar5 = puVar2, func_0x00010bfed340(), puVar5 != (undefined8 *)0x8 &&
                  (((puVar5 = puVar2, func_0x00010bfed340(), puVar5 != (undefined8 *)0x9 &&
                    (puVar5 = puVar2, func_0x00010bfed340(), puVar5 != (undefined8 *)0xc)) &&
                   (puVar5 = puVar2, func_0x00010bfed340(), puVar5 != (undefined8 *)0xd)))))) {
                func_0x00010bfed340();
joined_r0x00010b2b2694:
                if (puVar4 != (undefined8 *)0xa) goto LAB_10b2b2734;
              }
            }
            else {
              if (uVar1 != 0x32) goto LAB_10b2b2590;
              puVar5 = puVar2;
              func_0x00010bfed340();
              if ((((puVar5 != (undefined8 *)0x2) &&
                   (puVar5 = puVar2, func_0x00010bfed340(), puVar5 != (undefined8 *)0x8)) &&
                  (puVar5 = puVar2, func_0x00010bfed340(), puVar5 != (undefined8 *)0x9)) &&
                 ((puVar5 = puVar2, func_0x00010bfed340(), puVar5 != (undefined8 *)0xa &&
                  (puVar5 = puVar2, func_0x00010bfed340(), puVar5 != (undefined8 *)0xc)))) {
                func_0x00010bfed340();
                goto joined_r0x00010b2b2510;
              }
            }
LAB_10b2b2708:
            ppuVar6 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
            func_0x00010bfe8220();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10b2b2714;
          }
          puVar4 = puVar2;
          func_0x00010bfed340();
          ppuVar6 = &PTR____CFConstantStringClassReference_110f62638;
          if (puVar4 != (undefined8 *)0x1) {
            puVar4 = puVar2;
            func_0x00010bfed340();
            if (puVar4 == (undefined8 *)0x7) goto LAB_10b2b2734;
            func_0x00010bfed340();
            goto LAB_10b2b2708;
          }
LAB_10b2b271c:
          func_0x00010befa120(puVar3);
          _objc_release(ppuVar6);
        }
        else {
          if (uVar1 < 0x35) {
            if (uVar1 == 0x33) {
              puVar5 = puVar2;
              func_0x00010bfed340();
              if (((puVar5 != (undefined8 *)0x8) &&
                  (puVar5 = puVar2, func_0x00010bfed340(), puVar5 != (undefined8 *)0x9)) &&
                 (puVar5 = puVar2, func_0x00010bfed340(), puVar5 != (undefined8 *)0xc)) {
                func_0x00010bfed340();
joined_r0x00010b2b2510:
                if (puVar4 != (undefined8 *)0xd) goto LAB_10b2b2734;
              }
              goto LAB_10b2b2708;
            }
            if (uVar1 != 0x34) goto LAB_10b2b2590;
            if (*(char *)((long)puVar2 + lVar10) == '\x01') {
              func_0x00010bfed340();
              goto joined_r0x00010b2b2694;
            }
          }
          else {
            if (uVar1 == 0x35) {
              if (*(char *)((long)puVar2 + lVar10) != '\x01') goto LAB_10b2b2734;
              puVar5 = puVar2;
              func_0x00010bfed340();
              if (puVar5 != (undefined8 *)0x9) {
                func_0x00010bfed340();
                goto joined_r0x00010b2b2510;
              }
              goto LAB_10b2b2708;
            }
            if (uVar1 == 0x5d) goto LAB_10b2b2708;
LAB_10b2b2590:
            ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
LAB_10b2b2714:
            if (ppuVar6 != (undefined **)0x0) goto LAB_10b2b271c;
          }
LAB_10b2b2734:
          func_0x00010befa120(puVar3);
        }
        lVar9 = lVar9 + 1;
        puVar4 = puVar2;
        func_0x00010bfeca40();
      } while (lVar9 < (long)puVar4);
    }
    puVar7 = puVar3;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)puVar2 + (long)_DAT_11278e3a0);
    *(undefined **)((long)puVar2 + (long)_DAT_11278e3a0) = puVar7;
    _objc_release(uVar8);
    func_0x00010c228b00(puVar2);
    func_0x00010c17d4c0(puVar2);
    _objc_release(puVar3);
  }
  return puVar2;
}



/* Entry: 10b2b27d4; end: 10b2b28db; -[SCFriendsTableIndex setupGestureRecognizers] */

void FUN_10b2b27d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  func_0x00010c1c0d00(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c0b4e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8340(0);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0b4e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(param_1,param_2,uVar2);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc_init(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x00010c1d8ea0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c0f36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0f36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2b28dc; end: 10b2b298b; -[SCFriendsTableIndex gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_10b2b28dc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e0138;
  _objc_opt_class(PTR_PTR_1126e0138);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar4 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126e0138;
    _objc_opt_class(PTR_PTR_1126e0138);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = (uint)uVar5;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  return uVar1 & 1;
}



/* Entry: 10b2b298c; end: 10b2b29cb; -[SCFriendsTableIndex selected] */

bool FUN_10b2b298c(long param_1)

{
  long lVar1;
  
  func_0x00010c0b4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_release(param_1);
  return lVar1 == 3;
}



/* Entry: 10b2b29cc; end: 10b2b2af7; -[SCFriendsTableIndex indexCount] */

void FUN_10b2b29cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfed340();
  if (((((lVar1 != 0) && (lVar1 = param_1, func_0x00010bfed340(), lVar1 != 1)) &&
       (lVar1 = param_1, func_0x00010bfed340(), lVar1 != 0xb)) &&
      (((lVar1 = param_1, func_0x00010bfed340(), lVar1 != 7 &&
        (lVar1 = param_1, func_0x00010bfed340(), lVar1 != 2)) &&
       ((lVar1 = param_1, func_0x00010bfed340(), lVar1 != 3 &&
        ((lVar1 = param_1, func_0x00010bfed340(), lVar1 != 8 &&
         (lVar1 = param_1, func_0x00010bfed340(), lVar1 != 0xc)))))))) &&
     ((lVar1 = param_1, func_0x00010bfed340(), lVar1 != 10 &&
      ((((lVar1 = param_1, func_0x00010bfed340(), lVar1 != 9 &&
         (lVar1 = param_1, func_0x00010bfed340(), lVar1 != 0xd)) &&
        (lVar1 = param_1, func_0x00010bfed340(), lVar1 != 4)) &&
       (func_0x00010bfed340(), param_1 != 5)))))) {
    func_0x00010bfed340();
  }
  return;
}



/* Entry: 10b2b2af8; end: 10b2b2c1f; -[SCFriendsTableIndex charForIndex:] */

int FUN_10b2b2af8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010bfed340();
  if (((lVar1 == 0) || (lVar1 = param_1, func_0x00010bfed340(), lVar1 == 1)) ||
     (lVar1 = param_1, func_0x00010bfed340(), lVar1 == 0xb)) {
    puVar3 = &UNK_10e571780;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfed340();
    if (lVar1 == 7) {
      puVar3 = &UNK_10e57179c;
    }
    else {
      lVar1 = param_1;
      func_0x00010bfed340();
      if (lVar1 == 2) {
        puVar3 = &UNK_10e5717b7;
      }
      else {
        lVar1 = param_1;
        func_0x00010bfed340();
        if (lVar1 == 3) {
          puVar3 = &UNK_10e5717d5;
        }
        else {
          lVar1 = param_1;
          func_0x00010bfed340();
          if ((lVar1 == 8) || (lVar1 = param_1, func_0x00010bfed340(), lVar1 == 0xc)) {
            puVar3 = &UNK_10e5717f2;
          }
          else {
            lVar1 = param_1;
            func_0x00010bfed340();
            if (lVar1 == 10) {
              puVar3 = &UNK_10e571811;
            }
            else {
              lVar1 = param_1;
              func_0x00010bfed340();
              if ((lVar1 != 9) && (func_0x00010bfed340(), param_1 != 0xd)) {
                cVar2 = '\0';
                goto LAB_10b2b2b40;
              }
              puVar3 = &UNK_10e571830;
            }
          }
        }
      }
    }
  }
  cVar2 = puVar3[param_3];
LAB_10b2b2b40:
  return (int)cVar2;
}



/* Entry: 10b2b2c20; end: 10b2b2cab; -[SCFriendsTableIndex getTitleForSection:] */

void FUN_10b2b2c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bfc9fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c28ed80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b2b2cac; end: 10b2b2ce7; -[SCFriendsTableIndex getSectionKeyAndTitleMapper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b2cac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126e0138;
  lVar2 = param_1;
  func_0x00010bfed340();
                    /* WARNING: Could not recover jumptable at 0x00010bfcb410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_getTitleDictWithStyle_quickAddSt_1125d06a8,lVar2,
             *(undefined8 *)(param_1 + _DAT_11278e3a4));
  return;
}



/* Entry: 10b2b2ce8; end: 10b2b2ebf; -[SCFriendsTableIndex longPress:] */

void FUN_10b2b2ce8(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  uVar6 = (undefined4)param_2;
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(lVar1);
  func_0x00010bfb68e0(param_3);
  _CGRectGetHeight();
  fVar4 = (float)((double)CONCAT44(uVar7,uVar6) / param_1);
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = fVar4;
  }
  fVar4 = 1.0;
  if (fVar5 <= 1.0) {
    fVar4 = fVar5;
  }
  uVar2 = param_3;
  func_0x00010bfeca40();
  uVar3 = param_3;
  func_0x00010bfeca40();
  if (uVar3 == (long)(fVar4 * (float)(long)uVar2)) {
    func_0x00010bfeca40(param_3);
  }
  func_0x00010bf358c0(param_3);
  uVar2 = param_3;
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1524c0();
  _objc_release(uVar2);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 1) {
    uVar2 = param_3;
    func_0x00010bf13c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    func_0x00010c1fadc0(param_3);
  }
  lVar1 = param_5;
  func_0x00010c252440();
  if ((lVar1 == 3) || (lVar1 = param_5, func_0x00010c252440(), lVar1 == 4)) {
    uVar2 = param_3;
    func_0x00010bf13c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = param_3;
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c267ea0();
      _objc_release(uVar2);
    }
    func_0x00010c1fadc0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b2b2ec0; end: 10b2b2fbf; -[SCFriendsTableIndex layoutSubviews] */

void FUN_10b2b2ec0(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_112706290;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfb68e0(param_5);
  param_3 = param_3 + -7.5;
  func_0x00010bfb68e0(param_5);
  uVar1 = param_5;
  func_0x00010bf13c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(0x4018000000000000,0,param_3,param_4);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf13c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf13c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_3 * 0.25);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b2b2fc0; end: 10b2b3253; -[SCFriendsTableIndex drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b2fc0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **ppuVar13;
  double dVar14;
  double in_d3;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = PTR_PTR_112706290;
  lStack_c8 = param_1;
  _objc_msgSendSuper2(&lStack_c8,PTR_s_drawRect__1125271c8);
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_alloc_init();
  func_0x00010c166c00();
  uStack_b8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1eda0(0x4026000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_a0 = puVar2;
  if (*(char *)(param_1 + _DAT_11278e39c) == '\x01') {
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c14c420();
    _objc_retainAutoreleasedReturnValue();
  }
  uStack_a8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  ppuVar9 = &puStack_a0;
  puVar10 = &uStack_b8;
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_98 = puVar3;
  puStack_90 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar12 = param_1;
  func_0x00010bfeca40();
  if (0 < lVar12) {
    ppuVar13 = (undefined **)0x0;
    do {
      func_0x00010bfb68e0(param_1);
      dVar14 = in_d3 + -10.0;
      lVar12 = param_1;
      func_0x00010bfeca40(param_1);
      uVar5 = *(ulong *)(param_1 + _DAT_11278e3a0);
      ppuVar9 = ppuVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar2);
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar5);
        func_0x00010c23d0a0(uVar5);
        in_d3 = 0.0;
        _AVMakeRectWithAspectRatioInsideRect();
        func_0x00010bf89920(uVar5);
        _objc_release(uVar5);
      }
      else {
        in_d3 = 14.0;
        ppuVar9 = ppuVar4;
        func_0x00010bf89960(0x401c000000000000,
                            (((double)((ulong)ppuVar13 & 0xffffffff) + 0.5) * dVar14) /
                            (double)lVar12 + 5.0 + -7.0,0x4026000000000000,uVar5);
      }
      _objc_release(uVar5);
      ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      lVar12 = param_1;
      func_0x00010bfeca40();
    } while ((long)ppuVar13 < lVar12);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar9;
  _objc_retain(puVar10);
  if ((long)ppuVar9 < 9) {
    if (ppuVar9 == (undefined **)0x2) {
      puVar1 = puRam00000001137f48d8;
      if (puRam00000001137f48d8 == (undefined *)0x0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        _objc_release(ppuVar9);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar4 = ppuVar13;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puRam00000001137f48d8;
        puRam00000001137f48d8 = puVar2;
        _objc_release(puVar1);
        _objc_release(ppuVar13);
        puVar1 = puRam00000001137f48d8;
      }
      goto LAB_10b2b44b8;
    }
    if (ppuVar9 == (undefined **)0x3) {
      puVar1 = puRam00000001137f48e0;
      if (puRam00000001137f48e0 == (undefined *)0x0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar4 = ppuVar13;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puRam00000001137f48e0;
        puRam00000001137f48e0 = puVar2;
        _objc_release(puVar1);
        _objc_release(ppuVar13);
        puVar1 = puRam00000001137f48e0;
      }
      goto LAB_10b2b44b8;
    }
    if (ppuVar9 == (undefined **)0x8) {
      puVar1 = puRam00000001137f48e8;
      if (puRam00000001137f48e8 == (undefined *)0x0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = &PTR____CFConstantStringClassReference_110f627d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar13);
        _objc_release(ppuVar4);
        _objc_release(ppuVar9);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar4 = ppuVar7;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puRam00000001137f48e8;
        puRam00000001137f48e8 = puVar2;
        _objc_release(puVar1);
        _objc_release(ppuVar7);
        puVar1 = puRam00000001137f48e8;
      }
      goto LAB_10b2b44b8;
    }
  }
  else if ((long)ppuVar9 < 0xc) {
    if (ppuVar9 == (undefined **)0x9) {
      puVar1 = puRam00000001137f4900;
      if (puRam00000001137f4900 == (undefined *)0x0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = &PTR____CFConstantStringClassReference_110f627d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = &PTR____CFConstantStringClassReference_110ded218;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded218,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        _objc_release(ppuVar13);
        _objc_release(ppuVar4);
        _objc_release(ppuVar9);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar4 = ppuVar8;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puRam00000001137f4900;
        puRam00000001137f4900 = puVar2;
        _objc_release(puVar1);
        _objc_release(ppuVar8);
        puVar1 = puRam00000001137f4900;
      }
      goto LAB_10b2b44b8;
    }
    if (ppuVar9 == (undefined **)0xa) {
      puVar1 = puRam00000001137f48f8;
      if (puRam00000001137f48f8 == (undefined *)0x0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = &PTR____CFConstantStringClassReference_110ded218;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded218,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar13);
        _objc_release(ppuVar4);
        _objc_release(ppuVar9);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar4 = ppuVar7;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puRam00000001137f48f8;
        puRam00000001137f48f8 = puVar2;
        _objc_release(puVar1);
        _objc_release(ppuVar7);
        puVar1 = puRam00000001137f48f8;
      }
      goto LAB_10b2b44b8;
    }
  }
  else {
    if (ppuVar9 == (undefined **)0xc) {
      puVar1 = puRam00000001137f48f0;
      if (puRam00000001137f48f0 == (undefined *)0x0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar13);
        _objc_release(ppuVar4);
        _objc_release(ppuVar9);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar4 = ppuVar7;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puRam00000001137f48f0;
        puRam00000001137f48f0 = puVar2;
        _objc_release(puVar1);
        _objc_release(ppuVar7);
        puVar1 = puRam00000001137f48f0;
      }
      goto LAB_10b2b44b8;
    }
    if (ppuVar9 == (undefined **)0xd) {
      puVar1 = puRam00000001137f4908;
      if (puRam00000001137f4908 == (undefined *)0x0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = &PTR____CFConstantStringClassReference_110ded218;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded218,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        _objc_release(ppuVar13);
        _objc_release(ppuVar4);
        _objc_release(ppuVar9);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar4 = ppuVar8;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puRam00000001137f4908;
        puRam00000001137f4908 = puVar2;
        _objc_release(puVar1);
        _objc_release(ppuVar8);
        puVar1 = puRam00000001137f4908;
      }
      goto LAB_10b2b44b8;
    }
  }
  if (((ulong)ppuVar9 & 0xfffffffffffffffe) == 4) {
    puVar1 = puRam00000001137f4910;
    if (puRam00000001137f4910 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR____CFConstantStringClassReference_110f627f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627f8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar9;
      func_0x00010b2d0ba4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar4;
      func_0x00010b2d0bbc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar13;
      func_0x00010b2d0bd4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_release(ppuVar13);
      _objc_release(ppuVar4);
      _objc_release(ppuVar9);
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuVar4 = ppuVar8;
      func_0x00010bf72060();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puRam00000001137f4910;
      puRam00000001137f4910 = puVar3;
      _objc_release(puVar1);
      _objc_release(ppuVar8);
      _objc_release(puVar2);
      puVar1 = puRam00000001137f4910;
    }
  }
  else if (ppuVar9 == (undefined **)0x6) {
    puVar1 = puRam00000001137f4918;
    if (puRam00000001137f4918 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR____CFConstantStringClassReference_110f627f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627f8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar9;
      func_0x00010b2d0ba4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar4;
      func_0x00010b2d0bbc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar13;
      func_0x00010b2d0bd4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_release(ppuVar13);
      _objc_release(ppuVar4);
      _objc_release(ppuVar9);
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuVar4 = ppuVar8;
      func_0x00010bf72060();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puRam00000001137f4918;
      puRam00000001137f4918 = puVar3;
      _objc_release(puVar1);
      _objc_release(ppuVar8);
      _objc_release(puVar2);
      puVar1 = puRam00000001137f4918;
    }
  }
  else {
    puVar1 = puRam00000001137f4920;
    if (puRam00000001137f4920 == (undefined *)0x0) {
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111183cc8;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72060();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puRam00000001137f4920;
      puRam00000001137f4920 = puVar2;
      _objc_release(puVar1);
      puVar1 = puRam00000001137f4920;
    }
  }
LAB_10b2b44b8:
  _objc_retain(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  uVar11 = *(undefined8 *)((long)puVar10 + (long)_DAT_11278e3a4);
  *(undefined ***)((long)puVar10 + (long)_DAT_11278e3a4) = ppuVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 10b2b3254; end: 10b2b4507; +[SCFriendsTableIndex getTitleDictWithStyle:quickAddString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b3254(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_3;
  _objc_retain(param_4);
  if ((long)param_3 < 9) {
    if (param_3 == (undefined **)0x2) {
      puVar10 = puRam00000001137f48d8;
      if (puRam00000001137f48d8 == (undefined *)0x0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar3 = ppuVar5;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puRam00000001137f48d8;
        puRam00000001137f48d8 = puVar6;
        _objc_release(puVar10);
        _objc_release(ppuVar5);
        puVar10 = puRam00000001137f48d8;
      }
      goto LAB_10b2b44b8;
    }
    if (param_3 == (undefined **)0x3) {
      puVar10 = puRam00000001137f48e0;
      if (puRam00000001137f48e0 == (undefined *)0x0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar3 = ppuVar4;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puRam00000001137f48e0;
        puRam00000001137f48e0 = puVar6;
        _objc_release(puVar10);
        _objc_release(ppuVar4);
        puVar10 = puRam00000001137f48e0;
      }
      goto LAB_10b2b44b8;
    }
    if (param_3 == (undefined **)0x8) {
      puVar10 = puRam00000001137f48e8;
      if (puRam00000001137f48e8 == (undefined *)0x0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR____CFConstantStringClassReference_110f627d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar3 = ppuVar1;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puRam00000001137f48e8;
        puRam00000001137f48e8 = puVar6;
        _objc_release(puVar10);
        _objc_release(ppuVar1);
        puVar10 = puRam00000001137f48e8;
      }
      goto LAB_10b2b44b8;
    }
  }
  else if ((long)param_3 < 0xc) {
    if (param_3 == (undefined **)0x9) {
      puVar10 = puRam00000001137f4900;
      if (puRam00000001137f4900 == (undefined *)0x0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR____CFConstantStringClassReference_110f627d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = &PTR____CFConstantStringClassReference_110ded218;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded218,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar3 = ppuVar2;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puRam00000001137f4900;
        puRam00000001137f4900 = puVar6;
        _objc_release(puVar10);
        _objc_release(ppuVar2);
        puVar10 = puRam00000001137f4900;
      }
      goto LAB_10b2b44b8;
    }
    if (param_3 == (undefined **)0xa) {
      puVar10 = puRam00000001137f48f8;
      if (puRam00000001137f48f8 == (undefined *)0x0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR____CFConstantStringClassReference_110ded218;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded218,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar3 = ppuVar1;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puRam00000001137f48f8;
        puRam00000001137f48f8 = puVar6;
        _objc_release(puVar10);
        _objc_release(ppuVar1);
        puVar10 = puRam00000001137f48f8;
      }
      goto LAB_10b2b44b8;
    }
  }
  else {
    if (param_3 == (undefined **)0xc) {
      puVar10 = puRam00000001137f48f0;
      if (puRam00000001137f48f0 == (undefined *)0x0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar3 = ppuVar1;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puRam00000001137f48f0;
        puRam00000001137f48f0 = puVar6;
        _objc_release(puVar10);
        _objc_release(ppuVar1);
        puVar10 = puRam00000001137f48f0;
      }
      goto LAB_10b2b44b8;
    }
    if (param_3 == (undefined **)0xd) {
      puVar10 = puRam00000001137f4908;
      if (puRam00000001137f4908 == (undefined *)0x0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e1e8b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e8b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110f627d8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627d8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = &PTR____CFConstantStringClassReference_110f627b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627b8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = &PTR____CFConstantStringClassReference_110ded218;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ded218,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuVar3 = ppuVar2;
        func_0x00010bf72060();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puRam00000001137f4908;
        puRam00000001137f4908 = puVar6;
        _objc_release(puVar10);
        _objc_release(ppuVar2);
        puVar10 = puRam00000001137f4908;
      }
      goto LAB_10b2b44b8;
    }
  }
  if (((ulong)param_3 & 0xfffffffffffffffe) == 4) {
    puVar10 = puRam00000001137f4910;
    if (puRam00000001137f4910 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110f627f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627f8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010b2d0ba4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010b2d0bbc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar5;
      func_0x00010b2d0bd4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuVar3 = ppuVar2;
      func_0x00010bf72060();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puRam00000001137f4910;
      puRam00000001137f4910 = puVar7;
      _objc_release(puVar10);
      _objc_release(ppuVar2);
      _objc_release(puVar6);
      puVar10 = puRam00000001137f4910;
    }
  }
  else if (param_3 == (undefined **)0x6) {
    puVar10 = puRam00000001137f4918;
    if (puRam00000001137f4918 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110f627f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f627f8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010b2d0ba4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010b2d0bbc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar5;
      func_0x00010b2d0bd4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuVar3 = ppuVar2;
      func_0x00010bf72060();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puRam00000001137f4918;
      puRam00000001137f4918 = puVar7;
      _objc_release(puVar10);
      _objc_release(ppuVar2);
      _objc_release(puVar6);
      puVar10 = puRam00000001137f4918;
    }
  }
  else {
    puVar10 = puRam00000001137f4920;
    if (puRam00000001137f4920 == (undefined *)0x0) {
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111183cc8;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72060();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puRam00000001137f4920;
      puRam00000001137f4920 = puVar6;
      _objc_release(puVar10);
      puVar10 = puRam00000001137f4920;
    }
  }
LAB_10b2b44b8:
  _objc_retain(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar3);
  uVar8 = *(undefined8 *)(param_4 + _DAT_11278e3a4);
  *(undefined ***)(param_4 + _DAT_11278e3a4) = ppuVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 10b2b4508; end: 10b2b453f; -[SCFriendsTableIndex setQuickAddString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b4508(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e3a4);
  *(undefined8 *)(param_1 + _DAT_11278e3a4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b4540; end: 10b2b454f; -[SCFriendsTableIndex background] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b4540(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e398);
}



/* Entry: 10b2b4550; end: 10b2b458f; -[SCFriendsTableIndex setBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b4550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e398;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b4590; end: 10b2b45af; -[SCFriendsTableIndex delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b4590(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278e3a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2b45b0; end: 10b2b45c3; -[SCFriendsTableIndex setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b45b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278e3a8,param_3);
  return;
}



/* Entry: 10b2b45c4; end: 10b2b45d3; -[SCFriendsTableIndex longPressGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b45c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3ac);
}



/* Entry: 10b2b45d4; end: 10b2b4613; -[SCFriendsTableIndex setLongPressGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b45d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e3ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b4614; end: 10b2b4623; -[SCFriendsTableIndex panGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b4614(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3b0);
}



/* Entry: 10b2b4624; end: 10b2b4663; -[SCFriendsTableIndex setPanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b4624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e3b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b4664; end: 10b2b4673; -[SCFriendsTableIndex setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b4664(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e390) = param_3;
  return;
}



/* Entry: 10b2b4674; end: 10b2b4683; -[SCFriendsTableIndex indexStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b4674(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e394);
}



/* Entry: 10b2b4684; end: 10b2b4693; -[SCFriendsTableIndex setIndexStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b4684(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278e394) = param_3;
  return;
}



/* Entry: 10b2b4694; end: 10b2b470f; -[SCFriendsTableIndex .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b4694(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e3b0,0);
  _objc_storeStrong(param_1 + _DAT_11278e3ac,0);
  _objc_destroyWeak(param_1 + _DAT_11278e3a8);
  _objc_storeStrong(param_1 + _DAT_11278e398,0);
  _objc_storeStrong(param_1 + _DAT_11278e3a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e3a0,0);
  return;
}



/* Entry: 10b2b4710; end: 10b2b48eb; -[SCGradientView getSliderValue:] */

double FUN_10b2b4710(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uStack_d4;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010bfcd9c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar9 = (ulong)param_4;
  _objc_release(uVar1);
  _CGColorSpaceCreateDeviceRGB();
  lVar2 = 0;
  _CGBitmapContextCreate(0,1,uVar9,8,4,uVar1,1);
  func_0x00010bfcd9c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fc60();
  _objc_release(param_5);
  lVar3 = lVar2;
  _CGBitmapContextGetData();
  _CGColorSpaceRelease(uVar1);
  func_0x00010bfc9760(param_7);
  if (uVar9 == 0) {
    dVar11 = 0.0;
    dStack_78 = param_1;
    dStack_70 = param_2;
    dStack_68 = param_3;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    pbVar8 = (byte *)(lVar3 + 2);
    param_4 = 100.0;
    do {
      dVar11 = (double)NEON_ucvtf((ulong)pbVar8[-2]);
      dVar12 = (double)NEON_ucvtf((ulong)pbVar8[-1]);
      dVar13 = (double)NEON_ucvtf((ulong)*pbVar8);
      dVar11 = ABS(dVar11 / 255.0 - dStack_78) + ABS(dVar12 / 255.0 - dStack_70) +
               ABS(dVar13 / 255.0 - dStack_68);
      if ((dVar11 < param_4) && (uVar6 = uVar7, param_4 = dVar11, dVar11 < 0.011764705882352941))
      break;
      pbVar8 = pbVar8 + 4;
      uVar7 = uVar7 + 1;
    } while (uVar9 != uVar7);
    dVar11 = (double)uVar6;
  }
  _CGContextRelease(lVar2);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return 1.0 - dVar11 / (double)uVar9;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00();
  if (dStack_68 + -1.0 <= dStack_78) {
    dStack_78 = dStack_68 + -1.0;
  }
  uVar1 = param_7;
  func_0x00010bf20c00(param_7);
  if (param_4 + -1.0 <= dStack_70) {
    dStack_70 = param_4 + -1.0;
  }
  uStack_d4 = 0;
  _CGColorSpaceCreateDeviceRGB();
  puVar4 = &uStack_d4;
  _CGBitmapContextCreate(puVar4,1,1,8,4,uVar1,1);
  dVar11 = -0.0;
  if (0.0 <= dStack_78) {
    dVar11 = -dStack_78;
  }
  dVar12 = -0.0;
  if (0.0 <= dStack_70) {
    dVar12 = -dStack_70;
  }
  _CGContextTranslateCTM(dVar11,dVar12);
  func_0x00010bfcd9c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fc60();
  _objc_release(param_7);
  _CGContextRelease(puVar4);
  _CGColorSpaceRelease(uVar1);
  dVar11 = (double)NEON_ucvtf((ulong)(byte)uStack_d4);
  dVar11 = dVar11 / 255.0;
  dVar12 = (double)NEON_ucvtf((ulong)uStack_d4._1_1_);
  dVar13 = (double)NEON_ucvtf((ulong)uStack_d4._2_1_);
  dVar10 = (double)NEON_ucvtf((ulong)uStack_d4._3_1_);
  func_0x00010bf41620(dVar11,dVar12 / 255.0,dVar13 / 255.0,dVar10 / 255.0,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return dVar11;
}



/* Entry: 10b2b48ec; end: 10b2b4a2b; -[SCGradientView getColorAtPoint:] */

void FUN_10b2b48ec(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uStack_54;
  
  func_0x00010bf20c00();
  if (param_3 + -1.0 <= param_1) {
    param_1 = param_3 + -1.0;
  }
  uVar1 = param_5;
  func_0x00010bf20c00(param_5);
  if (param_4 + -1.0 <= param_2) {
    param_2 = param_4 + -1.0;
  }
  uStack_54 = 0;
  _CGColorSpaceCreateDeviceRGB();
  puVar2 = &uStack_54;
  _CGBitmapContextCreate(puVar2,1,1,8,4,uVar1,1);
  dVar3 = -0.0;
  if (0.0 <= param_1) {
    dVar3 = -param_1;
  }
  dVar4 = -0.0;
  if (0.0 <= param_2) {
    dVar4 = -param_2;
  }
  _CGContextTranslateCTM(dVar3,dVar4);
  func_0x00010bfcd9c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fc60();
  _objc_release(param_5);
  _CGContextRelease(puVar2);
  _CGColorSpaceRelease(uVar1);
  dVar3 = (double)NEON_ucvtf((ulong)(byte)uStack_54);
  dVar4 = (double)NEON_ucvtf((ulong)uStack_54._1_1_);
  dVar5 = (double)NEON_ucvtf((ulong)uStack_54._2_1_);
  dVar6 = (double)NEON_ucvtf((ulong)uStack_54._3_1_);
  func_0x00010bf41620(dVar3 / 255.0,dVar4 / 255.0,dVar5 / 255.0,dVar6 / 255.0,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2b4a2c; end: 10b2b4a3b; -[SCGradientView colors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b4a2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3b4);
}



/* Entry: 10b2b4a3c; end: 10b2b4a4f; -[SCGradientView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b4a3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e3b4,0);
  return;
}



/* Entry: 10b2b4a50; end: 10b2b4abb; -[SCHeader initWithFrame:] */

void FUN_10b2b4a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
                    /* WARNING: Could not recover jumptable at 0x00010c014f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,uVar1,param_5,
             PTR_s_initWithFrame_style_withBottomBo_1125e2da8,0,0,0);
  return;
}



/* Entry: 10b2b4abc; end: 10b2b4cbf; -[SCHeader initWithFrame:style:withBottomBorder:inset:cardViewStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10b2b4abc(undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 in_d4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112706298;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e3c0) = param_5;
    *(long *)((long)puVar1 + (long)_DAT_11278e3c4) = param_3;
    if (param_3 < 2) {
      if (param_3 == 0) {
        func_0x00010beacf20(puVar1);
      }
      else if (param_3 == 1) {
        func_0x00010beb0680(puVar1);
      }
    }
    else if (param_3 == 2) {
      func_0x00010beaf920(puVar1);
    }
    else if (param_3 == 3) {
      func_0x00010beb0700(puVar1);
    }
    uVar5 = *(undefined8 *)PTR__CGSizeZero_110347620;
    ((undefined8 *)((long)puVar1 + (long)_DAT_11278e3c8))[1] =
         *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e3c8) = uVar5;
    func_0x00010bead7e0(puVar1);
    func_0x00010beaf7a0(puVar1);
    if (param_4 != 0) {
      func_0x00010beab1a0(puVar1);
    }
    puVar2 = (undefined *)puVar1;
    func_0x00010beb24e0();
    if ((int)puVar2 == 0) {
      puVar2 = (undefined *)puVar1;
      func_0x00010bf643e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf13da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar4 = (undefined *)puVar1;
      func_0x00010c22a660(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bc00();
      _objc_release(puVar4);
    }
    else {
      func_0x00010beab6e0(puVar1);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar3 = (undefined *)puVar1;
      func_0x00010c22a660(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bc00();
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e3cc) = in_d4;
    func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e3d0) = uVar5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278e3d4) = 0;
  }
  return (undefined *)puVar1;
}



/* Entry: 10b2b4cc0; end: 10b2b4ccb; +[SCHeader layerClass] */

void FUN_10b2b4cc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 10b2b4ccc; end: 10b2b4cd3; -[SCHeader initWithStyle:withBottomBorder:] */

void FUN_10b2b4ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04ed50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithStyle_withBottomBorder_c_1125f1558,param_3,param_4,0);
  return;
}



/* Entry: 10b2b4cd4; end: 10b2b4d77; -[SCHeader initWithStyle:withBottomBorder:cardViewStyle:] */

void FUN_10b2b4cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  uVar2 = param_1;
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar3 = uVar2;
  _objc_release(puVar1);
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
                    /* WARNING: Could not recover jumptable at 0x00010c014f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,uVar2,uVar3,param_2,PTR_s_initWithFrame_style_withBottomBo_1125e2da8,
             param_4,param_5,param_6);
  return;
}



/* Entry: 10b2b4d78; end: 10b2b4d83; -[SCHeader initWithBottomBorder] */

void FUN_10b2b4d78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04ed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithStyle_withBottomBorder__1125f1550,0,1);
  return;
}



/* Entry: 10b2b4d84; end: 10b2b4d8b; -[SCHeader initWithBottomBorderAndWhiteCardViewForX] */

void FUN_10b2b4d84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff93f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithBottomBorderAndWhiteCard_1125dbec0,0)
  ;
  return;
}



/* Entry: 10b2b4d8c; end: 10b2b4d97; -[SCHeader initWithBottomBorderAndWhiteCardViewForXWithStyle:] */

void FUN_10b2b4d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04ed50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithStyle_withBottomBorder_c_1125f1558,param_3,1,1);
  return;
}



/* Entry: 10b2b4d98; end: 10b2b4da3; -[SCHeader initWithoutBottomBorder] */

void FUN_10b2b4d98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04ed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithStyle_withBottomBorder__1125f1550,0,0);
  return;
}



/* Entry: 10b2b4da4; end: 10b2b4dcf; -[SCHeader initWithBottomBorderAndWhiteCardViewForXWithHeaderCardCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b4da4(undefined8 param_1,long param_2)

{
  func_0x00010bff93c0();
  *(undefined8 *)(param_2 + _DAT_11278e3d8) = param_1;
  return;
}



/* Entry: 10b2b4dd0; end: 10b2b4e6b; -[SCHeader initWithoutInset] */

undefined8 FUN_10b2b4dd0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar2 = param_1;
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar3 = dVar2;
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x00010c014f40(0,0,param_1,dVar2 - dVar3,0,param_2,param_3,0,0,0);
  _objc_release(puVar1);
  return param_2;
}



/* Entry: 10b2b4e6c; end: 10b2b4ecf; -[SCHeader intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b2b4e6c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11278e3d0);
  _objc_release(puVar1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b2b4ed0; end: 10b2b5227; -[SCHeader layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b4ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_112706298;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_5);
  func_0x00010bf52660(param_5);
  func_0x00010bf199e0(param_1,param_2,param_3,param_4,0x4018000000000000,0x4018000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar3 = param_5;
  func_0x00010c22a660(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar3 = param_5;
  func_0x00010beb24e0();
  if ((int)uVar3 != 0) {
    dVar6 = *(double *)(param_5 + (long)_DAT_11278e3d8);
    dVar7 = dVar6;
    if (dVar6 == 0.0) {
      dVar7 = 22.0;
    }
    func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar8 = dVar6;
    func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    dVar6 = dVar6 - dVar8;
    func_0x00010bf20c00(param_5);
    _CGRectGetMinX();
    dVar9 = dVar8;
    func_0x00010bf20c00(param_5);
    _CGRectGetMaxY();
    dVar10 = dVar9 - dVar6;
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    func_0x00010bf52660(param_5);
    func_0x00010bf199e0(dVar8,dVar10,dVar9,dVar6,dVar7,dVar7,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar4 = *(undefined8 *)(param_5 + (long)_DAT_11278e3dc);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  lVar1 = (long)_DAT_11278e3cc;
  dVar7 = *(double *)(param_5 + (long)_DAT_11278e3d0);
  dVar9 = *(double *)(param_5 + lVar1);
  dVar8 = dVar7 - dVar9;
  func_0x00010c08e560(param_5);
  uVar3 = param_5;
  func_0x00010c08e4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = 0.0;
  func_0x00010c19f0e0(0,dVar9,dVar7,dVar8);
  _objc_release(uVar3);
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxX();
  dVar7 = dVar6;
  func_0x00010c1409c0(param_5);
  dVar6 = dVar6 - dVar7;
  uVar3 = param_5;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar5 & 1) != 0) {
    uVar3 = param_5;
    func_0x00010bf643e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befd560();
    dVar6 = dVar6 - dVar7;
    _objc_release(uVar3);
  }
  uVar4 = *(undefined8 *)(param_5 + lVar1);
  func_0x00010c1409c0(param_5);
  uVar3 = param_5;
  func_0x00010c140900(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar6,uVar4,dVar7,dVar8);
  _objc_release(uVar3);
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxX();
  func_0x00010c19f0e0(dVar6 + -44.0,*(undefined8 *)(param_5 + lVar1),0x4046000000000000,dVar8,
                      *(undefined8 *)(param_5 + (long)_DAT_11278e3e0));
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + (long)_DAT_11278e3e4));
  func_0x00010be49240(param_5);
  if (*(long *)(param_5 + (long)_DAT_11278e3c4) == 3) {
    func_0x00010be49220(param_5);
  }
  return;
}



/* Entry: 10b2b5228; end: 10b2b533f; -[SCHeader traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b5228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_48 = PTR_PTR_112706298;
  lStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar1,param_3);
  lVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd64c0();
  _objc_release(param_3);
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = param_1;
    func_0x00010beb24e0();
    lVar3 = param_1;
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf13da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    if ((int)lVar2 != 0) {
      param_1 = *(long *)(param_1 + _DAT_11278e3dc);
    }
    func_0x00010c22a660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 10b2b5340; end: 10b2b5487; -[SCHeader _layoutHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b5340(double param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = (long)_DAT_11278e3cc;
  dVar6 = *(double *)(param_2 + _DAT_11278e3d0);
  dVar7 = *(double *)(param_2 + lVar1);
  lVar4 = (long)_DAT_11278e3e8;
  uVar2 = param_2 + lVar4;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    dVar6 = dVar6 - dVar7;
  }
  else {
    lVar4 = param_2 + lVar4;
    _objc_loadWeakRetained(lVar4);
    dVar6 = 0.0;
    func_0x00010bfe07a0(0);
    param_1 = dVar6;
    _objc_release(lVar4);
  }
  func_0x00010be34c40(param_2);
  lVar4 = (long)_DAT_11278e3ec;
  dVar5 = 0.0;
  func_0x00010c1739e0(0,0,param_1,dVar6,*(undefined8 *)(param_2 + lVar4));
  func_0x00010bf20c00(param_2);
  dVar7 = param_1;
  func_0x00010c1409c0(param_2);
  dVar6 = dVar5;
  func_0x00010c08e560(param_2);
  if (*(char *)(param_2 + _DAT_11278e3d4) == '\x01') {
    func_0x00010bf20c00(param_2);
  }
  else {
    dVar7 = dVar6 + (param_1 - dVar5);
  }
  dVar6 = 0.5;
  func_0x00010befd540(param_2);
  dVar7 = dVar7 * 0.5 + dVar6;
  dVar5 = *(double *)(param_2 + lVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar4));
  _CGRectGetMidY();
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(float)(int)dVar7,dVar5 + dVar6,*(undefined8 *)(param_2 + lVar4),
             PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 10b2b5488; end: 10b2b564f; -[SCHeader _textSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10b2b5488(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
             undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  dVar5 = *(double *)(param_5 + _DAT_11278e3d0);
  dVar6 = *(double *)(param_5 + _DAT_11278e3cc);
  dVar7 = dVar5 - dVar6;
  lVar3 = *(long *)(param_5 + _DAT_11278e3c4);
  if (lVar3 < 2) {
    iVar1 = _DAT_11278e3f0;
    if (lVar3 == 0) {
LAB_10b2b55c8:
      lVar3 = *(long *)(param_5 + iVar1);
      func_0x00010c26b700(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be18580(param_5);
      _objc_retainAutoreleasedReturnValue();
      dVar5 = 1.79769313486232e+308;
      func_0x00010c14dd00(0x7fefffffffffffff,dVar7,lVar3,param_6,param_5);
    }
    else {
      if (lVar3 != 1) {
LAB_10b2b55a4:
        dVar5 = *(double *)PTR__CGSizeZero_110347620;
        dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
        goto LAB_10b2b5620;
      }
      lVar4 = (long)_DAT_11278e3f4;
      lVar3 = *(long *)(param_5 + lVar4);
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        func_0x00010bdd7ec0(param_5);
        goto LAB_10b2b561c;
      }
      lVar2 = *(long *)(param_5 + lVar4);
      func_0x00010c26b700(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be18580(param_5);
      _objc_retainAutoreleasedReturnValue();
      dVar5 = 1.79769313486232e+308;
      func_0x00010c14dd00(0x7fefffffffffffff,dVar7,lVar2,param_6,param_5);
      _objc_release(param_5);
      param_5 = lVar2;
    }
    _objc_release(param_5);
    dVar6 = dVar7;
  }
  else {
    iVar1 = _DAT_11278e3f8;
    if (lVar3 == 2) goto LAB_10b2b55c8;
    if (lVar3 != 3) goto LAB_10b2b55a4;
    lVar3 = *(long *)(param_5 + _DAT_11278e3fc);
    func_0x00010bf0e540(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20bc0(0x7fefffffffffffff,dVar7);
    dVar5 = param_3;
    dVar6 = param_4;
  }
LAB_10b2b561c:
  _objc_release(lVar3);
LAB_10b2b5620:
  auVar8._8_8_ = dVar6;
  auVar8._0_8_ = dVar5;
  return auVar8;
}



/* Entry: 10b2b5650; end: 10b2b56ef; -[SCHeader _cachedAttributedPlaceholderSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b2b5650(long param_1)

{
  double *pdVar1;
  bool bVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  pdVar1 = (double *)(param_1 + _DAT_11278e3c8);
  dVar4 = *pdVar1;
  dVar5 = pdVar1[1];
  dVar6 = *(double *)PTR__CGSizeZero_110347620;
  dVar7 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  bVar2 = false;
  if ((dVar4 == dVar6) && (bVar2 = false, !NAN(dVar5) && !NAN(dVar7))) {
    bVar2 = dVar5 == dVar7;
  }
  if (bVar2) {
    dVar4 = *(double *)(param_1 + _DAT_11278e3d0);
    dVar5 = *(double *)(param_1 + _DAT_11278e3cc);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11278e3f4);
    func_0x00010bf0e160(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20bc0(0x7fefffffffffffff,dVar4 - dVar5);
    *pdVar1 = dVar6;
    pdVar1[1] = dVar7;
    _objc_release(uVar3);
    dVar4 = *pdVar1;
    dVar5 = pdVar1[1];
  }
  auVar8._8_8_ = dVar5;
  auVar8._0_8_ = dVar4;
  return auVar8;
}



/* Entry: 10b2b56f0; end: 10b2b573b; -[SCHeader _font] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b56f0(long param_1)

{
  if (*(ulong *)(param_1 + _DAT_11278e3c4) < 4) {
    func_0x00010bfb3a80(*(undefined8 *)
                         (param_1 +
                         *(int *)(&PTR_DAT_110cd1640)[*(ulong *)(param_1 + _DAT_11278e3c4)]));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2b573c; end: 10b2b5853; -[SCHeader _headerContentViewWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b2b573c(double param_1,undefined8 param_2,double param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  func_0x00010bf20c00();
  func_0x00010c1409c0(param_4);
  param_3 = param_3 - param_1;
  func_0x00010c08e560(param_4);
  param_3 = param_3 - param_1;
  lVar5 = (long)_DAT_11278e3e8;
  uVar1 = param_4 + lVar5;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar5 = param_4 + lVar5;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bfdf400();
    param_3 = param_3 - param_1;
    _objc_release(lVar5);
  }
  lVar4 = (long)_DAT_11278e3f0;
  lVar5 = *(long *)(param_4 + lVar4);
  dVar6 = param_3;
  if (lVar5 != 0) {
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_4 + lVar4);
    func_0x00010bfb3a80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    dVar6 = 1.79769313486232e+308;
    func_0x00010c14dd00(0x7fefffffffffffff,0x7fefffffffffffff,lVar5);
    dVar6 = (double)(float)(int)dVar6;
    _objc_release(uVar3);
    _objc_release(lVar5);
  }
  if (dVar6 <= param_3) {
    param_3 = dVar6;
  }
  return (double)(float)(int)param_3;
}



/* Entry: 10b2b5854; end: 10b2b58b3; -[SCHeader _setupBottomBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b5854(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d09e8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11278e3e4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c066fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_insertSubview_atIndex__1125f75f8,*(undefined8 *)(param_1 + lVar3),0);
  return;
}



/* Entry: 10b2b58b4; end: 10b2b5a5f; -[SCHeader _setupHeaderLabel] */

void FUN_10b2b58b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1a7920(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfdfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfdfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfdfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfdfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fecccccc0000000);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfdfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfdfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7b20(param_1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfdfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfdfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2b5a60; end: 10b2b5b6b; -[SCHeader _setupTextField] */

/* WARNING: Possible PIC construction at 0x00010b2b5b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2b5b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2b5b18) */
/* WARNING: Removing unreachable block (ram,0x00010b2b5b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b5a60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11278e3f4;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  lVar5 = (long)_DAT_11278e3ec;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar2);
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_addTarget_action_forControlEvent_11259c900,
             param_1,PTR_s__textFieldEditingChanged_112590700,0x20000);
  return;
}



/* Entry: 10b2b5b6c; end: 10b2b5cc3; -[SCHeader _setupTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b5b6c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126e0140;
  _objc_opt_new();
  lVar4 = (long)_DAT_11278e3fc;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar4));
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c26ba00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3c00();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c26ba00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c26ba00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdbc0(0);
  _objc_release(uVar2);
  func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  lVar5 = (long)_DAT_11278e3ec;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 10b2b5cc4; end: 10b2b5d47; -[SCHeader _setupSearchBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b5cc4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126cef38;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_11278e3f8;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  lVar4 = (long)_DAT_11278e3ec;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 10b2b5d48; end: 10b2b5e1b; -[SCHeader _setupCardView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b5d48(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b52f0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_11278e3dc;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf13da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c066fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_insertSubview_atIndex__1125f75f8,*(undefined8 *)(param_1 + lVar5),0);
  return;
}



/* Entry: 10b2b5e1c; end: 10b2b60ef; -[SCHeader _setupLeftButton] */

void FUN_10b2b5e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar4 = &puStack_60;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba1c0(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c08e4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08e4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c08e4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198080();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08e4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fecccccc0000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08e4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08e4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08e4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08e4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b2b60f0;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  uVar2 = param_1;
  func_0x00010c08e4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2f00();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08e4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(uVar2);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b2b60f0; end: 10b2b617f;  */

void FUN_10b2b60f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08e4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe7900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(lVar1,param_2,lVar3,1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2b6180; end: 10b2b642b; -[SCHeader _setupRightButton] */

void FUN_10b2b6180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar4 = &puStack_60;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee100(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c140900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c140900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c140900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198080();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c140900(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fecccccc0000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c140900(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c140900(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c140900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b2b642c;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  uVar2 = param_1;
  func_0x00010c140900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2f00();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c140900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(uVar2);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b2b642c; end: 10b2b64bb;  */

void FUN_10b2b642c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c140900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe7920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(lVar1,param_2,lVar3,1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2b64bc; end: 10b2b64f3; -[SCHeader _shouldAddCardView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b64bc(void)

{
  func_0x000107c30a70();
  return;
}



/* Entry: 10b2b64f4; end: 10b2b6603; -[SCHeader xButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b64f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11278e3e0;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5),param_2,param_1,
                        PTR_s_xButtonPressed_11268d468,0x40);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar5),param_2,4);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bea00(0x402c000000000000,0x402c000000000000,0x4004000000000000,puVar1,param_2,
                        puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar5),param_2,puVar1,0);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b2b6604; end: 10b2b6607; -[SCHeader shapeLayer] */

void FUN_10b2b6604(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 10b2b6608; end: 10b2b6617; +[SCHeader reservedWidthForTitleTrailingAccessoryCount:] */

double FUN_10b2b6608(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (double)param_3 * 20.0;
}



/* Entry: 10b2b6618; end: 10b2b66df; -[SCHeader setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b6618(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11278e3c4) == 3) {
    lVar3 = (long)_DAT_11278e3fc;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010c26cb00(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  }
  else if (*(long *)(param_1 + _DAT_11278e3c4) == 1) {
    lVar3 = (long)_DAT_11278e3f4;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c26b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,uVar1);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
      func_0x00010becb560(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2b66e0; end: 10b2b67c3; -[SCHeader text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b66e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_11278e3c4);
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if (lVar2 == 1) {
        lVar3 = (long)_DAT_11278e3f4;
        lVar1 = *(long *)(param_1 + lVar3);
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c08fa60();
        unaff_x20 = *(undefined8 *)(param_1 + lVar3);
        if (lVar2 == 0) {
          func_0x00010c0fd720(unaff_x20);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar1);
      }
      goto LAB_10b2b67b0;
    }
    lVar2 = (long)_DAT_11278e3f0;
  }
  else if (lVar2 == 2) {
    lVar2 = (long)_DAT_11278e3f8;
  }
  else {
    if (lVar2 != 3) goto LAB_10b2b67b0;
    lVar2 = (long)_DAT_11278e3fc;
  }
  unaff_x20 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c26b700(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
LAB_10b2b67b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}


