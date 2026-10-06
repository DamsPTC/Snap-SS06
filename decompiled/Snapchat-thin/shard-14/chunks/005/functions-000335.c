/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2ba620; end: 10b2ba623; -[SCLeftSwipableViewController leftSwipeSucceed] */

void FUN_10b2ba620(void)

{
  return;
}



/* Entry: 10b2ba624; end: 10b2ba62b; -[SCLeftSwipableViewController shadowEnabled] */

undefined8 FUN_10b2ba624(void)

{
  return 1;
}



/* Entry: 10b2ba62c; end: 10b2ba883; -[SCLeftSwipableViewController handlePopRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ba62c(double param_1,undefined8 param_2,double param_3,ulong param_4,undefined8 param_5
                  ,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010bf80260();
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_4, func_0x00010bfeb880(param_4,param_5,param_6), (int)uVar1 != 0)) {
    uVar1 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_6,param_5,uVar1);
    lVar5 = (long)_DAT_11278e424;
    dVar6 = *(double *)(param_4 + lVar5);
    uVar2 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    param_3 = (param_1 - dVar6) / param_3;
    _objc_release(uVar2);
    _objc_release(uVar1);
    dVar7 = 1.0;
    dVar6 = 1.0;
    if (param_3 <= 1.0) {
      dVar6 = param_3;
    }
    lVar3 = param_6;
    func_0x00010c252440();
    if (lVar3 == 1) {
      uVar1 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(param_6,param_5,uVar1);
      *(double *)(param_4 + lVar5) = param_3;
      _objc_release(uVar1);
      puVar4 = PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8;
      _objc_alloc_init(PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8);
      func_0x00010c1ae380(param_4,param_5,puVar4);
      _objc_release(puVar4);
      uVar1 = param_4;
      func_0x00010c0d66a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103a00();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x00010c08e980(param_4);
    }
    else {
      lVar5 = param_6;
      func_0x00010c252440();
      if (lVar5 == 2) {
        func_0x00010c068d60(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c286a00(dVar6);
        _objc_release(param_4);
      }
      else {
        lVar5 = param_6;
        func_0x00010c252440();
        if ((lVar5 == 3) || (lVar5 = param_6, func_0x00010c252440(), lVar5 == 4)) {
          uVar1 = param_4;
          func_0x00010c29bf00(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c297a00(param_6,param_5,uVar1);
          _objc_release(uVar1);
          uVar1 = param_4;
          func_0x00010c068d60(param_4);
          _objc_retainAutoreleasedReturnValue();
          if ((param_3 <= 0.0) || (param_3 <= ABS(dVar7))) {
            func_0x00010bf2e5a0(uVar1);
            _objc_release(uVar1);
            func_0x00010c08e940(param_4);
          }
          else {
            func_0x00010bfaf8e0(uVar1);
            _objc_release(uVar1);
            func_0x00010c08e9c0(param_4);
          }
          func_0x00010c1ae380(param_4,param_5,0);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10b2ba884; end: 10b2ba8fb; -[SCLeftSwipableViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b2ba884(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + _DAT_11278e42c);
  if (param_5 == lVar2) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(lVar2,param_4,param_3);
    _objc_release(param_3);
    bVar1 = ABS(param_2) < ABS(param_1);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b2ba8fc; end: 10b2ba903; -[SCLeftSwipableViewController shouldAutorotate] */

undefined8 FUN_10b2ba8fc(void)

{
  return 0;
}



/* Entry: 10b2ba904; end: 10b2ba90f; -[SCLeftSwipableViewController supportedInterfaceOrientations] */

undefined8 FUN_10b2ba904(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 10b2ba910; end: 10b2ba95f; -[SCLeftSwipableViewController preferredInterfaceOrientationForPresentation] */

void FUN_10b2ba910(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x000107c30aa4();
  if ((int)uVar1 != 0) {
    puStack_28 = PTR_PTR_1127062b8;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_preferredInterfaceOrientationFor_11261f540);
  }
  return;
}



/* Entry: 10b2ba960; end: 10b2ba9a7; -[SCLeftSwipableViewController navigationController:animationControllerForOperation:fromViewController:toViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ba960(void)

{
  long in_x3;
  
  if (in_x3 == 2) {
    _objc_alloc(PTR_PTR_1126e0148);
    func_0x00010c04ea80();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2ba9a8; end: 10b2ba9ab; -[SCLeftSwipableViewController navigationController:interactionControllerForAnimationController:] */

void FUN_10b2ba9a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c068d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_interactivePopTransition_1125f7d68);
  return;
}



/* Entry: 10b2ba9ac; end: 10b2ba9af; -[SCLeftSwipableViewController navigationControllerSupportedInterfaceOrientations:] */

void FUN_10b2ba9ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2631d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_supportedInterfaceOrientations_112676698);
  return;
}



/* Entry: 10b2ba9b0; end: 10b2ba9b3; -[SCLeftSwipableViewController navigationControllerPreferredInterfaceOrientationForPresentation:] */

void FUN_10b2ba9b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c106c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_preferredInterfaceOrientationFor_11261f540);
  return;
}



/* Entry: 10b2ba9b4; end: 10b2ba9c3; -[SCLeftSwipableViewController leftSwipeStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ba9b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e428);
}



/* Entry: 10b2ba9c4; end: 10b2ba9d3; -[SCLeftSwipableViewController setLeftSwipeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ba9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278e428) = param_3;
  return;
}



/* Entry: 10b2ba9d4; end: 10b2ba9e3; -[SCLeftSwipableViewController leftSwipeRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2ba9d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e42c);
}



/* Entry: 10b2ba9e4; end: 10b2baa23; -[SCLeftSwipableViewController setLeftSwipeRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ba9e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e42c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2baa24; end: 10b2baa33; -[SCLeftSwipableViewController interactivePopTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2baa24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e430);
}



/* Entry: 10b2baa34; end: 10b2baa73; -[SCLeftSwipableViewController setInteractivePopTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2baa34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e430;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2baa74; end: 10b2baab3; -[SCLeftSwipableViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2baa74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e430,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e42c,0);
  return;
}



/* Entry: 10b2baab4; end: 10b2baafb; -[SCLeftSwipeTransitionAnimator initWithStyle:] */

void FUN_10b2baab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127062c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b2baafc; end: 10b2badf7; -[SCLeftSwipeTransitionAnimator animateTransition:] */

void FUN_10b2baafc(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  
  _objc_retain(param_6);
  uVar3 = param_6;
  func_0x00010c29c220(param_6,param_5,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_6;
  func_0x00010c29c220(param_6,param_5,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar5,param_5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cda0(uVar5,param_5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar5);
  _CGAffineTransformMakeTranslation(&uStack_90,param_3,0);
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  if (*(long *)(param_4 + 8) == 1) {
    _CGAffineTransformMakeTranslation(&uStack_c0,param_3 / -3.0,0);
  }
  else if (*(long *)(param_4 + 8) == 0) {
    uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_c0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  uVar5 = uVar4;
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = *(undefined8 *)(puVar1 + 8);
  uStack_f0 = *(undefined8 *)puVar1;
  uStack_d8 = *(undefined8 *)(puVar1 + 0x18);
  uStack_e0 = *(undefined8 *)(puVar1 + 0x10);
  uStack_c8 = *(undefined8 *)(puVar1 + 0x28);
  uStack_d0 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c219960();
  _objc_release(uVar5);
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uVar5 = uVar3;
  uVar6 = uStack_a0;
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(param_4,param_5,param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_10b2badf8;
  puStack_138 = &UNK_1108e7be0;
  _objc_retain(uVar4);
  uStack_118 = uStack_88;
  uStack_120 = uStack_90;
  uStack_108 = uStack_78;
  uStack_110 = uStack_80;
  uStack_f8 = uStack_68;
  uStack_100 = uStack_70;
  uStack_130 = uVar4;
  _objc_retain(uVar3);
  puStack_188 = puVar1;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x10b2bae8c;
  puStack_170 = &UNK_1108500c8;
  uStack_168 = uVar4;
  uStack_160 = uVar3;
  uStack_158 = param_6;
  uStack_128 = uVar3;
  _objc_retain(param_6);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  func_0x00010bf03440(uVar6,0,puVar2,param_5,0x30000,&puStack_150,&puStack_188);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}



/* Entry: 10b2badf8; end: 10b2baf3f;  */

void FUN_10b2badf8(long param_1)

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
  return;
}



/* Entry: 10b2baf40; end: 10b2baf4b; -[SCLeftSwipeTransitionAnimator transitionDuration:] */

undefined8 FUN_10b2baf40(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 10b2baf4c; end: 10b2bafb7; -[SCMarkDownParser initWithMarkDownString:] */

undefined1 * FUN_10b2baf4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127062c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c0f4800(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2bafb8; end: 10b2bb073; -[SCMarkDownParser typeOfString:] */

undefined8 FUN_10b2bafb8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f62898);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc4678);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e99cb8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc0578);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e57298);
          uVar2 = 6;
          if ((int)uVar1 == 0) {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 5;
        }
      }
      else {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 9;
    }
  }
  else {
    uVar2 = 8;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b2bb074; end: 10b2bb097; -[SCMarkDownParser reverseTypeOpen:] */

undefined8 FUN_10b2bb074(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 4U < 5) {
    return *(undefined8 *)(&UNK_10e571850 + (param_3 - 4U) * 8);
  }
  return 0;
}



/* Entry: 10b2bb098; end: 10b2bb0bb; -[SCMarkDownParser assignType:] */

undefined8 FUN_10b2bb098(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 5U < 5) {
    return *(undefined8 *)(&UNK_10e571878 + (param_3 - 5U) * 8);
  }
  return 0;
}



/* Entry: 10b2bb0bc; end: 10b2bb0db; -[SCMarkDownParser typeToString:] */

undefined * FUN_10b2bb0bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 10) {
    return (&PTR_PTR_110cd1660)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 10b2bb0dc; end: 10b2bb15f; -[SCMarkDownParser stringToType:] */

undefined8 FUN_10b2bb0dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f628b8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f628d8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f628f8);
      uVar2 = 2;
      if ((int)uVar1 == 0) {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b2bb160; end: 10b2bb633; -[SCMarkDownParser tokenizer:] */

void FUN_10b2bb160(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined **unaff_x23;
  undefined **unaff_x24;
  int iVar22;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **ppuVar23;
  undefined **unaff_x28;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_308;
  undefined **ppuStack_2f0;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 auStack_270 [128];
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_3;
  _objc_retain(param_3);
  puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_3;
  func_0x00010c08fa60();
  puVar20 = puVar19;
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = ppuVar2;
    func_0x00010c08fa60();
    if (ppuVar3 == (undefined **)0x0) goto LAB_10b2bb4ec;
LAB_10b2bb464:
    ppuStack_130 = &PTR____CFConstantStringClassReference_110dad058;
    func_0x00010c27e020(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_128 = &PTR____CFConstantStringClassReference_110e26238;
    unaff_x23 = ppuVar2;
    ppuStack_120 = param_1;
    func_0x00010bf51e00();
    pppuVar17 = &ppuStack_120;
    pppuVar18 = &ppuStack_130;
    ppuStack_118 = unaff_x23;
  }
  else {
    unaff_x24 = (undefined **)0x0;
    unaff_x26 = (undefined **)0x0;
    unaff_x28 = &PTR____CFConstantStringClassReference_110e26238;
    ppuVar3 = unaff_x27;
    ppuStack_138 = param_3;
    do {
      unaff_x23 = param_3;
      func_0x00010c260c80(param_3,param_2,unaff_x24,1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = param_1;
      func_0x00010c27df20(param_1,param_2,unaff_x23);
      ppuVar5 = unaff_x23;
      if (unaff_x26 == (undefined **)0x0 && unaff_x27 == (undefined **)0x0) {
        func_0x00010bf070e0(ppuVar2);
        unaff_x27 = ppuVar3;
LAB_10b2bb2dc:
        unaff_x26 = (undefined **)0x0;
      }
      else if (unaff_x26 == (undefined **)0x0) {
        unaff_x26 = param_1;
        ppuVar5 = unaff_x27;
        func_0x00010c1401e0();
        if ((unaff_x27 < (undefined **)0xa) && ((1L << ((ulong)unaff_x27 & 0x3f) & 0x2a0U) != 0)) {
          ppuStack_90 = &PTR____CFConstantStringClassReference_110dad058;
          func_0x00010c27e020(param_1,param_2,0);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_88 = &PTR____CFConstantStringClassReference_110e26238;
          unaff_x24 = param_3;
          ppuStack_80 = param_1;
          func_0x00010bf51e00();
          pppuVar17 = &ppuStack_80;
          pppuVar18 = &ppuStack_90;
          ppuStack_78 = unaff_x24;
LAB_10b2bb590:
          unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar17,pppuVar18,2
                             );
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = unaff_x25;
          func_0x00010befa120(puVar19);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          _objc_release(param_1);
          func_0x00010bf51e00();
          _objc_release(unaff_x23);
          goto LAB_10b2bb5dc;
        }
        ppuVar3 = ppuVar2;
        func_0x00010c08fa60();
        if (ppuVar3 != (undefined **)0x0) {
          ppuStack_b0 = &PTR____CFConstantStringClassReference_110dad058;
          unaff_x27 = param_1;
          func_0x00010c27e020(param_1,param_2,0);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_a8 = &PTR____CFConstantStringClassReference_110e26238;
          ppuVar5 = ppuVar2;
          ppuStack_a0 = unaff_x27;
          func_0x00010bf51e00();
          unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          ppuStack_98 = ppuVar5;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_a0,
                              &ppuStack_b0,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar19,param_2,unaff_x25);
          _objc_release(unaff_x25);
          param_3 = ppuStack_138;
          _objc_release(ppuVar5);
          _objc_release(unaff_x27);
          ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
          func_0x00010c20e7c0(ppuVar2);
        }
      }
      else {
        if (unaff_x26 == unaff_x27) {
          ppuStack_d0 = &PTR____CFConstantStringClassReference_110dad058;
          ppuVar5 = param_1;
          func_0x00010bf0bc80(param_1,param_2,unaff_x26);
          unaff_x25 = param_1;
          func_0x00010c27e020(param_1,param_2,ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_c8 = &PTR____CFConstantStringClassReference_110e26238;
          ppuVar5 = ppuVar2;
          ppuStack_c0 = unaff_x25;
          func_0x00010bf51e00();
          unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          ppuStack_b8 = ppuVar5;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c0,
                              &ppuStack_d0,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar19,param_2,unaff_x27);
          _objc_release(unaff_x27);
          _objc_release(ppuVar5);
          _objc_release(unaff_x25);
          ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
          func_0x00010c20e7c0(ppuVar2);
          goto LAB_10b2bb2dc;
        }
        if (unaff_x27 != (undefined **)0x0) {
          ppuStack_f0 = &PTR____CFConstantStringClassReference_110dad058;
          func_0x00010c27e020(param_1,param_2,0);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_e8 = &PTR____CFConstantStringClassReference_110e26238;
          unaff_x24 = param_3;
          ppuStack_e0 = param_1;
          func_0x00010bf51e00();
          pppuVar17 = &ppuStack_e0;
          pppuVar18 = &ppuStack_f0;
          ppuStack_d8 = unaff_x24;
          goto LAB_10b2bb590;
        }
        func_0x00010bf070e0(ppuVar2);
      }
      _objc_release(unaff_x23);
      unaff_x24 = (undefined **)((long)unaff_x24 + 1);
      ppuVar4 = param_3;
      func_0x00010c08fa60();
      ppuVar3 = unaff_x27;
    } while (unaff_x24 < ppuVar4);
    ppuVar3 = ppuVar2;
    func_0x00010c08fa60();
    if (ppuVar3 == (undefined **)0x0) goto LAB_10b2bb4ec;
    if (unaff_x26 == (undefined **)0x0) goto LAB_10b2bb464;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110dad058;
    func_0x00010c27e020(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_108 = &PTR____CFConstantStringClassReference_110e26238;
    unaff_x23 = param_3;
    ppuStack_100 = param_1;
    func_0x00010bf51e00();
    pppuVar17 = &ppuStack_100;
    pppuVar18 = &ppuStack_110;
    ppuStack_f8 = unaff_x23;
  }
  unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar17,pppuVar18,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = unaff_x24;
  func_0x00010befa120(puVar19);
  _objc_release(unaff_x24);
  _objc_release(unaff_x23);
  _objc_release(param_1);
LAB_10b2bb4ec:
  func_0x00010bf51e00();
LAB_10b2bb5dc:
  _objc_release(ppuVar2);
  _objc_release(puVar19);
  ppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10b2bb634;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a0 = unaff_x28;
  ppuStack_198 = unaff_x27;
  ppuStack_190 = unaff_x26;
  ppuStack_188 = unaff_x25;
  ppuStack_180 = unaff_x24;
  ppuStack_178 = unaff_x23;
  puStack_170 = puVar20;
  ppuStack_168 = ppuVar2;
  puStack_160 = puVar19;
  ppuStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar5);
  ppuVar2 = ppuVar3;
  func_0x00010c273420(ppuVar3,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2f0 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  puStack_308 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_320 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_328 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010bf529e0();
  if (ppuVar4 != (undefined **)0x0) {
    lVar21 = 0;
    iVar22 = 0;
    do {
      ppuVar4 = ppuVar2;
      func_0x00010c0dfd40(ppuVar2,param_2,lVar21);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar3;
      func_0x00010c25d6e0(ppuVar3,param_2,ppuVar6);
      _objc_release(ppuVar6);
      ppuVar6 = ppuVar4;
      func_0x00010c0e00e0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110e26238);
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar7 == (undefined **)0x1) {
        ppuVar7 = ppuStack_2f0;
        func_0x00010c08fa60();
        ppuVar8 = ppuVar6;
        func_0x00010c08fa60();
        func_0x00010bf070e0(ppuStack_2f0,param_2,ppuVar6);
        ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e26238;
        ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e98978;
        puVar19 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        ppuStack_1c0 = ppuVar6;
        func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,ppuVar7,ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_1b8 = puVar19;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_1c0,
                            &ppuStack_1d0,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_308,param_2,puVar20);
        _objc_release(puVar20);
        _objc_release(puVar19);
        ppuVar9 = ppuVar2;
        func_0x00010bf529e0();
        if ((undefined **)(long)(iVar22 + 1) < ppuVar9) {
          lVar21 = (long)iVar22;
          ppuVar9 = ppuVar4;
          ppuVar10 = ppuVar6;
          iVar1 = iVar22;
LAB_10b2bb85c:
          iVar22 = iVar1;
          lVar21 = lVar21 + 1;
          ppuVar4 = ppuVar2;
          func_0x00010c0dfd40(ppuVar2,param_2,lVar21);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          ppuVar6 = ppuVar4;
          func_0x00010c0e00e0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110dad058);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar3;
          func_0x00010c25d6e0(ppuVar3,param_2,ppuVar6);
          _objc_release(ppuVar6);
          ppuVar6 = ppuVar4;
          func_0x00010c0e00e0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110e26238);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar10);
          if (ppuVar9 == (undefined **)0x0) goto code_r0x00010b2bb8e0;
          if (ppuVar9 == (undefined **)0x2) {
            ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e26238;
            ppuStack_1e8 = &PTR____CFConstantStringClassReference_110e98978;
            puVar19 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            ppuStack_1e0 = ppuVar6;
            func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,ppuVar7,ppuVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_1d8 = puVar19;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_1e0,
                                &ppuStack_1f0,2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_320,param_2,puVar20);
            _objc_release(puVar20);
            _objc_release(puVar19);
            goto LAB_10b2bbc48;
          }
          if (ppuVar9 == (undefined **)0x3) {
            ppuVar9 = ppuVar6;
            func_0x00010bf44740(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
            _objc_retainAutoreleasedReturnValue();
            puVar19 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf71e20();
            _objc_retainAutoreleasedReturnValue();
            lStack_2c8 = 0;
            uStack_2d0 = 0;
            uStack_2b8 = 0;
            plStack_2c0 = (long *)0x0;
            uStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_298 = 0;
            uStack_2a0 = 0;
            _objc_retain(ppuVar9);
            ppuVar10 = ppuVar9;
            func_0x00010bf52a60(ppuVar9,param_2,&uStack_2d0,auStack_270,0x10);
            if (ppuVar10 != (undefined **)0x0) {
              lVar21 = *plStack_2c0;
              do {
                ppuVar23 = (undefined **)0x0;
                do {
                  if (*plStack_2c0 != lVar21) {
                    _objc_enumerationMutation(ppuVar9);
                  }
                  lVar11 = *(long *)(lStack_2c8 + (long)ppuVar23 * 8);
                  func_0x00010bf44740(lVar11,param_2,
                                      &PTR____CFConstantStringClassReference_110db3eb8);
                  _objc_retainAutoreleasedReturnValue();
                  lVar12 = lVar11;
                  func_0x00010bf529e0();
                  if (lVar12 == 2) {
                    lVar12 = lVar11;
                    func_0x00010c0dfd40(lVar11,param_2,1);
                    _objc_retainAutoreleasedReturnValue();
                    puVar20 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                                        &PTR____CFConstantStringClassReference_110db2d98);
                    _objc_retainAutoreleasedReturnValue();
                    lVar13 = lVar12;
                    func_0x00010c25d0a0(lVar12,param_2,puVar20);
                    _objc_retainAutoreleasedReturnValue();
                    lVar14 = lVar13;
                    func_0x00010c067ec0();
                    _objc_release(lVar13);
                    _objc_release(puVar20);
                    lVar13 = lVar11;
                    func_0x00010c0dfd40(lVar11,param_2,0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar20 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                                        &PTR____CFConstantStringClassReference_110db2d98);
                    _objc_retainAutoreleasedReturnValue();
                    lVar15 = lVar13;
                    func_0x00010c25d0a0(lVar13,param_2,puVar20);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar13);
                    _objc_release(puVar20);
                    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c220220(puVar19,param_2,puVar20,lVar15);
                    _objc_release(puVar20);
                    _objc_release(lVar15);
                    _objc_release(lVar12);
                  }
                  _objc_release(lVar11);
                  ppuVar23 = (undefined **)((long)ppuVar23 + 1);
                } while (ppuVar10 != ppuVar23);
                ppuVar10 = ppuVar9;
                func_0x00010bf52a60(ppuVar9,param_2,&uStack_2d0,auStack_270,0x10);
              } while (ppuVar10 != (undefined **)0x0);
            }
            _objc_release(ppuVar9);
            ppuStack_290 = &PTR____CFConstantStringClassReference_110e26238;
            ppuStack_288 = &PTR____CFConstantStringClassReference_110e98978;
            puVar20 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            puStack_280 = puVar19;
            func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,ppuVar7,ppuVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_278 = puVar20;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_280,
                                &ppuStack_290,2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_328,param_2,puVar16);
            _objc_release(puVar16);
            _objc_release(puVar20);
            _objc_release(puVar19);
            _objc_release(ppuVar9);
LAB_10b2bbc48:
            iVar22 = iVar22 + 1;
          }
          goto LAB_10b2bbc54;
        }
LAB_10b2bbcdc:
        _objc_release(ppuVar6);
        _objc_release(ppuVar4);
        break;
      }
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar7 = ppuVar5;
        func_0x00010c0d3c80();
        _objc_release(ppuStack_2f0);
        _objc_release(puStack_308);
        _objc_release(puStack_320);
        _objc_release(puStack_328);
        puStack_328 = (undefined *)0x0;
        puStack_320 = (undefined *)0x0;
        puStack_308 = (undefined *)0x0;
        ppuStack_2f0 = ppuVar7;
        goto LAB_10b2bbcdc;
      }
      func_0x00010bf070e0(ppuStack_2f0,param_2,ppuVar6);
LAB_10b2bbc54:
      _objc_release(ppuVar6);
      _objc_release(ppuVar4);
      iVar22 = iVar22 + 1;
      lVar21 = (long)iVar22;
      ppuVar4 = ppuVar2;
      func_0x00010bf529e0();
    } while ((undefined **)(long)iVar22 < ppuVar4);
  }
  ppuVar4 = ppuStack_2f0;
  func_0x00010bf51e00();
  puVar19 = ppuVar3[1];
  ppuVar3[1] = (undefined *)ppuVar4;
  _objc_release(puVar19);
  puVar19 = puStack_308;
  func_0x00010bf51e00();
  puVar20 = ppuVar3[3];
  ppuVar3[3] = puVar19;
  _objc_release(puVar20);
  puVar19 = puStack_320;
  func_0x00010bf51e00();
  puVar20 = ppuVar3[2];
  ppuVar3[2] = puVar19;
  _objc_release(puVar20);
  puVar19 = puStack_328;
  func_0x00010bf51e00();
  puVar20 = ppuVar3[4];
  ppuVar3[4] = puVar19;
  _objc_release(puVar20);
  _objc_release(puStack_328);
  _objc_release(puStack_320);
  _objc_release(puStack_308);
  _objc_release(ppuStack_2f0);
  _objc_release(ppuVar2);
  _objc_release(ppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_getProperty_11034d258)();
    return;
  }
  return;
code_r0x00010b2bb8e0:
  ppuVar23 = ppuVar6;
  func_0x00010c0720c0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110db2d98);
  ppuVar9 = ppuVar4;
  ppuVar10 = ppuVar6;
  iVar1 = iVar22 + 1;
  if (((ulong)ppuVar23 & 1) == 0) goto LAB_10b2bbc54;
  goto LAB_10b2bb85c;
}



/* Entry: 10b2bb634; end: 10b2bbdc7; -[SCMarkDownParser parser:] */

void FUN_10b2bb634(ulong param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1c8;
  undefined *puStack_1b0;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [128];
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c273420(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    lVar17 = 0;
    iVar18 = 0;
    do {
      uVar3 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,lVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c25d6e0(param_1,param_2,uVar4);
      _objc_release(uVar4);
      uVar4 = uVar3;
      func_0x00010c0e00e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e26238);
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 == 1) {
        puVar6 = puStack_1b0;
        func_0x00010c08fa60();
        uVar5 = uVar4;
        func_0x00010c08fa60();
        func_0x00010bf070e0(puStack_1b0,param_2,uVar4);
        ppuStack_90 = &PTR____CFConstantStringClassReference_110e26238;
        ppuStack_88 = &PTR____CFConstantStringClassReference_110e98978;
        puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        uStack_80 = uVar4;
        func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,puVar6,uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_78 = puVar7;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_80,&ppuStack_90
                            ,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_1c8,param_2,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar7);
        uVar9 = uVar2;
        func_0x00010bf529e0();
        if ((ulong)(long)(iVar18 + 1) < uVar9) {
          lVar17 = (long)iVar18;
          uVar9 = uVar3;
          uVar10 = uVar4;
          iVar1 = iVar18;
LAB_10b2bb85c:
          iVar18 = iVar1;
          lVar17 = lVar17 + 1;
          uVar3 = uVar2;
          func_0x00010c0dfd40(uVar2,param_2,lVar17);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          uVar4 = uVar3;
          func_0x00010c0e00e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110dad058);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = param_1;
          func_0x00010c25d6e0(param_1,param_2,uVar4);
          _objc_release(uVar4);
          uVar4 = uVar3;
          func_0x00010c0e00e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e26238);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          if (uVar9 == 0) goto code_r0x00010b2bb8e0;
          if (uVar9 == 2) {
            ppuStack_b0 = &PTR____CFConstantStringClassReference_110e26238;
            ppuStack_a8 = &PTR____CFConstantStringClassReference_110e98978;
            puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            uStack_a0 = uVar4;
            func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,puVar6,uVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_98 = puVar7;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_a0,
                                &ppuStack_b0,2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_1e0,param_2,puVar6);
            _objc_release(puVar6);
            _objc_release(puVar7);
            goto LAB_10b2bbc48;
          }
          if (uVar9 == 3) {
            uVar9 = uVar4;
            func_0x00010bf44740(uVar4,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf71e20();
            _objc_retainAutoreleasedReturnValue();
            lStack_188 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            plStack_180 = (long *)0x0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            _objc_retain(uVar9);
            uVar10 = uVar9;
            func_0x00010bf52a60(uVar9,param_2,&uStack_190,auStack_130,0x10);
            if (uVar10 != 0) {
              lVar17 = *plStack_180;
              do {
                uVar19 = 0;
                do {
                  if (*plStack_180 != lVar17) {
                    _objc_enumerationMutation(uVar9);
                  }
                  lVar11 = *(long *)(lStack_188 + uVar19 * 8);
                  func_0x00010bf44740(lVar11,param_2,
                                      &PTR____CFConstantStringClassReference_110db3eb8);
                  _objc_retainAutoreleasedReturnValue();
                  lVar12 = lVar11;
                  func_0x00010bf529e0();
                  if (lVar12 == 2) {
                    lVar12 = lVar11;
                    func_0x00010c0dfd40(lVar11,param_2,1);
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                                        &PTR____CFConstantStringClassReference_110db2d98);
                    _objc_retainAutoreleasedReturnValue();
                    lVar13 = lVar12;
                    func_0x00010c25d0a0(lVar12,param_2,puVar8);
                    _objc_retainAutoreleasedReturnValue();
                    lVar14 = lVar13;
                    func_0x00010c067ec0();
                    _objc_release(lVar13);
                    _objc_release(puVar8);
                    lVar13 = lVar11;
                    func_0x00010c0dfd40(lVar11,param_2,0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                                        &PTR____CFConstantStringClassReference_110db2d98);
                    _objc_retainAutoreleasedReturnValue();
                    lVar15 = lVar13;
                    func_0x00010c25d0a0(lVar13,param_2,puVar8);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar13);
                    _objc_release(puVar8);
                    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c220220(puVar7,param_2,puVar8,lVar15);
                    _objc_release(puVar8);
                    _objc_release(lVar15);
                    _objc_release(lVar12);
                  }
                  _objc_release(lVar11);
                  uVar19 = uVar19 + 1;
                } while (uVar10 != uVar19);
                uVar10 = uVar9;
                func_0x00010bf52a60(uVar9,param_2,&uStack_190,auStack_130,0x10);
              } while (uVar10 != 0);
            }
            _objc_release(uVar9);
            ppuStack_150 = &PTR____CFConstantStringClassReference_110e26238;
            ppuStack_148 = &PTR____CFConstantStringClassReference_110e98978;
            puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            puStack_140 = puVar7;
            func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,puVar6,uVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_138 = puVar8;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_140,
                                &ppuStack_150,2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_1e8,param_2,puVar6);
            _objc_release(puVar6);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(uVar9);
LAB_10b2bbc48:
            iVar18 = iVar18 + 1;
          }
          goto LAB_10b2bbc54;
        }
LAB_10b2bbcdc:
        _objc_release(uVar4);
        _objc_release(uVar3);
        break;
      }
      if (uVar5 != 0) {
        puVar6 = param_3;
        func_0x00010c0d3c80();
        _objc_release(puStack_1b0);
        _objc_release(puStack_1c8);
        _objc_release(puStack_1e0);
        _objc_release(puStack_1e8);
        puStack_1e8 = (undefined *)0x0;
        puStack_1e0 = (undefined *)0x0;
        puStack_1c8 = (undefined *)0x0;
        puStack_1b0 = puVar6;
        goto LAB_10b2bbcdc;
      }
      func_0x00010bf070e0(puStack_1b0,param_2,uVar4);
LAB_10b2bbc54:
      _objc_release(uVar4);
      _objc_release(uVar3);
      iVar18 = iVar18 + 1;
      lVar17 = (long)iVar18;
      uVar3 = uVar2;
      func_0x00010bf529e0();
    } while ((ulong)(long)iVar18 < uVar3);
  }
  puVar6 = puStack_1b0;
  func_0x00010bf51e00();
  uVar16 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar6;
  _objc_release(uVar16);
  puVar6 = puStack_1c8;
  func_0x00010bf51e00();
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar6;
  _objc_release(uVar16);
  puVar6 = puStack_1e0;
  func_0x00010bf51e00();
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar6;
  _objc_release(uVar16);
  puVar6 = puStack_1e8;
  func_0x00010bf51e00();
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar6;
  _objc_release(uVar16);
  _objc_release(puStack_1e8);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1b0);
  _objc_release(uVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_getProperty_11034d258)();
    return;
  }
  return;
code_r0x00010b2bb8e0:
  uVar19 = uVar4;
  func_0x00010c0720c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db2d98);
  uVar9 = uVar3;
  uVar10 = uVar4;
  iVar1 = iVar18 + 1;
  if ((uVar19 & 1) == 0) goto LAB_10b2bbc54;
  goto LAB_10b2bb85c;
}



/* Entry: 10b2bbdc8; end: 10b2bbdd3; -[SCMarkDownParser displayString] */

void FUN_10b2bbdc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 10b2bbdd4; end: 10b2bbddf; -[SCMarkDownParser links] */

void FUN_10b2bbdd4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 10b2bbde0; end: 10b2bbdeb; -[SCMarkDownParser targets] */

void FUN_10b2bbde0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 10b2bbdec; end: 10b2bbdf7; -[SCMarkDownParser colors] */

void FUN_10b2bbdec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 10b2bbdf8; end: 10b2bbe3f; -[SCMarkDownParser .cxx_destruct] */

void FUN_10b2bbdf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2bbe40; end: 10b2bbecb; -[SCNavigationBarButtonItem initWithCustomView:] */

undefined1 *
FUN_10b2bbe40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1127062d0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = 1;
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + 0x38));
    _CGRectGetWidth();
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2bbecc; end: 10b2bbfbf; -[SCNavigationBarButtonItem initWithImage:imageName:title:target:action:] */

long FUN_10b2bbecc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bfee200();
  if (param_2 != 0) {
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = param_4;
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    _objc_release(uVar2);
    uVar1 = param_6;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = uVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_2 + 0x48) = param_8;
    _objc_storeWeak(param_2 + 0x50,param_7);
    func_0x00010c23d0a0(param_4);
    *(undefined8 *)(param_2 + 0x10) = param_1;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 10b2bbfc0; end: 10b2bbfd3; -[SCNavigationBarButtonItem initWithImage:target:action:] */

void FUN_10b2bbfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithImage_imageName_title_ta_1125e4a40,param_3,0,0,param_4,param_5);
  return;
}



/* Entry: 10b2bbfd4; end: 10b2bbfeb; -[SCNavigationBarButtonItem initWithImageName:target:action:] */

void FUN_10b2bbfd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithImage_imageName_title_ta_1125e4a40,0,param_3,0,param_4,param_5);
  return;
}



/* Entry: 10b2bbfec; end: 10b2bc003; -[SCNavigationBarButtonItem initWithTitle:target:action:] */

void FUN_10b2bbfec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithImage_imageName_title_ta_1125e4a40,0,0,param_3,param_4,param_5);
  return;
}



/* Entry: 10b2bc004; end: 10b2bc0b3; -[SCNavigationBarButtonItem updateInteractiveTransition:shouldScale:] */

void FUN_10b2bc004(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auStack_70 [48];
  
  uVar1 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
  if (param_4 != 0) {
    dVar2 = param_1 * 0.25 + 0.75;
    _CGAffineTransformMakeScale(auStack_70,dVar2,dVar2);
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(param_2);
  }
  return;
}



/* Entry: 10b2bc0b4; end: 10b2bc143; -[SCNavigationBarButtonItem viewTapped:] */

void FUN_10b2bc0b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010beedca0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c269d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010beedca0(param_1);
      func_0x00010c0f8f20(lVar1,param_2,lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10b2bc144; end: 10b2bc193; -[SCNavigationBarButtonItem setTintColor:] */

void FUN_10b2bc144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2bc194; end: 10b2bc1d3; -[SCNavigationBarButtonItem setAlpha:] */

void FUN_10b2bc194(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2bc1d4; end: 10b2bc20b; -[SCNavigationBarButtonItem setHidden:] */

void FUN_10b2bc1d4(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2bc20c; end: 10b2bc247; -[SCNavigationBarButtonItem setImage:] */

void FUN_10b2bc20c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bc248; end: 10b2bc297; -[SCNavigationBarButtonItem setTransform:] */

void FUN_10b2bc248(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(param_1);
  return;
}



/* Entry: 10b2bc298; end: 10b2bc45b; -[SCNavigationBarButtonItem view] */

void FUN_10b2bc298(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    puVar1 = PTR_PTR_1126dcdd8;
    _objc_alloc_init();
    func_0x00010c1a8c60(0xc034000000000000,0xc018000000000000,0xc034000000000000,0xc034000000000000)
    ;
    func_0x00010befbd60(puVar1,param_2,param_1,PTR_s_viewTapped__112542f90,0x40);
    lVar4 = param_1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_1;
      func_0x00010bfe6ac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(puVar1,param_2,lVar4);
      _objc_release(lVar4);
    }
    lVar4 = param_1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_1;
      func_0x00010c2711a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(puVar1,param_2,lVar4);
      _objc_release(lVar4);
    }
    lVar4 = param_1;
    func_0x00010bfe8200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (lVar4 != 0) {
      lVar4 = param_1;
      func_0x00010bfe8200(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe8220(puVar2,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar4);
    }
    func_0x00010c23d620(puVar1);
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar3);
    dVar5 = *(double *)(param_1 + 0x10);
    if (dVar5 == 0.0) {
      func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x38));
      _CGRectGetWidth();
      *(double *)(param_1 + 0x10) = dVar5;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x00010befbb60(*(undefined8 *)(param_1 + 0x38));
    }
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b2bc45c; end: 10b2bc497; -[SCNavigationBarButtonItem isHidden] */

undefined8 FUN_10b2bc45c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c074c20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2bc498; end: 10b2bc4db; -[SCNavigationBarButtonItem tintColor] */

void FUN_10b2bc498(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c270f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2bc4dc; end: 10b2bc51f; -[SCNavigationBarButtonItem alpha] */

undefined8 FUN_10b2bc4dc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01b40();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b2bc520; end: 10b2bc77b; -[SCNavigationBarButtonItem shadowView] */

void FUN_10b2bc520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_5 + 0x30);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    lVar4 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    *(undefined **)(param_5 + 0x30) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar4);
    func_0x00010c21e900(*(undefined8 *)(param_5 + 0x30),param_6,0);
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    func_0x00010c1fe7a0(0,0);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x4024000000000000;
    func_0x00010c1fe840(0x4024000000000000);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    lVar4 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar2 = param_5;
    uVar3 = uVar5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidY();
    func_0x00010bf19a00(uVar5,uVar6,param_3,param_4,uVar3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_release(lVar2);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3dcccccd);
    _objc_release(uVar3);
    func_0x00010c21e900(*(undefined8 *)(param_5 + 0x30),param_6,0);
    lVar4 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0();
    _objc_release(lVar4);
    lVar4 = *(long *)(param_5 + 0x30);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b2bc77c; end: 10b2bc827; -[SCNavigationBarButtonItem updatePercentOverscrolled:] */

void FUN_10b2bc77c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar1 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107c318f8();
  _objc_release(lVar1);
  if ((lVar1 == 0) || ((int)lVar2 == 0)) {
    func_0x00010c22a120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1);
  }
  else {
    dVar3 = 0.0;
    if (0.0 <= param_1) {
      dVar3 = param_1;
    }
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288680(dVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2bc828; end: 10b2bc86b; -[SCNavigationBarButtonItem accessibilityIdentifier] */

void FUN_10b2bc828(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010beecec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2bc86c; end: 10b2bc8fb; -[SCNavigationBarButtonItem setAccessibilityIdentifier:] */

void FUN_10b2bc86c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(param_3);
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1af000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2bc8fc; end: 10b2bc903; -[SCNavigationBarButtonItem width] */

undefined8 FUN_10b2bc8fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b2bc904; end: 10b2bc90b; -[SCNavigationBarButtonItem setWidth:] */

void FUN_10b2bc904(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10b2bc90c; end: 10b2bc913; -[SCNavigationBarButtonItem image] */

undefined8 FUN_10b2bc90c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b2bc914; end: 10b2bc91b; -[SCNavigationBarButtonItem title] */

undefined8 FUN_10b2bc914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b2bc91c; end: 10b2bc923; -[SCNavigationBarButtonItem tooltip] */

undefined8 FUN_10b2bc91c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b2bc924; end: 10b2bc953; -[SCNavigationBarButtonItem setTooltip:] */

void FUN_10b2bc924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bc954; end: 10b2bc983; -[SCNavigationBarButtonItem setShadowView:] */

void FUN_10b2bc954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bc984; end: 10b2bc9b3; -[SCNavigationBarButtonItem setView:] */

void FUN_10b2bc984(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bc9b4; end: 10b2bc9bb; -[SCNavigationBarButtonItem imageName] */

undefined8 FUN_10b2bc9b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b2bc9bc; end: 10b2bc9eb; -[SCNavigationBarButtonItem setImageName:] */

void FUN_10b2bc9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bc9ec; end: 10b2bc9f3; -[SCNavigationBarButtonItem action] */

undefined8 FUN_10b2bc9ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b2bc9f4; end: 10b2bc9fb; -[SCNavigationBarButtonItem setAction:] */

void FUN_10b2bc9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b2bc9fc; end: 10b2bca13; -[SCNavigationBarButtonItem target] */

void FUN_10b2bc9fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2bca14; end: 10b2bca1f; -[SCNavigationBarButtonItem setTarget:] */

void FUN_10b2bca14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10b2bca20; end: 10b2bca27; -[SCNavigationBarButtonItem isViewLoaded] */

undefined1 FUN_10b2bca20(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b2bca28; end: 10b2bca2f; -[SCNavigationBarButtonItem setViewLoaded:] */

void FUN_10b2bca28(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b2bca30; end: 10b2bca97; -[SCNavigationBarButtonItem .cxx_destruct] */

void FUN_10b2bca30(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b2bca98; end: 10b2bcaeb; -[SCNavigationController initWithRootViewController:] */

undefined1 * FUN_10b2bca98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127062d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithRootViewController__1125edab8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2bcaec; end: 10b2bcaf7; -[SCNavigationController supportedInterfaceOrientations] */

undefined8 FUN_10b2bcaec(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 10b2bcaf8; end: 10b2bcaff; -[SCNavigationController disablesAutomaticKeyboardDismissal] */

undefined8 FUN_10b2bcaf8(void)

{
  return 0;
}



/* Entry: 10b2bcb00; end: 10b2bcb5b; -[SCNavigationController shouldDisplayStatusBar] */

undefined8 FUN_10b2bcb00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22fc40();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b2bcb5c; end: 10b2bcb97; -[SCNavigationController prefersStatusBarHidden] */

undefined8 FUN_10b2bcb5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1070e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2bcb98; end: 10b2bcbd3; -[SCNavigationController preferredStatusBarStyle] */

undefined8 FUN_10b2bcb98(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c106ec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b2bcbd4; end: 10b2bccd7; -[SCNavigationItem_DEPRECATED updateInteractiveTransition:shouldScale:] */

void FUN_10b2bcbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_10b2bccd8;
  puStack_40 = &UNK_110cd16b0;
  ppuVar1 = &puStack_58;
  uStack_38 = param_1;
  _objc_retainBlock();
  uVar2 = param_2;
  func_0x00010c08e480(param_2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar1[2])(ppuVar1,uVar2,param_4);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c1408e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar1[2])(ppuVar1,uVar2,param_4);
  _objc_release(uVar2);
  func_0x00010bf34620(param_2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar1[2])(ppuVar1,param_2,0);
  _objc_release(param_2);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 10b2bccd8; end: 10b2bcddf;  */

void FUN_10b2bccd8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 unaff_x22;
  long lVar5;
  long unaff_x23;
  undefined1 *puVar6;
  long unaff_x24;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar5 = param_2;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    unaff_x23 = *plStack_110;
    do {
      unaff_x24 = 0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_2);
        }
        func_0x00010c286a20(*(undefined8 *)(param_1 + 0x20),
                            *(undefined8 *)(lStack_118 + unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (lVar5 != unaff_x24);
      lVar5 = param_2;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar5 != 0);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_230;
  pcStack_128 = FUN_10b2bcde0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  lStack_148 = param_1;
  uStack_140 = param_3;
  lStack_138 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puVar1 = (undefined1 *)puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar5 = *plStack_220;
    do {
      puVar6 = (undefined1 *)0x0;
      do {
        if (*plStack_220 != lVar5) {
          _objc_enumerationMutation(puVar3);
        }
        uVar2 = *(undefined8 *)(lStack_228 + (long)puVar6 * 8);
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(uVar2);
        puVar6 = puVar6 + 1;
      } while (puVar1 != puVar6);
      puVar1 = (undefined1 *)puVar3;
      puVar4 = &uStack_230;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  func_0x00010c12b480(puVar3);
  puVar1 = (undefined1 *)puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)((long)puVar3 + 8);
  *(undefined1 **)((long)puVar3 + 8) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf6b020(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b2bcde0; end: 10b2bcee7; -[SCNavigationItem_DEPRECATED removeBarButtonItemsInItems:] */

void FUN_10b2bcde0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_108 + lVar6 * 8);
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + 8);
  _objc_retain(puVar4);
  func_0x00010c12b480(param_3,param_2,uVar2);
  puVar3 = (undefined1 *)puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(undefined1 **)(param_3 + 8) = puVar3;
  _objc_release(uVar2);
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2bcee8; end: 10b2bcf67; -[SCNavigationItem_DEPRECATED setLeftBarButtonItems:] */

void FUN_10b2bcee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c12b480(param_1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2bcf68; end: 10b2bcfe7; -[SCNavigationItem_DEPRECATED setCenterBarButtonItems:] */

void FUN_10b2bcf68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c12b480(param_1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2bcfe8; end: 10b2bd067; -[SCNavigationItem_DEPRECATED setRightBarButtonItems:] */

void FUN_10b2bcfe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c12b480(param_1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2bd068; end: 10b2bd0bb; -[SCNavigationItem_DEPRECATED setTitleColor:] */

void FUN_10b2bd068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2bd0bc; end: 10b2bd1af; -[SCNavigationItem_DEPRECATED updatePercentOverscrolled:] */

void FUN_10b2bd0bc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_10b2bd1b0;
  puStack_40 = &UNK_110cd16d0;
  ppuVar1 = &puStack_58;
  uStack_38 = param_1;
  _objc_retainBlock();
  uVar2 = param_2;
  func_0x00010c08e480(param_2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar1[2])(ppuVar1,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c1408e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar1[2])(ppuVar1,uVar2);
  _objc_release(uVar2);
  func_0x00010bf34620(param_2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar1[2])(ppuVar1,param_2);
  _objc_release(param_2);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 10b2bd1b0; end: 10b2bd2a7;  */

long FUN_10b2bd1b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      func_0x00010c288680(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_2;
  }
  ___stack_chk_fail();
  return *(long *)(param_2 + 8);
}



/* Entry: 10b2bd2a8; end: 10b2bd2af; -[SCNavigationItem_DEPRECATED leftBarButtonItems] */

undefined8 FUN_10b2bd2a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b2bd2b0; end: 10b2bd2b7; -[SCNavigationItem_DEPRECATED rightBarButtonItems] */

undefined8 FUN_10b2bd2b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b2bd2b8; end: 10b2bd2bf; -[SCNavigationItem_DEPRECATED centerBarButtonItems] */

undefined8 FUN_10b2bd2b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b2bd2c0; end: 10b2bd2c7; -[SCNavigationItem_DEPRECATED title] */

undefined8 FUN_10b2bd2c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b2bd2c8; end: 10b2bd2cf; -[SCNavigationItem_DEPRECATED titleColor] */

undefined8 FUN_10b2bd2c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b2bd2d0; end: 10b2bd2d7; -[SCNavigationItem_DEPRECATED backgroundColor] */

undefined8 FUN_10b2bd2d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b2bd2d8; end: 10b2bd2df; -[SCNavigationItem_DEPRECATED setBackgroundColor:] */

void FUN_10b2bd2d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b2bd2e0; end: 10b2bd2e7; -[SCNavigationItem_DEPRECATED gradientImageView] */

undefined8 FUN_10b2bd2e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b2bd2e8; end: 10b2bd317; -[SCNavigationItem_DEPRECATED setGradientImageView:] */

void FUN_10b2bd2e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2bd318; end: 10b2bd323; -[SCNavigationItem_DEPRECATED setDelegate:] */

void FUN_10b2bd318(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10b2bd324; end: 10b2bd32b; -[SCNavigationItem_DEPRECATED overscrollPercent] */

undefined8 FUN_10b2bd324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b2bd32c; end: 10b2bd333; -[SCNavigationItem_DEPRECATED setOverscrollPercent:] */

void FUN_10b2bd32c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 10b2bd334; end: 10b2bd3a7; -[SCNavigationItem_DEPRECATED .cxx_destruct] */

void FUN_10b2bd334(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


