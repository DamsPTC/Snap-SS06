/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106069be8; end: 106069d3b; -[TwoFAOtpPromptViewController rightButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106069be8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c2280a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c2280a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227e60();
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7630;
  _objc_alloc(PTR_PTR_1126c7630);
  puVar3 = puVar2;
  func_0x0001060789b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0335c0(puVar2,*(undefined8 *)(param_1 + _DAT_11273de10),0x14d,puVar3,0,
                      *(undefined1 *)(param_1 + _DAT_11273de1c),
                      *(undefined1 *)(param_1 + _DAT_11273de20),
                      *(undefined8 *)(param_1 + _DAT_11273dde8),
                      *(undefined8 *)(param_1 + _DAT_11273ddec),
                      *(undefined8 *)(param_1 + _DAT_11273ddf0),
                      *(undefined8 *)(param_1 + _DAT_11273ddf4),
                      *(undefined8 *)(param_1 + _DAT_11273ddf8),
                      *(undefined8 *)(param_1 + _DAT_11273ddfc),
                      *(undefined8 *)(param_1 + _DAT_11273de00),
                      *(undefined8 *)(param_1 + _DAT_11273de04),
                      *(undefined8 *)(param_1 + _DAT_11273de08),
                      *(undefined8 *)(param_1 + _DAT_11273de0c),
                      *(undefined8 *)(param_1 + _DAT_11273de10),
                      *(undefined8 *)(param_1 + _DAT_11273de14),
                      *(undefined8 *)(param_1 + _DAT_11273de18),0);
  func_0x00010c11c520(lVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106069d3c; end: 106069d3f; -[TwoFAOtpPromptViewController continueButtonPressed] */

void FUN_106069d3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10eb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentTwoFASetupOTPView_112621500);
  return;
}



/* Entry: 106069d40; end: 106069d47; -[TwoFAOtpPromptViewController disableLeftSwipe] */

undefined8 FUN_106069d40(void)

{
  return 0;
}



/* Entry: 106069d48; end: 106069e83; -[TwoFAOtpPromptViewController presentTwoFASetupOTPView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106069d48(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c75c8;
  _objc_alloc(PTR_PTR_1126c75c8);
  puVar2 = puVar1;
  func_0x0001060789b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0335a0(puVar1,*(undefined8 *)(param_1 + _DAT_11273de10),0x129,puVar2,1,
                      *(undefined1 *)(param_1 + _DAT_11273de1c),
                      *(undefined1 *)(param_1 + _DAT_11273de20),
                      *(undefined8 *)(param_1 + _DAT_11273dde8),
                      *(undefined8 *)(param_1 + _DAT_11273ddec),
                      *(undefined8 *)(param_1 + _DAT_11273ddf0),
                      *(undefined8 *)(param_1 + _DAT_11273ddf4),
                      *(undefined8 *)(param_1 + _DAT_11273ddf8),
                      *(undefined8 *)(param_1 + _DAT_11273ddfc),
                      *(undefined8 *)(param_1 + _DAT_11273de00),
                      *(undefined8 *)(param_1 + _DAT_11273de04),
                      *(undefined8 *)(param_1 + _DAT_11273de08),
                      *(undefined8 *)(param_1 + _DAT_11273de0c),
                      *(undefined8 *)(param_1 + _DAT_11273de10),
                      *(undefined8 *)(param_1 + _DAT_11273de14),
                      *(undefined8 *)(param_1 + _DAT_11273de18));
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1);
  _objc_release(lVar3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106069e84; end: 106069e8f; -[TwoFAOtpPromptViewController defaultProjectNameV3] */

void FUN_106069e84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106069e90; end: 106069e9b; -[TwoFAOtpPromptViewController defaultProjectNameV2] */

void FUN_106069e90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106069e9c; end: 106069eab; -[TwoFAOtpPromptViewController titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106069e9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273de24);
}



/* Entry: 106069eac; end: 106069eeb; -[TwoFAOtpPromptViewController setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106069eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273de24;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106069eec; end: 106069efb; -[TwoFAOtpPromptViewController descriptionLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106069eec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273de28);
}



/* Entry: 106069efc; end: 106069f3b; -[TwoFAOtpPromptViewController setDescriptionLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106069efc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273de28;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106069f3c; end: 106069f4b; -[TwoFAOtpPromptViewController continueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106069f3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273de2c);
}



/* Entry: 106069f4c; end: 106069f8b; -[TwoFAOtpPromptViewController setContinueButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106069f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273de2c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106069f8c; end: 106069f9b; -[TwoFAOtpPromptViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106069f8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dde8);
}



/* Entry: 106069f9c; end: 106069fdb; -[TwoFAOtpPromptViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106069f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dde8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106069fdc; end: 106069feb; -[TwoFAOtpPromptViewController userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106069fdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ddec);
}



/* Entry: 106069fec; end: 10606a02b; -[TwoFAOtpPromptViewController setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106069fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ddec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606a02c; end: 10606a03b; -[TwoFAOtpPromptViewController userTwoFAServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606a02c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ddf0);
}



/* Entry: 10606a03c; end: 10606a07b; -[TwoFAOtpPromptViewController setUserTwoFAServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606a03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ddf0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606a07c; end: 10606a08b; -[TwoFAOtpPromptViewController reauthenticationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606a07c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ddf4);
}



/* Entry: 10606a08c; end: 10606a0cb; -[TwoFAOtpPromptViewController setReauthenticationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606a08c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ddf4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606a0cc; end: 10606a0db; -[TwoFAOtpPromptViewController passwordNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606a0cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ddf8);
}



/* Entry: 10606a0dc; end: 10606a11b; -[TwoFAOtpPromptViewController setPasswordNetworkRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606a0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ddf8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606a11c; end: 10606a24b; -[TwoFAOtpPromptViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606a11c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ddf8,0);
  _objc_storeStrong(param_1 + _DAT_11273ddf4,0);
  _objc_storeStrong(param_1 + _DAT_11273ddf0,0);
  _objc_storeStrong(param_1 + _DAT_11273ddec,0);
  _objc_storeStrong(param_1 + _DAT_11273dde8,0);
  _objc_storeStrong(param_1 + _DAT_11273de2c,0);
  _objc_storeStrong(param_1 + _DAT_11273de28,0);
  _objc_storeStrong(param_1 + _DAT_11273de24,0);
  _objc_storeStrong(param_1 + _DAT_11273de18,0);
  _objc_storeStrong(param_1 + _DAT_11273de14,0);
  _objc_storeStrong(param_1 + _DAT_11273de30,0);
  _objc_storeStrong(param_1 + _DAT_11273de10,0);
  _objc_storeStrong(param_1 + _DAT_11273de0c,0);
  _objc_storeStrong(param_1 + _DAT_11273de08,0);
  _objc_storeStrong(param_1 + _DAT_11273de04,0);
  _objc_storeStrong(param_1 + _DAT_11273de00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ddfc,0);
  return;
}



/* Entry: 10606a24c; end: 10606a253; -[TwoFAOtpSettingsViewController pageViewName] */

undefined8 FUN_10606a24c(void)

{
  return 0xb9;
}



/* Entry: 10606a254; end: 10606a607; -[TwoFAOtpSettingsViewController initWithSourceFlowName:otpSecret:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10606a254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  _objc_retain(param_3);
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
  uVar2 = param_19;
  _objc_retain(param_19);
  func_0x000106078b1c();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR_PTR_1126ef5e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithInfoText_type_userBlizza_1125e50a0,uVar2,3,param_13,
                      param_18);
  _objc_release(uVar2);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273de34;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de38;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de3c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de40;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de44;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de48;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de4c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de50;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de54;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de58;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de5c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de60;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de64;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de68;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de6c;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_19;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273de70) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273de74) = param_6;
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10606a608; end: 10606a643; -[TwoFAOtpSettingsViewController leftButtonPressed:] */

void FUN_10606a608(undefined8 param_1)

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



/* Entry: 10606a644; end: 10606a83f; -[TwoFAOtpSettingsViewController verifyPressed:successBlock:failureBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606a644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10606a840;
  puStack_90 = &UNK_11085d1a0;
  lStack_88 = param_1;
  uStack_80 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar2 = &puStack_a8;
  _objc_retainBlock();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10606a860;
  puStack_b8 = &UNK_110848438;
  uStack_b0 = param_5;
  _objc_retain(param_5);
  ppuVar3 = &puStack_d0;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273de44);
  func_0x00010c27db60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c2982a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = uVar6;
  func_0x00010c26b700(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273de38);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x10606a86c;
  puStack_e8 = &UNK_110909de0;
  ppuStack_e0 = ppuVar2;
  ppuStack_d8 = ppuVar3;
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar2);
  func_0x00010bf910e0(uVar5,param_2,uVar7,uVar8,&puStack_100);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuStack_d8);
  _objc_release(ppuStack_e0);
  _objc_release(ppuVar3);
  _objc_release(uStack_b0);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10606a840; end: 10606a877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606a840(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273de74) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010606a85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10606a878; end: 10606aaa3; -[TwoFAOtpSettingsViewController verifySucceed:recoveryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606a878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126c7638;
    _objc_alloc(PTR_PTR_1126c7638);
    puVar2 = puVar1;
    func_0x0001060787ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0335e0(puVar1,*(undefined8 *)(param_1 + _DAT_11273de5c),0x127,puVar2,1,0,param_4,
                        *(undefined1 *)(param_1 + _DAT_11273de70),
                        *(undefined1 *)(param_1 + _DAT_11273de74),
                        *(undefined8 *)(param_1 + _DAT_11273de3c),
                        *(undefined8 *)(param_1 + _DAT_11273de40),
                        *(undefined8 *)(param_1 + _DAT_11273de44),
                        *(undefined8 *)(param_1 + _DAT_11273de48),
                        *(undefined8 *)(param_1 + _DAT_11273de4c),
                        *(undefined8 *)(param_1 + _DAT_11273de50),
                        *(undefined8 *)(param_1 + _DAT_11273de54),
                        *(undefined8 *)(param_1 + _DAT_11273de58),
                        *(undefined8 *)(param_1 + _DAT_11273de5c),
                        *(undefined8 *)(param_1 + _DAT_11273de60),
                        *(undefined8 *)(param_1 + _DAT_11273de64),
                        *(undefined8 *)(param_1 + _DAT_11273de68),
                        *(undefined8 *)(param_1 + _DAT_11273de6c));
  }
  else {
    puVar1 = PTR_PTR_1126c7630;
    _objc_alloc(PTR_PTR_1126c7630);
    puVar2 = puVar1;
    func_0x0001060789b4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0335c0(puVar1,*(undefined8 *)(param_1 + _DAT_11273de64),0x14d,puVar2,0,
                        *(undefined1 *)(param_1 + _DAT_11273de70),
                        *(undefined1 *)(param_1 + _DAT_11273de74),
                        *(undefined8 *)(param_1 + _DAT_11273de3c),
                        *(undefined8 *)(param_1 + _DAT_11273de40),
                        *(undefined8 *)(param_1 + _DAT_11273de44),
                        *(undefined8 *)(param_1 + _DAT_11273de48),
                        *(undefined8 *)(param_1 + _DAT_11273de4c),
                        *(undefined8 *)(param_1 + _DAT_11273de50),
                        *(undefined8 *)(param_1 + _DAT_11273de54),
                        *(undefined8 *)(param_1 + _DAT_11273de58),
                        *(undefined8 *)(param_1 + _DAT_11273de5c),
                        *(undefined8 *)(param_1 + _DAT_11273de60),
                        *(undefined8 *)(param_1 + _DAT_11273de64),
                        *(undefined8 *)(param_1 + _DAT_11273de68),
                        *(undefined8 *)(param_1 + _DAT_11273de6c),0);
  }
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1);
  _objc_release(lVar3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10606aaa4; end: 10606aac3; -[TwoFAOtpSettingsViewController settingsDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606aaa4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273de78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10606aac4; end: 10606aad7; -[TwoFAOtpSettingsViewController setSettingsDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606aac4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273de78,param_3);
  return;
}



/* Entry: 10606aad8; end: 10606abf3; -[TwoFAOtpSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606aad8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273de78);
  _objc_storeStrong(param_1 + _DAT_11273de6c,0);
  _objc_storeStrong(param_1 + _DAT_11273de68,0);
  _objc_storeStrong(param_1 + _DAT_11273de64,0);
  _objc_storeStrong(param_1 + _DAT_11273de60,0);
  _objc_storeStrong(param_1 + _DAT_11273de5c,0);
  _objc_storeStrong(param_1 + _DAT_11273de58,0);
  _objc_storeStrong(param_1 + _DAT_11273de54,0);
  _objc_storeStrong(param_1 + _DAT_11273de50,0);
  _objc_storeStrong(param_1 + _DAT_11273de4c,0);
  _objc_storeStrong(param_1 + _DAT_11273de48,0);
  _objc_storeStrong(param_1 + _DAT_11273de44,0);
  _objc_storeStrong(param_1 + _DAT_11273de40,0);
  _objc_storeStrong(param_1 + _DAT_11273de3c,0);
  _objc_storeStrong(param_1 + _DAT_11273de38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273de34,0);
  return;
}



/* Entry: 10606abf4; end: 10606afb3; -[TwoFARecoveryCodeGeneratedViewController initWithPageViewName:title:showNext:showBack:recoveryCode:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10606abf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
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
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126ef5e8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273de7c) = param_3;
    func_0x00010c216240(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273de80) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273de84) = param_6;
    lVar3 = (long)_DAT_11273de88;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de8c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de90;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de94;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de98;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273de9c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dea0;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dea4;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dea8;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273deac;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_19;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273deb0;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_20;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273deb4;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_21;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273deb8;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_22;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273debc;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_23;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273dec0) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273dec4) = param_9;
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
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
  _objc_release(param_7);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10606afb4; end: 10606b06b; -[TwoFARecoveryCodeGeneratedViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606afb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ef5e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  func_0x00010bf54de0(param_1);
  uVar1 = param_1;
  func_0x00010c238aa0();
  if ((int)uVar1 != 0) {
    func_0x00010bf56760(param_1);
  }
  func_0x00010c235fe0(param_1);
  uVar1 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188560();
  _objc_release(uVar1);
  func_0x00010bf56c40(param_1);
  func_0x00010c237a60(param_1);
  return;
}



/* Entry: 10606b06c; end: 10606b5d3; -[TwoFARecoveryCodeGeneratedViewController createLabels] */

void FUN_10606b06c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  double dStack_138;
  double dStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  double dStack_100;
  double dStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  param_4 = param_4 * 0.05000000074505806;
  param_3 = param_3 * 0.10000000149011612;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10606b5d4;
  puStack_98 = &UNK_1108471b0;
  puVar4 = puVar2;
  uStack_90 = param_5;
  func_0x00010c0bbfc0(puVar2,param_6,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000106078894();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bf56be0(param_5,param_6,puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2163e0(param_5,param_6,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xc6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar3);
  _objc_release(puVar4);
  uVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_6,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c271420(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10606b714;
  puStack_d8 = &UNK_110909e10;
  _objc_retain(puVar2);
  puStack_d0 = puVar2;
  uStack_c8 = param_5;
  dStack_c0 = param_4;
  dStack_b8 = param_3;
  func_0x00010c0bbfc0(uVar3,param_6,&puStack_f0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c1242e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x403c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bf56be0(param_5,param_6,uVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e90e0(param_5,param_6,uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xc6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c124300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar3);
  _objc_release(puVar4);
  uVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010c124300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_6,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c124300(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_10606b988;
  puStack_110 = &UNK_11084fbb8;
  uStack_108 = param_5;
  dStack_100 = param_4;
  dStack_f8 = param_3;
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010607881c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bf56be0(param_5,param_6,uVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac4a0(param_5,param_6,uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xbf);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bfedd60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar3);
  _objc_release(puVar4);
  uVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bfedd60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_6,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010bfedd60();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x10606bc1c;
  puStack_148 = &UNK_11084fbb8;
  uStack_140 = param_5;
  dStack_138 = param_4;
  dStack_130 = param_3;
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar3 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_10606beb0;
  puStack_178 = &UNK_11084fc58;
  uStack_170 = param_5;
  puStack_168 = puVar2;
  _objc_retain(puVar2);
  func_0x00010c0bbfc0(puVar4,param_6,&puStack_190);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puStack_168);
  _objc_release(puVar4);
  _objc_release(puStack_d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10606b5d4; end: 10606b713;  */

void FUN_10606b5d4(long param_1,long param_2)

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



/* Entry: 10606b714; end: 10606b987;  */

void FUN_10606b714(long param_1,long param_2)

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
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(param_1 + 0x38));
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
  (**(code **)(lVar6 + 0x10))(-*(double *)(param_1 + 0x38));
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



/* Entry: 10606b988; end: 10606beaf;  */

void FUN_10606b988(long param_1,long param_2)

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
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(param_1 + 0x28));
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
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar7);
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
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar7);
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
  (**(code **)(lVar6 + 0x10))(-*(double *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10606beb0; end: 10606c0d7;  */

void FUN_10606beb0(long param_1,long param_2)

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
  func_0x00010bfedd60(uVar3);
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
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c151880(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0bc020();
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
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bbf20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10606c0d8; end: 10606c183; -[TwoFARecoveryCodeGeneratedViewController createLabelWithText:font:] */

void FUN_10606c0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 10606c184; end: 10606c3af; -[TwoFARecoveryCodeGeneratedViewController createButtons] */

void FUN_10606c184(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010607887c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf54dc0(param_1,param_2,uVar2,PTR_s_screenshotButtonPressed_112632048);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7820(param_1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x0001060784bc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf54dc0(param_1,param_2,uVar2,PTR_s_clipboardButtonPressed_11252e988);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d460(param_1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf3d860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf3d860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c151880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c151880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 10606c3b0; end: 10606c4fb;  */

void FUN_10606c3b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc040800000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10606c4fc; end: 10606c67f;  */

void FUN_10606c4fc(long param_1,long param_2)

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
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3d860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0bc020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0xc040800000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10606c680; end: 10606c80b; -[TwoFARecoveryCodeGeneratedViewController createButtonWithTitle:action:] */

void FUN_10606c680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c75a8;
  func_0x00010bfc3280(PTR_PTR_1126c75a8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain(param_3);
  func_0x00010bf6d680(0x4031000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c216260(puVar1,param_2,param_3,0);
  func_0x00010c216260(puVar1,param_2,param_3,2);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010befbd60(puVar1,param_2,param_1,param_4,0x40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10606c80c; end: 10606c8a7; -[TwoFARecoveryCodeGeneratedViewController createHeaderRightButton] */

void FUN_10606c80c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0620;
  uVar1 = param_1;
  func_0x00010607872c();
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



/* Entry: 10606c8a8; end: 10606c8b7; -[TwoFARecoveryCodeGeneratedViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606c8a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273de7c);
}



/* Entry: 10606c8b8; end: 10606c8bb; -[TwoFARecoveryCodeGeneratedViewController getTitle] */

void FUN_10606c8b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_title_112679e90);
  return;
}



/* Entry: 10606c8bc; end: 10606c933; -[TwoFARecoveryCodeGeneratedViewController preferredRightButtonWidth] */

double FUN_10606c8bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  double dVar2;
  
  func_0x00010607872c();
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



/* Entry: 10606c934; end: 10606caaf; -[TwoFARecoveryCodeGeneratedViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606c934(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_retain(puVar2);
  puVar1 = puVar2;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar2);
      }
      puVar8 = *(undefined **)((long)puVar10 * 8);
      _objc_opt_class();
      puVar3 = PTR_PTR_1126c7630;
      _objc_opt_class();
      if (puVar8 == puVar3) {
        puVar3 = param_1;
        func_0x00010c0d66a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1039c0();
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar1 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_11273de94;
  uVar4 = *(ulong *)(puVar2 + lVar9);
  func_0x00010c27db80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf60280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar1 = puVar2;
  func_0x00010c235fe0();
  if ((((ulong)puVar1 & 1) == 0) && (uVar5 = uVar6, func_0x00010c07e5a0(), (uVar5 & 1) == 0)) {
    puVar1 = PTR_PTR_1126c7640;
    _objc_alloc(PTR_PTR_1126c7640);
    puVar10 = puVar1;
    func_0x000106078984();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033620(puVar1);
  }
  else {
    puVar1 = puVar2;
    func_0x00010c235fe0();
    if ((((ulong)puVar1 & 1) == 0) && (uVar5 = uVar6, func_0x00010c079620(), (uVar5 & 1) == 0)) {
      puVar1 = PTR_PTR_1126c7648;
      _objc_alloc(PTR_PTR_1126c7648);
      puVar10 = puVar1;
      func_0x0001060789b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c033620(puVar1);
      _objc_release(puVar10);
      puVar10 = puVar2;
      func_0x00010c2280a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe4c0(puVar1);
    }
    else {
      puVar1 = PTR_PTR_1126c7630;
      _objc_alloc(PTR_PTR_1126c7630);
      puVar10 = puVar1;
      func_0x0001060789b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0335c0(puVar1,*(undefined8 *)(puVar2 + _DAT_11273deb8),0x14d,puVar10,0,
                          puVar2[_DAT_11273dec0],puVar2[_DAT_11273dec4],
                          *(undefined8 *)(puVar2 + _DAT_11273de8c),
                          *(undefined8 *)(puVar2 + _DAT_11273de90),*(undefined8 *)(puVar2 + lVar9),
                          *(undefined8 *)(puVar2 + _DAT_11273de98),
                          *(undefined8 *)(puVar2 + _DAT_11273de9c),
                          *(undefined8 *)(puVar2 + _DAT_11273dea0),
                          *(undefined8 *)(puVar2 + _DAT_11273dea4),
                          *(undefined8 *)(puVar2 + _DAT_11273dea8),
                          *(undefined8 *)(puVar2 + _DAT_11273deac),
                          *(undefined8 *)(puVar2 + _DAT_11273deb0),
                          *(undefined8 *)(puVar2 + _DAT_11273deb4),
                          *(undefined8 *)(puVar2 + _DAT_11273deb8),
                          *(undefined8 *)(puVar2 + _DAT_11273debc),0);
    }
  }
  _objc_release(puVar10);
  puVar10 = puVar2;
  func_0x00010c2280a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1);
  _objc_release(puVar10);
  func_0x00010c0d66a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10606cab0; end: 10606cdfb; -[TwoFARecoveryCodeGeneratedViewController rightButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606cab0(undefined *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11273de94;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c27db80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = param_1;
  func_0x00010c235fe0();
  if ((((ulong)puVar4 & 1) == 0) && (uVar2 = uVar3, func_0x00010c07e5a0(), (uVar2 & 1) == 0)) {
    puVar4 = PTR_PTR_1126c7640;
    _objc_alloc(PTR_PTR_1126c7640);
    puVar5 = puVar4;
    func_0x000106078984();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033620(puVar4);
  }
  else {
    puVar4 = param_1;
    func_0x00010c235fe0();
    if ((((ulong)puVar4 & 1) == 0) && (uVar2 = uVar3, func_0x00010c079620(), (uVar2 & 1) == 0)) {
      puVar4 = PTR_PTR_1126c7648;
      _objc_alloc(PTR_PTR_1126c7648);
      puVar5 = puVar4;
      func_0x0001060789b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c033620(puVar4);
      _objc_release(puVar5);
      puVar5 = param_1;
      func_0x00010c2280a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe4c0(puVar4);
    }
    else {
      puVar4 = PTR_PTR_1126c7630;
      _objc_alloc(PTR_PTR_1126c7630);
      puVar5 = puVar4;
      func_0x0001060789b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0335c0(puVar4,*(undefined8 *)(param_1 + _DAT_11273deb8),0x14d,puVar5,0,
                          param_1[_DAT_11273dec0],param_1[_DAT_11273dec4],
                          *(undefined8 *)(param_1 + _DAT_11273de8c),
                          *(undefined8 *)(param_1 + _DAT_11273de90),*(undefined8 *)(param_1 + lVar6)
                          ,*(undefined8 *)(param_1 + _DAT_11273de98),
                          *(undefined8 *)(param_1 + _DAT_11273de9c),
                          *(undefined8 *)(param_1 + _DAT_11273dea0),
                          *(undefined8 *)(param_1 + _DAT_11273dea4),
                          *(undefined8 *)(param_1 + _DAT_11273dea8),
                          *(undefined8 *)(param_1 + _DAT_11273deac),
                          *(undefined8 *)(param_1 + _DAT_11273deb0),
                          *(undefined8 *)(param_1 + _DAT_11273deb4),
                          *(undefined8 *)(param_1 + _DAT_11273deb8),
                          *(undefined8 *)(param_1 + _DAT_11273debc),0);
    }
  }
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar4);
  _objc_release(puVar5);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10606cdfc; end: 10606cef7; -[TwoFARecoveryCodeGeneratedViewController screenshotButtonPressed] */

void FUN_10606cdfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _UIGraphicsBeginImageContext(param_3,param_4);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsGetCurrentContext();
  func_0x00010c12fc60(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _UIGraphicsEndImageContext();
  func_0x000106078444();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2381e0(param_5);
  _objc_release(uVar2);
  _UIImageWriteToSavedPhotosAlbum(uVar1,0,0,0);
  func_0x00010c0f8f40(0x3fd999999999999a,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606cef8; end: 10606cf9f; -[TwoFARecoveryCodeGeneratedViewController clipboardButtonPressed] */

void FUN_10606cef8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010607842c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2381e0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1242e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c0f8f40(0x3fd999999999999a,param_1,param_2,PTR_s_hideLoadingScreen_1125d6260,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10606cfa0; end: 10606d1bb; -[TwoFARecoveryCodeGeneratedViewController showGenerateRecoveryCodeSuccessConfirmation] */

void FUN_10606cfa0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_70,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10606d1bc;
  puStack_80 = &UNK_110848a18;
  _objc_copyWeak(auStack_78,auStack_70);
  ppuVar1 = &puStack_98;
  _objc_retainBlock(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar2 = ppuVar1;
  func_0x00010607875c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126af180;
  func_0x00010607845c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar5 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000106078894();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000106078804();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar3;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_78);
  puVar9 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  puVar9 = puVar9 + 0x20;
  _objc_loadWeakRetained();
  if (puVar9 != (undefined1 *)0x0) {
    func_0x00010c1518a0(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 10606d1bc; end: 10606d1ef;  */

void FUN_10606d1bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1518a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10606d1f0; end: 10606d1f7; -[TwoFARecoveryCodeGeneratedViewController disableLeftSwipe] */

undefined8 FUN_10606d1f0(void)

{
  return 1;
}



/* Entry: 10606d1f8; end: 10606d40b; -[TwoFARecoveryCodeGeneratedViewController showLoadingScreenWithLabelText:] */

void FUN_10606d1f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c09d2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126c75f0;
    _objc_alloc_init(PTR_PTR_1126c75f0);
    func_0x00010c1beea0(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  lVar1 = param_1;
  func_0x00010c09d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b72a0();
  _objc_release(param_3);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c09d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c09d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010c09d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 10606d40c; end: 10606d43b; -[TwoFARecoveryCodeGeneratedViewController hideLoadingScreen] */

void FUN_10606d40c(undefined8 param_1)

{
  func_0x00010c09d2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10606d43c; end: 10606d447; -[TwoFARecoveryCodeGeneratedViewController defaultProjectNameV3] */

void FUN_10606d43c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 10606d448; end: 10606d453; -[TwoFARecoveryCodeGeneratedViewController defaultProjectNameV2] */

void FUN_10606d448(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 10606d454; end: 10606d463; -[TwoFARecoveryCodeGeneratedViewController titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d454(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dec8);
}



/* Entry: 10606d464; end: 10606d4a3; -[TwoFARecoveryCodeGeneratedViewController setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dec8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d4a4; end: 10606d4b3; -[TwoFARecoveryCodeGeneratedViewController recoveryCodeLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d4a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273decc);
}



/* Entry: 10606d4b4; end: 10606d4f3; -[TwoFARecoveryCodeGeneratedViewController setRecoveryCodeLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273decc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d4f4; end: 10606d503; -[TwoFARecoveryCodeGeneratedViewController infoLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d4f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ded0);
}



/* Entry: 10606d504; end: 10606d543; -[TwoFARecoveryCodeGeneratedViewController setInfoLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ded0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d544; end: 10606d553; -[TwoFARecoveryCodeGeneratedViewController screenshotButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d544(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ded4);
}



/* Entry: 10606d554; end: 10606d593; -[TwoFARecoveryCodeGeneratedViewController setScreenshotButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ded4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d594; end: 10606d5a3; -[TwoFARecoveryCodeGeneratedViewController clipboardButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d594(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ded8);
}



/* Entry: 10606d5a4; end: 10606d5e3; -[TwoFARecoveryCodeGeneratedViewController setClipboardButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ded8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d5e4; end: 10606d5f3; -[TwoFARecoveryCodeGeneratedViewController showNext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10606d5e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273de80);
}



/* Entry: 10606d5f4; end: 10606d603; -[TwoFARecoveryCodeGeneratedViewController setShowNext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d5f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273de80) = param_3;
  return;
}



/* Entry: 10606d604; end: 10606d613; -[TwoFARecoveryCodeGeneratedViewController showBack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10606d604(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273de84);
}



/* Entry: 10606d614; end: 10606d623; -[TwoFARecoveryCodeGeneratedViewController setShowBack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d614(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273de84) = param_3;
  return;
}



/* Entry: 10606d624; end: 10606d633; -[TwoFARecoveryCodeGeneratedViewController recoveryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d624(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273de88);
}



/* Entry: 10606d634; end: 10606d673; -[TwoFARecoveryCodeGeneratedViewController setRecoveryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273de88;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d674; end: 10606d683; -[TwoFARecoveryCodeGeneratedViewController loadingScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d674(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dedc);
}



/* Entry: 10606d684; end: 10606d6c3; -[TwoFARecoveryCodeGeneratedViewController setLoadingScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d684(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dedc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d6c4; end: 10606d6d3; -[TwoFARecoveryCodeGeneratedViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d6c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273de8c);
}



/* Entry: 10606d6d4; end: 10606d713; -[TwoFARecoveryCodeGeneratedViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d6d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273de8c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d714; end: 10606d723; -[TwoFARecoveryCodeGeneratedViewController userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d714(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273de90);
}



/* Entry: 10606d724; end: 10606d763; -[TwoFARecoveryCodeGeneratedViewController setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273de90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d764; end: 10606d773; -[TwoFARecoveryCodeGeneratedViewController userTwoFAServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d764(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273de94);
}



/* Entry: 10606d774; end: 10606d7b3; -[TwoFARecoveryCodeGeneratedViewController setUserTwoFAServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d774(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273de94;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d7b4; end: 10606d7c3; -[TwoFARecoveryCodeGeneratedViewController reauthenticationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d7b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273de98);
}



/* Entry: 10606d7c4; end: 10606d803; -[TwoFARecoveryCodeGeneratedViewController setReauthenticationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d7c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273de98;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d804; end: 10606d813; -[TwoFARecoveryCodeGeneratedViewController passwordNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606d804(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273de9c);
}



/* Entry: 10606d814; end: 10606d853; -[TwoFARecoveryCodeGeneratedViewController setPasswordNetworkRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273de9c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606d854; end: 10606d9c3; -[TwoFARecoveryCodeGeneratedViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606d854(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273de9c,0);
  _objc_storeStrong(param_1 + _DAT_11273de98,0);
  _objc_storeStrong(param_1 + _DAT_11273de94,0);
  _objc_storeStrong(param_1 + _DAT_11273de90,0);
  _objc_storeStrong(param_1 + _DAT_11273de8c,0);
  _objc_storeStrong(param_1 + _DAT_11273dedc,0);
  _objc_storeStrong(param_1 + _DAT_11273de88,0);
  _objc_storeStrong(param_1 + _DAT_11273ded8,0);
  _objc_storeStrong(param_1 + _DAT_11273ded4,0);
  _objc_storeStrong(param_1 + _DAT_11273ded0,0);
  _objc_storeStrong(param_1 + _DAT_11273decc,0);
  _objc_storeStrong(param_1 + _DAT_11273dec8,0);
  _objc_storeStrong(param_1 + _DAT_11273debc,0);
  _objc_storeStrong(param_1 + _DAT_11273deb8,0);
  _objc_storeStrong(param_1 + _DAT_11273dee0,0);
  _objc_storeStrong(param_1 + _DAT_11273deb4,0);
  _objc_storeStrong(param_1 + _DAT_11273deb0,0);
  _objc_storeStrong(param_1 + _DAT_11273deac,0);
  _objc_storeStrong(param_1 + _DAT_11273dea8,0);
  _objc_storeStrong(param_1 + _DAT_11273dea4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273dea0,0);
  return;
}



/* Entry: 10606d9c4; end: 10606ddcf; -[TwoFARecoveryCodeViewController initWithPageViewName:title:showSkip:showBack:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10606d9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
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
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126ef5f0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273dee4) = param_3;
    func_0x00010c216240(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273dee8) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273deec) = param_6;
    lVar6 = (long)_DAT_11273def0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11273def4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11273def8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273defc;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_12;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11273df00;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_13;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c27db80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf60280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126c75a8;
    func_0x00010c07e5a0(uVar4);
    func_0x00010c079620(uVar4);
    func_0x00010bfc9720();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273df04);
    *(undefined **)((long)puVar1 + (long)_DAT_11273df04) = puVar5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11273df08;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_14;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11273df0c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_15;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11273df10;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_16;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11273df14;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_17;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11273df18;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_18;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11273df1c;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_19;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11273df20;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_20;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11273df24;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_21;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273df28) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273df2c) = param_8;
    _objc_release(uVar4);
  }
  _objc_release(param_21);
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
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10606ddd0; end: 10606dec3; -[TwoFARecoveryCodeViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606ddd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ef5f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  func_0x00010bf557a0(param_1);
  uVar1 = param_1;
  func_0x00010c239fa0();
  if ((int)uVar1 != 0) {
    func_0x00010bf56760(param_1);
  }
  func_0x00010c235fe0(param_1);
  uVar1 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188560();
  _objc_release(uVar1);
  func_0x00010beaac00(param_1);
  func_0x00010bf56bc0(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  return;
}



/* Entry: 10606dec4; end: 10606df5f; -[TwoFARecoveryCodeViewController createLabel] */

void FUN_10606dec4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ef5f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_class_1125ac0b8);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef95e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  return;
}



/* Entry: 10606df60; end: 10606e393; -[TwoFARecoveryCodeViewController createContinueButton] */

void FUN_10606df60(undefined8 param_1,undefined8 param_2)

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
  func_0x000106078714();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c09e940();
  _objc_retainAutoreleasedReturnValue();
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
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
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
  _objc_release(puVar1);
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
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10606e394; end: 10606e45b; -[TwoFARecoveryCodeViewController _createBackgroundImageViewWithImage:] */

void FUN_10606e394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01bf60();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10606e45c;
  puStack_40 = &UNK_1108471b0;
  uStack_38 = param_1;
  func_0x00010c0bbfc0(puVar1,param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10606e45c; end: 10606e583;  */

void FUN_10606e45c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
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
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar4);
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



/* Entry: 10606e584; end: 10606e61f; -[TwoFARecoveryCodeViewController createHeaderRightButton] */

void FUN_10606e584(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10606e620; end: 10606e62f; -[TwoFARecoveryCodeViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606e620(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dee4);
}



/* Entry: 10606e630; end: 10606e633; -[TwoFARecoveryCodeViewController getTitle] */

void FUN_10606e630(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_title_112679e90);
  return;
}



/* Entry: 10606e634; end: 10606e6ab; -[TwoFARecoveryCodeViewController preferredRightButtonWidth] */

double FUN_10606e634(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10606e6ac; end: 10606e777; -[TwoFARecoveryCodeViewController setIsWorking:] */

void FUN_10606e6ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf4fa60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c239fa0();
  uVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    func_0x00010c188560();
  }
  else {
    func_0x00010c2194e0();
  }
  _objc_release(uVar2);
  uVar1 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10606e778; end: 10606e7af; -[TwoFARecoveryCodeViewController leftButtonPressed] */

void FUN_10606e778(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


