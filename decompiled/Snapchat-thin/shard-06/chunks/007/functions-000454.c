/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104caf088; end: 104caf127;  */

void FUN_104caf088(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110dad978);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bdf13c0(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c560(uVar4,param_2,puVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104caf128; end: 104caf22b; -[SCDeleteAccountSettingsRowProvider webBrowserDidDismiss:] */

void FUN_104caf128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c296aa0(uVar1);
  _objc_release(uVar1);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104caf22c; end: 104caf257;  */

void FUN_104caf22c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a6c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104caf258; end: 104caf2d3; -[SCDeleteAccountSettingsRowProvider logEnterDeleteAccountPage] */

void FUN_104caf258(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aede8;
  func_0x00010bf96ac0(PTR_PTR_1126aede8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6b1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104caf2d4; end: 104caf34f; -[SCDeleteAccountSettingsRowProvider logForcedLogoutByUserSessionValidation] */

void FUN_104caf2d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aede8;
  func_0x00010bfb5280(PTR_PTR_1126aede8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6b1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104caf350; end: 104caf357; -[SCDeleteAccountSettingsRowProvider pageViewName] */

undefined8 FUN_104caf350(void)

{
  return 0x113;
}



/* Entry: 104caf358; end: 104caf4ff; -[SCDeleteAccountSettingsRowProvider _createPersistentIdCookieWithUrl:] */

void FUN_104caf358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010af82634();
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b740();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 104caf500; end: 104caf50b; -[SCDeleteAccountSettingsRowProvider defaultProjectNameV3] */

void FUN_104caf500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 104caf50c; end: 104caf517; -[SCDeleteAccountSettingsRowProvider defaultProjectNameV2] */

void FUN_104caf50c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 104caf518; end: 104caf56b; -[SCDeleteAccountSettingsRowProvider .cxx_destruct] */

void FUN_104caf518(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104caf56c; end: 104caf60f; -[SCEmailSettingsRowProvider initWithUserInfoServices:emailSettingsScopeExposer:] */

undefined1 *
FUN_104caf56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3a28;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104caf610; end: 104caf61f; -[SCEmailSettingsRowProvider sectionRow] */

void FUN_104caf610(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_accountWithRow__112598f58,4);
  return;
}



/* Entry: 104caf620; end: 104caf737; -[SCEmailSettingsRowProvider rowViewModel] */

void FUN_104caf620(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf8d9a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104caf738; end: 104caf7bb;  */

void FUN_104caf738(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb50e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = param_1;
  func_0x00010be075c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104caf7bc; end: 104caf89b; -[SCEmailSettingsRowProvider handleWithContext:] */

void FUN_104caf7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104caf89c;
  puStack_40 = &UNK_110845c10;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0311a0(puVar1,param_2,&puStack_58,&PTR___NSConcreteGlobalBlock_110847370);
  puVar2 = PTR_PTR_1126ae610;
  _objc_alloc(PTR_PTR_1126ae610);
  func_0x00010c0582c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104caf89c; end: 104caf8ef;  */

void FUN_104caf89c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104caf8f0; end: 104caf903;  */

void FUN_104caf8f0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104caf8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 104caf904; end: 104caf923; -[SCEmailSettingsRowProvider emailSettingsDidComplete] */

void FUN_104caf904(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104caf924; end: 104cafa67; -[SCEmailSettingsRowProvider _emailRowProvider:] */

void FUN_104caf924(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010be33dc0(param_1,param_2,param_3);
  lVar1 = param_3;
  func_0x00010c0f7580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_3;
  if (lVar2 == 0) {
    func_0x00010bf8d6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0f7580();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  puVar4 = puVar3;
  FUN_104cb032c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_104cb032c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar3,param_2,puVar4,lVar1,0,param_1 & 0xffffffff,1,
                      &PTR____CFConstantStringClassReference_110dadab8,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104cafa68; end: 104cafb53; -[SCEmailSettingsRowProvider _hasEmailSettingsError:] */

uint FUN_104cafa68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if ((lVar2 == 0) || (lVar2 = param_3, func_0x00010c071720(), (int)lVar2 == 0)) {
    uVar6 = 1;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0f7580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      lVar3 = param_3;
      func_0x00010c0f7580(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bf8d6c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c0720c0(lVar3,param_2,lVar4);
      uVar6 = (uint)lVar5 ^ 1;
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 104cafb54; end: 104cafb8f; -[SCEmailSettingsRowProvider .cxx_destruct] */

void FUN_104cafb54(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cafb90; end: 104cafc5b; -[SCMobileSettingsRowProvider initWithUserInfoServices:mobileSettingsScopeExposer:mobileSettingsScopeServices:] */

undefined1 *
FUN_104cafb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e3a30;
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



/* Entry: 104cafc5c; end: 104cafc6b; -[SCMobileSettingsRowProvider sectionRow] */

void FUN_104cafc5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_accountWithRow__112598f58,3);
  return;
}



/* Entry: 104cafc6c; end: 104cafd13; -[SCMobileSettingsRowProvider rowViewModel] */

void FUN_104cafc6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0fb000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104cafd14; end: 104cafeaf;  */

void FUN_104cafd14(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfb50e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c08fa60(puVar2);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126aed98;
  if (puVar3 != (undefined *)0x0) {
    puVar3 = param_2;
    func_0x00010bfb50e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0fafc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = puVar1;
  }
  puVar1 = PTR_PTR_1126ae750;
  puVar3 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000104cb0344();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000104cb0344();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar3);
  func_0x00010c0ec800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cafeb0; end: 104caff8f; -[SCMobileSettingsRowProvider handleWithContext:] */

void FUN_104cafeb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104caff90;
  puStack_40 = &UNK_110845c10;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0311a0(puVar1,param_2,&puStack_58,&PTR___NSConcreteGlobalBlock_1108473d0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf24220(uVar2,param_2,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104caff90; end: 104caffe3;  */

void FUN_104caff90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104caffe4; end: 104cafff7;  */

void FUN_104caffe4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104cafff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 104cafff8; end: 104cb0017; -[SCMobileSettingsRowProvider mobileSettingsDidComplete] */

void FUN_104cafff8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104cb0018; end: 104cb005f; -[SCMobileSettingsRowProvider .cxx_destruct] */

void FUN_104cb0018(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cb0060; end: 104cb0103; -[SCPasswordSettingsRowProvider initWithPasswordSettingsScopeExposer:passwordSettingsScopeServices:] */

undefined1 *
FUN_104cb0060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3a38;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cb0104; end: 104cb0113; -[SCPasswordSettingsRowProvider sectionRow] */

void FUN_104cb0104(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_accountWithRow__112598f58,0xc);
  return;
}



/* Entry: 104cb0114; end: 104cb0203; -[SCPasswordSettingsRowProvider rowViewModel] */

void FUN_104cb0114(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR_PTR_1126ae750;
  puVar5 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104cb035c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104cb035c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1,param_2,puVar2,0,0,0,1,&PTR____CFConstantStringClassReference_110dadaf8
                      ,puVar3);
  func_0x00010c0ec800(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104cb0204; end: 104cb02af; -[SCPasswordSettingsRowProvider handleWithContext:] */

void FUN_104cb0204(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf24220(uVar2,param_2,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cb02b0; end: 104cb02cf; -[SCPasswordSettingsRowProvider passwordSettingsDidCompleteChange] */

void FUN_104cb02b0(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104cb02d0; end: 104cb02ef; -[SCPasswordSettingsRowProvider passwordSettingsDidExitWithoutCompletion] */

void FUN_104cb02d0(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104cb02f0; end: 104cb032b; -[SCPasswordSettingsRowProvider .cxx_destruct] */

void FUN_104cb02f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cb032c; end: 104cb03bb;  */

void FUN_104cb032c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dadab8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dadab8,
                      &PTR____CFConstantStringClassReference_110dadb18,0);
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



/* Entry: 104cb03bc; end: 104cb03e7; +[SCGrapheneDeleteAccountMetric enterPage] */

void FUN_104cb03bc(void)

{
  _objc_alloc(PTR_PTR_1126aede8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cb03e8; end: 104cb0413; +[SCGrapheneDeleteAccountMetric forcedLogout] */

void FUN_104cb03e8(void)

{
  _objc_alloc(PTR_PTR_1126aede8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cb0414; end: 104cb04b3; -[SCGrapheneDeleteAccountMetric description] */

void FUN_104cb0414(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dadb58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dadb58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e3a40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104cb04b4; end: 104cb05ff; -[SCGrapheneRegistry deleteAccountGraphene] */

void FUN_104cb04b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104cb053c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b8920 != -1) {
    func_0x00010002a2fc(0x1136b8920,&puStack_48);
  }
  uVar1 = uRam00000001136b8918;
  _objc_retain(uRam00000001136b8918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104cb0600; end: 104cb0793; -[SCChangeUsernameServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb0600(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104cb0794;
  puStack_68 = &UNK_1108473f0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112710368);
  }
  _objc_retain(uVar4);
  puVar3 = PTR_PTR_1126aee00;
  _objc_alloc(PTR_PTR_1126aee00);
  func_0x00010c04f700();
  func_0x00010bf9d660(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104cb0794; end: 104cb0813;  */

void FUN_104cb0794(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104cb0814; end: 104cb0a87; -[SCChangeUsernameServicesEntryPoint _createSuggestor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb0814(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_112710350;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112710354;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c25d160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112710358;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar7 = PTR_PTR_1126aee08;
  _objc_alloc(PTR_PTR_1126aee08);
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112710360;
    _objc_loadWeakRetained(lVar1);
  }
  lVar3 = lVar1;
  func_0x00010bfcfa00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104cb0a88;
  puStack_78 = &UNK_110847450;
  lStack_70 = lVar2;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c058e00(puVar7);
  _objc_destroyWeak(auStack_98);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104cb0a88; end: 104cb0aa7;  */

void FUN_104cb0a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110dda1b8,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 104cb0aa8; end: 104cb0b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104cb0aa8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar6 = 1;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar6 = 1;
    func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110dda1f8,1,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = lVar1 + _DAT_112710364;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010bf70760();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfa2380();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar1);
  return lVar6;
}



/* Entry: 104cb0b70; end: 104cb0b93;  */

void FUN_104cb0b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110dadbb8,0,0);
  return;
}



/* Entry: 104cb0b94; end: 104cb0c33; -[SCChangeUsernameServicesEntryPoint _createValidator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb0b94(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_112710350;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126aee10;
  _objc_alloc(PTR_PTR_1126aee10);
  func_0x00010c058c40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cb0c34; end: 104cb0c53;  */

void FUN_104cb0c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110dda1b8,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 104cb0c54; end: 104cb0ccb; -[SCChangeUsernameServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb0c54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710368,0);
  _objc_destroyWeak(param_1 + _DAT_112710364);
  _objc_destroyWeak(param_1 + _DAT_112710358);
  _objc_destroyWeak(param_1 + _DAT_112710354);
  _objc_destroyWeak(param_1 + _DAT_112710350);
  _objc_destroyWeak(param_1 + _DAT_112710360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271035c);
  return;
}



/* Entry: 104cb0ccc; end: 104cb0e5f; -[SCRegistrationUsernameServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb0ccc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104cb0e60;
  puStack_68 = &UNK_1108473f0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112710388);
  }
  _objc_retain(uVar4);
  puVar3 = PTR_PTR_1126aee00;
  _objc_alloc(PTR_PTR_1126aee00);
  func_0x00010c04f700();
  func_0x00010bf9d660(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104cb0e60; end: 104cb0edf;  */

void FUN_104cb0e60(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104cb0ee0; end: 104cb11d7; -[SCRegistrationUsernameServicesEntryPoint _createSuggestor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb0ee0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  
  lVar8 = param_1 + _DAT_11271036c;
  _objc_loadWeakRetained();
  lVar1 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = param_1 + _DAT_112710370;
  _objc_loadWeakRetained(lVar8);
  lVar2 = lVar8;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c25d160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
  lVar8 = param_1 + _DAT_112710374;
  _objc_loadWeakRetained();
  lVar2 = lVar8;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
  puVar6 = PTR_PTR_1126aee18;
  _objc_alloc();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112710380;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = lVar8;
  func_0x00010c2970e0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffeee0();
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_initWeak(auStack_80,param_1);
  puVar7 = PTR_PTR_1126aee08;
  _objc_alloc(PTR_PTR_1126aee08);
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_11271037c;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = lVar8;
  func_0x00010bfcfa00(lVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104cb11d8;
  puStack_90 = &UNK_110847450;
  lStack_88 = lVar1;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c058e00(puVar7);
  _objc_destroyWeak(auStack_b0);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104cb11d8; end: 104cb11f7;  */

void FUN_104cb11d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110dda1d8,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 104cb11f8; end: 104cb12bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104cb11f8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar6 = 1;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar6 = 1;
    func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110dda218,1,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = lVar1 + _DAT_112710384;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010bf70760();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfa2380();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar1);
  return lVar6;
}



/* Entry: 104cb12c0; end: 104cb12df;  */

void FUN_104cb12c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110dadbb8,0,0);
  return;
}



/* Entry: 104cb12e0; end: 104cb137f; -[SCRegistrationUsernameServicesEntryPoint _createValidator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb12e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_11271036c;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126aee10;
  _objc_alloc(PTR_PTR_1126aee10);
  func_0x00010c058c40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cb1380; end: 104cb139f;  */

void FUN_104cb1380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110dda1d8,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 104cb13a0; end: 104cb1423; -[SCRegistrationUsernameServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cb13a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710388,0);
  _objc_destroyWeak(param_1 + _DAT_112710384);
  _objc_destroyWeak(param_1 + _DAT_112710380);
  _objc_destroyWeak(param_1 + _DAT_112710374);
  _objc_destroyWeak(param_1 + _DAT_112710370);
  _objc_destroyWeak(param_1 + _DAT_11271036c);
  _objc_destroyWeak(param_1 + _DAT_11271037c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112710378);
  return;
}



/* Entry: 104cb1424; end: 104cb149b; -[SCUsernameValidationService initWithUnicodeUsernamePatternFetchBlock:] */

undefined1 * FUN_104cb1424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3a48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cb149c; end: 104cb1607; -[SCUsernameValidationService errorForUsername:] */

void FUN_104cb149c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c08fa60();
  if (uVar2 < 3) {
    func_0x000104cb26ac();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_104cb15bc;
  }
  uVar2 = param_3;
  func_0x00010c08fa60();
  if (0xf < uVar2) {
    func_0x000104cb26c4();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_104cb15bc;
  }
  lVar3 = *(long *)(param_1 + 8);
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    uVar2 = param_1;
    func_0x00010c1259e0(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110dadbf8);
    if ((uVar2 & 1) == 0) {
      func_0x000104cb264c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = param_1;
      func_0x00010c1259e0(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110dadc18);
      if ((uVar2 & 1) == 0) {
        func_0x000104cb2664();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar2 = param_1;
        func_0x00010c1259e0(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110dadc38);
        if ((int)uVar2 == 0) {
          func_0x00010c1259e0(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110dadc58
                             );
          if ((param_1 & 1) != 0) goto LAB_104cb1534;
          func_0x000104cb2694();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_1;
        }
        else {
          func_0x000104cb267c();
          _objc_retainAutoreleasedReturnValue();
        }
      }
    }
  }
  else {
LAB_104cb1534:
    uVar2 = 0;
  }
  _objc_release(lVar3);
LAB_104cb15bc:
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104cb1608; end: 104cb1633; -[SCUsernameValidationService regexCheck:with:] */

bool FUN_104cb1608(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x00010c11f440(param_3,param_2,param_4,0x400);
  return param_3 != 0x7fffffffffffffff;
}



/* Entry: 104cb1634; end: 104cb163f; -[SCUsernameValidationService .cxx_destruct] */

void FUN_104cb1634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cb1640; end: 104cb1913; -[SCGrpcUsernameSuggestionService initWithUnifiedGRPCClientFactory:supportedLanguagesFetchBlock:allowRecycledUsernameFetchBlock:versionFetchBlock:hostnameFetchBlock:cofDeviceId:blizzardClientId:] */

undefined8 *
FUN_104cb1640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e3a50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar6 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae728;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_7;
    (**(code **)(param_7 + 0x10))(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c1eeba0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126aee20;
    _objc_alloc();
    func_0x00010c058f80();
    uVar6 = puVar1[1];
    puVar1[1] = puVar5;
    _objc_release(uVar6);
    uVar6 = param_4;
    _objc_retainBlock();
    uVar7 = puVar1[2];
    puVar1[2] = uVar6;
    _objc_release(uVar7);
    uVar6 = param_5;
    _objc_retainBlock();
    uVar7 = puVar1[3];
    puVar1[3] = uVar6;
    _objc_release(uVar7);
    uVar6 = param_6;
    _objc_retainBlock();
    uVar7 = puVar1[4];
    puVar1[4] = uVar6;
    _objc_release(uVar7);
    _objc_retain(param_8);
    uVar6 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar6);
    _objc_retain(param_9);
    uVar6 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104cb1914; end: 104cb1af7; -[SCGrpcUsernameSuggestionService suggestUsernameWithFirstName:lastName:completion:] */

void FUN_104cb1914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puVar1 = PTR_PTR_1126aee28;
    _objc_opt_new(PTR_PTR_1126aee28);
    func_0x00010c19d320();
    func_0x00010c1b8360(puVar1);
    puVar2 = PTR_PTR_1126aee30;
    _objc_opt_new(PTR_PTR_1126aee30);
    func_0x00010c1cafc0();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    func_0x00010c220e80(puVar2);
    func_0x00010c17de60(puVar2);
    func_0x00010c171a40(puVar2);
    lVar3 = *(long *)(param_1 + 0x10);
    (**(code **)(lVar3 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x18);
    (**(code **)(lVar4 + 0x10))();
    lVar5 = lVar3;
    FUN_104cb1af8(lVar3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_initWeak(auStack_58,param_1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_5);
    func_0x00010c261dc0(uVar6);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104cb1af8; end: 104cb1c23;  */

void FUN_104cb1af8(long param_1,int param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  if (ppuVar2 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar1);
  }
  lVar3 = param_1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (param_2 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bef9140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c16c6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010befab00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104cb1c24; end: 104cb1c8f;  */

void FUN_104cb1c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec8d20();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cb1c90; end: 104cb1e3f; -[SCGrpcUsernameSuggestionService suggestUsernameWithRequestedUsername:completion:] */

void FUN_104cb1c90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126aee38;
    _objc_opt_new(PTR_PTR_1126aee38);
    func_0x00010c1ec420();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    func_0x00010c220e80(puVar1);
    func_0x00010c17de60(puVar1);
    func_0x00010c171a40(puVar1);
    lVar2 = *(long *)(param_1 + 0x10);
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x18);
    (**(code **)(lVar3 + 0x10))();
    lVar4 = lVar2;
    FUN_104cb1af8(lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_initWeak(auStack_48,param_1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bf386e0(uVar5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104cb1e40; end: 104cb1eab;  */

void FUN_104cb1e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdde520();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cb1eac; end: 104cb1fbf; -[SCGrpcUsernameSuggestionService _suggestUsernameCompletedWithResponse:error:completion:] */

void FUN_104cb1eac(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126aee40;
  _objc_retain(param_5);
  lVar1 = param_4;
  _objc_retain(param_4);
  if (param_4 == 0) {
    func_0x00010c262720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c262840(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000104cb26dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99300(puVar2);
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar1;
  }
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126aee48;
  _objc_alloc(PTR_PTR_1126aee48);
  func_0x00010bf3ec40(param_4);
  _objc_release(param_4);
  func_0x00010c019720(puVar3);
  (**(code **)(param_5 + 0x10))(param_5,puVar3);
  _objc_release(param_5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104cb1fc0; end: 104cb2397; -[SCGrpcUsernameSuggestionService _checkUsernameCompletedWithRequestedUsername:response:error:completion:] */

void FUN_104cb1fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aee40;
  if (param_5 == (undefined *)0x0) {
    _objc_retain(param_6);
    _objc_retain(0);
    puVar1 = param_4;
    func_0x00010c252440();
    if ((int)puVar1 == 1) {
      puVar1 = PTR_PTR_1126aee40;
      func_0x00010c261a40(PTR_PTR_1126aee40);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104cb2254;
    }
    puVar2 = param_4;
    func_0x00010c252440();
    puVar3 = param_4;
    func_0x00010c262740();
    puVar1 = PTR_PTR_1126aee40;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar2 == 8) {
      if (puVar3 != (undefined *)0x0) {
        func_0x000104cb26f4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar1 = PTR_PTR_1126aee40;
        puVar5 = puVar4;
        goto LAB_104cb2210;
      }
      func_0x000104cb26f4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27f3e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
    }
    else {
      _objc_retain(param_4);
      puVar4 = param_4;
      func_0x00010bf98d60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      if (puVar2 == (undefined *)0x0) {
        puVar4 = param_4;
        func_0x00010c252440();
        puVar2 = param_4;
        _objc_release(param_4);
        puVar5 = (undefined *)0x0;
        iVar6 = (int)puVar4;
        if (iVar6 < 7) {
          if (iVar6 < 3) {
            if ((iVar6 == -0x4524111) || (iVar6 == 0)) goto LAB_104cb21fc;
            if (iVar6 == 2) {
              func_0x000104cb26ac();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar2;
            }
          }
          else if (iVar6 < 5) {
            if (iVar6 == 3) {
              func_0x000104cb26c4();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar2;
            }
            else if (iVar6 == 4) {
              func_0x000104cb264c();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar2;
            }
          }
          else if (iVar6 == 5) {
            func_0x000104cb2664();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar2;
          }
          else if (iVar6 == 6) {
            func_0x000104cb267c();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar2;
          }
        }
        else if (iVar6 - 9U < 4) {
LAB_104cb21fc:
          func_0x000104cb26dc();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
        }
        else if (iVar6 == 7) {
          func_0x000104cb2694();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
        }
        else if (iVar6 == 8) goto LAB_104cb21fc;
      }
      else {
        puVar5 = param_4;
        func_0x00010bf98d60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
      }
      if (puVar3 == (undefined *)0x0) {
        func_0x00010c27f3e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104cb2250;
      }
LAB_104cb2210:
      puVar4 = param_4;
      func_0x00010c262720(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c262840(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
  }
  else {
    _objc_retain(param_6);
    puVar5 = param_5;
    _objc_retain(param_5);
    func_0x000104cb26dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99300(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_104cb2250:
  _objc_release(puVar5);
LAB_104cb2254:
  puVar4 = PTR_PTR_1126aee48;
  _objc_alloc(PTR_PTR_1126aee48);
  func_0x00010bf3ec40(param_5);
  _objc_release(param_5);
  func_0x00010c252440(param_4);
  func_0x00010c019720(puVar4);
  (**(code **)(param_6 + 0x10))(param_6,puVar4);
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cb2398; end: 104cb2403; -[SCGrpcUsernameSuggestionService .cxx_destruct] */

void FUN_104cb2398(long param_1)

{
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



/* Entry: 104cb2404; end: 104cb2477; -[UNISCSuggestUsernamePbSuggestUsernameService initWithUnifiedGrpcService:] */

undefined1 * FUN_104cb2404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3a58;
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



/* Entry: 104cb2478; end: 104cb255b; -[UNISCSuggestUsernamePbSuggestUsernameService suggestUsernameWithRequest:callOptionsBuilder:handler:] */

void FUN_104cb2478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126aee50;
  _objc_opt_class(PTR_PTR_1126aee50);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dadcf8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104cb255c; end: 104cb263f; -[UNISCSuggestUsernamePbSuggestUsernameService checkUsernameWithRequest:callOptionsBuilder:handler:] */

void FUN_104cb255c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126aee58;
  _objc_opt_class(PTR_PTR_1126aee58);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dadd18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104cb2640; end: 104cb270b; -[UNISCSuggestUsernamePbSuggestUsernameService .cxx_destruct] */

void FUN_104cb2640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cb270c; end: 104cb2787;  */

undefined * FUN_104cb270c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8928 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dade58,
                        &UNK_10dd8ad88,&UNK_10dd8adb8,4,FUN_104cb2788,0);
    do {
      if (puRam00000001136b8928 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8928;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8928,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8928 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8928;
}



/* Entry: 104cb2788; end: 104cb279f;  */

uint FUN_104cb2788(uint param_1)

{
  return (uint)(param_1 < 7) & 99U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 104cb27a0; end: 104cb281b;  */

undefined * FUN_104cb27a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8930 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dade78,
                        &UNK_10dd8adc8,&UNK_10dd8ae68,0xd,FUN_104cb281c,0);
    do {
      if (puRam00000001136b8930 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8930;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8930,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8930 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8930;
}



/* Entry: 104cb281c; end: 104cb2827;  */

bool FUN_104cb281c(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 104cb2828; end: 104cb288f; +[SCSuggestUsernamePbSuggestUsernameRequest descriptor] */

void FUN_104cb2828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f2c10,
                        &PTR____CFConstantStringClassReference_110dade98,
                        &PTR_s_snapchat_activation_api_1130ac0d0,&PTR_s_nameAndBirthdate_1130ac248,4
                        ,0x20,0x1c);
    puRam00000001136b8938 = puVar1;
  }
  return;
}



/* Entry: 104cb2890; end: 104cb28f7; +[SCSuggestUsernamePbSuggestUsernameResponse descriptor] */

void FUN_104cb2890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8940 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f2c60,
                        &PTR____CFConstantStringClassReference_110dadeb8,
                        &PTR_s_snapchat_activation_api_1130ac0d0,&PTR_s_suggestionsArray_1130ac0e8,2
                        ,0x10,0x1c);
    puRam00000001136b8940 = puVar1;
  }
  return;
}



/* Entry: 104cb28f8; end: 104cb295f; +[SCSuggestUsernamePbCheckUsernameRequest descriptor] */

void FUN_104cb28f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8948 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f2cb0,
                        &PTR____CFConstantStringClassReference_110daded8,
                        &PTR_s_snapchat_activation_api_1130ac0d0,&PTR_s_requestedUsername_1130ac2c8,
                        5,0x28,0x1c);
    puRam00000001136b8948 = puVar1;
  }
  return;
}



/* Entry: 104cb2960; end: 104cb29c7; +[SCSuggestUsernamePbCheckUsernameResponse descriptor] */

void FUN_104cb2960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8950 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f2d00,
                        &PTR____CFConstantStringClassReference_110dadef8,
                        &PTR_s_snapchat_activation_api_1130ac0d0,&PTR_DAT_1130ac128,3,0x18,0x1c);
    puRam00000001136b8950 = puVar1;
  }
  return;
}



/* Entry: 104cb29c8; end: 104cb2a2f; +[SCSuggestUsernamePbNameAndBirthdate descriptor] */

void FUN_104cb29c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8958 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f2d50,
                        &PTR____CFConstantStringClassReference_110dadf18,
                        &PTR_s_snapchat_activation_api_1130ac0d0,&PTR_s_firstName_1130ac188,3,0x20,
                        0x1c);
    puRam00000001136b8958 = puVar1;
  }
  return;
}



/* Entry: 104cb2a30; end: 104cb2a97; +[SCSuggestUsernamePbBirthdateInfo descriptor] */

void FUN_104cb2a30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8960 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f2da0,
                        &PTR____CFConstantStringClassReference_110dadf38,
                        &PTR_s_snapchat_activation_api_1130ac0d0,&PTR_s_year_1130ac1e8,3,0x10,0x1c);
    puRam00000001136b8960 = puVar1;
  }
  return;
}



/* Entry: 104cb2a98; end: 104cb2a9f; -[SCActivityCenterBirthdayEligibilityConfig tier1MaxFriends] */

undefined4 FUN_104cb2a98(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 104cb2aa0; end: 104cb2aa7; -[SCActivityCenterBirthdayEligibilityConfig setTier1MaxFriends:] */

void FUN_104cb2aa0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104cb2aa8; end: 104cb2aaf; -[SCActivityCenterBirthdayEligibilityConfig tier2MaxFriends] */

undefined4 FUN_104cb2aa8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 104cb2ab0; end: 104cb2ab7; -[SCActivityCenterBirthdayEligibilityConfig setTier2MaxFriends:] */

void FUN_104cb2ab0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 104cb2ab8; end: 104cb2abf; -[SCActivityCenterBirthdayEligibilityConfig tier1TimeWindowDays] */

undefined4 FUN_104cb2ab8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 104cb2ac0; end: 104cb2ac7; -[SCActivityCenterBirthdayEligibilityConfig setTier1TimeWindowDays:] */

void FUN_104cb2ac0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 104cb2ac8; end: 104cb2acf; -[SCActivityCenterBirthdayEligibilityConfig tier2TimeWindowDays] */

undefined4 FUN_104cb2ac8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 104cb2ad0; end: 104cb2ad7; -[SCActivityCenterBirthdayEligibilityConfig setTier2TimeWindowDays:] */

void FUN_104cb2ad0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 104cb2ad8; end: 104cb2adf; -[SCActivityCenterBirthdayEligibilityConfig tier3TimeWindowDays] */

undefined4 FUN_104cb2ad8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 104cb2ae0; end: 104cb2ae7; -[SCActivityCenterBirthdayEligibilityConfig setTier3TimeWindowDays:] */

void FUN_104cb2ae0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 104cb2ae8; end: 104cb2aef; -[SCActivityCenterActionConfig objectId] */

undefined8 FUN_104cb2ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104cb2af0; end: 104cb2b1f; -[SCActivityCenterActionConfig setObjectId:] */

void FUN_104cb2af0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104cb2b20; end: 104cb2b27; -[SCActivityCenterActionConfig actionType] */

undefined8 FUN_104cb2b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


