/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cf0750; end: 104cf075f;  */

void FUN_104cf0750(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showOtpScreenWithChallenge_smsE_11258c270,
             param_2,param_3);
  return;
}



/* Entry: 104cf0760; end: 104cf07bf;  */

void FUN_104cf0760(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c27db20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cf07c0; end: 104cf07cf;  */

void FUN_104cf07c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb82f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showCOSSmsScreenWithObfuscatedP_11258ba60,
             param_2,param_3);
  return;
}



/* Entry: 104cf07d0; end: 104cf07d3; -[SCTwoFAWorkflow credentials2FASMSEntryFinishedWithLoginSuccess:recoveryCodeUsed:] */

void FUN_104cf07d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__twoFAFinishedWithLoginSuccess_r_112591bf0);
  return;
}



/* Entry: 104cf07d4; end: 104cf08e7; -[SCTwoFAWorkflow credentials2FACOSSMS2FASubmitCode:wasAutofilled:rememberDevice:success:failure:] */

void FUN_104cf07d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
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
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cf08e8;
  puStack_50 = &UNK_110842508;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x104cf08f4;
  puStack_78 = &UNK_110848438;
  uStack_70 = param_7;
  uStack_48 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c27da80(param_1,param_2,param_3,param_4,param_5,&puStack_68,&puStack_90);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 104cf08e8; end: 104cf08ff;  */

void FUN_104cf08e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104cf08f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104cf0900; end: 104cf09e3; -[SCTwoFAWorkflow credentials2FACOSSMS2FAResendCodeWithSuccess:failure:] */

void FUN_104cf0900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104cf09e4;
  puStack_40 = &UNK_110849530;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x104cf09f0;
  puStack_68 = &UNK_110848438;
  uStack_60 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c27da60(param_1,param_2,&puStack_58,&puStack_80);
  _objc_release(param_1);
  _objc_release(uStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf09e4; end: 104cf09fb;  */

void FUN_104cf09e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104cf09ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104cf09fc; end: 104cf0a2f; -[SCTwoFAWorkflow credentials2FACOSSMS2FAEntryFinishedWithRecoveryCodeUsed:] */

void FUN_104cf09fc(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27da40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf0a30; end: 104cf0a5b; -[SCTwoFAWorkflow credentials2FACOSSMS2FAVerificationExited] */

void FUN_104cf0a30(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27db20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf0a5c; end: 104cf0b6f; -[SCTwoFAWorkflow credentials2FACOSOTPSubmitCode:wasAutofilled:rememberDevice:success:failure:] */

void FUN_104cf0a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
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
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cf0b70;
  puStack_50 = &UNK_110842508;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x104cf0b7c;
  puStack_78 = &UNK_110848438;
  uStack_70 = param_7;
  uStack_48 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c27daa0(param_1,param_2,param_3,param_4,param_5,&puStack_68,&puStack_90);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 104cf0b70; end: 104cf0b87;  */

void FUN_104cf0b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104cf0b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104cf0b88; end: 104cf0c6b; -[SCTwoFAWorkflow credentials2FACOSOTPSwitchToSMSWithSuccess:failure:] */

void FUN_104cf0b88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104cf0c6c;
  puStack_40 = &UNK_110849530;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x104cf0c78;
  puStack_68 = &UNK_110848438;
  uStack_60 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c27dac0(param_1,param_2,&puStack_58,&puStack_80);
  _objc_release(param_1);
  _objc_release(uStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf0c6c; end: 104cf0c83;  */

void FUN_104cf0c6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104cf0c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104cf0c84; end: 104cf0cb7; -[SCTwoFAWorkflow credentials2FACOSOTPEntryFinishedWithRecoveryCodeUsed:] */

void FUN_104cf0c84(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27da40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf0cb8; end: 104cf0ce3; -[SCTwoFAWorkflow credentials2FACOSOTPVerificationExited] */

void FUN_104cf0cb8(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27db20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf0ce4; end: 104cf0d7b; -[SCTwoFAWorkflow _showOtpScreenWithChallenge:smsEnabled:] */

void FUN_104cf0ce4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cf0d7c;
  puStack_50 = &UNK_110849560;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf0d7c; end: 104cf0d8b;  */

void FUN_104cf0d7c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCredentials2FAOTPVerificatio_11266b588,
             *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104cf0d8c; end: 104cf0e1b; -[SCTwoFAWorkflow _showSmsScreenWithChallenge:] */

void FUN_104cf0d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cf0e1c;
  puStack_48 = &UNK_110849590;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf0e1c; end: 104cf0e27;  */

void FUN_104cf0e1c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCredentials2FASMSVerificatio_11266b590,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104cf0e28; end: 104cf0ebf; -[SCTwoFAWorkflow _showCOSSmsScreenWithObfuscatedPhone:isSwitchable:] */

void FUN_104cf0e28(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cf0ec0;
  puStack_50 = &UNK_110849560;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf0ec0; end: 104cf0ecf;  */

void FUN_104cf0ec0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCredentialsCOSSMS2FAVerifica_11266b5a8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 104cf0ed0; end: 104cf0f2b; -[SCTwoFAWorkflow _showCOSOtpScreenWithIsSwitchable:] */

void FUN_104cf0ed0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_104cf0f2c;
  puStack_28 = &UNK_1108495c0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_40);
  return;
}



/* Entry: 104cf0f2c; end: 104cf0f3b;  */

void FUN_104cf0f2c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCredentialsCOSOTP2FAVerifica_11266b5a0,
             *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 104cf0f3c; end: 104cf0ff3; -[SCTwoFAWorkflow _twoFAFinishedWithLoginSuccess:recoveryCodeUsed:] */

void FUN_104cf0f3c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c27db40();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104cf0ff4;
    puStack_48 = &UNK_110849590;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c1429e0(uVar1,param_2,&puStack_60);
    param_1 = lStack_38;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf0ff4; end: 104cf10ab;  */

void FUN_104cf0ff4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c10dde0(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104cf10ac; end: 104cf10e3; -[SCTwoFAWorkflow .cxx_destruct] */

void FUN_104cf10ac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cf10e4; end: 104cf11bb;  */

void FUN_104cf10e4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daef18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110daef18,
                      &PTR____CFConstantStringClassReference_110daef38,0);
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



/* Entry: 104cf11bc; end: 104cf1203; +[SCCredentials2FAOTPVerificationAction exit] */

void FUN_104cf11bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af430;
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



/* Entry: 104cf1204; end: 104cf124f; +[SCCredentials2FAOTPVerificationAction rememberDevice] */

void FUN_104cf1204(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af430;
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



/* Entry: 104cf1250; end: 104cf129b; +[SCCredentials2FAOTPVerificationAction submitCode] */

void FUN_104cf1250(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af430;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cf129c; end: 104cf12e7; +[SCCredentials2FAOTPVerificationAction switchToSms] */

void FUN_104cf129c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af430;
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



/* Entry: 104cf12e8; end: 104cf134f; +[SCCredentials2FAOTPVerificationAction updateVerificationCodeWithCode:] */

void FUN_104cf12e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af430;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cf1350; end: 104cf1373; -[SCCredentials2FAOTPVerificationAction copyWithZone:] */

undefined8 FUN_104cf1350(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cf1374; end: 104cf13d3; -[SCCredentials2FAOTPVerificationAction hash] */

void FUN_104cf1374(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e3c90;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cf13d4; end: 104cf1417; -[SCCredentials2FAOTPVerificationAction internalInit] */

void FUN_104cf13d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3c90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cf1418; end: 104cf14b7; -[SCCredentials2FAOTPVerificationAction isEqual:] */

long FUN_104cf1418(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cf149c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_104cf149c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104cf149c;
    }
  }
  lVar3 = 1;
LAB_104cf149c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cf14b8; end: 104cf15cb; -[SCCredentials2FAOTPVerificationAction matchExit:switchToSms:rememberDevice:updateVerificationCode:submitCode:] */

void FUN_104cf14b8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_104cf1594;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_104cf1594;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_104cf1594;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (lVar1 == 3) {
      if (param_6 != 0) {
        (**(code **)(param_6 + 0x10))(param_6,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_104cf1594;
    }
    if ((lVar1 != 4) || (param_7 == 0)) goto LAB_104cf1594;
    pcVar2 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
  }
  (*pcVar2)(lVar1);
LAB_104cf1594:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cf15cc; end: 104cf15d7; -[SCCredentials2FAOTPVerificationAction .cxx_destruct] */

void FUN_104cf15cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cf15d8; end: 104cf16bb; -[SCCredentials2FAOTPVerificationViewModel initWithSendSmsInsteadHidden:sendSmsInsteadEnabled:hasInProgressLogIn:continueButtonEnabled:rememberDevice:sendSmsInsteadTitle:errorMessage:] */

undefined1 *
FUN_104cf15d8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e3c98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 104cf16bc; end: 104cf16df; -[SCCredentials2FAOTPVerificationViewModel copyWithZone:] */

undefined8 FUN_104cf16bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cf16e0; end: 104cf1783; -[SCCredentials2FAOTPVerificationViewModel hash] */

ulong * FUN_104cf16e0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar11;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_60 = (ulong)uVar1 & 0xff;
  uStack_58 = uVar10 >> 0x10 & 0xff;
  uStack_50 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_48 = (ulong)uVar8;
  uStack_40 = (ulong)*(byte *)(param_1 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_104cf1854:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104cf1860;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar5 & 1) != 0) &&
        (((*(char *)((long)puVar4 + 8) == param_3[8] && (*(char *)((long)puVar4 + 9) == param_3[9]))
         && (*(char *)((long)puVar4 + 10) == param_3[10])))) &&
       ((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
        (*(char *)((long)puVar4 + 0xc) == param_3[0xc])))) {
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        puVar7 = *(undefined1 **)((long)puVar4 + 0x18);
        if (puVar7 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104cf1860;
        }
        goto LAB_104cf1854;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_104cf1860:
  _objc_release(param_3);
  return (ulong *)puVar7;
}



/* Entry: 104cf1784; end: 104cf187b; -[SCCredentials2FAOTPVerificationViewModel isEqual:] */

long FUN_104cf1784(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104cf1854:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cf1860;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) &&
       ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
        (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104cf1860;
        }
        goto LAB_104cf1854;
      }
    }
    lVar3 = 0;
  }
LAB_104cf1860:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cf187c; end: 104cf1883; -[SCCredentials2FAOTPVerificationViewModel sendSmsInsteadHidden] */

undefined1 FUN_104cf187c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104cf1884; end: 104cf188b; -[SCCredentials2FAOTPVerificationViewModel sendSmsInsteadEnabled] */

undefined1 FUN_104cf1884(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104cf188c; end: 104cf1893; -[SCCredentials2FAOTPVerificationViewModel hasInProgressLogIn] */

undefined1 FUN_104cf188c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104cf1894; end: 104cf189b; -[SCCredentials2FAOTPVerificationViewModel continueButtonEnabled] */

undefined1 FUN_104cf1894(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 104cf189c; end: 104cf18a3; -[SCCredentials2FAOTPVerificationViewModel rememberDevice] */

undefined1 FUN_104cf189c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 104cf18a4; end: 104cf18ab; -[SCCredentials2FAOTPVerificationViewModel sendSmsInsteadTitle] */

undefined8 FUN_104cf18a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104cf18ac; end: 104cf18b3; -[SCCredentials2FAOTPVerificationViewModel errorMessage] */

undefined8 FUN_104cf18ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104cf18b4; end: 104cf18e3; -[SCCredentials2FAOTPVerificationViewModel .cxx_destruct] */

void FUN_104cf18b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cf18e4; end: 104cf19a7; -[SCCredentials2FASMSVerificationViewModel initWithHasInProgressLogIn:descriptionLabelText:errorMessage:rememberDevice:] */

undefined1 *
FUN_104cf18e4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e3ca0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104cf19a8; end: 104cf19cb; -[SCCredentials2FASMSVerificationViewModel copyWithZone:] */

undefined8 FUN_104cf19a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cf19cc; end: 104cf1a4b; -[SCCredentials2FASMSVerificationViewModel hash] */

ulong * FUN_104cf19cc(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104cf1aec:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_104cf1af8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((char)puVar3[1] == (char)param_3[1] &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      uVar5 = puVar3[2];
      if ((uVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
        puVar6 = (ulong *)puVar3[3];
        if (puVar6 != (ulong *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_104cf1af8;
        }
        goto LAB_104cf1aec;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_104cf1af8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104cf1a4c; end: 104cf1b13; -[SCCredentials2FASMSVerificationViewModel isEqual:] */

long FUN_104cf1a4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104cf1aec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cf1af8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104cf1af8;
        }
        goto LAB_104cf1aec;
      }
    }
    lVar3 = 0;
  }
LAB_104cf1af8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cf1b14; end: 104cf1b1b; -[SCCredentials2FASMSVerificationViewModel hasInProgressLogIn] */

undefined1 FUN_104cf1b14(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104cf1b1c; end: 104cf1b23; -[SCCredentials2FASMSVerificationViewModel descriptionLabelText] */

undefined8 FUN_104cf1b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104cf1b24; end: 104cf1b2b; -[SCCredentials2FASMSVerificationViewModel errorMessage] */

undefined8 FUN_104cf1b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104cf1b2c; end: 104cf1b33; -[SCCredentials2FASMSVerificationViewModel rememberDevice] */

undefined1 FUN_104cf1b2c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104cf1b34; end: 104cf1b63; -[SCCredentials2FASMSVerificationViewModel .cxx_destruct] */

void FUN_104cf1b34(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cf1b64; end: 104cf1bab; +[SCCredentials2FASMSVerificationAction exit] */

void FUN_104cf1b64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af448;
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



/* Entry: 104cf1bac; end: 104cf1bf7; +[SCCredentials2FASMSVerificationAction rememberDevice] */

void FUN_104cf1bac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af448;
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



/* Entry: 104cf1bf8; end: 104cf1c5f; +[SCCredentials2FASMSVerificationAction updateVerificationCodeWithCode:] */

void FUN_104cf1bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af448;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cf1c60; end: 104cf1c83; -[SCCredentials2FASMSVerificationAction copyWithZone:] */

undefined8 FUN_104cf1c60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cf1c84; end: 104cf1ce3; -[SCCredentials2FASMSVerificationAction hash] */

void FUN_104cf1c84(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e3ca8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cf1ce4; end: 104cf1d27; -[SCCredentials2FASMSVerificationAction internalInit] */

void FUN_104cf1ce4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3ca8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cf1d28; end: 104cf1dc7; -[SCCredentials2FASMSVerificationAction isEqual:] */

long FUN_104cf1d28(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cf1dac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_104cf1dac;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104cf1dac;
    }
  }
  lVar3 = 1;
LAB_104cf1dac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cf1dc8; end: 104cf1e73; -[SCCredentials2FASMSVerificationAction matchExit:rememberDevice:updateVerificationCode:] */

void FUN_104cf1dc8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_104cf1e50;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 0) || (param_3 == 0)) goto LAB_104cf1e50;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    (*pcVar2)(lVar1);
  }
LAB_104cf1e50:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cf1e74; end: 104cf1e7f; -[SCCredentials2FASMSVerificationAction .cxx_destruct] */

void FUN_104cf1e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cf1e80; end: 104cf2273; -[SCLogoutSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf1e80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
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
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af490;
  _objc_alloc();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112710e08;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar14;
  func_0x00010c293960();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    lStack_b0 = 0;
    uStack_a8 = 0;
    lVar21 = 0;
    uVar19 = 0;
    lVar15 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(param_1 + _DAT_112710e30);
    _objc_retain(uVar19);
    lVar21 = param_1 + _DAT_112710e34;
    _objc_loadWeakRetained(lVar21);
    uStack_a8 = *(undefined8 *)(param_1 + _DAT_112710e38);
    _objc_retain();
    lStack_b0 = param_1 + _DAT_112710e2c;
    _objc_loadWeakRetained();
    lVar15 = param_1 + _DAT_112710e0c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar15;
  func_0x00010c0b47c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_104cf22b4();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x000104cf22d8();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x000104cf22d8();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112710e20;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar16;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_112710e24;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar20;
  func_0x00010c0c9bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112710e28;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ee60();
  uVar17 = *(undefined8 *)(param_1 + _DAT_112710e00);
  *(undefined **)(param_1 + _DAT_112710e00) = puVar2;
  _objc_release(uVar17);
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(lVar12);
  _objc_release(lVar20);
  _objc_release(lVar11);
  _objc_release(lVar16);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(lStack_b0);
  _objc_release(uStack_a8);
  _objc_release(lVar21);
  _objc_release(uVar19);
  _objc_release(lVar3);
  _objc_release(lVar14);
  param_1 = param_1 + _DAT_112710e04;
  _objc_loadWeakRetained(param_1);
  lVar14 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  return;
}



/* Entry: 104cf2274; end: 104cf22b3;  */

void FUN_104cf2274(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5aa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104cf22b4; end: 104cf22fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf22b4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112710e14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cf22fc; end: 104cf240f; -[SCLogoutSettingsEntryPoint _logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf22fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126af498;
  _objc_alloc(PTR_PTR_1126af498);
  lVar2 = param_1;
  FUN_104cf22b4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112710e10;
    _objc_loadWeakRetained(lVar7);
  }
  lVar4 = lVar7;
  func_0x00010bfcdfa0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_112710e1c;
    _objc_loadWeakRetained(lVar5);
  }
  lVar6 = lVar5;
  func_0x00010bf70800(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f280(puVar1,param_2,lVar3,lVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cf2410; end: 104cf24ef; -[SCLogoutSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf2410(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710e38,0);
  _objc_destroyWeak(param_1 + _DAT_112710e34);
  _objc_storeStrong(param_1 + _DAT_112710e30,0);
  _objc_destroyWeak(param_1 + _DAT_112710e2c);
  _objc_destroyWeak(param_1 + _DAT_112710e28);
  _objc_destroyWeak(param_1 + _DAT_112710e24);
  _objc_destroyWeak(param_1 + _DAT_112710e20);
  _objc_destroyWeak(param_1 + _DAT_112710e1c);
  _objc_destroyWeak(param_1 + _DAT_112710e18);
  _objc_destroyWeak(param_1 + _DAT_112710e14);
  _objc_destroyWeak(param_1 + _DAT_112710e10);
  _objc_destroyWeak(param_1 + _DAT_112710e0c);
  _objc_destroyWeak(param_1 + _DAT_112710e04);
  _objc_destroyWeak(param_1 + _DAT_112710e08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710e00,0);
  return;
}



/* Entry: 104cf24f0; end: 104cf286b; -[SCSettingsLogoutRowProvider initWithUserSessionDelegate:oneTapLoginRegistryLogger:logoutScopeExposer:logoutScopeServices:memoriesBackupScopeExposer:memoriesBackupUIScopeServices:logoutInterceptorsCheck:userTrackedLogger:profile:dataObjectContext:keyService:memoriesSnapThumbnailProvider:circumstanceEngine:] */

undefined8 *
FUN_104cf24f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e3cb0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aeaf0;
    _objc_alloc();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daf018;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf018,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daf038;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf038,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053ba0();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_storeWeak(puVar1 + 3,param_3);
    _objc_retain(param_4);
    uVar5 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar5);
    _objc_retain(param_10);
    uVar5 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar5);
    _objc_retain(param_11);
    uVar5 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar5);
    _objc_retain(param_12);
    uVar5 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar5);
    _objc_retain(param_13);
    uVar5 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar5);
    _objc_retain(param_14);
    uVar5 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar5);
    _objc_retain(param_15);
    uVar5 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar5);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104cf286c; end: 104cf2873; -[SCSettingsLogoutRowProvider pageViewName] */

undefined8 FUN_104cf286c(void)

{
  return 0x115;
}



/* Entry: 104cf2874; end: 104cf28ab; -[SCSettingsLogoutRowProvider handleWithContext:] */

void FUN_104cf2874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c10ceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentLogout_112620dc8);
  return;
}



/* Entry: 104cf28ac; end: 104cf290f; -[SCSettingsLogoutRowProvider rowViewModel] */

void FUN_104cf28ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cf2910; end: 104cf291f; -[SCSettingsLogoutRowProvider sectionRow] */

void FUN_104cf2910(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010beef5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_actionsWithRow__112599718,1);
  return;
}



/* Entry: 104cf2920; end: 104cf298f; -[SCSettingsLogoutRowProvider presentLogout] */

void FUN_104cf2920(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9d80();
  _objc_release();
  func_0x000108dcd308();
  lVar2 = lVar1;
  func_0x000108dcd3f8();
  if (lVar1 + lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLogoutProcessWithLogoutInt_11258db00)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentGalleryLogoutAlertWithPe_11257c810,lVar1,lVar2);
  return;
}



/* Entry: 104cf2990; end: 104cf2b43; -[SCSettingsLogoutRowProvider _presentGalleryLogoutAlertWithPendingSnapsCount:failedEntriesCount:] */

void FUN_104cf2990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar9);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104cf2b44;
  puStack_90 = &UNK_110849620;
  uStack_80 = param_3;
  _objc_retain(uVar9);
  ppuVar8 = &puStack_a8;
  uStack_88 = uVar9;
  _objc_retainBlock();
  _objc_initWeak(auStack_b0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  puStack_f0 = puVar7;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_104cf2b60;
  puStack_d8 = &UNK_110849650;
  _objc_retain(ppuVar8);
  ppuStack_d0 = ppuVar8;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  _objc_copyWeak(auStack_c8,auStack_b0);
  puStack_118 = puVar7;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x104cf2c08;
  puStack_100 = &UNK_110849200;
  _objc_copyWeak(auStack_f8,auStack_b0);
  FUN_104cf4368(uVar1,uVar4,uVar2,1,uVar5,uVar3,uVar6,&puStack_f0,&puStack_118);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_c8);
  _objc_release(ppuStack_d0);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar8);
  _objc_release(uStack_88);
  _objc_release(uVar9);
  return;
}



/* Entry: 104cf2b44; end: 104cf2b5f;  */

void FUN_104cf2b44(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(0);
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126dbf90;
  _objc_retain(0);
  _objc_opt_new(puVar2);
  func_0x00010c227140();
  func_0x00010c161ea0(puVar2);
  func_0x00010c182d40(puVar2);
  func_0x00010c204fe0(puVar2);
  func_0x00010c203e20(puVar2);
  func_0x00010c1e2860(puVar2);
  _objc_release(0);
  lVar3 = 0;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1e2820(puVar2);
  }
  uVar4 = uVar1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(0);
  return;
}



/* Entry: 104cf2b60; end: 104cf2c3b;  */

void FUN_104cf2b60(long param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == 0) {
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104cf2bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
      return;
    }
    if (param_4 == 0) {
      return;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bec0560();
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
    if ((*(long *)(param_1 + 0x30) == 0) && (*(long *)(param_1 + 0x38) == 0)) {
      return;
    }
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7b9a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf2c3c; end: 104cf2d4f; -[SCSettingsLogoutRowProvider _presentGalleryBackupWithBackupNow:] */

void FUN_104cf2c3c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0311a0(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf23e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104cf2d50; end: 104cf2d97;  */

void FUN_104cf2d50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84c80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf2d98; end: 104cf2dab;  */

void FUN_104cf2d98(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104cf2da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 104cf2dac; end: 104cf2f8b; -[SCSettingsLogoutRowProvider _startLogoutProcessWithLogoutInterceptors] */

void FUN_104cf2dac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar4 = &puStack_e0;
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104cf2f8c;
  puStack_78 = &UNK_110849680;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0311a0(puVar2);
  puVar3 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104cf2fe8;
  puStack_a0 = &UNK_110849680;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c0311a0(puVar3);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_104cf3044;
  puStack_c8 = &UNK_110849200;
  _objc_copyWeak(auStack_c0,auStack_68);
  _objc_retainBlock(&puStack_e0);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf381a0();
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104cf2f8c; end: 104cf2fd3;  */

void FUN_104cf2f8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84c80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf2fd4; end: 104cf2fe7;  */

void FUN_104cf2fd4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104cf2fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 104cf2fe8; end: 104cf302f;  */

void FUN_104cf2fe8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf3030; end: 104cf3043;  */

void FUN_104cf3030(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104cf303c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 104cf3044; end: 104cf309f;  */

void FUN_104cf3044(long param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    puVar1 = PTR_PTR_1126af4a0;
    _objc_alloc(PTR_PTR_1126af4a0);
    func_0x00010c027b60();
    func_0x00010bec1b60(param_1);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104cf30a0; end: 104cf3147; -[SCSettingsLogoutRowProvider _startSyncLogoutWithLogoutInfo:] */

void FUN_104cf30a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cf3148;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = uVar1;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf3148; end: 104cf328b;  */

void FUN_104cf3148(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126af4a8;
  _objc_alloc(PTR_PTR_1126af4a8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0311a0(puVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  func_0x00010bf22f80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28));
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104cf328c; end: 104cf32d3;  */

void FUN_104cf328c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010befbb60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf32d4; end: 104cf32d7;  */

void FUN_104cf32d4(void)

{
  return;
}



/* Entry: 104cf32d8; end: 104cf3327; -[SCSettingsLogoutRowProvider _presentFromSettingsWithViewController:] */

void FUN_104cf32d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cf3328; end: 104cf337b; -[SCSettingsLogoutRowProvider _pushFromSettingsWithViewController:] */

void FUN_104cf3328(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cf337c; end: 104cf33db; -[SCSettingsLogoutRowProvider didFinishRequestWithLogout:] */

void FUN_104cf337c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_retain(param_3);
  _objc_release(uVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2937a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf33dc; end: 104cf3553; -[SCSettingsLogoutRowProvider didFailRequestWithLogout:] */

void FUN_104cf33dc(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf058;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf058,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf078;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf078,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar3);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  return;
}


