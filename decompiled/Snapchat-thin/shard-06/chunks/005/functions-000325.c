/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104950558; end: 104950573; -[FBSDKButton defaultIcon] */

void FUN_104950558(void)

{
  func_0x00010c0d8420(PTR_PTR_1126ade38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104950574; end: 104950577; -[FBSDKButton defaultSelectedColor] */

void FUN_104950574(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf68db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_defaultBackgroundColor_1125b7d10);
  return;
}



/* Entry: 104950578; end: 10495059f; -[FBSDKButton highlightedContentColor] */

void FUN_104950578(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3feb5b5b5b5b5b5b,0x3febbbbbbbbbbbbc,0x3fec5c5c5c5c5c5c,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 1049505a0; end: 1049505a7; -[FBSDKButton isImplicitlyDisabled] */

undefined8 FUN_1049505a0(void)

{
  return 0;
}



/* Entry: 1049505a8; end: 1049506f3; -[FBSDKButton sizeThatFits:title:] */

undefined1  [16]
FUN_1049505a8(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  dVar4 = param_1;
  dVar8 = param_2;
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be35000(param_5,param_6,uVar2);
  dVar5 = dVar4;
  func_0x00010bf4c400(param_5);
  param_1 = param_1 - (dVar8 + param_4);
  uVar1 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c099180();
  func_0x00010c26c840(param_1,param_2 - (dVar5 + param_3),param_5,param_6,param_7,uVar2,uVar3);
  _objc_release(param_7);
  _objc_release(uVar1);
  dVar6 = dVar4;
  func_0x00010be6efa0(dVar4,param_5);
  dVar7 = dVar4;
  func_0x00010becb6c0(dVar4,param_5);
  _objc_release(uVar2);
  auVar9._8_8_ = param_3 + dVar4 + dVar5;
  auVar9._0_8_ = param_4 + dVar8 + ((param_1 + dVar4 + dVar6) - dVar7);
  return auVar9;
}



/* Entry: 1049506f4; end: 104950877; -[FBSDKButton textSizeForText:font:constrainedSize:lineBreakMode:] */

undefined1  [16]
FUN_1049506f4(ulong param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_7 == 0) {
    dVar5 = *(double *)PTR__CGSizeZero_110347620;
    dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    _objc_retain();
    _objc_retain(param_7);
    func_0x00010c0d8420();
    func_0x00010c1bdb00();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    _objc_release(param_8);
    func_0x00010c04e840(puVar3);
    _objc_release(param_7);
    func_0x00010bf20bc0(param_1,param_2,puVar3);
    dVar5 = (double)(float)(int)param_3;
    param_1 = (ulong)(uint)(int)param_4;
    dVar6 = (double)(float)(int)param_4;
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    auVar7._8_8_ = dVar6;
    auVar7._0_8_ = dVar5;
    return auVar7;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf38010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 104950878; end: 10495087b; -[FBSDKButton _applicationDidBecomeActiveNotification:] */

void FUN_104950878(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf38010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_checkImplicitlyDisabled_1125ab9a8);
  return;
}



/* Entry: 10495087c; end: 104950a43; -[FBSDKButton _backgroundImageWithColor:cornerRadius:scale:] */

void FUN_10495087c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = param_1 * 2.0 + 1.0;
  _objc_retain(param_5);
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(dVar4,dVar4,param_2,0);
  _UIGraphicsGetCurrentContext();
  uVar2 = param_5;
  _objc_retainAutorelease(param_5);
  func_0x00010bdc0fe0();
  _objc_release(param_5);
  uVar3 = uVar1;
  _CGContextSetFillColorWithColor(uVar1,uVar2);
  _CGPathCreateMutable();
  dVar5 = param_1 + 1.0;
  _CGPathMoveToPoint(dVar5,0);
  _CGPathAddArcToPoint(dVar4,0,dVar4,param_1,param_1,uVar3,0);
  _CGPathAddLineToPoint(dVar4,dVar5,uVar3,0);
  _CGPathAddArcToPoint(dVar4,dVar4,dVar5,dVar4,param_1,uVar3,0);
  _CGPathAddLineToPoint(param_1,dVar4,uVar3,0);
  _CGPathAddArcToPoint(0,dVar4,0,dVar5,param_1,uVar3,0);
  _CGPathAddLineToPoint(0,param_1,uVar3,0);
  _CGPathAddArcToPoint(0,0,param_1,0,param_1,uVar3,0);
  _CGPathCloseSubpath(uVar3);
  _CGContextAddPath(uVar1,uVar3);
  _CGPathRelease(uVar3);
  _CGContextFillPath(uVar1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  uVar2 = uVar1;
  func_0x00010c25cbc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104950a44; end: 10495103f; -[FBSDKButton _configureWithIcon:title:backgroundColor:highlightedColor:selectedTitle:selectedIcon:selectedColor:selectedHighlightedColor:] */

void FUN_104950a44(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,long param_9,
                  long param_10,long param_11)

{
  int iVar1;
  undefined *puVar2;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar3;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_5);
  func_0x00010bf38000(param_2);
  if (param_4 == 0) {
    param_4 = param_2;
    func_0x00010bf698a0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_9 == 0) {
    param_9 = param_2;
    func_0x00010bf698a0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_6 == 0) {
    param_6 = param_2;
    func_0x00010bf68da0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_7 == 0) {
    param_7 = param_2;
    func_0x00010bf69820();
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_10 == 0) {
    param_10 = param_2;
    func_0x00010bf6a2c0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_11 == 0) {
    param_11 = param_7;
    _objc_retain();
  }
  func_0x00010c165e60(param_2,param_3,0);
  func_0x00010c165e80(param_2,param_3,0);
  func_0x00010c181ee0(param_2,param_3,3);
  func_0x00010c182ae0(param_2,param_3,3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(param_2,param_3,puVar2);
  _objc_release(puVar2);
  lVar3 = param_2;
  func_0x00010bf20c00();
  iVar1 = (int)lVar3;
  _CGRectIsEmpty();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar2);
  lVar3 = param_2;
  func_0x00010bdd2380(0x4008000000000000,param_1,param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e720(param_2,param_3,lVar3,0);
  lVar4 = param_2;
  func_0x00010bdd2380(0x4008000000000000,param_1,param_2,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010c16e720(param_2,param_3,lVar4,1);
  lVar3 = param_2;
  func_0x00010bf69360(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0x4008000000000000;
  lVar5 = param_2;
  func_0x00010bdd2380(0x4008000000000000,param_1,param_2,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c16e720(param_2,param_3,lVar5,2);
  lVar3 = lVar5;
  if (param_10 != 0) {
    uVar10 = 0x4008000000000000;
    lVar3 = param_2;
    func_0x00010bdd2380(0x4008000000000000,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010c16e720(param_2,param_3,lVar3,4);
  }
  lVar4 = lVar3;
  if (param_11 != 0) {
    uVar10 = 0x4008000000000000;
    lVar4 = param_2;
    func_0x00010bdd2380(0x4008000000000000,param_1,param_2,param_3,param_11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c16e720(param_2,param_3,lVar4,5);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(param_2,param_3,puVar2,0);
  _objc_release(puVar2);
  lVar3 = param_2;
  func_0x00010bfe3400(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(param_2,param_3,lVar3,5);
  _objc_release(lVar3);
  func_0x00010c216260(param_2,param_3,param_5,0);
  _objc_release(param_5);
  if (param_8 != 0) {
    func_0x00010c216260(param_2,param_3,param_8,4);
    func_0x00010c216260(param_2,param_3,param_8,5);
  }
  lVar3 = param_2;
  func_0x00010c271420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  lVar5 = param_2;
  func_0x00010bf69660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(lVar3,param_3,lVar5);
  func_0x00010c102de0(lVar5);
  uVar11 = uVar10;
  func_0x00010c102de0(lVar5);
  lVar6 = param_4;
  func_0x00010bfe9760(uVar10,uVar11,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar13 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar14 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  lVar7 = lVar6;
  func_0x00010c13a160(uVar12,uVar13,uVar14,uVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010c1a9fc0(param_2,param_3,lVar7,0);
  if (param_9 != 0) {
    lVar6 = param_9;
    func_0x00010bfe9760(uVar10,uVar11,param_9);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c13a160(uVar12,uVar13,uVar14,uVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    func_0x00010c1a9fc0(param_2,param_3,lVar8,4);
    func_0x00010c1a9fc0(param_2,param_3,lVar8,5);
    _objc_release(lVar8);
  }
  if (iVar1 != 0) {
    func_0x00010c23d620(param_2);
  }
  puVar9 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s__applicationDidBecomeActiveNotif_112535a50;
  lVar6 = param_2;
  func_0x00010bf39c40(param_2);
  func_0x00010bf07680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar9,param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110da2478
                      ,lVar6);
  _objc_release(lVar6);
  _objc_release(puVar9);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104951040; end: 10495105b; -[FBSDKButton _fontSizeForHeight:] */

double FUN_104951040(double param_1)

{
  return (double)(float)(int)(param_1 * 0.47);
}



/* Entry: 10495105c; end: 1049510bb; -[FBSDKButton _heightForContentRect:] */

double FUN_10495105c(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  dVar2 = param_3;
  func_0x00010bf4c400();
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  return dVar2 + dVar1 + param_1;
}



/* Entry: 1049510bc; end: 1049510eb; -[FBSDKButton _heightForFont:] */

double FUN_1049510bc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c102de0(param_4);
  return (double)(float)(int)(param_1 / 0.45999999999999996);
}



/* Entry: 1049510ec; end: 104951107; -[FBSDKButton _marginForHeight:] */

double FUN_1049510ec(double param_1)

{
  return (double)(float)(int)(param_1 * 0.27);
}



/* Entry: 104951108; end: 10495113f; -[FBSDKButton _paddingForHeight:] */

double FUN_104951108(double param_1)

{
  double dVar1;
  
  dVar1 = param_1 * 0.23;
  func_0x00010becb6c0();
  return (double)(float)(int)dVar1 - param_1;
}



/* Entry: 104951140; end: 10495115b; -[FBSDKButton _textPaddingCorrectionForHeight:] */

double FUN_104951140(double param_1)

{
  return (double)(float)(int)(param_1 * 0.08);
}



/* Entry: 10495115c; end: 10495116b; -[FBSDKButton skipIntrinsicContentSizing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10495115c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11270eca0);
}



/* Entry: 10495116c; end: 10495117b; -[FBSDKButton setSkipIntrinsicContentSizing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10495116c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11270eca0) = param_3;
  return;
}



/* Entry: 10495117c; end: 10495118b; -[FBSDKButton isExplicitlyDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10495117c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11270eca4);
}



/* Entry: 10495118c; end: 10495119b; -[FBSDKButton setIsExplicitlyDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10495118c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11270eca4) = param_3;
  return;
}



/* Entry: 10495119c; end: 1049512c3; +[FBSDKCodelessIndexer configureWithGraphRequestFactory:serverConfigurationProvider:dataStore:graphRequestConnectionFactory:swizzler:settings:advertiserIDProvider:] */

void FUN_10495119c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126ade40;
  func_0x00010bf39c40();
  if (puVar1 == param_1) {
    func_0x00010c1a42e0(param_1,param_2,param_3);
    func_0x00010c1fd2a0(param_1,param_2,param_4);
    func_0x00010c1898c0(param_1,param_2,param_5);
    func_0x00010c1a42c0(param_1,param_2,param_6);
    func_0x00010c210b00(param_1,param_2,param_7);
    func_0x00010c1fe440(param_1,param_2,param_8);
    func_0x00010c166340(param_1,param_2,param_9);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049512c4; end: 1049512cf; +[FBSDKCodelessIndexer graphRequestFactory] */

void FUN_1049512c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cfe8);
  return;
}



/* Entry: 1049512d0; end: 1049512df; +[FBSDKCodelessIndexer setGraphRequestFactory:] */

void FUN_1049512d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cfe8,param_3);
  return;
}



/* Entry: 1049512e0; end: 1049512eb; +[FBSDKCodelessIndexer serverConfigurationProvider] */

void FUN_1049512e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cff0);
  return;
}



/* Entry: 1049512ec; end: 1049512fb; +[FBSDKCodelessIndexer setServerConfigurationProvider:] */

void FUN_1049512ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cff0,param_3);
  return;
}



/* Entry: 1049512fc; end: 104951307; +[FBSDKCodelessIndexer dataStore] */

void FUN_1049512fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cff8);
  return;
}



/* Entry: 104951308; end: 104951317; +[FBSDKCodelessIndexer setDataStore:] */

void FUN_104951308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cff8,param_3);
  return;
}



/* Entry: 104951318; end: 104951323; +[FBSDKCodelessIndexer graphRequestConnectionFactory] */

void FUN_104951318(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d000);
  return;
}



/* Entry: 104951324; end: 104951333; +[FBSDKCodelessIndexer setGraphRequestConnectionFactory:] */

void FUN_104951324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d000,param_3);
  return;
}



/* Entry: 104951334; end: 10495133f; +[FBSDKCodelessIndexer swizzler] */

void FUN_104951334(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d008);
  return;
}



/* Entry: 104951340; end: 10495134b; +[FBSDKCodelessIndexer setSwizzler:] */

void FUN_104951340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uRam000000011369d008 = param_3;
  return;
}



/* Entry: 10495134c; end: 104951357; +[FBSDKCodelessIndexer settings] */

void FUN_10495134c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d010);
  return;
}



/* Entry: 104951358; end: 104951367; +[FBSDKCodelessIndexer setSettings:] */

void FUN_104951358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d010,param_3);
  return;
}



/* Entry: 104951368; end: 104951373; +[FBSDKCodelessIndexer advertiserIDProvider] */

void FUN_104951368(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d018);
  return;
}



/* Entry: 104951374; end: 104951383; +[FBSDKCodelessIndexer setAdvertiserIDProvider:] */

void FUN_104951374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d018,param_3);
  return;
}



/* Entry: 104951384; end: 10495144f; +[FBSDKCodelessIndexer enable] */

void FUN_104951384(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if ((bRam000000011369d020 & 1) == 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc0000000;
    uStack_28 = 0x1049513fc;
    puStack_20 = &UNK_110848088;
    if (lRam000000011369d028 != -1) {
      uStack_18 = param_1;
      func_0x00010002a2fc(0x11369d028,&puStack_38);
    }
  }
  return;
}



/* Entry: 104951450; end: 10495145f;  */

void FUN_104951450(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c228af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setupGesture_112667ce0);
    return;
  }
  return;
}



/* Entry: 104951460; end: 104951557; +[FBSDKCodelessIndexer loadCodelessSettingWithCompletionBlock:] */

void FUN_104951460(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c15f080(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104951558;
    puStack_50 = &UNK_1107b96c8;
    lVar3 = lVar2;
    _objc_retain();
    uVar4 = param_3;
    lStack_48 = lVar3;
    lStack_38 = param_1;
    _objc_retain();
    uStack_40 = uVar4;
    func_0x00010c09c180(lVar1,param_2,&puStack_68);
    _objc_release(lVar1);
    _objc_release(uStack_40);
    _objc_release(lStack_48);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104951558; end: 1049518ab;  */

void FUN_104951558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  
  _objc_retain();
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010c06eb20();
  if ((int)uVar1 == 0) goto LAB_104951864;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf64720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfa16e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar3 = uVar1;
  func_0x00010c075f00();
  if ((int)uVar3 != 0) {
    puVar4 = PTR_PTR_1126addf0;
    func_0x00010bf569a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar5 = puVar4;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puRam000000011369d030;
    if (puVar5 != (undefined *)0x0) {
      puRam000000011369d030 = puVar5;
      _objc_retain();
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
  }
  puVar6 = PTR_PTR_1126add78;
  if (puRam000000011369d030 == (undefined *)0x0) {
LAB_10495175c:
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010c0d8420();
    puVar6 = puRam000000011369d030;
    puRam000000011369d030 = puVar4;
    _objc_release(puVar6);
    lVar8 = *(long *)(param_1 + 0x30);
    func_0x00010c136c00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfcde00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010bf56540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      func_0x00010c215b40(0x4010000000000000,uVar3);
      puVar6 = puVar2;
      _objc_retain();
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain();
      func_0x00010befafc0(uVar3);
      func_0x00010c24d960(uVar3);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(uVar3);
      _objc_release(lVar8);
    }
  }
  else {
    iVar9 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x00010bf71e60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde1b40();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126add78;
    if (iVar9 == 0) goto LAB_10495175c;
    lVar8 = *(long *)(param_1 + 0x28);
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
    puVar4 = puVar6;
    func_0x00010bf71e60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3e0(puVar6);
    (**(code **)(lVar8 + 0x10))(lVar8,puVar6,0);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
  _objc_release(puVar2);
LAB_104951864:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1049518ac; end: 104951a33;  */

void FUN_1049518ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126add78;
  func_0x00010bf71fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126add78;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010c0e00e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3e0(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126add78;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar2);
    _objc_release(puVar4);
    puVar2 = PTR_PTR_1126add78;
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar2);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf64720(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar5);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104951a34; end: 104951b7b; +[FBSDKCodelessIndexer requestToLoadCodelessSetup:] */

ulong FUN_104951a34(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_4;
  _objc_retain();
  uVar4 = param_2;
  func_0x00010befe4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010befe480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110fb00d8;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110da1fd8;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110da2738;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_50 = uVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_58,&ppuStack_68,2
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcde20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    lVar3 = param_4;
    func_0x00010bf565a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return uVar4;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(lVar3);
    func_0x00010bf64de0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(lVar3);
    uVar4 = (ulong)(param_1 < 604800.0);
    _objc_release(puVar2);
  }
  return uVar4;
}



/* Entry: 104951b7c; end: 104951c07; +[FBSDKCodelessIndexer _codelessSetupTimestampIsValid:] */

bool FUN_104951b7c(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (param_4 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_4);
    func_0x00010bf64de0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(param_4);
    bVar1 = param_1 < 604800.0;
    _objc_release(puVar2);
  }
  return bVar1;
}



/* Entry: 104951c08; end: 104951d43; +[FBSDKCodelessIndexer setupGesture] */

void FUN_104951c08(undefined8 param_1)

{
  undefined *puVar1;
  
  uRam000000011369d020 = 1;
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1699c0();
  _objc_release(puVar1);
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x00010c265a00(param_1);
  func_0x00010c265920();
  return;
}



/* Entry: 104951d44; end: 104951f93; +[FBSDKCodelessIndexer checkCodelessIndexingSession] */

void FUN_104951d44(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  if ((bRam000000011369d038 & 1) == 0) {
    puVar2 = PTR_PTR_1126add50;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c070ce0();
    _objc_release(puVar2);
    if ((int)puVar3 != 0) {
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c06bb20();
      _objc_release();
      if ((int)puVar2 == 0) goto LAB_104951f5c;
    }
    bRam000000011369d038 = 1;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110da2778;
    puVar2 = param_1;
    func_0x00010bf60000();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110da1df8;
    puVar3 = param_1;
    puStack_68 = puVar2;
    func_0x00010bf9d9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_78,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = param_1;
    func_0x00010bfcde20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = param_1;
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &PTR____CFConstantStringClassReference_110da2798;
    puVar9 = puVar6;
    func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db2d78);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf56560(puVar3,param_2,puVar2,puVar4,
                        &PTR____CFConstantStringClassReference_110dada18,0,in_x6,in_x7,puVar9,
                        ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc0000000;
    pcStack_90 = FUN_104951f94;
    puStack_88 = &UNK_1107b96f8;
    param_3 = &puStack_a0;
    puStack_80 = param_1;
    func_0x00010c251a80(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release();
  }
LAB_104951f5c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  bRam000000011369d038 = 0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  ppuVar10 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar2);
  if ((int)ppuVar10 != 0) {
    ppuVar10 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da27b8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar10;
    func_0x00010bf1f3c0();
    cRam000000011369d039 = (char)ppuVar8;
    _objc_release(ppuVar10);
    puVar2 = puRam000000011369d050;
    uVar1 = uRam000000011369d040;
    if (cRam000000011369d039 == '\x01') {
      uRam000000011369d040 = 0;
      _objc_release(uVar1);
      if (puRam000000011369d048 != (undefined *)0x0) goto LAB_1049520b0;
      puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x00010c270940(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,
                          *(undefined8 *)(puVar4 + 0x20),PTR_s_startIndexing_112671630,0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puRam000000011369d048;
      puRam000000011369d048 = puVar2;
      _objc_release(puVar4);
      puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc020();
    }
    else {
      puRam000000011369d050 = (undefined *)0x0;
    }
    _objc_release(puVar2);
  }
LAB_1049520b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104951f94; end: 1049520c3;  */

void FUN_104951f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  uRam000000011369d038 = 0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da27b8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    cRam000000011369d039 = (char)uVar3;
    _objc_release(uVar2);
    puVar1 = puRam000000011369d050;
    uVar2 = uRam000000011369d040;
    if (cRam000000011369d039 == '\x01') {
      uRam000000011369d040 = 0;
      _objc_release(uVar2);
      if (puRam000000011369d048 != (undefined *)0x0) goto LAB_1049520b0;
      puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x00010c270940(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,
                          *(undefined8 *)(param_1 + 0x20),PTR_s_startIndexing_112671630,0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puRam000000011369d048;
      puRam000000011369d048 = puVar4;
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc020();
    }
    else {
      puRam000000011369d050 = (undefined *)0x0;
    }
    _objc_release(puVar1);
  }
LAB_1049520b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049520c4; end: 104952127; +[FBSDKCodelessIndexer currentSessionDeviceID] */

void FUN_1049520c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (puRam000000011369d050 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puRam000000011369d050;
    puRam000000011369d050 = puVar3;
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(puRam000000011369d050);
  return;
}



/* Entry: 104952128; end: 1049523bb; +[FBSDKCodelessIndexer extInfo] */

void FUN_104952128(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  char *pcVar11;
  char *pcVar12;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined **ppuStack_580;
  undefined *puStack_578;
  undefined1 auStack_570 [1024];
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_570);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,auStack_170);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befe4c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010befe480();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
  }
  _objc_retain();
  _objc_release(ppuVar2);
  _objc_release(param_1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126ade48;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0703a0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2d38;
  if ((int)puVar5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db1158;
  }
  _objc_retain();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c0dff20(puVar4,param_2,*(undefined8 *)PTR__NSLocaleCountryCode_11034aa58);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  if ((puVar5 != (undefined *)0x0) && (puVar6 != (undefined *)0x0)) {
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db9f38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  ppuVar9 = (undefined **)PTR_PTR_1126add58;
  ppuStack_580 = &PTR____CFConstantStringClassReference_110db1158;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_598 = ppuVar2;
  ppuStack_590 = ppuVar3;
  ppuStack_588 = ppuVar1;
  puStack_578 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_598,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc19c0(ppuVar9,param_2,puVar7,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar10 = ppuVar9;
  }
  _objc_retain(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
    return;
  }
  ___stack_chk_fail();
  if (cRam000000011369d039 == '\x01') {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf07b60();
    _objc_release(puVar4);
    if (puVar5 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126ade50;
      func_0x00010c22bfc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c291300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if ((puVar5 == (undefined *)0x0) ||
         (puVar4 = puVar5,
         func_0x00010bfda7c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110da27d8),
         (int)puVar4 == 0)) {
        func_0x00010c28dfc0(ppuVar2);
      }
      else {
        pcVar11 = "FBUnityUtility";
        _objc_lookUpClass();
        ppuVar3 = &PTR____CFConstantStringClassReference_110da27f8;
        _NSSelectorFromString();
        if (((pcVar11 != (char *)0x0) && (ppuVar3 != (undefined **)0x0)) &&
           (pcVar12 = pcVar11, func_0x00010c13b700(pcVar11,param_2,ppuVar3), (int)pcVar12 != 0)) {
          func_0x00010c0f8ec0(pcVar11,param_2,ppuVar3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
  }
  return;
}



/* Entry: 1049523bc; end: 1049524c7; +[FBSDKCodelessIndexer startIndexing] */

void FUN_1049523bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  char *pcVar5;
  
  if (cRam000000011369d039 == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf07b60();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126ade50;
      func_0x00010c22bfc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c291300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if ((puVar2 == (undefined *)0x0) ||
         (puVar1 = puVar2,
         func_0x00010bfda7c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da27d8),
         (int)puVar1 == 0)) {
        func_0x00010c28dfc0(param_1);
      }
      else {
        pcVar3 = "FBUnityUtility";
        _objc_lookUpClass();
        ppuVar4 = &PTR____CFConstantStringClassReference_110da27f8;
        _NSSelectorFromString();
        if (((pcVar3 != (char *)0x0) && (ppuVar4 != (undefined **)0x0)) &&
           (pcVar5 = pcVar3, func_0x00010c13b700(pcVar3,param_2,ppuVar4), (int)pcVar5 != 0)) {
          func_0x00010c0f8ec0(pcVar3,param_2,ppuVar4);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 1049524c8; end: 10495251b; +[FBSDKCodelessIndexer uploadIndexing] */

void FUN_1049524c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if ((bRam000000011369d058 & 1) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126ade40;
  func_0x00010bf60c80(PTR_PTR_1126ade40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28dfe0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10495251c; end: 1049527af; +[FBSDKCodelessIndexer uploadIndexing:] */

void FUN_10495251c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_3;
  _objc_retain();
  if ((param_3 != (undefined **)0x0) && ((bRam000000011369d058 & 1) == 0)) {
    ppuVar1 = (undefined **)PTR_PTR_1126add08;
    func_0x00010bdc25e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uRam000000011369d040 == 0) ||
       (uVar2 = uRam000000011369d040, ppuVar11 = ppuVar1, func_0x00010c0720c0(), (uVar2 & 1) == 0))
    {
      _objc_storeStrong(0x11369d040,ppuVar1);
      puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
      func_0x00010c0b6660();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0dfec0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bfcde20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar6 = param_1;
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf05260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60000();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar5;
      func_0x00010bf56560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(param_1);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      bRam000000011369d058 = 1;
      ppuVar11 = &PTR___NSConcreteGlobalBlock_1107b9738;
      func_0x00010c251a80(uVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(ppuVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  bRam000000011369d058 = 0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  ppuVar1 = ppuVar11;
  func_0x00010c075f00();
  if ((int)ppuVar1 != 0) {
    ppuVar1 = ppuVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar1;
    func_0x00010bf1f3c0();
    bRam000000011369d039 = (byte)ppuVar12;
    _objc_release(ppuVar1);
    uVar5 = uRam000000011369d050;
    if ((bRam000000011369d039 & 1) == 0) {
      uRam000000011369d050 = 0;
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 1049527b0; end: 10495284b;  */

void FUN_1049527b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uRam000000011369d058 = 0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da27b8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    bRam000000011369d039 = (byte)uVar3;
    _objc_release(uVar2);
    uVar2 = uRam000000011369d050;
    if ((bRam000000011369d039 & 1) == 0) {
      uRam000000011369d050 = 0;
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10495284c; end: 104952b57; +[FBSDKCodelessIndexer currentViewTree] */

void FUN_10495284c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain();
  puVar8 = puVar2;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        uVar9 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
        puVar3 = PTR_PTR_1126ade58;
        func_0x00010c124700(PTR_PTR_1126ade58,param_6,uVar9,0,0,1);
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010c075e80();
          if ((int)uVar9 == 0) {
            func_0x00010bf09f20(PTR_PTR_1126add78,param_6,puVar1,puVar3);
          }
          else {
            func_0x00010c066b00(puVar1,param_6,puVar3,0);
          }
        }
        _objc_release(puVar3);
        puVar11 = puVar11 + 1;
      } while (puVar8 != puVar11);
      puVar8 = puVar2;
      func_0x00010bf52a60(puVar2,param_6,&uStack_130,auStack_e8,0x10);
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar8 = puVar1;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar1;
    func_0x00010c140180(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    ppuVar4 = (undefined **)PTR_PTR_1126ade40;
    func_0x00010c151860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    _UIImageJPEGRepresentation(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar6 = ppuVar5;
    func_0x00010bf15da0(ppuVar5,param_6,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(PTR_PTR_1126add78,param_6,puVar3,puVar11,
                        &PTR____CFConstantStringClassReference_110db5dd8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar4 = ppuVar6;
    }
    func_0x00010bf71e80(PTR_PTR_1126add78,param_6,puVar3,ppuVar4,
                        &PTR____CFConstantStringClassReference_110e11c38);
    puVar7 = PTR_PTR_1126add78;
    func_0x00010bf64b60(PTR_PTR_1126add78,param_6,puVar3,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    if (puVar7 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar3);
    _objc_release(ppuVar6);
    _objc_release(puVar7);
    _objc_release(puVar11);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126add20;
    func_0x00010c22c4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfaf540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      func_0x00010bf20c00(puVar2);
      _UIGraphicsBeginImageContext(param_3,param_4);
      func_0x00010bf20c00(puVar2);
      puVar8 = puVar2;
      func_0x00010bf89ce0(puVar2,param_6,1);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      _UIGraphicsEndImageContext();
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104952b58; end: 104952bf3; +[FBSDKCodelessIndexer screenshot] */

void FUN_104952b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126add20;
  func_0x00010c22c4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bfaf540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf20c00(puVar1);
    _UIGraphicsBeginImageContext(param_3,param_4);
    func_0x00010bf20c00(puVar1);
    puVar2 = puVar1;
    func_0x00010bf89ce0(puVar1,param_6,1);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104952bf4; end: 104952ed7; +[FBSDKCodelessIndexer dimensionOf:] */

undefined8 * FUN_104952bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined *puStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  long lStack_180;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar13 = param_3;
  func_0x00010c075f00();
  uVar14 = param_3;
  if ((int)uVar13 == 0) {
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar13 = param_3;
    func_0x00010c075f00();
    if ((int)uVar13 == 0) {
      uVar14 = 0;
    }
    else {
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain();
  }
  func_0x00010bfb68e0(uVar14);
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar13 = uVar14;
  func_0x00010c075f00();
  if ((int)uVar13 != 0) {
    func_0x00010bf4cdc0(uVar14);
  }
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dfeaf8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110e8f298;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d8 = puVar1;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110db1238;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d0 = puVar2;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110db1258;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_c8 = puVar10;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110da2858;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_c0 = puVar12;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110da2878;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b8 = puVar3;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110da2898;
  puStack_b0 = puVar4;
  func_0x00010c074c20();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_d8;
  puVar15 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a8 = puVar5;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar14);
  uVar13 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return puVar15;
  }
  ___stack_chk_fail();
  ppuVar17 = &puStack_250;
  pcStack_118 = FUN_104952ed8;
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar6;
  puStack_170 = puVar5;
  puStack_168 = puVar4;
  puStack_160 = puVar3;
  puStack_158 = puVar15;
  puStack_150 = puVar12;
  puStack_148 = puVar10;
  puStack_140 = puVar2;
  puStack_138 = puVar1;
  uStack_130 = uVar14;
  uStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_208 = PTR_PTR_1126e3318;
  puVar15 = &uStack_210;
  uStack_210 = uVar13;
  _objc_msgSendSuper2(puVar15,PTR_s_init_1125d9248);
  if (puVar15 != (undefined8 *)0x0) {
    ppuVar7 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010bf51e00();
    uVar13 = puVar15[1];
    puVar15[1] = ppuVar8;
    _objc_release(uVar13);
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010bf51e00();
    uVar13 = puVar15[2];
    puVar15[2] = ppuVar8;
    _objc_release(uVar13);
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010bf51e00();
    uVar13 = puVar15[4];
    puVar15[4] = ppuVar8;
    _objc_release(uVar13);
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_248 = 0;
    puStack_250 = (undefined *)0x0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    _objc_retain();
    ppuVar8 = ppuVar7;
    func_0x00010bf52a60();
    if (ppuVar8 != (undefined **)0x0) {
      lVar16 = *plStack_240;
      do {
        ppuVar17 = (undefined **)0x0;
        do {
          if (*plStack_240 != lVar16) {
            _objc_enumerationMutation(ppuVar7);
          }
          puVar2 = PTR_PTR_1126ade60;
          _objc_alloc();
          func_0x00010c020680();
          func_0x00010bf09f20(PTR_PTR_1126add78);
          _objc_release(puVar2);
          ppuVar17 = (undefined **)((long)ppuVar17 + 1);
        } while (ppuVar8 != ppuVar17);
        ppuVar8 = ppuVar7;
        ppuVar17 = &puStack_250;
        func_0x00010bf52a60();
      } while (ppuVar8 != (undefined **)0x0);
    }
    _objc_release(ppuVar7);
    puVar2 = puVar1;
    func_0x00010bf51e00();
    uVar13 = puVar15[3];
    puVar15[3] = puVar2;
    _objc_release(uVar13);
    _objc_release(puVar1);
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar17;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_retain();
  ppuVar9 = (undefined **)ppuVar6[3];
  func_0x00010bf529e0();
  ppuVar17 = ppuVar7;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar17;
  func_0x00010bf529e0();
  _objc_release(ppuVar17);
  if (ppuVar9 == ppuVar8) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar17 = ppuVar7;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar7;
    func_0x00010c0f59e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar17);
    puVar10 = puVar2;
    func_0x00010c0720c0();
    if ((int)puVar10 == 0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      puVar10 = ppuVar6[3];
      func_0x00010bf529e0();
      if (puVar10 == (undefined *)0x0) {
        puVar15 = (undefined8 *)0x1;
      }
      else {
        puVar10 = (undefined *)0x0;
        do {
          puVar11 = (undefined8 *)PTR_PTR_1126add78;
          func_0x00010bf09f40();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR_PTR_1126add78;
          ppuVar17 = ppuVar7;
          func_0x00010c0f5800(ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf09f40(puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar11;
          func_0x00010c071fc0();
          _objc_release(puVar12);
          _objc_release(ppuVar17);
          _objc_release(puVar11);
          if (((ulong)puVar15 & 1) == 0) break;
          puVar10 = puVar10 + 1;
          puVar12 = ppuVar6[3];
          func_0x00010bf529e0();
        } while (puVar10 < puVar12);
      }
    }
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  else {
    puVar15 = (undefined8 *)0x0;
  }
  _objc_release(ppuVar7);
  return puVar15;
}



/* Entry: 104952ed8; end: 104953147; -[FBSDKCodelessParameterComponent initWithJSON:] */

undefined8 * FUN_104952ed8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  puVar7 = &uStack_140;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain();
  puStack_f8 = PTR_PTR_1126e3318;
  puVar11 = &uStack_100;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar11,PTR_s_init_1125d9248);
  if (puVar11 != (undefined8 *)0x0) {
    puVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf51e00();
    uVar9 = puVar11[1];
    puVar11[1] = puVar2;
    _objc_release(uVar9);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf51e00();
    uVar9 = puVar11[2];
    puVar11[2] = puVar2;
    _objc_release(uVar9);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf51e00();
    uVar9 = puVar11[4];
    puVar11[4] = puVar2;
    _objc_release(uVar9);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain();
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar12 = *plStack_130;
      do {
        puVar13 = (undefined1 *)0x0;
        do {
          if (*plStack_130 != lVar12) {
            _objc_enumerationMutation(puVar1);
          }
          puVar4 = PTR_PTR_1126ade60;
          _objc_alloc();
          func_0x00010c020680();
          func_0x00010bf09f20(PTR_PTR_1126add78);
          _objc_release(puVar4);
          puVar13 = puVar13 + 1;
        } while (puVar2 != puVar13);
        puVar2 = puVar1;
        puVar7 = &uStack_140;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(puVar1);
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar9 = puVar11[3];
    puVar11[3] = puVar4;
    _objc_release(uVar9);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = (undefined1 *)puVar7;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar5 = *(undefined1 **)(param_3 + 0x18);
  func_0x00010bf529e0();
  puVar2 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar5 == puVar13) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = puVar1;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0f59e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar13);
    _objc_release(puVar2);
    puVar6 = puVar4;
    func_0x00010c0720c0();
    if ((int)puVar6 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      lVar12 = *(long *)(param_3 + 0x18);
      func_0x00010bf529e0();
      if (lVar12 == 0) {
        puVar11 = (undefined8 *)0x1;
      }
      else {
        uVar10 = 0;
        do {
          puVar7 = (undefined8 *)PTR_PTR_1126add78;
          func_0x00010bf09f40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126add78;
          puVar2 = puVar1;
          func_0x00010c0f5800(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf09f40(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar7;
          func_0x00010c071fc0();
          _objc_release(puVar6);
          _objc_release(puVar2);
          _objc_release(puVar7);
          if (((ulong)puVar11 & 1) == 0) break;
          uVar10 = uVar10 + 1;
          uVar8 = *(ulong *)(param_3 + 0x18);
          func_0x00010bf529e0();
        } while (uVar10 < uVar8);
      }
    }
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  else {
    puVar11 = (undefined8 *)0x0;
  }
  _objc_release(puVar1);
  return puVar11;
}



/* Entry: 104953148; end: 10495339f; -[FBSDKCodelessParameterComponent isEqualToParameter:] */

undefined * FUN_104953148(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  _objc_retain();
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  lVar5 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  if (lVar1 == lVar2) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ea63b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar5 = param_3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0f59e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110ea63b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar5);
    puVar10 = puVar3;
    func_0x00010c0720c0(puVar3,param_2,puVar4);
    if ((int)puVar10 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x18);
      func_0x00010bf529e0();
      if (lVar5 == 0) {
        puVar10 = (undefined *)0x1;
      }
      else {
        uVar9 = 0;
        do {
          puVar6 = PTR_PTR_1126add78;
          func_0x00010bf09f40(PTR_PTR_1126add78,param_2,*(undefined8 *)(param_1 + 0x18),uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126add78;
          lVar5 = param_3;
          func_0x00010c0f5800(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf09f40(puVar7,param_2,lVar5,uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar6;
          func_0x00010c071fc0(puVar6,param_2,puVar7);
          _objc_release(puVar7);
          _objc_release(lVar5);
          _objc_release(puVar6);
          if (((ulong)puVar10 & 1) == 0) break;
          uVar9 = uVar9 + 1;
          uVar8 = *(ulong *)(param_1 + 0x18);
          func_0x00010bf529e0();
        } while (uVar9 < uVar8);
      }
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release(param_3);
  return puVar10;
}



/* Entry: 1049533a0; end: 1049533a7; -[FBSDKCodelessParameterComponent name] */

undefined8 FUN_1049533a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1049533a8; end: 1049533af; -[FBSDKCodelessParameterComponent value] */

undefined8 FUN_1049533a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1049533b0; end: 1049533b7; -[FBSDKCodelessParameterComponent path] */

undefined8 FUN_1049533b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1049533b8; end: 1049533bf; -[FBSDKCodelessParameterComponent pathType] */

undefined8 FUN_1049533b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049533c0; end: 104953407; -[FBSDKCodelessParameterComponent .cxx_destruct] */

void FUN_1049533c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104953408; end: 1049536bb; -[FBSDKCodelessPathComponent initWithJSON:] */

undefined1 * FUN_104953408(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain();
  puStack_38 = PTR_PTR_1126e3320;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(long *)((long)puVar1 + 0x20) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(long *)((long)puVar1 + 0x28) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(long *)((long)puVar1 + 0x30) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(long *)((long)puVar1 + 0x38) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      *(undefined4 *)((long)puVar1 + 8) = 0xffffffff;
    }
    else {
      lVar2 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c067ec0();
      *(int *)((long)puVar1 + 8) = (int)lVar3;
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      *(undefined4 *)((long)puVar1 + 0x10) = 0xffffffff;
    }
    else {
      lVar2 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c067ec0();
      *(int *)((long)puVar1 + 0x10) = (int)lVar3;
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      *(undefined4 *)((long)puVar1 + 0x14) = 0xffffffff;
    }
    else {
      lVar2 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c067ec0();
      *(int *)((long)puVar1 + 0x14) = (int)lVar3;
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067ec0();
    *(int *)((long)puVar1 + 0xc) = (int)lVar3;
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067ec0();
    *(int *)((long)puVar1 + 0x18) = (int)lVar3;
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1049536bc; end: 1049538cf; -[FBSDKCodelessPathComponent isEqualToPath:] */

undefined * FUN_1049536bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da2918);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_3;
  func_0x00010bf39ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfe36a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf6e2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec9e0();
  func_0x00010c1554e0();
  func_0x00010c142240();
  func_0x00010c268120();
  func_0x00010c0bcb40();
  _objc_release(param_3);
  func_0x00010c25d9e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110da2918);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = puVar1;
  func_0x00010c0720c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar1);
  return puVar7;
}



/* Entry: 1049538d0; end: 1049538d7; -[FBSDKCodelessPathComponent className] */

undefined8 FUN_1049538d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049538d8; end: 1049538df; -[FBSDKCodelessPathComponent text] */

undefined8 FUN_1049538d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1049538e0; end: 1049538e7; -[FBSDKCodelessPathComponent hint] */

undefined8 FUN_1049538e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1049538e8; end: 1049538ef; -[FBSDKCodelessPathComponent desc] */

undefined8 FUN_1049538e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1049538f0; end: 1049538f7; -[FBSDKCodelessPathComponent index] */

undefined4 FUN_1049538f0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1049538f8; end: 1049538ff; -[FBSDKCodelessPathComponent tag] */

undefined4 FUN_1049538f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 104953900; end: 104953907; -[FBSDKCodelessPathComponent section] */

undefined4 FUN_104953900(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 104953908; end: 10495390f; -[FBSDKCodelessPathComponent row] */

undefined4 FUN_104953908(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 104953910; end: 104953917; -[FBSDKCodelessPathComponent matchBitmask] */

undefined4 FUN_104953910(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 104953918; end: 10495395f; -[FBSDKCodelessPathComponent .cxx_destruct] */

void FUN_104953918(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 104953960; end: 104953a03; -[FBSDKContainerViewController viewDidDisappear:] */

void FUN_104953960(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3328;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13b700();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c1a0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104953a04; end: 104953c23; -[FBSDKContainerViewController displayChildController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104953a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bef7700(param_1,param_2,param_3);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  func_0x00010bfb68e0(lVar1);
  func_0x00010c19f0e0(uVar2);
  func_0x00010befbb60(lVar1,param_2,uVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010bf495a0(0x3ff0000000000000,0,PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      uVar2,3,0,lVar1,3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puStack_88 = puVar3;
  func_0x00010bf495a0(0x3ff0000000000000,0,PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      uVar2,4,0,lVar1,4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puStack_80 = puVar4;
  func_0x00010bf495a0(0x3ff0000000000000,0,PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      uVar2,5,0,lVar1,5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puStack_78 = puVar5;
  func_0x00010bf495a0(0x3ff0000000000000,0,PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      uVar2,6,0,lVar1,6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef79e0(lVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bf77e80(param_3,param_2,param_1);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(lVar1 + _DAT_11270ecdc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104953c24; end: 104953c43; -[FBSDKContainerViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104953c24(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11270ecdc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104953c44; end: 104953c57; -[FBSDKContainerViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104953c44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11270ecdc,param_3);
  return;
}



/* Entry: 104953c58; end: 104953c67; -[FBSDKContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104953c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270ecdc);
  return;
}



/* Entry: 104953c68; end: 104953e1f; -[FBSDKCrashObserver initWithFeatureChecker:graphRequestFactory:settings:crashHandler:] */

undefined ***
FUN_104953c68(undefined **param_1,undefined8 param_2,undefined ***param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = param_3;
  pppuVar6 = param_3;
  _objc_retain();
  uVar2 = param_4;
  _objc_retain();
  uVar3 = param_5;
  _objc_retain();
  uVar4 = param_6;
  _objc_retain();
  puStack_a0 = PTR_PTR_1126e3330;
  pppuVar5 = &ppuStack_a8;
  ppuStack_a8 = param_1;
  _objc_msgSendSuper2(pppuVar5,PTR_s_init_1125d9248);
  if (pppuVar5 != (undefined ***)0x0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110da2a78;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110da2a98;
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = pppuVar5[1];
    pppuVar5[1] = ppuVar7;
    _objc_release(ppuVar11);
    ppuStack_98 = &PTR____CFConstantStringClassReference_110da2ab8;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110da2ad8;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110da2af8;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110da2b18;
    pppuVar6 = &ppuStack_98;
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = pppuVar5[2];
    pppuVar5[2] = ppuVar7;
    _objc_release(ppuVar11);
    _objc_storeStrong(pppuVar5 + 3,param_3);
    _objc_storeStrong(pppuVar5 + 4,param_4);
    _objc_storeStrong(pppuVar5 + 5,param_5);
    _objc_storeStrong(pppuVar5 + 6,param_6);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  _objc_retain();
  ppuVar7 = pppuVar1[5];
  func_0x00010c0701c0();
  if (((ulong)ppuVar7 & 1) == 0) {
    pppuVar5 = pppuVar6;
    func_0x00010bf529e0();
    if (pppuVar5 == (undefined ***)0x0) {
      func_0x00010bf53ee0(pppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3b0c0();
    }
    else {
      pppuVar5 = (undefined ***)PTR_PTR_1126add78;
      func_0x00010bf64b60();
      _objc_retainAutoreleasedReturnValue();
      if (pppuVar5 != (undefined ***)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        func_0x00010c008340();
        puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        func_0x00010bf71e80(PTR_PTR_1126add78);
        puVar10 = PTR_PTR_1126add20;
        func_0x00010c22c4c0(PTR_PTR_1126add20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9da40();
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuVar7 = pppuVar1[4];
        ppuVar11 = pppuVar1[5];
        func_0x00010bf05260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf56560(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(ppuVar11);
        func_0x00010c251a80(ppuVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      ppuVar7 = pppuVar1[3];
      pppuVar1 = pppuVar6;
      _objc_retain();
      func_0x00010bf37e60(ppuVar7);
      _objc_release(pppuVar1);
      pppuVar1 = pppuVar5;
    }
    _objc_release(pppuVar1);
  }
  _objc_release(pppuVar6);
  return pppuVar6;
}



/* Entry: 104953e20; end: 104954073; -[FBSDKCrashObserver didReceiveCrashLogs:] */

void FUN_104953e20(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x00010c0701c0();
  if ((uVar3 & 1) == 0) {
    lVar4 = param_3;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      func_0x00010bf53ee0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3b0c0();
    }
    else {
      puVar5 = PTR_PTR_1126add78;
      func_0x00010bf64b60(PTR_PTR_1126add78,param_2,param_3,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      if (puVar5 != (undefined *)0x0) {
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        func_0x00010c008340();
        puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar1 = ppuVar6;
        }
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar7,ppuVar1,
                            &PTR____CFConstantStringClassReference_110da2b38);
        puVar8 = PTR_PTR_1126add20;
        func_0x00010c22c4c0(PTR_PTR_1126add20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9da40();
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf05260();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar9;
        func_0x00010c25d9e0(puVar8,param_2,&PTR____CFConstantStringClassReference_110da2b58);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf56560(uVar10,param_2,puVar8,puVar7,
                            &PTR____CFConstantStringClassReference_110dada18,0,in_x6,in_x7,uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(uVar9);
        puStack_88 = puVar2;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_104954074;
        puStack_70 = &UNK_1107b94c8;
        puStack_68 = param_1;
        func_0x00010c251a80(uVar10,param_2,&puStack_88);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(puVar7);
        _objc_release(ppuVar6);
      }
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      puStack_b0 = puVar2;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_104954110;
      puStack_98 = &UNK_110841f20;
      lVar4 = param_3;
      _objc_retain();
      lStack_90 = lVar4;
      func_0x00010bf37e60(uVar10,param_2,0x1020101,&puStack_b0);
      _objc_release(lStack_90);
      param_1 = puVar5;
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104954074; end: 10495410f;  */

void FUN_104954074(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  if (param_4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    lVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dab0d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf53ee0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3b0c0();
        _objc_release(uVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104954110; end: 10495412b;  */

void FUN_104954110(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf02850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126ade68,PTR_s_analyze__11259e3b8,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10495412c; end: 104954133; -[FBSDKCrashObserver prefixes] */

undefined8 FUN_10495412c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104954134; end: 10495413b; -[FBSDKCrashObserver setPrefixes:] */

void FUN_104954134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10495413c; end: 104954143; -[FBSDKCrashObserver frameworks] */

undefined8 FUN_10495413c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104954144; end: 10495414b; -[FBSDKCrashObserver setFrameworks:] */

void FUN_104954144(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10495414c; end: 104954153; -[FBSDKCrashObserver featureChecker] */

undefined8 FUN_10495414c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104954154; end: 10495415f; -[FBSDKCrashObserver setFeatureChecker:] */

void FUN_104954154(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104954160; end: 104954167; -[FBSDKCrashObserver graphRequestFactory] */

undefined8 FUN_104954160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104954168; end: 104954173; -[FBSDKCrashObserver setGraphRequestFactory:] */

void FUN_104954168(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 104954174; end: 10495417b; -[FBSDKCrashObserver settings] */

undefined8 FUN_104954174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10495417c; end: 104954187; -[FBSDKCrashObserver setSettings:] */

void FUN_10495417c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104954188; end: 10495418f; -[FBSDKCrashObserver crashHandler] */

undefined8 FUN_104954188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104954190; end: 10495419b; -[FBSDKCrashObserver setCrashHandler:] */

void FUN_104954190(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10495419c; end: 1049541fb; -[FBSDKCrashObserver .cxx_destruct] */

void FUN_10495419c(long param_1)

{
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



/* Entry: 1049541fc; end: 104954207; +[FBSDKCrashShield settings] */

void FUN_1049541fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d060);
  return;
}



/* Entry: 104954208; end: 104954213; +[FBSDKCrashShield graphRequestFactory] */

void FUN_104954208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d068);
  return;
}



/* Entry: 104954214; end: 10495421f; +[FBSDKCrashShield featureChecking] */

void FUN_104954214(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d070);
  return;
}



/* Entry: 104954220; end: 1049542db; +[FBSDKCrashShield configureWithSettings:graphRequestFactory:featureChecking:] */

void FUN_104954220(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain(param_5);
  puVar4 = PTR_PTR_1126ade68;
  func_0x00010bf39c40();
  if (puVar4 == param_1) {
    _objc_storeStrong(0x11369d060,param_3);
    _objc_storeStrong(0x11369d068,param_4);
    _objc_storeStrong(0x11369d070,param_5);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1049542dc; end: 104954b23; +[FBSDKCrashShield initialize] */

undefined8 *** FUN_1049542dc(undefined8 ***param_1,undefined8 param_2,undefined8 ***param_3)

{
  undefined8 ***pppuVar1;
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
  undefined8 ***pppuVar14;
  undefined8 uVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *unaff_x20;
  undefined8 ***pppuVar22;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long lVar23;
  undefined *unaff_x28;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined **ppuStack_4b0;
  undefined *puStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined1 auStack_480 [128];
  long lStack_400;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined8 **ppuStack_3a8;
  undefined1 *puStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined8 **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined8 **ppuStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
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
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = (undefined8 ***)PTR_PTR_1126ade68;
  func_0x00010bf39c40();
  if (pppuVar1 == param_1) {
    ppuStack_110 = &PTR____CFConstantStringClassReference_110da2b78;
    ppuStack_118 = &PTR____CFConstantStringClassReference_110da2b98;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_118,1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_108 = &PTR____CFConstantStringClassReference_110da2bb8;
    ppuStack_140 = &PTR____CFConstantStringClassReference_110da2bd8;
    ppuStack_138 = &PTR____CFConstantStringClassReference_110da2bf8;
    ppuStack_130 = &PTR____CFConstantStringClassReference_110da2c18;
    ppuStack_128 = &PTR____CFConstantStringClassReference_110da2c38;
    ppuStack_120 = &PTR____CFConstantStringClassReference_110da2c58;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c0 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_140,5);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_100 = &PTR____CFConstantStringClassReference_110da2c78;
    ppuStack_170 = &PTR____CFConstantStringClassReference_110da2c98;
    ppuStack_168 = &PTR____CFConstantStringClassReference_110da2cb8;
    ppuStack_160 = &PTR____CFConstantStringClassReference_110da2cd8;
    ppuStack_158 = &PTR____CFConstantStringClassReference_110da2cf8;
    ppuStack_150 = &PTR____CFConstantStringClassReference_110da2d18;
    ppuStack_148 = &PTR____CFConstantStringClassReference_110da2d38;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_170,6);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110da2d58;
    ppuStack_178 = &PTR____CFConstantStringClassReference_110da2d78;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_178,1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110e93858;
    ppuStack_180 = &PTR____CFConstantStringClassReference_110da2d98;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_180,1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110da2db8;
    ppuStack_188 = &PTR____CFConstantStringClassReference_110da2dd8;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_188,1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110da2df8;
    ppuStack_198 = &PTR____CFConstantStringClassReference_110da2e18;
    ppuStack_190 = &PTR____CFConstantStringClassReference_110da2e38;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_198,2);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110da2e58;
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_110da2e78;
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1a0,1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110da2e98;
    ppuStack_1a8 = &PTR____CFConstantStringClassReference_110da2eb8;
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1a8,1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110da2ed8;
    ppuStack_1d0 = &PTR____CFConstantStringClassReference_110da2ef8;
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110da2f18;
    ppuStack_1c0 = &PTR____CFConstantStringClassReference_110da2f38;
    ppuStack_1b8 = &PTR____CFConstantStringClassReference_110da2f58;
    ppuStack_1b0 = &PTR____CFConstantStringClassReference_110da2f78;
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1d0,5);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar11;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c0,&ppuStack_110,
                        10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puRam000000011369d078;
    puRam000000011369d078 = puVar12;
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    ppuStack_330 = &PTR____CFConstantStringClassReference_110da2f98;
    pppuVar1 = (undefined8 ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1000000);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_328 = &PTR____CFConstantStringClassReference_110da2fb8;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_338 = pppuVar1;
    ppuStack_280 = pppuVar1;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010000);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_320 = &PTR____CFConstantStringClassReference_110da2c78;
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_340 = puVar2;
    puStack_278 = puVar2;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010100);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_318 = &PTR____CFConstantStringClassReference_110da2d58;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_348 = puVar13;
    puStack_270 = puVar13;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010200);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_310 = &PTR____CFConstantStringClassReference_110da2b78;
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_350 = puVar2;
    puStack_268 = puVar2;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010300);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_308 = &PTR____CFConstantStringClassReference_110da2db8;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_358 = puVar13;
    puStack_260 = puVar13;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010400);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_300 = &PTR____CFConstantStringClassReference_110da2df8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_360 = puVar2;
    puStack_258 = puVar2;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010401);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2f8 = &PTR____CFConstantStringClassReference_110da2e58;
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_368 = puVar3;
    puStack_250 = puVar3;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010402);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2f0 = &PTR____CFConstantStringClassReference_110da2fd8;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_370 = puVar13;
    puStack_248 = puVar13;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010403);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2e8 = &PTR____CFConstantStringClassReference_110da2e98;
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_378 = puVar2;
    puStack_240 = puVar2;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010500);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2e0 = &PTR____CFConstantStringClassReference_110da2ff8;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_380 = puVar13;
    puStack_238 = puVar13;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010600);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2d8 = &PTR____CFConstantStringClassReference_110da2ed8;
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_388 = puVar2;
    puStack_230 = puVar2;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010601);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2d0 = &PTR____CFConstantStringClassReference_110da3018;
    unaff_x21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_390 = puVar13;
    puStack_228 = puVar13;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010602);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2c8 = &PTR____CFConstantStringClassReference_110da3038;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_220 = unaff_x21;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1020000);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e91138;
    unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_218 = unaff_x22;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1020100);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2b8 = &PTR____CFConstantStringClassReference_110da3058;
    unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_210 = unaff_x23;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1020101);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2b0 = &PTR____CFConstantStringClassReference_110e93858;
    unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_208 = unaff_x24;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1020200);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2a8 = &PTR____CFConstantStringClassReference_110da3078;
    unaff_x26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_200 = unaff_x25;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010700);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2a0 = &PTR____CFConstantStringClassReference_110da2bb8;
    unaff_x27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_1f8 = unaff_x26;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1010800);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_298 = &PTR____CFConstantStringClassReference_110da3098;
    unaff_x28 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_1f0 = unaff_x27;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x2000000);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_290 = &PTR____CFConstantStringClassReference_110da30b8;
    param_1 = (undefined8 ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_1e8 = unaff_x28;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x3000000);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_288 = &PTR____CFConstantStringClassReference_110da30d8;
    unaff_x20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_1e0 = param_1;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x4000000);
    _objc_retainAutoreleasedReturnValue();
    param_3 = &ppuStack_280;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1d8 = unaff_x20;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puRam000000011369d080;
    puRam000000011369d080 = puVar2;
    _objc_release(puVar13);
    _objc_release(unaff_x20);
    _objc_release(param_1);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(puStack_390);
    _objc_release(puStack_388);
    _objc_release(puStack_380);
    _objc_release(puStack_378);
    _objc_release(puStack_370);
    _objc_release(puStack_368);
    _objc_release(puStack_360);
    _objc_release(puStack_358);
    _objc_release(puStack_350);
    _objc_release(puStack_348);
    _objc_release(puStack_340);
    pppuVar1 = (undefined8 ***)ppuStack_338;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  pcStack_398 = FUN_104954b24;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3f0 = unaff_x28;
  puStack_3e8 = unaff_x27;
  puStack_3e0 = unaff_x26;
  puStack_3d8 = unaff_x25;
  puStack_3d0 = unaff_x24;
  puStack_3c8 = unaff_x23;
  puStack_3c0 = unaff_x22;
  puStack_3b8 = unaff_x21;
  puStack_3b0 = unaff_x20;
  ppuStack_3a8 = param_1;
  puStack_3a0 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar13 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  plStack_4e0 = (long *)0x0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  _objc_retain();
  puVar21 = &uStack_4f0;
  pppuVar14 = param_3;
  func_0x00010bf52a60();
  if (pppuVar14 != (undefined8 ***)0x0) {
    lVar23 = *plStack_4e0;
    do {
      pppuVar22 = (undefined8 ***)0x0;
      do {
        if (*plStack_4e0 != lVar23) {
          _objc_enumerationMutation(param_3);
        }
        uVar15 = *(undefined8 *)(lStack_4e8 + (long)pppuVar22 * 8);
        func_0x00010c0e00e0(uVar15,param_2,&PTR____CFConstantStringClassReference_110da0658);
        _objc_retainAutoreleasedReturnValue();
        pppuVar16 = pppuVar1;
        func_0x00010be1ef60(pppuVar1,param_2,uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uRam000000011369d070;
        if (pppuVar16 != (undefined8 ***)0x0) {
          pppuVar17 = pppuVar1;
          func_0x00010bfa2400(pppuVar1,param_2,pppuVar16);
          func_0x00010bf7ff40(uVar20,param_2,(long)(int)pppuVar17);
          func_0x00010befa120(puVar13,param_2,pppuVar16);
        }
        _objc_release(pppuVar16);
        _objc_release(uVar15);
        pppuVar22 = (undefined8 ***)((long)pppuVar22 + 1);
      } while (pppuVar14 != pppuVar22);
      puVar21 = &uStack_4f0;
      pppuVar14 = param_3;
      func_0x00010bf52a60(param_3,param_2,puVar21,auStack_480,0x10);
    } while (pppuVar14 != (undefined8 ***)0x0);
  }
  _objc_release(param_3);
  pppuVar14 = pppuVar1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  pppuVar22 = pppuVar14;
  func_0x00010c0701c0();
  _objc_release(pppuVar14);
  if ((((ulong)pppuVar22 & 1) == 0) &&
     (puVar2 = puVar13, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
    ppuStack_4a0 = &PTR____CFConstantStringClassReference_110da30f8;
    puVar3 = puVar13;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_498 = &PTR____CFConstantStringClassReference_110dc1558;
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puStack_490 = puVar3;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da0738);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_488 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_490,&ppuStack_4a0,
                        2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar19 = (undefined8 *)PTR_PTR_1126add78;
    puVar21 = puVar18;
    func_0x00010bf64b60(PTR_PTR_1126add78,param_2,puVar18,0,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar19 != (undefined8 *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      puVar21 = puVar19;
      func_0x00010c008340();
      uVar20 = uRam000000011369d068;
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar3 != (undefined *)0x0) {
        func_0x00010c227f80();
        _objc_retainAutoreleasedReturnValue();
        pppuVar14 = pppuVar1;
        func_0x00010bf05260();
        _objc_retainAutoreleasedReturnValue();
        pppuVar22 = pppuVar14;
        func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da2b58);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_4b0 = &PTR____CFConstantStringClassReference_110da3118;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_4a8 = puVar3;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_4a8,
                            &ppuStack_4b0,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf56560(uVar20,param_2,puVar2,puVar4,
                            &PTR____CFConstantStringClassReference_110dada18,0,in_x6,in_x7,pppuVar22
                           );
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar2);
        _objc_release(pppuVar14);
        _objc_release(pppuVar1);
        puVar21 = (undefined8 *)0x0;
        func_0x00010c251a80(uVar20,param_2,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar20);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar19);
    _objc_release(puVar18);
  }
  _objc_release(puVar13);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar2 = puRam000000011369d080;
  puVar13 = PTR__OBJC_CLASS___NSObject_1126b1300;
  pppuVar1 = (undefined8 ***)PTR_PTR_1126add78;
  _objc_retain(puVar21);
  func_0x00010bf39c40(puVar13);
  func_0x00010bf71e60(pppuVar1,param_2,puVar2,puVar21,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  pppuVar14 = pppuVar1;
  func_0x00010c067ec0(pppuVar1);
  _objc_release(pppuVar1);
  return pppuVar14;
}



/* Entry: 104954b24; end: 104954eeb; +[FBSDKCrashShield analyze:] */

undefined * FUN_104954b24(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar11;
  long lVar12;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain();
  puVar10 = &uStack_160;
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_150;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_150 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lStack_158 + (long)puVar11 * 8);
        func_0x00010c0e00e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110da0658);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_1;
        func_0x00010be1ef60(param_1,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uRam000000011369d070;
        if (uVar4 != 0) {
          uVar5 = param_1;
          func_0x00010bfa2400(param_1,param_2,uVar4);
          func_0x00010bf7ff40(uVar9,param_2,(long)(int)uVar5);
          func_0x00010befa120(puVar1,param_2,uVar4);
        }
        _objc_release(uVar4);
        _objc_release(uVar3);
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
      puVar10 = &uStack_160;
      puVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,puVar10,auStack_f0,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  uVar4 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0701c0();
  _objc_release(uVar4);
  if (((uVar5 & 1) == 0) && (puVar2 = puVar1, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
    ppuStack_110 = &PTR____CFConstantStringClassReference_110da30f8;
    puVar11 = puVar1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110dc1558;
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puStack_100 = puVar11;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da0738);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f8 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_100,&ppuStack_110,
                        2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar11);
    puVar8 = (undefined8 *)PTR_PTR_1126add78;
    puVar10 = puVar7;
    func_0x00010bf64b60(PTR_PTR_1126add78,param_2,puVar7,0,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != (undefined8 *)0x0) {
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      puVar10 = puVar8;
      func_0x00010c008340();
      uVar9 = uRam000000011369d068;
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar11 != (undefined *)0x0) {
        func_0x00010c227f80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_1;
        func_0x00010bf05260();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da2b58);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_120 = &PTR____CFConstantStringClassReference_110da3118;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_118 = puVar11;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_118,
                            &ppuStack_120,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf56560(uVar9,param_2,puVar2,puVar6,
                            &PTR____CFConstantStringClassReference_110dada18,0,in_x6,in_x7,uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar2);
        _objc_release(uVar4);
        _objc_release(param_1);
        puVar10 = (undefined8 *)0x0;
        func_0x00010c251a80(uVar9,param_2,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar9);
      }
      _objc_release(puVar11);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  uVar9 = uRam000000011369d080;
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  puVar1 = PTR_PTR_1126add78;
  _objc_retain(puVar10);
  func_0x00010bf39c40(puVar2);
  func_0x00010bf71e60(puVar1,param_2,uVar9,puVar10,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar2 = puVar1;
  func_0x00010c067ec0(puVar1);
  _objc_release(puVar1);
  return puVar2;
}


