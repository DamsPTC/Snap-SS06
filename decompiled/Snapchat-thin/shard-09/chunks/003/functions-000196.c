/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b8f82c; end: 106b8f83b; -[SCUnauthenticatedStyleHelperDefault defaultAlternateActionLabelFont] */

void FUN_106b8f82c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c127e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_regularAvenirNextFontOfSize__1126279b0);
  return;
}



/* Entry: 106b8f83c; end: 106b8f84b; -[SCUnauthenticatedStyleHelperDefault defaultDescriptionLabelFont] */

void FUN_106b8f83c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_mediumAvenirNextFontOfSize__11260f6e8);
  return;
}



/* Entry: 106b8f84c; end: 106b8f897; -[SCUnauthenticatedStyleHelperDefault defaultHorizontalInset] */

undefined8 FUN_106b8f84c(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  func_0x00010be415e0();
  if ((param_1 & 1) == 0) {
    func_0x00010be43c80();
    uVar2 = 0x4038000000000000;
    if (iVar1 == 0) {
      uVar2 = 0x404a400000000000;
    }
  }
  else {
    uVar2 = 0x4051100000000000;
  }
  return uVar2;
}



/* Entry: 106b8f898; end: 106b8f8db; -[SCUnauthenticatedStyleHelperDefault defaultHorizontalInsets] */

undefined8 FUN_106b8f898(undefined8 param_1)

{
  func_0x00010bf69860();
  func_0x00010bf69860(param_1);
  return 0;
}



/* Entry: 106b8f8dc; end: 106b8f92b; -[SCUnauthenticatedStyleHelperDefault defaultContinueButtonHorizontalInset] */

undefined8 FUN_106b8f8dc(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  func_0x00010be415e0();
  if ((param_1 & 1) == 0) {
    func_0x00010be43c80();
    uVar2 = 0x4049000000000000;
    if (iVar1 == 0) {
      uVar2 = 0x4052c00000000000;
    }
  }
  else {
    uVar2 = 0x4058600000000000;
  }
  return uVar2;
}



/* Entry: 106b8f92c; end: 106b8f933; -[SCUnauthenticatedStyleHelperDefault defaultContinueButtonBottomPadding] */

undefined8 FUN_106b8f92c(void)

{
  return 0x403c000000000000;
}



/* Entry: 106b8f934; end: 106b8f93b; -[SCUnauthenticatedStyleHelperDefault defaultContinueButtonTopPadding] */

undefined8 FUN_106b8f934(void)

{
  return 0x4030000000000000;
}



/* Entry: 106b8f93c; end: 106b8f963; -[SCUnauthenticatedStyleHelperDefault defaultDescriptionBottomPadding] */

undefined8 FUN_106b8f93c(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010be415c0();
  uVar1 = 0x4042000000000000;
  if (param_1 == 0) {
    uVar1 = 0x4038000000000000;
  }
  return uVar1;
}



/* Entry: 106b8f964; end: 106b8f96f; -[SCUnauthenticatedStyleHelperDefault defaultExtraTopPadding] */

void FUN_106b8f964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIScreen_1126aea10,PTR_s_sc_safeAreaInsets_112631098);
  return;
}



/* Entry: 106b8f970; end: 106b8f9b3; -[SCUnauthenticatedStyleHelperDefault defaultTitleTopPadding] */

undefined8 FUN_106b8f970(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  func_0x00010be43c60();
  uVar2 = 0x4030000000000000;
  if ((param_1 & 1) == 0) {
    func_0x00010be41da0(0x4030000000000000);
    uVar2 = 0x4038000000000000;
    if (iVar1 == 0) {
      uVar2 = 0x4052e66666666666;
    }
  }
  return uVar2;
}



/* Entry: 106b8f9b4; end: 106b8fa03; -[SCUnauthenticatedStyleHelperDefault defaultTitleTopPaddingLarge] */

undefined8 FUN_106b8f9b4(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  func_0x00010be43c60();
  if ((param_1 & 1) == 0) {
    func_0x00010be41da0();
    uVar2 = 0x405f800000000000;
    if (iVar1 == 0) {
      uVar2 = 0x4063b00000000000;
    }
  }
  else {
    uVar2 = 0x4051533333333334;
  }
  return uVar2;
}



/* Entry: 106b8fa04; end: 106b8fa07; -[SCUnauthenticatedStyleHelperDefault defaultTitleBottomPadding] */

void FUN_106b8fa04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf69270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_defaultDescriptionBottomPadding_1125b7e40);
  return;
}



/* Entry: 106b8fa08; end: 106b8fa0b; -[SCUnauthenticatedStyleHelperDefault defaultLoginTitleTopPadding] */

void FUN_106b8fa08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6a7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_defaultTitleTopPadding_1125b83a0);
  return;
}



/* Entry: 106b8fa0c; end: 106b8fa1b; -[SCUnauthenticatedStyleHelperDefault defaultHintLabelColor] */

void FUN_106b8fa0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x7b);
  return;
}



/* Entry: 106b8fa1c; end: 106b8fa2b; -[SCUnauthenticatedStyleHelperDefault defaultHintLabelFont] */

void FUN_106b8fa1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_mediumAvenirNextFontOfSize__11260f6e8);
  return;
}



/* Entry: 106b8fa2c; end: 106b8faa7; -[SCUnauthenticatedStyleHelperDefault defaultButtonTitleColor] */

void FUN_106b8fa2c(int param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010b88a460();
  uVar2 = 0xd5;
  if ((param_1 != 0) && (lRam00000001138466f0 < 3)) {
    plVar3 = (long *)&UNK_10e5f30e8;
    do {
      lVar4 = *plVar3;
      if (lVar4 == 0) goto LAB_106b8fa8c;
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0x88);
    plVar3 = (long *)&UNK_10e5f3128;
    do {
      lVar4 = *plVar3;
      if (lVar4 == 0xd5) {
        uVar2 = 0x3d;
        goto LAB_106b8fa98;
      }
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0);
LAB_106b8fa8c:
    uVar2 = 0xd5;
  }
LAB_106b8fa98:
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_sig_color__11266c8c8,uVar2);
  return;
}



/* Entry: 106b8faa8; end: 106b8fad7; -[SCUnauthenticatedStyleHelperDefault defaultButtonBackgroundColor] */

void FUN_106b8faa8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar2 = 0x88;
  func_0x00010b83340c(0x88);
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_sig_color__11266c8c8,uVar2);
  return;
}



/* Entry: 106b8fad8; end: 106b8fae7; -[SCUnauthenticatedStyleHelperDefault defaultPageTitleBaseColor] */

void FUN_106b8fad8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x7b);
  return;
}



/* Entry: 106b8fae8; end: 106b8faf7; -[SCUnauthenticatedStyleHelperDefault defaultTextBaseColor] */

void FUN_106b8fae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x7b);
  return;
}



/* Entry: 106b8faf8; end: 106b8fb07; -[SCUnauthenticatedStyleHelperDefault defaultTextInputLabelFont] */

void FUN_106b8faf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_mediumAvenirNextFontOfSize__11260f6e8);
  return;
}



/* Entry: 106b8fb08; end: 106b8fb17; -[SCUnauthenticatedStyleHelperDefault defaultTitleLabelFont] */

void FUN_106b8fb08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_mediumAvenirNextFontOfSize__11260f6e8);
  return;
}



/* Entry: 106b8fb18; end: 106b8fb27; -[SCUnauthenticatedStyleHelperDefault defaultLargeButtonFont] */

void FUN_106b8fb18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 106b8fb28; end: 106b8fb33; -[SCUnauthenticatedStyleHelperDefault defaultButtonHeight] */

undefined8 FUN_106b8fb28(void)

{
  return 0x4048000000000000;
}



/* Entry: 106b8fb34; end: 106b8fb43; -[SCUnauthenticatedStyleHelperDefault defaultErrorLabelFont] */

void FUN_106b8fb34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_mediumAvenirNextFontOfSize__11260f6e8);
  return;
}



/* Entry: 106b8fb44; end: 106b8fb53; -[SCUnauthenticatedStyleHelperDefault defaultErrorLabelColor] */

void FUN_106b8fb44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x90);
  return;
}



/* Entry: 106b8fb54; end: 106b8fb5b; -[SCUnauthenticatedStyleHelperDefault defaultErrorLabelTextMinHeight] */

undefined8 FUN_106b8fb54(void)

{
  return 0x4030000000000000;
}



/* Entry: 106b8fb5c; end: 106b8fb6b; -[SCUnauthenticatedStyleHelperDefault defaultSeparatorColor] */

void FUN_106b8fb5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x81);
  return;
}



/* Entry: 106b8fb6c; end: 106b8fb77; -[SCUnauthenticatedStyleHelperDefault loadingIndicatorSize] */

undefined1  [16] FUN_106b8fb6c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x402e000000000000;
  auVar1._0_8_ = 0x402e000000000000;
  return auVar1;
}



/* Entry: 106b8fb78; end: 106b8fbc3; -[SCUnauthenticatedStyleHelperDefault leftButtonImageForState:] */

void FUN_106b8fb78(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e76a98;
  }
  else {
    if (param_3 != 1) goto _objc_autoreleaseReturnValue;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e76ab8;
  }
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8fbc4; end: 106b8fbd3; -[SCUnauthenticatedStyleHelperDefault defaultBorderColor] */

void FUN_106b8fbc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x88);
  return;
}



/* Entry: 106b8fbd4; end: 106b8fc4b; -[SCUnauthenticatedStyleHelperDefault defaultUnderlineWidth] */

double FUN_106b8fbd4(double param_1,int param_2)

{
  undefined *puVar1;
  double dVar2;
  
  func_0x00010be43c80();
  if (param_2 == 0) {
    dVar2 = 44.0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    _objc_release(puVar1);
    dVar2 = (param_1 + -105.0 + -30.0) / 6.0;
  }
  return dVar2;
}



/* Entry: 106b8fc4c; end: 106b8fcd3; -[SCUnauthenticatedStyleHelperDefault defaultUnderlineHorizontalInset] */

double FUN_106b8fc4c(double param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  
  uVar1 = param_2;
  func_0x00010be43c80();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    dVar3 = param_1;
    func_0x00010bf6a920(param_2);
    dVar3 = (param_1 + dVar3 * -6.0 + -30.0) * 0.5;
    _objc_release(puVar2);
  }
  else {
    dVar3 = 52.5;
  }
  return dVar3;
}



/* Entry: 106b8fcd4; end: 106b8fcdb; -[SCUnauthenticatedStyleHelperDefault defaultPrivatePolicyLabelTopPadding] */

undefined8 FUN_106b8fcd4(void)

{
  return 0x4034000000000000;
}



/* Entry: 106b8fcdc; end: 106b8fd07; -[SCUnauthenticatedStyleHelperDefault defaultPrivatePolicyLabelBottomPadding] */

undefined8 FUN_106b8fcdc(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010be43c60();
  uVar1 = 0x405a555555555555;
  if (param_1 == 0) {
    uVar1 = 0x4063c00000000000;
  }
  return uVar1;
}



/* Entry: 106b8fd08; end: 106b8fd0f; -[SCUnauthenticatedStyleHelperDefault defaultGiraffeToTitleLabelOffset] */

undefined8 FUN_106b8fd08(void)

{
  return 0xc038000000000000;
}



/* Entry: 106b8fd10; end: 106b8fd5f; -[SCUnauthenticatedStyleHelperDefault defaultSplashPageUpdateLoginBottomPadding] */

undefined8 FUN_106b8fd10(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  func_0x00010be42fa0();
  if ((param_1 & 1) == 0) {
    func_0x00010be415c0();
    uVar2 = 0x4072c00000000000;
    if (iVar1 == 0) {
      uVar2 = 0x406b800000000000;
    }
  }
  else {
    uVar2 = 0x4074a00000000000;
  }
  return uVar2;
}



/* Entry: 106b8fd60; end: 106b8fd6b; -[SCUnauthenticatedStyleHelperDefault defaultSplashPageUpdatePrivacyLeftPadding] */

undefined8 FUN_106b8fd60(void)

{
  return 0x4045000000000000;
}



/* Entry: 106b8fd6c; end: 106b8fd77; -[SCUnauthenticatedStyleHelperDefault defaultSplashPageUpdatePrivacyBottomPadding] */

undefined8 FUN_106b8fd6c(void)

{
  return 0x4042000000000000;
}



/* Entry: 106b8fd78; end: 106b8fdc3; -[SCUnauthenticatedStyleHelperDefault _screenWidth] */

undefined8 FUN_106b8fd78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  return param_3;
}



/* Entry: 106b8fdc4; end: 106b8fe0f; -[SCUnauthenticatedStyleHelperDefault _screenHeight] */

undefined8 FUN_106b8fdc4(void)

{
  undefined *puVar1;
  undefined8 in_d3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  return in_d3;
}



/* Entry: 106b8fe10; end: 106b8fe33; -[SCUnauthenticatedStyleHelperDefault _isSmallWidthScreen] */

bool FUN_106b8fe10(double param_1)

{
  func_0x00010be9bcc0();
  return param_1 <= 320.0;
}



/* Entry: 106b8fe34; end: 106b8fe57; -[SCUnauthenticatedStyleHelperDefault _isLargeWidthScreen] */

bool FUN_106b8fe34(double param_1)

{
  func_0x00010be9bcc0();
  return 414.0 <= param_1;
}



/* Entry: 106b8fe58; end: 106b8fe8f; -[SCUnauthenticatedStyleHelperDefault _isMediumWidthScreen] */

uint FUN_106b8fe58(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010be43c80();
  if ((uVar2 & 1) == 0) {
    func_0x00010be415e0(param_1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106b8fe90; end: 106b8feb3; -[SCUnauthenticatedStyleHelperDefault _isSmallHeightScreen] */

bool FUN_106b8fe90(double param_1)

{
  func_0x00010be9bc60();
  return param_1 <= 568.0;
}



/* Entry: 106b8feb4; end: 106b8fed7; -[SCUnauthenticatedStyleHelperDefault _isLargeHeightScreen] */

bool FUN_106b8feb4(double param_1)

{
  func_0x00010be9bc60();
  return 736.0 <= param_1;
}



/* Entry: 106b8fed8; end: 106b8fefb; -[SCUnauthenticatedStyleHelperDefault _isProMaxHeightScreen] */

bool FUN_106b8fed8(double param_1)

{
  func_0x00010be9bc60();
  return 932.0 <= param_1;
}



/* Entry: 106b8fefc; end: 106b8ff33; -[SCUnauthenticatedStyleHelperDefault _isMediumHeightScreen] */

uint FUN_106b8fefc(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010be43c60();
  if ((uVar2 & 1) == 0) {
    func_0x00010be415c0(param_1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106b8ff34; end: 106b8ffa7; -[SCAuthenticatedPasswordNetworkServices initWithPasswordNetworkRequester:] */

undefined1 * FUN_106b8ff34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f54e8;
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



/* Entry: 106b8ffa8; end: 106b8ffaf; -[SCAuthenticatedPasswordNetworkServices passwordNetworkRequester] */

undefined8 FUN_106b8ffa8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b8ffb0; end: 106b8ffdf; -[SCAuthenticatedPasswordNetworkServices setPasswordNetworkRequester:] */

void FUN_106b8ffb0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106b8ffe0; end: 106b8ffeb; -[SCAuthenticatedPasswordNetworkServices .cxx_destruct] */

void FUN_106b8ffe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b8ffec; end: 106b9003b;  */

undefined8 FUN_106b8ffec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  if ((param_1 == 0) ||
     (lVar1 = param_1,
     func_0x00010bf32ee0(param_1,param_2,&PTR____CFConstantStringClassReference_110dafdb8),
     lVar1 != 0)) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0xe;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106b9003c; end: 106b9030f;  */

void FUN_106b9003c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010bffabc0();
  puVar2 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_opt_new(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
  uVar3 = param_1;
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110e76ad8,0xffffffff,0)
  ;
  _objc_release(param_1);
  if ((int)uVar3 == -1) {
    func_0x00010c2278a0(puVar2,param_2,0x76c);
    func_0x00010c1c8fc0(puVar2,param_2,1);
    func_0x00010c189d40(puVar2,param_2,1);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf44340(puVar1,param_2,4,puVar4);
    puVar6 = puVar1;
    func_0x00010bf44340(puVar1,param_2,8,puVar4);
    puVar7 = puVar1;
    func_0x00010bf44340(puVar1,param_2,0x10,puVar4);
    func_0x00010c2278a0(puVar2,param_2,(long)puVar5 - (long)(int)uVar3);
    func_0x00010c1c8fc0(puVar2,param_2,puVar6);
    func_0x00010c189d40(puVar2,param_2,puVar7);
    _objc_release(puVar4);
  }
  puVar4 = puVar1;
  func_0x00010bf650e0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b90310; end: 106b90537;  */

undefined * FUN_106b90310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x00010c067fc0(param_1);
  _objc_release(param_1);
  func_0x00010c189d40(puVar1);
  func_0x00010c067fc0(param_2);
  _objc_release(param_2);
  func_0x00010c1c8fc0(puVar1);
  func_0x00010c067fc0(param_3);
  _objc_release(param_3);
  func_0x00010c2278a0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf27bc0(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c082ca0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 106b90538; end: 106b905fb; -[SCUserPhoneVerificationScope initWithUIContainer:context:delegate:] */

undefined1 *
FUN_106b90538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f54f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b905fc; end: 106b90613; -[SCUserPhoneVerificationScope delegate] */

void FUN_106b905fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b90614; end: 106b9061b; -[SCUserPhoneVerificationScope context] */

undefined8 FUN_106b90614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9061c; end: 106b90623; -[SCUserPhoneVerificationScope uiContainer] */

undefined8 FUN_106b9061c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b90624; end: 106b9065b; -[SCUserPhoneVerificationScope .cxx_destruct] */

void FUN_106b90624(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b9065c; end: 106b906a3; +[SCUserPhoneVerificationContext fromFeedHeaderPrompt] */

void FUN_106b9065c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2860;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b906a4; end: 106b906ef; +[SCUserPhoneVerificationContext fromProfileActivityCard] */

void FUN_106b906a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2860;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b906f0; end: 106b9073b; +[SCUserPhoneVerificationContext fromResetPasswordInSettings] */

void FUN_106b906f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2860;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b9073c; end: 106b9075f; -[SCUserPhoneVerificationContext copyWithZone:] */

undefined8 FUN_106b9073c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b90760; end: 106b90767; -[SCUserPhoneVerificationContext hash] */

undefined8 FUN_106b90760(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b90768; end: 106b907ab; -[SCUserPhoneVerificationContext internalInit] */

void FUN_106b90768(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f54f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b907ac; end: 106b90833; -[SCUserPhoneVerificationContext isEqual:] */

bool FUN_106b907ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106b90834; end: 106b908cf; -[SCUserPhoneVerificationContext matchFromFeedHeaderPrompt:fromProfileActivityCard:fromResetPasswordInSettings:] */

void FUN_106b90834(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = param_5;
  if ((((lVar2 == 2) || (lVar1 = param_4, lVar2 == 1)) || (lVar1 = param_3, lVar2 == 0)) &&
     (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b908d0; end: 106b909b3; -[SCAuraFriendProfileScope initWithPresentingViewController:delegate:friendUserId:operaPresentingBaseView:] */

undefined1 *
FUN_106b908d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f5500;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b909b4; end: 106b909cb; -[SCAuraFriendProfileScope presentingViewController] */

void FUN_106b909b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b909cc; end: 106b909e3; -[SCAuraFriendProfileScope delegate] */

void FUN_106b909cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b909e4; end: 106b909eb; -[SCAuraFriendProfileScope friendUserId] */

undefined8 FUN_106b909e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b909ec; end: 106b90a03; -[SCAuraFriendProfileScope operaPresentingBaseView] */

void FUN_106b909ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b90a04; end: 106b90a3f; -[SCAuraFriendProfileScope .cxx_destruct] */

void FUN_106b90a04(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b90a40; end: 106b90b2b; -[SCAuraMyProfileScope initWithUIContainer:delegate:operaPresentingViewController:operaPresentingBaseView:source:] */

undefined1 *
FUN_106b90a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puStack_48 = PTR_PTR_1126f5508;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b90b2c; end: 106b90b33; -[SCAuraMyProfileScope uiContainer] */

undefined8 FUN_106b90b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b90b34; end: 106b90b4b; -[SCAuraMyProfileScope delegate] */

void FUN_106b90b34(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b90b4c; end: 106b90b63; -[SCAuraMyProfileScope operaPresentingViewController] */

void FUN_106b90b4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b90b64; end: 106b90b7b; -[SCAuraMyProfileScope operaPresentingBaseView] */

void FUN_106b90b64(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b90b7c; end: 106b90b83; -[SCAuraMyProfileScope source] */

undefined8 FUN_106b90b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106b90b84; end: 106b90bbf; -[SCAuraMyProfileScope .cxx_destruct] */

void FUN_106b90b84(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b90bc0; end: 106b90c63; -[SCAuraSettingScope initWithUIContainer:userIntent:delegate:] */

undefined1 *
FUN_106b90bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5510;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b90c64; end: 106b90c6b; -[SCAuraSettingScope uiContainer] */

undefined8 FUN_106b90c64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b90c6c; end: 106b90c83; -[SCAuraSettingScope delegate] */

void FUN_106b90c6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b90c84; end: 106b90c8b; -[SCAuraSettingScope userIntent] */

undefined8 FUN_106b90c84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b90c8c; end: 106b90cb7; -[SCAuraSettingScope .cxx_destruct] */

void FUN_106b90c8c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b90cb8; end: 106b90d83; -[SCAuraServices initWithAuraBirthInfoDataManager:auraDataManager:auraFriendProfileEntryPointObserver:] */

undefined1 *
FUN_106b90cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f5518;
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



/* Entry: 106b90d84; end: 106b90d8b; -[SCAuraServices auraBirthInfoDataManager] */

undefined8 FUN_106b90d84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b90d8c; end: 106b90d93; -[SCAuraServices auraDataManager] */

undefined8 FUN_106b90d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b90d94; end: 106b90d9b; -[SCAuraServices auraFriendProfileEntryPointObserver] */

undefined8 FUN_106b90d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b90d9c; end: 106b90dd7; -[SCAuraServices .cxx_destruct] */

void FUN_106b90d9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b90dd8; end: 106b90de3; +[SCSettingsCancellableTableViewCell reuseIdentifier] */

undefined ** FUN_106b90dd8(void)

{
  return &PTR____CFConstantStringClassReference_110e76b38;
}



/* Entry: 106b90de4; end: 106b90e23; -[SCSettingsCancellableTableViewCell initWithCoder:] */

void FUN_106b90de4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48,
                      &PTR____CFConstantStringClassReference_110e76b58);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106b90e24; end: 106b90e77; -[SCSettingsCancellableTableViewCell initWithStyle:reuseIdentifier:] */

undefined1 * FUN_106b90e24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5520;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beab5e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106b90e78; end: 106b90ecb; -[SCSettingsCancellableTableViewCell init] */

undefined8 FUN_106b90e78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c31f0;
  func_0x00010c13fda0(PTR_PTR_1126c31f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ec80(param_1,param_2,1,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106b90ecc; end: 106b91137; -[SCSettingsCancellableTableViewCell _setupCancelIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106b90ecc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar14 = (long)_DAT_1127594d8;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar14),param_2,4);
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x2f3,0x81);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar14),param_2,puVar2);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  uStack_88 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493c0(0x4034000000000000,lVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  lStack_80 = lVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar13);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar2 + _DAT_1127594d8);
}



/* Entry: 106b91138; end: 106b91147; -[SCSettingsCancellableTableViewCell cancelImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b91138(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127594d8);
}



/* Entry: 106b91148; end: 106b91187; -[SCSettingsCancellableTableViewCell setCancelImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b91148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127594d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b91188; end: 106b9119b; -[SCSettingsCancellableTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b91188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127594d8,0);
  return;
}



/* Entry: 106b9119c; end: 106b911a7; +[SCSettingsClearTableViewCell reuseIdentifier] */

undefined ** FUN_106b9119c(void)

{
  return &PTR____CFConstantStringClassReference_110e76b78;
}



/* Entry: 106b911a8; end: 106b91297; -[SCSettingsClearTableViewCell enableAppThemeSupport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b911a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar5 = (long)_DAT_1127594e0;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf3ab20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


