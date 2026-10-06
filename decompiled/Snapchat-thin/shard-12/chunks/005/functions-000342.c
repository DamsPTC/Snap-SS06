/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091d55f4; end: 1091d574f; -[SCLensSideButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091d55f4(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_112700cf8;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  cVar1 = *(char *)(param_5 + _DAT_112782fc8);
  func_0x00010bf20c00(param_5);
  if (cVar1 == '\x01') {
    param_1 = (param_3 + -42.0) * 0.5;
    func_0x00010bf20c00(param_5);
    param_2 = (param_4 + -42.0) * 0.5;
    param_3 = 42.0;
    param_4 = 42.0;
  }
  lVar2 = param_5;
  func_0x00010bfe90c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010bfe90c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar4 = param_1 * 0.7;
  lVar3 = param_5;
  func_0x00010bfe90c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  func_0x00010c17a6a0(dVar4,param_1 * 0.3,*(undefined8 *)(param_5 + _DAT_112782fcc));
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1091d5750; end: 1091d57bf; -[SCLensSideButton setImage:] */

void FUN_1091d5750(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112700cf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setImage__1126481e8);
  uVar1 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(uVar1);
  func_0x00010bed9820(param_1);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 1091d57c0; end: 1091d5863; -[SCLensSideButton _animateImageViewCrossDissolveWithAnimations:] */

void FUN_1091d57c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091d5864;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c27ac60(0x3fd0000000000000,puVar1,param_2,param_1,0x500000,&puStack_60,0);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1091d5864; end: 1091d5893;  */

void FUN_1091d5864(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed9830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateImageViewInsets_112593fb0);
  return;
}



/* Entry: 1091d5894; end: 1091d5967; -[SCLensSideButton setBadged:] */

/* WARNING: Possible PIC construction at 0x0001091d5948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001091d594c) */
/* WARNING: Removing unreachable block (ram,0x00010c12c960) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091d5894(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  if (*(byte *)(param_1 + _DAT_112782fd0) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112782fd0) = (char)param_3;
  if (param_3 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f2bc38;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfe90c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf155a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c1cbe20(param_1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f2bc58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAccessibilityIdentifier__112635e10,ppuVar3);
  return;
}



/* Entry: 1091d5968; end: 1091d5b8f; -[SCLensSideButton badgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091d5968(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_112782fcc;
  lVar3 = *(long *)(param_2 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bdd71e0(param_2);
    uVar2 = param_1;
    func_0x00010bdd71e0(param_2);
    uVar5 = 0;
    func_0x00010c013de0(0,0,param_1,uVar2);
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    *(undefined **)(param_2 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar4));
    _CGRectGetMidX();
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar5);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + lVar4),param_3,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar4));
    func_0x00010bf199a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3dcccccd);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar2);
    _objc_release(puVar1);
    lVar3 = *(long *)(param_2 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091d5b90; end: 1091d5cff; -[SCLensSideButton _observeImageUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091d5b90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar5 = (long)_DAT_112782fd4;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112782fc4);
    func_0x00010bf25720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0e60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 1091d5d00; end: 1091d5d4f;  */

void FUN_1091d5d00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1a9f00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091d5d50; end: 1091d5d57; -[SCLensSideButton _buttonBadgeDiameter] */

undefined8 FUN_1091d5d50(void)

{
  return 0x4024000000000000;
}



/* Entry: 1091d5d58; end: 1091d5e87; -[SCLensSideButton _updateImageViewInsets] */

void FUN_1091d5d58(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = param_3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar2 = param_1;
  func_0x00010bf20c00(param_3);
  _CGRectGetWidth();
  dVar3 = dVar2;
  _objc_release(uVar1);
  dVar5 = 0.0;
  dVar6 = 0.0;
  if (param_1 < dVar2) {
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
    uVar1 = param_3;
    dVar2 = dVar3;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar3 = dVar3 - dVar2;
    param_2 = 0.5;
    dVar6 = dVar3 * 0.5;
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar4 = param_2;
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  dVar2 = dVar3;
  _objc_release(uVar1);
  if (param_2 < dVar3) {
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    uVar1 = param_3;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar5 = (dVar2 - dVar4) * 0.5;
    _objc_release(uVar1);
  }
  func_0x00010b2bd9b4(dVar6,dVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c1aa430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setImageInset__112648330);
  return;
}



/* Entry: 1091d5e88; end: 1091d5f67; -[SCLensSideButton startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091d5e88(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf03d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112782fc4);
    func_0x00010bf25aa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfe90c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168240();
    _objc_release(lVar1);
    _objc_release(uVar3);
    lVar1 = param_1;
    func_0x00010bfe90c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1681a0(0x3ff3333340000000);
    _objc_release(lVar1);
  }
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d5f68; end: 1091d5f97; -[SCLensSideButton stopAnimating] */

void FUN_1091d5f68(undefined8 param_1)

{
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d5f98; end: 1091d5fa7; -[SCLensSideButton badged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1091d5f98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112782fd0);
}



/* Entry: 1091d5fa8; end: 1091d5ff7; -[SCLensSideButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091d5fa8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782fd4,0);
  _objc_storeStrong(param_1 + _DAT_112782fc4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782fcc,0);
  return;
}



/* Entry: 1091d5ff8; end: 1091d60df; -[SCFeatureLensPushNotificationImpl initWithLensCarouselManager:lensUnlocker:lensLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1091d5ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112700d00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112782fd8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112782fdc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112782fe0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091d60e0; end: 1091d623b; -[SCFeatureLensPushNotificationImpl handleTryLensesPushNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091d60e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if ((lVar1 == 0x19) || (lVar1 = param_3, func_0x00010c11c420(), lVar1 == 0x8e)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112782fe0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0dc140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce180(uVar2);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112782fd8);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c297280(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1091d623c; end: 1091d632b;  */

void FUN_1091d623c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c292820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c292820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be81a60(lVar1);
    _objc_release(param_2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1091d632c; end: 1091d6507; -[SCFeatureLensPushNotificationImpl _processNotificationWithLensId:deepLink:carouselManager:] */

void FUN_1091d632c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    lVar1 = 0;
    if (param_4 != 0) goto LAB_1091d63a0;
LAB_1091d63cc:
    if (lVar1 == 0) {
      func_0x00010be2b5e0(param_1);
      goto LAB_1091d64ac;
    }
    lVar2 = 0;
LAB_1091d63d4:
    _objc_retain(lVar1);
    lVar3 = lVar1;
    lVar4 = lVar2;
  }
  else {
    lVar1 = param_1;
    func_0x00010be4c0e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) goto LAB_1091d63cc;
LAB_1091d63a0:
    lVar2 = param_1;
    func_0x00010be4c0c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_1091d63cc;
    if (lVar1 != 0) goto LAB_1091d63d4;
    lVar4 = 0;
    lVar3 = lVar2;
  }
  _objc_retain(lVar2);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(lVar4);
  _objc_retain(param_5);
  func_0x00010bed1580(param_1);
  _objc_release(param_5);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_1091d64ac:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091d6508; end: 1091d6623;  */

void FUN_1091d6508(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (((param_2 == 0) || (param_3 != 0)) && (*(long *)(param_1 + 0x20) != 0)) {
      _objc_copyWeak(auStack_48,param_1 + 0x30);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar2);
      func_0x00010bed1580(lVar1);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_48);
    }
    else {
      func_0x00010be2b5e0(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1091d6624; end: 1091d6697;  */

void FUN_1091d6624(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2b5e0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091d6698; end: 1091d67c7; -[SCFeatureLensPushNotificationImpl _handleLensUnlockResult:error:carouselManager:] */

void FUN_1091d6698(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_5);
  lVar5 = 0;
  puVar6 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 == 0)) {
    _objc_retain(param_3);
    lVar5 = param_3;
    func_0x00010c094fa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b00f8;
    lVar1 = param_3;
    func_0x00010c094fa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar2 = lVar1;
    func_0x00010c094540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c159160(puVar6,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126b0240;
  _objc_alloc(PTR_PTR_1126b0240);
  func_0x00010bff0c60();
  uVar4 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef0080();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(lVar5);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1091d67c8; end: 1091d6877; -[SCFeatureLensPushNotificationImpl _unlockLensWithAction:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091d67c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112782fdc);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0f8040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1,param_2,param_4,param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091d6878; end: 1091d692b; -[SCFeatureLensPushNotificationImpl _lensUnlockActionWithLensId:] */

void FUN_1091d6878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010be45440(param_1,param_2,param_3);
  if ((int)param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b1ab8;
    _objc_alloc(PTR_PTR_1126b1ab8);
    func_0x00010c024960();
    puVar2 = PTR_PTR_1126b1ab0;
    func_0x00010c094620(PTR_PTR_1126b1ab0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091d692c; end: 1091d6aa3; -[SCFeatureLensPushNotificationImpl _lensUnlockActionWithDeepLink:] */

void FUN_1091d692c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar8 = puVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b1068;
      _objc_alloc(PTR_PTR_1126b1068);
      func_0x00010c057c40();
      puVar3 = PTR_PTR_1126cac80;
      func_0x00010c0b6120(PTR_PTR_1126cac80,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b1ab0;
      if (puVar3 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar4 = puVar3;
        func_0x00010c14f7e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c14f7e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c120080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14f560(puVar8,param_2,puVar5,0,puVar7,1,1,0xe);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_1091d6a80;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_1091d6a80:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1091d6aa4; end: 1091d6b3f; -[SCFeatureLensPushNotificationImpl _isValidLensId:] */

bool FUN_1091d6aa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf66760(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar2 = param_3;
    func_0x00010c11f340(param_3,param_2,puVar4);
    bVar1 = lVar2 == 0x7fffffffffffffff;
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1091d6b40; end: 1091d6b8f; -[SCFeatureLensPushNotificationImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091d6b40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782fe0,0);
  _objc_storeStrong(param_1 + _DAT_112782fdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782fd8,0);
  return;
}



/* Entry: 1091d6b90; end: 1091d6bdf; -[SCLensCarouselPlaceholderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091d6b90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782fec,0);
  _objc_storeStrong(param_1 + _DAT_112782fe8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782fe4,0);
  return;
}



/* Entry: 1091d6be0; end: 1091d6ce3; -[SCLensCarouselStartupWorkflow _resetPlaceholderView] */

void FUN_1091d6be0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = param_1;
  if (lVar2 != 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    _objc_retain(lVar2);
    lVar1 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar1 != 0) {
      lVar3 = *plStack_100;
      do {
        lVar4 = 0;
        do {
          if (*plStack_100 != lVar3) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_108 + lVar4 * 8));
          lVar4 = lVar4 + 1;
        } while (lVar1 != lVar4);
        lVar1 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1091d6ce4;
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1091d6d70;
  puStack_130 = &UNK_110842e18;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1091d6e68;
  puStack_158 = &UNK_110841f20;
  lStack_150 = lVar1;
  lStack_128 = lVar1;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bf03440(0x3fd6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,
                      &puStack_148,&puStack_170);
  return;
}



/* Entry: 1091d6ce4; end: 1091d6d6f; -[SCLensCarouselStartupWorkflow _hidePlaceholder] */

void FUN_1091d6ce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1091d6d70;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091d6e68;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010bf03440(0x3fd6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,
                      &puStack_38,&puStack_60);
  return;
}



/* Entry: 1091d6d70; end: 1091d6e67;  */

void FUN_1091d6d70(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c1677c0(0,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be93690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar4 + 0x20),PTR_s__resetPlaceholderView_112582740);
  return;
}



/* Entry: 1091d6e68; end: 1091d6e6f;  */

void FUN_1091d6e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be93690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetPlaceholderView_112582740);
  return;
}



/* Entry: 1091d6e70; end: 1091d6e73; -[SCLensCarouselStartupWorkflow carouselDidPresentContent] */

void FUN_1091d6e70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hidePlaceholder_11256b070);
  return;
}



/* Entry: 1091d6e74; end: 1091d6ec7; -[SCLensCarouselStartupWorkflow isPointInsideView:] */

void FUN_1091d6e74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc0000000;
  pcStack_30 = FUN_1091d6ec8;
  puStack_28 = &UNK_110ae01d8;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010bf04920(*(undefined8 *)(param_3 + 0x20),param_4,&puStack_40);
  return;
}



/* Entry: 1091d6ec8; end: 1091d6f27;  */

undefined8 FUN_1091d6ec8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf51200(uVar1,uVar2,param_2);
  uVar1 = param_2;
  func_0x00010c102b20(param_2);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1091d6f28; end: 1091d6f2b; -[SCLensCarouselStartupWorkflow setUIHidden:] */

void FUN_1091d6f28(void)

{
  return;
}



/* Entry: 1091d6f2c; end: 1091d6f6f; -[SCLensCarouselStartupWorkflow .cxx_destruct] */

void FUN_1091d6f2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d6f70; end: 1091d7013; -[SCLensCameraBottomViewContainerAdapter initWithCameraBottomViewContainer:lensCameraBottomViewContainer:] */

undefined1 *
FUN_1091d6f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700d18;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091d7014; end: 1091d701b; -[SCLensCameraBottomViewContainerAdapter appendSubview:] */

void FUN_1091d7014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf07130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appendSubview__11259f5f0);
  return;
}



/* Entry: 1091d701c; end: 1091d7033; -[SCLensCameraBottomViewContainerAdapter appendSubview:groupId:] */

void FUN_1091d701c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf07150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x10),PTR_s_appendSubview_groupId__11259f5f8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf07130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendSubview__11259f5f0);
  return;
}



/* Entry: 1091d7034; end: 1091d703b; -[SCLensCameraBottomViewContainerAdapter prependSubview:] */

void FUN_1091d7034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_prependSubview__1126203c8);
  return;
}



/* Entry: 1091d703c; end: 1091d7053; -[SCLensCameraBottomViewContainerAdapter prependSubview:groupId:] */

void FUN_1091d703c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x10),PTR_s_prependSubview_groupId__1126203d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c10a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_prependSubview__1126203c8);
  return;
}



/* Entry: 1091d7054; end: 1091d7083; -[SCLensCameraBottomViewContainerAdapter .cxx_destruct] */

void FUN_1091d7054(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d7084; end: 1091d7187; -[SCLensCameraFeatureContainerViewAdapter initWithFeatureContainerView:lensCarouselContainerView:lensCarouselLayoutGuide:lensCarouselVisibleLayoutGuide:alwaysOnCarouselEnabled:] */

undefined1 *
FUN_1091d7084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_112700d20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091d7188; end: 1091d728b; -[SCLensCameraFeatureContainerViewAdapter hidableBottomViewContainer] */

void FUN_1091d7188(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bfe1220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        puVar4 = PTR_PTR_1126ddc00;
        _objc_alloc(PTR_PTR_1126ddc00);
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010bfe1220(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffb020(puVar4,param_2,uVar2);
        _objc_release(uVar2);
        puVar3 = PTR_PTR_1126ddc08;
        _objc_alloc();
      }
      else {
        puVar3 = PTR_PTR_1126ddc08;
        _objc_alloc();
        puVar4 = *(undefined **)(param_1 + 0x10);
        func_0x00010bfe1220(puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010bffb040();
      uVar2 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar3;
      _objc_release(uVar2);
      _objc_release(puVar4);
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091d728c; end: 1091d7293; -[SCLensCameraFeatureContainerViewAdapter hidableViewContainer] */

void FUN_1091d728c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe12f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_hidableViewContainer_1125d5e78);
  return;
}



/* Entry: 1091d7294; end: 1091d72bb; -[SCLensCameraFeatureContainerViewAdapter lensCarouselContainerView] */

void FUN_1091d7294(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091d72bc; end: 1091d72c3; -[SCLensCameraFeatureContainerViewAdapter lensCarouselLayoutGuide] */

void FUN_1091d72bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1091d72c4; end: 1091d72cb; -[SCLensCameraFeatureContainerViewAdapter lensCarouselVisibleLayoutGuide] */

void FUN_1091d72c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_target_112678178);
  return;
}



/* Entry: 1091d72cc; end: 1091d72d3; -[SCLensCameraFeatureContainerViewAdapter captureButtonLayoutGuide] */

void FUN_1091d72cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2b310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_cameraTimerLayoutGuide_1125a8668);
  return;
}



/* Entry: 1091d72d4; end: 1091d72db; -[SCLensCameraFeatureContainerViewAdapter insertSubview:atIndexInFrontOfLiveDisplay:] */

void FUN_1091d72d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_insertSubview_atIndexInFrontOfLi_1125f7600);
  return;
}



/* Entry: 1091d72dc; end: 1091d732f; -[SCLensCameraFeatureContainerViewAdapter .cxx_destruct] */

void FUN_1091d72dc(long param_1)

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



/* Entry: 1091d7330; end: 1091d73fb; -[SCLensDefaultFeatureContainerViewAdapter initWithLensCarouselContainerView:lensCarouselLayoutGuide:lensCarouselVisibleLayoutGuide:] */

undefined1 *
FUN_1091d7330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112700d28;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091d73fc; end: 1091d7403; -[SCLensDefaultFeatureContainerViewAdapter captureButtonLayoutGuide] */

void FUN_1091d73fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 1091d7404; end: 1091d7453; -[SCLensDefaultFeatureContainerViewAdapter hidableBottomViewContainer] */

void FUN_1091d7404(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ddc10;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091d7454; end: 1091d747b; -[SCLensDefaultFeatureContainerViewAdapter hidableViewContainer] */

void FUN_1091d7454(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091d747c; end: 1091d74a3; -[SCLensDefaultFeatureContainerViewAdapter lensCarouselContainerView] */

void FUN_1091d747c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091d74a4; end: 1091d74ab; -[SCLensDefaultFeatureContainerViewAdapter lensCarouselLayoutGuide] */

void FUN_1091d74a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 1091d74ac; end: 1091d74b3; -[SCLensDefaultFeatureContainerViewAdapter lensCarouselVisibleLayoutGuide] */

void FUN_1091d74ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1091d74b4; end: 1091d74bb; -[SCLensDefaultFeatureContainerViewAdapter insertSubview:atIndexInFrontOfLiveDisplay:] */

void FUN_1091d74b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_insertSubview_atIndex__1125f75f8);
  return;
}



/* Entry: 1091d74bc; end: 1091d7503; -[SCLensDefaultFeatureContainerViewAdapter .cxx_destruct] */

void FUN_1091d74bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d7504; end: 1091d7507; -[SCLensNullCameraBottomViewContainer appendSubview:] */

void FUN_1091d7504(void)

{
  return;
}



/* Entry: 1091d7508; end: 1091d750b; -[SCLensNullCameraBottomViewContainer appendSubview:groupId:] */

void FUN_1091d7508(void)

{
  return;
}



/* Entry: 1091d750c; end: 1091d750f; -[SCLensNullCameraBottomViewContainer prependSubview:] */

void FUN_1091d750c(void)

{
  return;
}



/* Entry: 1091d7510; end: 1091d7513; -[SCLensNullCameraBottomViewContainer prependSubview:groupId:] */

void FUN_1091d7510(void)

{
  return;
}



/* Entry: 1091d7514; end: 1091d75a3; -[SCLensCameraBottomViewContainerDecorator initWithCameraBottomViewContainer:] */

undefined1 * FUN_1091d7514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700d30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091d75a4; end: 1091d75ab; -[SCLensCameraBottomViewContainerDecorator containerHeightObservable] */

void FUN_1091d75a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_containerHeightObservable_1125b0528);
  return;
}



/* Entry: 1091d75ac; end: 1091d75b3; -[SCLensCameraBottomViewContainerDecorator containerView] */

void FUN_1091d75ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_containerView_1125b0650)
  ;
  return;
}



/* Entry: 1091d75b4; end: 1091d75bb; -[SCLensCameraBottomViewContainerDecorator count] */

void FUN_1091d75b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1091d75bc; end: 1091d75c3; -[SCLensCameraBottomViewContainerDecorator appendSubview:] */

void FUN_1091d75bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf07150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendSubview_groupId__11259f5f8,param_3,0);
  return;
}



/* Entry: 1091d75c4; end: 1091d7627; -[SCLensCameraBottomViewContainerDecorator appendSubview:groupId:] */

void FUN_1091d75c4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bde0640(param_1,param_2,param_4);
    if (param_4 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    }
    func_0x00010bf07120(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091d7628; end: 1091d762f; -[SCLensCameraBottomViewContainerDecorator prependSubview:] */

void FUN_1091d7628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_prependSubview_groupId__1126203d0,param_3,0);
  return;
}



/* Entry: 1091d7630; end: 1091d7693; -[SCLensCameraBottomViewContainerDecorator prependSubview:groupId:] */

void FUN_1091d7630(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bde0640(param_1,param_2,param_4);
    if (param_4 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    }
    func_0x00010c10a6a0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091d7694; end: 1091d77d7; -[SCLensCameraBottomViewContainerDecorator _clearIfNeededForNewGroupId:] */

void FUN_1091d7694(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    if ((uVar2 != 0) && (func_0x00010c0720c0(), (uVar2 & 1) == 0)) {
      lVar6 = *(long *)(param_1 + 0x18);
      _objc_retain(lVar6);
      lVar3 = lVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          func_0x00010c12c960(*(undefined8 *)(lVar7 * 8));
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
    }
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1091d77d8; end: 1091d7813; -[SCLensCameraBottomViewContainerDecorator .cxx_destruct] */

void FUN_1091d77d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d7814; end: 1091d7a9b; -[SCLensCameraFeatureContainerViewProvider initWithFeatureContainerView:lensCarouselContainerView:lensCarouselLayoutGuide:alwaysOnCarouselEnabled:lensCarouselLayoutProvider:] */

undefined8 *
FUN_1091d7814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_80 = PTR_PTR_112700d38;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    _objc_retain(puVar2);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    _objc_retain(puVar3);
    _objc_retain(param_5);
    _objc_retain(puVar2);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar5 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar5);
    uVar5 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar5);
    uVar5 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar5);
    uVar5 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar5);
    *(undefined1 *)(puVar1 + 5) = param_6;
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(param_7);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(param_4);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1091d7a9c; end: 1091d7cfb;  */

void FUN_1091d7a9c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    _objc_retain(lVar1);
    lVar3 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091d7cfc; end: 1091d7d87; -[SCLensCameraFeatureContainerViewProvider createContainerView] */

void FUN_1091d7cfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddc18;
  _objc_alloc(PTR_PTR_1126ddc18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011a20(puVar1,param_2,uVar2,uVar3,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091d7d88; end: 1091d8037; +[SCLensCameraFeatureContainerViewProvider _createLayoutGuideWithContainerView:] */

void FUN_1091d7d88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  func_0x00010bef9680(param_3);
  puVar2 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf34860(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_retain(puVar11);
  puVar2 = puVar11;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar11);
      }
      func_0x00010c1e3380(0x437a0000,*(undefined8 *)((long)puVar13 * 8));
      puVar13 = puVar13 + 1;
    } while (puVar2 != puVar13);
    puVar2 = puVar11;
    func_0x00010bf52a60();
  }
  _objc_release(puVar11);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar11);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1091d8038; end: 1091d807f; -[SCLensCameraFeatureContainerViewProvider .cxx_destruct] */

void FUN_1091d8038(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d8080; end: 1091d824f; -[SCLensDefaultFeatureContainerViewProvider initWithLensCarouselContainerView:lensCarouselLayoutGuide:lensCarouselLayoutProvider:] */

undefined8 *
FUN_1091d8080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_112700d40;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar4 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar4);
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar4);
    uVar4 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1091d8250; end: 1091d8443;  */

void FUN_1091d8250(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dda00;
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdeefc0(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091d8444; end: 1091d84ab; -[SCLensDefaultFeatureContainerViewProvider createContainerView] */

void FUN_1091d8444(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ddc20;
  _objc_alloc(PTR_PTR_1126ddc20);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022d20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091d84ac; end: 1091d875b; +[SCLensDefaultFeatureContainerViewProvider _createLayoutGuideWithContainerView:] */

void FUN_1091d84ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  func_0x00010bef9680(param_3);
  puVar2 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf34860(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_retain(puVar11);
  puVar2 = puVar11;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar11);
      }
      func_0x00010c1e3380(0x437a0000,*(undefined8 *)((long)puVar13 * 8));
      puVar13 = puVar13 + 1;
    } while (puVar2 != puVar13);
    puVar2 = puVar11;
    func_0x00010bf52a60();
  }
  _objc_release(puVar11);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar11);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1091d875c; end: 1091d87f7; -[SCLensDefaultFeatureContainerViewProvider .cxx_destruct] */

void FUN_1091d875c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d87f8; end: 1091d88cb;  */

void FUN_1091d87f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar1 == 0) {
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = lVar2;
    func_0x00010bf44740(lVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091d88cc; end: 1091d8913; -[SCLensCarouselStudySettingsProvider backgroundPrefetchNamespaces] */

void FUN_1091d88cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf17000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091d8914; end: 1091d891b; -[SCLensCarouselStudySettingsProvider disableVolumeButtonLensIds] */

void FUN_1091d8914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_target_112678178);
  return;
}



/* Entry: 1091d891c; end: 1091d8933; -[SCLensCarouselStudySettingsProvider lensProcessingWarmupEnabled] */

void FUN_1091d891c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f2be18,0,0);
  return;
}



/* Entry: 1091d8934; end: 1091d8a0b; -[SCLensCarouselStudySettingsProvider lensCrashLoggerConfig] */

void FUN_1091d8934(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf44740(uVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ddc28;
  _objc_alloc(PTR_PTR_1126ddc28);
  uVar4 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,&PTR____CFConstantStringClassReference_110f2be38);
  uVar5 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,&PTR____CFConstantStringClassReference_110f2be58);
  func_0x00010c01f980(puVar3,param_2,uVar4,uVar5);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091d8a0c; end: 1091d8a2f; -[SCLensCarouselStudySettingsProvider lensCarouselRestorationThreshold] */

double FUN_1091d8a0c(double param_1)

{
  double dVar1;
  
  func_0x00010b0ec748();
  dVar1 = 60.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}



/* Entry: 1091d8a30; end: 1091d8a4f; -[SCLensCarouselStudySettingsProvider modularCameraLensRestorationThreshold] */

double FUN_1091d8a30(double param_1)

{
  double dVar1;
  
  func_0x00010b0ec7e8();
  dVar1 = 15.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  return dVar1;
}



/* Entry: 1091d8a50; end: 1091d8a9f; -[SCLensCarouselStudySettingsProvider isHDLensRenderingEnabled] */

undefined8 FUN_1091d8a50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091d8aa0; end: 1091d8aa7; -[SCLensCarouselStudySettingsProvider lensViewsPrefetchCount] */

undefined8 FUN_1091d8aa0(void)

{
  return 0;
}



/* Entry: 1091d8aa8; end: 1091d8aaf; -[SCLensCarouselStudySettingsProvider isLensCaptureButtonOverlayViewVisible] */

undefined8 FUN_1091d8aa8(void)

{
  return 0;
}



/* Entry: 1091d8ab0; end: 1091d8b27; -[SCLensCarouselStudySettingsProvider birthdayLensId] */

void FUN_1091d8ab0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c25d0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091d8b28; end: 1091d8b77; -[SCLensCarouselStudySettingsProvider isLensActionBarViewButtonDisabled] */

undefined8 FUN_1091d8b28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091d8b78; end: 1091d8b7f; -[SCLensCarouselStudySettingsProvider isLensLeaderboardSubmitScoreModalDisabled] */

undefined8 FUN_1091d8b78(void)

{
  return 0;
}



/* Entry: 1091d8b80; end: 1091d8bcf; -[SCLensCarouselStudySettingsProvider isOffscreenCleanupWhitelistEnabled] */

undefined8 FUN_1091d8b80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091d8bd0; end: 1091d8c1f; -[SCLensCarouselStudySettingsProvider isMainCarouselSingleWorkflowActivationEnabled] */

undefined8 FUN_1091d8bd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091d8c20; end: 1091d8c6f; -[SCLensCarouselStudySettingsProvider isCameraFlipEventReportingDisabled] */

undefined8 FUN_1091d8c20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  return uVar2;
}


