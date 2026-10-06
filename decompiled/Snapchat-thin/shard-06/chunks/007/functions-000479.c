/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d242d8; end: 104d24347; -[SCUnauthenticatedEntryPoint _isRegistrationHostWarmupEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d242d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112711638;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 104d24348; end: 104d243c7; -[SCUnauthenticatedEntryPoint _registrationHostWarmupRecurringIntervalMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d24348(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112711638;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b5020();
  _objc_release(lVar1);
  _objc_release(param_1);
  return (long)((double)lVar2 * 1000.0);
}



/* Entry: 104d243c8; end: 104d245ff; -[SCUnauthenticatedEntryPoint _periodicWarmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d243c8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *puVar7;
  undefined *unaff_x27;
  undefined *puStack_80;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_1;
  func_0x00010be432c0();
  if ((int)puVar7 != 0) {
    puVar7 = param_1;
    FUN_104d24160();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = puVar1;
    func_0x00010c25cd80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar7);
    unaff_x20 = unaff_x19;
    func_0x000100504554(unaff_x19,&PTR___NSConcreteGlobalBlock_11084b420);
    if (param_1 == (undefined *)0x0) goto LAB_104d245f8;
    puVar7 = param_1 + _DAT_1127116a4;
    _objc_loadWeakRetained(puVar7);
    while( true ) {
      puVar1 = puVar7;
      func_0x00010c0f99a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = unaff_x19;
      func_0x00010bf529e0();
      puVar4 = unaff_x20;
      if (puVar3 == (undefined *)0x0) {
        puStack_80 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar5 = PTR_PTR_1126af8c0;
      _objc_alloc(PTR_PTR_1126af8c0);
      func_0x00010be8a0e0(param_1);
      func_0x00010c01e980(puVar5);
      param_1 = puVar2;
      func_0x00010bf57800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar3 == (undefined *)0x0) {
        _objc_release(puVar4);
        _objc_release(unaff_x27);
        _objc_release(puStack_80);
      }
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar7);
      _objc_release(unaff_x20);
      _objc_release(unaff_x19);
LAB_104d245b8:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) break;
      ___stack_chk_fail();
LAB_104d245f8:
      puVar7 = (undefined *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  param_1 = (undefined *)0x0;
  goto LAB_104d245b8;
}



/* Entry: 104d24600; end: 104d2460f;  */

void FUN_104d24600(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,param_2);
  return;
}



/* Entry: 104d24610; end: 104d24887; -[SCUnauthenticatedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d24610(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711644);
  _objc_storeStrong(param_1 + _DAT_1127116ac,0);
  _objc_storeStrong(param_1 + _DAT_11271162c,0);
  _objc_storeStrong(param_1 + _DAT_112711628,0);
  _objc_storeStrong(param_1 + _DAT_11271163c,0);
  _objc_storeStrong(param_1 + _DAT_11271161c,0);
  _objc_storeStrong(param_1 + _DAT_112711618,0);
  _objc_storeStrong(param_1 + _DAT_112711610,0);
  _objc_storeStrong(param_1 + _DAT_112711624,0);
  _objc_storeStrong(param_1 + _DAT_112711608,0);
  _objc_storeStrong(param_1 + _DAT_112711604,0);
  _objc_destroyWeak(param_1 + _DAT_112711640);
  _objc_destroyWeak(param_1 + _DAT_11271168c);
  _objc_destroyWeak(param_1 + _DAT_112711684);
  _objc_destroyWeak(param_1 + _DAT_112711680);
  _objc_destroyWeak(param_1 + _DAT_1127116a8);
  _objc_destroyWeak(param_1 + _DAT_1127116a4);
  _objc_destroyWeak(param_1 + _DAT_11271166c);
  _objc_destroyWeak(param_1 + _DAT_112711690);
  _objc_destroyWeak(param_1 + _DAT_112711674);
  _objc_destroyWeak(param_1 + _DAT_112711638);
  _objc_destroyWeak(param_1 + _DAT_11271164c);
  _objc_destroyWeak(param_1 + _DAT_112711688);
  _objc_destroyWeak(param_1 + _DAT_112711600);
  _objc_destroyWeak(param_1 + _DAT_1127115fc);
  _objc_destroyWeak(param_1 + _DAT_11271167c);
  _objc_destroyWeak(param_1 + _DAT_112711648);
  _objc_destroyWeak(param_1 + _DAT_112711634);
  _objc_destroyWeak(param_1 + _DAT_112711660);
  _objc_destroyWeak(param_1 + _DAT_112711698);
  _objc_destroyWeak(param_1 + _DAT_112711668);
  _objc_destroyWeak(param_1 + _DAT_112711678);
  _objc_destroyWeak(param_1 + _DAT_112711670);
  _objc_destroyWeak(param_1 + _DAT_1127116a0);
  _objc_destroyWeak(param_1 + _DAT_11271165c);
  _objc_destroyWeak(param_1 + _DAT_112711620);
  _objc_destroyWeak(param_1 + _DAT_112711614);
  _objc_destroyWeak(param_1 + _DAT_112711664);
  _objc_destroyWeak(param_1 + _DAT_11271169c);
  _objc_destroyWeak(param_1 + _DAT_112711630);
  _objc_destroyWeak(param_1 + _DAT_11271160c);
  _objc_destroyWeak(param_1 + _DAT_112711654);
  _objc_destroyWeak(param_1 + _DAT_112711658);
  _objc_destroyWeak(param_1 + _DAT_1127115f8);
  _objc_storeStrong(param_1 + _DAT_112711650,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711694,0);
  return;
}



/* Entry: 104d24888; end: 104d24953; -[SCUnauthenticatedFeatureLogger initWithRegistrationUserNotTrackedLogger:loginInfoRepository:installServices:] */

undefined1 *
FUN_104d24888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e3ec0;
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



/* Entry: 104d24954; end: 104d24af7; -[SCUnauthenticatedFeatureLogger logRegistrationUserSplashScreenPageviewWithVersion:] */

void FUN_104d24954(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  puVar1 = PTR_PTR_1126af8c8;
  _objc_opt_new(PTR_PTR_1126af8c8);
  func_0x00010c1e99a0();
  uVar6 = param_1;
  func_0x00010be40800(param_1);
  uVar6 = uVar6 & 0xffffffff;
  func_0x00010c165a20(puVar1,param_2,uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c072f80(uVar2);
  func_0x00010c1b10c0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abcc0();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c249fc0(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3dd8(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110db0338,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c072f80(uVar2);
  func_0x00010c25d8c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110daf5d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0();
  _objc_release(uVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d24af8; end: 104d24c0f; -[SCUnauthenticatedFeatureLogger logRegistrationUserSignupPageviewWithVersion:] */

void FUN_104d24af8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010be470a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beda5c0(param_1);
  puVar2 = PTR_PTR_1126af8d0;
  _objc_opt_new(PTR_PTR_1126af8d0);
  func_0x00010c1e99a0();
  func_0x00010c1b84a0(puVar2,param_2,lVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abcc0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af378;
  func_0x00010c23c560(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0(uVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010be54580(param_1,param_2,0x1e);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d24c10; end: 104d24c83; -[SCUnauthenticatedFeatureLogger logLoginSignupView] */

void FUN_104d24c10(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af378;
  func_0x00010c0b4340(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be54590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logGraphenePageViewWithPage__112572b00,0x1d)
  ;
  return;
}



/* Entry: 104d24c84; end: 104d24dc7; -[SCUnauthenticatedFeatureLogger logRegistrationUserSuccessWithUnverifiedUserId:verificationChannel:] */

void FUN_104d24c84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af8d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af390;
  func_0x00010bfbb8a0(PTR_PTR_1126af390);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a95a0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1ada20(puVar1,param_2,puVar2);
  func_0x00010c1e99a0(puVar1,param_2,1);
  func_0x00010c21e4c0(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c17aae0(puVar1,param_2,param_4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c23c4a0(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d24dc8; end: 104d24e8f; -[SCUnauthenticatedFeatureLogger _isFirstSplashScreenVisit] */

undefined8 FUN_104d24dc8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd8b00();
    _objc_release(uVar3);
    if ((int)uVar4 == 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104d24e90; end: 104d24f13; -[SCUnauthenticatedFeatureLogger _lastSignupPageviewTimestamp] */

void FUN_104d24e90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar3 = puVar2;
  func_0x00010c0b4ca0(puVar2);
  func_0x00010bf655e0((double)(long)puVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d24f14; end: 104d24f9f; -[SCUnauthenticatedFeatureLogger _updateLastSignupPageviewTimestamp] */

void FUN_104d24f14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d24fa0; end: 104d2504b; -[SCUnauthenticatedFeatureLogger _logGraphenePageViewWithPage:] */

void FUN_104d24fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af378;
  func_0x00010c0b4320(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daedd8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d2504c; end: 104d250b3; -[SCUnauthenticatedFeatureLogger logRegistrationFlowEvent:pageType:unverifiedUserId:] */

void FUN_104d2504c(long param_1)

{
  undefined8 in_x4;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(in_x4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada80();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d250b4; end: 104d25113; -[SCUnauthenticatedFeatureLogger logPageView:unverifiedUserId:] */

void FUN_104d250b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abcc0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d25114; end: 104d25183; -[SCUnauthenticatedFeatureLogger logRegistrationNetworkRequestWithEndpoint:requestId:] */

void FUN_104d25114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adaa0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d25184; end: 104d25223; -[SCUnauthenticatedFeatureLogger logRegistrationNetworkResponseWithEndpoint:requestId:success:grpcStatusCode:protoStatusCode:latencyMS:] */

void FUN_104d25184(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adac0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d25224; end: 104d2525f; -[SCUnauthenticatedFeatureLogger .cxx_destruct] */

void FUN_104d25224(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d25260; end: 104d252bf;  */

void FUN_104d25260(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08d220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136b8b10;
  uRam00000001136b8b10 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d252c0; end: 104d2572f; -[SCUnauthenticatedFeatureUIRouteActions initWithUnauthenticatedUIContainer:oneTapLoginScopeExposer:preRegistrationScopeExposer:privacyPolicyViewFactory:registrationScopeExposer:registrationScopeServices:logInScopeExposer:userVerificationScopeExposer:userVerificationScopeServices:ngoRegistrationScopeExposer:tivNonceLoginScopeExposer:registrationDataResumingScopeExposer:oAuthScopeExposer:lazyAppTerminator:splashPageABRetriever:oAuthLoginABRetriever:currentPageTracker:circumstanceEngine:phoneEmailFirstLogInScopeExposer:cos:ghostImageService:] */

undefined8 *
FUN_104d252c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126e3ec8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_23;
    _objc_release(uVar2);
    func_0x00010c126100(puVar1[0x11]);
    func_0x00010c126100(puVar1[0x12]);
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



/* Entry: 104d25730; end: 104d2598b; -[SCUnauthenticatedFeatureUIRouteActions showUnauthenticatedLandingPage] */

void FUN_104d25730(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  plVar7 = (long *)(param_1 + 0x88);
  func_0x00010c251740(*plVar7);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c251740();
  func_0x00010af82634();
  if (lVar1 == 0) {
    lVar6 = *plVar7;
    _objc_retain(lVar6);
    lVar1 = lRam00000001136b8b18;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104d25260;
    puStack_70 = &UNK_110842e18;
    lStack_68 = lVar6;
    _objc_retain(lVar6);
    lVar2 = lVar6;
    if (lVar1 != -1) {
      func_0x00010002a2fc(0x1136b8b18,&puStack_88);
      lVar2 = lStack_68;
    }
    lVar1 = lRam00000001136b8b10;
    _objc_retain(lRam00000001136b8b10);
    _objc_release(lVar2);
    _objc_release(lVar6);
    lVar2 = lVar1;
    func_0x000104d27b9c();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar6 = *plVar7;
      _objc_retain(lVar6);
      lVar1 = lRam00000001136b8b28;
      puStack_88 = puVar3;
      uStack_80 = 0xc2000000;
      pcStack_78 = (code *)0x104d25290;
      puStack_70 = &UNK_110842e18;
      lStack_68 = lVar6;
      _objc_retain(lVar6);
      lVar2 = lVar6;
      if (lVar1 != -1) {
        func_0x00010002a2fc(0x1136b8b28,&puStack_88);
        lVar2 = lStack_68;
      }
      uVar5 = uRam00000001136b8b20;
      _objc_retain(uRam00000001136b8b20);
      _objc_release(lVar2);
      _objc_release(lVar6);
      puVar3 = PTR_PTR_1126af8e8;
      _objc_alloc(PTR_PTR_1126af8e8);
      func_0x00010c033100();
      func_0x00010bf0c980(*(undefined8 *)(param_1 + 8));
      goto LAB_104d2590c;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  puVar3 = PTR_PTR_1126af008;
  func_0x00010c249f80(PTR_PTR_1126af008);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c263200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126af8e0;
  _objc_alloc(PTR_PTR_1126af8e0);
  func_0x00010c0071e0();
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8));
  func_0x00010bf881e0(*(undefined8 *)(param_1 + 0x88));
  plVar7 = (long *)(param_1 + 0x90);
LAB_104d2590c:
  func_0x00010bf881e0(*plVar7);
  puVar4 = puVar3;
  func_0x00010c2910e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d2598c; end: 104d259f3; -[SCUnauthenticatedFeatureUIRouteActions startOneTapLogin:] */

void FUN_104d2598c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af8f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00afc0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d259f4; end: 104d25a63; -[SCUnauthenticatedFeatureUIRouteActions endOneTapLogin] */

void FUN_104d259f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d25a64; end: 104d25a77; -[SCUnauthenticatedFeatureUIRouteActions startRegistration:registrationMethod:] */

void FUN_104d25a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_startRegistration_birthday_email_112671ae8,param_3,0,0,0,param_4);
  return;
}



/* Entry: 104d25a78; end: 104d25b6f; -[SCUnauthenticatedFeatureUIRouteActions startRegistration:birthday:email:registrationPhoneNumber:registrationMethod:] */

void FUN_104d25a78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af8f8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff7820();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf23020(uVar2,param_2,param_3,*(undefined8 *)(param_1 + 8),puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d25b70; end: 104d25bdf; -[SCUnauthenticatedFeatureUIRouteActions endRegistration] */

void FUN_104d25b70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d25be0; end: 104d25c77; -[SCUnauthenticatedFeatureUIRouteActions startResumeRegistrationDataWithDelegate:] */

void FUN_104d25be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af900;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  func_0x00010c0582c0(puVar1,param_2,puVar2,param_3);
  _objc_release(param_3);
  func_0x00010bf9d620(uVar3,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d25c78; end: 104d25cbf; -[SCUnauthenticatedFeatureUIRouteActions endResumeRegistrationData] */

void FUN_104d25c78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104d25cc0; end: 104d25d27; -[SCUnauthenticatedFeatureUIRouteActions startPreRegistration:] */

void FUN_104d25cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af908;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00afc0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d25d28; end: 104d25d97; -[SCUnauthenticatedFeatureUIRouteActions endPreRegistration] */

void FUN_104d25d28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d25d98; end: 104d25e37; -[SCUnauthenticatedFeatureUIRouteActions startPhoneEmailFirstLogIn:lastLoginUsername:lastLoginPhoneNumber:] */

void FUN_104d25d98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af910;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00b0e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d25e38; end: 104d25e57; -[SCUnauthenticatedFeatureUIRouteActions endPhoneEmailFirstLogIn] */

void FUN_104d25e38(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d25e58; end: 104d25eff; -[SCUnauthenticatedFeatureUIRouteActions startLogIn:lastLoginUsername:lastLoginPhoneNumber:isFromPhoneEmailFirstPage:] */

void FUN_104d25e58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af918;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00b100();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d25f00; end: 104d25f6f; -[SCUnauthenticatedFeatureUIRouteActions endLogIn] */

void FUN_104d25f00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d25f70; end: 104d25fdf; -[SCUnauthenticatedFeatureUIRouteActions startUserVerificationWithUserId:username:authToken:verificationFlowMethod:context:delegate:] */

void FUN_104d25f70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf23c60(uVar1,param_2,*(undefined8 *)(param_1 + 8),param_7,param_8,param_3,param_4,
                      param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d25fe0; end: 104d2604f; -[SCUnauthenticatedFeatureUIRouteActions endUserVerification] */

void FUN_104d25fe0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d26050; end: 104d260bf; -[SCUnauthenticatedFeatureUIRouteActions startNGORegistrationWithDelegate:] */

void FUN_104d26050(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126af920;
    _objc_alloc(PTR_PTR_1126af920);
    func_0x00010c0567c0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d260c0; end: 104d2612f; -[SCUnauthenticatedFeatureUIRouteActions endNGORegistration] */

void FUN_104d260c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d26130; end: 104d2625f; -[SCUnauthenticatedFeatureUIRouteActions startTIVNonceLogin:delegate:] */

void FUN_104d26130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af928;
  _objc_alloc();
  func_0x00010c0500a0();
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bec1ba0(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010be09e60(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d26260; end: 104d26293;  */

void FUN_104d26260(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec1ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d26294; end: 104d2629b; -[SCUnauthenticatedFeatureUIRouteActions endTIVNonceLogin] */

void FUN_104d26294(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endTIVNonceLogin__112560138,0);
  return;
}



/* Entry: 104d2629c; end: 104d2633b; -[SCUnauthenticatedFeatureUIRouteActions _endTIVNonceLogin:] */

void FUN_104d2629c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c12e1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104d2633c;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c2a4ae0(uVar1,param_2,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104d2633c; end: 104d2634f;  */

void FUN_104d2633c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104d26348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104d26350; end: 104d26357; -[SCUnauthenticatedFeatureUIRouteActions _startTIVNonceLogin:] */

void FUN_104d26350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_exposeScope__1125c4f30);
  return;
}



/* Entry: 104d26358; end: 104d26517; -[SCUnauthenticatedFeatureUIRouteActions showRegistrationInCooldownDialog] */

void FUN_104d26358(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_58;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108b9a8c4();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000108b9aa74();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  puVar1 = auStack_58;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be032e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d26518; end: 104d26543;  */

void FUN_104d26518(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be032e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d26544; end: 104d26553; -[SCUnauthenticatedFeatureUIRouteActions _dismissRegistrationInCooldownDialog] */

void FUN_104d26544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104d26554; end: 104d26617; -[SCUnauthenticatedFeatureUIRouteActions startOAuthSignInWithDelegate:oAuthType:optedIn1TLStatus:] */

void FUN_104d26554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126af930;
  _objc_alloc(PTR_PTR_1126af930);
  func_0x00010c00aa60();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d26618; end: 104d26637; -[SCUnauthenticatedFeatureUIRouteActions endOAuthSignIn] */

void FUN_104d26618(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d26638; end: 104d26703; -[SCUnauthenticatedFeatureUIRouteActions showCOSChallenge:authSessionPayload:clientRequestId:delegate:] */

void FUN_104d26638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf048a0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d26704; end: 104d2682f; -[SCUnauthenticatedFeatureUIRouteActions .cxx_destruct] */

void FUN_104d26704(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d26830; end: 104d2685f; -[SCUnauthenticatedLandingPage userActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d26830(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711718);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d26860; end: 104d26867; -[SCUnauthenticatedLandingPage pageViewName] */

undefined8 FUN_104d26860(void)

{
  return 0x90;
}



/* Entry: 104d26868; end: 104d26873; -[SCUnauthenticatedLandingPage supportedInterfaceOrientations] */

undefined8 FUN_104d26868(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 104d26874; end: 104d2687b; -[SCUnauthenticatedLandingPage prefersStatusBarHidden] */

undefined8 FUN_104d26874(void)

{
  return 1;
}



/* Entry: 104d2687c; end: 104d2698f; -[SCUnauthenticatedLandingPage initWithCurrentPageTracker:oAuthTypes:ghostImageService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d2687c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e3ed0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112711718);
    *(undefined **)((long)puVar1 + (long)_DAT_112711718) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11271171c;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112711720;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112711724;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d26990; end: 104d26a17; -[SCUnauthenticatedLandingPage viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d26990(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3ed0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271171c);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar2);
  return;
}



/* Entry: 104d26a18; end: 104d26a8b; -[SCUnauthenticatedLandingPage loadView] */

void FUN_104d26a18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d26a8c; end: 104d26b4b; -[SCUnauthenticatedLandingPage viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d26a8c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3ed0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  lVar1 = *(long *)(param_1 + _DAT_112711720);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bea93a0(param_1);
  }
  else {
    func_0x00010bea93e0(param_1);
  }
  func_0x00010befc680(param_1);
  func_0x00010bdc6fc0(param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar2);
  return;
}



/* Entry: 104d26b4c; end: 104d27017; -[SCUnauthenticatedLandingPage _setUpForControl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d26b4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bdf3580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(lVar1,param_2,0);
  puVar26 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  lStack_a0 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf493a0(lVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  lStack_98 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar10;
  func_0x00010bf493a0(lVar10,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  lStack_90 = lVar13;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar26,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bdefac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c219b60(lVar2,param_2,0);
  puVar26 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  lStack_c0 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010bf493a0(lVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  lStack_b8 = lVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  lStack_b0 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bf493a0(lVar13,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_a8 = lVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_c0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar26,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar17 = *(undefined8 *)(param_1 + _DAT_112711728);
  *(long *)(param_1 + _DAT_112711728) = lVar2;
  _objc_release(uVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  func_0x00010bdf3580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c219b60(lVar2,param_2,0);
  puVar26 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  lStack_1a0 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010bf493a0(lVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  lStack_198 = lVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar11;
  func_0x00010bf493a0(lVar11,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  lStack_190 = lVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar15;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_188 = lVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_1a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar26,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(lVar18);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010bdefac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  func_0x00010c219b60(lVar3,param_2,0);
  puVar26 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf493a0(lVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  lStack_1c0 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf493a0(lVar8,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar3;
  lStack_1b8 = lVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar3;
  lStack_1b0 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010c274200(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar14;
  func_0x00010bf493a0(lVar14,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_1a8 = lVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_1c0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar26,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(lVar18);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar16 = PTR_PTR_1126af048;
  _objc_alloc();
  func_0x00010c030680();
  func_0x00010c219b60();
  lVar4 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar26 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar19 = puVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf493c0(0x403e000000000000,puVar19,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar16;
  puStack_1d8 = puVar20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010bf493c0(0xc03e000000000000,puVar21,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar16;
  puStack_1d0 = puVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar23;
  func_0x00010bf493c0(0xc040000000000000,puVar23,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1c8 = puVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1d8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar26,param_2,puVar25);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(lVar8);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar19);
  uVar17 = *(undefined8 *)(lVar1 + _DAT_112711728);
  *(undefined **)(lVar1 + _DAT_112711728) = puVar16;
  _objc_release(uVar17);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return;
  }
  ___stack_chk_fail();
  puVar26 = PTR_PTR_1126af938;
  _objc_alloc_init(PTR_PTR_1126af938);
  func_0x00010c181ee0();
  func_0x00010befbd60(puVar26,param_2,lVar2,PTR_s_logInTapped_112525dc8,0x40);
  puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar26,param_2,puVar16);
  _objc_release(puVar16);
  puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar26;
  func_0x00010c216380(puVar26,param_2,puVar16,0);
  func_0x00010b0af3bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar26,param_2,puVar24,0);
  _objc_release(puVar24);
  puVar24 = puVar26;
  func_0x00010c160fc0(puVar26,param_2,&PTR____CFConstantStringClassReference_110daf7d8);
  func_0x00010b0af3bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar26,param_2,puVar24);
  _objc_release(puVar24);
  func_0x000104d277fc(puVar26);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 104d27018; end: 104d276df; -[SCUnauthenticatedLandingPage _setUpForTreatment1] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d27018(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bdf3580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(lVar1,param_2,0);
  puVar25 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  lStack_a0 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf493a0(lVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  lStack_98 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar10;
  func_0x00010bf493a0(lVar10,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  lStack_90 = lVar13;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar25,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bdefac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c219b60(lVar2,param_2,0);
  puVar25 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  lStack_c0 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010bf493a0(lVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  lStack_b8 = lVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf49420(0x4054000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  lStack_b0 = lVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010c274200(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bf493a0(lVar13,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_a8 = lVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_c0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar25,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar16 = PTR_PTR_1126af048;
  _objc_alloc();
  func_0x00010c030680();
  func_0x00010c219b60();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar25 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar17 = puVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf493c0(0x403e000000000000,puVar17,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar16;
  puStack_d8 = puVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf493c0(0xc03e000000000000,puVar19,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar16;
  puStack_d0 = puVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010bf493c0(0xc040000000000000,puVar21,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar25,param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(lVar7);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar17);
  uVar24 = *(undefined8 *)(param_1 + _DAT_112711728);
  *(undefined **)(param_1 + _DAT_112711728) = puVar16;
  _objc_release(uVar24);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar25 = PTR_PTR_1126af938;
  _objc_alloc_init(PTR_PTR_1126af938);
  func_0x00010c181ee0();
  func_0x00010befbd60(puVar25,param_2,lVar1,PTR_s_logInTapped_112525dc8,0x40);
  puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar25,param_2,puVar16);
  _objc_release(puVar16);
  puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar25;
  func_0x00010c216380(puVar25,param_2,puVar16,0);
  func_0x00010b0af3bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar25,param_2,puVar22,0);
  _objc_release(puVar22);
  puVar22 = puVar25;
  func_0x00010c160fc0(puVar25,param_2,&PTR____CFConstantStringClassReference_110daf7d8);
  func_0x00010b0af3bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar25,param_2,puVar22);
  _objc_release(puVar22);
  func_0x000104d277fc(puVar25);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 104d276e0; end: 104d278bf; -[SCUnauthenticatedLandingPage _createLogInButton] */

void FUN_104d276e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126af938;
  _objc_alloc_init(PTR_PTR_1126af938);
  func_0x00010c181ee0();
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s_logInTapped_112525dc8,0x40);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c216380(puVar1,param_2,puVar2,0);
  func_0x00010b0af3bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1,param_2,puVar3,0);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf7d8);
  func_0x00010b0af3bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x000104d277fc(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d278c0; end: 104d279db; -[SCUnauthenticatedLandingPage _createSignUpButton] */

void FUN_104d278c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126af938;
  _objc_alloc_init(PTR_PTR_1126af938);
  func_0x00010c181ee0();
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s_signUpTapped_112525dd0,0x40);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c216380(puVar1,param_2,puVar2,0);
  func_0x00010b0af3a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1,param_2,puVar3,0);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf7f8);
  func_0x00010b0af3a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x000104d277fc(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d279dc; end: 104d27a27; -[SCUnauthenticatedLandingPage logInTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d279dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711718);
  puVar1 = PTR_PTR_1126af940;
  func_0x00010c0a8720(PTR_PTR_1126af940);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d27a28; end: 104d27a73; -[SCUnauthenticatedLandingPage signUpTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d27a28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711718);
  puVar1 = PTR_PTR_1126af940;
  func_0x00010c23be40(PTR_PTR_1126af940);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d27a74; end: 104d27adb; -[SCUnauthenticatedLandingPage _addGhost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d27a74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c6e0(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + _DAT_112711728),
                      *(undefined8 *)(param_1 + _DAT_112711724));
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d27adc; end: 104d27b2b; -[SCUnauthenticatedLandingPage oAuthListView:didSelect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d27adc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711718);
  puVar1 = PTR_PTR_1126af940;
  func_0x00010c23bd60(PTR_PTR_1126af940,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d27b2c; end: 104d27c37; -[SCUnauthenticatedLandingPage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d27b2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711728,0);
  _objc_storeStrong(param_1 + _DAT_112711724,0);
  _objc_storeStrong(param_1 + _DAT_112711720,0);
  _objc_storeStrong(param_1 + _DAT_11271171c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711718,0);
  return;
}



/* Entry: 104d27c38; end: 104d27c67; -[SCUnauthenticatedLandingPageV2 userActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d27c38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271172c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d27c68; end: 104d27c6f; -[SCUnauthenticatedLandingPageV2 pageViewName] */

undefined8 FUN_104d27c68(void)

{
  return 0x90;
}



/* Entry: 104d27c70; end: 104d27c7b; -[SCUnauthenticatedLandingPageV2 supportedInterfaceOrientations] */

undefined8 FUN_104d27c70(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 104d27c7c; end: 104d27c83; -[SCUnauthenticatedLandingPageV2 prefersStatusBarHidden] */

undefined8 FUN_104d27c7c(void)

{
  return 1;
}



/* Entry: 104d27c84; end: 104d27e2f; -[SCUnauthenticatedLandingPageV2 initWithPageLayout:signupStringCopy:currentPageTracker:ghostImageService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d27c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e3ed8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271172c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271172c) = puVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112711730) = param_3;
    _objc_retain(param_4);
    ppuVar3 = &PTR____CFConstantStringClassReference_110db03f8;
    func_0x00010c0720c0();
    if ((int)ppuVar3 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110db0418;
      func_0x00010c0720c0();
      if ((int)ppuVar3 == 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110db0438;
        func_0x00010c0720c0();
        if ((int)ppuVar3 == 0) {
          func_0x000108b9a9fc();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000108b9aa44();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x000108b9aa2c();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x000108b9aa14();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112711734);
    *(undefined ***)((long)puVar1 + (long)_DAT_112711734) = ppuVar3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112711738;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11271173c;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar4);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104d27e30; end: 104d27eb7; -[SCUnauthenticatedLandingPageV2 viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d27e30(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3ed8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112711738);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar2);
  return;
}



/* Entry: 104d27eb8; end: 104d27f73; -[SCUnauthenticatedLandingPageV2 loadView] */

void FUN_104d27eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d27f74; end: 104d288f3; -[SCUnauthenticatedLandingPageV2 viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d27f74(undefined *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR_PTR_1126e3ed8;
  puStack_d8 = param_1;
  _objc_msgSendSuper2(&puStack_d8,PTR_s_viewDidLoad_112684cd8);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c6c0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112711740;
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar4;
  _objc_release(uVar15);
  iVar2 = (int)*(undefined8 *)(param_1 + lVar19);
  func_0x00010c20eaa0();
  func_0x00010b88a460();
  if ((iVar2 != 0) && (lRam00000001138466f0 < 3)) {
    func_0x00010c16e480(*(undefined8 *)(param_1 + lVar19));
    func_0x00010c16e480(*(undefined8 *)(param_1 + lVar19));
    func_0x00010c216380(*(undefined8 *)(param_1 + lVar19));
    func_0x00010c216380(*(undefined8 *)(param_1 + lVar19));
  }
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar19));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar19));
  puVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar4);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  lVar21 = (long)_DAT_112711730;
  uVar16 = *(ulong *)(param_1 + lVar21);
  if ((uVar16 < 3) || (uVar16 == 3)) {
    puVar4 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    piVar17 = (int *)&DAT_112711744;
LAB_104d28180:
    uVar15 = *(undefined8 *)(param_1 + *piVar17);
    *(undefined **)(param_1 + *piVar17) = puVar4;
    _objc_release(uVar15);
  }
  else if (uVar16 == 4) {
    puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    piVar17 = (int *)&DAT_112711748;
    goto LAB_104d28180;
  }
  plVar1 = (long *)(param_1 + _DAT_112711744);
  puVar4 = param_1;
  if (*plVar1 == 0) {
    plVar22 = (long *)(param_1 + _DAT_112711748);
    if (*plVar22 != 0) {
      func_0x00010c160fc0();
      lVar5 = *plVar22;
      func_0x00010c271420(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213040();
      _objc_release(lVar5);
      lVar5 = *plVar22;
      func_0x00010c271420(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cfce0();
      _objc_release(lVar5);
      lVar5 = *plVar22;
      func_0x00010c271420(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdb00();
      _objc_release(lVar5);
      lVar5 = *plVar22;
      puVar3 = param_1;
      func_0x00010be204e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b780(lVar5);
      _objc_release(puVar3);
      func_0x00010befbd60(*plVar22);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      goto LAB_104d28318;
    }
  }
  else {
    func_0x00010c160fc0();
    lVar5 = *plVar1;
    func_0x00010c20eaa0(lVar5);
    lVar18 = *plVar1;
    func_0x000108b9a9e4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(lVar18);
    _objc_release(lVar5);
    func_0x00010befbd60(*plVar1);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    plVar22 = plVar1;
LAB_104d28318:
    _objc_release(puVar4);
    func_0x00010c219b60(*plVar22);
  }
  func_0x00010bea5100(param_1);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar16 = *(ulong *)(param_1 + lVar21);
  puVar3 = param_1;
  if ((long)uVar16 < 3) {
    if (uVar16 < 2) {
      func_0x00010bea5100(param_1);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar21 = *(long *)(param_1 + lVar19);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = puVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lStack_e8 = lVar21;
      func_0x00010bf493c0(0xc049000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined *)*plVar1;
      lStack_80 = lStack_e8;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = *(undefined **)(param_1 + lVar19);
      func_0x00010c274200(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = puVar10;
    }
    else {
      if (uVar16 != 2) goto LAB_104d288b0;
      func_0x00010bea5100(param_1);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar21 = *plVar1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = puVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lStack_e8 = lVar21;
      func_0x00010bf493c0(0xc049000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = *(undefined **)(param_1 + lVar19);
      lStack_90 = lStack_e8;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)*plVar1;
      func_0x00010c274200(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = puVar10;
    }
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
  }
  else {
    puVar7 = param_1;
    if (uVar16 == 3) {
      lVar21 = *(long *)(param_1 + lVar19);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = puVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lStack_e8 = lVar21;
      func_0x00010bf493c0(0xc049000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined *)*plVar1;
      lStack_a8 = lStack_e8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar6;
      func_0x00010bf493c0(0x4050c00000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *plVar1;
      puStack_a0 = puVar11;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar5;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_98 = lVar19;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
      _objc_release(puVar14);
      _objc_release(lVar19);
      _objc_release(puVar13);
      _objc_release(puVar12);
    }
    else {
      if (uVar16 != 4) goto LAB_104d288b0;
      lVar20 = (long)_DAT_112711748;
      lVar21 = *(long *)(param_1 + lVar20);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = puVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lStack_e8 = lVar21;
      func_0x00010bf493c0(0xc04a000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = *(undefined **)(param_1 + lVar20);
      lStack_c8 = lStack_e8;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar6;
      func_0x00010bf493c0(0x4035000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + lVar20);
      puStack_c0 = puVar11;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar5;
      func_0x00010bf493c0(0xc035000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar19);
      lStack_b8 = lVar18;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar20);
      func_0x00010c274200(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar8;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_b0 = uVar15;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
      _objc_release(puVar14);
      _objc_release(uVar15);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(lVar18);
      _objc_release(puVar13);
      _objc_release(puVar12);
    }
    _objc_release(lVar5);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lStack_e8);
  _objc_release(puStack_e0);
  _objc_release(puVar3);
  _objc_release(lVar21);
LAB_104d288b0:
  func_0x00010befc680();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar15 = *(undefined8 *)(param_1 + _DAT_11271172c);
    puVar4 = PTR_PTR_1126af940;
    func_0x00010c0a8720(PTR_PTR_1126af940);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 104d288f4; end: 104d2893f; -[SCUnauthenticatedLandingPageV2 logInTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d288f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271172c);
  puVar1 = PTR_PTR_1126af940;
  func_0x00010c0a8720(PTR_PTR_1126af940);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d28940; end: 104d2898b; -[SCUnauthenticatedLandingPageV2 signUpTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d28940(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271172c);
  puVar1 = PTR_PTR_1126af940;
  func_0x00010c23be40(PTR_PTR_1126af940);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2898c; end: 104d28b3b; -[SCUnauthenticatedLandingPageV2 _setLargeButtonHorizontalLayout:] */

void FUN_104d2898c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar13 = param_3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf493c0(0x4035000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0xc035000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126af270;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar7);
  func_0x00010c1bdd60(puVar8);
  puVar7 = puVar8;
  func_0x00010c162900(puVar8);
  func_0x000108b9aa5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(puVar8);
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c0d3c80();
  _objc_release(puVar7);
  func_0x00010bf17fe0(puVar9);
  func_0x00010c08fa60(puVar9);
  _objc_retain(puVar9);
  func_0x00010bf97b00(puVar9);
  puVar7 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010c0d3c80();
  _objc_release(puVar7);
  func_0x00010c166c00(puVar11);
  func_0x00010c08fa60(puVar9);
  func_0x00010bef6f20(puVar9);
  func_0x00010bf947e0(puVar9);
  puVar7 = puVar9;
  func_0x00010bf51e00();
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    return;
  }
  uVar13 = *(undefined8 *)(puVar8 + 0x20);
  puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6f20(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 104d28b3c; end: 104d28e3b; -[SCUnauthenticatedLandingPageV2 _getLoginTextButtonAttributedText] */

void FUN_104d28b3c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af270;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1bdd60(puVar1);
  puVar2 = puVar1;
  func_0x00010c162900(puVar1);
  func_0x000108b9aa5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  func_0x00010bf17fe0(puVar3);
  func_0x00010c08fa60(puVar3);
  _objc_retain(puVar3);
  func_0x00010bf97b00(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  func_0x00010c166c00(puVar5);
  func_0x00010c08fa60(puVar3);
  func_0x00010bef6f20(puVar3);
  func_0x00010bf947e0(puVar3);
  puVar2 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    return;
  }
  uVar7 = *(undefined8 *)(puVar1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6f20(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d28e3c; end: 104d28edb; -[SCUnauthenticatedLandingPageV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d28e3c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711748,0);
  _objc_storeStrong(param_1 + _DAT_112711744,0);
  _objc_storeStrong(param_1 + _DAT_112711740,0);
  _objc_storeStrong(param_1 + _DAT_112711734,0);
  _objc_storeStrong(param_1 + _DAT_11271173c,0);
  _objc_storeStrong(param_1 + _DAT_112711738,0);
  _objc_storeStrong(param_1 + _DAT_11271174c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271172c,0);
  return;
}



/* Entry: 104d28edc; end: 104d293ef; -[SCUnauthenticatedWorkflow initWithRouter:applicationPreferences:delegate:loggerServices:loginLogger:unauthenticatedFeatureLogger:resumeRegistrationStorage:oneTapLoginRepositories:deviceIdentifierProvider:legacyAuthFlowProxy:lastLoginInfoRepository:redirectToRegInfoProvider:isNGORegistrationEnabled:registrationFlowUUIDService:registrationSourceService:passwordHashRepository:contactPrepromptInfoProvider:clientHardcodedABValueRetriever:readinessMetricEmitter:periodicWarmup:durableDeviceIDLogger:tivNonceServices:autoOneTapLoginEventService:authenticationOrchestrator:ageVerificationInfoProvider:isPhoneEmailFirstEnabled:] */

undefined8 *
FUN_104d28edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined1 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puStack_70 = PTR_PTR_1126e3ee0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_5);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    uVar2 = param_15;
    _objc_retainBlock();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_27;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x21) = param_28;
  }
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
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



/* Entry: 104d293f0; end: 104d29493; -[SCUnauthenticatedWorkflow beginWorkflow] */

void FUN_104d293f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284060();
  _objc_release(uVar1);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf05ea0();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5500();
  _objc_release(uVar1);
  func_0x00010bec0d60(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfbae0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d29494; end: 104d29497; -[SCUnauthenticatedWorkflow _determineInitialSplashPageToShow:] */

void FUN_104d29494(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfbc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__determineSplashPageToShowImpl__11255c8a8);
  return;
}



/* Entry: 104d29498; end: 104d294e3; -[SCUnauthenticatedWorkflow _determineSplashPageToShow:] */

void FUN_104d29498(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010bf3b6a0(uVar1);
  func_0x00010bdfbc20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d294e4; end: 104d296e7; -[SCUnauthenticatedWorkflow _determineSplashPageToShowImpl:] */

void FUN_104d294e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  iVar4 = (int)*(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010bfddc20();
  if (iVar4 == 0) {
    if (*(char *)(param_1 + 0x108) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c089500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0894a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x104d296f4;
      puStack_88 = &UNK_11084b4a0;
      lStack_80 = param_1;
      uStack_78 = uVar3;
      uStack_70 = uVar1;
      _objc_retain(uVar1);
      _objc_retain(uVar3);
      func_0x00010bef6960(param_3,param_2,&puStack_a0);
      _objc_release(uStack_70);
      _objc_release(uStack_78);
      _objc_release(uVar1);
    }
    else {
      func_0x00010c249fa0(*(undefined8 *)(param_1 + 0xd8));
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x104d29704;
      puStack_b0 = &UNK_11084b470;
      lStack_a8 = param_1;
      func_0x00010bef6960(param_3,param_2,&puStack_c8);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ade80();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a9cc0();
    }
    _objc_release(uVar3);
  }
  else {
    func_0x00010c0e8760(*(undefined8 *)(param_1 + 0xd8));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104d296e8;
    puStack_50 = &UNK_11084b470;
    lStack_48 = param_1;
    func_0x00010bef6960(param_3,param_2,&puStack_68);
  }
  func_0x00010c142680(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104d296e8; end: 104d2970f;  */

void FUN_104d296e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_startOneTapLogin__112671928,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104d29710; end: 104d29837; -[SCUnauthenticatedWorkflow _showLandingPage:] */

void FUN_104d29710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f420();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c23aae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104d29838; end: 104d2987f;  */

void FUN_104d29838(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b160();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d29880; end: 104d29957; -[SCUnauthenticatedWorkflow _handleLandingPageAction:] */

void FUN_104d29880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c250460();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104d29958;
  puStack_48 = &UNK_110841f80;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d29964;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104d299d4;
  puStack_98 = &UNK_1108480c8;
  lStack_90 = param_1;
  lStack_68 = param_1;
  lStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x00010c0beb20(param_3,param_2,&puStack_60,&puStack_88,&puStack_b0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d29958; end: 104d29963;  */

void FUN_104d29958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2bb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleLogInWithRoute__112568880,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d29964; end: 104d299d3;  */

void FUN_104d29964(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xa8);
  (**(code **)(uVar1 + 0x10))();
  puVar2 = PTR_PTR_1126af848;
  if ((uVar1 & 1) == 0) {
    func_0x00010bf69c80(PTR_PTR_1126af848);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0da0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be79220(*(undefined8 *)(param_1 + 0x20),param_2,1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d299d4; end: 104d29a3f;  */

void FUN_104d299d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c27f5a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc0a0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d29a40; end: 104d29bd3; -[SCUnauthenticatedWorkflow _handleLogInWithRoute:] */

void FUN_104d29a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_retain(param_3);
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0x90) = 0;
  func_0x00010c0f5480(*(undefined8 *)(param_1 + 0xd8));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b43e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9ce0();
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c089500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0894a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d29bd4;
  puStack_60 = &UNK_11084b4a0;
  lStack_58 = param_1;
  uStack_50 = uVar3;
  uStack_48 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  func_0x00010bef6960(param_3,param_2,&puStack_78);
  func_0x00010c142680(param_3);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 104d29bd4; end: 104d29be7;  */

void FUN_104d29bd4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_startLogIn_lastLoginUsername_las_1126716d0,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 104d29be8; end: 104d29cb3; -[SCUnauthenticatedWorkflow _prepareSignUpFromPage:registrationMethod:] */

void FUN_104d29be8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_4;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c07c180();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x104d29cbc;
    puStack_40 = &UNK_11084b470;
    ppuVar3 = &puStack_58;
    lStack_38 = param_1;
  }
  else {
    ppuVar3 = &PTR___NSConcreteGlobalBlock_11084b520;
  }
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,ppuVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 104d29cb4; end: 104d29cc7;  */

void FUN_104d29cb4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2398f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_showRegistrationInCooldownDialog_11266c060);
  return;
}



/* Entry: 104d29cc8; end: 104d29d87; -[SCUnauthenticatedWorkflow _signInWithOAuthFromSource:oAuthType:optedIn1TLStatus:] */

void FUN_104d29cc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d29d88;
  puStack_50 = &UNK_11084b4a0;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1429e0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104d29d88; end: 104d29d97;  */

void FUN_104d29d88(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_startOAuthSignInWithDelegate_oAu_112671800,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}


