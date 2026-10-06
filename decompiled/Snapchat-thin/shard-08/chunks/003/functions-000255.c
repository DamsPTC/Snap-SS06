/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060650a0; end: 1060650a7;  */

void FUN_1060650a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1060650a8; end: 106065123;  */

void FUN_1060650a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4fa60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073040();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4fa60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106065124; end: 106065203; -[TwoFAGenericCodeVerificationView keyboardWillHide:] */

void FUN_106065124(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(0xc040800000000000);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106065204; end: 106065243; -[TwoFAGenericCodeVerificationView isOTPCodeType] */

bool FUN_106065204(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c27dd80();
  if (lVar2 == 3) {
    bVar1 = true;
  }
  else {
    func_0x00010c27dd80(param_1);
    bVar1 = param_1 == 1;
  }
  return bVar1;
}



/* Entry: 106065244; end: 106065283; -[TwoFAGenericCodeVerificationView isSMSCodeType] */

bool FUN_106065244(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c27dd80();
  if (lVar2 == 2) {
    bVar1 = true;
  }
  else {
    func_0x00010c27dd80(param_1);
    bVar1 = param_1 == 0;
  }
  return bVar1;
}



/* Entry: 106065284; end: 10606537f; -[TwoFAGenericCodeVerificationView setcontinueButtonTitleForStates:] */

void FUN_106065284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106065380; end: 1060653cf; -[TwoFAGenericCodeVerificationView setErrorMessage:] */

void FUN_106065380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c2982a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ee0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060653d0; end: 10606559b; -[TwoFAGenericCodeVerificationView resetTimerCountdownText] */

void FUN_1060653d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c2706a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s_updateCountdownLabel__11252e978,0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215cc0(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  func_0x00010c1ec760(param_1,param_2,0x3c);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c137de0();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e3acd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215c20(param_1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x0001060788ac();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c270640(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25ce40(puVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c227dc0(param_1,param_2,puVar4);
  func_0x00010c184660(param_1,param_2,0);
  lVar1 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x65);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10606559c; end: 106065907; -[TwoFAGenericCodeVerificationView updateCountdownLabel:] */

void FUN_10606559c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = param_1;
  func_0x00010c137de0();
  func_0x00010c1ec760(param_1,param_2,puVar1 + -1);
  puVar2 = param_1;
  func_0x00010c137de0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((long)puVar2 < 1) {
    puVar1 = param_1;
    func_0x00010c215c20(param_1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    func_0x0001060788ac();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c270640(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c25ce40(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c2982a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar4 < (undefined *)0x6) {
      func_0x00010c227dc0(param_1,param_2,puVar5);
      func_0x00010c184660(param_1,param_2,1);
      puVar1 = param_1;
      func_0x00010bf4fa60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195460();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bf4fa60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    puVar1 = param_1;
    func_0x00010c2706a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar1);
    func_0x00010c215cc0(param_1,param_2,0);
  }
  else {
    func_0x00010c137de0();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3acd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215c20(param_1,param_2,puVar1);
    _objc_release(puVar1);
    func_0x0001060788ac();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c270640(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c25ce40(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c2982a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08fa60();
    if (puVar4 < (undefined *)0x6) {
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    else {
      puVar4 = param_1;
      func_0x00010c2982a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c075400();
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if ((int)puVar3 == 0) goto LAB_1060658ec;
    }
    func_0x00010c227dc0(param_1,param_2,puVar5);
    func_0x00010c184660(param_1,param_2,0);
    puVar1 = param_1;
    func_0x00010bf4fa60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x65);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4fa60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(param_1);
    _objc_release(puVar1);
  }
LAB_1060658ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106065908; end: 106065997; -[TwoFAGenericCodeVerificationView _logUserPhoneVerificationSuccess] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065908(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afb18;
  _objc_opt_new(PTR_PTR_1126afb18);
  func_0x00010c206c40();
  func_0x00010c1a6920(puVar1,param_2,*(undefined1 *)(param_1 + _DAT_11273dd4c));
  func_0x00010c16b460(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11273dd50));
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273dd40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106065998; end: 1060659a7; -[TwoFAGenericCodeVerificationView scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106065998(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd54);
}



/* Entry: 1060659a8; end: 1060659e7; -[TwoFAGenericCodeVerificationView setScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060659a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd54;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060659e8; end: 1060659f7; -[TwoFAGenericCodeVerificationView header] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060659e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd58);
}



/* Entry: 1060659f8; end: 106065a37; -[TwoFAGenericCodeVerificationView setHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060659f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd58;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106065a38; end: 106065a47; -[TwoFAGenericCodeVerificationView infoLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106065a38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd5c);
}



/* Entry: 106065a48; end: 106065a87; -[TwoFAGenericCodeVerificationView setInfoLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065a48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd5c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106065a88; end: 106065a97; -[TwoFAGenericCodeVerificationView verificationCodeField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106065a88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd60);
}



/* Entry: 106065a98; end: 106065ad7; -[TwoFAGenericCodeVerificationView setVerificationCodeField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd60;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106065ad8; end: 106065af7; -[TwoFAGenericCodeVerificationView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065ad8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273dd64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106065af8; end: 106065b0b; -[TwoFAGenericCodeVerificationView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065af8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273dd64,param_3);
  return;
}



/* Entry: 106065b0c; end: 106065b1b; -[TwoFAGenericCodeVerificationView infoText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106065b0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd68);
}



/* Entry: 106065b1c; end: 106065b5b; -[TwoFAGenericCodeVerificationView setInfoText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd68;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106065b5c; end: 106065b6b; -[TwoFAGenericCodeVerificationView type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106065b5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd34);
}



/* Entry: 106065b6c; end: 106065b7b; -[TwoFAGenericCodeVerificationView setType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11273dd34) = param_3;
  return;
}



/* Entry: 106065b7c; end: 106065b8b; -[TwoFAGenericCodeVerificationView continueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106065b7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd6c);
}



/* Entry: 106065b8c; end: 106065bcb; -[TwoFAGenericCodeVerificationView setContinueButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd6c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106065bcc; end: 106065bdb; -[TwoFAGenericCodeVerificationView couldResendCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106065bcc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273dd38);
}



/* Entry: 106065bdc; end: 106065beb; -[TwoFAGenericCodeVerificationView setCouldResendCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065bdc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273dd38) = param_3;
  return;
}



/* Entry: 106065bec; end: 106065bfb; -[TwoFAGenericCodeVerificationView timerForResendCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106065bec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd70);
}



/* Entry: 106065bfc; end: 106065c3b; -[TwoFAGenericCodeVerificationView setTimerForResendCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065bfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd70;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106065c3c; end: 106065c4b; -[TwoFAGenericCodeVerificationView timerCountdownString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106065c3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd74);
}



/* Entry: 106065c4c; end: 106065c8b; -[TwoFAGenericCodeVerificationView setTimerCountdownString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd74;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106065c8c; end: 106065c9b; -[TwoFAGenericCodeVerificationView resendCodeTimeLimit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106065c8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd3c);
}



/* Entry: 106065c9c; end: 106065cab; -[TwoFAGenericCodeVerificationView setResendCodeTimeLimit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11273dd3c) = param_3;
  return;
}



/* Entry: 106065cac; end: 106065d87; -[TwoFAGenericCodeVerificationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106065cac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273dd74,0);
  _objc_storeStrong(param_1 + _DAT_11273dd70,0);
  _objc_storeStrong(param_1 + _DAT_11273dd6c,0);
  _objc_storeStrong(param_1 + _DAT_11273dd68,0);
  _objc_destroyWeak(param_1 + _DAT_11273dd64);
  _objc_storeStrong(param_1 + _DAT_11273dd60,0);
  _objc_storeStrong(param_1 + _DAT_11273dd5c,0);
  _objc_storeStrong(param_1 + _DAT_11273dd58,0);
  _objc_storeStrong(param_1 + _DAT_11273dd54,0);
  _objc_storeStrong(param_1 + _DAT_11273dd48,0);
  _objc_storeStrong(param_1 + _DAT_11273dd44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273dd40,0);
  return;
}



/* Entry: 106065d88; end: 106066127; -[TwoFAManualSetupTPAViewController initWithPageViewName:title:leftSwipeEnabled:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106065d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126ef5d0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273dd78) = param_3;
    puVar2 = puVar1;
    func_0x00010c216240();
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273dd7c) = param_5;
    func_0x000106078a8c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273dd80);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11273dd80) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dd84;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dd88;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dd8c;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dd90;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dd94;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dd98;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dd9c;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dda0;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dda4;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dda8;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273ddac;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273ddb0;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_19;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273ddb4;
    _objc_retain(param_20);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_20;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273ddb8) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273ddbc) = param_7;
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106066128; end: 10606612b; -[TwoFAManualSetupTPAViewController getTitle] */

void FUN_106066128(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_title_112679e90);
  return;
}



/* Entry: 10606612c; end: 10606613b; -[TwoFAManualSetupTPAViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606612c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd78);
}



/* Entry: 10606613c; end: 10606625f; -[TwoFAManualSetupTPAViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606613c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_50;
  puStack_38 = PTR_PTR_1126ef5d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  puStack_48 = PTR_PTR_1126ef5d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_class_1125ac0b8);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfee0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef95e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac660(param_1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c75a8;
  func_0x00010bfbfd00(PTR_PTR_1126c75a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6b60(param_1);
  _objc_release(puVar4);
  func_0x00010c229260(param_1);
  func_0x00010c2290e0(param_1);
  func_0x00010c2287e0(param_1);
  return;
}



/* Entry: 106066260; end: 1060666eb; -[TwoFAManualSetupTPAViewController setupQRCodeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106066260(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  dVar11 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar9,uVar10,dVar11);
  func_0x00010c1e6220(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c11cd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c11cd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c11cd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1060666ec;
  puStack_80 = &UNK_1108471b0;
  lStack_78 = param_1;
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  puStack_a0 = PTR_PTR_1126ef5d0;
  plVar4 = &lStack_a8;
  lStack_a8 = param_1;
  _objc_msgSendSuper2(plVar4,PTR_s_class_1125ac0b8);
  lVar2 = param_1;
  func_0x00010c11cd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000106078ad4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e220(0x402e000000000000,param_1);
  func_0x00010bef9600(plVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6200(param_1);
  _objc_release(plVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(uVar8,uVar9,uVar10);
  func_0x00010c1e61e0(param_1);
  _objc_release(puVar1);
  dVar5 = 210.0;
  func_0x00010c14e220(param_1);
  dVar6 = 18.0;
  func_0x00010c14e220(param_1);
  lVar2 = param_1;
  func_0x00010c11cd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar7 = 15.0;
  func_0x00010c14e220(param_1);
  dVar7 = ((dVar5 + dVar6 * -2.0) - dVar11) - dVar7;
  _objc_release(lVar2);
  dVar5 = 125.0;
  func_0x00010c14e4e0(param_1);
  if (dVar5 <= dVar7) {
    dVar7 = dVar5;
  }
  lVar2 = param_1;
  func_0x00010c11cd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c11cce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c11cce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11273dd88);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_opt_new(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  uVar8 = uVar9;
  func_0x00010c25cda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_1;
  func_0x00010c0ee1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfbfe80(dVar7,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11cce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar9);
  return;
}



/* Entry: 1060666ec; end: 10606692f;  */

void FUN_1060666ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfee0c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e220(0x402e000000000000,*(undefined8 *)(param_1 + 0x20));
  (**(code **)(lVar7 + 0x10))(lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c14e220(0x406a400000000000,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df720(puVar8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106066930; end: 106066b5b;  */

void FUN_106066930(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11cd80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11cd40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e220(0x4032000000000000,*(undefined8 *)(param_1 + 0x20));
  (**(code **)(lVar8 + 0x10))(lVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106066b5c; end: 10606708f; -[TwoFAManualSetupTPAViewController setupPlainCodeView] */

void FUN_106066b5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  func_0x00010c17dd00(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf3efa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar7);
  _objc_release(puVar1);
  uVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf3efa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010bf3efa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106067090;
  puStack_90 = &UNK_1108471b0;
  uStack_88 = param_1;
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  puStack_b0 = PTR_PTR_1126ef5d0;
  puVar3 = &uStack_b8;
  uStack_b8 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_class_1125ac0b8);
  puVar4 = puVar3;
  func_0x000106078abc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf56720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17dc00(param_1);
  _objc_release(puVar3);
  _objc_release(puVar4);
  uVar7 = param_1;
  func_0x00010bf3ece0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010bf3efa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf3ece0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010bf3ece0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
  _objc_alloc(PTR__OBJC_CLASS___UITextView_1126afb88);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  func_0x00010c17dc40(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf3edc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar7);
  _objc_release(puVar1);
  uVar7 = param_1;
  func_0x00010bf3edc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010bf3edc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a00();
  _objc_release(uVar7);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf3edc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar7);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c14d280();
  if ((int)puVar5 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c14d2a0();
    _objc_release(puVar5);
    _objc_release(puVar1);
    uVar7 = 0x4024000000000000;
    if ((int)puVar6 == 0) {
      uVar7 = 0x4028000000000000;
    }
  }
  else {
    _objc_release(puVar1);
    uVar7 = 0x4024000000000000;
  }
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(uVar7,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf3edc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar7);
  _objc_release(puVar1);
  uVar7 = param_1;
  func_0x00010c0ee1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb5920(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf3edc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010bf3efa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf3edc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar7);
  func_0x00010bf3edc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106067090; end: 10606724b;  */

void FUN_106067090(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11cd80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e220(0x402e000000000000,*(undefined8 *)(param_1 + 0x20));
  (**(code **)(lVar7 + 0x10))(lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10606724c; end: 1060677e3;  */

void FUN_10606724c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3efa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bc020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e220(0x402e000000000000,*(undefined8 *)(param_1 + 0x20));
  (**(code **)(lVar7 + 0x10))(lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3efa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbec0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11cd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbfa0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060677e4; end: 106067c63; -[TwoFAManualSetupTPAViewController setupContinueButton] */

void FUN_1060677e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c75a8;
  func_0x00010bfc3280(PTR_PTR_1126c75a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1837a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x0001060784a4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c09e940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106067c64; end: 106067d7b; -[TwoFAManualSetupTPAViewController generateQRCodeImage:withImageWidth:] */

void FUN_106067c64(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_80 [48];
  
  func_0x00010bf64920(param_7,param_6,5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___CIFilter_1126c7620;
  func_0x00010bfae980(PTR__OBJC_CLASS___CIFilter_1126c7620,param_6,
                      &PTR____CFConstantStringClassReference_110e3ad18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220();
  puVar2 = puVar1;
  func_0x00010c0eedc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9de20();
  func_0x00010bf9de20(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
  _CGAffineTransformMakeScale(auStack_80,param_1 / param_3,param_1 / param_4);
  puVar4 = puVar2;
  func_0x00010bfe6dc0(puVar2,param_6,auStack_80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa2a0(puVar3,param_6,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106067d7c; end: 106067e9f; -[TwoFAManualSetupTPAViewController formatCode:] */

void FUN_106067d7c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2d98;
  func_0x00010c0d3c80(&PTR____CFConstantStringClassReference_110db2d98);
  uVar2 = param_3;
  func_0x00010c08fa60();
  if (3 < uVar2) {
    lVar6 = 0;
    do {
      func_0x00010bf35920(param_3,param_2,lVar6);
      func_0x00010bf35920(param_3,param_2,lVar6 + 1);
      func_0x00010bf35920(param_3,param_2,lVar6 + 2);
      func_0x00010bf35920(param_3,param_2,lVar6 + 3);
      func_0x00010bf06ba0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e3ad58);
      uVar3 = param_3;
      func_0x00010c08fa60();
      uVar2 = lVar6 + 7;
      lVar6 = lVar6 + 4;
    } while (uVar2 < uVar3);
  }
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar1;
  func_0x00010c25d0a0(ppuVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 106067ea0; end: 106067fdf; -[TwoFAManualSetupTPAViewController continueButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106067ea0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c7628;
  _objc_alloc(PTR_PTR_1126c7628);
  lVar2 = param_1;
  func_0x00010c0ee1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aa00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3ad78,lVar2,
                      *(undefined1 *)(param_1 + _DAT_11273ddb8),
                      *(undefined1 *)(param_1 + _DAT_11273ddbc),
                      *(undefined8 *)(param_1 + _DAT_11273dd84),
                      *(undefined8 *)(param_1 + _DAT_11273dd88),
                      *(undefined8 *)(param_1 + _DAT_11273dd8c),
                      *(undefined8 *)(param_1 + _DAT_11273dd90),
                      *(undefined8 *)(param_1 + _DAT_11273dd94),
                      *(undefined8 *)(param_1 + _DAT_11273dd98),
                      *(undefined8 *)(param_1 + _DAT_11273dd9c),
                      *(undefined8 *)(param_1 + _DAT_11273dda0),
                      *(undefined8 *)(param_1 + _DAT_11273dda4),
                      *(undefined8 *)(param_1 + _DAT_11273dda8),
                      *(undefined8 *)(param_1 + _DAT_11273ddac),
                      *(undefined8 *)(param_1 + _DAT_11273ddb0),
                      *(undefined8 *)(param_1 + _DAT_11273ddb4));
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106067fe0; end: 10606801b; -[TwoFAManualSetupTPAViewController leftButtonPressed] */

void FUN_106067fe0(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10606801c; end: 106068073; -[TwoFAManualSetupTPAViewController scaleWidth:] */

double FUN_10606801c(double param_1,undefined8 param_2,double param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  return (param_1 / 375.0) * param_3;
}



/* Entry: 106068074; end: 1060680cb; -[TwoFAManualSetupTPAViewController scaleHeight:] */

double FUN_106068074(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  return (param_1 / 667.0) * param_4;
}



/* Entry: 1060680cc; end: 1060680d7; -[TwoFAManualSetupTPAViewController defaultProjectNameV3] */

void FUN_1060680cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 1060680d8; end: 1060680e3; -[TwoFAManualSetupTPAViewController defaultProjectNameV2] */

void FUN_1060680d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 1060680e4; end: 1060680f3; -[TwoFAManualSetupTPAViewController leftSwipeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060680e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273dd7c);
}



/* Entry: 1060680f4; end: 106068103; -[TwoFAManualSetupTPAViewController setLeftSwipeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060680f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273dd7c) = param_3;
  return;
}



/* Entry: 106068104; end: 106068113; -[TwoFAManualSetupTPAViewController infoText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106068104(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd80);
}



/* Entry: 106068114; end: 106068153; -[TwoFAManualSetupTPAViewController setInfoText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106068114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd80;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106068154; end: 106068163; -[TwoFAManualSetupTPAViewController otpSecret] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106068154(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ddc0);
}



/* Entry: 106068164; end: 1060681a3; -[TwoFAManualSetupTPAViewController setOtpSecret:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106068164(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ddc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060681a4; end: 1060681b3; -[TwoFAManualSetupTPAViewController infoTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060681a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ddc4);
}



/* Entry: 1060681b4; end: 1060681f3; -[TwoFAManualSetupTPAViewController setInfoTextLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060681b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ddc4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060681f4; end: 106068203; -[TwoFAManualSetupTPAViewController qrCodeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060681f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ddc8);
}



/* Entry: 106068204; end: 106068243; -[TwoFAManualSetupTPAViewController setQrCodeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106068204(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ddc8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106068244; end: 106068253; -[TwoFAManualSetupTPAViewController qrCodeTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106068244(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ddcc);
}



/* Entry: 106068254; end: 106068293; -[TwoFAManualSetupTPAViewController setQrCodeTextView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106068254(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ddcc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106068294; end: 1060682a3; -[TwoFAManualSetupTPAViewController qrCodeImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106068294(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ddd0);
}



/* Entry: 1060682a4; end: 1060682e3; -[TwoFAManualSetupTPAViewController setQrCodeImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060682a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ddd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060682e4; end: 1060682f3; -[TwoFAManualSetupTPAViewController codeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060682e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ddd4);
}



/* Entry: 1060682f4; end: 106068333; -[TwoFAManualSetupTPAViewController setCodeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060682f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ddd4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106068334; end: 106068343; -[TwoFAManualSetupTPAViewController codeInfoView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106068334(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ddd8);
}



/* Entry: 106068344; end: 106068383; -[TwoFAManualSetupTPAViewController setCodeInfoView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106068344(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ddd8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106068384; end: 106068393; -[TwoFAManualSetupTPAViewController codeTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106068384(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dddc);
}



/* Entry: 106068394; end: 1060683d3; -[TwoFAManualSetupTPAViewController setCodeTextView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106068394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dddc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060683d4; end: 1060683e3; -[TwoFAManualSetupTPAViewController continueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060683d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dde0);
}



/* Entry: 1060683e4; end: 106068423; -[TwoFAManualSetupTPAViewController setContinueButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060683e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dde0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106068424; end: 106068433; -[TwoFAManualSetupTPAViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106068424(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd84);
}



/* Entry: 106068434; end: 106068473; -[TwoFAManualSetupTPAViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106068434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd84;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106068474; end: 106068483; -[TwoFAManualSetupTPAViewController userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106068474(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd88);
}



/* Entry: 106068484; end: 1060684c3; -[TwoFAManualSetupTPAViewController setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106068484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd88;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060684c4; end: 1060684d3; -[TwoFAManualSetupTPAViewController userTwoFAServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060684c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd8c);
}



/* Entry: 1060684d4; end: 106068513; -[TwoFAManualSetupTPAViewController setUserTwoFAServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060684d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd8c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106068514; end: 106068523; -[TwoFAManualSetupTPAViewController reauthenticationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106068514(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd90);
}



/* Entry: 106068524; end: 106068563; -[TwoFAManualSetupTPAViewController setReauthenticationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106068524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106068564; end: 106068573; -[TwoFAManualSetupTPAViewController passwordNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106068564(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd94);
}



/* Entry: 106068574; end: 1060685b3; -[TwoFAManualSetupTPAViewController setPasswordNetworkRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106068574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd94;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060685b4; end: 106068743; -[TwoFAManualSetupTPAViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060685b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273dd94,0);
  _objc_storeStrong(param_1 + _DAT_11273dd90,0);
  _objc_storeStrong(param_1 + _DAT_11273dd8c,0);
  _objc_storeStrong(param_1 + _DAT_11273dd88,0);
  _objc_storeStrong(param_1 + _DAT_11273dd84,0);
  _objc_storeStrong(param_1 + _DAT_11273dde0,0);
  _objc_storeStrong(param_1 + _DAT_11273dddc,0);
  _objc_storeStrong(param_1 + _DAT_11273ddd8,0);
  _objc_storeStrong(param_1 + _DAT_11273ddd4,0);
  _objc_storeStrong(param_1 + _DAT_11273ddd0,0);
  _objc_storeStrong(param_1 + _DAT_11273ddcc,0);
  _objc_storeStrong(param_1 + _DAT_11273ddc8,0);
  _objc_storeStrong(param_1 + _DAT_11273ddc4,0);
  _objc_storeStrong(param_1 + _DAT_11273ddc0,0);
  _objc_storeStrong(param_1 + _DAT_11273dd80,0);
  _objc_storeStrong(param_1 + _DAT_11273ddb4,0);
  _objc_storeStrong(param_1 + _DAT_11273ddb0,0);
  _objc_storeStrong(param_1 + _DAT_11273ddac,0);
  _objc_storeStrong(param_1 + _DAT_11273dda8,0);
  _objc_storeStrong(param_1 + _DAT_11273dda4,0);
  _objc_storeStrong(param_1 + _DAT_11273dda0,0);
  _objc_storeStrong(param_1 + _DAT_11273dd9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273dd98,0);
  return;
}



/* Entry: 106068744; end: 106068ab3; -[TwoFAOtpPromptViewController initWithPageViewName:title:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106068744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126ef5d8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273dde4) = param_3;
    func_0x00010c216240(puVar1);
    lVar3 = (long)_DAT_11273dde8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273ddec;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273ddf0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273ddf4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273ddf8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273ddfc;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de00;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de04;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de08;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de0c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de10;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de14;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de18;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_19;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273de1c) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273de20) = param_6;
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106068ab4; end: 106068b1f; -[TwoFAOtpPromptViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106068ab4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef5d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  func_0x00010bf557a0(param_1);
  func_0x00010bf56c40(param_1);
  func_0x00010bf56760(param_1);
  return;
}



/* Entry: 106068b20; end: 106068f3f; -[TwoFAOtpPromptViewController createLabels] */

void FUN_106068b20(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar3);
  uVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar4);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106068f40;
  puStack_90 = &UNK_1108471b0;
  puVar5 = puVar1;
  uStack_88 = param_5;
  func_0x00010c0bbfc0(puVar1,param_6,&puStack_a8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x0001060787bc();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf56be0(param_5,param_6,puVar5,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2163e0(param_5,param_6,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xc6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(puVar5);
  uVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar4,param_6,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar3;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106069080;
  puStack_c8 = &UNK_110909c90;
  _objc_retain(puVar1);
  puStack_c0 = puVar1;
  uStack_b8 = param_5;
  dStack_b0 = param_3 * 0.10000000149011612;
  func_0x00010c0bbfc0(uVar4,param_6,&puStack_e0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x0001060787a4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010bf56be0(param_5,param_6,uVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c060(param_5,param_6,uVar7);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xc6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf6e520(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(puVar5);
  uVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010bf6e520(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar4,param_6,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010bf6e520(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar3;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1060692a4;
  puStack_100 = &UNK_11084fbb8;
  uStack_f8 = param_5;
  dStack_f0 = param_3;
  uStack_e8 = param_4;
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar4);
  puStack_148 = puVar3;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_106069450;
  puStack_130 = &UNK_11084fc58;
  uStack_128 = param_5;
  puStack_120 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(puVar2,param_6,&puStack_148);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puStack_120);
  _objc_release(puStack_c0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106068f40; end: 10606907f;  */

void FUN_106068f40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106069080; end: 1060692a3;  */

void FUN_106069080(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(-*(double *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060692a4; end: 10606944f;  */

void FUN_1060692a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(*(double *)(param_1 + 0x30) * 0.05000000074505806);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c271420(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106069450; end: 1060695f7;  */

void FUN_106069450(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bc020();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bbf20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060695f8; end: 1060696a3; -[TwoFAOtpPromptViewController createLabelWithText:font:] */

void FUN_1060695f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c212f20();
  _objc_release(param_3);
  func_0x00010c19e480(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c1bdb00(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060696a4; end: 106069abf; -[TwoFAOtpPromptViewController createContinueButton] */

void FUN_1060696a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c75a8;
  func_0x00010bfc3280(PTR_PTR_1126c75a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1837a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010607878c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106069ac0; end: 106069b5b; -[TwoFAOtpPromptViewController createHeaderRightButton] */

void FUN_106069ac0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0620;
  uVar1 = param_1;
  func_0x00010607890c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25c80(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010befbd60(puVar2,param_2,param_1,PTR_s_rightButtonPressed_11262dc80,0x40);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106069b5c; end: 106069b6b; -[TwoFAOtpPromptViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106069b5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dde4);
}



/* Entry: 106069b6c; end: 106069b6f; -[TwoFAOtpPromptViewController getTitle] */

void FUN_106069b6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_title_112679e90);
  return;
}



/* Entry: 106069b70; end: 106069be7; -[TwoFAOtpPromptViewController preferredRightButtonWidth] */

double FUN_106069b70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  double dVar2;
  
  func_0x00010607890c();
  _objc_retainAutoreleasedReturnValue();
  dVar2 = 15.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dce0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  return dVar2 + 15.0 + 15.0;
}


