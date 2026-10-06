/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cebe20; end: 104cebeff; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cebe20(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_PTR_1126af418;
  _objc_alloc(PTR_PTR_1126af418);
  lVar4 = param_1;
  func_0x00010bea0280(param_1);
  lVar5 = param_1;
  func_0x00010bea0260(param_1);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112710d0c);
  lVar6 = param_1;
  func_0x00010bde87a0(param_1);
  uVar2 = *(undefined1 *)(param_1 + _DAT_112710d00);
  lVar7 = param_1;
  func_0x00010bea02a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044340(puVar3,param_2,lVar4,lVar5,uVar1,lVar6,uVar2,lVar7,
                      *(undefined8 *)(param_1 + _DAT_112710d10));
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104cebf00; end: 104cebf4f; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic _continueButtonEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104cebf00(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112710d14);
  func_0x00010c08fa60();
  if (uVar1 < 6) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + _DAT_112710d0c) ^ 1;
  }
  return bVar2 & 1;
}



/* Entry: 104cebf50; end: 104cec013; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic handleAction:] */

void FUN_104cebf50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
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
  pcStack_28 = FUN_104cec014;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cec04c;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104cec054;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104cec0a4;
  puStack_98 = &UNK_1108450c8;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_104cec13c;
  puStack_c0 = &UNK_110842e18;
  uStack_b8 = param_1;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bdba0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0,&puStack_d8);
  return;
}



/* Entry: 104cec014; end: 104cec04b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec014(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112710cf8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf5c060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cec04c; end: 104cec053;  */

void FUN_104cec04c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec9550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__switchToSms_11258fef8);
  return;
}



/* Entry: 104cec054; end: 104cec0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec054(long param_1)

{
  long lVar1;
  
  *(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d00) =
       *(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d00) ^ 1;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cec0a4; end: 104cec13b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec0a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d14);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d14) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d10);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d10) = 0;
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar1 + 0x10))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cec13c; end: 104cec15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec13c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010be5ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s__loginWithCode_rememberDevice__1125744e0,
             *(undefined8 *)(lVar1 + _DAT_112710d14),*(undefined1 *)(lVar1 + _DAT_112710d00));
  return;
}



/* Entry: 104cec15c; end: 104cec18b; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic _sendSmsInsteadHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104cec15c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + _DAT_112710cfc) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_112710d18) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 104cec18c; end: 104cec1a3; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic _sendSmsInsteadEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104cec18c(long param_1)

{
  return (*(byte *)(param_1 + _DAT_112710d18) ^ 0xff) & 1;
}



/* Entry: 104cec1a4; end: 104cec1df; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic _sendSmsInsteadTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec1a4(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112710d18) & 1) == 0) {
    func_0x000104cf112c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000104cf1144();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cec1e0; end: 104cec34f; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic _loginWithCode:rememberDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112710d0c) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_112710cf8;
  _objc_loadWeakRetained(param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104cec350;
  puStack_68 = &UNK_110849200;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf5c020(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104cec350; end: 104cec3cb;  */

void FUN_104cec350(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cec3cc; end: 104cec51f; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic _switchToSms] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec3cc(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(char *)(param_1 + _DAT_112710cfc) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112710d18) = 1;
    lVar1 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + _DAT_112710cf8;
    _objc_loadWeakRetained(param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104cec520;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010bf5c040(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 104cec520; end: 104cec593;  */

void FUN_104cec520(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cec594; end: 104cec653; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic _handleLoginSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec594(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_112710d0c) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d10);
  *(undefined8 *)(param_1 + _DAT_112710d10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d04);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  func_0x00010c0a9d40(*(undefined8 *)(param_1 + _DAT_112710d08),param_2,1);
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112710cf8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5c000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cec654; end: 104cec6e7; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic _handleLoginFailure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec654(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112710d0c) = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710d10);
  *(undefined8 *)(param_1 + _DAT_112710d10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  func_0x00010c0a9d00(*(undefined8 *)(param_1 + _DAT_112710d08),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cec6e8; end: 104cec743; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic _handleSwitchToSMSSuccess] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec6e8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112710d18) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d10);
  *(undefined8 *)(param_1 + _DAT_112710d10) = 0;
  _objc_release(uVar1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cec744; end: 104cec7ab; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic _handleSwitchToSMSFailure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112710d18) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d10);
  *(undefined8 *)(param_1 + _DAT_112710d10) = param_3;
  _objc_release(uVar1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cec7ac; end: 104cec817; -[SCCredentialsCOSOTP2FAVerificationBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cec7ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710d08,0);
  _objc_storeStrong(param_1 + _DAT_112710d04,0);
  _objc_storeStrong(param_1 + _DAT_112710d14,0);
  _objc_storeStrong(param_1 + _DAT_112710d10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112710cf8);
  return;
}



/* Entry: 104cec818; end: 104ceca93; -[SCCredentials2FASMSVerificationBusinessLogic initWithDelegate:logInService:usernameOrEmail:phoneNumber:twoFAPreAuthToken:unauthenticatedTwoFAService:resendCode:transitionMomentLogger:twoFALogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104cec818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_70 = PTR_PTR_1126e3c68;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112710d1c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    puVar3 = auStack_68;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112710d20,puVar3);
    _objc_release(puVar3);
    lVar5 = (long)_DAT_112710d24;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112710d28;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112710d2c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112710d30;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112710d34;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112710d38) = 1;
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_112710d3c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112710d40;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  return puVar1;
}



/* Entry: 104ceca94; end: 104cecae7; -[SCCredentials2FASMSVerificationBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceca94(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3c68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  func_0x00010c0a9d20(*(undefined8 *)(param_1 + _DAT_112710d40));
  return;
}



/* Entry: 104cecae8; end: 104cecb77; -[SCCredentials2FASMSVerificationBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cecae8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126af438;
  _objc_alloc(PTR_PTR_1126af438);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112710d44);
  lVar3 = param_1;
  func_0x00010bdfb000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019ca0(puVar2,param_2,uVar1,lVar3,*(undefined8 *)(param_1 + _DAT_112710d48),
                      *(undefined1 *)(param_1 + _DAT_112710d38));
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cecb78; end: 104cecc0b; -[SCCredentials2FASMSVerificationBusinessLogic handleAction:] */

void FUN_104cecb78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cecc0c;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104cecc44;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104cecc94;
  puStack_70 = &UNK_1108450c8;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bdb80(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 104cecc0c; end: 104cecce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cecc0c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112710d20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf5c160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cecce8; end: 104cecf17; -[SCCredentials2FASMSVerificationBusinessLogic submitCode:wasAutofilled:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cecce8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + _DAT_112710d44) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710d3c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710d24);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104cecf18;
  puStack_98 = &UNK_110849260;
  _objc_retain(lVar1);
  lStack_90 = lVar1;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_5);
  uStack_88 = param_5;
  _objc_retain(lVar1);
  _objc_copyWeak(auStack_b8,auStack_78);
  _objc_retain(param_5);
  func_0x00010bf43700(uVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_b8);
  _objc_release(lVar1);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104cecf18; end: 104cecfff;  */

void FUN_104cecf18(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ced000;
  puStack_68 = &UNK_110849230;
  _objc_copyWeak(auStack_50,param_1 + 0x30);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = param_2;
  uStack_48 = param_3;
  _objc_retain(uVar1);
  uStack_58 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 104ced000; end: 104ced037;  */

void FUN_104ced000(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ced038; end: 104ced10f;  */

void FUN_104ced038(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104ced110;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  (**(code **)(lVar2 + 0x10))(lVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104ced110; end: 104ced143;  */

void FUN_104ced110(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ced144; end: 104ced2eb; -[SCCredentials2FASMSVerificationBusinessLogic resendCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ced144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d3c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d28);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104ced2ec;
  puStack_70 = &UNK_110848708;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_3);
  func_0x00010c137f00(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104ced2ec; end: 104ced3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ced2ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112710d3c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0900();
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ced3fc; end: 104ced3ff; -[SCCredentials2FASMSVerificationBusinessLogic codeUpdated:] */

void FUN_104ced3fc(void)

{
  return;
}



/* Entry: 104ced400; end: 104ced477; -[SCCredentials2FASMSVerificationBusinessLogic _descriptionLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ced400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000104cf10fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ced478; end: 104ced543; -[SCCredentials2FASMSVerificationBusinessLogic _handleLogInSuccessWithLoginSuccess:recoveryCodeUsed:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ced478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d3c);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  func_0x00010c0a9d40(*(undefined8 *)(param_1 + _DAT_112710d40));
  (**(code **)(param_5 + 0x10))(param_5,1);
  _objc_release(param_5);
  param_1 = param_1 + _DAT_112710d20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5c140();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ced544; end: 104ced7f7; -[SCCredentials2FASMSVerificationBusinessLogic _handleLogInFailureWithError:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ced544(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 3;
  *(undefined1 *)(param_1 + _DAT_112710d44) = 0;
  uVar1 = param_3;
  func_0x00010c0b3f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd200();
  _objc_release(uVar1);
  (**(code **)(param_4 + 0x10))(param_4,puStack_58[3]);
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  func_0x00010c0a9d00(*(undefined8 *)(param_1 + _DAT_112710d40));
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ced7f8; end: 104ced85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ced7f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d48) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ced860; end: 104ced8d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ced860(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d48) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ced8d8; end: 104ced94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ced8d8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_2;
  _objc_retain();
  lVar2 = param_2;
  if (param_2 == 0) {
    FUN_104cf10e4();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = (long)_DAT_112710d48;
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(lVar3 + lVar4);
  *(long *)(lVar3 + lVar4) = lVar2;
  _objc_release(uVar1);
  if (param_2 == 0) {
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ced950; end: 104cedba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ced950(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710d48) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cedba8; end: 104cedc63; -[SCCredentials2FASMSVerificationBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cedba8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710d40,0);
  _objc_storeStrong(param_1 + _DAT_112710d3c,0);
  _objc_storeStrong(param_1 + _DAT_112710d48,0);
  _objc_storeStrong(param_1 + _DAT_112710d34,0);
  _objc_storeStrong(param_1 + _DAT_112710d30,0);
  _objc_storeStrong(param_1 + _DAT_112710d2c,0);
  _objc_storeStrong(param_1 + _DAT_112710d1c,0);
  _objc_storeStrong(param_1 + _DAT_112710d28,0);
  _objc_storeStrong(param_1 + _DAT_112710d24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112710d20);
  return;
}



/* Entry: 104cedc64; end: 104cedd97; -[SCCredentials2FASMSVerificationViewController initWithSmsScreen:resendableCodeScreen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cedc64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e3c70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112710d4c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112710d50;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112710d54;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af160;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710d58);
    *(undefined **)((long)puVar1 + (long)_DAT_112710d58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af258;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710d5c);
    *(undefined **)((long)puVar1 + (long)_DAT_112710d5c) = puVar3;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cedd98; end: 104cedd9f; -[SCCredentials2FASMSVerificationViewController pageViewName] */

undefined8 FUN_104cedd98(void)

{
  return 0x14b;
}



/* Entry: 104cedda0; end: 104cedda7; -[SCCredentials2FASMSVerificationViewController prefersStatusBarHidden] */

undefined8 FUN_104cedda0(void)

{
  return 1;
}



/* Entry: 104cedda8; end: 104cede07; -[SCCredentials2FASMSVerificationViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cedda8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3c70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d54);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 104cede08; end: 104cedf23; -[SCCredentials2FASMSVerificationViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cede08(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d4c);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104cedf24;
  puStack_58 = &UNK_110849320;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c250380(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d50);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104cedf24; end: 104cedfb3;  */

void FUN_104cedf24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf61a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cedfb4; end: 104cee0e3; -[SCCredentials2FASMSVerificationViewController _resendButtonViewModelUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cedfb4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112710d60;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  _objc_retain(param_4);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf926c0(param_4);
  func_0x00010c21e900(uVar3,param_3,uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c2711a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c216260(uVar3,param_3,uVar1,0);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010bfc26e0(param_2);
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104cee0e4; end: 104cee20b; -[SCCredentials2FASMSVerificationViewController getAppropriateButtonWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104cee0e4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar7 = param_3;
  _objc_release(puVar1);
  lVar6 = (long)_DAT_112710d60;
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar8 = param_4;
  func_0x00010c23d5a0(uVar2);
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2712a0();
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2712a0();
  dVar8 = dVar7 + param_4 + dVar8;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  dVar7 = 225.0;
  if ((225.0 <= dVar8) && (dVar7 = dVar8, param_3 + -40.0 < dVar8)) {
    dVar7 = param_3 + -40.0;
  }
  return dVar7;
}



/* Entry: 104cee20c; end: 104cee317; -[SCCredentials2FASMSVerificationViewController _credentials2FASMSVerificationViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cee20c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112710d64;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf6e540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c080(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  uVar2 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197180(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  uVar2 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c197160(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710d60);
  func_0x00010bfd7e80(param_3);
  func_0x00010c162d00(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  uVar2 = param_3;
  func_0x00010c129380(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1e9cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setRememberDevice__112658158,uVar2);
  return;
}



/* Entry: 104cee318; end: 104cee3ab; -[SCCredentials2FASMSVerificationViewController viewDidLoad] */

void FUN_104cee318(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3c70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c098f40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010beb0d80(param_1);
  return;
}



/* Entry: 104cee3ac; end: 104cee3d7; -[SCCredentials2FASMSVerificationViewController _setupUI] */

void FUN_104cee3ac(undefined8 param_1)

{
  func_0x00010beaadc0();
  func_0x00010beaa500(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startRenderingViewModels_11258df08);
  return;
}



/* Entry: 104cee3d8; end: 104cee4af; -[SCCredentials2FASMSVerificationViewController _setupBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cee3d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126af168;
  _objc_alloc();
  func_0x00010c04ed60();
  lVar4 = (long)_DAT_112710d60;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf13860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104cee4b0; end: 104cee513; -[SCCredentials2FASMSVerificationViewController _setup2FAUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cee4b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af428;
  _objc_alloc();
  func_0x00010bff7260();
  lVar3 = (long)_DAT_112710d64;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1fc390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setSendSmsInsteadButtonHidden__11265cb08,1);
  return;
}



/* Entry: 104cee514; end: 104cee55f; -[SCCredentials2FASMSVerificationViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cee514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710d50);
  puVar1 = PTR_PTR_1126af440;
  func_0x00010c25f020(PTR_PTR_1126af440);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cee560; end: 104cee5ab; -[SCCredentials2FASMSVerificationViewController _backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cee560(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710d4c);
  puVar1 = PTR_PTR_1126af448;
  func_0x00010bf9b400(PTR_PTR_1126af448);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cee5ac; end: 104cee6f3; -[SCCredentials2FASMSVerificationViewController textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104cee5ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112710d5c);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c078f00(uVar4,param_2,param_4,param_5,6);
  uVar3 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar3;
  func_0x00010c25cf80(uVar3,param_2,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112710d50);
  puVar2 = PTR_PTR_1126af440;
  func_0x00010c28bde0(PTR_PTR_1126af440,param_2,uVar1,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112710d4c);
  puVar2 = PTR_PTR_1126af448;
  func_0x00010c28bdc0(PTR_PTR_1126af448,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 104cee6f4; end: 104cee70b; -[SCCredentials2FASMSVerificationViewController textFieldShouldReturn:] */

undefined8 FUN_104cee6f4(void)

{
  func_0x00010bde87c0();
  return 1;
}



/* Entry: 104cee70c; end: 104cee757; -[SCCredentials2FASMSVerificationViewController rememberDeviceSwitchValueChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cee70c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710d4c);
  puVar1 = PTR_PTR_1126af448;
  func_0x00010c129380(PTR_PTR_1126af448);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cee758; end: 104cee7e7; -[SCCredentials2FASMSVerificationViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cee758(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710d54,0);
  _objc_storeStrong(param_1 + _DAT_112710d5c,0);
  _objc_storeStrong(param_1 + _DAT_112710d58,0);
  _objc_storeStrong(param_1 + _DAT_112710d50,0);
  _objc_storeStrong(param_1 + _DAT_112710d4c,0);
  _objc_storeStrong(param_1 + _DAT_112710d64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710d60,0);
  return;
}



/* Entry: 104cee7e8; end: 104cee983; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic initWithCosDelegate:phoneNumber:isSwitchable:resendCode:transitionMomentLogger:twoFALogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104cee7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_70 = PTR_PTR_1126e3c78;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112710d68;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    puVar3 = auStack_68;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112710d6c,puVar3);
    _objc_release(puVar3);
    lVar4 = (long)_DAT_112710d70;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112710d74) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112710d78) = 1;
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    lVar4 = (long)_DAT_112710d7c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112710d80;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  return puVar1;
}



/* Entry: 104cee984; end: 104cee9d7; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cee984(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3c78;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  func_0x00010c0a9d20(*(undefined8 *)(param_1 + _DAT_112710d80));
  return;
}



/* Entry: 104cee9d8; end: 104ceea67; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cee9d8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126af438;
  _objc_alloc(PTR_PTR_1126af438);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112710d84);
  lVar3 = param_1;
  func_0x00010bdfb000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019ca0(puVar2,param_2,uVar1,lVar3,*(undefined8 *)(param_1 + _DAT_112710d88),
                      *(undefined1 *)(param_1 + _DAT_112710d78));
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ceea68; end: 104ceeafb; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic handleAction:] */

void FUN_104ceea68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104ceeafc;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104ceeb34;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104ceeb84;
  puStack_70 = &UNK_1108450c8;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bdb80(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 104ceeafc; end: 104ceebd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceeafc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112710d6c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf5c0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ceebd8; end: 104ceedbb; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic submitCode:wasAutofilled:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceebd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + _DAT_112710d84) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710d7c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  param_1 = param_1 + _DAT_112710d6c;
  _objc_loadWeakRetained(param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104ceedbc;
  puStack_80 = &UNK_110849380;
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_a0,auStack_68);
  func_0x00010bf5c0c0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104ceedbc; end: 104ceee03;  */

void FUN_104ceedbc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec5f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ceee04; end: 104ceee67;  */

void FUN_104ceee04(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  pcVar2 = *(code **)(lVar1 + 0x10);
  _objc_retain(param_2);
  (*pcVar2)(lVar1,3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec5f00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ceee68; end: 104ceef27; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic _submitCodeSucceedWithRecoverCodeUsed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceee68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_112710d84) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d88);
  *(undefined8 *)(param_1 + _DAT_112710d88) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d7c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  func_0x00010c0a9d40(*(undefined8 *)(param_1 + _DAT_112710d80),param_2,0);
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112710d6c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5c080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ceef28; end: 104ceefbb; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic _submitCodeFailedWithErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceef28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_112710d84) = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710d88);
  *(undefined8 *)(param_1 + _DAT_112710d88) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  func_0x00010c0a9d00(*(undefined8 *)(param_1 + _DAT_112710d80),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ceefbc; end: 104cef197; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic resendCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ceefbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d7c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  _objc_initWeak(auStack_58,param_1);
  uStack_78 = 0;
  uStack_68 = 0x2020000000;
  uStack_60 = 0;
  param_1 = param_1 + _DAT_112710d6c;
  puStack_70 = &uStack_78;
  _objc_loadWeakRetained(param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104cef198;
  puStack_98 = &UNK_1108493b0;
  _objc_copyWeak(auStack_80,auStack_58);
  puStack_88 = &uStack_78;
  _objc_retain(param_3);
  uStack_90 = param_3;
  _objc_copyWeak(auStack_b8,auStack_58);
  _objc_retain(param_3);
  func_0x00010bf5c0a0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_80);
  __Block_object_dispose(&uStack_78,8);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104cef198; end: 104cef263;  */

void FUN_104cef198(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be92080();
  _objc_release(lVar1);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x000104cef1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 104cef264; end: 104cef2eb;  */

void FUN_104cef264(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be92060();
  _objc_release(param_2);
  _objc_release(lVar1);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x000104cef2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),2);
  return;
}



/* Entry: 104cef2ec; end: 104cef36f; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic _resendCodeSucceed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cef2ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d88);
  *(undefined8 *)(param_1 + _DAT_112710d88) = 0;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d7c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cef370; end: 104cef3cb; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic _resendCodeFailedWithErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cef370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710d88);
  *(undefined8 *)(param_1 + _DAT_112710d88) = param_3;
  _objc_release(uVar1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cef3cc; end: 104cef3cf; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic codeUpdated:] */

void FUN_104cef3cc(void)

{
  return;
}



/* Entry: 104cef3d0; end: 104cef447; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic _descriptionLabelText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cef3d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000104cf10fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cef448; end: 104cef4c3; -[SCCredentialsCOSSMS2FAVerificationBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cef448(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710d80,0);
  _objc_storeStrong(param_1 + _DAT_112710d7c,0);
  _objc_storeStrong(param_1 + _DAT_112710d88,0);
  _objc_storeStrong(param_1 + _DAT_112710d70,0);
  _objc_storeStrong(param_1 + _DAT_112710d68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112710d6c);
  return;
}



/* Entry: 104cef4c4; end: 104cef70b; -[SCTwoFAAlertPresenter presentRecoveryCodeUsedAlertWithUIContainer:completion:] */

void FUN_104cef4c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  _objc_retainBlock();
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar8);
  puVar2 = auStack_78;
  _objc_initWeak(puVar2,param_1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000104cf1174();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000104cf118c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000104cf11a4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c18b5e0(puVar4);
  func_0x00010bf0c980(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  func_0x00010bf6f440(*(undefined8 *)(param_3 + 0x20));
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be97d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cef70c; end: 104cef747;  */

void FUN_104cef70c(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x20),param_2,0);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be97d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cef748; end: 104cef777; -[SCTwoFAAlertPresenter _runCompletionBlock] */

void FUN_104cef748(long param_1)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cef778; end: 104cef77b; -[SCTwoFAAlertPresenter dialogDidDismiss:] */

void FUN_104cef778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be97d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__runCompletionBlock_112583900);
  return;
}



/* Entry: 104cef77c; end: 104cef787; -[SCTwoFAAlertPresenter .cxx_destruct] */

void FUN_104cef77c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cef788; end: 104cef8ff; -[SCTwoFAFeatureUIRouteActions initWithParentUIContainer:logInServices:loginStateTransitionLogger:twoFALogger:twoFAAlertPresenter:currentPageTracker:] */

undefined1 *
FUN_104cef788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e3c80;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af108;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010bf0c980(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cef900; end: 104cefbdb; -[SCTwoFAFeatureUIRouteActions showCredentials2FASMSVerificationScreen:twoFAChallenge:] */

void FUN_104cef900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126af450;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01de60(0x3ff0000000000000);
  puVar2 = PTR_PTR_1126af458;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000104cf115c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c1c0(puVar2,param_2,6,0,1,0x3c,puVar3,puVar4,puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar3;
  _objc_release(uVar11);
  puVar3 = PTR_PTR_1126af460;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c08d700(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c294420(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c0faf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c105be0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c08da80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a880(puVar3,param_2,param_3,uVar11,uVar10,uVar6,uVar7,uVar9,puVar2,
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar4;
  _objc_release(uVar11);
  puVar4 = PTR_PTR_1126af468;
  _objc_alloc(PTR_PTR_1126af468);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c150e00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c150e00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046dc0(puVar4,param_2,uVar11,uVar10,*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar10);
  _objc_release(uVar11);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,0);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cefbdc; end: 104cefdd7; -[SCTwoFAFeatureUIRouteActions showCredentials2FAOTPVerificationScreen:smsEnabled:twoFAChallenge:] */

void FUN_104cefbdc(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126af470;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c08d700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c294420(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c0faf60(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c105be0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c08da80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a8a0(puVar1,param_2,param_3,uVar9,uVar3,param_4,uVar4,uVar5,uVar7,6,
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar8;
  _objc_release(uVar9);
  puVar8 = PTR_PTR_1126af478;
  _objc_alloc(PTR_PTR_1126af478);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c150e00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0423c0(puVar8,param_2,uVar9,*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar9);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,0);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,puVar8);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cefdd8; end: 104ceffc7; -[SCTwoFAFeatureUIRouteActions showCredentialsCOSSMS2FAVerificationScreen:phoneNumber:isSwitchable:] */

void FUN_104cefdd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126af450;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01de60(0x3ff0000000000000);
  puVar2 = PTR_PTR_1126af458;
  _objc_alloc(PTR_PTR_1126af458);
  puVar3 = puVar2;
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000104cf115c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c1c0(puVar2,param_2,6,0,1,0x3c,puVar3,puVar4,puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar3;
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126af480;
  _objc_alloc(PTR_PTR_1126af480);
  func_0x00010c0060c0();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar4;
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126af468;
  _objc_alloc(PTR_PTR_1126af468);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c150e00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c150e00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046dc0(puVar4,param_2,uVar6,uVar5,*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar5);
  _objc_release(uVar6);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,0);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ceffc8; end: 104cf00af; -[SCTwoFAFeatureUIRouteActions showCredentialsCOSOTP2FAVerificationScreen:isSwitchable:] */

void FUN_104ceffc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af488;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c006080();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126af478;
  _objc_alloc(PTR_PTR_1126af478);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c150e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0423c0(puVar2,param_2,uVar3,*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar3);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,0);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cf00b0; end: 104cf0133; -[SCTwoFAFeatureUIRouteActions presentRecoveryCodeUsedAlertWithCompletion:] */

void FUN_104cf00b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10de00();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cf0134; end: 104cf01c3; -[SCTwoFAFeatureUIRouteActions .cxx_destruct] */

void FUN_104cf0134(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 104cf01c4; end: 104cf0287; -[SCTwoFAWorkflow initWithContext:router:delegate:] */

undefined1 *
FUN_104cf01c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e3c88;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cf0288; end: 104cf0407; -[SCTwoFAWorkflow beginWorkflow] */

void FUN_104cf0288(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104cf0408;
  puStack_68 = &UNK_110849440;
  _objc_copyWeak(auStack_60,auStack_58);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104cf0460;
  puStack_90 = &UNK_110849470;
  _objc_copyWeak(auStack_88,auStack_58);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104cf04a8;
  puStack_b8 = &UNK_110849200;
  _objc_copyWeak(auStack_b0,auStack_58);
  _objc_copyWeak(auStack_d8,auStack_58);
  func_0x00010c0bf2a0(uVar2);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104cf0408; end: 104cf045f;  */

void FUN_104cf0408(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beba320();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf0460; end: 104cf04db;  */

void FUN_104cf0460(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebaf60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf04dc; end: 104cf0533;  */

void FUN_104cf04dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb82e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf0534; end: 104cf060b; -[SCTwoFAWorkflow showCredentials2FASMSVerificationScreenWithChallenge:] */

void FUN_104cf0534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf060c; end: 104cf0663;  */

void FUN_104cf060c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c236da0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf0664; end: 104cf068f; -[SCTwoFAWorkflow credentials2FAOTPVerificationExited] */

void FUN_104cf0664(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27db20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf0690; end: 104cf0693; -[SCTwoFAWorkflow credentials2FAOTPEntryFinishedWithLoginSuccess:recoveryCodeUsed:] */

void FUN_104cf0690(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__twoFAFinishedWithLoginSuccess_r_112591bf0);
  return;
}



/* Entry: 104cf0694; end: 104cf074f; -[SCTwoFAWorkflow credentials2FASMSVerificationExited] */

void FUN_104cf0694(long param_1,undefined8 param_2)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cf0750;
  puStack_20 = &UNK_1108494d0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cf0760;
  puStack_48 = &UNK_110849500;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104cf0790;
  puStack_70 = &UNK_110841f20;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104cf07c0;
  puStack_98 = &UNK_110848678;
  lStack_90 = param_1;
  lStack_68 = param_1;
  lStack_40 = param_1;
  lStack_18 = param_1;
  func_0x00010c0bf2a0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38,&puStack_60,&puStack_88,
                      &puStack_b0);
  return;
}


