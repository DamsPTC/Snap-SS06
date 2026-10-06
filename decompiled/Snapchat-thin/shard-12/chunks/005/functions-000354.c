/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091f4bf0; end: 1091f4bf7; -[SCCameraModeOnboardingDialogPresenter gifDownloadableUrl] */

undefined8 FUN_1091f4bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1091f4bf8; end: 1091f4bff; -[SCCameraModeOnboardingDialogPresenter setGifDownloadableUrl:] */

void FUN_1091f4bf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f4c00; end: 1091f4c07; -[SCCameraModeOnboardingDialogPresenter imageDownloadableUrl] */

undefined8 FUN_1091f4c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1091f4c08; end: 1091f4c0f; -[SCCameraModeOnboardingDialogPresenter setImageDownloadableUrl:] */

void FUN_1091f4c08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f4c10; end: 1091f4c17; -[SCCameraModeOnboardingDialogPresenter contentDelivery] */

undefined8 FUN_1091f4c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091f4c18; end: 1091f4c47; -[SCCameraModeOnboardingDialogPresenter setContentDelivery:] */

void FUN_1091f4c18(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091f4c48; end: 1091f4c4f; -[SCCameraModeOnboardingDialogPresenter dowloadableContentType] */

undefined8 FUN_1091f4c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091f4c50; end: 1091f4c57; -[SCCameraModeOnboardingDialogPresenter setDowloadableContentType:] */

void FUN_1091f4c50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091f4c58; end: 1091f4cd7; -[SCCameraModeOnboardingDialogPresenter .cxx_destruct] */

void FUN_1091f4c58(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091f4cd8; end: 1091f5267; -[SCDirectorThumbnailsActionView initWithFrame:image:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1091f4cd8(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar27 = param_7;
  _objc_retain(param_7);
  puStack_e8 = PTR_PTR_112700f58;
  puVar1 = &uStack_f0;
  dVar31 = param_1;
  dVar32 = param_2;
  dVar33 = param_3;
  dVar34 = param_4;
  uStack_f0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar29 = (long)_DAT_112783770;
    uVar28 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined **)((long)puVar1 + lVar29) = puVar2;
    _objc_release(uVar28);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(puVar2);
    uVar28 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c08c0e0(uVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_3 * 0.5);
    _objc_release(uVar28);
    uVar28 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c08c0e0(uVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar28);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar29));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar30 = (long)_DAT_112783774;
    uVar28 = *(undefined8 *)((long)puVar1 + lVar30);
    *(undefined **)((long)puVar1 + lVar30) = puVar2;
    _objc_release(uVar28);
    func_0x00010befbd40(*(undefined8 *)((long)puVar1 + lVar30));
    dVar31 = 1.2;
    func_0x00010c1c3c80(0x3ff3333333333333,*(undefined8 *)((long)puVar1 + lVar30));
    func_0x00010befbb60(puVar1);
    func_0x00010c1748e0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar28;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar7;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar16;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar19;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar22;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar26;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar26);
    _objc_release(uVar25);
    _objc_release(puVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(puVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(puVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar28);
    _objc_release(puVar4);
    _objc_release(uVar3);
    dVar32 = param_2;
    dVar33 = param_3;
    dVar34 = param_4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar27);
  lVar29 = (long)_DAT_112783778;
  if (*(undefined8 **)((long)param_7 + lVar29) != puVar27) {
    _objc_retain(puVar27);
    uVar28 = *(undefined8 *)((long)param_7 + lVar29);
    *(undefined8 **)((long)param_7 + lVar29) = puVar27;
    _objc_release(uVar28);
    lVar29 = (long)_DAT_112783774;
    func_0x00010c1a9f00(*(undefined8 *)((long)param_7 + lVar29));
    func_0x00010bf20c00(param_7);
    func_0x00010c23d0a0(puVar27);
    func_0x00010bf20c00(param_7);
    func_0x00010c23d0a0(puVar27);
    func_0x00010c1aa420((dVar33 - dVar31) * 0.5,(dVar34 - dVar32) * 0.5,
                        *(undefined8 *)((long)param_7 + lVar29));
    func_0x00010c1cbe20(*(undefined8 *)((long)param_7 + lVar29));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar27);
  return puVar27;
}



/* Entry: 1091f5268; end: 1091f5337; -[SCDirectorThumbnailsActionView setButtonImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5268(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_7);
  lVar2 = (long)_DAT_112783778;
  if (*(long *)(param_5 + lVar2) != param_7) {
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_5 + lVar2);
    *(long *)(param_5 + lVar2) = param_7;
    _objc_release(uVar1);
    lVar3 = (long)_DAT_112783774;
    func_0x00010c1a9f00(*(undefined8 *)(param_5 + lVar3),param_6,*(undefined8 *)(param_5 + lVar2));
    func_0x00010bf20c00(param_5);
    func_0x00010c23d0a0(param_7);
    func_0x00010bf20c00(param_5);
    func_0x00010c23d0a0(param_7);
    func_0x00010c1aa420((param_3 - param_1) * 0.5,(param_4 - param_2) * 0.5,
                        *(undefined8 *)(param_5 + lVar3));
    func_0x00010c1cbe20(*(undefined8 *)(param_5 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1091f5338; end: 1091f536f; -[SCDirectorThumbnailsActionView _tapOnButton] */

void FUN_1091f5338(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7d000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f5370; end: 1091f538f; -[SCDirectorThumbnailsActionView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5370(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278377c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091f5390; end: 1091f53a3; -[SCDirectorThumbnailsActionView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5390(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278377c,param_3);
  return;
}



/* Entry: 1091f53a4; end: 1091f53b3; -[SCDirectorThumbnailsActionView buttonImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091f53a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783778);
}



/* Entry: 1091f53b4; end: 1091f540f; -[SCDirectorThumbnailsActionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f53b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112783778,0);
  _objc_destroyWeak(param_1 + _DAT_11278377c);
  _objc_storeStrong(param_1 + _DAT_112783774,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112783770,0);
  return;
}



/* Entry: 1091f5410; end: 1091f567b; -[SCDirectorThumbnailsFooterView initWithFrame:] */

undefined1 *
FUN_1091f5410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar5 = &uStack_70;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar6 = 0;
  uVar8 = 0x4030000000000000;
  uVar9 = 0x4030000000000000;
  func_0x00010c013de0(0,0,0x4030000000000000,0x4030000000000000);
  func_0x00010bfb68e0();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _UIGraphicsBeginImageContextWithOptions(uVar8,uVar9,uVar6,0);
  _objc_release(puVar2);
  _UIGraphicsGetCurrentContext();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsGetCurrentContext();
  func_0x00010c12fc60(puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetStrokeColorWithColor(puVar2,puVar4);
  _objc_release(puVar3);
  _CGContextSetLineCap(puVar2,1);
  _CGContextSetLineWidth(0x4010000000000000,puVar2);
  _CGContextBeginPath(puVar2);
  _CGRectGetMidX(0,0,0x4030000000000000,0x4030000000000000);
  _CGContextMoveToPoint(puVar2);
  uVar6 = 0;
  _CGRectGetMidX(0,0,0x4030000000000000,0x4030000000000000);
  dVar7 = 0.0;
  _CGRectGetMaxY(0,0,0x4030000000000000,0x4030000000000000);
  _CGContextAddLineToPoint(uVar6,dVar7 + -2.0,puVar2);
  uVar6 = 0;
  _CGRectGetMidY(0,0,0x4030000000000000,0x4030000000000000);
  _CGContextMoveToPoint(0x4000000000000000,uVar6,puVar2);
  dVar7 = 0.0;
  _CGRectGetMaxX(0,0,0x4030000000000000,0x4030000000000000);
  uVar6 = 0;
  _CGRectGetMidY(0,0,0x4030000000000000,0x4030000000000000);
  _CGContextAddLineToPoint(dVar7 + -2.0,uVar6,puVar2);
  _CGContextStrokePath(puVar2);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(puVar1);
  puStack_68 = PTR_PTR_112700f60;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,
                      PTR_s_initWithFrame_image__1125e2b70,puVar2);
  _objc_release(puVar2);
  return (undefined1 *)puVar5;
}



/* Entry: 1091f567c; end: 1091f5723; -[SCDirectorThumbnailsHeaderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1091f567c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_5;
  func_0x0001092017d8();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_112700f68;
  uStack_50 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,
                      PTR_s_initWithFrame_image__1125e2b70,uVar1);
  _objc_release(uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + (long)_DAT_112783780) = 1;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 1091f5724; end: 1091f57af; -[SCDirectorThumbnailsHeaderView setButtonState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5724(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == *(long *)(param_1 + _DAT_112783780)) {
    return;
  }
  *(long *)(param_1 + _DAT_112783780) = param_3;
  if (param_3 == 1) {
    puVar1 = param_1;
    func_0x0001092017d8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 0) {
      return;
    }
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110f2c198);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1748e0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091f57b0; end: 1091f57bf; -[SCDirectorThumbnailsHeaderView currentState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091f57b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783780);
}



/* Entry: 1091f57c0; end: 1091f594b; -[SCDMThumbnailsViewController initWithSnapDocEditorProvider:configuration:thumbnailGenerator:includeFooterView:snapEditorEnabled:isSegmentTrimmable:isClipReorderingEnabled:useFixedSegmentDuration:templateExplorerEnabled:runtime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1091f57c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112700f70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112783788;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11278378c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + lVar3));
    lVar3 = (long)_DAT_112783790;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112783794) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112783798) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278379c) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127837a0) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127837a4) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127837a8) = param_9._2_1_;
    lVar3 = (long)_DAT_1127837ac;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1091f594c; end: 1091f5a9b; -[SCDMThumbnailsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f594c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112700f70;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  lVar2 = param_1;
  func_0x00010c29bf00();
  iVar1 = (int)lVar2;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbe00();
  _objc_release();
  if (*(char *)(param_1 + _DAT_1127837b0) == '\x01') {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107c30a74();
    if ((iVar1 != 0) && (func_0x000107c30a6c(), iVar1 == 0)) goto LAB_1091f5a30;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar3);
LAB_1091f5a30:
  func_0x00010beab960(param_1);
  func_0x00010beacf40(param_1);
  if (*(char *)(param_1 + _DAT_112783794) == '\x01') {
    func_0x00010beaca60(param_1);
  }
  if ((*(char *)(param_1 + _DAT_1127837a8) == '\x01') && (*(long *)(param_1 + _DAT_1127837ac) != 0))
  {
    func_0x00010beb0660(param_1);
  }
  return;
}



/* Entry: 1091f5a9c; end: 1091f5ae3; -[SCDMThumbnailsViewController viewDidAppear:] */

void FUN_1091f5a9c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112700f70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bee4b60(param_1);
  return;
}



/* Entry: 1091f5ae4; end: 1091f5b8b; -[SCDMThumbnailsViewController setMediaConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5ae4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11278378c;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010bf17320(param_1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010bee1ce0(param_1);
    func_0x00010bf17340(param_1);
    func_0x00010c28fca0(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091f5b8c; end: 1091f5b8f; -[SCDMThumbnailsViewController setSegmentThumbnailSelectedAtIndex:] */

void FUN_1091f5b8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__selectSegmentCellAtIndex__112585078);
  return;
}



/* Entry: 1091f5b90; end: 1091f5bc3; -[SCDMThumbnailsViewController deselectSelectedSegmentIfAny] */

undefined8 FUN_1091f5b90(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be3ef00();
  if ((int)uVar1 != 0) {
    func_0x00010bdfb120(param_1);
  }
  return uVar1;
}



/* Entry: 1091f5bc4; end: 1091f5be3; -[SCDMThumbnailsViewController exitSegmentsReordering] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5bc4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127837b4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed56d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateCollectionViewForReorderi_112592f58,
             *(undefined8 *)(param_1 + _DAT_1127837b8),0);
  return;
}



/* Entry: 1091f5be4; end: 1091f5c73; -[SCDMThumbnailsViewController restoreToInitialSegmentsInReorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5be4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_1127837a0) == '\x01') {
    lVar2 = (long)_DAT_1127837bc;
    if (*(long *)(param_1 + lVar2) != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112783788);
      func_0x00010c240000(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c139ee0();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c13c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11278378c),
               PTR_s_restoreToSegmentsBeforeReorderin_11262cc00);
    return;
  }
  return;
}



/* Entry: 1091f5c74; end: 1091f5da3; -[SCDMThumbnailsViewController deleteSelectedSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5c74(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1;
  func_0x00010be3ef00();
  if ((int)lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112783788);
    func_0x00010c240000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126affe8;
    lVar5 = (long)_DAT_1127837c0;
    func_0x00010c1554e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c09e180(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c760(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar1);
    lVar4 = (long)_DAT_11278378c;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1554e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bf6c780(uVar1);
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010c1581e0();
    lVar4 = param_1 + _DAT_1127837c4;
    _objc_loadWeakRetained(lVar4);
    if (lVar3 == 0) {
      func_0x00010c0f6160(lVar4);
      _objc_release(lVar4);
      func_0x00010bee1ce0(param_1);
    }
    else {
      func_0x00010c1554e0(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c270240(lVar4);
      _objc_release(lVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdfb130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deselectSelectedSegment_11255c5e8);
    return;
  }
  return;
}



/* Entry: 1091f5da4; end: 1091f5dd3; -[SCDMThumbnailsViewController batchThumbnailsUpdateBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5da4(long param_1)

{
  func_0x00010bf6e8a0();
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278378c),PTR_s_removeListener__112628e00,param_1);
  return;
}



/* Entry: 1091f5dd4; end: 1091f5e1f; -[SCDMThumbnailsViewController batchThumbnailsUpdateEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5dd4(long param_1,undefined8 param_2)

{
  func_0x00010bef9980(*(undefined8 *)(param_1 + _DAT_11278378c),param_2,param_1);
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f5e20; end: 1091f5e33; -[SCDMThumbnailsViewController setPreSelectedSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5e20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127837c8,param_3);
  return;
}



/* Entry: 1091f5e34; end: 1091f5e47; -[SCDMThumbnailsViewController enableRuntimeThumbnailGeometry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5e34(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127837b0) = 1;
  return;
}



/* Entry: 1091f5e48; end: 1091f5ef3; -[SCDMThumbnailsViewController applyRuntimeCollectionBottomInset:requiresOverlapBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5e48(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  if (*(char *)(param_2 + _DAT_1127837b0) == '\x01') {
    func_0x00010c181140(-param_1,*(undefined8 *)(param_2 + _DAT_1127837cc));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (param_4 == 0) {
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf41680(0,0x3fd3333333333333);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1091f5ef4; end: 1091f5f1f; -[SCDMThumbnailsViewController setPlaybackModeEnabled:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5ef4(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + _DAT_112783784) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112783784) = (char)param_3;
  uVar1 = 1;
  if (param_3 == 0) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c284650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateCollectionViewHorizontalCo_11267ebb8,uVar1);
  return;
}



/* Entry: 1091f5f20; end: 1091f61af; -[SCDMThumbnailsViewController updateCollectionViewHorizontalConstraintsOnLayoutType:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f5f20(undefined *param_1,undefined8 param_2,long param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_1127837d0) != param_3) {
    *(long *)(param_1 + _DAT_1127837d0) = param_3;
    if (param_3 == 2) {
      func_0x00010c181140(0,*(undefined8 *)(param_1 + _DAT_1127837d4));
      func_0x00010c181140(0,*(undefined8 *)(param_1 + _DAT_1127837d8));
      lVar3 = *(long *)(param_1 + _DAT_1127837b8);
      func_0x00010c29fc60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar3);
          }
          puVar5 = PTR_PTR_1126b0d88;
          uVar9 = *(ulong *)(lVar10 * 8);
          _objc_retain(uVar9);
          _objc_opt_class(puVar5);
          uVar6 = uVar9;
          _objc_opt_isKindOfClass(uVar9,puVar5);
          uVar1 = uVar9;
          if ((uVar6 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar9);
          func_0x00010bfe25e0(uVar1);
          _objc_release(uVar1);
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      }
      _objc_release(lVar3);
    }
    else if (param_3 == 1) {
      func_0x00010c181140(0x404c000000000000,*(undefined8 *)(param_1 + _DAT_1127837d4));
      func_0x00010bed5740(param_1);
    }
    else if (param_3 == 0) {
      func_0x00010c181140(0x404c000000000000,*(undefined8 *)(param_1 + _DAT_1127837d4));
      func_0x00010c181140(0xc034000000000000,*(undefined8 *)(param_1 + _DAT_1127837d8));
    }
    puVar5 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(puVar5);
    if (param_4 == 0) {
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release();
    }
    else {
      param_1 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010bf03400(0x3fd3333333333333);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1091f61b0; end: 1091f61e3;  */

void FUN_1091f61b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091f61e4; end: 1091f6543; -[SCDMThumbnailsViewController playbackDidRenderFrameAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f61e4(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  func_0x00010be41180();
  if ((int)uVar3 != 0) {
    puVar1 = (undefined8 *)(param_1 + (long)_DAT_1127837dc);
    uVar11 = param_3[2];
    uVar19 = *param_3;
    puVar1[1] = param_3[1];
    *puVar1 = uVar19;
    puVar1[2] = uVar11;
    lVar10 = (long)_DAT_1127837e0;
    if (*(char *)(param_1 + lVar10) == '\x01') {
      uVar3 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7f6a0();
      _objc_release(uVar3);
    }
    lVar12 = (long)_DAT_1127837c0;
    if (*(long *)(param_1 + lVar12) == 0) {
      uVar4 = param_1;
      func_0x00010bdf6f40();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = (long)_DAT_1127837b8;
      lVar18 = *(long *)(param_1 + lVar14);
      func_0x00010bfed1a0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar18;
      func_0x00010bf52a60();
      lVar7 = lRam0000000000000000;
      while (lVar12 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(lVar18);
          }
          lVar17 = *(long *)(lVar15 * 8);
          uVar5 = *(ulong *)(param_1 + lVar14);
          func_0x00010bf33b60();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126b0d88;
          _objc_opt_class(PTR_PTR_1126b0d88);
          uVar13 = uVar5;
          _objc_opt_isKindOfClass(uVar5,puVar6);
          uVar3 = uVar5;
          if ((uVar13 & 1) == 0) {
            uVar3 = 0;
          }
          _objc_retain(uVar3);
          _objc_release(uVar5);
          func_0x00010c1554e0();
          uVar13 = uVar4;
          func_0x00010c1554e0();
          if (((long)uVar13 < lVar17) || ((*(byte *)(param_1 + lVar10) & 1) != 0)) {
            func_0x00010bfe25e0(uVar3);
            func_0x00010bedc5e0(param_1);
          }
          else {
            func_0x00010c288960(uVar3);
          }
          _objc_release(uVar3);
          lVar15 = lVar15 + 1;
        } while (lVar12 != lVar15);
        lVar12 = lVar18;
        func_0x00010bf52a60();
      }
      _objc_release(lVar18);
      uVar3 = *(ulong *)(param_1 + lVar14);
      func_0x00010c070ea0();
      lVar12 = (long)_DAT_1127837e4;
      if (((((uVar3 & 1) == 0) && (uVar3 = uVar4, func_0x00010c071ae0(), (uVar3 & 1) == 0)) &&
          (uVar3 = param_1, func_0x00010be3ec40(), (uVar3 & 1) == 0)) &&
         ((*(byte *)(param_1 + lVar10) & 1) == 0)) {
        func_0x00010bdd1880(param_1);
      }
      uVar3 = *(ulong *)(param_1 + lVar12);
      *(ulong *)(param_1 + lVar12) = uVar4;
    }
    else {
      uVar13 = *(ulong *)(param_1 + (long)_DAT_1127837b8);
      puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126b0d88;
      _objc_opt_class(PTR_PTR_1126b0d88);
      uVar4 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar6);
      uVar3 = uVar13;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar13);
      func_0x00010c288960(uVar3);
      _objc_release(uVar3);
      uVar11 = *(undefined8 *)(param_1 + lVar12);
      lVar10 = (long)_DAT_1127837e4;
      _objc_retain(uVar11);
      uVar3 = *(ulong *)(param_1 + lVar10);
      *(undefined8 *)(param_1 + lVar10) = uVar11;
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = uVar3;
  func_0x00010bdf6f40();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(uVar3 + (long)_DAT_1127837e0) == '\x01') {
    lVar18 = (long)_DAT_1127837b8;
    lVar7 = *(long *)(uVar3 + lVar18);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar7;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    if (lVar12 != 0) {
      do {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar10) {
            _objc_enumerationMutation(lVar7);
          }
          uVar16 = *(ulong *)(lVar14 * 8);
          uVar8 = *(ulong *)(uVar3 + lVar18);
          func_0x00010bf33b60();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126b0d88;
          _objc_opt_class(PTR_PTR_1126b0d88);
          uVar5 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar6);
          uVar13 = uVar8;
          if ((uVar5 & 1) == 0) {
            uVar13 = 0;
          }
          _objc_retain(uVar13);
          _objc_release(uVar8);
          uVar2 = 0x3f800000;
          if (uVar16 != uVar4) {
            uVar2 = 0x3f333333;
          }
          uVar5 = uVar13;
          func_0x00010c08c0e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          func_0x00010c1d4bc0(uVar2,uVar5);
          _objc_release(uVar5);
          lVar14 = lVar14 + 1;
        } while (lVar12 != lVar14);
        lVar12 = lVar7;
        func_0x00010bf52a60();
      } while (lVar12 != 0);
    }
    _objc_release(lVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_1127837e8;
  func_0x00010c174a40(*(undefined8 *)(uVar4 + lVar9));
                    /* WARNING: Could not recover jumptable at 0x00010c1610b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(uVar4 + lVar9),PTR_s_setAccessibilityValue__112635e48,
             &PTR____CFConstantStringClassReference_110ec1178);
  return;
}



/* Entry: 1091f6544; end: 1091f6717; -[SCDMThumbnailsViewController _updateOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f6544(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_1;
  func_0x00010bdf6f40();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_1127837e0) == '\x01') {
    lVar13 = (long)_DAT_1127837b8;
    lVar5 = *(long *)(param_1 + lVar13);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (lVar6 != 0) {
      do {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar5);
          }
          lVar12 = *(long *)(lVar11 * 8);
          uVar7 = *(ulong *)(param_1 + lVar13);
          func_0x00010bf33b60();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b0d88;
          _objc_opt_class(PTR_PTR_1126b0d88);
          uVar9 = uVar7;
          _objc_opt_isKindOfClass(uVar7,puVar8);
          uVar1 = uVar7;
          if ((uVar9 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar7);
          uVar2 = 0x3f800000;
          if (lVar12 != lVar4) {
            uVar2 = 0x3f333333;
          }
          uVar9 = uVar1;
          func_0x00010c08c0e0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          func_0x00010c1d4bc0(uVar2,uVar9);
          _objc_release(uVar9);
          lVar11 = lVar11 + 1;
        } while (lVar6 != lVar11);
        lVar6 = lVar5;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = (long)_DAT_1127837e8;
  func_0x00010c174a40(*(undefined8 *)(lVar4 + lVar10));
                    /* WARNING: Could not recover jumptable at 0x00010c1610b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar4 + lVar10),PTR_s_setAccessibilityValue__112635e48,
             &PTR____CFConstantStringClassReference_110ec1178);
  return;
}



/* Entry: 1091f6718; end: 1091f6757; -[SCDMThumbnailsViewController playbackDidStartRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f6718(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127837e8;
  func_0x00010c174a40(*(undefined8 *)(param_1 + lVar1),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1610b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setAccessibilityValue__112635e48,
             &PTR____CFConstantStringClassReference_110ec1178);
  return;
}



/* Entry: 1091f6758; end: 1091f6797; -[SCDMThumbnailsViewController playbackDidStopRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f6758(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127837e8;
  func_0x00010c174a40(*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1610b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setAccessibilityValue__112635e48,
             &PTR____CFConstantStringClassReference_110e592b8);
  return;
}



/* Entry: 1091f6798; end: 1091f67d7; -[SCDMThumbnailsViewController playbackDidPauseRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f6798(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127837e8;
  func_0x00010c174a40(*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1610b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setAccessibilityValue__112635e48,
             &PTR____CFConstantStringClassReference_110e592b8);
  return;
}



/* Entry: 1091f67d8; end: 1091f6817; -[SCDMThumbnailsViewController playbackDidResumeRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f67d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127837e8;
  func_0x00010c174a40(*(undefined8 *)(param_1 + lVar1),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1610b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setAccessibilityValue__112635e48,
             &PTR____CFConstantStringClassReference_110ec1178);
  return;
}



/* Entry: 1091f6818; end: 1091f698b; -[SCDMThumbnailsViewController onMoveToPreviewAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f6818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c174a40(*(undefined8 *)(param_1 + _DAT_1127837e8),param_2,1);
  func_0x00010bedd440(param_1,param_2,0);
  func_0x00010c1dd740(param_1,param_2,1,param_3);
  lVar3 = (long)_DAT_1127837c0;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar1 = param_1 + _DAT_1127837c4;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c1554e0(uVar2);
    func_0x00010c270200(lVar1,param_2,uVar2,1);
    _objc_release(lVar1);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1091f698c; end: 1091f6a73; -[SCDMThumbnailsViewController onRemoveFromPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f698c(long param_1)

{
  _objc_storeWeak(param_1 + _DAT_1127837c4,0);
  _dispatch_time(0,100000000);
  func_0x000107c27d84();
  return;
}



/* Entry: 1091f6a74; end: 1091f6ad7; -[SCDMThumbnailsViewController isPlaybackManuallyPaused] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1091f6a74(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1 + _DAT_1127837c4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_1127837e8);
    func_0x00010bf60240();
    if (lVar1 == 0) {
      bVar2 = *(byte *)(param_1 + _DAT_1127837ec);
      goto LAB_1091f6ac8;
    }
  }
  bVar2 = 0;
LAB_1091f6ac8:
  return bVar2 & 1;
}



/* Entry: 1091f6ad8; end: 1091f6d5f; -[SCDMThumbnailsViewController _setupHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f6ad8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  double dVar28;
  undefined *puStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d4268;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4044000000000000,
                      0x4044000000000000);
  lVar23 = (long)_DAT_1127837e8;
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar23),param_2,param_1);
  lVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar22);
  puStack_b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar20;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar23);
  uStack_a8 = uVar20;
  uStack_98 = uVar20;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar2;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar23);
  uStack_90 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_1127837b8;
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar23);
  uStack_88 = uVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar5;
  func_0x00010bf493c0(0xc010000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar21);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar20);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  lVar22 = *(long *)(param_1 + lVar23);
  func_0x00010c160fc0(lVar22,param_2,&PTR____CFConstantStringClassReference_110f2c4b8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_1091f6d60;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126dde40;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4044000000000000,
                      0x4044000000000000);
  lVar24 = (long)_DAT_1127837f0;
  uVar20 = *(undefined8 *)(lVar22 + lVar24);
  *(undefined **)(lVar22 + lVar24) = puVar1;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(lVar22 + lVar24),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(lVar22 + lVar24),param_2,lVar22);
  lVar23 = lVar22;
  func_0x00010c29bf00(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar23);
  puStack_178 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar20 = *(undefined8 *)(lVar22 + lVar24);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_160 = uVar20;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar22 + lVar24);
  uStack_168 = uVar20;
  uStack_158 = uVar20;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_170 = uVar2;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar22 + lVar24);
  uStack_150 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_1127837b8;
  uVar4 = *(undefined8 *)(lVar22 + lVar23);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar22 + lVar24);
  uStack_148 = uVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar22 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar5;
  func_0x00010bf493c0(0x4010000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_140 = uVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_158,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_178,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar21);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar20);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  lVar22 = *(long *)(lVar22 + lVar24);
  func_0x00010c160fc0(lVar22,param_2,&PTR____CFConstantStringClassReference_110f2c4d8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_1091f6fe8;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  ppuStack_190 = &puStack_d0;
  _objc_opt_new();
  func_0x00010c1f7ac0();
  puVar7 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  lVar23 = lVar22;
  func_0x00010c29bf00(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014040(puVar7,param_2,puVar1);
  lVar24 = (long)_DAT_1127837b8;
  uVar20 = *(undefined8 *)(lVar22 + lVar24);
  *(undefined **)(lVar22 + lVar24) = puVar7;
  _objc_release(uVar20);
  _objc_release(lVar23);
  func_0x00010c1fbe00(*(undefined8 *)(lVar22 + lVar24),param_2,3);
  func_0x00010c189840(*(undefined8 *)(lVar22 + lVar24),param_2,lVar22);
  func_0x00010c18b5e0(*(undefined8 *)(lVar22 + lVar24),param_2,lVar22);
  uVar20 = *(undefined8 *)(lVar22 + lVar24);
  func_0x00010c08c0e0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(lVar22 + lVar24),param_2,0);
  func_0x00010c167a00(*(undefined8 *)(lVar22 + lVar24),param_2,1);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar22 + lVar24),param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010c2025c0(*(undefined8 *)(lVar22 + lVar24),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(lVar22 + lVar24),param_2,0);
  uVar20 = 0;
  dVar28 = 0.0;
  func_0x00010c181f80(0,0x4020000000000000,0,0x4020000000000000,*(undefined8 *)(lVar22 + lVar24));
  func_0x00010c160fc0(*(undefined8 *)(lVar22 + lVar24),param_2,
                      &PTR____CFConstantStringClassReference_110f2c478);
  if (*(char *)(lVar22 + _DAT_1127837a0) == '\x01') {
    func_0x00010c1916a0(*(undefined8 *)(lVar22 + lVar24),param_2,1);
    func_0x00010c192000(*(undefined8 *)(lVar22 + lVar24),param_2,lVar22);
    func_0x00010c191640(*(undefined8 *)(lVar22 + lVar24),param_2,lVar22);
  }
  puVar7 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar23 = (long)_DAT_1127837f4;
  uVar21 = *(undefined8 *)(lVar22 + lVar23);
  *(undefined **)(lVar22 + lVar23) = puVar7;
  _objc_release(uVar21);
  func_0x00010bef9040(*(undefined8 *)(lVar22 + lVar24),param_2,*(undefined8 *)(lVar22 + lVar23));
  lVar23 = lVar22;
  func_0x00010c29bf00(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar23);
  uVar2 = *(undefined8 *)(lVar22 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c29bf00(lVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010bf493c0(0,uVar2,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_1127837d4;
  uVar3 = *(undefined8 *)(lVar22 + lVar25);
  *(undefined8 *)(lVar22 + lVar25) = uVar21;
  _objc_release(uVar3);
  _objc_release(lVar8);
  _objc_release(lVar23);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar22 + lVar24);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c29bf00(lVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010bf493c0(0,uVar2,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_1127837d8;
  uVar3 = *(undefined8 *)(lVar22 + lVar26);
  *(undefined8 *)(lVar22 + lVar26) = uVar21;
  _objc_release(uVar3);
  _objc_release(lVar8);
  _objc_release(lVar23);
  _objc_release(uVar2);
  if ((*(byte *)(lVar22 + _DAT_1127837b0) & 1) == 0) {
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar20 = 0xc03a000000000000;
    if (dVar28 <= 0.0) {
      uVar20 = 0;
    }
  }
  uVar2 = *(undefined8 *)(lVar22 + lVar24);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c29bf00(lVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010bf49520(uVar20,uVar2,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_1127837cc;
  uVar20 = *(undefined8 *)(lVar22 + lVar27);
  *(undefined8 *)(lVar22 + lVar27) = uVar21;
  _objc_release(uVar20);
  _objc_release(lVar8);
  _objc_release(lVar23);
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_220 = *(undefined8 *)(lVar22 + lVar25);
  uStack_218 = *(undefined8 *)(lVar22 + lVar26);
  uVar2 = *(undefined8 *)(lVar22 + lVar24);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar2;
  func_0x00010bf49420(0x4053000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar22 + lVar24);
  uStack_210 = uVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar3;
  func_0x00010bf49460(uVar3,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uStack_200 = *(undefined8 *)(lVar22 + lVar27);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_208 = uVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_220,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar7,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar21);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(uVar3);
  _objc_release(uVar20);
  _objc_release(uVar2);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126b0d88;
  _objc_opt_class();
  func_0x00010c126000(lVar22,param_2,puVar19,&PTR____CFConstantStringClassReference_110f2c1b8);
  _objc_release(lVar22);
  puVar10 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  puStack_258 = puVar7;
  pcStack_228 = FUN_1091f7528;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar10;
  puStack_280 = puVar9;
  uStack_278 = uVar21;
  lStack_270 = lVar24;
  lStack_268 = lVar23;
  uStack_260 = uVar3;
  uStack_250 = uVar20;
  uStack_248 = uVar2;
  lStack_240 = lVar22;
  puStack_238 = puVar1;
  pppuStack_230 = &ppuStack_190;
  if (*(long *)(puVar10 + _DAT_1127837ac) != 0) {
    puVar7 = PTR_PTR_1126dde48;
    _objc_alloc_init();
    puVar9 = PTR_PTR_1126dde50;
    _objc_alloc();
    func_0x00010bff0120();
    puVar11 = PTR_PTR_1126dde58;
    _objc_alloc();
    func_0x00010c061d40();
    lVar22 = (long)_DAT_1127837f8;
    _objc_retain();
    uVar20 = *(undefined8 *)(puVar10 + lVar22);
    *(undefined **)(puVar10 + lVar22) = puVar11;
    _objc_release(uVar20);
    puVar1 = puVar10;
    func_0x00010c29bf00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(puVar11,param_2,0);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = puVar11;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010c29bf00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493a0(puVar12,param_2,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar11;
    puStack_298 = puVar15;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar10 + _DAT_1127837b8);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf493a0(puVar16,param_2,uVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_290 = puVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_298,2);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(uVar20);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    lVar22 = *(long *)(puVar10 + _DAT_11278378c);
    func_0x00010c1581e0();
    if (lVar22 != 0) {
      puVar19 = (undefined *)0x1;
      func_0x00010c1a7f60(puVar11);
    }
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar19);
  if (((((puVar7[_DAT_112783798] & 1) == 0) && (puVar7[_DAT_1127837a0] == '\x01')) &&
      (lVar22 = (long)_DAT_1127837b4, (puVar7[lVar22] & 1) == 0)) &&
     ((puVar1 = puVar7, func_0x00010becd8c0(), (undefined *)0x1 < puVar1 &&
      (puVar1 = puVar19, func_0x00010c252440(), puVar1 == (undefined *)0x1)))) {
    puVar7[lVar22] = 1;
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar1);
    func_0x00010bed56c0(puVar7,param_2,*(undefined8 *)(puVar7 + _DAT_1127837b8),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar19);
  return;
}



/* Entry: 1091f6d60; end: 1091f6fe7; -[SCDMThumbnailsViewController _setupFooterView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f6d60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  double dVar28;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126dde40;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4044000000000000,
                      0x4044000000000000);
  lVar23 = (long)_DAT_1127837f0;
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar23),param_2,param_1);
  lVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar22);
  puStack_b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar20;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar23);
  uStack_a8 = uVar20;
  uStack_98 = uVar20;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar2;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar23);
  uStack_90 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_1127837b8;
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar23);
  uStack_88 = uVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar5;
  func_0x00010bf493c0(0x4010000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar21);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar20);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  lVar22 = *(long *)(param_1 + lVar23);
  func_0x00010c160fc0(lVar22,param_2,&PTR____CFConstantStringClassReference_110f2c4d8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_1091f6fe8;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  func_0x00010c1f7ac0();
  puVar7 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  lVar23 = lVar22;
  func_0x00010c29bf00(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014040(puVar7,param_2,puVar1);
  lVar24 = (long)_DAT_1127837b8;
  uVar20 = *(undefined8 *)(lVar22 + lVar24);
  *(undefined **)(lVar22 + lVar24) = puVar7;
  _objc_release(uVar20);
  _objc_release(lVar23);
  func_0x00010c1fbe00(*(undefined8 *)(lVar22 + lVar24),param_2,3);
  func_0x00010c189840(*(undefined8 *)(lVar22 + lVar24),param_2,lVar22);
  func_0x00010c18b5e0(*(undefined8 *)(lVar22 + lVar24),param_2,lVar22);
  uVar20 = *(undefined8 *)(lVar22 + lVar24);
  func_0x00010c08c0e0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar20);
  func_0x00010c219b60(*(undefined8 *)(lVar22 + lVar24),param_2,0);
  func_0x00010c167a00(*(undefined8 *)(lVar22 + lVar24),param_2,1);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar22 + lVar24),param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010c2025c0(*(undefined8 *)(lVar22 + lVar24),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(lVar22 + lVar24),param_2,0);
  uVar20 = 0;
  dVar28 = 0.0;
  func_0x00010c181f80(0,0x4020000000000000,0,0x4020000000000000,*(undefined8 *)(lVar22 + lVar24));
  func_0x00010c160fc0(*(undefined8 *)(lVar22 + lVar24),param_2,
                      &PTR____CFConstantStringClassReference_110f2c478);
  if (*(char *)(lVar22 + _DAT_1127837a0) == '\x01') {
    func_0x00010c1916a0(*(undefined8 *)(lVar22 + lVar24),param_2,1);
    func_0x00010c192000(*(undefined8 *)(lVar22 + lVar24),param_2,lVar22);
    func_0x00010c191640(*(undefined8 *)(lVar22 + lVar24),param_2,lVar22);
  }
  puVar7 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar23 = (long)_DAT_1127837f4;
  uVar21 = *(undefined8 *)(lVar22 + lVar23);
  *(undefined **)(lVar22 + lVar23) = puVar7;
  _objc_release(uVar21);
  func_0x00010bef9040(*(undefined8 *)(lVar22 + lVar24),param_2,*(undefined8 *)(lVar22 + lVar23));
  lVar23 = lVar22;
  func_0x00010c29bf00(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar23);
  uVar2 = *(undefined8 *)(lVar22 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c29bf00(lVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010bf493c0(0,uVar2,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_1127837d4;
  uVar3 = *(undefined8 *)(lVar22 + lVar25);
  *(undefined8 *)(lVar22 + lVar25) = uVar21;
  _objc_release(uVar3);
  _objc_release(lVar8);
  _objc_release(lVar23);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar22 + lVar24);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c29bf00(lVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010bf493c0(0,uVar2,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_1127837d8;
  uVar3 = *(undefined8 *)(lVar22 + lVar26);
  *(undefined8 *)(lVar22 + lVar26) = uVar21;
  _objc_release(uVar3);
  _objc_release(lVar8);
  _objc_release(lVar23);
  _objc_release(uVar2);
  if ((*(byte *)(lVar22 + _DAT_1127837b0) & 1) == 0) {
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar20 = 0xc03a000000000000;
    if (dVar28 <= 0.0) {
      uVar20 = 0;
    }
  }
  uVar2 = *(undefined8 *)(lVar22 + lVar24);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c29bf00(lVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010bf49520(uVar20,uVar2,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_1127837cc;
  uVar20 = *(undefined8 *)(lVar22 + lVar27);
  *(undefined8 *)(lVar22 + lVar27) = uVar21;
  _objc_release(uVar20);
  _objc_release(lVar8);
  _objc_release(lVar23);
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_160 = *(undefined8 *)(lVar22 + lVar25);
  uStack_158 = *(undefined8 *)(lVar22 + lVar26);
  uVar2 = *(undefined8 *)(lVar22 + lVar24);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar2;
  func_0x00010bf49420(0x4053000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar22 + lVar24);
  uStack_150 = uVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar3;
  func_0x00010bf49460(uVar3,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uStack_140 = *(undefined8 *)(lVar22 + lVar27);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_148 = uVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_160,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar7,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar21);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(uVar3);
  _objc_release(uVar20);
  _objc_release(uVar2);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126b0d88;
  _objc_opt_class();
  func_0x00010c126000(lVar22,param_2,puVar19,&PTR____CFConstantStringClassReference_110f2c1b8);
  _objc_release(lVar22);
  puVar10 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  puStack_198 = puVar7;
  pcStack_168 = FUN_1091f7528;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar10;
  puStack_1c0 = puVar9;
  uStack_1b8 = uVar21;
  lStack_1b0 = lVar24;
  lStack_1a8 = lVar23;
  uStack_1a0 = uVar3;
  uStack_190 = uVar20;
  uStack_188 = uVar2;
  lStack_180 = lVar22;
  puStack_178 = puVar1;
  ppuStack_170 = &puStack_d0;
  if (*(long *)(puVar10 + _DAT_1127837ac) != 0) {
    puVar7 = PTR_PTR_1126dde48;
    _objc_alloc_init();
    puVar9 = PTR_PTR_1126dde50;
    _objc_alloc();
    func_0x00010bff0120();
    puVar11 = PTR_PTR_1126dde58;
    _objc_alloc();
    func_0x00010c061d40();
    lVar22 = (long)_DAT_1127837f8;
    _objc_retain();
    uVar20 = *(undefined8 *)(puVar10 + lVar22);
    *(undefined **)(puVar10 + lVar22) = puVar11;
    _objc_release(uVar20);
    puVar1 = puVar10;
    func_0x00010c29bf00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(puVar11,param_2,0);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = puVar11;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010c29bf00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493a0(puVar12,param_2,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar11;
    puStack_1d8 = puVar15;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar10 + _DAT_1127837b8);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf493a0(puVar16,param_2,uVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1d0 = puVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1d8,2);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(uVar20);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    lVar22 = *(long *)(puVar10 + _DAT_11278378c);
    func_0x00010c1581e0();
    if (lVar22 != 0) {
      puVar19 = (undefined *)0x1;
      func_0x00010c1a7f60(puVar11);
    }
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar19);
  if (((((puVar7[_DAT_112783798] & 1) == 0) && (puVar7[_DAT_1127837a0] == '\x01')) &&
      (lVar22 = (long)_DAT_1127837b4, (puVar7[lVar22] & 1) == 0)) &&
     ((puVar1 = puVar7, func_0x00010becd8c0(), (undefined *)0x1 < puVar1 &&
      (puVar1 = puVar19, func_0x00010c252440(), puVar1 == (undefined *)0x1)))) {
    puVar7[lVar22] = 1;
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar1);
    func_0x00010bed56c0(puVar7,param_2,*(undefined8 *)(puVar7 + _DAT_1127837b8),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar19);
  return;
}



/* Entry: 1091f6fe8; end: 1091f7527; -[SCDMThumbnailsViewController _setupCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f6fe8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new();
  func_0x00010c1f7ac0();
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  lVar19 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014040(puVar2,param_2,puVar1);
  lVar20 = (long)_DAT_1127837b8;
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar2;
  _objc_release(uVar16);
  _objc_release(lVar19);
  func_0x00010c1fbe00(*(undefined8 *)(param_1 + lVar20),param_2,3);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar20),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar20),param_2,param_1);
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08c0e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar16);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010c167a00(*(undefined8 *)(param_1 + lVar20),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar20),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar20),param_2,0);
  uVar16 = 0;
  dVar24 = 0.0;
  func_0x00010c181f80(0,0x4020000000000000,0,0x4020000000000000,*(undefined8 *)(param_1 + lVar20));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar20),param_2,
                      &PTR____CFConstantStringClassReference_110f2c478);
  if (*(char *)(param_1 + _DAT_1127837a0) == '\x01') {
    func_0x00010c1916a0(*(undefined8 *)(param_1 + lVar20),param_2,1);
    func_0x00010c192000(*(undefined8 *)(param_1 + lVar20),param_2,param_1);
    func_0x00010c191640(*(undefined8 *)(param_1 + lVar20),param_2,param_1);
  }
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar19 = (long)_DAT_1127837f4;
  uVar17 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar2;
  _objc_release(uVar17);
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar19));
  lVar19 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar19);
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010bf493c0(0,uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_1127837d4;
  uVar18 = *(undefined8 *)(param_1 + lVar21);
  *(undefined8 *)(param_1 + lVar21) = uVar17;
  _objc_release(uVar18);
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010bf493c0(0,uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_1127837d8;
  uVar18 = *(undefined8 *)(param_1 + lVar22);
  *(undefined8 *)(param_1 + lVar22) = uVar17;
  _objc_release(uVar18);
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release(uVar3);
  if ((*(byte *)(param_1 + _DAT_1127837b0) & 1) == 0) {
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar16 = 0xc03a000000000000;
    if (dVar24 <= 0.0) {
      uVar16 = 0;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar3;
  func_0x00010bf49520(uVar16,uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_1127837cc;
  uVar16 = *(undefined8 *)(param_1 + lVar23);
  *(undefined8 *)(param_1 + lVar23) = uVar17;
  _objc_release(uVar16);
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_a0 = *(undefined8 *)(param_1 + lVar21);
  uStack_98 = *(undefined8 *)(param_1 + lVar22);
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010bf49420(0x4053000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  uStack_90 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar18;
  func_0x00010bf49460(uVar18,param_2,lVar20);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = *(undefined8 *)(param_1 + lVar23);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar17);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(uVar3);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b0d88;
  _objc_opt_class();
  func_0x00010c126000(param_1,param_2,puVar15,&PTR____CFConstantStringClassReference_110f2c1b8);
  _objc_release(param_1);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puStack_d8 = puVar2;
  pcStack_a8 = FUN_1091f7528;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puStack_100 = puVar5;
  uStack_f8 = uVar17;
  lStack_f0 = lVar20;
  lStack_e8 = lVar19;
  uStack_e0 = uVar18;
  uStack_d0 = uVar16;
  uStack_c8 = uVar3;
  lStack_c0 = param_1;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar6 + _DAT_1127837ac) != 0) {
    puVar2 = PTR_PTR_1126dde48;
    _objc_alloc_init();
    puVar5 = PTR_PTR_1126dde50;
    _objc_alloc();
    func_0x00010bff0120();
    puVar7 = PTR_PTR_1126dde58;
    _objc_alloc();
    func_0x00010c061d40();
    lVar19 = (long)_DAT_1127837f8;
    _objc_retain();
    uVar16 = *(undefined8 *)(puVar6 + lVar19);
    *(undefined **)(puVar6 + lVar19) = puVar7;
    _objc_release(uVar16);
    puVar1 = puVar6;
    func_0x00010c29bf00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(puVar7,param_2,0);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c29bf00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf493a0(puVar8,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    puStack_118 = puVar11;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(puVar6 + _DAT_1127837b8);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf493a0(puVar12,param_2,uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_110 = puVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_118,2);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar16);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    lVar19 = *(long *)(puVar6 + _DAT_11278378c);
    func_0x00010c1581e0();
    if (lVar19 != 0) {
      puVar15 = (undefined *)0x1;
      func_0x00010c1a7f60(puVar7);
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  if (((((puVar2[_DAT_112783798] & 1) == 0) && (puVar2[_DAT_1127837a0] == '\x01')) &&
      (lVar19 = (long)_DAT_1127837b4, (puVar2[lVar19] & 1) == 0)) &&
     ((puVar1 = puVar2, func_0x00010becd8c0(), (undefined *)0x1 < puVar1 &&
      (puVar1 = puVar15, func_0x00010c252440(), puVar1 == (undefined *)0x1)))) {
    puVar2[lVar19] = 1;
    puVar1 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar1);
    func_0x00010bed56c0(puVar2,param_2,*(undefined8 *)(puVar2 + _DAT_1127837b8),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return;
}



/* Entry: 1091f7528; end: 1091f778f; -[SCDMThumbnailsViewController _setupTemplateExplorer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f7528(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  if (*(long *)(param_1 + _DAT_1127837ac) != 0) {
    puVar1 = PTR_PTR_1126dde48;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126dde50;
    _objc_alloc();
    func_0x00010bff0120();
    puVar3 = PTR_PTR_1126dde58;
    _objc_alloc();
    func_0x00010c061d40();
    lVar13 = (long)_DAT_1127837f8;
    _objc_retain();
    uVar4 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar3;
    _objc_release(uVar4);
    puVar5 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    func_0x00010c219b60(puVar3,param_2,0);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf493a0(puVar6,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    puStack_78 = puVar9;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127837b8);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf493a0(puVar10,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar12;
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar4);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    lVar13 = *(long *)(param_1 + _DAT_11278378c);
    func_0x00010c1581e0();
    if (lVar13 != 0) {
      param_3 = (undefined *)0x1;
      func_0x00010c1a7f60(puVar3);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (((puVar1[_DAT_112783798] & 1) == 0) && (puVar1[_DAT_1127837a0] == '\x01')) {
    lVar13 = (long)_DAT_1127837b4;
    if (((puVar1[lVar13] & 1) == 0) &&
       ((puVar5 = puVar1, func_0x00010becd8c0(), (undefined *)0x1 < puVar5 &&
        (puVar5 = param_3, func_0x00010c252440(), puVar5 == (undefined *)0x1)))) {
      puVar1[lVar13] = 1;
      puVar5 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar5);
      func_0x00010bed56c0(puVar1,param_2,*(undefined8 *)(puVar1 + _DAT_1127837b8),0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091f7790; end: 1091f785f; -[SCDMThumbnailsViewController _longPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f7790(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (((*(byte *)(param_1 + (long)_DAT_112783798) & 1) == 0) &&
     (*(char *)(param_1 + (long)_DAT_1127837a0) == '\x01')) {
    lVar4 = (long)_DAT_1127837b4;
    if (((*(byte *)(param_1 + lVar4) & 1) == 0) &&
       ((uVar1 = param_1, func_0x00010becd8c0(), 1 < uVar1 &&
        (lVar2 = param_3, func_0x00010c252440(), lVar2 == 1)))) {
      *(undefined1 *)(param_1 + lVar4) = 1;
      puVar3 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar3);
      func_0x00010bed56c0(param_1,param_2,*(undefined8 *)(param_1 + (long)_DAT_1127837b8),0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091f7860; end: 1091f796f; -[SCDMThumbnailsViewController _updateCollectionViewForReordering:shouldReload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f7860(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  _objc_retain(param_3);
  uVar1 = *(undefined1 *)(param_1 + _DAT_1127837b4);
  lVar3 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7f780();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1091f7970;
  puStack_60 = &UNK_11085db88;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1091f7a9c;
  puStack_90 = &UNK_110857498;
  lStack_88 = param_1;
  uStack_80 = uVar1;
  uStack_58 = param_3;
  lStack_50 = param_1;
  uStack_48 = uVar1;
  uStack_47 = param_4;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fc999999999999a,0,puVar2,param_2,0x10000,&puStack_78,&puStack_a8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1091f7970; end: 1091f7a9b;  */

void FUN_1091f7970(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0df2e0();
  if (0 < lVar2) {
    lVar2 = 0;
    do {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b0d88;
      _objc_opt_class(PTR_PTR_1126b0d88);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      if (*(char *)(param_1 + 0x30) == '\x01') {
        func_0x00010c1eabc0(uVar1);
      }
      func_0x00010c17d4a0(uVar1);
      _objc_release(uVar1);
      _objc_release(puVar3);
      lVar2 = lVar2 + 1;
      lVar7 = *(long *)(param_1 + 0x20);
      func_0x00010c0df2e0();
    } while (lVar2 < lVar7);
  }
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_reloadData_112627cf8)
  ;
  return;
}



/* Entry: 1091f7a9c; end: 1091f7bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f7a9c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7f760();
    _objc_release(uVar1);
    lVar5 = (long)_DAT_1127837e0;
    *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar5) = *(undefined1 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7f6a0();
    _objc_release(uVar1);
    func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127837f0));
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(char *)(lVar3 + lVar5) == '\x01') {
      uVar2 = *(undefined8 *)(lVar3 + _DAT_112783788);
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127837bc);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127837bc) = uVar1;
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010bf75e80(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278378c));
    }
    else {
      uVar1 = *(undefined8 *)(lVar3 + _DAT_1127837bc);
      *(undefined8 *)(lVar3 + _DAT_1127837bc) = 0;
      _objc_release(uVar1);
      func_0x00010bf760a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278378c));
    }
                    /* WARNING: Could not recover jumptable at 0x00010beda810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__updateLayoutForReorderAnimated__1125943a8,1);
    return;
  }
  return;
}



/* Entry: 1091f7be0; end: 1091f7c33; -[SCDMThumbnailsViewController _updateLayoutForReorderAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f7be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + _DAT_1127837e0) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010be41180();
    uVar2 = 1;
    if ((int)lVar1 == 0) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c284650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateCollectionViewHorizontalCo_11267ebb8,uVar2,param_3);
  return;
}



/* Entry: 1091f7c34; end: 1091f7c6b; -[SCDMThumbnailsViewController numberOfSectionsInCollectionView:] */

ulong FUN_1091f7c34(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be3ef00();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becd8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__totalCellsCount_112590fd8);
  return param_1;
}



/* Entry: 1091f7c6c; end: 1091f7c73; -[SCDMThumbnailsViewController collectionView:numberOfItemsInSection:] */

undefined8 FUN_1091f7c6c(void)

{
  return 1;
}



/* Entry: 1091f7c74; end: 1091f82b3; -[SCDMThumbnailsViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1091f7c74(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = (long)_DAT_11278378c;
  lVar2 = *(long *)(param_1 + lVar8);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(param_4);
  lVar3 = lVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar9 = (long)_DAT_1127837c0;
  lVar2 = lVar3;
  if (*(long *)(param_1 + lVar9) != 0) {
    lVar8 = *(long *)(param_1 + lVar8);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0(*(undefined8 *)(param_1 + lVar9));
    lVar2 = lVar8;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar8);
  }
  uVar4 = param_3;
  func_0x00010bf6e0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    dStack_d0 = 0.0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    dStack_d8 = 0.0;
    uStack_e0 = 0;
    func_0x00010c182980(uVar4);
    uStack_118 = 0;
    uStack_120 = 0;
    dStack_108 = 0.0;
    uStack_110 = 0;
    uStack_f8 = 0;
    dStack_100 = 0.0;
  }
  else {
    func_0x00010bf4d840(&uStack_c0,lVar2);
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    dStack_d8 = (double)uStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    dStack_d0 = (double)uStack_a0;
    func_0x00010c182980(uVar4);
    func_0x00010c27c900(&uStack_120,lVar2);
  }
  uStack_e8 = uStack_118;
  uStack_f0 = uStack_120;
  dStack_d8 = dStack_108;
  uStack_e0 = uStack_110;
  uStack_c8 = uStack_f8;
  dStack_d0 = dStack_100;
  dVar10 = dStack_100;
  func_0x00010c21a5e0(uVar4);
  if (*(char *)(param_1 + _DAT_1127837a4) == '\x01') {
    if (lVar2 == 0) {
      uStack_c8 = 0;
      dStack_d0 = 0.0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      dStack_d8 = 0.0;
      uStack_e0 = 0;
    }
    else {
      func_0x00010c27c900(&uStack_f0,lVar2);
    }
    dStack_138 = dStack_d0;
    dStack_140 = dStack_d8;
    uStack_130 = uStack_c8;
    dVar10 = dStack_d8;
    func_0x00010c19d960(uVar4);
  }
  func_0x00010bea29c0(param_1);
  lVar3 = lVar2;
  func_0x00010c129840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    uStack_e8 = 0x100000258;
    uStack_f0 = 300;
    uStack_e0 = 0;
    func_0x00010c1c83e0(uVar4);
  }
  else {
    lVar3 = lVar2;
    func_0x00010c129840(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce540();
    _CMTimeMakeWithSeconds(&uStack_158,dVar10 / 1000.0,600);
    uStack_e8 = uStack_150;
    uStack_f0 = uStack_158;
    uStack_e0 = uStack_148;
    func_0x00010c1c83e0(uVar4);
    _objc_release(lVar3);
  }
  func_0x00010c28b700(uVar4);
  if (*(long *)(param_1 + lVar9) != 0) {
    func_0x00010c192e20(uVar4);
    func_0x00010c173380(uVar4);
    func_0x00010c17e480(uVar4);
    func_0x00010c194ce0(uVar4);
    func_0x00010c2145e0(0x4041000000000000,0x404e000000000000,uVar4);
    lVar3 = lVar2;
    func_0x00010c26db80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214080(uVar4);
    _objc_release(lVar3);
    func_0x00010c18b5e0(uVar4);
    func_0x00010c218dc0(uVar4);
    goto LAB_1091f8140;
  }
  func_0x00010c192e20(uVar4);
  func_0x00010c173380(uVar4);
  func_0x00010c194ce0(uVar4);
  lVar3 = lVar2;
  func_0x00010bf8c600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR_PTR_1126ae558;
  puVar5 = PTR_DAT_1126a4e40;
  lVar8 = lVar2;
  if (lVar3 == 0) {
    _objc_retain(lVar2);
    lVar9 = lVar2;
    func_0x000107c318f8(lVar2,puVar5);
    lVar3 = lVar2;
    if ((int)lVar9 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(lVar2);
    lVar9 = lVar3;
    func_0x00010bfb6cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = PTR_PTR_1126ae558;
    if (lVar9 != 0) {
      func_0x00010bfb6cc0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010bfe9ca0();
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = puVar6;
      goto LAB_1091f80b8;
    }
    func_0x00010bfb13c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_90 = lVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214080(uVar4);
  }
  else {
    func_0x00010bf8c600(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = puVar6;
LAB_1091f80b8:
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214080(uVar4);
    _objc_release(puVar5);
  }
  _objc_release(puVar6);
  _objc_release(lVar8);
  func_0x00010c17e480(uVar4);
  func_0x00010c218dc0(uVar4);
  if (*(char *)(param_1 + _DAT_1127837b4) == '\x01') {
    func_0x00010c1eabc0(uVar4);
  }
  func_0x00010c17d4a0(uVar4);
LAB_1091f8140:
  func_0x00010c1fadc0(uVar4);
  func_0x00010c2140a0(uVar4);
  func_0x00010c1b5280(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c280560();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(uVar4);
  _objc_release(puVar5);
  lVar3 = param_1;
  func_0x00010be41180();
  if ((int)lVar3 == 0) {
    func_0x00010bfe25e0(uVar4);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + _DAT_1127837dc);
    uStack_e8 = puVar1[1];
    uStack_f0 = *puVar1;
    uStack_e0 = puVar1[2];
    func_0x00010c288960(uVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return uVar4;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + (long)_DAT_1127837c0) == 0) {
    uVar7 = *(byte *)(param_3 + (long)_DAT_1127837b4) ^ 1;
  }
  else {
    uVar7 = 0;
  }
  return (ulong)(uVar7 & 1);
}



/* Entry: 1091f82b4; end: 1091f82e3; -[SCDMThumbnailsViewController collectionView:shouldSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1091f82b4(long param_1)

{
  byte bVar1;
  
  if (*(long *)(param_1 + _DAT_1127837c0) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_1127837b4) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 1091f82e4; end: 1091f836b; -[SCDMThumbnailsViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f82e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + _DAT_112783798) & 1) == 0) {
    if (*(long *)(param_1 + _DAT_1127837c0) == 0) {
      uVar1 = param_4;
      func_0x00010c1554e0(param_4);
      func_0x00010be9db40(param_1,param_2,uVar1);
    }
    else {
      func_0x00010bdfb120(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091f836c; end: 1091f847f; -[SCDMThumbnailsViewController collectionView:canMoveItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1091f836c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + _DAT_1127837a0) == '\x01') {
    lVar7 = (long)_DAT_11278378c;
    uVar2 = *(ulong *)(param_1 + lVar7);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    uVar4 = param_4;
    func_0x00010c1554e0();
    if (uVar4 < uVar3) {
      lVar5 = *(long *)(param_1 + lVar7);
      func_0x00010c1585e0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c1554e0(param_4);
      lVar7 = lVar5;
      func_0x00010c0dfd40(lVar5,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010c129840();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar6 == 0;
      _objc_release();
      _objc_release(lVar7);
      _objc_release(lVar5);
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1091f8480; end: 1091f84fb; -[SCDMThumbnailsViewController collectionView:targetIndexPathForMoveOfItemFromOriginalIndexPath:atCurrentIndexPath:toProposedIndexPath:] */

void FUN_1091f8480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *in_x5;
  
  _objc_retain(in_x5);
  puVar1 = in_x5;
  func_0x00010c142240();
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  if ((long)puVar1 < 1) {
    _objc_retain(in_x5);
    puVar2 = in_x5;
  }
  else {
    puVar1 = in_x5;
    func_0x00010c1554e0(in_x5);
    func_0x00010bfed060(puVar2,param_2,0,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091f84fc; end: 1091f853b; -[SCDMThumbnailsViewController collectionView:layout:sizeForItemAtIndexPath:] */

void FUN_1091f84fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be3ef00();
  if ((int)uVar1 != 0) {
    func_0x00010be9e080(param_1);
  }
  return;
}



/* Entry: 1091f853c; end: 1091f8593; -[SCDMThumbnailsViewController collectionView:layout:insetForSectionAtIndex:] */

undefined8 FUN_1091f853c(undefined8 param_1,uint param_2)

{
  long in_x4;
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((in_x4 == 0) && (func_0x00010be3ef00(param_1,0x4018000000000000), (param_2 & 1) == 0)) {
    uVar1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  return uVar1;
}



/* Entry: 1091f8594; end: 1091f85fb; -[SCDMThumbnailsViewController collectionView:dragSessionWillBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f8594(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_1127837c4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f6160();
  _objc_release(lVar1);
  if ((*(byte *)(param_1 + _DAT_1127837b4) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enterReorder_1125603b8);
  return;
}



/* Entry: 1091f85fc; end: 1091f87ab; -[SCDMThumbnailsViewController collectionView:itemsForBeginningDragSession:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f85fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long in_x4;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x4);
  lVar9 = param_1;
  func_0x00010becd8c0();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((lVar9 != 0) && (*(long *)(param_1 + _DAT_1127837c0) == 0)) {
    uVar2 = *(ulong *)(param_1 + _DAT_1127837b8);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0d88;
    _objc_opt_class(PTR_PTR_1126b0d88);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010c17d4a0(uVar1);
    lVar9 = param_1;
    func_0x00010bdf6f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (in_x4 == lVar9) {
      func_0x00010bfe25e0(uVar1);
    }
    lVar9 = (long)_DAT_1127837fc;
    _objc_retain(in_x4);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    *(long *)(param_1 + lVar9) = in_x4;
    _objc_release(uVar5);
    puVar6 = PTR__OBJC_CLASS___NSItemProvider_1126b3ab0;
    _objc_alloc(PTR__OBJC_CLASS___NSItemProvider_1126b3ab0);
    func_0x00010c030760();
    puVar7 = PTR__OBJC_CLASS___UIDragItem_1126c1e58;
    _objc_alloc();
    func_0x00010c020340();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar1);
  }
  _objc_release(in_x4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___UIDragPreviewParameters_1126c1e60;
    _objc_alloc_init(PTR__OBJC_CLASS___UIDragPreviewParameters_1126c1e60);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091f87ac; end: 1091f8807; -[SCDMThumbnailsViewController collectionView:dragPreviewParametersForItemAtIndexPath:] */

void FUN_1091f87ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDragPreviewParameters_1126c1e60;
  _objc_alloc_init(PTR__OBJC_CLASS___UIDragPreviewParameters_1126c1e60);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091f8808; end: 1091f883f; -[SCDMThumbnailsViewController collectionView:canHandleDropSession:] */

bool FUN_1091f8808(void)

{
  long in_x3;
  
  func_0x00010c09d880(in_x3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return in_x3 != 0;
}



/* Entry: 1091f8840; end: 1091f8ac3; -[SCDMThumbnailsViewController collectionView:performDropWithCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f8840(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c247840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf6ec80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (((puVar2 != (undefined *)0x0) &&
      (puVar5 = puVar4, func_0x00010bf433a0(), puVar5 != (undefined *)0x0)) &&
     (lVar10 = param_1, func_0x00010bdd9a60(), (int)lVar10 != 0)) {
    puVar5 = puVar2;
    func_0x00010c142240();
    if (0 < (long)puVar5) {
      func_0x00010c1554e0(puVar2);
      func_0x00010becd8c0(param_1);
      func_0x00010c1554e0(puVar2);
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    uVar6 = *(undefined8 *)(param_1 + _DAT_112783788);
    func_0x00010c240000(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0(puVar4);
    func_0x00010c1554e0(puVar3);
    func_0x00010c0d1620(uVar6);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11278378c);
    func_0x00010c1554e0(puVar4);
    func_0x00010c1554e0(puVar3);
    func_0x00010c0d1760(uVar6);
    puVar2 = param_4;
    func_0x00010c084fc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf89640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8aa40(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar2);
    lVar10 = (long)_DAT_112783800;
    _objc_retain(puVar3);
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar3;
    _objc_release(uVar6);
    uVar8 = *(ulong *)(param_1 + _DAT_1127837b8);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0d88;
    _objc_opt_class(PTR_PTR_1126b0d88);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar2);
    uVar1 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar8);
    func_0x00010c17d4a0(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091f8ac4; end: 1091f8b1f; -[SCDMThumbnailsViewController collectionView:dropPreviewParametersForItemAtIndexPath:] */

void FUN_1091f8ac4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDragPreviewParameters_1126c1e60;
  _objc_alloc_init(PTR__OBJC_CLASS___UIDragPreviewParameters_1126c1e60);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091f8b20; end: 1091f8bf3; -[SCDMThumbnailsViewController collectionView:dropSessionDidUpdate:withDestinationIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f8b20(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bdd9a60(param_1,param_2,param_5);
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68;
    _objc_alloc(PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68);
  }
  else {
    func_0x00010bdd9e00(param_1,param_2,*(undefined8 *)(param_1 + (long)_DAT_1127837fc),param_5);
    if ((param_1 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68;
      _objc_alloc(PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68);
    }
    else {
      uVar2 = param_3;
      func_0x00010bfd3b00();
      puVar3 = PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68;
      _objc_alloc(PTR__OBJC_CLASS___UICollectionViewDropProposal_1126c1e68);
      if ((int)uVar2 != 0) {
        func_0x00010c00e7c0();
        goto LAB_1091f8bcc;
      }
    }
  }
  func_0x00010c00e7a0();
LAB_1091f8bcc:
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091f8bf4; end: 1091f8c67; -[SCDMThumbnailsViewController collectionView:dropSessionDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f8bf4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_1127837c4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13dae0();
  _objc_release(lVar1);
  func_0x00010beb8580(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127837fc));
  param_1 = param_1 + _DAT_112783804;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7f720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f8c68; end: 1091f8c6b; -[SCDMThumbnailsViewController componentView] */

void FUN_1091f8c68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_view_1126849e8);
  return;
}



/* Entry: 1091f8c6c; end: 1091f8d6b; -[SCDMThumbnailsViewController timelineConfiguration:didAddSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f8c6c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be3ef00();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c1581e0();
    func_0x00010bee1ce0(param_1);
    if (lVar2 + -1 == 0) {
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128b60();
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_1091f8d6c;
      puStack_48 = &UNK_110848c48;
      uStack_40 = param_1;
      lStack_38 = lVar2 + -1;
      func_0x00010bed5700(param_1,param_2,&puStack_60,0);
      param_1 = param_1 + (long)_DAT_112783804;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf7f5e0();
    }
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091f8d6c; end: 1091f8e6f;  */

void FUN_1091f8d6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf40120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8420();
  _objc_release(uVar1);
  return;
}



/* Entry: 1091f8e70; end: 1091f8f3f;  */

void FUN_1091f8e70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010be3ef00();
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    lVar4 = lVar5;
    func_0x00010bf40120(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df300(lVar5,param_2,lVar4);
    _objc_release(lVar4);
    if (lVar1 < lVar5) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010be3ec40(uVar6,param_2,puVar2);
      if ((int)uVar6 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf40120(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1525a0();
        _objc_release(uVar6);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1091f8f40; end: 1091f8fcf; -[SCDMThumbnailsViewController timelineConfiguration:didAddSegments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f8f40(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be3ef00();
  if ((uVar1 & 1) == 0) {
    func_0x00010bee1ce0(param_1);
    uVar1 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(uVar1);
    lVar2 = param_1 + (long)_DAT_112783804;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf7f600();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091f8fd0; end: 1091f9207; -[SCDMThumbnailsViewController timelineConfiguration:didDeleteSegment:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f8fd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c1581e0();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112783808);
    *(undefined8 *)(param_1 + _DAT_112783808) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127837c0);
    *(undefined8 *)(param_1 + _DAT_1127837c0) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11278380c);
    *(undefined8 *)(param_1 + _DAT_11278380c) = 0;
    _objc_release(uVar3);
    uVar6 = *(ulong *)(param_1 + _DAT_1127837b8);
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b0d88;
    _objc_opt_class(PTR_PTR_1126b0d88);
    uVar5 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar4);
    uVar1 = uVar6;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    func_0x00010c17e480(uVar1);
    func_0x00010c173380(uVar1);
    func_0x00010c192e20(uVar1);
    func_0x00010c194ce0(uVar1);
    _objc_release(uVar1);
    func_0x00010bee1ce0(param_1);
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x00010be41180();
    if (((int)lVar2 == 0) || ((*(byte *)(param_1 + _DAT_1127837b4) & 1) != 0)) {
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = param_5;
      func_0x00010bed5700(param_1);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
    else {
      *(undefined1 *)(param_1 + _DAT_112783810) = 1;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091f9208; end: 1091f92f3;  */

void FUN_1091f9208(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0df2e0();
    _objc_release(lVar2);
    if (*(long *)(param_1 + 0x28) < lVar3) {
      lVar2 = lVar1;
      func_0x00010bf40120(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8420();
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1091f92f4; end: 1091f93bb;  */

void FUN_1091f92f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf40120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,*(undefined8 *)(param_1 + 0x28)
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c740(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091f93bc; end: 1091f94ab; -[SCDMThumbnailsViewController timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:] */

void FUN_1091f93bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_opt_new();
  lVar3 = param_5;
  if (param_6 <= param_5) {
    lVar3 = param_6;
  }
  if (param_5 <= param_6) {
    param_5 = param_6;
  }
  do {
    func_0x00010bef92c0(puVar1,param_2,lVar3);
    lVar3 = lVar3 + 1;
  } while (param_5 + 1 != lVar3);
  uVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7f780();
  _objc_release(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1091f94ac;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_1;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bed5700(param_1,param_2,&puStack_70,0);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 1091f94ac; end: 1091f9567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f94ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_50 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(lStack_50 + _DAT_1127837b8);
  pcStack_60 = FUN_1091f9568;
  puStack_58 = &UNK_110841f80;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  _objc_retain(uVar1);
  puStack_98 = puVar2;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1091f95a4;
  puStack_80 = &UNK_110841f20;
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010c0f8420(uVar3,param_2,&puStack_70,&puStack_98);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1091f9568; end: 1091f95a3;  */

void FUN_1091f9568(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf40120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091f95a4; end: 1091f95d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f95a4(long param_1,int param_2)

{
  long lVar1;
  
  if ((param_2 != 0) &&
     (lVar1 = *(long *)(param_1 + 0x20), *(char *)(lVar1 + _DAT_1127837e0) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010beb8590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar1,PTR_s__showClipsReorderingDeleteButton_11258bb08,
               *(undefined8 *)(lVar1 + _DAT_112783800));
    return;
  }
  return;
}



/* Entry: 1091f95d4; end: 1091f95d7; -[SCDMThumbnailsViewController timelineConfigurationDidEnterReorderMode:] */

void FUN_1091f95d4(void)

{
  return;
}



/* Entry: 1091f95d8; end: 1091f95db; -[SCDMThumbnailsViewController timelineConfigurationDidExitReorderMode:] */

void FUN_1091f95d8(void)

{
  return;
}



/* Entry: 1091f95dc; end: 1091f95fb; -[SCDMThumbnailsViewController timelineConfigurationDidRestoreToInitialState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f95dc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127837b4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed56d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateCollectionViewForReorderi_112592f58,
             *(undefined8 *)(param_1 + _DAT_1127837b8),1);
  return;
}



/* Entry: 1091f95fc; end: 1091f95ff; -[SCDMThumbnailsViewController timelineConfigurationWillDeleteAllSegments:] */

void FUN_1091f95fc(void)

{
  return;
}



/* Entry: 1091f9600; end: 1091f962f; -[SCDMThumbnailsViewController timelineConfigurationDidDeleteAllSegments:] */

void FUN_1091f9600(undefined8 param_1)

{
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f9630; end: 1091f9633; -[SCDMThumbnailsViewController timelineConfigurationDidUpdateThumbnails:] */

void FUN_1091f9630(void)

{
  return;
}



/* Entry: 1091f9634; end: 1091f9637; -[SCDMThumbnailsViewController timelineConfiguration:didUpdateSegmentTrim:atIndex:] */

void FUN_1091f9634(void)

{
  return;
}



/* Entry: 1091f9638; end: 1091f980f; -[SCDMThumbnailsViewController timelineConfiguration:didUpdateThumbnailsForSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f9638(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be3ef00();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11278378c);
    func_0x00010c1585e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_1127837b8;
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf4b900();
    _objc_release(uVar4);
    if ((int)uVar2 != 0) {
      uVar5 = *(ulong *)(param_1 + lVar10);
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b0d88;
      _objc_opt_class(PTR_PTR_1126b0d88);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar1 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126ae558;
      lVar10 = param_4;
      func_0x00010bf8c600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214080(uVar1);
      _objc_release(uVar1);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(lVar10);
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_4 + _DAT_1127837b8);
  func_0x00010bfecfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_4 + _DAT_112783788);
  func_0x00010c240000(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126affe8;
  func_0x00010c1554e0(uVar2);
  func_0x00010c09e180(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c760(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar4);
  lVar9 = (long)_DAT_11278378c;
  uVar4 = *(undefined8 *)(param_4 + lVar9);
  func_0x00010c1554e0(uVar2);
  func_0x00010bf6c780(uVar4);
  lVar9 = *(long *)(param_4 + lVar9);
  func_0x00010c1581e0();
  param_4 = param_4 + _DAT_1127837c4;
  _objc_loadWeakRetained(param_4);
  if (lVar9 == 0) {
    func_0x00010c0f6160(param_4);
  }
  else {
    func_0x00010c1554e0(uVar2);
    func_0x00010c270240(param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091f9810; end: 1091f9927; -[SCDMThumbnailsViewController snapSegmentExpandedCellReorderDeletePressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f9810(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127837b8);
  func_0x00010bfecfa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112783788);
  func_0x00010c240000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126affe8;
  uVar3 = uVar1;
  func_0x00010c1554e0(uVar1);
  func_0x00010c09e180(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c760(uVar2,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
  lVar5 = (long)_DAT_11278378c;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  uVar3 = uVar1;
  func_0x00010c1554e0(uVar1);
  func_0x00010bf6c780(uVar2,param_2,uVar3);
  lVar5 = *(long *)(param_1 + lVar5);
  func_0x00010c1581e0();
  param_1 = param_1 + _DAT_1127837c4;
  _objc_loadWeakRetained(param_1);
  if (lVar5 == 0) {
    func_0x00010c0f6160(param_1);
  }
  else {
    uVar3 = uVar1;
    func_0x00010c1554e0(uVar1);
    func_0x00010c270240(param_1,param_2,uVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091f9928; end: 1091f992b; -[SCDMThumbnailsViewController snapSegmentExpandedCellShouldHandleTouch:] */

void FUN_1091f9928(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3ef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isClipLevelEditing_11256d560);
  return;
}



/* Entry: 1091f992c; end: 1091f9997; -[SCDMThumbnailsViewController snapSegmentExpandedCell:didChangeStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f992c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = param_1;
  func_0x00010be3ef00();
  if ((int)lVar1 != 0) {
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = param_4[2];
    func_0x00010c28b620(*(undefined8 *)(param_1 + _DAT_112783808),param_2,&uStack_50);
    *(undefined1 *)(param_1 + _DAT_112783814) = 1;
  }
  return;
}



/* Entry: 1091f9998; end: 1091f99eb; -[SCDMThumbnailsViewController snapSegmentExpandedCell:didChangeEndTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f9998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = param_1;
  func_0x00010be3ef00();
  if ((int)lVar1 != 0) {
    uStack_38 = param_4[1];
    uStack_40 = *param_4;
    uStack_30 = param_4[2];
    func_0x00010c28b600(*(undefined8 *)(param_1 + _DAT_112783808),param_2,&uStack_40);
  }
  return;
}



/* Entry: 1091f99ec; end: 1091f9b43; -[SCDMThumbnailsViewController snapSegmentExpandedCell:didTrimSegmentToRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f99ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
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
  
  lVar4 = param_1;
  func_0x00010be3ef00();
  if ((int)lVar4 != 0) {
    uStack_68 = param_4[1];
    uStack_70 = *param_4;
    uStack_58 = param_4[3];
    uStack_60 = param_4[2];
    uStack_48 = param_4[5];
    uStack_50 = param_4[4];
    lVar4 = (long)_DAT_112783808;
    func_0x00010c21a5e0(*(undefined8 *)(param_1 + lVar4),param_2,&uStack_70);
    if (*(long *)(param_1 + lVar4) == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010c09e0e0(&uStack_70);
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_112783788);
    func_0x00010c240000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126affe8;
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127837c0);
    func_0x00010c1554e0(uVar2);
    func_0x00010c09e180(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc0000000;
    pcStack_b0 = FUN_1091f9b44;
    puStack_a8 = &UNK_1108e9820;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c28b3e0(uVar1,param_2,puVar3,&puStack_c0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar1);
    param_1 = param_1 + _DAT_112783804;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7f680();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1091f9b44; end: 1091f9c47;  */

void FUN_1091f9b44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_PTR_1126afff0;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c21a4e0(param_2);
  _objc_release(puVar1);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  _CMTimeGetSeconds(&uStack_60);
  uVar2 = param_2;
  func_0x00010c27c540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209a20();
  _objc_release(uVar2);
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  _CMTimeGetSeconds(&uStack_60);
  uVar2 = param_2;
  func_0x00010c27c540(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c192d40(uVar2);
  _objc_release(uVar2);
  return;
}



/* Entry: 1091f9c48; end: 1091f9cf3; -[SCDMThumbnailsViewController snapSegmentExpandedCell:didSeekToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f9c48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = param_1;
  func_0x00010be3ef00();
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + _DAT_1127837c4;
    _objc_loadWeakRetained(lVar1);
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = param_4[2];
    _CMTimeGetSeconds(&uStack_50);
    func_0x00010c256600(lVar1);
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_112783804;
    _objc_loadWeakRetained(param_1);
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = param_4[2];
    func_0x00010bf7f640();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1091f9cf4; end: 1091f9d6f; -[SCDMThumbnailsViewController snapSegmentExpandedCellFinishedSeeking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f9cf4(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x00010be3ef00();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c07a380();
    if ((uVar1 & 1) == 0) {
      lVar2 = param_1 + (long)_DAT_1127837c4;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c13dae0();
      _objc_release(lVar2);
    }
    lVar2 = param_1 + (long)_DAT_112783804;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf7f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}


