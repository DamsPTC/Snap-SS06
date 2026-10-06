/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107facbe8; end: 107facc73; -[SCTimelineThumbnailsCollectionViewFlowLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107facbe8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112772924);
  _objc_storeStrong(param_1 + _DAT_112772918,0);
  _objc_storeStrong(param_1 + _DAT_112772920,0);
  _objc_storeStrong(param_1 + _DAT_11277291c,0);
  _objc_storeStrong(param_1 + _DAT_112772914,0);
  _objc_storeStrong(param_1 + _DAT_112772910,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772904,0);
  return;
}



/* Entry: 107facc74; end: 107fad13f; -[SCTimelineThumbnailsFooterView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107facc74(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  puStack_88 = PTR_PTR_1126fbf30;
  uStack_90 = param_1;
  _objc_msgSendSuper2(&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar7 = 0;
    uVar10 = 0x4038000000000000;
    dVar9 = 36.0;
    func_0x00010c013de0(0,0,0x4038000000000000,0x4042000000000000);
    func_0x00010bfb68e0();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar8 = dVar9;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _UIGraphicsBeginImageContextWithOptions(uVar10,dVar9,uVar7,0);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsGetCurrentContext();
    func_0x00010c12fc60(puVar3);
    _objc_release(puVar3);
    _UIGraphicsGetCurrentContext();
    _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000);
    func_0x00010bf20c00(puVar2);
    _CGContextTranslateCTM(0,-dVar8,puVar3);
    _CGContextTranslateCTM(0x8000000000000000,0x8000000000000000,puVar3);
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd00(0x4008000000000000);
    func_0x00010c1bdb60(puVar3);
    dVar8 = 0.0;
    _CGRectGetMidX(0,0,0x4038000000000000,0x4042000000000000);
    dVar9 = 0.0;
    _CGRectGetMidY(0,0,0x4038000000000000,0x4042000000000000);
    func_0x00010c0d18c0(dVar8 + -7.0 + 0.5,dVar9 + 0.5,puVar3);
    dVar8 = 0.0;
    _CGRectGetMidX(0,0,0x4038000000000000,0x4042000000000000);
    dVar9 = 0.0;
    _CGRectGetMidY(0,0,0x4038000000000000,0x4042000000000000);
    func_0x00010bef98c0(dVar8 + 7.0 + 0.5,dVar9 + 0.5,puVar3);
    dVar8 = 0.0;
    _CGRectGetMidX(0,0,0x4038000000000000,0x4042000000000000);
    dVar9 = 0.0;
    _CGRectGetMidY(0,0,0x4038000000000000,0x4042000000000000);
    func_0x00010c0d18c0(dVar8 + 0.5,dVar9 + -7.0 + 0.5,puVar3);
    dVar9 = 0.0;
    _CGRectGetMidX(0,0,0x4038000000000000,0x4042000000000000);
    dVar9 = dVar9 + 0.5;
    dVar8 = 0.0;
    _CGRectGetMidY(0,0,0x4038000000000000,0x4042000000000000);
    dVar8 = dVar8 + 7.0 + 0.5;
    func_0x00010bef98c0(dVar9,dVar8,puVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e8c0();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c25dba0(puVar3);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c23d0a0(puVar4);
    func_0x00010c23d0a0(puVar4);
    func_0x00010c013de0(0,0,dVar9 + dVar9,dVar8 + dVar8);
    lVar6 = (long)_DAT_112772928;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar7);
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar6));
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c23d0a0(puVar4);
    func_0x00010c1aa420(uVar7);
    func_0x00010c21d680(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1a8c60(0xc039000000000000,0xc014000000000000,0xc039000000000000,0xc039000000000000,
                        *(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbd40(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1c3c80(0x3ff3333333333333,*(undefined8 *)((long)puVar1 + lVar6));
    puVar5 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    func_0x00010c00ee20();
    lVar6 = (long)_DAT_11277292c;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar7);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf414e0(0x3fd3333333333333);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010c19f0e0(0,0,0x4038000000000000,0x4042000000000000,
                        *(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar6));
    uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4018000000000000);
    _objc_release(uVar7);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107fad140; end: 107fad22b; -[SCTimelineThumbnailsFooterView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fad140(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  double dVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fbf30;
  lStack_50 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  _CGRectGetMidX();
  dVar2 = param_1;
  func_0x00010bf20c00(param_4);
  _CGRectGetMidY();
  func_0x00010c17a6a0(param_1,dVar2,*(undefined8 *)(param_4 + _DAT_112772928));
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  param_1 = param_1 + -24.0;
  dVar2 = param_1 * 0.5;
  func_0x00010bf20c00(param_4);
  _CGRectGetHeight();
  lVar1 = (long)_DAT_11277292c;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010c19f0e0(dVar2,(param_1 + -36.0) * 0.5,param_3,*(undefined8 *)(param_4 + lVar1));
  return;
}



/* Entry: 107fad22c; end: 107fad417; -[SCTimelineThumbnailsFooterView showTooltipWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fad22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  double dStack_68;
  undefined8 uStack_60;
  double dStack_58;
  
  puVar2 = PTR_PTR_1126aea58;
  lVar4 = (long)_DAT_112772930;
  lVar1 = *(long *)(param_5 + lVar4);
  if (lVar1 == 0) {
    _objc_retain(param_7);
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    *(undefined **)(param_5 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c212f20(*(undefined8 *)(param_5 + lVar4),param_6,param_7);
    _objc_release(param_7);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + lVar4),param_6,puVar2);
    _objc_release(puVar2);
    func_0x00010c21ad00(*(undefined8 *)(param_5 + lVar4),param_6,7);
    func_0x00010c23d620(*(undefined8 *)(param_5 + lVar4));
    func_0x00010c1677c0(0,*(undefined8 *)(param_5 + lVar4));
    uVar3 = *(undefined8 *)(param_5 + _DAT_11277292c);
    func_0x00010bf4dce0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar3);
    lVar1 = *(long *)(param_5 + lVar4);
  }
  func_0x00010bfb68e0(lVar1);
  dVar5 = (36.0 - param_4) * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  uVar3 = 0x403c000000000000;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11277292c));
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107fad418;
  puStack_80 = &UNK_110870f70;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_107fad4a0;
  puStack_d0 = &UNK_110a16268;
  uStack_c0 = 6;
  lStack_c8 = param_5;
  uStack_b8 = uVar3;
  dStack_b0 = dVar5;
  uStack_a8 = param_3;
  dStack_a0 = param_4;
  lStack_78 = param_5;
  uStack_70 = uVar3;
  dStack_68 = dVar5;
  uStack_60 = param_3;
  dStack_58 = param_4;
  func_0x00010bf03460(0x3fd3333333333333,0,0x3fe3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_6,6,&puStack_98,&puStack_e8);
  return;
}



/* Entry: 107fad418; end: 107fad49f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fad418(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar2 = *(undefined8 *)(param_4 + 0x28);
  uVar3 = *(undefined8 *)(param_4 + 0x30);
  dVar4 = *(double *)(param_4 + 0x38);
  lVar1 = (long)_DAT_112772930;
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1));
  func_0x00010c19f0e0(uVar2,uVar3,dVar4 + param_3 + 13.0,*(undefined8 *)(param_4 + 0x40),
                      *(undefined8 *)(*(long *)(param_4 + 0x20) + (long)_DAT_11277292c));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_4 + 0x20) + lVar1),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107fad4a0; end: 107fad527;  */

void FUN_107fad4a0(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_50 = 0xc2000000;
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  uStack_18 = *(undefined8 *)(param_1 + 0x48);
  uStack_20 = *(undefined8 *)(param_1 + 0x40);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_48 = FUN_107fad528;
  puStack_40 = &UNK_110870f70;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf03460(0x3fd3333333333333,0x4000000000000000,0x3fe3333333333333,0,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,*(undefined8 *)(param_1 + 0x28),
                      &puStack_58,0);
  return;
}



/* Entry: 107fad528; end: 107fad573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fad528(long param_1)

{
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277292c));
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112772930),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107fad574; end: 107fad5a3; -[SCTimelineThumbnailsFooterView _tapOnAddMoreButton] */

void FUN_107fad574(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7ce20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fad5a4; end: 107fad5c3; -[SCTimelineThumbnailsFooterView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fad5a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112772934);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fad5c4; end: 107fad5d7; -[SCTimelineThumbnailsFooterView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fad5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112772934,param_3);
  return;
}



/* Entry: 107fad5d8; end: 107fad633; -[SCTimelineThumbnailsFooterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fad5d8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112772934);
  _objc_storeStrong(param_1 + _DAT_112772930,0);
  _objc_storeStrong(param_1 + _DAT_112772928,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277292c,0);
  return;
}



/* Entry: 107fad634; end: 107fad7f7; -[SCTimelineConfigurationImpl initWithBlizzardLogger:tinsel:] */

undefined1 *
FUN_107fad634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbf38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0xf0) = 0;
    *(undefined8 *)((long)puVar1 + 0xa0) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    puVar2 = PTR_PTR_1126d8a48;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xf8);
    *(undefined **)((long)puVar1 + 0xf8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__kCMTimeZero_110348670;
    uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar1 + 0x28) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    uVar3 = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x40) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar3;
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x99) = 1;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x98) = 0;
    func_0x00010be93b00(puVar1);
    func_0x00010be64640(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fad7f8; end: 107fad827; -[SCTimelineConfigurationImpl initWithUsageType:blizzardLogger:tinsel:] */

void FUN_107fad7f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bff8b60(param_1,param_2,param_4,param_5);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xf0) = param_3;
  }
  return;
}



/* Entry: 107fad828; end: 107fad85f; -[SCTimelineConfigurationImpl initWithUsageType:segmentsEditable:useNGSMEPlayback:blizzardLogger:tinsel:] */

void FUN_107fad828(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  func_0x00010c05a520();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x99) = param_4;
    *(undefined1 *)(param_1 + 0x9b) = param_5;
  }
  return;
}



/* Entry: 107fad860; end: 107fad877; -[SCTimelineConfigurationImpl segments] */

void FUN_107fad860(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fad878; end: 107fad95f; -[SCTimelineConfigurationImpl newVideoSegmentWithAssetURL:duration:frameImage:snapSource:activeLensID:externalMediaSource:] */

undefined *
FUN_107fad878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar1 = PTR_PTR_1126bf5f8;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff4640();
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_60 = param_4[2];
  func_0x00010c1faa00(puVar1,param_2,&uStack_70);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  return puVar1;
}



/* Entry: 107fad960; end: 107fadadf; -[SCTimelineConfigurationImpl newImageSegmentWithAssetURL:frameImage:snapSource:isFromSnapEditor:activeLensID:] */

undefined *
FUN_107fad960(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  if ((param_6 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c109400(uVar1,param_2,puVar2,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  puVar2 = PTR_PTR_1126bf5f0;
  _objc_alloc(PTR_PTR_1126bf5f0);
  puVar3 = param_3;
  func_0x00010bff4660();
  if (*(char *)(param_1 + 0x98) == '\x01') {
    func_0x00010bee9160(param_1);
    func_0x00010bf567c0(puVar2);
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  _objc_release(uVar4);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  func_0x00010bdc8300(param_3,param_2,puVar3);
  func_0x00010c26fec0(*(undefined8 *)(param_3 + 0xf8),param_2,param_3,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return puVar3;
}



/* Entry: 107fadae0; end: 107fadb27; -[SCTimelineConfigurationImpl addSegment:] */

void FUN_107fadae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bdc8300(param_1,param_2,param_3);
  func_0x00010c26fec0(*(undefined8 *)(param_1 + 0xf8),param_2,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fadb28; end: 107fadc2f; -[SCTimelineConfigurationImpl addSegments:] */

void FUN_107fadb28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010bdc8300(param_1);
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  func_0x00010c26fee0(*(undefined8 *)(param_1 + 0xf8));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(param_3 + 8);
  func_0x00010bf529e0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf6c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_deleteSegmentAtIndex__1125b8b88,lVar2 + -1);
  return;
}



/* Entry: 107fadc30; end: 107fadc5b; -[SCTimelineConfigurationImpl deleteLastSegment] */

void FUN_107fadc30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deleteSegmentAtIndex__1125b8b88,lVar1 + -1);
  return;
}



/* Entry: 107fadc5c; end: 107faded3; -[SCTimelineConfigurationImpl deleteSegmentAtIndex:] */

void FUN_107fadc5c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c0dfd20(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c270ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c270ec0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf81120(uVar3,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(uVar3);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    lVar5 = lVar2;
    func_0x00010c280560(lVar2);
    func_0x00010c0df780(puVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,0,puVar4);
    _objc_release(puVar4);
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
    func_0x00010be92f80(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar5 = lVar2;
    func_0x00010bf311e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,lVar5);
    _objc_release(lVar5);
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      uVar6 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
      puVar4 = PTR__kCMTimeZero_110348670;
      uVar1 = param_3;
      if (param_3 < uVar6) {
        do {
          uVar3 = *(undefined8 *)(param_1 + 8);
          func_0x00010c0dfd20(uVar3,param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          if ((long)uVar1 < 1) {
            uStack_68 = *(undefined8 *)(puVar4 + 8);
            uStack_70 = *(undefined8 *)puVar4;
            uStack_60 = *(undefined8 *)(puVar4 + 0x10);
          }
          else {
            lVar5 = *(long *)(param_1 + 8);
            func_0x00010c0dfd40(lVar5,param_2,uVar1 - 1);
            _objc_retainAutoreleasedReturnValue();
            if (lVar5 == 0) {
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
              uStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              func_0x00010bf4d840(&uStack_a0,lVar5);
            }
            _CMTimeRangeGetEnd(&uStack_70,&uStack_a0);
            _objc_release(lVar5);
          }
          uStack_98 = uStack_68;
          uStack_a0 = uStack_70;
          uStack_90 = uStack_60;
          func_0x00010c209a60(uVar3,param_2,&uStack_a0);
          _objc_release(uVar3);
          uVar1 = uVar1 + 1;
          uVar6 = *(ulong *)(param_1 + 8);
          func_0x00010bf529e0();
        } while (uVar1 < uVar6);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c0dfd20(uVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf86d40();
      _objc_release(uVar3);
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
    }
    func_0x00010be6b480(param_1);
    func_0x00010c26ff00(*(undefined8 *)(param_1 + 0xf8),param_2,param_1,lVar2,param_3);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 107faded4; end: 107fadf43; -[SCTimelineConfigurationImpl deleteAllSegments] */

void FUN_107faded4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c270040(*(undefined8 *)(param_1 + 0xf8),param_2,param_1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR__kCMTimeZero_110348670;
  uVar4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  func_0x00010be92f80(param_1);
  func_0x00010be93b00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c26ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_timelineConfigurationDidDeleteAl_112679a08,
             param_1);
  return;
}



/* Entry: 107fadf44; end: 107fadfff; -[SCTimelineConfigurationImpl moveSegmentAtIndex:toDestinationIndex:] */

void FUN_107fadf44(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_3 != param_4) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010bf529e0();
    if (param_3 < uVar1) {
      uVar1 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
      if (param_4 < uVar1) {
        uVar2 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0dfd20(uVar2,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
        func_0x00010c066b00(*(undefined8 *)(param_1 + 8),param_2,uVar2,param_4);
        func_0x00010be93a40(param_1);
        func_0x00010c26ff20(*(undefined8 *)(param_1 + 0xf8),param_2,param_1,uVar2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 107fae000; end: 107fae03b; -[SCTimelineConfigurationImpl didEnterReorderMode] */

void FUN_107fae000(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c26ffb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_timelineConfigurationDidEnterReo_112679a10,
             param_1);
  return;
}



/* Entry: 107fae03c; end: 107fae073; -[SCTimelineConfigurationImpl didExitReorderMode] */

void FUN_107fae03c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  func_0x00010be92f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c26ffd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_timelineConfigurationDidExitReor_112679a18,
             param_1);
  return;
}



/* Entry: 107fae074; end: 107fae10f; -[SCTimelineConfigurationImpl restoreToSegmentsBeforeReordering] */

void FUN_107fae074(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010be16840();
  if (*(long *)(param_1 + 8) != 0) {
    lVar2 = *(long *)(param_1 + 0x68);
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar2 == lVar3 && lVar1 == 0x7fffffffffffffff) goto LAB_107fae0f4;
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar4;
  _objc_release(uVar5);
  func_0x00010be93a40(param_1);
LAB_107fae0f4:
                    /* WARNING: Could not recover jumptable at 0x00010c26fff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_timelineConfigurationDidRestoreT_112679a20,
             param_1);
  return;
}



/* Entry: 107fae110; end: 107fae1f3; -[SCTimelineConfigurationImpl updateWithTimelineVideoSegments:] */

void FUN_107fae110(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be16840(param_1,param_2,param_3);
  if (lVar1 != 0x7fffffffffffffff) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010bf529e0();
    while (lVar1 + 1U <= uVar3) {
      func_0x00010bf6c200(param_1);
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
    }
  }
  uVar3 = param_3;
  func_0x00010bf529e0();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (uVar2 < uVar3) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010bf529e0();
    for (; uVar2 = param_3, func_0x00010bf529e0(), uVar3 < uVar2; uVar3 = uVar3 + 1) {
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befb2c0(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fae1f4; end: 107fae26f; -[SCTimelineConfigurationImpl hasSameTimelineVideoSegments:] */

undefined8 FUN_107fae1f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    func_0x00010be16840(param_1,param_2,param_3);
    if (param_1 == 0x7fffffffffffffff) {
      uVar3 = 1;
      goto LAB_107fae254;
    }
  }
  uVar3 = 0;
LAB_107fae254:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107fae270; end: 107fae2b7; -[SCTimelineConfigurationImpl firstFrameImage] */

void FUN_107fae270(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb6cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107fae2b8; end: 107fae2cb; -[SCTimelineConfigurationImpl totalContentDuration] */

void FUN_107fae2b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 107fae2cc; end: 107fae2df; -[SCTimelineConfigurationImpl totalDuration] */

void FUN_107fae2cc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x48);
  return;
}



/* Entry: 107fae2e0; end: 107fae3df; -[SCTimelineConfigurationImpl containsImportedContent] */

undefined8 FUN_107fae2e0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  uVar7 = 0;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar6);
        }
        uVar3 = *(ulong *)(lVar8 * 8);
        func_0x00010c075240();
        if ((uVar3 & 1) != 0) {
          uVar7 = 1;
          goto LAB_107fae3a0;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar6;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar7 = 0;
  }
LAB_107fae3a0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar7;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(lVar6 + 8);
  _objc_retain(lVar6);
  lVar4 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      uVar7 = 1;
LAB_107fae4a4:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return uVar7;
      }
      ___stack_chk_fail();
      uVar7 = *(undefined8 *)(lVar6 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_addListener__11259c008);
      return uVar7;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      iVar1 = (int)*(undefined8 *)(lVar8 * 8);
      func_0x00010c075240();
      if (iVar1 == 0) {
        uVar7 = 0;
        goto LAB_107fae4a4;
      }
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar6;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107fae3e0; end: 107fae4e3; -[SCTimelineConfigurationImpl containsOnlyImportedContent] */

undefined8 FUN_107fae3e0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      uVar6 = 1;
LAB_107fae4a4:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return uVar6;
      }
      ___stack_chk_fail();
      uVar6 = *(undefined8 *)(lVar5 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_addListener__11259c008);
      return uVar6;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      iVar2 = (int)*(undefined8 *)(lVar7 * 8);
      func_0x00010c075240();
      if (iVar2 == 0) {
        uVar6 = 0;
        goto LAB_107fae4a4;
      }
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107fae4e4; end: 107fae4eb; -[SCTimelineConfigurationImpl addListener:] */

void FUN_107fae4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107fae4ec; end: 107fae4f3; -[SCTimelineConfigurationImpl removeListener:] */

void FUN_107fae4ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107fae4f4; end: 107fae567; -[SCTimelineConfigurationImpl videoCodecType] */

long FUN_107fae4f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010010fab4();
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c2997e0(lVar2);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 107fae568; end: 107fae58f; -[SCTimelineConfigurationImpl segmentTimeRangesObservable] */

void FUN_107fae568(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fae590; end: 107fae5b7; -[SCTimelineConfigurationImpl timelineConfigurationStatusObservable] */

void FUN_107fae590(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fae5b8; end: 107fae637; -[SCTimelineConfigurationImpl updateFirstFrameImageIfNeededWithPlayerHandler:] */

void FUN_107fae5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010010fab4();
  uVar1 = uVar3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c285d40(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fae638; end: 107fae6a3; -[SCTimelineConfigurationImpl uniqueSnapCreationCount] */

long FUN_107fae638(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  func_0x00010bf6cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  _objc_release(lVar1);
  return lVar3 + lVar2;
}



/* Entry: 107fae6a4; end: 107fae6cb; -[SCTimelineConfigurationImpl deletedSegmentCaptureSessionIDs] */

void FUN_107fae6a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fae6cc; end: 107fae723; -[SCTimelineConfigurationImpl setEditedThumbnails:] */

void FUN_107fae6cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c270000(*(undefined8 *)(param_1 + 0xf8),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fae724; end: 107fae793; -[SCTimelineConfigurationImpl setEditedThumbnails:forSegment:] */

void FUN_107fae724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a80(param_4,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c26ff60(*(undefined8 *)(param_1 + 0xf8),param_2,param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107fae794; end: 107fae7df; -[SCTimelineConfigurationImpl dealloc] */

void FUN_107fae794(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3b1c0();
  func_0x00010bf6b5c0(param_1);
  puStack_28 = PTR_PTR_1126fbf38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107fae7e0; end: 107fae7e7; -[SCTimelineConfigurationImpl segmentCount] */

void FUN_107fae7e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107fae7e8; end: 107faebb3; -[SCTimelineConfigurationImpl playbackTimeForFrameTime:] */

void FUN_107fae7e8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_228;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar2 = PTR__kCMTimeZero_110348670;
  puVar5 = &uStack_1c0;
  puVar7 = &uStack_1c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar12;
  param_1[2] = *(undefined8 *)(puVar2 + 0x10);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = *(long *)(param_2 + 8);
  _objc_retain(lVar9);
  puVar6 = &uStack_130;
  lVar4 = lVar9;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        lVar8 = *(long *)(lStack_128 + lVar11 * 8);
        if (lVar8 == 0) {
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_160,lVar8);
        }
        uStack_178 = param_4[1];
        uStack_180 = *param_4;
        uStack_170 = param_4[2];
        puVar3 = &uStack_160;
        _CMTimeRangeContainsTime(puVar3,&uStack_180);
        if ((int)puVar3 != 0) {
          _objc_retain(lVar8);
          _objc_release(lVar9);
          if (lVar8 == 0) goto LAB_107fae978;
          goto LAB_107faea10;
        }
        if (lVar8 == 0) {
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_160,lVar8);
        }
        uStack_178 = param_1[1];
        uStack_180 = *param_1;
        uStack_170 = param_1[2];
        uStack_198 = uStack_140;
        uStack_1a0 = uStack_148;
        uStack_190 = uStack_138;
        _CMTimeAdd(param_1,&uStack_180,&uStack_1a0);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      puVar6 = &uStack_130;
      lVar4 = lVar9;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar9);
LAB_107fae978:
  lVar4 = *(long *)(param_2 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
  }
  else {
    func_0x00010bf4d840(&uStack_160,lVar4);
  }
  _CMTimeRangeGetEnd(&uStack_180,&uStack_160);
  uStack_158 = param_4[1];
  uStack_160 = *param_4;
  uStack_150 = param_4[2];
  puVar3 = &uStack_160;
  _CMTimeCompare(puVar3,&uStack_180);
  _objc_release(lVar4);
  lVar8 = *(long *)(param_2 + 8);
  if ((int)puVar3 < 1) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar8 == 0) {
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    bVar1 = true;
  }
  else {
LAB_107faea10:
    func_0x00010c27c9c0(&uStack_160,lVar8);
    bVar1 = false;
  }
  uStack_178 = param_4[1];
  uStack_180 = *param_4;
  uStack_170 = param_4[2];
  puVar3 = &uStack_160;
  _CMTimeRangeContainsTime(puVar3,&uStack_180);
  if ((int)puVar3 == 0) {
    if (bVar1) {
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
    }
    else {
      func_0x00010c27c9c0(&uStack_160,lVar8);
    }
    _CMTimeRangeGetEnd(&uStack_180,&uStack_160);
    uStack_158 = param_4[1];
    uStack_160 = *param_4;
    uStack_150 = param_4[2];
    puVar5 = &uStack_160;
    _CMTimeCompare(puVar5,&uStack_180);
    if ((int)puVar5 < 0) goto LAB_107faeb70;
    if (bVar1) {
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
    }
    else {
      func_0x00010c27c9c0(&uStack_160,lVar8);
    }
    uStack_198 = param_1[1];
    uStack_1a0 = *param_1;
    uStack_190 = param_1[2];
    uStack_1b8 = uStack_140;
    uStack_1c0 = uStack_148;
    uStack_1b0 = uStack_138;
    puVar5 = &uStack_1a0;
  }
  else {
    if (bVar1) {
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
    }
    else {
      func_0x00010c27c9c0(&uStack_160,lVar8);
    }
    uStack_178 = param_4[1];
    uStack_180 = *param_4;
    uStack_170 = param_4[2];
    uStack_1b8 = uStack_158;
    uStack_1c0 = uStack_160;
    uStack_1b0 = uStack_150;
    _CMTimeSubtract(&uStack_1a0,&uStack_180,&uStack_1c0);
    uStack_1b8 = param_1[1];
    uStack_1c0 = *param_1;
    uStack_1b0 = param_1[2];
    puVar7 = &uStack_1a0;
  }
  _CMTimeAdd(&uStack_180,puVar5,puVar7);
  param_1[1] = uStack_178;
  *param_1 = uStack_180;
  param_1[2] = uStack_170;
LAB_107faeb70:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_107faebb4;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_2c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_2b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lVar9 = *(long *)(lVar8 + 8);
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  puVar7 = &uStack_300;
  lVar4 = lVar9;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_2f0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_2f0 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        lVar8 = *(long *)(lStack_2f8 + lVar11 * 8);
        if (lVar8 == 0) {
          uStack_348 = 0;
          uStack_350 = 0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_360,lVar8);
        }
        uStack_378 = uStack_2b8;
        uStack_380 = uStack_2c0;
        uStack_370 = uStack_2b0;
        uStack_398 = uStack_340;
        uStack_3a0 = uStack_348;
        uStack_390 = uStack_338;
        _CMTimeRangeMake(&uStack_330,&uStack_380,&uStack_3a0);
        uStack_358 = uStack_328;
        uStack_360 = uStack_330;
        uStack_348 = uStack_318;
        uStack_350 = uStack_320;
        uStack_338 = uStack_308;
        uStack_340 = uStack_310;
        uStack_378 = puVar6[1];
        uStack_380 = *puVar6;
        uStack_370 = puVar6[2];
        puVar5 = &uStack_360;
        _CMTimeRangeContainsTime(puVar5,&uStack_380);
        if ((int)puVar5 != 0) {
          _objc_retain(lVar8);
          _objc_release(lVar9);
          if (lVar8 == 0) goto LAB_107faed98;
          func_0x00010c27c900(&uStack_330,lVar8);
          _objc_release(lVar8);
          goto LAB_107faeda4;
        }
        if (lVar8 == 0) {
          uStack_348 = 0;
          uStack_350 = 0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_360,lVar8);
        }
        uStack_378 = uStack_2b8;
        uStack_380 = uStack_2c0;
        uStack_370 = uStack_2b0;
        uStack_398 = uStack_340;
        uStack_3a0 = uStack_348;
        uStack_390 = uStack_338;
        _CMTimeAdd(&uStack_2c0,&uStack_380,&uStack_3a0);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      puVar7 = &uStack_300;
      lVar4 = lVar9;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar9);
LAB_107faed98:
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
LAB_107faeda4:
  uStack_378 = puVar6[1];
  uStack_380 = *puVar6;
  uStack_370 = puVar6[2];
  uStack_398 = uStack_2b8;
  uStack_3a0 = uStack_2c0;
  uStack_390 = uStack_2b0;
  _CMTimeSubtract(&uStack_360,&uStack_380,&uStack_3a0);
  uStack_378 = uStack_328;
  uStack_380 = uStack_330;
  uStack_370 = uStack_320;
  puVar6 = &uStack_380;
  _CMTimeAdd(extraout_x8,puVar6,&uStack_360);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3a8 = FUN_107faee30;
  uStack_3c8 = puVar7[1];
  uStack_3d0 = *puVar7;
  uStack_3c0 = puVar7[2];
  ppuStack_3b0 = &puStack_1d0;
  FUN_107fb2658(puVar6[1],&uStack_3d0);
  return;
}



/* Entry: 107faebb4; end: 107faee2f; -[SCTimelineConfigurationImpl frameTimeForPlaybackTime:] */

void FUN_107faebb4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_100 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar4 = *(long *)(param_2 + 8);
  _objc_retain(lVar4);
  puVar3 = &uStack_140;
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        lVar5 = *(long *)(lStack_138 + lVar7 * 8);
        if (lVar5 == 0) {
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_1a0,lVar5);
        }
        uStack_1b8 = uStack_f8;
        uStack_1c0 = uStack_100;
        uStack_1b0 = uStack_f0;
        uStack_1d8 = uStack_180;
        uStack_1e0 = uStack_188;
        uStack_1d0 = uStack_178;
        _CMTimeRangeMake(&uStack_170,&uStack_1c0,&uStack_1e0);
        uStack_198 = uStack_168;
        uStack_1a0 = uStack_170;
        uStack_188 = uStack_158;
        uStack_190 = uStack_160;
        uStack_178 = uStack_148;
        uStack_180 = uStack_150;
        uStack_1b8 = param_4[1];
        uStack_1c0 = *param_4;
        uStack_1b0 = param_4[2];
        puVar2 = &uStack_1a0;
        _CMTimeRangeContainsTime(puVar2,&uStack_1c0);
        if ((int)puVar2 != 0) {
          _objc_retain(lVar5);
          _objc_release(lVar4);
          if (lVar5 == 0) goto LAB_107faed98;
          func_0x00010c27c900(&uStack_170,lVar5);
          _objc_release(lVar5);
          goto LAB_107faeda4;
        }
        if (lVar5 == 0) {
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_1a0,lVar5);
        }
        uStack_1b8 = uStack_f8;
        uStack_1c0 = uStack_100;
        uStack_1b0 = uStack_f0;
        uStack_1d8 = uStack_180;
        uStack_1e0 = uStack_188;
        uStack_1d0 = uStack_178;
        _CMTimeAdd(&uStack_100,&uStack_1c0,&uStack_1e0);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar3 = &uStack_140;
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
LAB_107faed98:
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
LAB_107faeda4:
  uStack_1b8 = param_4[1];
  uStack_1c0 = *param_4;
  uStack_1b0 = param_4[2];
  uStack_1d8 = uStack_f8;
  uStack_1e0 = uStack_100;
  uStack_1d0 = uStack_f0;
  _CMTimeSubtract(&uStack_1a0,&uStack_1c0,&uStack_1e0);
  uStack_1b8 = uStack_168;
  uStack_1c0 = uStack_170;
  uStack_1b0 = uStack_160;
  puVar2 = &uStack_1c0;
  _CMTimeAdd(param_1,puVar2,&uStack_1a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_107faee30;
  uStack_208 = puVar3[1];
  uStack_210 = *puVar3;
  uStack_200 = puVar3[2];
  puStack_1f0 = &stack0xfffffffffffffff0;
  FUN_107fb2658(puVar2[1],&uStack_210);
  return;
}



/* Entry: 107faee30; end: 107faee63; -[SCTimelineConfigurationImpl frameTimeForClipLevelRatesAppliedPlaybackTime:] */

void FUN_107faee30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  FUN_107fb2658(*(undefined8 *)(param_1 + 8),&uStack_30);
  return;
}



/* Entry: 107faee64; end: 107faef53; -[SCTimelineConfigurationImpl clearDirectSnapDiscard] */

undefined * FUN_107faee64(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_328;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_178;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_1 + 8);
  _objc_retain(puVar4);
  puVar1 = puVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar4);
      }
      func_0x00010bf3b1c0(*(undefined8 *)((long)puVar5 * 8));
      puVar5 = puVar5 + 1;
    } while (puVar1 != puVar5);
    puVar1 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return puVar4;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_208 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_210 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_200 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lVar3 = *(long *)(puVar4 + 8);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_240;
    do {
      lVar7 = 0;
      do {
        if (*plStack_240 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        if (*(long *)(lStack_248 + lVar7 * 8) == 0) {
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_280);
        }
        uStack_298 = uStack_208;
        uStack_2a0 = uStack_210;
        uStack_290 = uStack_200;
        uStack_2b8 = uStack_260;
        uStack_2c0 = uStack_268;
        uStack_2b0 = uStack_258;
        _CMTimeAdd(&uStack_210,&uStack_2a0,&uStack_2c0);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uStack_278 = uStack_208;
        uStack_280 = uStack_210;
        uStack_270 = uStack_200;
        _CMTimeGetSeconds(&uStack_280);
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_3b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_3c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_3b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    lStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    plStack_3f0 = (long *)0x0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    lVar3 = *(long *)(puVar1 + 8);
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar6 = *plStack_3f0;
      do {
        lVar7 = 0;
        do {
          if (*plStack_3f0 != lVar6) {
            _objc_enumerationMutation(lVar3);
          }
          if (*(long *)(lStack_3f8 + lVar7 * 8) == 0) {
            uStack_418 = 0;
            uStack_420 = 0;
            uStack_408 = 0;
            uStack_410 = 0;
            uStack_428 = 0;
            uStack_430 = 0;
          }
          else {
            func_0x00010c27c900(&uStack_430);
          }
          uStack_448 = uStack_3b8;
          uStack_450 = uStack_3c0;
          uStack_440 = uStack_3b0;
          uStack_468 = uStack_410;
          uStack_470 = uStack_418;
          uStack_460 = uStack_408;
          _CMTimeAdd(&uStack_3c0,&uStack_450,&uStack_470);
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uStack_428 = uStack_3b8;
          uStack_430 = uStack_3c0;
          uStack_420 = uStack_3b0;
          _CMTimeGetSeconds(&uStack_430);
          func_0x00010c0df720(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(puVar1);
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar3;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar3);
    puVar4 = puVar5;
    func_0x00010bf51e00();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
      ___stack_chk_fail();
      puVar4 = *(undefined **)(puVar5 + 8);
      func_0x00010c089820(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010c280560();
      _objc_release(puVar4);
      return puVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 107faef54; end: 107faf133; -[SCTimelineConfigurationImpl cumulativeContentEndTimes] */

undefined * FUN_107faef54(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_218;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_100 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        if (*(long *)(lStack_138 + lVar7 * 8) == 0) {
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_170);
        }
        uStack_188 = uStack_f8;
        uStack_190 = uStack_100;
        uStack_180 = uStack_f0;
        uStack_1a8 = uStack_150;
        uStack_1b0 = uStack_158;
        uStack_1a0 = uStack_148;
        _CMTimeAdd(&uStack_100,&uStack_190,&uStack_1b0);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uStack_168 = uStack_f8;
        uStack_170 = uStack_100;
        uStack_160 = uStack_f0;
        _CMTimeGetSeconds(&uStack_170);
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_2b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_2a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    lStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    plStack_2e0 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    lVar5 = *(long *)(puVar1 + 8);
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar6 = *plStack_2e0;
      do {
        lVar7 = 0;
        do {
          if (*plStack_2e0 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          if (*(long *)(lStack_2e8 + lVar7 * 8) == 0) {
            uStack_308 = 0;
            uStack_310 = 0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            uStack_318 = 0;
            uStack_320 = 0;
          }
          else {
            func_0x00010c27c900(&uStack_320);
          }
          uStack_338 = uStack_2a8;
          uStack_340 = uStack_2b0;
          uStack_330 = uStack_2a0;
          uStack_358 = uStack_300;
          uStack_360 = uStack_308;
          uStack_350 = uStack_2f8;
          _CMTimeAdd(&uStack_2b0,&uStack_340,&uStack_360);
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uStack_318 = uStack_2a8;
          uStack_320 = uStack_2b0;
          uStack_310 = uStack_2a0;
          _CMTimeGetSeconds(&uStack_320);
          func_0x00010c0df720(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar1);
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar5);
    puVar4 = puVar3;
    func_0x00010bf51e00();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      puVar4 = *(undefined **)(puVar3 + 8);
      func_0x00010c089820(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010c280560();
      _objc_release(puVar4);
      return puVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 107faf134; end: 107faf313; -[SCTimelineConfigurationImpl cumulativeSegmentEndTimes] */

undefined * FUN_107faf134(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_100 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_f0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_130;
    do {
      lVar6 = 0;
      do {
        if (*plStack_130 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        if (*(long *)(lStack_138 + lVar6 * 8) == 0) {
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_170);
        }
        uStack_188 = uStack_f8;
        uStack_190 = uStack_100;
        uStack_180 = uStack_f0;
        uStack_1a8 = uStack_150;
        uStack_1b0 = uStack_158;
        uStack_1a0 = uStack_148;
        _CMTimeAdd(&uStack_100,&uStack_190,&uStack_1b0);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uStack_168 = uStack_f8;
        uStack_170 = uStack_100;
        uStack_160 = uStack_f0;
        _CMTimeGetSeconds(&uStack_170);
        func_0x00010c0df720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = *(undefined **)(puVar1 + 8);
  func_0x00010c089820(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c280560();
  _objc_release(puVar3);
  return puVar1;
}



/* Entry: 107faf314; end: 107faf353; -[SCTimelineConfigurationImpl lastSegmentUniqueId] */

undefined8 FUN_107faf314(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c280560();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107faf354; end: 107faf383; -[SCTimelineConfigurationImpl suppressTimelineContextInfo] */

bool FUN_107faf354(long param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
    return true;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0(uVar1);
  return uVar1 < 2;
}



/* Entry: 107faf384; end: 107faf39b; -[SCTimelineConfigurationImpl isAudioEnabled] */

void FUN_107faf384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_any__11259ebf0,
             &PTR___NSConcreteGlobalBlock_110a16298);
  return;
}



/* Entry: 107faf39c; end: 107faf3a3; -[SCTimelineConfigurationImpl allSegmentsHaveSamePlaybackRate] */

undefined8 FUN_107faf39c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fff40();
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_107fb2608;
  puStack_40 = &UNK_1108e9870;
  uVar2 = uVar1;
  uStack_38 = param_1;
  func_0x00010c0bc7a0(uVar1,param_3,&puStack_58);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107faf3a4; end: 107faf403; -[SCTimelineConfigurationImpl snapSegmentLoggingParams] */

void FUN_107faf3a4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107faf404;
  puStack_20 = &UNK_110a162b8;
  lStack_18 = param_1;
  func_0x00010c0b8600(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107faf404; end: 107faf49b;  */

void FUN_107faf404(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010c218100(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2702a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c242f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107faf49c; end: 107faf64b; -[SCTimelineConfigurationImpl transferDataFrom:] */

void FUN_107faf49c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1585e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ce80(param_1);
  uVar2 = param_3;
  func_0x00010c2702a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c2702a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0xd0);
    *(ulong *)(param_1 + 0xd0) = uVar2;
    _objc_release(uVar6);
  }
  uVar2 = param_3;
  func_0x00010c110b40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  *(ulong *)(param_1 + 0xb8) = uVar2;
  _objc_release(uVar6);
  uVar2 = param_3;
  func_0x00010c0d32a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9fc0(param_1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c8570;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar2 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  func_0x00010c1684c0(uVar2);
  _objc_release(uVar2);
  func_0x00010bf6b5c0(param_3);
  func_0x00010c215ae0(param_3);
  puVar5 = PTR_PTR_1126d8a48;
  _objc_opt_new(PTR_PTR_1126d8a48);
  puVar3 = PTR_PTR_1126c8570;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar2 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  func_0x00010c1684c0(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107faf64c; end: 107faf6db; -[SCTimelineConfigurationImpl addPendingMemoriesImportSnapDoc:segmentUniqueId:] */

void FUN_107faf64c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0df780(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x80),param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107faf6dc; end: 107faf74b; -[SCTimelineConfigurationImpl getThenRemovePendingMemoriesImportSnapDocForSegmentUniqueId:] */

void FUN_107faf6dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x80),param_2,0,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107faf74c; end: 107faf9db; -[SCTimelineConfigurationImpl _addSingleSegment:] */

void FUN_107faf74c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010bf4d840(&uStack_90,lVar1);
    }
    _CMTimeRangeGetEnd(&uStack_58,&uStack_90);
    uStack_88 = uStack_50;
    uStack_90 = uStack_58;
    uStack_80 = uStack_48;
    func_0x00010c209a60(param_3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c280560();
  if (*(long *)(param_1 + 0x10) <= lVar1) {
    lVar1 = param_3;
    func_0x00010c280560();
    *(long *)(param_1 + 0x10) = lVar1 + 1;
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 8));
  if (param_3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bf4d840(&uStack_90,param_3);
  }
  uStack_b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_c0 = *(undefined8 *)(param_1 + 0x20);
  uStack_b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_d8 = uStack_70;
  uStack_e0 = uStack_78;
  uStack_d0 = uStack_68;
  _CMTimeAdd(&uStack_a8,&uStack_c0,&uStack_e0);
  *(undefined8 *)(param_1 + 0x28) = uStack_a0;
  *(undefined8 *)(param_1 + 0x20) = uStack_a8;
  *(undefined8 *)(param_1 + 0x30) = uStack_98;
  if (param_3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_90,param_3);
  }
  uStack_b8 = *(undefined8 *)(param_1 + 0x40);
  uStack_c0 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = *(undefined8 *)(param_1 + 0x48);
  uStack_d8 = uStack_70;
  uStack_e0 = uStack_78;
  uStack_d0 = uStack_68;
  _CMTimeAdd(&uStack_a8,&uStack_c0,&uStack_e0);
  *(undefined8 *)(param_1 + 0x40) = uStack_a0;
  *(undefined8 *)(param_1 + 0x38) = uStack_a8;
  *(undefined8 *)(param_1 + 0x48) = uStack_98;
  _objc_initWeak(&uStack_90,param_1);
  lVar1 = param_3;
  func_0x00010c27c920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e8,&uStack_90);
  _objc_retain(param_3);
  lVar2 = lVar1;
  func_0x00010c25ff60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x50));
  func_0x00010be6b480(param_1);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(&uStack_90);
  _objc_release(param_3);
  return;
}



/* Entry: 107faf9dc; end: 107fafa6f;  */

void FUN_107faf9dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be6b480(lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010bfecde0(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(lVar1 + 0xf8);
    if (*(long *)(param_1 + 0x20) == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010c09e0e0(&uStack_60);
    }
    func_0x00010c26ff40(uVar3,param_2,lVar1,&uStack_60,uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107fafa70; end: 107fafba3; -[SCTimelineConfigurationImpl _resetInternalStateIfNeeded] */

void FUN_107fafa70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if ((lVar1 == 0) && (*(long *)(param_1 + 0x68) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    _objc_release(uVar2);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar3 = *(long *)(param_1 + 0x50);
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar1 != 0) {
      lVar4 = *plStack_100;
      do {
        lVar5 = 0;
        do {
          if (*plStack_100 != lVar4) {
            _objc_enumerationMutation(lVar3);
          }
          func_0x00010bf86d40(*(undefined8 *)(lStack_108 + lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
        lVar1 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c12adc0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar1 + 0xd0);
  *(long *)(lVar1 + 0xd0) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fafba4; end: 107fafbd7; -[SCTimelineConfigurationImpl _resetSessionID] */

void FUN_107fafba4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  *(long *)(param_1 + 0xd0) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fafbd8; end: 107fafdbb; -[SCTimelineConfigurationImpl _onSegmentTimeRangesUpdated] */

void FUN_107fafbd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar3 = *(long *)(param_1 + 8);
  uStack_f0 = uStack_110;
  uStack_e8 = uStack_108;
  uStack_e0 = uStack_100;
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_140;
    do {
      lVar6 = 0;
      do {
        if (*plStack_140 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        lVar4 = *(long *)(lStack_148 + lVar6 * 8);
        if (lVar4 == 0) {
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_180,lVar4);
        }
        uStack_198 = uStack_e8;
        uStack_1a0 = uStack_f0;
        uStack_190 = uStack_e0;
        uStack_1b8 = uStack_160;
        uStack_1c0 = uStack_168;
        uStack_1b0 = uStack_158;
        _CMTimeAdd(&uStack_f0,&uStack_1a0,&uStack_1c0);
        if (lVar4 == 0) {
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_180,lVar4);
        }
        uStack_198 = uStack_108;
        uStack_1a0 = uStack_110;
        uStack_190 = uStack_100;
        uStack_1b8 = uStack_160;
        uStack_1c0 = uStack_168;
        uStack_1b0 = uStack_158;
        _CMTimeAdd(&uStack_110,&uStack_1a0,&uStack_1c0);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  *(undefined8 *)(param_1 + 0x28) = uStack_e8;
  *(undefined8 *)(param_1 + 0x20) = uStack_f0;
  *(undefined8 *)(param_1 + 0x30) = uStack_e0;
  *(undefined8 *)(param_1 + 0x40) = uStack_108;
  *(undefined8 *)(param_1 + 0x38) = uStack_110;
  *(undefined8 *)(param_1 + 0x48) = uStack_100;
  func_0x00010be65060();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58));
  func_0x00010be64640(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fafdbc; end: 107fafe67; -[SCTimelineConfigurationImpl _notifySegmentTimeRangesChanges] */

void FUN_107fafdbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110a162e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,uVar1);
  func_0x00010be64640(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fafe68; end: 107fafea3; -[SCTimelineConfigurationImpl _notifyConfigurationStatusChanges] */

void FUN_107fafe68(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be1c3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107fafea4; end: 107faff7f; -[SCTimelineConfigurationImpl _findFirstDivergentIndexWithTimelineVideoSegments:] */

undefined8 FUN_107fafea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0x7fffffffffffffff;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar1);
  uVar1 = puStack_48[3];
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107faff80; end: 107fb000b;  */

void FUN_107faff80(long param_1,long param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_2 == lVar2) goto LAB_107fafff4;
  }
  *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
  *param_4 = 1;
LAB_107fafff4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fb000c; end: 107fb027b; -[SCTimelineConfigurationImpl _resetSegmentsTimeOffsetAndObservers] */

void FUN_107fb000c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_d0 [8];
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x00010be92f80();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    puVar1 = PTR__kCMTimeZero_110348670;
    if (lVar2 != 0) {
      uVar7 = 0;
      do {
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0dfd20(uVar3);
        _objc_retainAutoreleasedReturnValue();
        if (uVar7 == 0) {
          uStack_88 = *(undefined8 *)(puVar1 + 8);
          uStack_90 = *(undefined8 *)puVar1;
          uStack_80 = *(undefined8 *)(puVar1 + 0x10);
        }
        else {
          lVar2 = *(long *)(param_1 + 8);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
          }
          else {
            func_0x00010bf4d840(&uStack_c0,lVar2);
          }
          _CMTimeRangeGetEnd(&uStack_90,&uStack_c0);
          _objc_release(lVar2);
        }
        uStack_b8 = uStack_88;
        uStack_c0 = uStack_90;
        uStack_b0 = uStack_80;
        func_0x00010c209a60(uVar3);
        _objc_release(uVar3);
        uVar7 = uVar7 + 1;
        uVar4 = *(ulong *)(param_1 + 8);
        func_0x00010bf529e0();
      } while (uVar7 < uVar4);
    }
    _objc_initWeak(&uStack_c0,param_1);
    uVar7 = 0;
    while( true ) {
      uVar4 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
      if (uVar4 <= uVar7) break;
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c27c920();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_d0,&uStack_c0);
      _objc_retain(uVar5);
      uVar6 = uVar3;
      uStack_c8 = uVar7;
      func_0x00010c25ff60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x50));
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_d0);
      _objc_release(uVar5);
      uVar7 = uVar7 + 1;
    }
    _objc_destroyWeak(&uStack_c0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be64650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyConfigurationStatusChange_112576b30);
  return;
}



/* Entry: 107fb027c; end: 107fb02ff;  */

void FUN_107fb027c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be6b480(lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 0xf8);
    if (*(long *)(param_1 + 0x20) == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010c09e0e0(&uStack_60);
    }
    func_0x00010c26ff40(uVar2,param_2,lVar1,&uStack_60,*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107fb0300; end: 107fb0303; -[SCTimelineConfigurationImpl _generateTimelineConfigurationStatus] */

void FUN_107fb0300(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d8a70;
    _objc_alloc(PTR_PTR_1126d8a70);
    func_0x00010c055b00();
  }
  else {
    puVar1 = param_1;
    func_0x000109018844(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fb0304; end: 107fb033b; -[SCTimelineConfigurationImpl _videoTransformRenderSize] */

undefined1  [16] FUN_107fb0304(long param_1)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar1 = dRam000000011332ebe8;
  dVar3 = *(double *)(param_1 + 0x88);
  dVar4 = *(double *)(param_1 + 0x90);
  bVar2 = false;
  if ((dVar3 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar2 = false, !NAN(dVar4) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar2 = dVar4 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar2) {
    *(undefined8 *)(param_1 + 0x90) = uRam000000011332ebf0;
    *(double *)(param_1 + 0x88) = dVar1;
    dVar3 = *(double *)(param_1 + 0x88);
    dVar4 = *(double *)(param_1 + 0x90);
  }
  auVar5._8_8_ = dVar4;
  auVar5._0_8_ = dVar3;
  return auVar5;
}



/* Entry: 107fb033c; end: 107fb0343; -[SCTimelineConfigurationImpl previewExitType] */

undefined8 FUN_107fb033c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107fb0344; end: 107fb034b; -[SCTimelineConfigurationImpl setPreviewExitType:] */

void FUN_107fb0344(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 107fb034c; end: 107fb0353; -[SCTimelineConfigurationImpl previewEdits] */

undefined8 FUN_107fb034c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107fb0354; end: 107fb0383; -[SCTimelineConfigurationImpl setPreviewEdits:] */

void FUN_107fb0354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb0384; end: 107fb038b; -[SCTimelineConfigurationImpl thumbnailGenerationOverlayState] */

undefined8 FUN_107fb0384(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107fb038c; end: 107fb03bb; -[SCTimelineConfigurationImpl setThumbnailGenerationOverlayState:] */

void FUN_107fb038c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb03bc; end: 107fb03c3; -[SCTimelineConfigurationImpl musicPickerSelection] */

undefined8 FUN_107fb03bc(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107fb03c4; end: 107fb03f3; -[SCTimelineConfigurationImpl setMusicPickerSelection:] */

void FUN_107fb03c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb03f4; end: 107fb03fb; -[SCTimelineConfigurationImpl timelineSessionID] */

undefined8 FUN_107fb03f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107fb03fc; end: 107fb0403; -[SCTimelineConfigurationImpl setTimelineSessionID:] */

void FUN_107fb03fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb0404; end: 107fb040b; -[SCTimelineConfigurationImpl editedThumbnails] */

undefined8 FUN_107fb0404(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107fb040c; end: 107fb0413; -[SCTimelineConfigurationImpl areSegmentsEditable] */

undefined1 FUN_107fb040c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x99);
}



/* Entry: 107fb0414; end: 107fb041b; -[SCTimelineConfigurationImpl isProminentThumbnailEnabled] */

undefined1 FUN_107fb0414(long param_1)

{
  return *(undefined1 *)(param_1 + 0x9a);
}



/* Entry: 107fb041c; end: 107fb0423; -[SCTimelineConfigurationImpl setProminentThumbnailEnabled:] */

void FUN_107fb041c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x9a) = param_3;
  return;
}



/* Entry: 107fb0424; end: 107fb042b; -[SCTimelineConfigurationImpl useNGSMEPlayback] */

undefined1 FUN_107fb0424(long param_1)

{
  return *(undefined1 *)(param_1 + 0x9b);
}



/* Entry: 107fb042c; end: 107fb0433; -[SCTimelineConfigurationImpl setSuppressTimelineContextInfo:] */

void FUN_107fb042c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x9c) = param_3;
  return;
}



/* Entry: 107fb0434; end: 107fb043b; -[SCTimelineConfigurationImpl usageType] */

undefined8 FUN_107fb0434(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 107fb043c; end: 107fb0443; -[SCTimelineConfigurationImpl renderSizeOverride] */

undefined1  [16] FUN_107fb043c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x100);
}



/* Entry: 107fb0444; end: 107fb044b; -[SCTimelineConfigurationImpl setRenderSizeOverride:] */

void FUN_107fb0444(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x100) = param_1;
  *(undefined8 *)(param_3 + 0x108) = param_2;
  return;
}



/* Entry: 107fb044c; end: 107fb0453; -[SCTimelineConfigurationImpl shouldPreGenerateImagePixelBuffers] */

undefined1 FUN_107fb044c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



/* Entry: 107fb0454; end: 107fb045b; -[SCTimelineConfigurationImpl setShouldPreGenerateImagePixelBuffers:] */

void FUN_107fb0454(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 107fb045c; end: 107fb0463; -[SCTimelineConfigurationImpl announcer] */

undefined8 FUN_107fb045c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 107fb0464; end: 107fb0493; -[SCTimelineConfigurationImpl setAnnouncer:] */

void FUN_107fb0464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb0494; end: 107fb0577; -[SCTimelineConfigurationImpl .cxx_destruct] */

void FUN_107fb0494(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fb0578; end: 107fb068b; -[SCTimelineImageSegmentImpl initWithAssetURL:frameImage:snapSource:uniqueId:blizzardLogger:tinselMedia:activeLensID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107fb0578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fbf40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithUniqueId_blizzardLogger__112539ed8,param_6,param_7,
                      param_5,param_9,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127729b8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127729bc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127729c0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107fb068c; end: 107fb06df; -[SCTimelineImageSegmentImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb068c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_1127729b4) != 0) {
    _CVPixelBufferRelease();
  }
  puStack_28 = PTR_PTR_1126fbf40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107fb06e0; end: 107fb06e7; -[SCTimelineImageSegmentImpl isImportedContent] */

undefined8 FUN_107fb06e0(void)

{
  return 1;
}


