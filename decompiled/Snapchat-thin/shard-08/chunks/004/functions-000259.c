/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106075b6c; end: 106075bab; -[TwoFASmsSettingsViewController setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106075b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e03c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106075bac; end: 106075bbb; -[TwoFASmsSettingsViewController userTwoFAServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106075bac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e040);
}



/* Entry: 106075bbc; end: 106075bfb; -[TwoFASmsSettingsViewController setUserTwoFAServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106075bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e040;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106075bfc; end: 106075c0b; -[TwoFASmsSettingsViewController reauthenticationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106075bfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e044);
}



/* Entry: 106075c0c; end: 106075c4b; -[TwoFASmsSettingsViewController setReauthenticationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106075c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e044;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106075c4c; end: 106075c5b; -[TwoFASmsSettingsViewController passwordNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106075c4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e048);
}



/* Entry: 106075c5c; end: 106075c9b; -[TwoFASmsSettingsViewController setPasswordNetworkRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106075c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e048;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106075c9c; end: 106075d97; -[TwoFASmsSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106075c9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e048,0);
  _objc_storeStrong(param_1 + _DAT_11273e044,0);
  _objc_storeStrong(param_1 + _DAT_11273e040,0);
  _objc_storeStrong(param_1 + _DAT_11273e03c,0);
  _objc_storeStrong(param_1 + _DAT_11273e038,0);
  _objc_destroyWeak(param_1 + _DAT_11273e074);
  _objc_storeStrong(param_1 + _DAT_11273e068,0);
  _objc_storeStrong(param_1 + _DAT_11273e064,0);
  _objc_storeStrong(param_1 + _DAT_11273e060,0);
  _objc_storeStrong(param_1 + _DAT_11273e05c,0);
  _objc_storeStrong(param_1 + _DAT_11273e058,0);
  _objc_storeStrong(param_1 + _DAT_11273e054,0);
  _objc_storeStrong(param_1 + _DAT_11273e050,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e04c,0);
  return;
}



/* Entry: 106075d98; end: 106075e1f; +[TwoFAUtilities generateOTPSecret] */

void FUN_106075d98(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,0x14);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)PTR__kSecRandomDefault_110347808;
  ppuVar2 = ppuVar1;
  _objc_retainAutorelease();
  func_0x00010c0d3c60();
  _SecRandomCopyBytes(uVar3,0x14,ppuVar2);
  if ((int)uVar3 == 0) {
    ppuVar2 = ppuVar1;
    func_0x00010bf15d40(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106075e20; end: 106075e73; +[TwoFAUtilities getRecoveryCodeInstructionTextWithSmsTwoFAEnabled:otpTwoFAEnabled:] */

void FUN_106075e20(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  if ((param_3 == 0) || (param_4 == 0)) {
    if (param_3 == 0) {
      if (param_4 != 0) {
        func_0x000106078834();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010607884c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000106078864();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106075e74; end: 106075f63; +[TwoFAUtilities getButton] */

void FUN_106075e74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af938;
  _objc_alloc_init(PTR_PTR_1126af938);
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x403c000000000000);
  _objc_release(puVar2);
  func_0x00010c17d4c0(puVar1,param_2,1);
  func_0x00010c0bbfc0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110909f40);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fb999999999999a);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x52);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106075f64; end: 106076087;  */

void FUN_106075f64(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  func_0x00010c0df720(param_1 * 0.9,puVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106076088; end: 106076097; -[TwoFAWarningViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106076088(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e07c);
}



/* Entry: 106076098; end: 1060760c7; -[TwoFAWarningViewController getTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106076098(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e080);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060760c8; end: 10607643b; -[TwoFAWarningViewController initWithPageViewName:title:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1060760c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_70 = PTR_PTR_1126ef620;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e07c) = param_3;
    lVar3 = (long)_DAT_11273e080;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e084;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e088;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e08c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e090;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e094;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e098;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e09c;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0a0;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0a4;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0a8;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0ac;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0b0;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0b4;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_19;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273e0b8) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273e0bc) = param_6;
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



/* Entry: 10607643c; end: 10607649f; -[TwoFAWarningViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607643c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef620;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  func_0x00010bf557a0(param_1);
  func_0x00010bf56c40(param_1);
  return;
}



/* Entry: 1060764a0; end: 10607681f; -[TwoFAWarningViewController createLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060764a0(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  double dStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar3);
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106076820;
  puStack_98 = &UNK_1108471b0;
  puVar5 = puVar1;
  lStack_90 = param_5;
  func_0x00010c0bbfc0(puVar1,param_6,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x0001060788c4();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bf56be0(param_5,param_6,puVar5,puVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11273e0c0;
  uVar7 = *(undefined8 *)(param_5 + lVar9);
  *(long *)(param_5 + lVar9) = lVar4;
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_5 + lVar9),param_6,puVar5);
  _objc_release(puVar5);
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  uVar7 = *(undefined8 *)(param_5 + lVar9);
  puStack_e8 = puVar3;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106076960;
  puStack_d0 = &UNK_110909c90;
  _objc_retain(puVar1);
  puStack_c8 = puVar1;
  lStack_c0 = param_5;
  dStack_b8 = param_3 * 0.10000000149011612;
  func_0x00010c0bbfc0(uVar7,param_6,&puStack_e8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x0001060788f4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bf56be0(param_5,param_6,uVar7,puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11273e0c4;
  uVar8 = *(undefined8 *)(param_5 + lVar9);
  *(long *)(param_5 + lVar9) = lVar4;
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(uVar7);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_5 + lVar9),param_6,puVar5);
  _objc_release(puVar5);
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puStack_120 = puVar3;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_106076b84;
  puStack_108 = &UNK_11084fbb8;
  lStack_100 = param_5;
  dStack_f8 = param_3;
  uStack_f0 = param_4;
  func_0x00010c0bbfc0(*(undefined8 *)(param_5 + lVar9),param_6,&puStack_120);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puStack_150 = puVar3;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_106076d08;
  puStack_138 = &UNK_11084fc58;
  lStack_130 = param_5;
  puStack_128 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(puVar2,param_6,&puStack_150);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puStack_128);
  _objc_release(puStack_c8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106076820; end: 10607695f;  */

void FUN_106076820(long param_1,long param_2)

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



/* Entry: 106076960; end: 106076b83;  */

void FUN_106076960(long param_1,long param_2)

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



/* Entry: 106076b84; end: 106076d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106076b84(long param_1,long param_2)

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
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273e0c0);
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
  (**(code **)(lVar6 + 0x10))(*(double *)(param_1 + 0x30) * 0.05000000074505806);
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
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106076d08; end: 106076e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106076d08(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273e0c4);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273e0c8);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
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
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bbf20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106076e98; end: 106076f43; -[TwoFAWarningViewController createLabelWithText:font:] */

void FUN_106076e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 106076f44; end: 106077297; -[TwoFAWarningViewController createContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106076f44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126c75a8;
  func_0x00010bfc3280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11273e0c8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  func_0x0001060788dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar5),param_2,puVar1,0);
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar5),param_2,puVar1,2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar4);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar4);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5),param_2,param_1,
                      PTR_s_continueButtonPressed_11252e940,0x40);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10607714c;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106077298; end: 10607729b; -[TwoFAWarningViewController continueButtonPressed] */

void FUN_106077298(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentSetupAuthView_1126212d8);
  return;
}



/* Entry: 10607729c; end: 1060772d7; -[TwoFAWarningViewController leftButtonPressed] */

void FUN_10607729c(undefined8 param_1)

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



/* Entry: 1060772d8; end: 106077413; -[TwoFAWarningViewController presentSetupAuthView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060772d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c7660;
  _objc_alloc(PTR_PTR_1126c7660);
  puVar2 = puVar1;
  func_0x0001060789b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033580(puVar1,*(undefined8 *)(param_1 + _DAT_11273e0ac),0x128,puVar2,1,
                      *(undefined1 *)(param_1 + _DAT_11273e0b8),
                      *(undefined1 *)(param_1 + _DAT_11273e0bc),
                      *(undefined8 *)(param_1 + _DAT_11273e084),
                      *(undefined8 *)(param_1 + _DAT_11273e088),
                      *(undefined8 *)(param_1 + _DAT_11273e08c),
                      *(undefined8 *)(param_1 + _DAT_11273e090),
                      *(undefined8 *)(param_1 + _DAT_11273e094),
                      *(undefined8 *)(param_1 + _DAT_11273e098),
                      *(undefined8 *)(param_1 + _DAT_11273e09c),
                      *(undefined8 *)(param_1 + _DAT_11273e0a0),
                      *(undefined8 *)(param_1 + _DAT_11273e0a4),
                      *(undefined8 *)(param_1 + _DAT_11273e0a8),
                      *(undefined8 *)(param_1 + _DAT_11273e0ac),
                      *(undefined8 *)(param_1 + _DAT_11273e0b0),
                      *(undefined8 *)(param_1 + _DAT_11273e0b4));
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



/* Entry: 106077414; end: 10607741f; -[TwoFAWarningViewController defaultProjectNameV3] */

void FUN_106077414(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106077420; end: 10607742b; -[TwoFAWarningViewController defaultProjectNameV2] */

void FUN_106077420(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 10607742c; end: 10607755b; -[TwoFAWarningViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607742c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e0c8,0);
  _objc_storeStrong(param_1 + _DAT_11273e0c4,0);
  _objc_storeStrong(param_1 + _DAT_11273e0c0,0);
  _objc_storeStrong(param_1 + _DAT_11273e0b4,0);
  _objc_storeStrong(param_1 + _DAT_11273e0b0,0);
  _objc_storeStrong(param_1 + _DAT_11273e0ac,0);
  _objc_storeStrong(param_1 + _DAT_11273e0a8,0);
  _objc_storeStrong(param_1 + _DAT_11273e0a4,0);
  _objc_storeStrong(param_1 + _DAT_11273e0a0,0);
  _objc_storeStrong(param_1 + _DAT_11273e09c,0);
  _objc_storeStrong(param_1 + _DAT_11273e098,0);
  _objc_storeStrong(param_1 + _DAT_11273e094,0);
  _objc_storeStrong(param_1 + _DAT_11273e090,0);
  _objc_storeStrong(param_1 + _DAT_11273e08c,0);
  _objc_storeStrong(param_1 + _DAT_11273e088,0);
  _objc_storeStrong(param_1 + _DAT_11273e084,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e080,0);
  return;
}



/* Entry: 10607755c; end: 10607756b; -[TwoFaSettingsLoadViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607755c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e0cc);
}



/* Entry: 10607756c; end: 10607756f; -[TwoFaSettingsLoadViewController getTitle] */

void FUN_10607756c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_title_112679e90);
  return;
}



/* Entry: 106077570; end: 10607790f; -[TwoFaSettingsLoadViewController initWithServiceClient:pageViewName:title:circumstanceEngine:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106077570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126ef628;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273e0d0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e0cc) = param_4;
    func_0x00010c216240(puVar1);
    lVar3 = (long)_DAT_11273e0d4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0d8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0dc;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0e0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0e4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0e8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0ec;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0f0;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0f4;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0f8;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e0fc;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e100;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e104;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
  }
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106077910; end: 106077973; -[TwoFaSettingsLoadViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106077910(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef628;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  func_0x00010c2381e0(param_1);
  return;
}



/* Entry: 106077974; end: 106077a87; -[TwoFaSettingsLoadViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106077974(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e0e0);
  func_0x00010c27db80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf60280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c7668;
  _objc_opt_new(PTR_PTR_1126c7668);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273e0d0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106077a88;
  puStack_58 = &UNK_110909f60;
  lStack_50 = param_1;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bfcb7e0(uVar4,param_2,puVar3,&puStack_70);
  _objc_release(uVar4);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(puVar3);
  return;
}



/* Entry: 106077a88; end: 106077b1b;  */

void FUN_106077a88(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c23efe0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010c2770e0(), (int)uVar1 == 0)) {
    if (param_3 == 0) {
      func_0x00010bf55de0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      func_0x00010c290360();
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23efe0(param_2);
    func_0x00010c2770e0(param_2);
    func_0x00010bf55fc0(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106077b1c; end: 106077b97; -[TwoFaSettingsLoadViewController useLegacyTfaService:] */

void FUN_106077b1c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07e5a0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c079620(), (int)uVar1 == 0)) {
    func_0x00010bf55de0(param_1);
  }
  else {
    uVar1 = param_3;
    func_0x00010c07e5a0(param_3);
    uVar2 = param_3;
    func_0x00010c079620(param_3);
    func_0x00010bf55fc0(param_1,param_2,uVar1,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106077b98; end: 106077bf7; -[TwoFaSettingsLoadViewController createEnabledViewController:otpEnabled:] */

void FUN_106077b98(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  undefined1 uStack_17;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106077bf8;
  puStack_28 = &UNK_110854380;
  uStack_20 = param_1;
  uStack_18 = param_3;
  uStack_17 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 106077bf8; end: 106077d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106077bf8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c7630;
  _objc_alloc(PTR_PTR_1126c7630);
  puVar2 = puVar1;
  func_0x0001060789b4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c0335c0(puVar1,*(undefined8 *)(lVar4 + _DAT_11273e0fc),0x123,puVar2,1,
                      *(undefined1 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x29),
                      *(undefined8 *)(lVar4 + _DAT_11273e0d8),
                      *(undefined8 *)(lVar4 + _DAT_11273e0dc),
                      *(undefined8 *)(lVar4 + _DAT_11273e0e0),
                      *(undefined8 *)(lVar4 + _DAT_11273e0e4),
                      *(undefined8 *)(lVar4 + _DAT_11273e0e8),
                      *(undefined8 *)(lVar4 + _DAT_11273e0ec),
                      *(undefined8 *)(lVar4 + _DAT_11273e0f0),
                      *(undefined8 *)(lVar4 + _DAT_11273e0f4),
                      *(undefined8 *)(lVar4 + _DAT_11273e0f8),
                      *(undefined8 *)(lVar4 + _DAT_11273e0fc),
                      *(undefined8 *)(lVar4 + _DAT_11273e100),
                      *(undefined8 *)(lVar4 + _DAT_11273e104),
                      *(undefined8 *)(lVar4 + _DAT_11273e0d4),lVar4);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2280a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106077d38; end: 106077d8f; -[TwoFaSettingsLoadViewController createDisabledViewController] */

void FUN_106077d38(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106077d90;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106077d90; end: 106077ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106077d90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c7670;
  _objc_alloc(PTR_PTR_1126c7670);
  puVar2 = puVar1;
  func_0x0001060789b4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c033640(puVar1,*(undefined8 *)(lVar4 + _DAT_11273e100),0x122,puVar2,0,0,
                      *(undefined8 *)(lVar4 + _DAT_11273e0d8),
                      *(undefined8 *)(lVar4 + _DAT_11273e0dc),
                      *(undefined8 *)(lVar4 + _DAT_11273e0e0),
                      *(undefined8 *)(lVar4 + _DAT_11273e0e4),
                      *(undefined8 *)(lVar4 + _DAT_11273e0e8),
                      *(undefined8 *)(lVar4 + _DAT_11273e0ec),
                      *(undefined8 *)(lVar4 + _DAT_11273e0f0),
                      *(undefined8 *)(lVar4 + _DAT_11273e0f4),
                      *(undefined8 *)(lVar4 + _DAT_11273e0f8),
                      *(undefined8 *)(lVar4 + _DAT_11273e0fc),
                      *(undefined8 *)(lVar4 + _DAT_11273e100),
                      *(undefined8 *)(lVar4 + _DAT_11273e104),
                      *(undefined8 *)(lVar4 + _DAT_11273e0d4),lVar4);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2280a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106077ec8; end: 106078093; -[TwoFaSettingsLoadViewController showLoadingScreenWithLabelText:] */

void FUN_106077ec8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106078094; end: 1060780c3; -[TwoFaSettingsLoadViewController hideLoadingScreen] */

void FUN_106078094(undefined8 param_1)

{
  func_0x00010c09d2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060780c4; end: 1060780cf; -[TwoFaSettingsLoadViewController defaultProjectNameV3] */

void FUN_1060780c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 1060780d0; end: 1060780db; -[TwoFaSettingsLoadViewController defaultProjectNameV2] */

void FUN_1060780d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 1060780dc; end: 1060780eb; -[TwoFaSettingsLoadViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060780dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e0d8);
}



/* Entry: 1060780ec; end: 10607812b; -[TwoFaSettingsLoadViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060780ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e0d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10607812c; end: 10607813b; -[TwoFaSettingsLoadViewController userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607812c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e0dc);
}



/* Entry: 10607813c; end: 10607817b; -[TwoFaSettingsLoadViewController setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607813c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e0dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10607817c; end: 10607818b; -[TwoFaSettingsLoadViewController userTwoFAServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607817c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e0e0);
}



/* Entry: 10607818c; end: 1060781cb; -[TwoFaSettingsLoadViewController setUserTwoFAServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607818c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e0e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060781cc; end: 1060781db; -[TwoFaSettingsLoadViewController reauthenticationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060781cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e0e4);
}



/* Entry: 1060781dc; end: 10607821b; -[TwoFaSettingsLoadViewController setReauthenticationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060781dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e0e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10607821c; end: 10607822b; -[TwoFaSettingsLoadViewController passwordNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607821c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e0e8);
}



/* Entry: 10607822c; end: 10607826b; -[TwoFaSettingsLoadViewController setPasswordNetworkRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607822c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e0e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10607826c; end: 10607827b; -[TwoFaSettingsLoadViewController loadingScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10607826c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e108);
}



/* Entry: 10607827c; end: 1060782bb; -[TwoFaSettingsLoadViewController setLoadingScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10607827c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e108;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060782bc; end: 1060783cb; -[TwoFaSettingsLoadViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060782bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e108,0);
  _objc_storeStrong(param_1 + _DAT_11273e0e8,0);
  _objc_storeStrong(param_1 + _DAT_11273e0e4,0);
  _objc_storeStrong(param_1 + _DAT_11273e0e0,0);
  _objc_storeStrong(param_1 + _DAT_11273e0dc,0);
  _objc_storeStrong(param_1 + _DAT_11273e0d8,0);
  _objc_storeStrong(param_1 + _DAT_11273e104,0);
  _objc_storeStrong(param_1 + _DAT_11273e0d4,0);
  _objc_storeStrong(param_1 + _DAT_11273e0d0,0);
  _objc_storeStrong(param_1 + _DAT_11273e100,0);
  _objc_storeStrong(param_1 + _DAT_11273e0fc,0);
  _objc_storeStrong(param_1 + _DAT_11273e0f8,0);
  _objc_storeStrong(param_1 + _DAT_11273e0f4,0);
  _objc_storeStrong(param_1 + _DAT_11273e0f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e0ec,0);
  return;
}



/* Entry: 1060783cc; end: 106078bf3;  */

void FUN_1060783cc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3aef8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e3aef8,
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



/* Entry: 106078bf4; end: 106078c5f; +[SCTwoFAVerifiedDevicesVCState errorWithErrorMessage:] */

void FUN_106078bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7610;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106078c60; end: 106078cc7; +[SCTwoFAVerifiedDevicesVCState loadedWithDevices:] */

void FUN_106078c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7610;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106078cc8; end: 106078d0f; +[SCTwoFAVerifiedDevicesVCState loading] */

void FUN_106078cc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7610;
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



/* Entry: 106078d10; end: 106078d33; -[SCTwoFAVerifiedDevicesVCState copyWithZone:] */

undefined8 FUN_106078d10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106078d34; end: 106078dab; -[SCTwoFAVerifiedDevicesVCState hash] */

void FUN_106078d34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126ef630;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106078dac; end: 106078def; -[SCTwoFAVerifiedDevicesVCState internalInit] */

void FUN_106078dac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ef630;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106078df0; end: 106078ea7; -[SCTwoFAVerifiedDevicesVCState isEqual:] */

long FUN_106078df0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106078e80:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106078e8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106078e8c;
        }
        goto LAB_106078e80;
      }
    }
    lVar3 = 0;
  }
LAB_106078e8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106078ea8; end: 106078f57; -[SCTwoFAVerifiedDevicesVCState matchLoading:loaded:error:] */

void FUN_106078ea8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_106078f34;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 != 1) {
      if ((lVar2 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_106078f34;
    }
    if (param_4 == 0) goto LAB_106078f34;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_106078f34:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106078f58; end: 106078f87; -[SCTwoFAVerifiedDevicesVCState .cxx_destruct] */

void FUN_106078f58(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106078f88; end: 106078ffb; -[UNITwoFaExternalService initWithUnifiedGrpcService:] */

undefined1 * FUN_106078f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef638;
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



/* Entry: 106078ffc; end: 1060790df; -[UNITwoFaExternalService getTwoFaSettingsWithRequest:callOptionsBuilder:handler:] */

void FUN_106078ffc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c7678;
  _objc_opt_class(PTR_PTR_1126c7678);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e3b858,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060790e0; end: 1060790eb; -[UNITwoFaExternalService .cxx_destruct] */

void FUN_1060790e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060790ec; end: 106079153; +[GetTwoFaSettingsRequest descriptor] */

void FUN_1060790ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2c78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac1f60,
                        &PTR____CFConstantStringClassReference_110e3b878,&PTR_DAT_11313b1f8,0,0,4,
                        0x1c);
    puRam00000001136c2c78 = puVar1;
  }
  return;
}



/* Entry: 106079154; end: 106079237; +[GetTwoFaSettingsResponse descriptor] */

void FUN_106079154(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2c80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac1fb0,
                        &PTR____CFConstantStringClassReference_110e3b898,&PTR_DAT_11313b1f8,
                        &PTR_DAT_11313b210,2,4,0x1c);
    puRam00000001136c2c80 = puVar1;
  }
  return;
}



/* Entry: 106079238; end: 106079243;  */

bool FUN_106079238(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106079244; end: 1060792bf;  */

undefined * FUN_106079244(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2c90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e3b8d8,
                        &UNK_10ddd3af8,&UNK_10ddd3b14,2,FUN_1060792c0,0);
    do {
      if (puRam00000001136c2c90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2c90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2c90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2c90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2c90;
}



/* Entry: 1060792c0; end: 1060792cb;  */

bool FUN_1060792c0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1060792cc; end: 106079347;  */

undefined * FUN_1060792cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2c98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e3b8f8,
                        &UNK_10ddd3af8,&UNK_10ddd3b1c,2,FUN_106079348,0);
    do {
      if (puRam00000001136c2c98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2c98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2c98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2c98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2c98;
}



/* Entry: 106079348; end: 106079353;  */

bool FUN_106079348(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106079354; end: 1060793bb; +[OneTapLoginLogoutRequest descriptor] */

void FUN_106079354(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac20a0,
                        &PTR____CFConstantStringClassReference_110e3b918,&PTR_DAT_11313b250,
                        &PTR_s_deviceId_11313b2e8,2,0x18,0x1c);
    puRam00000001136c2ca0 = puVar1;
  }
  return;
}



/* Entry: 1060793bc; end: 106079423; +[OneTapLoginLogoutResponse descriptor] */

void FUN_1060793bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac20f0,
                        &PTR____CFConstantStringClassReference_110e3b938,&PTR_DAT_11313b250,
                        &PTR_s_status_11313b388,6,0x30,0x1c);
    puRam00000001136c2ca8 = puVar1;
  }
  return;
}



/* Entry: 106079424; end: 10607948b; +[DeleteOneTapLoginTokenRequest descriptor] */

void FUN_106079424(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2cb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2140,
                        &PTR____CFConstantStringClassReference_110e3b958,&PTR_DAT_11313b250,
                        &PTR_s_deviceId_11313b268,1,0x10,0x1c);
    puRam00000001136c2cb0 = puVar1;
  }
  return;
}



/* Entry: 10607948c; end: 1060794f3; +[DeleteOneTapLoginTokenResponse descriptor] */

void FUN_10607948c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2cb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2190,
                        &PTR____CFConstantStringClassReference_110e3b978,&PTR_DAT_11313b250,
                        &PTR_s_status_11313b288,1,8,0x1c);
    puRam00000001136c2cb8 = puVar1;
  }
  return;
}



/* Entry: 1060794f4; end: 10607955b; +[DeleteOneTapLoginTokensRequest descriptor] */

void FUN_1060794f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2cc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac21e0,
                        &PTR____CFConstantStringClassReference_110e3b998,&PTR_DAT_11313b250,0,0,4,
                        0x1c);
    puRam00000001136c2cc0 = puVar1;
  }
  return;
}



/* Entry: 10607955c; end: 1060795c3; +[DeleteOneTapLoginTokensResponse descriptor] */

void FUN_10607955c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2230,
                        &PTR____CFConstantStringClassReference_110e3b9b8,&PTR_DAT_11313b250,
                        &PTR_s_status_11313b2a8,1,8,0x1c);
    puRam00000001136c2cc8 = puVar1;
  }
  return;
}



/* Entry: 1060795c4; end: 10607962b; +[GetOneTapLoginTokensRequest descriptor] */

void FUN_1060795c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2280,
                        &PTR____CFConstantStringClassReference_110e3b9d8,&PTR_DAT_11313b250,0,0,4,
                        0x1c);
    puRam00000001136c2cd0 = puVar1;
  }
  return;
}



/* Entry: 10607962c; end: 106079693; +[GetOneTapLoginTokensResponse descriptor] */

void FUN_10607962c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac22d0,
                        &PTR____CFConstantStringClassReference_110e3b9f8,&PTR_DAT_11313b250,
                        &PTR_DAT_11313b2c8,1,0x10,0x1c);
    puRam00000001136c2cd8 = puVar1;
  }
  return;
}



/* Entry: 106079694; end: 106079777; +[OneTapLoginTokenDescriptor descriptor] */

void FUN_106079694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2320,
                        &PTR____CFConstantStringClassReference_110e3ba18,&PTR_DAT_11313b250,
                        &PTR_DAT_11313b328,3,0x20,0x1c);
    puRam00000001136c2ce0 = puVar1;
  }
  return;
}



/* Entry: 106079778; end: 106079783;  */

bool FUN_106079778(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106079784; end: 1060797eb; +[GetActiveSessionsExternalRequest descriptor] */

void FUN_106079784(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2cf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac23c0,
                        &PTR____CFConstantStringClassReference_110e3ba58,&PTR_DAT_11313b448,0,0,4,
                        0x1c);
    puRam00000001136c2cf0 = puVar1;
  }
  return;
}



/* Entry: 1060797ec; end: 106079853; +[GetActiveSessionsExternalResponse descriptor] */

void FUN_1060797ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2cf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2410,
                        &PTR____CFConstantStringClassReference_110e3ba78,&PTR_DAT_11313b448,
                        &PTR_DAT_11313b460,2,0x18,0x1c);
    puRam00000001136c2cf8 = puVar1;
  }
  return;
}



/* Entry: 106079854; end: 1060798bb; +[RevokeSessionExternalRequest descriptor] */

void FUN_106079854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2460,
                        &PTR____CFConstantStringClassReference_110e3ba98,&PTR_DAT_11313b448,
                        &PTR_s_surface_11313b4a0,2,0x10,0x1c);
    puRam00000001136c2d00 = puVar1;
  }
  return;
}



/* Entry: 1060798bc; end: 106079923; +[RevokeSessionExternalResponse descriptor] */

void FUN_1060798bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac24b0,
                        &PTR____CFConstantStringClassReference_110e3bab8,&PTR_DAT_11313b448,0,0,4,
                        0x1c);
    puRam00000001136c2d08 = puVar1;
  }
  return;
}



/* Entry: 106079924; end: 10607999f; +[AddressExternal descriptor] */

undefined * FUN_106079924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2500,
                        &PTR____CFConstantStringClassReference_110e3bad8,&PTR_DAT_11313b448,
                        &PTR_DAT_11313b4e0,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2d10 = puVar1;
  }
  return puRam00000001136c2d10;
}



/* Entry: 1060799a0; end: 106079a07; +[SessionExternal descriptor] */

void FUN_1060799a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2550,
                        &PTR____CFConstantStringClassReference_110e3baf8,&PTR_DAT_11313b448,
                        &PTR_s_surface_11313b540,6,0x30,0x1c);
    puRam00000001136c2d18 = puVar1;
  }
  return;
}



/* Entry: 106079a08; end: 106079a83; +[SCAuthCreateClientRequest descriptor] */

undefined * FUN_106079a08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac25f0,
                        &PTR____CFConstantStringClassReference_110e3bb18,&PTR_DAT_11313b600,
                        &PTR_DAT_11313b6b8,7,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2d20 = puVar1;
  }
  return puRam00000001136c2d20;
}



/* Entry: 106079a84; end: 106079aeb; +[SCAuthCreateClientResponse descriptor] */

void FUN_106079a84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2640,
                        &PTR____CFConstantStringClassReference_110e3bb38,&PTR_DAT_11313b600,
                        &PTR_DAT_11313b678,2,0x18,0x1c);
    puRam00000001136c2d28 = puVar1;
  }
  return;
}



/* Entry: 106079aec; end: 106079b53; +[SCAuthGetClientRequest descriptor] */

void FUN_106079aec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2690,
                        &PTR____CFConstantStringClassReference_110e3bb58,&PTR_DAT_11313b600,
                        &PTR_DAT_11313b618,1,0x10,0x1c);
    puRam00000001136c2d30 = puVar1;
  }
  return;
}



/* Entry: 106079b54; end: 106079bbb; +[SCAuthGetClientResponse descriptor] */

void FUN_106079b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac26e0,
                        &PTR____CFConstantStringClassReference_110e3bb78,&PTR_DAT_11313b600,
                        &PTR_s_client_11313b638,1,0x10,0x1c);
    puRam00000001136c2d38 = puVar1;
  }
  return;
}



/* Entry: 106079bbc; end: 106079c37; +[SCAuthUpdateClientRequest descriptor] */

undefined * FUN_106079bbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2730,
                        &PTR____CFConstantStringClassReference_110e3bb98,&PTR_DAT_11313b600,
                        &PTR_DAT_11313b798,7,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2d40 = puVar1;
  }
  return puRam00000001136c2d40;
}



/* Entry: 106079c38; end: 106079c9f; +[SCAuthUpdateClientResponse descriptor] */

void FUN_106079c38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2780,
                        &PTR____CFConstantStringClassReference_110e3bbb8,&PTR_DAT_11313b600,0,0,4,
                        0x1c);
    puRam00000001136c2d48 = puVar1;
  }
  return;
}



/* Entry: 106079ca0; end: 106079d07; +[SCAuthDeleteClientsRequest descriptor] */

void FUN_106079ca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac27d0,
                        &PTR____CFConstantStringClassReference_110e3bbd8,&PTR_DAT_11313b600,
                        &PTR_DAT_11313b658,1,0x10,0x1c);
    puRam00000001136c2d50 = puVar1;
  }
  return;
}


