/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10606e7b0; end: 10606e8c7; -[TwoFARecoveryCodeViewController rightButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606e7b0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7630;
  _objc_alloc(PTR_PTR_1126c7630);
  puVar3 = puVar2;
  func_0x0001060789b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0335c0(puVar2,*(undefined8 *)(param_1 + _DAT_11273df20),0x14d,puVar3,0,
                      *(undefined1 *)(param_1 + _DAT_11273df28),
                      *(undefined1 *)(param_1 + _DAT_11273df2c),
                      *(undefined8 *)(param_1 + _DAT_11273def0),
                      *(undefined8 *)(param_1 + _DAT_11273def4),
                      *(undefined8 *)(param_1 + _DAT_11273def8),
                      *(undefined8 *)(param_1 + _DAT_11273defc),
                      *(undefined8 *)(param_1 + _DAT_11273df00),
                      *(undefined8 *)(param_1 + _DAT_11273df08),
                      *(undefined8 *)(param_1 + _DAT_11273df0c),
                      *(undefined8 *)(param_1 + _DAT_11273df10),
                      *(undefined8 *)(param_1 + _DAT_11273df14),
                      *(undefined8 *)(param_1 + _DAT_11273df18),
                      *(undefined8 *)(param_1 + _DAT_11273df1c),
                      *(undefined8 *)(param_1 + _DAT_11273df20),
                      *(undefined8 *)(param_1 + _DAT_11273df24),0);
  func_0x00010c11c520(lVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10606e8c8; end: 10606e9bf; -[TwoFARecoveryCodeViewController continueButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606e8c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c1b5be0(param_1,param_2,1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273def8);
  func_0x00010c27db60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfbfec0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10606e9c0; end: 10606ea6b;  */

void FUN_10606e9c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1b5be0(param_1);
    func_0x00010c0c0800(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10606ea6c; end: 10606ea97;  */

void FUN_10606ea6c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23aa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_showTwoFARecoveryCodeGeneratedVC_11266c4b0,
             param_2);
  return;
}



/* Entry: 10606ea98; end: 10606ec17; -[TwoFARecoveryCodeViewController showTwoFARecoveryCodeGeneratedVC:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606ea98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c7638;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x0001060787ec();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c235fe0(param_1);
  lVar4 = param_1;
  func_0x00010c235fe0(param_1);
  func_0x00010c0335e0(puVar1,*(undefined8 *)(param_1 + _DAT_11273df18),0x127,puVar2,(uint)lVar3 ^ 1,
                      lVar4,param_3,*(undefined1 *)(param_1 + _DAT_11273df28),
                      *(undefined1 *)(param_1 + _DAT_11273df2c));
  _objc_release(param_3);
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



/* Entry: 10606ec18; end: 10606ec1f; -[TwoFARecoveryCodeViewController disableLeftSwipe] */

undefined8 FUN_10606ec18(void)

{
  return 1;
}



/* Entry: 10606ec20; end: 10606ecaf; -[TwoFARecoveryCodeViewController _updateImage:] */

void FUN_10606ec20(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10606ecb0;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10606ecb0; end: 10606ecbb;  */

void FUN_10606ecb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdeb210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__createBackgroundImageViewWithIm_112558620,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10606ecbc; end: 10606ee1f; -[TwoFARecoveryCodeViewController _setupBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606ecbc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273df08);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf88c20(uVar1);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10606ee20; end: 10606ee67;  */

void FUN_10606ee20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10606ee68; end: 10606ef63; -[TwoFARecoveryCodeViewController _presentReAuthenticationFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606ee68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c7650;
  _objc_alloc(PTR_PTR_1126c7650);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273def0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273def4);
  func_0x00010bf8d9a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273defc);
  func_0x00010c122000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d860(puVar1,param_2,uVar4,uVar2,uVar3,*(undefined8 *)(param_1 + _DAT_11273df10),
                      *(undefined8 *)(param_1 + _DAT_11273df00),
                      *(undefined8 *)(param_1 + _DAT_11273df18),
                      *(undefined8 *)(param_1 + _DAT_11273df1c),
                      *(undefined8 *)(param_1 + _DAT_11273df24));
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10606ef64; end: 10606ef6f; -[TwoFARecoveryCodeViewController defaultProjectNameV3] */

void FUN_10606ef64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 10606ef70; end: 10606ef7b; -[TwoFARecoveryCodeViewController defaultProjectNameV2] */

void FUN_10606ef70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 10606ef7c; end: 10606ef9b; -[TwoFARecoveryCodeViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606ef7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273df30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10606ef9c; end: 10606efaf; -[TwoFARecoveryCodeViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606ef9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273df30,param_3);
  return;
}



/* Entry: 10606efb0; end: 10606efbf; -[TwoFARecoveryCodeViewController infoText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606efb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df04);
}



/* Entry: 10606efc0; end: 10606efff; -[TwoFARecoveryCodeViewController setInfoText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606efc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df04;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606f000; end: 10606f00f; -[TwoFARecoveryCodeViewController continueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606f000(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df34);
}



/* Entry: 10606f010; end: 10606f04f; -[TwoFARecoveryCodeViewController setContinueButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606f010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df34;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606f050; end: 10606f05f; -[TwoFARecoveryCodeViewController showSkip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10606f050(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273dee8);
}



/* Entry: 10606f060; end: 10606f06f; -[TwoFARecoveryCodeViewController setShowSkip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606f060(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273dee8) = param_3;
  return;
}



/* Entry: 10606f070; end: 10606f07f; -[TwoFARecoveryCodeViewController showBack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10606f070(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273deec);
}



/* Entry: 10606f080; end: 10606f08f; -[TwoFARecoveryCodeViewController setShowBack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606f080(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273deec) = param_3;
  return;
}



/* Entry: 10606f090; end: 10606f09f; -[TwoFARecoveryCodeViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606f090(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273def0);
}



/* Entry: 10606f0a0; end: 10606f0df; -[TwoFARecoveryCodeViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606f0a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273def0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606f0e0; end: 10606f0ef; -[TwoFARecoveryCodeViewController userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606f0e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273def4);
}



/* Entry: 10606f0f0; end: 10606f12f; -[TwoFARecoveryCodeViewController setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606f0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273def4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606f130; end: 10606f13f; -[TwoFARecoveryCodeViewController userTwoFAServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606f130(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273def8);
}



/* Entry: 10606f140; end: 10606f17f; -[TwoFARecoveryCodeViewController setUserTwoFAServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606f140(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273def8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606f180; end: 10606f18f; -[TwoFARecoveryCodeViewController reauthenticationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606f180(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273defc);
}



/* Entry: 10606f190; end: 10606f1cf; -[TwoFARecoveryCodeViewController setReauthenticationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606f190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273defc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606f1d0; end: 10606f1df; -[TwoFARecoveryCodeViewController passwordNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606f1d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df00);
}



/* Entry: 10606f1e0; end: 10606f21f; -[TwoFARecoveryCodeViewController setPasswordNetworkRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606f1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df00;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606f220; end: 10606f33b; -[TwoFARecoveryCodeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606f220(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273df00,0);
  _objc_storeStrong(param_1 + _DAT_11273defc,0);
  _objc_storeStrong(param_1 + _DAT_11273def8,0);
  _objc_storeStrong(param_1 + _DAT_11273def4,0);
  _objc_storeStrong(param_1 + _DAT_11273def0,0);
  _objc_storeStrong(param_1 + _DAT_11273df34,0);
  _objc_storeStrong(param_1 + _DAT_11273df04,0);
  _objc_destroyWeak(param_1 + _DAT_11273df30);
  _objc_storeStrong(param_1 + _DAT_11273df24,0);
  _objc_storeStrong(param_1 + _DAT_11273df20,0);
  _objc_storeStrong(param_1 + _DAT_11273df1c,0);
  _objc_storeStrong(param_1 + _DAT_11273df18,0);
  _objc_storeStrong(param_1 + _DAT_11273df14,0);
  _objc_storeStrong(param_1 + _DAT_11273df10,0);
  _objc_storeStrong(param_1 + _DAT_11273df0c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273df08,0);
  return;
}



/* Entry: 10606f33c; end: 10606f503; -[TwoFASettingCodeVerificationViewController loadView] */

void FUN_10606f33c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ef5f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_loadView_112604be0);
  uVar1 = param_1;
  func_0x00010c298440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2982a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c234280();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c298440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2982a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c298440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2982a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c298440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2982a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(puVar3);
  return;
}



/* Entry: 10606f504; end: 10606f513; -[TwoFASettingCodeVerificationViewController backgroundColorForHeader] */

void FUN_10606f504(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xd6);
  return;
}



/* Entry: 10606f514; end: 10606f517; -[TwoFASettingCodeVerificationViewController titleForHeader:] */

void FUN_10606f514(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad0b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dad0b8,
                      &PTR____CFConstantStringClassReference_110e3af18,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10606f518; end: 10606f527; -[TwoFASettingCodeVerificationViewController textColorForHeader:] */

void FUN_10606f518(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xc6);
  return;
}



/* Entry: 10606f528; end: 10606f57b; -[TwoFASettingCodeVerificationViewController imageForLeftButtonInState:] */

void FUN_10606f528(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 2) {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf138e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10606f57c; end: 10606f583; -[TwoFASettingCodeVerificationViewController imageForRightButtonInState:] */

undefined8 FUN_10606f57c(void)

{
  return 0;
}



/* Entry: 10606f584; end: 10606f943; -[TwoFASetupAuthViewController initWithPageViewName:title:leftSwipeEnabled:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10606f584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
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
  puStack_70 = PTR_PTR_1126ef600;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273df38) = param_3;
    puVar2 = puVar1;
    func_0x00010c216240();
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273df3c) = param_5;
    func_0x000106078474();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273df40);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11273df40) = puVar2;
    _objc_release();
    func_0x00010607848c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273df44);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273df44) = uVar3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11273df48;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df4c;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df50;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df54;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df58;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df5c;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df60;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df64;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df68;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_16;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df6c;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_17;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df70;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_18;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df74;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_19;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11273df78;
    _objc_retain(param_20);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_20;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273df7c) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273df80) = param_7;
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



/* Entry: 10606f944; end: 10606f947; -[TwoFASetupAuthViewController getTitle] */

void FUN_10606f944(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_title_112679e90);
  return;
}



/* Entry: 10606f948; end: 10606f94f; -[TwoFASetupAuthViewController verifyMobileDidSucceed] */

void FUN_10606f948(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_verifyMobileDidSucceedWithTwoFaR_112683c68,0)
  ;
  return;
}



/* Entry: 10606f950; end: 10606f963; -[TwoFASetupAuthViewController verifyMobileDidSucceedWithTwoFaRecoveryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606f950(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11273df7c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c10de30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentRecoveryCodeViewWithRecov_1126211a8);
  return;
}



/* Entry: 10606f964; end: 10606f99f; -[TwoFASetupAuthViewController verifyMobileWasCancelled] */

void FUN_10606f964(undefined8 param_1)

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



/* Entry: 10606f9a0; end: 10606f9af; -[TwoFASetupAuthViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10606f9a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df38);
}



/* Entry: 10606f9b0; end: 10606fe1b; -[TwoFASetupAuthViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606f9b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ef600;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  puVar1 = PTR_s_class_1125ac0b8;
  puStack_68 = PTR_PTR_1126ef600;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_class_1125ac0b8);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfee0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef95e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac660(param_1);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2116c0(param_1);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
  _objc_release(puVar5);
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9a0();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167740();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0();
  _objc_release(uVar3);
  _objc_release(puVar5);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10606fe1c;
  puStack_80 = &UNK_1108471b0;
  uStack_78 = param_1;
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  puStack_a0 = PTR_PTR_1126ef600;
  puVar2 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar2,puVar1);
  uVar3 = param_1;
  func_0x00010c0d0ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf56720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9060(param_1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0d0f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c0d0f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 10606fe1c; end: 10606ffbf;  */

void FUN_10606fe1c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfee0c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
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
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10606ffc0; end: 1060703a7;  */

void FUN_10606ffc0(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0d0f00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c0e0();
  _objc_release(uVar10);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c267f00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x402e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar10);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar10);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060703a8; end: 1060703af; -[TwoFASetupAuthViewController numberOfSectionsInTableView:] */

undefined8 FUN_1060703a8(void)

{
  return 1;
}



/* Entry: 1060703b0; end: 1060703b7; -[TwoFASetupAuthViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_1060703b0(void)

{
  return 2;
}



/* Entry: 1060703b8; end: 1060705eb; -[TwoFASetupAuthViewController tableView:cellForRowAtIndexPath:] */

void FUN_1060703b8(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c1554e0();
  if ((lVar1 == 0) && (lVar1 = param_4, func_0x00010c142240(), lVar1 == 0)) {
    puVar2 = param_3;
    func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110e3add8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126c75b8;
      _objc_alloc(PTR_PTR_1126c75b8);
      func_0x00010c040040();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar4,param_2,puVar2);
      _objc_release(puVar2);
    }
    func_0x00010607899c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c26c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010be223c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_4;
    func_0x00010c1554e0();
    if ((lVar1 != 0) || (lVar1 = param_4, func_0x00010c142240(), lVar1 != 1)) {
      puVar4 = (undefined *)0x0;
      goto LAB_1060705c4;
    }
    param_1 = param_3;
    func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110e3adf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    if (param_1 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126c75b8;
      _objc_alloc(PTR_PTR_1126c75b8);
      func_0x00010c040040();
      param_1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar4,param_2,param_1);
      _objc_release(param_1);
    }
    func_0x000106078b34();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c26c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar2);
    _objc_release(param_1);
    func_0x000106078b4c();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar4;
  func_0x00010c25e820(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar2);
  _objc_release(param_1);
LAB_1060705c4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060705ec; end: 10607067b; -[TwoFASetupAuthViewController tableView:didSelectRowAtIndexPath:] */

void FUN_1060705ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c1554e0();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010c142240();
    if (lVar1 == 1) {
      func_0x00010c10ea00(param_1);
    }
    else if (lVar1 == 0) {
      func_0x00010c10e480(param_1);
    }
  }
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10607067c; end: 106070693; -[TwoFASetupAuthViewController disableLeftSwipe] */

uint FUN_10607067c(uint param_1)

{
  func_0x00010c08e960();
  return param_1 ^ 1;
}



/* Entry: 106070694; end: 106070707; -[TwoFASetupAuthViewController setIsWorking:] */

void FUN_106070694(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188560();
  _objc_release(uVar1);
  func_0x00010c1ba2e0(param_1,param_2,param_3 ^ 1);
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106070708; end: 1060708e7; -[TwoFASetupAuthViewController presentSmsSetupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106070708(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar2 = param_1;
  func_0x00010be34a80();
  if ((int)lVar2 != 0) {
    func_0x00010c1b5be0(param_1);
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1060708e8;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    ppuVar3 = &puStack_90;
    _objc_retainBlock();
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106070938;
    puStack_a0 = &UNK_110843540;
    _objc_copyWeak(auStack_98,auStack_68);
    ppuVar4 = &puStack_b8;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273df50);
    func_0x00010c27db60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar3);
    _objc_retain(ppuVar4);
    func_0x00010c15c9c0(uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_98);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c10d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentMobileSettingView_112620e78);
  return;
}



/* Entry: 1060708e8; end: 10607099b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060708e8(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1b5be0(param_1,param_2,0);
    *(undefined1 *)(param_1 + _DAT_11273df7c) = 1;
    func_0x00010c10e460(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10607099c; end: 1060709a7;  */

void FUN_10607099c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c0810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchSuccess_failure__11260dc18,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1060709a8; end: 106070ad3; -[TwoFASetupAuthViewController presentMobileSettingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060709a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c75e0;
  _objc_alloc(PTR_PTR_1126c75e0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273df48);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273df4c);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273df54);
  func_0x00010c121fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeeb00(puVar1,param_2,1,uVar3,uVar4,uVar2,*(undefined8 *)(param_1 + _DAT_11273df64),
                      *(undefined8 *)(param_1 + _DAT_11273df68),
                      *(undefined8 *)(param_1 + _DAT_11273df58),
                      *(undefined8 *)(param_1 + _DAT_11273df60),
                      *(undefined8 *)(param_1 + _DAT_11273df6c),
                      *(undefined8 *)(param_1 + _DAT_11273df70),0,0);
  _objc_release(uVar2);
  func_0x00010c189400(puVar1,param_2,1);
  func_0x00010c1c8940(puVar1,param_2,param_1);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106070ad4; end: 106070adb;  */

undefined8 FUN_106070ad4(void)

{
  return 0;
}



/* Entry: 106070adc; end: 106070c6b; -[TwoFASetupAuthViewController presentSmsCodeConfirmationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106070adc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c75e8;
  _objc_alloc(PTR_PTR_1126c75e8);
  lVar6 = (long)_DAT_11273df4c;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0fb000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035a80(puVar1,param_2,uVar5,*(undefined1 *)(param_1 + _DAT_11273df7c),
                      *(undefined1 *)(param_1 + _DAT_11273df80),
                      *(undefined8 *)(param_1 + _DAT_11273df48),*(undefined8 *)(param_1 + lVar6),
                      *(undefined8 *)(param_1 + _DAT_11273df50),
                      *(undefined8 *)(param_1 + _DAT_11273df54),
                      *(undefined8 *)(param_1 + _DAT_11273df58),
                      *(undefined8 *)(param_1 + _DAT_11273df5c),
                      *(undefined8 *)(param_1 + _DAT_11273df60),
                      *(undefined8 *)(param_1 + _DAT_11273df64),
                      *(undefined8 *)(param_1 + _DAT_11273df68),
                      *(undefined8 *)(param_1 + _DAT_11273df6c),
                      *(undefined8 *)(param_1 + _DAT_11273df70),
                      *(undefined8 *)(param_1 + _DAT_11273df74),
                      *(undefined8 *)(param_1 + _DAT_11273df78));
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar6 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1,param_2,lVar6);
  _objc_release(lVar6);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106070c6c; end: 106070da7; -[TwoFASetupAuthViewController presentTpaSetupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106070c6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c75c8;
  _objc_alloc(PTR_PTR_1126c75c8);
  puVar2 = puVar1;
  func_0x0001060789b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0335a0(puVar1,*(undefined8 *)(param_1 + _DAT_11273df70),0x121,puVar2,1,
                      *(undefined1 *)(param_1 + _DAT_11273df7c),
                      *(undefined1 *)(param_1 + _DAT_11273df80),
                      *(undefined8 *)(param_1 + _DAT_11273df48),
                      *(undefined8 *)(param_1 + _DAT_11273df4c),
                      *(undefined8 *)(param_1 + _DAT_11273df50),
                      *(undefined8 *)(param_1 + _DAT_11273df54),
                      *(undefined8 *)(param_1 + _DAT_11273df58),
                      *(undefined8 *)(param_1 + _DAT_11273df5c),
                      *(undefined8 *)(param_1 + _DAT_11273df60),
                      *(undefined8 *)(param_1 + _DAT_11273df64),
                      *(undefined8 *)(param_1 + _DAT_11273df68),
                      *(undefined8 *)(param_1 + _DAT_11273df6c),
                      *(undefined8 *)(param_1 + _DAT_11273df70),
                      *(undefined8 *)(param_1 + _DAT_11273df74),
                      *(undefined8 *)(param_1 + _DAT_11273df78));
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



/* Entry: 106070da8; end: 106070fc7; -[TwoFASetupAuthViewController presentRecoveryCodeViewWithRecoveryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106070da8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126c75d8;
    _objc_alloc(PTR_PTR_1126c75d8);
    puVar2 = puVar1;
    func_0x0001060787ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033600(puVar1,*(undefined8 *)(param_1 + _DAT_11273df6c),0x126,puVar2,1,0,
                        *(undefined1 *)(param_1 + _DAT_11273df7c),
                        *(undefined1 *)(param_1 + _DAT_11273df80),
                        *(undefined8 *)(param_1 + _DAT_11273df48),
                        *(undefined8 *)(param_1 + _DAT_11273df4c),
                        *(undefined8 *)(param_1 + _DAT_11273df50),
                        *(undefined8 *)(param_1 + _DAT_11273df54),
                        *(undefined8 *)(param_1 + _DAT_11273df58),
                        *(undefined8 *)(param_1 + _DAT_11273df5c),
                        *(undefined8 *)(param_1 + _DAT_11273df60),
                        *(undefined8 *)(param_1 + _DAT_11273df64),
                        *(undefined8 *)(param_1 + _DAT_11273df68),
                        *(undefined8 *)(param_1 + _DAT_11273df6c),
                        *(undefined8 *)(param_1 + _DAT_11273df70),
                        *(undefined8 *)(param_1 + _DAT_11273df74),
                        *(undefined8 *)(param_1 + _DAT_11273df78));
  }
  else {
    puVar1 = PTR_PTR_1126c7638;
    _objc_alloc(PTR_PTR_1126c7638);
    puVar2 = puVar1;
    func_0x0001060787ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0335e0(puVar1,*(undefined8 *)(param_1 + _DAT_11273df68),0x127,puVar2,1,0,param_3,
                        *(undefined1 *)(param_1 + _DAT_11273df7c),
                        *(undefined1 *)(param_1 + _DAT_11273df80),
                        *(undefined8 *)(param_1 + _DAT_11273df48),
                        *(undefined8 *)(param_1 + _DAT_11273df4c),
                        *(undefined8 *)(param_1 + _DAT_11273df50),
                        *(undefined8 *)(param_1 + _DAT_11273df54),
                        *(undefined8 *)(param_1 + _DAT_11273df58),
                        *(undefined8 *)(param_1 + _DAT_11273df5c),
                        *(undefined8 *)(param_1 + _DAT_11273df60),
                        *(undefined8 *)(param_1 + _DAT_11273df64),
                        *(undefined8 *)(param_1 + _DAT_11273df68),
                        *(undefined8 *)(param_1 + _DAT_11273df6c),
                        *(undefined8 *)(param_1 + _DAT_11273df70),
                        *(undefined8 *)(param_1 + _DAT_11273df74),
                        *(undefined8 *)(param_1 + _DAT_11273df78));
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
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106070fc8; end: 106071003; -[TwoFASetupAuthViewController leftButtonPressed] */

void FUN_106070fc8(undefined8 param_1)

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



/* Entry: 106071004; end: 1060710a7; -[TwoFASetupAuthViewController _hasValidMobile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106071004(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + _DAT_11273df4c);
  func_0x00010c0fb000(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar5 != 0;
}



/* Entry: 1060710a8; end: 106071157; -[TwoFASetupAuthViewController _getSMSInstructionText] */

void FUN_1060710a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010be34a80();
  uVar2 = uVar1;
  func_0x0001060787d4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  if ((int)uVar1 != 0) {
    func_0x00010be18c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = param_1;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010607893c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106071158; end: 106071353; -[TwoFASetupAuthViewController _formattedMobile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106071158(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar10 = (long)_DAT_11273df4c;
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0fb000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar5,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar9 = PTR_PTR_1126aed98;
  if ((int)puVar5 == 0) {
    puVar6 = *(undefined **)(param_1 + lVar10);
    func_0x00010c0fb000(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c0fb000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0fafc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5d40(puVar9,param_2,puVar8,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar8);
  }
  else {
    puVar6 = *(undefined **)(param_1 + lVar10);
    func_0x00010c0fb000(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106071354; end: 10607135f; -[TwoFASetupAuthViewController defaultProjectNameV3] */

void FUN_106071354(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106071360; end: 10607136b; -[TwoFASetupAuthViewController defaultProjectNameV2] */

void FUN_106071360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 10607136c; end: 10607137b; -[TwoFASetupAuthViewController leftSwipeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10607136c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273df3c);
}



/* Entry: 10607137c; end: 10607138b; -[TwoFASetupAuthViewController setLeftSwipeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607137c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273df3c) = param_3;
  return;
}



/* Entry: 10607138c; end: 10607139b; -[TwoFASetupAuthViewController infoText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607138c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df40);
}



/* Entry: 10607139c; end: 1060713db; -[TwoFASetupAuthViewController setInfoText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607139c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df40;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060713dc; end: 1060713eb; -[TwoFASetupAuthViewController moreInfoText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060713dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df44);
}



/* Entry: 1060713ec; end: 10607142b; -[TwoFASetupAuthViewController setMoreInfoText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060713ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df44;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10607142c; end: 10607143b; -[TwoFASetupAuthViewController infoTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607142c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df84);
}



/* Entry: 10607143c; end: 10607147b; -[TwoFASetupAuthViewController setInfoTextLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607143c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df84;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10607147c; end: 10607148b; -[TwoFASetupAuthViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607147c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df88);
}



/* Entry: 10607148c; end: 1060714cb; -[TwoFASetupAuthViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607148c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df88;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060714cc; end: 1060714db; -[TwoFASetupAuthViewController moreInfoTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060714cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df8c);
}



/* Entry: 1060714dc; end: 10607151b; -[TwoFASetupAuthViewController setMoreInfoTextLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060714dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df8c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10607151c; end: 10607152b; -[TwoFASetupAuthViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607151c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df48);
}



/* Entry: 10607152c; end: 10607156b; -[TwoFASetupAuthViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607152c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df48;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10607156c; end: 10607157b; -[TwoFASetupAuthViewController userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607156c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df4c);
}



/* Entry: 10607157c; end: 1060715bb; -[TwoFASetupAuthViewController setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607157c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df4c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060715bc; end: 1060715cb; -[TwoFASetupAuthViewController userTwoFAServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060715bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df50);
}



/* Entry: 1060715cc; end: 10607160b; -[TwoFASetupAuthViewController setUserTwoFAServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060715cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df50;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10607160c; end: 10607161b; -[TwoFASetupAuthViewController reauthenticationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607160c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df54);
}



/* Entry: 10607161c; end: 10607165b; -[TwoFASetupAuthViewController setReauthenticationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607161c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df54;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10607165c; end: 10607166b; -[TwoFASetupAuthViewController passwordNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607165c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df58);
}



/* Entry: 10607166c; end: 1060716ab; -[TwoFASetupAuthViewController setPasswordNetworkRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607166c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273df58;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060716ac; end: 1060717eb; -[TwoFASetupAuthViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060716ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273df58,0);
  _objc_storeStrong(param_1 + _DAT_11273df54,0);
  _objc_storeStrong(param_1 + _DAT_11273df50,0);
  _objc_storeStrong(param_1 + _DAT_11273df4c,0);
  _objc_storeStrong(param_1 + _DAT_11273df48,0);
  _objc_storeStrong(param_1 + _DAT_11273df8c,0);
  _objc_storeStrong(param_1 + _DAT_11273df88,0);
  _objc_storeStrong(param_1 + _DAT_11273df84,0);
  _objc_storeStrong(param_1 + _DAT_11273df44,0);
  _objc_storeStrong(param_1 + _DAT_11273df40,0);
  _objc_storeStrong(param_1 + _DAT_11273df78,0);
  _objc_storeStrong(param_1 + _DAT_11273df74,0);
  _objc_storeStrong(param_1 + _DAT_11273df70,0);
  _objc_storeStrong(param_1 + _DAT_11273df6c,0);
  _objc_storeStrong(param_1 + _DAT_11273df68,0);
  _objc_storeStrong(param_1 + _DAT_11273df64,0);
  _objc_storeStrong(param_1 + _DAT_11273df60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273df5c,0);
  return;
}



/* Entry: 1060717ec; end: 106071b8b; -[TwoFASetupTPAViewController initWithPageViewName:title:leftSwipeable:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1060717ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_70 = PTR_PTR_1126ef608;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273df90) = param_3;
    puVar2 = puVar1;
    func_0x00010c216240();
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273df94) = param_5;
    func_0x000106078b04();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273df98);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11273df98) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273df9c;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfa0;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfa4;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfa8;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfac;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfb0;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfb4;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfb8;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfbc;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfc0;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfc4;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfc8;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_19;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dfcc;
    _objc_retain(param_20);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_20;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273dfd0) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273dfd4) = param_7;
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



/* Entry: 106071b8c; end: 106071b8f; -[TwoFASetupTPAViewController getTitle] */

void FUN_106071b8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_title_112679e90);
  return;
}



/* Entry: 106071b90; end: 106071b9f; -[TwoFASetupTPAViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106071b90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273df90);
}



/* Entry: 106071ba0; end: 106071f0f; -[TwoFASetupTPAViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106071ba0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ef608;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  puStack_48 = PTR_PTR_1126ef608;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_class_1125ac0b8);
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
  puVar4 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2116c0(param_1);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar4);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9a0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167740();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0();
  _objc_release(uVar2);
  _objc_release(puVar4);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106071f10; end: 10607209f;  */

void FUN_106071f10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfee0c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(lVar7,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060720a0; end: 1060720a7; -[TwoFASetupTPAViewController numberOfSectionsInTableView:] */

undefined8 FUN_1060720a0(void)

{
  return 1;
}



/* Entry: 1060720a8; end: 1060720af; -[TwoFASetupTPAViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_1060720a8(void)

{
  return 3;
}



/* Entry: 1060720b0; end: 1060720bf; -[TwoFASetupTPAViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_1060720b0(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}


