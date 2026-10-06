/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049463dc; end: 1049464df; -[FBSDKAppEvents applicationTerminating] */

void FUN_1049463dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da18f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da1958);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c112de0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfa16e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar5 == 0) {
      lVar4 = param_1;
      func_0x00010c112de0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa1720();
      _objc_release(lVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  func_0x00010bf07a60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1049464e0; end: 1049464e3; -[FBSDKAppEvents validateConfiguration] */

void FUN_1049464e0(void)

{
  return;
}



/* Entry: 1049464e4; end: 104946833; -[FBSDKAppEvents requestForCustomAudienceThirdPartyIDWithAccessToken:] */

ulong FUN_1049464e4(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c296860(param_1);
  if (param_3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126add50;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c070ce0();
    if (((ulong)puVar1 & 1) == 0) {
      _objc_release(puVar3);
    }
    else {
      uVar5 = param_1;
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c06bb20();
      _objc_release(uVar5);
      _objc_release(puVar3);
      if ((int)uVar6 == 0) {
        param_3 = (undefined *)0x0;
        goto LAB_1049465a4;
      }
    }
    param_3 = PTR_PTR_1126add30;
    func_0x00010bf5df00();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1049465a4:
  uVar5 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c072280();
  _objc_release(uVar5);
  if ((uVar6 & 1) == 0) {
    puVar3 = PTR_PTR_1126add50;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c070ce0();
    _objc_release(puVar3);
    uVar5 = param_1;
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    if ((int)puVar1 == 0) {
      uVar6 = uVar5;
      func_0x00010befe560();
      _objc_release(uVar5);
      if (uVar6 != 1) goto LAB_104946644;
    }
    else {
      uVar6 = uVar5;
      func_0x00010c06bb20();
      _objc_release(uVar5);
      if ((uVar6 & 1) != 0) {
LAB_104946644:
        uVar5 = param_1;
        func_0x00010bf051c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_1;
        func_0x00010c0b3c00(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010c2732a0(uVar5,param_2,param_3,uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
        if (param_3 == (undefined *)0x0) {
          uVar5 = param_1;
          func_0x00010befe4c0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010befe480();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          if (uVar6 != 0) {
            uVar4 = *(undefined8 *)PTR____NSDictionary0___11034ab50;
            ppuStack_68 = &PTR____CFConstantStringClassReference_110da1c38;
            uStack_60 = uVar6;
            _objc_retain(uVar4);
            func_0x00010bf72080(puVar3,param_2,&uStack_60,&ppuStack_68,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            goto LAB_104946738;
          }
          uVar5 = 0;
        }
        else {
          puVar3 = *(undefined **)PTR____NSDictionary0___11034ab50;
          _objc_retain(puVar3);
          uVar6 = 0;
LAB_104946738:
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar5 = param_1;
          func_0x00010bf05260();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da1c58);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          func_0x00010bfcde20(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_1;
          func_0x00010bf565a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar1);
          _objc_release(puVar3);
          _objc_release(uVar6);
        }
        _objc_release(uVar2);
        goto LAB_1049467e8;
      }
    }
  }
  uVar5 = 0;
LAB_1049467e8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    return *(ulong *)(param_3 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return uVar5;
}



/* Entry: 104946834; end: 10494683b; -[FBSDKAppEvents flushBehavior] */

undefined8 FUN_104946834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10494683c; end: 104946843; -[FBSDKAppEvents setFlushBehavior:] */

void FUN_10494683c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 104946844; end: 10494684b; -[FBSDKAppEvents applicationState] */

undefined8 FUN_104946844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10494684c; end: 104946853; -[FBSDKAppEvents setApplicationState:] */

void FUN_10494684c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 104946854; end: 10494685b; -[FBSDKAppEvents pushNotificationsDeviceTokenString] */

undefined8 FUN_104946854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10494685c; end: 104946863; -[FBSDKAppEvents flushTimer] */

undefined8 FUN_10494685c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104946864; end: 10494686f; -[FBSDKAppEvents setFlushTimer:] */

void FUN_104946864(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 104946870; end: 104946877; -[FBSDKAppEvents isConfigured] */

undefined1 FUN_104946870(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 104946878; end: 10494687f; -[FBSDKAppEvents setIsConfigured:] */

void FUN_104946878(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 104946880; end: 104946887; -[FBSDKAppEvents serverConfiguration] */

undefined8 FUN_104946880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104946888; end: 104946893; -[FBSDKAppEvents setServerConfiguration:] */

void FUN_104946888(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104946894; end: 10494689b; -[FBSDKAppEvents appEventsState] */

undefined8 FUN_104946894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10494689c; end: 1049468a7; -[FBSDKAppEvents setAppEventsState:] */

void FUN_10494689c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 1049468a8; end: 1049468af; -[FBSDKAppEvents _isUnityInitialized] */

undefined1 FUN_1049468a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 1049468b0; end: 1049468b7; -[FBSDKAppEvents set_isUnityInitialized:] */

void FUN_1049468b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 1049468b8; end: 1049468bf; -[FBSDKAppEvents gateKeeperManager] */

undefined8 FUN_1049468b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1049468c0; end: 1049468cb; -[FBSDKAppEvents setGateKeeperManager:] */

void FUN_1049468c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 1049468cc; end: 1049468d3; -[FBSDKAppEvents appEventsConfigurationProvider] */

undefined8 FUN_1049468cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1049468d4; end: 1049468df; -[FBSDKAppEvents setAppEventsConfigurationProvider:] */

void FUN_1049468d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 1049468e0; end: 1049468e7; -[FBSDKAppEvents serverConfigurationProvider] */

undefined8 FUN_1049468e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1049468e8; end: 1049468f3; -[FBSDKAppEvents setServerConfigurationProvider:] */

void FUN_1049468e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1049468f4; end: 1049468fb; -[FBSDKAppEvents graphRequestFactory] */

undefined8 FUN_1049468f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1049468fc; end: 104946907; -[FBSDKAppEvents setGraphRequestFactory:] */

void FUN_1049468fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 104946908; end: 10494690f; -[FBSDKAppEvents featureChecker] */

undefined8 FUN_104946908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104946910; end: 10494691b; -[FBSDKAppEvents setFeatureChecker:] */

void FUN_104946910(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 10494691c; end: 104946923; -[FBSDKAppEvents primaryDataStore] */

undefined8 FUN_10494691c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104946924; end: 10494692f; -[FBSDKAppEvents setPrimaryDataStore:] */

void FUN_104946924(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 104946930; end: 104946937; -[FBSDKAppEvents logger] */

undefined8 FUN_104946930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104946938; end: 104946943; -[FBSDKAppEvents setLogger:] */

void FUN_104946938(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 104946944; end: 10494694b; -[FBSDKAppEvents settings] */

undefined8 FUN_104946944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10494694c; end: 104946957; -[FBSDKAppEvents setSettings:] */

void FUN_10494694c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 104946958; end: 10494695f; -[FBSDKAppEvents paymentObserver] */

undefined8 FUN_104946958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 104946960; end: 10494696b; -[FBSDKAppEvents setPaymentObserver:] */

void FUN_104946960(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 10494696c; end: 104946973; -[FBSDKAppEvents timeSpentRecorder] */

undefined8 FUN_10494696c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 104946974; end: 10494697f; -[FBSDKAppEvents setTimeSpentRecorder:] */

void FUN_104946974(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 104946980; end: 104946987; -[FBSDKAppEvents appEventsStateStore] */

undefined8 FUN_104946980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 104946988; end: 104946993; -[FBSDKAppEvents setAppEventsStateStore:] */

void FUN_104946988(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 104946994; end: 10494699b; -[FBSDKAppEvents eventDeactivationParameterProcessor] */

undefined8 FUN_104946994(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10494699c; end: 1049469a7; -[FBSDKAppEvents setEventDeactivationParameterProcessor:] */

void FUN_10494699c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 1049469a8; end: 1049469af; -[FBSDKAppEvents restrictiveDataFilterParameterProcessor] */

undefined8 FUN_1049469a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1049469b0; end: 1049469bb; -[FBSDKAppEvents setRestrictiveDataFilterParameterProcessor:] */

void FUN_1049469b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 1049469bc; end: 1049469c3; -[FBSDKAppEvents protectedModeManager] */

undefined8 FUN_1049469bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1049469c4; end: 1049469cf; -[FBSDKAppEvents setProtectedModeManager:] */

void FUN_1049469c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xb0,param_3);
  return;
}



/* Entry: 1049469d0; end: 1049469d7; -[FBSDKAppEvents macaRuleMatchingManager] */

undefined8 FUN_1049469d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1049469d8; end: 1049469e3; -[FBSDKAppEvents setMacaRuleMatchingManager:] */

void FUN_1049469d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xb8,param_3);
  return;
}



/* Entry: 1049469e4; end: 1049469eb; -[FBSDKAppEvents blocklistEventsManager] */

undefined8 FUN_1049469e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1049469ec; end: 1049469f7; -[FBSDKAppEvents setBlocklistEventsManager:] */

void FUN_1049469ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 1049469f8; end: 1049469ff; -[FBSDKAppEvents redactedEventsManager] */

undefined8 FUN_1049469f8(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 104946a00; end: 104946a0b; -[FBSDKAppEvents setRedactedEventsManager:] */

void FUN_104946a00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 200,param_3);
  return;
}



/* Entry: 104946a0c; end: 104946a13; -[FBSDKAppEvents sensitiveParamsManager] */

undefined8 FUN_104946a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 104946a14; end: 104946a1f; -[FBSDKAppEvents setSensitiveParamsManager:] */

void FUN_104946a14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 104946a20; end: 104946a27; -[FBSDKAppEvents atePublisherFactory] */

undefined8 FUN_104946a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 104946a28; end: 104946a33; -[FBSDKAppEvents setAtePublisherFactory:] */

void FUN_104946a28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 104946a34; end: 104946a3b; -[FBSDKAppEvents atePublisher] */

undefined8 FUN_104946a34(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 104946a3c; end: 104946a47; -[FBSDKAppEvents setAtePublisher:] */

void FUN_104946a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xe0,param_3);
  return;
}



/* Entry: 104946a48; end: 104946a4f; -[FBSDKAppEvents appEventsStateProvider] */

undefined8 FUN_104946a48(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 104946a50; end: 104946a5b; -[FBSDKAppEvents setAppEventsStateProvider:] */

void FUN_104946a50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xe8,param_3);
  return;
}



/* Entry: 104946a5c; end: 104946a63; -[FBSDKAppEvents advertiserIDProvider] */

undefined8 FUN_104946a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 104946a64; end: 104946a6f; -[FBSDKAppEvents setAdvertiserIDProvider:] */

void FUN_104946a64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xf0,param_3);
  return;
}



/* Entry: 104946a70; end: 104946a77; -[FBSDKAppEvents userDataStore] */

undefined8 FUN_104946a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 104946a78; end: 104946a83; -[FBSDKAppEvents setUserDataStore:] */

void FUN_104946a78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xf8,param_3);
  return;
}



/* Entry: 104946a84; end: 104946a8b; -[FBSDKAppEvents appEventsUtility] */

undefined8 FUN_104946a84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 104946a8c; end: 104946a97; -[FBSDKAppEvents setAppEventsUtility:] */

void FUN_104946a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x100,param_3);
  return;
}



/* Entry: 104946a98; end: 104946a9f; -[FBSDKAppEvents internalUtility] */

undefined8 FUN_104946a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 104946aa0; end: 104946aab; -[FBSDKAppEvents setInternalUtility:] */

void FUN_104946aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x108,param_3);
  return;
}



/* Entry: 104946aac; end: 104946ab3; -[FBSDKAppEvents capiReporter] */

undefined8 FUN_104946aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 104946ab4; end: 104946abf; -[FBSDKAppEvents setCapiReporter:] */

void FUN_104946ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x110,param_3);
  return;
}



/* Entry: 104946ac0; end: 104946ac7; -[FBSDKAppEvents onDeviceMLModelManager] */

undefined8 FUN_104946ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 104946ac8; end: 104946ad3; -[FBSDKAppEvents setOnDeviceMLModelManager:] */

void FUN_104946ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x118,param_3);
  return;
}



/* Entry: 104946ad4; end: 104946adb; -[FBSDKAppEvents metadataIndexer] */

undefined8 FUN_104946ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 104946adc; end: 104946ae7; -[FBSDKAppEvents setMetadataIndexer:] */

void FUN_104946adc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x120,param_3);
  return;
}



/* Entry: 104946ae8; end: 104946aef; -[FBSDKAppEvents skAdNetworkReporter] */

undefined8 FUN_104946ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 104946af0; end: 104946afb; -[FBSDKAppEvents setSkAdNetworkReporter:] */

void FUN_104946af0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x128,param_3);
  return;
}



/* Entry: 104946afc; end: 104946b03; -[FBSDKAppEvents skAdNetworkReporterV2] */

undefined8 FUN_104946afc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 104946b04; end: 104946b0f; -[FBSDKAppEvents setSkAdNetworkReporterV2:] */

void FUN_104946b04(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x130,param_3);
  return;
}



/* Entry: 104946b10; end: 104946b17; -[FBSDKAppEvents codelessIndexer] */

undefined8 FUN_104946b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 104946b18; end: 104946b23; -[FBSDKAppEvents setCodelessIndexer:] */

void FUN_104946b18(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x138,param_3);
  return;
}



/* Entry: 104946b24; end: 104946b2b; -[FBSDKAppEvents swizzler] */

undefined8 FUN_104946b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 104946b2c; end: 104946b37; -[FBSDKAppEvents setSwizzler:] */

void FUN_104946b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x140,param_3);
  return;
}



/* Entry: 104946b38; end: 104946b3f; -[FBSDKAppEvents eventBindingManager] */

undefined8 FUN_104946b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 104946b40; end: 104946b4b; -[FBSDKAppEvents setEventBindingManager:] */

void FUN_104946b40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x148,param_3);
  return;
}



/* Entry: 104946b4c; end: 104946b53; -[FBSDKAppEvents aemReporter] */

undefined8 FUN_104946b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 104946b54; end: 104946b5f; -[FBSDKAppEvents setAemReporter:] */

void FUN_104946b54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x150,param_3);
  return;
}



/* Entry: 104946b60; end: 104946d4b; -[FBSDKAppEvents .cxx_destruct] */

void FUN_104946b60(long param_1)

{
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104946d4c; end: 104946ef7; -[FBSDKAppEventsATEPublisher initWithAppIdentifier:graphRequestFactory:settings:store:deviceInformationProvider:] */

long FUN_104946d4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  uVar3 = param_6;
  _objc_retain(param_6);
  uVar4 = param_7;
  _objc_retain();
  func_0x00010bfee200();
  if (param_1 != 0) {
    puVar5 = PTR_PTR_1126add78;
    func_0x00010bf3f0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      func_0x00010c23cd40(PTR_PTR_1126add38);
      _objc_release(puVar5);
      lVar8 = 0;
      goto LAB_104946ea4;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar5;
    _objc_retain(puVar5);
    _objc_release(uVar7);
    _objc_storeStrong(param_1 + 0x18,param_4);
    _objc_storeStrong(param_1 + 0x20,param_5);
    _objc_storeStrong(param_1 + 0x28,param_6);
    _objc_storeStrong(param_1 + 0x30,param_7);
    _objc_release(puVar5);
  }
  lVar8 = param_1;
  _objc_retain(param_1);
LAB_104946ea4:
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar8;
}



/* Entry: 104946ef8; end: 104947427; -[FBSDKAppEventsATEPublisher publishATE] */

void FUN_104946ef8(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  func_0x00010c07b340();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010c1b39a0(param_2);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = param_2;
    func_0x00010bf05340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = param_2;
    func_0x00010c2573e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfa16e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDate_1126ae770);
    puVar2 = puVar3;
    func_0x00010c075f00();
    if (((int)puVar2 == 0) || (func_0x00010c26f3a0(puVar3), param_1 <= -86400.0)) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(PTR_PTR_1126add78);
      puVar4 = PTR_PTR_1126add20;
      func_0x00010c22c4c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010c0eb960(&uStack_c0,puVar4);
      }
      _objc_release(puVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_90 = &PTR____CFConstantStringClassReference_110da1cd8;
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110da1138;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110da1cf8;
      puVar6 = param_2;
      func_0x00010c227f80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befe560();
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_98 = &PTR____CFConstantStringClassReference_110dd5c18;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_88 = puVar7;
      puStack_80 = puVar5;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar6);
      puVar4 = PTR_PTR_1126add78;
      puVar6 = PTR_PTR_1126add58;
      func_0x00010bdc19c0(PTR_PTR_1126add58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar4);
      _objc_release(puVar6);
      puVar4 = PTR_PTR_1126add78;
      puVar6 = param_2;
      func_0x00010bf70900(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf934e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_2;
      func_0x00010bf70900(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c257120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar4);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar6 = param_2;
      func_0x00010bf05340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = param_2;
      func_0x00010bfcde20(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf56580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puStack_e8 = &uStack_f0;
      uStack_f0 = 0;
      uStack_e0 = 0x3032000000;
      pcStack_d8 = FUN_104947428;
      uStack_d0 = 0x104947438;
      func_0x00010c2573e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      puStack_c8 = param_2;
      _objc_retain();
      func_0x00010c251a80(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      __Block_object_dispose(&uStack_f0,8);
      _objc_release(puStack_c8);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1b39a0(param_2);
    }
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = 8;
  __Block_object_dispose(&uStack_f0);
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  return;
}



/* Entry: 104947428; end: 10494743f;  */

void FUN_104947428(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104947440; end: 1049474ab;  */

void FUN_104947440(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b39b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setIsProcessing__11264a890,0);
  return;
}



/* Entry: 1049474ac; end: 1049474b3; -[FBSDKAppEventsATEPublisher appIdentifier] */

undefined8 FUN_1049474ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1049474b4; end: 1049474bb; -[FBSDKAppEventsATEPublisher graphRequestFactory] */

undefined8 FUN_1049474b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1049474bc; end: 1049474c7; -[FBSDKAppEventsATEPublisher setGraphRequestFactory:] */

void FUN_1049474bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1049474c8; end: 1049474cf; -[FBSDKAppEventsATEPublisher settings] */

undefined8 FUN_1049474c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049474d0; end: 1049474db; -[FBSDKAppEventsATEPublisher setSettings:] */

void FUN_1049474d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1049474dc; end: 1049474e3; -[FBSDKAppEventsATEPublisher store] */

undefined8 FUN_1049474dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1049474e4; end: 1049474ef; -[FBSDKAppEventsATEPublisher setStore:] */

void FUN_1049474e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1049474f0; end: 1049474f7; -[FBSDKAppEventsATEPublisher deviceInformationProvider] */

undefined8 FUN_1049474f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1049474f8; end: 104947503; -[FBSDKAppEventsATEPublisher setDeviceInformationProvider:] */

void FUN_1049474f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}


