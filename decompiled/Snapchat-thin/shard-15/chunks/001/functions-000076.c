/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b80bc50; end: 10b80bc53; -[SIGNotificationImageInfoPresenterPrivate containerView] */

void FUN_10b80bc50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf71cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dialog_1125ba0e0);
  return;
}



/* Entry: 10b80bc54; end: 10b80bc5f; -[SIGNotificationImageInfoPresenterPrivate presentNotificationOverView:completion:] */

void FUN_10b80bc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0694f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_internalPresentNotificationOverV_1125f7f48,param_3,1,param_4);
  return;
}



/* Entry: 10b80bc60; end: 10b80c0fb; -[SIGNotificationImageInfoPresenterPrivate internalPresentNotificationOverView:animateAndRemoveAfterDelay:completion:] */

void FUN_10b80bc60(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10b80c0fc;
  puStack_b0 = &UNK_110849530;
  _objc_retain(param_5);
  ppuVar2 = &puStack_c8;
  uStack_a8 = param_5;
  _objc_retainBlock();
  ppuVar3 = ppuVar2;
  func_0x00010bf51e00();
  uVar16 = *(undefined8 *)(param_1 + 0x68);
  *(undefined ***)(param_1 + 0x68) = ppuVar3;
  _objc_release(uVar16);
  if (param_3 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    lVar4 = param_1;
    func_0x00010bf71ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_3);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c149040(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar8;
    _objc_release(uVar16);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c274200(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar7;
    _objc_release(uVar16);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar4 = param_1;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    lStack_a0 = lVar7;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_3;
    func_0x00010c2793a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    lStack_98 = lVar11;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf494e0(0);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = *(undefined8 *)(param_1 + 0x60);
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_90 = lVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c08cdc0(param_3);
    func_0x00010c162480(*(undefined8 *)(param_1 + 0x60));
    func_0x00010c162480(*(undefined8 *)(param_1 + 0x58));
    if (*(char *)(param_1 + 0x50) == '\x01') {
      func_0x00010bdc8860(param_1);
    }
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if ((param_4 & 1) == 0) {
      func_0x00010c08cdc0(param_3);
      (*(code *)ppuVar2[2])(ppuVar2);
    }
    else {
      _objc_retain(param_3);
      func_0x00010bf03420(0x3fd3333333333333,puVar1);
      func_0x00010be9af80(param_1);
      _objc_release(param_3);
    }
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_a8);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    if (*(long *)(param_3 + 0x20) == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010b80c108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b80c0fc; end: 10b80c117;  */

void FUN_10b80c0fc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b80c108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b80c118; end: 10b80c13f; -[SIGNotificationImageInfoPresenterPrivate dismissPresenter] */

void FUN_10b80c118(undefined8 param_1)

{
  func_0x00010bdda780();
                    /* WARNING: Could not recover jumptable at 0x00010be0bad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeDismissAnimationWithReas_112560850,4)
  ;
  return;
}



/* Entry: 10b80c140; end: 10b80c167; -[SIGNotificationImageInfoPresenterPrivate debugInfo] */

void FUN_10b80c140(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b80c168; end: 10b80c17b; -[SIGNotificationImageInfoPresenterPrivate _translationMulitplierForPositionY:] */

double FUN_10b80c168(double param_1)

{
  double dVar1;
  
  dVar1 = 1.0;
  if (1.0 <= param_1) {
    dVar1 = param_1;
  }
  return 1.0 / dVar1;
}



/* Entry: 10b80c17c; end: 10b80c283; -[SIGNotificationImageInfoPresenterPrivate _scheduleDismissBlock] */

void FUN_10b80c17c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10b80c24c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  uVar1 = 0;
  func_0x000107c27d90(0,&puStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  _objc_release(uVar2);
  _dispatch_time(0,(long)((*(double *)(param_1 + 200) + 0.3) * 1000000000.0));
  func_0x000107c27d84();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10b80c284; end: 10b80c2bf; -[SIGNotificationImageInfoPresenterPrivate _cancelDismissBlock] */

void FUN_10b80c284(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b80c2c0; end: 10b80c337; -[SIGNotificationImageInfoPresenterPrivate _addSwipeToDismissGestureRecognizer] */

void FUN_10b80c2c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x00010c050900();
  func_0x00010c1c8320();
  func_0x00010c1c3c20(puVar1,param_2,1);
  func_0x00010bf71ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b80c338; end: 10b80c4bf; -[SIGNotificationImageInfoPresenterPrivate _handlePanGestureRecognizer:] */

void FUN_10b80c338(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c252440();
  if (lVar1 - 3U < 2) {
    func_0x00010bf49220(*(undefined8 *)(param_5 + 0x58));
    lVar1 = param_5;
    func_0x00010bf71ce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar1);
    if (0.0 - param_1 <= param_4 * 0.5) {
      func_0x00010be94160(param_5);
    }
    else {
      func_0x00010be0bac0(param_5,param_6,2);
    }
  }
  else if (lVar1 == 2) {
    *(undefined1 *)(param_5 + 0xb8) = 1;
    lVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_7,param_6,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf49220(*(undefined8 *)(param_5 + 0x58));
    param_1 = param_2 + param_1;
    func_0x00010becf640(param_1,param_5);
    dVar3 = param_1;
    func_0x00010bf49220(*(undefined8 *)(param_5 + 0x58));
    func_0x00010c181140(dVar3 + param_1 * param_2,*(undefined8 *)(param_5 + 0x58));
    lVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219ba0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_7,param_6,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else if (lVar1 == 1) {
    func_0x00010bdda780(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10b80c4c0; end: 10b80c4db; -[SIGNotificationImageInfoPresenterPrivate _handleTapAction] */

void FUN_10b80c4c0(long param_1)

{
  if (((*(byte *)(param_1 + 0xb8) & 1) == 0) && (*(long *)(param_1 + 0x48) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b80c4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b80c4dc; end: 10b80c593; -[SIGNotificationImageInfoPresenterPrivate _handleURL] */

void FUN_10b80c4dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(param_1 + 0x38);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf2cf00();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 == 0) goto LAB_10b80c578;
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80();
  }
  _objc_release(puVar1);
LAB_10b80c578:
                    /* WARNING: Could not recover jumptable at 0x00010be0bad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeDismissAnimationWithReas_112560850,3)
  ;
  return;
}



/* Entry: 10b80c594; end: 10b80c67b; -[SIGNotificationImageInfoPresenterPrivate _resetToInitialState] */

void FUN_10b80c594(long param_1,undefined8 param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + 0xb8) = 0;
  func_0x00010c181140(0,*(undefined8 *)(param_1 + 0x58));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10b80c630;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b80c67c;
  puStack_58 = &UNK_110841f20;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,
                      &puStack_70);
  return;
}



/* Entry: 10b80c67c; end: 10b80c68b;  */

void FUN_10b80c67c(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9af90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__scheduleDismissBlock_112584588);
    return;
  }
  return;
}



/* Entry: 10b80c68c; end: 10b80c78b; -[SIGNotificationImageInfoPresenterPrivate _executeDismissAnimationWithReason:] */

void FUN_10b80c68c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf71ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c162480(*(undefined8 *)(param_1 + 0x58));
    func_0x00010c162480(*(undefined8 *)(param_1 + 0x60));
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0b9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__executeCompletionBlockWithReaso_112560808,param_3);
  return;
}



/* Entry: 10b80c78c; end: 10b80c817;  */

void FUN_10b80c78c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf71ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b80c818; end: 10b80c8d7; -[SIGNotificationImageInfoPresenterPrivate _executeCompletionBlockWithReason:] */

void FUN_10b80c818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x68);
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0xb0);
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0xa8);
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar4);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3);
  }
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b80c8d8; end: 10b80c9d3; -[SIGNotificationImageInfoPresenterPrivate .cxx_destruct] */

void FUN_10b80c8d8(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b80c9d4; end: 10b80ca6f; -[SIGNotificationInfoDialog initWithWithType:text:] */

undefined1 *
FUN_10b80c9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bde5be0(puVar1);
    func_0x00010bde5260(puVar1);
    func_0x00010bde5e40(puVar1);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b80ca70; end: 10b80caa7; -[SIGNotificationInfoDialog _configureLayoutMargins] */

void FUN_10b80ca70(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1ad9a0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c18e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4010000000000000,0x4030000000000000,0x4010000000000000,0x4030000000000000,param_1,
             PTR_s_setDirectionalLayoutMargins__1126412a0);
  return;
}



/* Entry: 10b80caa8; end: 10b80cb03; -[SIGNotificationInfoDialog _configureStyleWithType:] */

void FUN_10b80caa8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  if (param_3 < 4) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10e5f24f0 + param_3 * 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b80cb04; end: 10b80ce5f; -[SIGNotificationInfoDialog _configureUIWithText:] */

void FUN_10b80cb04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126aea58;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c160fc0();
  func_0x00010c21ad00(puVar1,param_2,0x17);
  func_0x00010c1c3ae0(0x4030000000000000,puVar1);
  func_0x00010c165e00(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c212f20(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1bdb00(puVar1,param_2,4);
  func_0x00010c1cfce0(puVar1,param_2,2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010befbb60(param_1,param_2,puVar1);
  uVar3 = param_1;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_88 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puStack_80 = puVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010c274200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf493a0(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  puStack_78 = puVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar3;
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493a0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4010000000000000);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126e15d0;
  func_0x00010bf55ce0(PTR_PTR_1126e15d0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126afde0;
  _objc_alloc(PTR_PTR_1126afde0);
  func_0x00010c03a360();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80ce60; end: 10b80ceb3; +[SIGNotificationInfoPresenter createDestructivePresenterWithText:accessibilityIdentifier:] */

void FUN_10b80ce60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15d0;
  func_0x00010bf55ce0(PTR_PTR_1126e15d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  _objc_alloc(PTR_PTR_1126afde0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80ceb4; end: 10b80cf07; +[SIGNotificationInfoPresenter createAffirmativePresenterWithText:accessibilityIdentifier:] */

void FUN_10b80ceb4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15d0;
  func_0x00010bf54760(PTR_PTR_1126e15d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  _objc_alloc(PTR_PTR_1126afde0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80cf08; end: 10b80cf5b; +[SIGNotificationInfoPresenter createSnapPlusPresenterWithText:accessibilityIdentifier:] */

void FUN_10b80cf08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15d0;
  func_0x00010bf58f80(PTR_PTR_1126e15d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  _objc_alloc(PTR_PTR_1126afde0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80cf5c; end: 10b80cfaf; +[SIGNotificationInfoPresenter createPresenterWithText:accessibilityIdentifier:] */

void FUN_10b80cf5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e15d0;
  func_0x00010bf57f80(PTR_PTR_1126e15d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  _objc_alloc(PTR_PTR_1126afde0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b80cfb0; end: 10b80d023; -[SIGNotificationInfoPresenter initWithPrivatePresenter:] */

undefined1 * FUN_10b80cfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270b228;
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



/* Entry: 10b80d024; end: 10b80d02b; -[SIGNotificationInfoPresenter containerView] */

void FUN_10b80d024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_containerView_1125b0650)
  ;
  return;
}



/* Entry: 10b80d02c; end: 10b80d033; -[SIGNotificationInfoPresenter presentNotificationOverView:completion:] */

void FUN_10b80d02c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10d3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_presentNotificationOverView_comp_112620f08);
  return;
}



/* Entry: 10b80d034; end: 10b80d03b; -[SIGNotificationInfoPresenter debugInfo] */

void FUN_10b80d034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf66210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_debugInfo_1125b7228);
  return;
}



/* Entry: 10b80d03c; end: 10b80d047; -[SIGNotificationInfoPresenter .cxx_destruct] */

void FUN_10b80d03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b80d048; end: 10b80d0b7; +[SIGNotificationInfoPresenterPrivate createDestructivePresenterWithText:accessibilityIdentifier:] */

void FUN_10b80d048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c056180();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80d0b8; end: 10b80d127; +[SIGNotificationInfoPresenterPrivate createAffirmativePresenterWithText:accessibilityIdentifier:] */

void FUN_10b80d0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c056180();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80d128; end: 10b80d197; +[SIGNotificationInfoPresenterPrivate createSnapPlusPresenterWithText:accessibilityIdentifier:] */

void FUN_10b80d128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c056180();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80d198; end: 10b80d207; +[SIGNotificationInfoPresenterPrivate createPresenterWithText:accessibilityIdentifier:] */

void FUN_10b80d198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e15d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c056180();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b80d208; end: 10b80d31b; -[SIGNotificationInfoPresenterPrivate initWithType:text:accessibilityIdentifier:] */

undefined8 *
FUN_10b80d208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270b230;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
    uVar5 = param_4;
    func_0x00010bf51e00();
    uVar4 = puVar1[2];
    puVar1[2] = uVar5;
    _objc_release(uVar4);
    uVar5 = param_5;
    func_0x00010bf51e00();
    uVar4 = puVar1[3];
    puVar1[3] = uVar5;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b80d31c; end: 10b80d387; -[SIGNotificationInfoPresenterPrivate dialog] */

void FUN_10b80d31c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126e15a8;
    _objc_alloc();
    func_0x00010c063400();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x00010c219b60(*(undefined8 *)(param_1 + 0x20),param_2,0);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b80d388; end: 10b80d38b; -[SIGNotificationInfoPresenterPrivate containerView] */

void FUN_10b80d388(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf71cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dialog_1125ba0e0);
  return;
}



/* Entry: 10b80d38c; end: 10b80d397; -[SIGNotificationInfoPresenterPrivate presentNotificationOverView:completion:] */

void FUN_10b80d38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0694f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_internalPresentNotificationOverV_1125f7f48,param_3,1,param_4);
  return;
}



/* Entry: 10b80d398; end: 10b80d8b7; -[SIGNotificationInfoPresenterPrivate internalPresentNotificationOverView:animateAndRemoveAfterDelay:completion:] */

void FUN_10b80d398(double param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10b80d8b8;
  puStack_b0 = &UNK_110849530;
  _objc_retain(param_6);
  ppuVar2 = &puStack_c8;
  uStack_a8 = param_6;
  _objc_retainBlock();
  if (param_4 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    uVar3 = param_2;
    func_0x00010bf71ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_4);
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010c274200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14da40(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar6 = uVar4;
    func_0x00010bf493c0(param_1 + 16.0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010c274200(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = param_2;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    uStack_a0 = uVar8;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_4;
    func_0x00010c2793a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar12;
    func_0x00010bf71ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf494e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar14;
    uStack_88 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(param_2);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c08cdc0(param_4);
    func_0x00010c162480(uVar7);
    func_0x00010c162480(uVar6);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if ((param_5 & 1) == 0) {
      func_0x00010c08cdc0(param_4);
      (*(code *)ppuVar2[2])(ppuVar2);
    }
    else {
      _objc_retain(param_4);
      func_0x00010bf03440(0x3fd3333333333333,0,puVar1);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_retain(uVar6);
      _objc_retain(uVar7);
      _objc_retain(param_4);
      _objc_retain(ppuVar2);
      func_0x00010bf03440(0x3fd3333333333333,0x4008000000000000,puVar1);
      _objc_release(ppuVar2);
      _objc_release(param_4);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(param_4);
    }
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_a8);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_4 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b80d8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_4 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b80d8b8; end: 10b80d8d3;  */

void FUN_10b80d8b8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b80d8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b80d8d4; end: 10b80d94f;  */

void FUN_10b80d8d4(long param_1,undefined8 param_2)

{
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10b80d950; end: 10b80d977; -[SIGNotificationInfoPresenterPrivate debugInfo] */

void FUN_10b80d950(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b80d978; end: 10b80d9bf; -[SIGNotificationInfoPresenterPrivate .cxx_destruct] */

void FUN_10b80d978(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b80d9c0; end: 10b80da4f; -[SIGNotificationObservablePresenter initWithPresenter:] */

undefined1 * FUN_10b80d9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270b238;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b80da50; end: 10b80da77; -[SIGNotificationObservablePresenter notificationAppearenceObservable] */

void FUN_10b80da50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b80da78; end: 10b80db9f; -[SIGNotificationObservablePresenter presentNotificationOverView:completion:] */

void FUN_10b80da78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c10d3a0(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b80dba0; end: 10b80dbe7;  */

void FUN_10b80dba0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf436e0(*(undefined8 *)(lVar1 + 0x18));
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b80dbe8; end: 10b80dbef; -[SIGNotificationObservablePresenter containerView] */

void FUN_10b80dbe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_containerView_1125b0650)
  ;
  return;
}



/* Entry: 10b80dbf0; end: 10b80dbf7; -[SIGNotificationObservablePresenter debugInfo] */

void FUN_10b80dbf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf66210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_debugInfo_1125b7228);
  return;
}



/* Entry: 10b80dbf8; end: 10b80dc33; -[SIGNotificationObservablePresenter .cxx_destruct] */

void FUN_10b80dbf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b80dc34; end: 10b80de23; -[SIGIndicatorView initWithPinCodeLength:strokeColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b80dc34(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  puStack_78 = PTR_PTR_11270b240;
  uStack_80 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_80,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(ulong *)((long)puVar1 + (long)_DAT_11279416c) = param_3;
    lVar6 = (long)_DAT_112794170;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    lVar6 = (long)_DAT_112794174;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar2);
    if (param_3 != 0) {
      uVar7 = 0;
      do {
        puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
        _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
        func_0x00010befa120(*(undefined8 *)((long)puVar1 + lVar6));
        puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
        func_0x00010bf199a0((double)(uVar7 & 0xffffffff) * 28.0,0,0x4028000000000000,
                            0x4028000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc1040();
        func_0x00010c1d9820(puVar3);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        func_0x00010c19bc00(puVar3);
        _objc_release(puVar4);
        _objc_retainAutorelease(param_4);
        func_0x00010bdc0fe0();
        func_0x00010c20e8e0(puVar3);
        puVar5 = (undefined1 *)puVar1;
        func_0x00010c08c0e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb20();
        _objc_release(puVar5);
        func_0x00010c1733a0(0x4014000000000000,puVar3);
        _objc_release(puVar3);
        uVar7 = uVar7 + 1;
      } while (param_3 != uVar7);
    }
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b80de24; end: 10b80de47; -[SIGIndicatorView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b80de24(long param_1)

{
  return (double)(*(long *)(param_1 + _DAT_11279416c) - 1) * 28.0 + 12.0;
}



/* Entry: 10b80de48; end: 10b80dec7; -[SIGIndicatorView setFilledCircles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80de48(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      func_0x00010bfad560(param_1,param_2,uVar1);
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  lVar2 = (long)_DAT_112794168;
  uVar1 = param_3;
  if (param_3 < *(ulong *)(param_1 + lVar2)) {
    do {
      func_0x00010c27fac0(param_1,param_2,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulong *)(param_1 + lVar2));
  }
  *(ulong *)(param_1 + lVar2) = param_3;
  return;
}



/* Entry: 10b80dec8; end: 10b80df7b; -[SIGIndicatorView fillIndicatorAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80dec8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794174);
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b80df7c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar2;
  lStack_38 = param_1;
  _objc_retain();
  func_0x00010c27ac60(0x3fd3333333333333,puVar1,param_2,param_1,0x500000,&puStack_60,0);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b80df7c; end: 10b80dfb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80df7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112794170);
  func_0x00010bdc0fe0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c19bc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setFillColor__112644920,uVar1);
  return;
}



/* Entry: 10b80dfb4; end: 10b80e067; -[SIGIndicatorView unfillIndicatorAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80dfb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794174);
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b80e068;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar2;
  _objc_retain();
  func_0x00010c27ac60(0x3fd3333333333333,puVar1,param_2,param_1,0x500000,&puStack_58,0);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b80e068; end: 10b80e0b7;  */

void FUN_10b80e068(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b80e0b8; end: 10b80e1bb; -[SIGIndicatorView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80e0b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112794174;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar7 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0dfd20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = (long)_DAT_112794170;
      func_0x00010bdc0fe0(*(undefined8 *)(param_1 + lVar1));
      func_0x00010c20e8e0(uVar2);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar5 = uVar2;
      func_0x00010bfad500(uVar2);
      _CGColorEqualToColor(puVar4,uVar5);
      _objc_release(puVar3);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x00010bdc0fe0(*(undefined8 *)(param_1 + lVar1));
        func_0x00010c19bc00(uVar2);
      }
      _objc_release(uVar2);
      uVar7 = uVar7 + 1;
      uVar6 = *(ulong *)(param_1 + lVar8);
      func_0x00010bf529e0();
    } while (uVar7 < uVar6);
  }
  return;
}



/* Entry: 10b80e1bc; end: 10b80e1cb; -[SIGIndicatorView filledCircles] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b80e1bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794168);
}



/* Entry: 10b80e1cc; end: 10b80e20b; -[SIGIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80e1cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794170,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794174,0);
  return;
}



/* Entry: 10b80e20c; end: 10b80e5e3; -[SIGNumericEntryView initWithDelegate:withPinCodeLength:withStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b80e20c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_11270b248;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112794178,param_3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279417c) = param_4;
    uVar14 = 0xc6;
    if (param_5 != 1) {
      uVar14 = 0x90;
    }
    uVar8 = 0xcd;
    if (param_5 != 2) {
      uVar8 = uVar14;
    }
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794180) = uVar8;
    puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar14 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794184);
    *(undefined **)((long)puVar1 + (long)_DAT_112794184) = puVar2;
    _objc_release(uVar14);
    puVar2 = PTR_PTR_1126e15d8;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035fc0();
    lVar15 = (long)_DAT_112794188;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar14);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar14;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar14);
    _objc_release(puVar5);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126e15e0;
    _objc_alloc();
    func_0x00010c04eb80();
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar9 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf493c0(0x4052000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    puStack_88 = puVar10;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar7);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  return param_3;
}



/* Entry: 10b80e5e4; end: 10b80e5f7; -[SIGNumericEntryView intrinsicContentSize] */

undefined1  [16] FUN_10b80e5e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x407ba00000000000;
  auVar1._0_8_ = 0x4070800000000000;
  return auVar1;
}



/* Entry: 10b80e5f8; end: 10b80e703; -[SIGNumericEntryView reset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80e5f8(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_alloc();
  func_0x00010bffc4a0();
  lVar3 = (long)_DAT_112794184;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  if (param_3 != 0) {
    _AudioServicesPlayAlertSound(0xfff);
    func_0x00010bf02ee0(0x3fd3333333333334,0,PTR__OBJC_CLASS___UIView_1126aec20);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08fa60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c19bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794188),PTR_s_setFilledCircles__112644950,uVar2);
  return;
}



/* Entry: 10b80e704; end: 10b80e7f3;  */

void FUN_10b80e704(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b80e7f4;
  puStack_50 = &UNK_110842e18;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0,0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10b80e880;
  puStack_78 = &UNK_110842e18;
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0x3fd999999999999a,0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,&puStack_90);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10b80e914;
  puStack_a0 = &UNK_110842e18;
  uStack_98 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0x3fe999999999999a,0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,&puStack_b8);
  return;
}



/* Entry: 10b80e7f4; end: 10b80e99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80e7f4(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)_DAT_112794188;
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
  uVar2 = 0x4044000000000000;
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + 40.0,uVar2,param_3,*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b80e99c; end: 10b80e9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80e99c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794184);
  func_0x00010c08fa60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c19bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794188),
             PTR_s_setFilledCircles__112644950,uVar1);
  return;
}



/* Entry: 10b80e9e0; end: 10b80eae7; -[SIGNumericEntryView didTapNumericKeyWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80e9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112794184;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = (long)_DAT_11279417c;
  if (uVar1 < *(ulong *)(param_1 + lVar5)) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c268120();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110daea58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08fa60(uVar3);
    func_0x00010c19bcc0(*(undefined8 *)(param_1 + _DAT_112794188),param_2,uVar3);
  }
  lVar4 = *(long *)(param_1 + lVar4);
  func_0x00010c08fa60();
  if (lVar4 == *(long *)(param_1 + lVar5)) {
    param_1 = param_1 + _DAT_112794178;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0df8e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b80eae8; end: 10b80eb63; -[SIGNumericEntryView didTapBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80eae8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112794184;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08fa60(uVar2);
    func_0x00010bf6b860(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c08fa60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c19bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112794188),PTR_s_setFilledCircles__112644950,uVar2);
    return;
  }
  return;
}



/* Entry: 10b80eb64; end: 10b80ebaf; -[SIGNumericEntryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80eb64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794184,0);
  _objc_storeStrong(param_1 + _DAT_112794188,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112794178);
  return;
}



/* Entry: 10b80ebb0; end: 10b80f0a7; -[SIGNumericKey initWithKeyValue:fillColor:textColor:strokeColor:highlightColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b80ebb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_a0 = PTR_PTR_11270b250;
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(uVar8,uVar9,uVar10,uVar11,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_11279418c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 **)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112794190;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112794194;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4042000000000000);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar7 = (long)_DAT_112794198;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar8);
    puVar4 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09e880(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar4);
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c16e440(puVar1);
    _objc_retainAutorelease(param_6);
    func_0x00010bdc0fe0();
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4020000000000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3dcccccd);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4008000000000000);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb41a0(0x403c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar8;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar11;
    func_0x00010bf493c0(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar9);
    _objc_release(puVar6);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(uVar10);
    func_0x00010befbd60(puVar1);
    func_0x00010befbd60(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  return param_4;
}



/* Entry: 10b80f0a8; end: 10b80f0b7; -[SIGNumericKey intrinsicContentSize] */

void FUN_10b80f0a8(void)

{
  return;
}



/* Entry: 10b80f0b8; end: 10b80f123; -[SIGNumericKey _touchDownNumericKey] */

void FUN_10b80f0b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b80f124;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c27ac60(0x3fb99999a0000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,param_1,0x500000
                      ,&puStack_38,0);
  return;
}



/* Entry: 10b80f124; end: 10b80f193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80f124(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c16e440(*(long *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794194));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794198),param_2,
                      puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b80f194; end: 10b80f1ff; -[SIGNumericKey _touchUpNumericKey] */

void FUN_10b80f194(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b80f200;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c27ac60(0x3fb99999a0000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,param_1,0x500000
                      ,&puStack_38,0);
  return;
}



/* Entry: 10b80f200; end: 10b80f247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80f200(long param_1,undefined8 param_2)

{
  func_0x00010c16e440(*(long *)(param_1 + 0x20),param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11279418c));
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794198),
             PTR_s_setTextColor__112662688,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794190));
  return;
}



/* Entry: 10b80f248; end: 10b80f2a7; -[SIGNumericKey .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80f248(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794198,0);
  _objc_storeStrong(param_1 + _DAT_112794194,0);
  _objc_storeStrong(param_1 + _DAT_112794190,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279418c,0);
  return;
}



/* Entry: 10b80f2a8; end: 10b80f6e7; -[SIGBackButton initWithFillColor:iconColor:strokeColor:highlightColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b80f2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_11270b258;
  uStack_80 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_80,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_11279419c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_3;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_1127941a0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_4;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_1127941a4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x00010c0d18c0(0x4028000000000000,0x4041800000000000);
    func_0x00010bef98c0(0x4038000000000000,0x4037000000000000,puVar3);
    func_0x00010bef98c0(0x4048000000000000,0x4037000000000000,puVar3);
    func_0x00010bef98c0(0x4048000000000000,0x4047800000000000,puVar3);
    func_0x00010bef98c0(0x4038000000000000,0x4047800000000000,puVar3);
    func_0x00010bf3dc80(puVar3);
    puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_1127941a8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar4;
    _objc_release(uVar2);
    _objc_retainAutorelease(puVar3);
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010bf20c00(puVar1);
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_retainAutorelease(param_5);
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c1bdd00(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar9));
    _objc_retainAutorelease(param_3);
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c1fe840(0x4020000000000000,*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c1fe800(0x3dcccccd,*(undefined8 *)((long)puVar1 + lVar9));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c1fe740(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar4);
    func_0x00010c1fe7a0(0,0x4008000000000000,*(undefined8 *)((long)puVar1 + lVar9));
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x00010c0d18c0(0x403e000000000000,0x4044000000000000);
    func_0x00010bef98c0(0x4044000000000000,0x403e000000000000,puVar4);
    puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x00010c0d18c0(0x403e000000000000,0x403e000000000000);
    func_0x00010bef98c0(0x4044000000000000,0x4044000000000000,puVar6);
    puVar7 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_1127941ac;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar7;
    _objc_release(uVar2);
    _objc_retainAutorelease(puVar4);
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1bdd00(0x4000000000000000,*(undefined8 *)((long)puVar1 + lVar8));
    _objc_retainAutorelease(param_4);
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb20(*(undefined8 *)((long)puVar1 + lVar9));
    puVar7 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_1127941b0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar7;
    _objc_release(uVar2);
    _objc_retainAutorelease(puVar6);
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1bdd00(0x4000000000000000,*(undefined8 *)((long)puVar1 + lVar8));
    _objc_retainAutorelease(param_4);
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb20(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010befbd60(puVar1);
    func_0x00010befbd60(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b80f6e8; end: 10b80f6f7; -[SIGBackButton intrinsicContentSize] */

void FUN_10b80f6e8(void)

{
  return;
}



/* Entry: 10b80f6f8; end: 10b80f763; -[SIGBackButton _touchDownBackButton] */

void FUN_10b80f6f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b80f764;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c27ac60(0x3fb99999a0000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,param_1,0x500000
                      ,&puStack_38,0);
  return;
}



/* Entry: 10b80f764; end: 10b80f82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80f764(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127941a4);
  func_0x00010bdc0fe0(uVar1);
  func_0x00010c19bc00(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127941a8),param_2,
                      uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127941ac),param_2,
                      puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127941b0),param_2,
                      puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b80f82c; end: 10b80f897; -[SIGBackButton _touchUpBackButton] */

void FUN_10b80f82c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b80f898;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c27ac60(0x3fb99999a0000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,param_1,0x500000
                      ,&puStack_38,0);
  return;
}



/* Entry: 10b80f898; end: 10b80f927;  */

/* WARNING: Possible PIC construction at 0x00010b80f8f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b80f8fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80f898(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc0fe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11279419c));
  func_0x00010c19bc00(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127941a8));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127941a0);
  func_0x00010bdc0fe0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c20e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127941ac),
             PTR_s_setStrokeColor__112661460,uVar1);
  return;
}



/* Entry: 10b80f928; end: 10b80f9a7; -[SIGBackButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80f928(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127941a4,0);
  _objc_storeStrong(param_1 + _DAT_1127941a0,0);
  _objc_storeStrong(param_1 + _DAT_11279419c,0);
  _objc_storeStrong(param_1 + _DAT_1127941b0,0);
  _objc_storeStrong(param_1 + _DAT_1127941ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127941a8,0);
  return;
}



/* Entry: 10b80f9a8; end: 10b8102bf; -[SIGNumericKeyView initWithStyle:delegate:] */

undefined8 *
FUN_10b80f9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puStack_120 = PTR_PTR_11270b260;
  puVar1 = &uStack_128;
  uStack_128 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar16 = 0;
    do {
      puVar3 = PTR_PTR_1126e15e8;
      _objc_alloc(PTR_PTR_1126e15e8);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020fe0(puVar3);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010befa120(puVar2);
      func_0x00010befbd60(puVar3);
      func_0x00010c211780(puVar3);
      _objc_release(puVar3);
      lVar16 = lVar16 + 1;
    } while (lVar16 != 10);
    puVar4 = PTR_PTR_1126e15f0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012f40();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    func_0x00010befbd60(puVar4);
    puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    puStack_98 = puVar3;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    puStack_90 = puVar6;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    func_0x00010c16e060(puVar5);
    func_0x00010c166c00(puVar5);
    func_0x00010c207380(0x4038000000000000,puVar5);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf49420(0x4070800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    puStack_a8 = puVar7;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf49420(0x4052000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    puStack_c8 = puVar3;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    puStack_c0 = puVar7;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    puStack_b8 = puVar8;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    func_0x00010c16e060(puVar6);
    func_0x00010c166c00(puVar6);
    func_0x00010c207380(0x4038000000000000,puVar6);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar6);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar7 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c2793a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493c0(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    puStack_e0 = puVar9;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf49420(0x4076800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar6;
    puStack_d8 = puVar11;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf49420(0x4052000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d0 = puVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    puStack_100 = puVar3;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    puStack_f8 = puVar8;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f0 = puVar9;
    puStack_e8 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar3);
    func_0x00010c16e060(puVar7);
    func_0x00010c166c00(puVar7);
    func_0x00010c207380(0x4038000000000000,puVar7);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar7);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar10 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493c0(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar7;
    puStack_118 = puVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf49420(0x4076800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar7;
    puStack_110 = puVar14;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar15;
    func_0x00010bf49420(0x4052000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_108 = puVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    return param_4;
  }
  return puVar1;
}



/* Entry: 10b8102c0; end: 10b8102d3; -[SIGNumericKeyView intrinsicContentSize] */

undefined1  [16] FUN_10b8102c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4076800000000000;
  auVar1._0_8_ = 0x4070800000000000;
  return auVar1;
}



/* Entry: 10b8102d4; end: 10b8103f7; -[SIGRingView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b8102d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270b268;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b52f0;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar4 = (long)_DAT_1127941b4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c22a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127941b8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127941b8) = puVar2;
    _objc_release(uVar3);
    func_0x00010beda6c0(param_1,param_2,param_3,param_4,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b8103f8; end: 10b810413;  */

void FUN_10b8103f8(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b810414; end: 10b810667; -[SIGRingView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b810414(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_11270b268;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar6 = (long)_DAT_1127941b8;
  lVar1 = *(long *)(param_3 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    dVar7 = (double)NEON_fminnm(param_1 * 0.3009999990463257,0x403c000000000000);
    dVar8 = 15.0;
    if (15.0 <= dVar7) {
      dVar8 = dVar7;
    }
    uVar3 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    param_2 = (dVar8 * dVar7) / param_2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    dVar7 = 0.0;
    uVar3 = 0;
    FUN_10b816528(0,0,param_2,dVar8);
    uVar4 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(dVar7,uVar3,param_2,dVar8);
    _objc_release(uVar4);
    func_0x00010bf20c00(param_3);
    _CGRectGetMidX();
    dVar8 = dVar7;
    func_0x00010bf20c00(param_3);
    _CGRectGetMaxY();
    uVar4 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar7,dVar8 * 0.972000002861023);
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar5 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_2 * 0.5);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  func_0x00010bf20c00(param_3);
  func_0x00010beda6c0(param_3);
  return;
}



/* Entry: 10b810668; end: 10b81076f; -[SIGRingView _updateLayerPathWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b810668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_1127941bc);
  uVar2 = param_5;
  _CGRectEqualToRect();
  if ((uVar2 & 1) != 0) {
    return;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if (*(double *)(param_5 + (long)_DAT_1127941c0) <= 0.0) {
    func_0x00010bf199a0(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf19a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar4 = *(undefined8 *)(param_5 + (long)_DAT_1127941b4);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b810770; end: 10b810807; -[SIGRingView traitCollectionDidChange:] */

void FUN_10b810770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_38 = PTR_PTR_11270b268;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  uVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd64c0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010bea6da0(param_1);
  }
  return;
}



/* Entry: 10b810808; end: 10b8108cf; -[SIGRingView _setRingBorderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b810808(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126bd8e0;
  uVar5 = *(ulong *)(param_1 + _DAT_1127941c4);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if (uVar1 != 0) {
    func_0x00010bf1fb20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127941b4);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8e0();
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b8108d0; end: 10b810aa3; -[SIGRingView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8108d0(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126bd8e0;
  _objc_opt_class(PTR_PTR_1126bd8e0);
  uVar5 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_1127941c4;
  uVar5 = *(ulong *)(param_2 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_10b810a80;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_2 + lVar6);
    *(ulong *)(param_2 + lVar6) = uVar1;
    _objc_release(uVar4);
    func_0x00010bf1fc80(uVar1);
    uVar4 = *(undefined8 *)(param_2 + _DAT_1127941b4);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd00(param_1);
    _objc_release(uVar4);
    func_0x00010bea6da0(param_2);
    uVar5 = uVar1;
    func_0x00010bfe5680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      uVar5 = *(ulong *)(param_2 + _DAT_1127941b8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      uVar5 = uVar1;
      func_0x00010bfe5680(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bfe54e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c141ea0(uVar1);
      func_0x00010c239aa0(param_2);
      _objc_release(uVar3);
    }
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_2);
  }
LAB_10b810a80:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b810aa4; end: 10b810adf; -[SIGRingView setCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b810aa4(double param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(double *)(param_2 + _DAT_1127941c0) == param_1) {
    return;
  }
  *(double *)(param_2 + _DAT_1127941c0) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_1127941bc);
  uVar2 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  uVar4 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
  uVar3 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b810ae0; end: 10b810d1f; -[SIGRingView showRingBottomIcon:iconColor:roundedIconCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b810ae0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_1127941b8;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c1a9f00(uVar2,param_2,param_3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(uVar2);
    puVar3 = *(undefined **)(param_1 + lVar5);
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
  }
  else {
    uVar4 = param_3;
    func_0x00010bfe9720(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(uVar2,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
  }
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    func_0x00010c1842e0(0,uVar2);
  }
  else {
    func_0x00010c1c2d20(uVar2,param_2,1);
  }
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b810d20; end: 10b810d77; +[SIGRingView insetWithViewModel:] */

double FUN_10b810d20(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  _objc_retain(param_4);
  func_0x00010bf1fb80(param_4);
  dVar1 = param_1;
  func_0x00010bf1fc80(param_4);
  _objc_release(param_4);
  return param_1 + dVar1 * 0.5;
}



/* Entry: 10b810d78; end: 10b810d87; -[SIGRingView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b810d78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127941c4);
}



/* Entry: 10b810d88; end: 10b810d97; -[SIGRingView cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b810d88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127941c0);
}



/* Entry: 10b810d98; end: 10b810de7; -[SIGRingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b810d98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127941c4,0);
  _objc_storeStrong(param_1 + _DAT_1127941b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127941b4,0);
  return;
}


