/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aef3c3c; end: 10aef3dc3; -[SCSwipePresentationController initWithGradientColors:blurEffect:transitionOverlayIntroPoint:showsTopCorners:presentedViewController:presentingViewController:presentationStyle:presentingView:belowSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10aef3c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_112701cb0;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_initWithPresentedViewController__1125ebc88,param_7,param_8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112785ab4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112785ab4) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112785ab8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112785abc) = param_1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112785ac0) = param_6;
    lVar4 = (long)_DAT_112785ac4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112785ac8) = param_9;
    lVar4 = (long)_DAT_112785acc;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112785ad0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef3dc4; end: 10aef418b; -[SCSwipePresentationController presentationTransitionWillBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef3dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_5;
  func_0x00010c10f6a0();
  uVar4 = *(undefined8 *)(param_5 + (long)_DAT_112785acc);
  uVar2 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 3) {
    func_0x00010c066fe0(uVar4,param_6,uVar2,*(undefined8 *)(param_5 + (long)_DAT_112785ad0));
  }
  else {
    func_0x00010befbb60(uVar4,param_6,uVar2);
  }
  _objc_release(uVar2);
  uVar1 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_5;
  func_0x00010c27aa20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c27aa20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a03e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c27aa20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1,param_6,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_5;
  func_0x00010c10f920(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c10f920(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1,param_6,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06c000();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c27aa20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcda40();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 & 1) != 0) {
    func_0x00010c1677c0(0,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c27aa20(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2a03e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193d20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c10fd00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010c27a780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02c20();
    _objc_release(uVar1);
    _objc_release(param_5);
    return;
  }
  func_0x00010c1677c0(0x3ff0000000000000,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c27aa20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c2a03e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10aef418c; end: 10aef420b;  */

void FUN_10aef418c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a920(param_3);
  func_0x00010bf02ee0(param_1,0,puVar1);
  return;
}



/* Entry: 10aef420c; end: 10aef427f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef420c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10aef4280;
  puStack_20 = &UNK_110842e18;
  func_0x00010bef95a0(*(double *)(lStack_18 + _DAT_112785abc),
                      1.0 - *(double *)(lStack_18 + _DAT_112785abc),
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}



/* Entry: 10aef4280; end: 10aef4323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef4280(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27aa20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcda40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27aa20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a03e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aef4324; end: 10aef435b; -[SCSwipePresentationController presentationTransitionDidEnd:] */

void FUN_10aef4324(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    return;
  }
  func_0x00010c27aa20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aef435c; end: 10aef43f3; -[SCSwipePresentationController dismissalTransitionWillBegin] */

void FUN_10aef435c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02c20();
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 10aef43f4; end: 10aef4473;  */

void FUN_10aef43f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a920(param_3);
  func_0x00010bf02ee0(param_1,0,puVar1);
  return;
}



/* Entry: 10aef4474; end: 10aef44eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef4474(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10aef44ec;
  puStack_20 = &UNK_110842e18;
  func_0x00010bef95a0(0,1.0 - *(double *)(lStack_18 + _DAT_112785abc),
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}



/* Entry: 10aef44ec; end: 10aef4583;  */

void FUN_10aef44ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27aa20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcda40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27aa20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a03e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aef4584; end: 10aef45ff; -[SCSwipePresentationController dismissalTransitionDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef4584(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    func_0x00010c27aa20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c2a03e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193d20();
    _objc_release(uVar1);
  }
  else {
    func_0x00010c27aa20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aef4600; end: 10aef460f; -[SCSwipePresentationController presentationStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aef4600(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785ac8);
}



/* Entry: 10aef4610; end: 10aef46ef; -[SCSwipePresentationController containerViewWillLayoutSubviews] */

void FUN_10aef4610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_112701cb0;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_containerViewWillLayoutSubviews_112540930);
  uVar1 = param_5;
  func_0x00010bf4b2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c27aa20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010c10f920(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 10aef46f0; end: 10aef48db; -[SCSwipePresentationController transitionOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef46f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = (long)_DAT_112785ad4;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126de980;
    _objc_alloc();
    func_0x00010c014520(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    if (*(char *)(param_1 + _DAT_112785ac0) == '\x01') {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110f31298);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c01bf60();
      func_0x00010c16d4a0();
      puVar3 = puVar2;
      func_0x00010c08c0e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227960(0x3ff0000000000000);
      _objc_release(puVar3);
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c01bf60();
      _CGAffineTransformMakeScale(&uStack_80,0xbff0000000000000,0x3ff0000000000000);
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      func_0x00010c219960(puVar3,param_2,&uStack_b0);
      puVar4 = puVar3;
      func_0x00010c08c0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      dVar7 = 1.0;
      func_0x00010c227960(0x3ff0000000000000);
      _objc_release(puVar4);
      func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar6));
      _CGRectGetWidth();
      dVar8 = dVar7;
      func_0x00010bf20c00(puVar3);
      _CGRectGetMidX();
      dVar7 = dVar7 - dVar8;
      func_0x00010bf20c00(puVar3);
      _CGRectGetMidY();
      func_0x00010c17a6a0(dVar7,dVar8,puVar3);
      func_0x00010c16d4a0(puVar3,param_2,0x21);
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6),param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10aef48dc; end: 10aef495b; -[SCSwipePresentationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef48dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112785ac4,0);
  _objc_storeStrong(param_1 + _DAT_112785ad0,0);
  _objc_storeStrong(param_1 + _DAT_112785acc,0);
  _objc_storeStrong(param_1 + _DAT_112785ab8,0);
  _objc_storeStrong(param_1 + _DAT_112785ab4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112785ad4,0);
  return;
}



/* Entry: 10aef495c; end: 10aef4a6f; -[SCSwipeTransitionContainerView initWithFrame:gradientColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10aef495c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_112701cb8;
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_60 = param_1;
  _objc_msgSendSuper2(uVar3,uVar4,uVar5,uVar6,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112785ad8);
    *(undefined **)((long)puVar1 + (long)_DAT_112785ad8) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126de988;
    _objc_alloc();
    func_0x00010c017de0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112785adc);
    *(undefined **)((long)puVar1 + (long)_DAT_112785adc) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef4a70; end: 10aef4adf; -[SCSwipeTransitionContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef4a70(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701cb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112785adc));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112785ad8));
  return;
}



/* Entry: 10aef4ae0; end: 10aef4aef; -[SCSwipeTransitionContainerView gradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aef4ae0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785adc);
}



/* Entry: 10aef4af0; end: 10aef4aff; -[SCSwipeTransitionContainerView visualEffectView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10aef4af0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112785ad8);
}



/* Entry: 10aef4b00; end: 10aef4b3f; -[SCSwipeTransitionContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10aef4b00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112785ad8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112785adc,0);
  return;
}



/* Entry: 10aef4b40; end: 10aef4b4b; +[SCSwipeTransitionGradientOverlayView layerClass] */

void FUN_10aef4b40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 10aef4b4c; end: 10aef4ce3; -[SCSwipeTransitionGradientOverlayView initWithGradientColors:] */

undefined8 * FUN_10aef4b4c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112701cc0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    func_0x00010bf529e0();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puVar2 < (undefined *)0x2) {
      puVar4 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar1);
    }
    else {
      func_0x00010bf529e0(param_3);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010bf97e80(param_3);
      puVar3 = puVar1;
      func_0x00010bfcd9c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60();
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010bfcd9c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209760(0,0);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010bfcd9c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c196020(0x3ff0000000000000,0);
      _objc_release(puVar3);
      _objc_release(puVar4);
    }
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10aef4ce4; end: 10aef4d1b;  */

void FUN_10aef4ce4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainAutorelease(param_2);
  func_0x00010bdc0fe0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 10aef4d1c; end: 10aef4d1f; -[SCSwipeTransitionGradientOverlayView gradientLayer] */

void FUN_10aef4d1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 10aef4d20; end: 10aef4d93; -[SCAnimationPhaseCoordinator initWithPhase:] */

undefined1 * FUN_10aef4d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701cc8;
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



/* Entry: 10aef4d94; end: 10aef4e1b; -[SCAnimationPhaseCoordinator startAnimationSequenceWithCompletion:] */

void FUN_10aef4d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10aef4e1c;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8320(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10aef4e1c; end: 10aef4e2f;  */

void FUN_10aef4e1c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010aef4e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10aef4e30; end: 10aef4e3b; -[SCAnimationPhaseCoordinator .cxx_destruct] */

void FUN_10aef4e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef4e3c; end: 10aef4e83; +[SCCustomAnimationPhase customPhaseWithCompletionProviderBlock:] */

void FUN_10aef4e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c000540();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10aef4e84; end: 10aef4efb; -[SCCustomAnimationPhase initWithCompletionProviderBlock:] */

undefined1 * FUN_10aef4e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701cd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef4efc; end: 10aef4f2f; -[SCCustomAnimationPhase performAnimationsWithCompletion:] */

void FUN_10aef4efc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aef4f30; end: 10aef4f3b; -[SCCustomAnimationPhase .cxx_destruct] */

void FUN_10aef4f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef4f3c; end: 10aef4f83; +[SCConcurrentAnimationPhase concurrentPhaseWithPhases:] */

void FUN_10aef4f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c035880();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10aef4f84; end: 10aef4ffb; -[SCConcurrentAnimationPhase initWithPhases:] */

undefined1 * FUN_10aef4f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701cd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef4ffc; end: 10aef5243; -[SCConcurrentAnimationPhase performAnimationsWithCompletion:] */

void FUN_10aef4ffc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain();
  _dispatch_group_create();
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_1c0;
    do {
      if (*plStack_1c0 != lVar5) {
        _objc_enumerationMutation(lVar3);
      }
      _dispatch_group_enter(lVar1);
      lVar2 = lVar2 + -1;
    } while ((lVar2 != 0) || (lVar2 = lVar3, func_0x00010bf52a60(), lVar2 != 0));
  }
  _objc_release(lVar3);
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_10aef5244;
  puStack_1e0 = &UNK_110849530;
  _objc_retain(param_3);
  lStack_1d8 = param_3;
  func_0x000107c27d98(lVar1,PTR___dispatch_main_q_11034be20,&puStack_1f8);
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar5);
      }
      uVar4 = *(undefined8 *)(lVar6 * 8);
      _objc_retain(lVar1);
      func_0x00010c0f8320(uVar4);
      _objc_release(lVar1);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(lStack_1d8);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010aef524c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 10aef5244; end: 10aef5257;  */

void FUN_10aef5244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aef524c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10aef5258; end: 10aef5263; -[SCConcurrentAnimationPhase .cxx_destruct] */

void FUN_10aef5258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef5264; end: 10aef52ab; +[SCSynchronousAnimationPhase synchronousPhaseWithPhases:] */

void FUN_10aef5264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c035880();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10aef52ac; end: 10aef5323; -[SCSynchronousAnimationPhase initWithPhases:] */

undefined1 * FUN_10aef52ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701ce0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef5324; end: 10aef53d3; -[SCSynchronousAnimationPhase performAnimationsWithCompletion:] */

void FUN_10aef5324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = param_1;
  func_0x00010be75960(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10aef53d4;
  puStack_40 = &UNK_110849530;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010beca1e0(param_1,param_2,lVar1,&puStack_58);
  _objc_release(lVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10aef53d4; end: 10aef53df;  */

void FUN_10aef53d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aef53dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10aef53e0; end: 10aef54db; -[SCSynchronousAnimationPhase _synchronouslyPerformPhase:completion:] */

void FUN_10aef53e0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    func_0x00010c0f8320(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10aef54dc; end: 10aef553f;  */

void FUN_10aef54dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be75960(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beca1e0(lVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aef5540; end: 10aef558f; -[SCSynchronousAnimationPhase _popPhase] */

void FUN_10aef5540(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef5590; end: 10aef559b; -[SCSynchronousAnimationPhase .cxx_destruct] */

void FUN_10aef5590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef559c; end: 10aef55c3; +[SCWaitAnimationPhase waitPhaseWithWaitTime:] */

void FUN_10aef559c(undefined8 param_1)

{
  _objc_alloc();
  func_0x00010c0627e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef55c4; end: 10aef560b; -[SCWaitAnimationPhase initWithWaitTime:] */

void FUN_10aef55c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701ce8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 10aef560c; end: 10aef56b7; -[SCWaitAnimationPhase performAnimationsWithCompletion:] */

void FUN_10aef560c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = 0;
  _dispatch_time(0,(long)(*(double *)(param_1 + 8) * 1000000000.0));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10aef56b8;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d84(uVar1,PTR___dispatch_main_q_11034be20,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10aef56b8; end: 10aef56c3;  */

void FUN_10aef56b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aef56c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10aef56c4; end: 10aef570b; +[SCGestureBasedInteractionEvent createWithGesture:] */

void FUN_10aef56c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c017920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10aef570c; end: 10aef577f; -[SCGestureBasedInteractionEvent initWithGesture:] */

undefined1 * FUN_10aef570c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701cf0;
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



/* Entry: 10aef5780; end: 10aef57df; -[SCGestureBasedInteractionEvent processEventForResponder:] */

undefined8 FUN_10aef5780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  return *(undefined8 *)(puVar1 + 8);
}



/* Entry: 10aef57e0; end: 10aef57e7; -[SCGestureBasedInteractionEvent gestureRecognizer] */

undefined8 FUN_10aef57e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aef57e8; end: 10aef57f3; -[SCGestureBasedInteractionEvent .cxx_destruct] */

void FUN_10aef57e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef57f4; end: 10aef5863; -[SCCameraTimerInteractionEvent processEventForResponder:] */

undefined8 FUN_10aef57f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_forwardCameraTimerGesture__1125cb260);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfc1a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb62e0(param_3);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 10aef5864; end: 10aef58d3; -[SCCameraOverlayTapInteractionEvent processEventForResponder:] */

undefined8 FUN_10aef5864(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_forwardCameraOverlayTapGesture__1125cb258);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfc1a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb62c0(param_3);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 10aef58d4; end: 10aef591f; -[SCCameraVolumeButtonBlockedCaptureInteractionEvent processEventForResponder:] */

undefined8 FUN_10aef58d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_forwardVolumeButtonBlockedCaptur_1125cb2b8);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfb6440(param_3);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 10aef5920; end: 10aef598f; -[SCCameraLongPressInteractionEvent processEventForResponder:] */

undefined8 FUN_10aef5920(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_forwardLongPressGesture__1125cb270);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfc1a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6320(param_3);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 10aef5990; end: 10aef5a43; -[SCCameraPinchInteractionEvent processEventForResponder:] */

undefined8 FUN_10aef5990(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_forwardPinchGesture__1125cb2b0);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bfc1a80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
    _objc_opt_class(PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010bfc1a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb6420(param_3);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 10aef5a44; end: 10aef5af7; -[SCCameraPanInteractionEvent processEventForResponder:] */

undefined8 FUN_10aef5a44(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_forwardPanGesture__1125cb2a0);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bfc1a80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      func_0x00010bfc1a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb63e0(param_3);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 10aef5af8; end: 10aef5b27; +[SCCameraPointTouchInteractionEvent createWithTouchPoint:] */

void FUN_10aef5af8(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c054a20(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aef5b28; end: 10aef5b73; -[SCCameraPointTouchInteractionEvent initWithTouchPoint:] */

void FUN_10aef5b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701cf8;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 10aef5b74; end: 10aef5bd7; -[SCCameraPointTouchInteractionEvent shouldBlockEventForResponder:] */

ulong FUN_10aef5b74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_shouldBlockTouchAtPoint__112669390);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c2772e0(param_1);
    uVar1 = param_3;
    func_0x00010c22e5a0(param_3);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10aef5bd8; end: 10aef5bdf; -[SCCameraPointTouchInteractionEvent touchPoint] */

undefined1  [16] FUN_10aef5bd8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}



/* Entry: 10aef5be0; end: 10aef5c3b; -[SCCameraSwipeToDismissInteractionEvent processEventForResponder:] */

undefined8 FUN_10aef5be0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_consumeSwipeToDismissGesture_1125b0068);
  if (((uVar1 & 1) == 0) || (uVar1 = param_3, func_0x00010bf49b00(), (uVar1 & 1) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10aef5c3c; end: 10aef5c3f; -[SCFeature activate] */

void FUN_10aef5c3c(void)

{
  return;
}



/* Entry: 10aef5c40; end: 10aef5c43; -[SCFeature resetMetrics] */

void FUN_10aef5c40(void)

{
  return;
}



/* Entry: 10aef5c44; end: 10aef5c4f; -[SCFeature usageMetrics] */

undefined * FUN_10aef5c44(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 10aef5c50; end: 10aef5c57; -[SCFeatureInitializer enabled] */

undefined8 FUN_10aef5c50(void)

{
  return 1;
}



/* Entry: 10aef5c58; end: 10aef5c5f; -[SCFeatureInitializer createInstance] */

undefined8 FUN_10aef5c58(void)

{
  return 0;
}



/* Entry: 10aef5c60; end: 10aef5cd3; -[SCCaptureScopedLensCarouselScopeServices initWithLensDelegate:] */

undefined1 * FUN_10aef5c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701d08;
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



/* Entry: 10aef5cd4; end: 10aef5cdb; -[SCCaptureScopedLensCarouselScopeServices lensDelegate] */

undefined8 FUN_10aef5cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aef5cdc; end: 10aef5ce7; -[SCCaptureScopedLensCarouselScopeServices .cxx_destruct] */

void FUN_10aef5cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef5ce8; end: 10aef5cf3; -[SCMainCameraScopedLensCarouselScopeServices .cxx_destruct] */

void FUN_10aef5ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef5cf4; end: 10aef5d7b; -[SCLensInfoButtonXPosition initWithAnchor:constant:] */

undefined1 *
FUN_10aef5cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701d18;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef5d7c; end: 10aef5d9f; -[SCLensInfoButtonXPosition copyWithZone:] */

undefined8 FUN_10aef5d7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aef5da0; end: 10aef5e2b; -[SCLensInfoButtonXPosition hash] */

undefined8 * FUN_10aef5da0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aef5ec8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aef5ed4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10aef5ed4;
        }
        goto LAB_10aef5ec8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aef5ed4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aef5e2c; end: 10aef5eef; -[SCLensInfoButtonXPosition isEqual:] */

long FUN_10aef5e2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aef5ec8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aef5ed4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10aef5ed4;
        }
        goto LAB_10aef5ec8;
      }
    }
    lVar4 = 0;
  }
LAB_10aef5ed4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aef5ef0; end: 10aef5ef7; -[SCLensInfoButtonXPosition anchor] */

undefined8 FUN_10aef5ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aef5ef8; end: 10aef5eff; -[SCLensInfoButtonXPosition constant] */

undefined8 FUN_10aef5ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aef5f00; end: 10aef5f0b; -[SCLensInfoButtonXPosition .cxx_destruct] */

void FUN_10aef5f00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef5f0c; end: 10aef5f93; -[SCLensInfoButtonYPosition initWithAnchor:constant:] */

undefined1 *
FUN_10aef5f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701d20;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aef5f94; end: 10aef5fb7; -[SCLensInfoButtonYPosition copyWithZone:] */

undefined8 FUN_10aef5f94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aef5fb8; end: 10aef6043; -[SCLensInfoButtonYPosition hash] */

undefined8 * FUN_10aef5fb8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aef60e0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aef60ec;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10aef60ec;
        }
        goto LAB_10aef60e0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aef60ec:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aef6044; end: 10aef6107; -[SCLensInfoButtonYPosition isEqual:] */

long FUN_10aef6044(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aef60e0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aef60ec;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10aef60ec;
        }
        goto LAB_10aef60e0;
      }
    }
    lVar4 = 0;
  }
LAB_10aef60ec:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aef6108; end: 10aef610f; -[SCLensInfoButtonYPosition anchor] */

undefined8 FUN_10aef6108(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aef6110; end: 10aef6117; -[SCLensInfoButtonYPosition constant] */

undefined8 FUN_10aef6110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aef6118; end: 10aef6123; -[SCLensInfoButtonYPosition .cxx_destruct] */

void FUN_10aef6118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aef6124; end: 10aef617b; +[SCCameraViewControllerLensStateEvent didChangeStateExistenceWithHasSavedState:] */

void FUN_10aef6124(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddbe0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


