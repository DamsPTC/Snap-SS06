/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b3adf8; end: 106b3ae43; -[SCSettingsPasswordReauthViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3adf8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127588dc,0);
  _objc_storeStrong(param_1 + _DAT_1127588d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127588d4);
  return;
}



/* Entry: 106b3ae44; end: 106b3aea7; -[MobileSettingsViewController initWithUserSession:userInfoServices:reauthenticationService:searchabilityService:friendingConfigsProvider:passwordNetworkRequester:userTrackedLogger:settingsEventLogger:userPhoneVerificationScopeExposer:delegate:adoptGrowthNotifSmsCopy:shouldHideForgotPasswordButton:customAppThemeProvider:circumstanceEngine:] */

void FUN_106b3ae44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  func_0x00010bfeeb00(param_1,param_2,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13);
  return;
}



/* Entry: 106b3aea8; end: 106b3b217; -[MobileSettingsViewController initForType:userSession:userInfoServices:reauthenticationService:searchabilityService:friendingConfigsProvider:passwordNetworkRequester:userTrackedLogger:settingsEventLogger:userPhoneVerificationScopeExposer:delegate:adoptGrowthNotifSmsCopy:shouldHideForgotPasswordButton:customAppThemeProvider:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106b3aea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126f5070;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c21acc0(puVar1);
    lVar5 = (long)_DAT_1127588f8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127588fc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112758900;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112758904;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112758908;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11275890c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112758910;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112758914;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112758918;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11275891c,param_13);
    puVar3 = PTR_PTR_1126af348;
    _objc_alloc();
    func_0x00010c05a560();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758920);
    *(undefined **)((long)puVar1 + (long)_DAT_112758920) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112758924) = param_14;
    uVar2 = param_16;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758928);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112758928) = uVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11275892c;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_17;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112758930;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_18;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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
  return puVar1;
}



/* Entry: 106b3b218; end: 106b3b26b; -[MobileSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3b218(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5070;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  return;
}



/* Entry: 106b3b26c; end: 106b3b3f7; -[MobileSettingsViewController traitCollectionDidChange:] */

void FUN_106b3b26c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f5070;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c154ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b3b3f8; end: 106b3b3ff; -[MobileSettingsViewController pageViewName] */

undefined8 FUN_106b3b3f8(void)

{
  return 0x98;
}



/* Entry: 106b3b400; end: 106b3badf; -[MobileSettingsViewController createTopInfoLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3b400(undefined **param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  double dVar28;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0ac8;
  _objc_alloc(PTR_PTR_1126b0ac8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1ac4a0(param_1);
  _objc_release(puVar1);
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(ppuVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  dVar28 = 12.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a00();
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(ppuVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bde80();
  _objc_release(ppuVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c26ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099240();
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2131e0(0,-dVar28,0,-dVar28);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c27dd80();
  if (ppuVar2 == (undefined **)0x1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e748d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e748d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_1;
    func_0x00010bfedd60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
  }
  else {
    lVar27 = (long)_DAT_112758924;
    if ((*(byte *)((long)param_1 + lVar27) & 1) == 0) {
      func_0x000106b4ab20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106b4ab50();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar4 = ppuVar2;
    if ((*(byte *)((long)param_1 + lVar27) & 1) == 0) {
      func_0x000106b4ab38();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106b4ab68();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar5 = param_1;
    func_0x00010bfedd60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212fe0(ppuVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  lVar27 = (long)_DAT_112758934;
  uVar26 = *(undefined8 *)((long)param_1 + lVar27);
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar26);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(ppuVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  ppuVar2 = param_1;
  func_0x00010bfedd60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)((long)param_1 + lVar27);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_1;
  func_0x00010bfedd60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)((long)param_1 + lVar27);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = param_1;
  func_0x00010bfedd60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)((long)param_1 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar11;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_1;
  func_0x00010bfedd60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)((long)param_1 + lVar27);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar15;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar3);
  _objc_release(ppuVar17);
  _objc_release(uVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(uVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(uVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(uVar26);
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af270;
  _objc_alloc_init(PTR_PTR_1126af270);
  func_0x00010c21baa0(ppuVar2);
  _objc_release(puVar1);
  ppuVar4 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(ppuVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(ppuVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(ppuVar4);
  _objc_release(puVar1);
  ppuVar4 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(ppuVar4);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(ppuVar4);
  _objc_release(puVar1);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e748f8;
  ppuVar5 = ppuVar4;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e748f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(ppuVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0x3fde9e9e9e9e9e9f,0x3ff0000000000000,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd60();
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  ppuVar5 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162900();
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195540();
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar2;
  func_0x00010c280b60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e748f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f420();
  _objc_release(ppuVar4);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  ppuVar4 = ppuVar2;
  func_0x00010c280b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9900(ppuVar4);
  _objc_release(puVar1);
  _objc_release(ppuVar4);
  uVar26 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_112758934);
  ppuVar4 = ppuVar2;
  func_0x00010c280b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar26);
  _objc_release(ppuVar4);
  func_0x00010c280b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010bfe2ce0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar25);
  lVar27 = lVar25;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar27;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar18 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar18);
  _objc_release(lVar27);
  lVar27 = lVar25;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar27;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  (**(code **)(lVar18 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  (**(code **)(lVar21 + 0x10))(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar24 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar27);
  lVar27 = lVar25;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar27;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  (**(code **)(lVar18 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  (**(code **)(lVar21 + 0x10))(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar24 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar27);
  lVar27 = lVar25;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = lVar27;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar25 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar27);
  return;
}



/* Entry: 106b3bae0; end: 106b3bf6f; -[MobileSettingsViewController createBottomInfoLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3bae0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af270;
  _objc_alloc_init(PTR_PTR_1126af270);
  func_0x00010c21baa0(param_1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(lVar2);
  _objc_release(puVar1);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e748f8;
  ppuVar3 = ppuVar6;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e748f8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar2);
  _objc_release(ppuVar3);
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0x3fde9e9e9e9e9e9f,0x3ff0000000000000,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd60();
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162900();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195540();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c280b60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e748f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f420();
  _objc_release(ppuVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c280b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9900(lVar2);
  _objc_release(puVar1);
  _objc_release(lVar2);
  uVar14 = *(undefined8 *)(param_1 + _DAT_112758934);
  lVar2 = param_1;
  func_0x00010c280b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar14);
  _objc_release(lVar2);
  func_0x00010c280b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bfe2ce0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar12);
  lVar2 = lVar12;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = lVar12;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar13;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  (**(code **)(lVar8 + 0x10))(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar11 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = lVar12;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar13;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  (**(code **)(lVar8 + 0x10))(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar11 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = lVar12;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar5 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b3bf70; end: 106b3c247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3bf70(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
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



/* Entry: 106b3c248; end: 106b3c67b; -[MobileSettingsViewController createSearchableSwitchRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3c248(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  
  puVar1 = PTR_PTR_1126d09e8;
  _objc_alloc(PTR_PTR_1126d09e8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1f8da0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c154ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112758934);
  lVar2 = param_1;
  func_0x00010c154ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar6,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c154ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106b3c67c;
  puStack_70 = &UNK_1108471b0;
  lStack_68 = param_1;
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xb0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar2 = param_1;
  func_0x00010c154ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010c154ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar5 = puVar3;
  func_0x000106b4ab80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c1cfce0(puVar3,param_2,0);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  lVar2 = param_1;
  func_0x00010c154ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106b3c80c;
  puStack_98 = &UNK_1108471b0;
  lStack_90 = param_1;
  func_0x00010c0bbfc0(puVar3,param_2,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init(PTR__OBJC_CLASS___UISwitch_1126b0680);
  func_0x00010c1f8d80(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c154aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(lVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c154aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar2);
  func_0x00010c2898a0(param_1);
  lVar2 = param_1;
  func_0x00010c154ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c154aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010c154aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar3);
  return;
}



/* Entry: 106b3c67c; end: 106b3c80b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3c67c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  func_0x00010c26bc20(uVar3);
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
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
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



/* Entry: 106b3c80c; end: 106b3cac3;  */

void FUN_106b3c80c(long param_1,long param_2)

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
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c154ac0(uVar3);
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
  (**(code **)(lVar6 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c154ac0(uVar3);
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
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc052800000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c154ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b3cac4; end: 106b3cc2b;  */

void FUN_106b3cac4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c154ac0(uVar3);
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
  (**(code **)(lVar6 + 0x10))(0xc030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c154ac0(uVar3);
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



/* Entry: 106b3cc2c; end: 106b3cfff; -[MobileSettingsViewController createCountryCodeFieldRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3cc2c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc_init(PTR__OBJC_CLASS___UITextField_1126af060);
  func_0x00010c1849e0(param_1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar3);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182ae0();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar3 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(lVar3);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(lVar3);
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    lVar3 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf8d060();
    _objc_release(lVar3);
    if (lVar4 == 1) {
      lVar3 = param_1;
      func_0x00010bf53340(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213040();
      _objc_release(lVar3);
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(0,0,0x4030000000000000,0x4046000000000000);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar5);
  lVar3 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba3a0();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba3c0();
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112758934);
  lVar3 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar6);
  _objc_release(lVar3);
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b3d000; end: 106b3d1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3d000(long param_1,long param_2)

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
  func_0x00010bfedd60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbea0();
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
  (**(code **)(lVar7 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
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



/* Entry: 106b3d1f0; end: 106b3d7d3; -[MobileSettingsViewController createPhoneNumberTextFieldRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3d1f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d0a60;
  _objc_alloc_init(PTR_PTR_1126d0a60);
  func_0x00010c2132e0(param_1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213240();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6ec0();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182ae0();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  func_0x000106b4ab08();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dafa18;
  func_0x00010c160fc0();
  _objc_release(lVar2);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dafa18,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(lVar2);
  _objc_release(ppuVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112758934);
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf53340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x00010c154ac0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  func_0x00010c0bbfc0(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf179a0();
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106b3d7d4; end: 106b3d7e3; -[MobileSettingsViewController phoneNumberBarTextColor] */

void FUN_106b3d7d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x52);
  return;
}



/* Entry: 106b3d7e4; end: 106b3dabb; -[MobileSettingsViewController createVerifyPhoneNumberBar] */

void FUN_106b3d7e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220d80(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0faf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar2,param_2,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000106b4ab98();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2,param_2,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106b3dabc; end: 106b3dcaf;  */

void FUN_106b3dabc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
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
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c298a20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar6,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c84b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b3dcb0; end: 106b3e00f; -[MobileSettingsViewController createReverifyPhoneNumberBar] */

void FUN_106b3dcb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edd00(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c13fec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c13fec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0faf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar2,param_2,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c13fec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c13fec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000106b4ab98();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2,param_2,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13fec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13fec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13fec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c13fec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c13fec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106b3e010; end: 106b3e167; -[MobileSettingsViewController createConfirmationCodeTextFieldRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3e010(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d0a68;
  _objc_alloc_init(PTR_PTR_1126d0a68);
  func_0x00010c180b60(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf480c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf480c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220c20();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf480c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112758934);
  lVar2 = param_1;
  func_0x00010bf480c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010bf480c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106b3e168; end: 106b3e2e3;  */

void FUN_106b3e168(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c07efe0();
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if ((uVar7 & 1) == 0) {
    func_0x00010c154ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c26bc20();
    _objc_retainAutoreleasedReturnValue();
  }
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
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c152980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b3e2e4; end: 106b3e5df; -[MobileSettingsViewController createVerifyConfirmationCodeBar] */

void FUN_106b3e2e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220d00(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3fe9797979797979,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0faf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar2,param_2,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c139900(param_1);
  uVar2 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106b3e5e0; end: 106b3e74f; -[MobileSettingsViewController createCountryCodePicker] */

void FUN_106b3e5e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d0a70;
  _objc_alloc(PTR_PTR_1126d0a70);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c184a00(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf533c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1849c0();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf533c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf533c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf533c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106b3e750; end: 106b3e99f;  */

void FUN_106b3e750(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
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
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x406b000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf533c0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(lVar8,uVar9,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c84b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b3e9a0; end: 106b3eb07; -[MobileSettingsViewController getInitialSelectedCountryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3e9a0(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  ppuVar1 = param_1;
  func_0x00010be18d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = param_1;
  func_0x00010be234a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if ((ppuVar2 == (undefined **)0x0) ||
     (ppuVar2 = ppuVar8, func_0x00010c08fa60(), ppuVar2 == (undefined **)0x0)) {
    ppuVar3 = *(undefined ***)((long)param_1 + (long)_DAT_1127588fc);
    func_0x00010c0fb000();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c0fafc0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar7;
    }
    else {
      _objc_retain(ppuVar5);
      ppuVar6 = ppuVar8;
      ppuVar8 = ppuVar5;
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    _objc_release(ppuVar3);
    ppuVar2 = ppuVar8;
    func_0x00010c08fa60();
    if (ppuVar2 == (undefined **)0x0) {
      _objc_release(ppuVar8);
      ppuVar8 = &PTR____CFConstantStringClassReference_110daf278;
    }
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 106b3eb08; end: 106b3f33f; -[MobileSettingsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3eb08(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uStack_200;
  undefined *puStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = PTR_PTR_1126f5070;
  uStack_c8 = param_1;
  _objc_msgSendSuper2(&uStack_c8,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1f7d00(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar10 = (long)_DAT_112758934;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  uVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puStack_150 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_e0 = uVar2;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_f0 = uVar2;
  uStack_b8 = uVar2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_108 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_100 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_110 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_118 = uVar3;
  uStack_b0 = uVar3;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uStack_120 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_130 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_140 = uVar2;
  uStack_a8 = uVar2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_160 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = uVar2;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = uVar2;
  func_0x00010bf493c0(0xc04c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  uStack_170 = uVar3;
  uStack_a0 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_180 = uVar9;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uStack_178 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  uStack_190 = uVar9;
  uStack_98 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_1a0 = uVar4;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uStack_198 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  uStack_1b0 = uVar4;
  uStack_90 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_1c0 = uVar9;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  uStack_1d0 = uVar9;
  uStack_88 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  uStack_80 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_150);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(uStack_190);
  _objc_release(uStack_188);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_120);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d0);
  func_0x00010bf59a40(param_1);
  func_0x00010bf55880(param_1);
  func_0x00010bf57820(param_1);
  uVar2 = param_1;
  func_0x00010c07efe0();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf58b00(param_1);
  }
  func_0x00010bf554a0(param_1);
  func_0x00010bf54d40(param_1);
  func_0x00010bfe1cc0(param_1);
  func_0x00010bf59f00(param_1);
  func_0x00010bf58880(param_1);
  func_0x00010bf59ee0(param_1);
  func_0x00010bf558a0(param_1);
  uVar2 = param_1;
  func_0x00010be408e0();
  if (((int)uVar2 != 0) && (uVar2 = param_1, func_0x00010be34aa0(), (int)uVar2 != 0)) {
    uVar2 = param_1;
    func_0x00010c13fec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010be18c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aca40(param_1);
    _objc_release(uVar2);
  }
  func_0x00010c1934e0(param_1);
  func_0x00010befa220(param_1);
  uVar2 = param_1;
  func_0x00010bfc65e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fafe0(param_1);
  _objc_release(uVar2);
  func_0x00010c184a40(param_1);
  uVar2 = param_1;
  func_0x00010bf533c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c159520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb000(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = param_1;
  func_0x00010be778e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_106b3f340;
  uStack_1f0 = uVar2;
  uStack_1e8 = param_1;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x00010c12d5a0();
  puStack_1f8 = PTR_PTR_1126f5070;
  uStack_200 = uVar3;
  _objc_msgSendSuper2(&uStack_200,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106b3f340; end: 106b3f39f; -[MobileSettingsViewController dealloc] */

void FUN_106b3f340(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c12d5a0(param_1,param_2,param_1,&PTR____CFConstantStringClassReference_110e74938,0);
  puStack_28 = PTR_PTR_1126f5070;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106b3f3a0; end: 106b3f44b; -[MobileSettingsViewController viewWillAppear:] */

void FUN_106b3f3a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f5070;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  func_0x00010bef9580(param_1);
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b3f44c; end: 106b3f55f; -[MobileSettingsViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3f44c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f5070;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  lVar4 = param_1;
  func_0x00010c154aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c079040();
  lVar2 = *(long *)(param_1 + _DAT_112758908);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c154a80();
  if ((int)lVar1 != (int)lVar3) {
    lVar1 = param_1;
    func_0x00010be18c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar4);
    if (lVar1 == 0) goto LAB_106b3f544;
    lVar4 = *(long *)(param_1 + _DAT_112758904);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c154aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079040();
    func_0x00010c2898c0(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar4);
LAB_106b3f544:
  func_0x00010c12cd00(param_1);
  return;
}



/* Entry: 106b3f560; end: 106b3f56b; -[MobileSettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_106b3f560(void)

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



/* Entry: 106b3f56c; end: 106b3f613; -[MobileSettingsViewController updateSearchSwitchState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3f56c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be18c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c154aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d1360();
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112758908);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154a80();
    func_0x00010c154aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d1360();
    _objc_release(param_1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b3f614; end: 106b3f64f; -[MobileSettingsViewController getTitle] */

void FUN_106b3f614(long param_1)

{
  undefined **ppuVar1;
  
  func_0x00010c27dd80();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e74958;
  if (param_1 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e74978;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b3f650; end: 106b3f767; -[MobileSettingsViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3f650(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c27dd80();
  if (lVar1 == 1) {
    lVar1 = param_1;
    func_0x00010c2280a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227e60();
    _objc_release(lVar1);
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be34aa0();
    lVar2 = param_1;
    func_0x00010c0cf4c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar1 == 0) {
      func_0x00010c298920();
    }
    else {
      func_0x00010c2988e0();
    }
    _objc_release(lVar2);
    lVar1 = param_1;
    func_0x00010c2280a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227e60();
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_11275891c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0cf4e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b3f768; end: 106b3f807; -[MobileSettingsViewController addKeyboardObservers] */

void FUN_106b3f768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  func_0x00010befa240(puVar1,param_2,param_1,PTR_s_keyboardDidShow__1125262c0,
                      *(undefined8 *)PTR__UIKeyboardDidShowNotification_110345cf8,0);
  func_0x00010befa240(puVar1,param_2,param_1,PTR_s_keyboardWillHide__1125ff540,
                      *(undefined8 *)PTR__UIKeyboardWillHideNotification_110345d18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b3f808; end: 106b3f88f; -[MobileSettingsViewController removeKeyboardObservers] */

void FUN_106b3f808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  func_0x00010c12d5c0(puVar1,param_2,param_1,
                      *(undefined8 *)PTR__UIKeyboardDidShowNotification_110345cf8,0);
  func_0x00010c12d5c0(puVar1,param_2,param_1,
                      *(undefined8 *)PTR__UIKeyboardWillHideNotification_110345d18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b3f890; end: 106b3faeb; -[MobileSettingsViewController keyboardWillShow:] */

void FUN_106b3f890(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  dVar7 = param_1;
  _objc_release(uVar1);
  fVar6 = SUB84(dVar7,0);
  uVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,
                      *(undefined8 *)PTR__UIKeyboardAnimationDurationUserInfoKey_110345ce0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,
                      *(undefined8 *)PTR__UIKeyboardAnimationCurveUserInfoKey_110345cd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  uVar3 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(-(param_1 + 56.0));
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c298a20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(-param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106b3faec;
  puStack_90 = &UNK_110842e18;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106b3fb20;
  puStack_b8 = &UNK_110841f20;
  uStack_b0 = param_5;
  uStack_88 = param_5;
  func_0x00010bf03440((double)fVar6,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,
                      -(uVar2 >> 0x1f & 1) & 0xffff000000000000 | (uVar2 & 0xffffffff) << 0x10,
                      &puStack_a8,&puStack_d0);
  func_0x00010c1b6ee0(param_5,param_6,1);
  _objc_release(param_7);
  return;
}



/* Entry: 106b3faec; end: 106b3fb1f;  */

void FUN_106b3faec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b3fb20; end: 106b3fb9b;  */

void FUN_106b3fb20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf480c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073040();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c298680(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106b3fb9c; end: 106b3fba3; -[MobileSettingsViewController keyboardDidShow:] */

void FUN_106b3fb9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b6f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setKeyboardWillBeVisible__11264b5e8,0);
  return;
}



/* Entry: 106b3fba4; end: 106b3fc8f; -[MobileSettingsViewController keyboardWillHide:] */

void FUN_106b3fba4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c298a20();
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
  uVar1 = param_1;
  func_0x00010bf534c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c152980(param_1);
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
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b6ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setKeyboardVisible__11264b5e0,0);
  return;
}



/* Entry: 106b3fc90; end: 106b3fd47; -[MobileSettingsViewController observeValueForKeyPath:ofObject:change:context:] */

void FUN_106b3fc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b3fd48;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106b3fd48; end: 106b3feff;  */

/* WARNING: Possible PIC construction at 0x000106b4002c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b40030) */
/* WARNING: Removing unreachable block (ram,0x000106b40064) */
/* WARNING: Removing unreachable block (ram,0x000106b40048) */

void FUN_106b3fd48(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) {
    puVar1 = *(undefined **)(param_1 + 0x30);
    param_3 = &PTR____CFConstantStringClassReference_110e74938;
    func_0x00010c0720c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e74938);
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    if ((int)puVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c159520();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(uVar2);
      puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010bf85f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c159520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf53340();
      _objc_retainAutoreleasedReturnValue();
      param_3 = ppuVar5;
      func_0x00010c212f20();
      _objc_release(uVar6);
      _objc_release(ppuVar5);
      _objc_release(uVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar1 = puVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126af178;
  _objc_retain(param_3);
  func_0x00010c22b900(puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dc3e98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  ppuVar7 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar3);
  _objc_release(param_3);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(ppuVar7);
  _objc_release(ppuVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c14b3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_saveSuccess_112630718);
  return;
}



/* Entry: 106b3ff00; end: 106b40067; -[MobileSettingsViewController registerNumberDidFail:] */

/* WARNING: Possible PIC construction at 0x000106b4002c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b40030) */
/* WARNING: Removing unreachable block (ram,0x000106b40064) */
/* WARNING: Removing unreachable block (ram,0x000106b40048) */

void FUN_106b3ff00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126af178;
  _objc_retain(param_3);
  func_0x00010c22b900(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc3e98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c14b3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_saveSuccess_112630718);
  return;
}



/* Entry: 106b40068; end: 106b4007b; -[MobileSettingsViewController registerNumberTentativeDidSucced] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b40068(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112758938) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c14b3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_saveSuccess_112630718);
  return;
}



/* Entry: 106b4007c; end: 106b400df; -[MobileSettingsViewController _registerNumberSucceededWithTwoFADisabledTitle:warningMessage:] */

void FUN_106b4007c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be89ac0(param_1,param_2,0);
  func_0x00010bebb9e0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b400e0; end: 106b4022b; -[MobileSettingsViewController _showTwoFADisabledWarningTitle:message:] */

void FUN_106b400e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar5 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 106b4022c; end: 106b4023b;  */

void FUN_106b4022c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106b4023c; end: 106b4044f; -[MobileSettingsViewController _registerNumberDidSucceed:] */

void FUN_106b4023c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dab0d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dab0d8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  func_0x00010bedf1a0(param_1);
  func_0x00010c14b3e0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be647a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b40450; end: 106b40483;  */

void FUN_106b40450(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be647a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b40484; end: 106b405bf; -[MobileSettingsViewController _notifyDelegateWhenSucceed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b40484(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0cf4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c27dd80();
    if ((uVar1 == 0) || (uVar1 == 2)) {
      func_0x00010c0cf4c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2988e0();
    }
    else {
      if (uVar1 != 1) goto LAB_106b405ac;
      uVar1 = param_1;
      func_0x00010c0cf4c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010c0cf4c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      if ((uVar2 & 1) == 0) {
        func_0x00010c2988e0(uVar1);
      }
      else {
        uVar3 = param_3;
        func_0x00010c27dc60(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298900(uVar1);
        _objc_release(uVar3);
      }
      _objc_release(uVar1);
      param_1 = *(ulong *)(param_1 + (long)_DAT_112758914);
      func_0x00010c269d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2bc0();
    }
    _objc_release(param_1);
  }
LAB_106b405ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b405c0; end: 106b405eb; -[MobileSettingsViewController _verifyNumberFailedWithReauthenticationRequired] */

void FUN_106b405c0(undefined8 param_1)

{
  func_0x00010bfe2280();
  func_0x00010bfcd420(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c139cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetViewForVerifyFail_11262c158);
  return;
}



/* Entry: 106b405ec; end: 106b40757; -[MobileSettingsViewController _verifyNumberFailedWithConnectionFailedOrMissingTentativePhoneNumber:] */

/* WARNING: Possible PIC construction at 0x000106b4071c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b40720) */
/* WARNING: Removing unreachable block (ram,0x000106b40754) */
/* WARNING: Removing unreachable block (ram,0x000106b40738) */

void FUN_106b405ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010bfe2280(param_1);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc3e98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c139cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetViewForVerifyFail_11262c158);
  return;
}



/* Entry: 106b40758; end: 106b407c3; -[MobileSettingsViewController _verifyNumberFailedWithGeneralError] */

void FUN_106b40758(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe2280();
  uVar1 = param_1;
  func_0x00010bf480c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ee0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c139cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetViewForVerifyFail_11262c158);
  return;
}



/* Entry: 106b407c4; end: 106b4082b; -[MobileSettingsViewController _verifyNumberSucceededWithTwoFADisabled:warningTitle:warningMessage:] */

void FUN_106b407c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bee86a0(param_1,param_2,param_3);
  func_0x00010bebb9e0(param_1,param_2,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b4082c; end: 106b40a0f; -[MobileSettingsViewController _verifyNumberSucceeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4082c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be408e0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c07ca20();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c063de0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf37f60(param_1);
      _objc_release(uVar1);
    }
    puVar2 = PTR_PTR_1126af178;
    func_0x00010c22b900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e74998;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74998,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e749b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e749b8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126af180;
    ppuVar5 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar2);
  }
  func_0x00010bfe2280(param_1);
  func_0x00010bedf1a0(param_1);
  func_0x00010c14b3e0(param_1);
  func_0x00010be647a0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = param_3;
  func_0x00010c07efe0();
  uVar8 = *(undefined8 *)(param_3 + (long)_DAT_112758904);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 & 1) == 0) {
    func_0x00010c154aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079040();
    func_0x00010c2898c0(uVar8);
    _objc_release(param_3);
  }
  else {
    func_0x00010c2898c0(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106b40a10; end: 106b40aa3; -[MobileSettingsViewController _updateSearchableAfterPhoneVerify] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b40a10(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c07efe0();
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112758904);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 & 1) == 0) {
    func_0x00010c154aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c079040();
    func_0x00010c2898c0(uVar2,param_2,uVar1,0);
    _objc_release(param_1);
  }
  else {
    func_0x00010c2898c0(uVar2,param_2,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b40aa4; end: 106b40dbb; -[MobileSettingsViewController presentVerificationCodeAlertView] */

void FUN_106b40aa4(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e749d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e749d8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e749f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e749f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e74a18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74a18,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e74a38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74a38,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126af180;
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126af180;
  ppuVar8 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  puVar12 = puVar10;
  if (param_1 != 1) {
    puVar11 = PTR_PTR_1126af180;
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar11);
  }
  puVar10 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40();
  _objc_release(puVar10);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bea5b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar4 + 0x20),PTR_s__setMobile__112587068,0);
  return;
}



/* Entry: 106b40dbc; end: 106b40dc7;  */

void FUN_106b40dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setMobile__112587068,0);
  return;
}



/* Entry: 106b40dc8; end: 106b40e6f;  */

void FUN_106b40dc8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf53340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26bc20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07ca20();
  if (iVar1 != 0) {
    func_0x00010c1b3fa0(*(undefined8 *)(param_1 + 0x20),param_2,0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13fec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106b40e70; end: 106b40e7b;  */

void FUN_106b40e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setMobile__112587068,1);
  return;
}



/* Entry: 106b40e7c; end: 106b41017; -[MobileSettingsViewController _setMobile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b40e7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x00010c27dd80();
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127588fc);
  func_0x00010c0faf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c159520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07ca20(param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf18f00(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106b41018; end: 106b410d3;  */

void FUN_106b41018(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b410d4;
  puStack_48 = &UNK_110841fb0;
  _objc_retain(param_2);
  uStack_40 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106b410d4; end: 106b41237;  */

void FUN_106b410d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106b41238;
  puStack_60 = &UNK_1108485e8;
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106b41280;
  puStack_88 = &UNK_110852b60;
  _objc_copyWeak(auStack_80,param_1 + 0x28);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106b412e8;
  puStack_b0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a8,param_1 + 0x28);
  _objc_copyWeak(auStack_d0,param_1 + 0x28);
  func_0x00010c0c0a60(uVar2);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106b41238; end: 106b4127f;  */

void FUN_106b41238(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be89ac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b41280; end: 106b412e7;  */

void FUN_106b41280(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be89ae0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b412e8; end: 106b4135b;  */

void FUN_106b412e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c126c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b4135c; end: 106b4153f; -[MobileSettingsViewController verifyPhoneNumberBarPressed] */

void FUN_106b4135c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf37f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010be408e0();
    if ((int)lVar1 == 0) {
      func_0x00010c1b3fa0(param_1);
      func_0x00010c2381c0(param_1);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_106b41540;
      puStack_40 = &UNK_110842e18;
      lStack_38 = param_1;
      func_0x000100c749e0(0x3e4ccccd,"APPSTORE",&puStack_58);
      return;
    }
    func_0x00010c1b3fa0(param_1);
  }
  func_0x00010bea5b00(param_1);
  lVar1 = param_1;
  func_0x00010bf534c0();
  if ((int)lVar1 != 0) {
    func_0x00010bfe1d80(param_1);
  }
  lVar1 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  func_0x00010c13fec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b41540; end: 106b4159f;  */

void FUN_106b41540(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe2280(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26bc20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf53340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b415a0; end: 106b41683; -[MobileSettingsViewController goToPasswordReauthScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b415a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d0a78;
  _objc_alloc(PTR_PTR_1126d0a78);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127588f8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127588fc);
  func_0x00010bf8d9a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d7e0(puVar1,param_2,uVar3,uVar2,param_1,*(undefined8 *)(param_1 + _DAT_112758900),
                      *(undefined8 *)(param_1 + _DAT_112758904),
                      *(undefined8 *)(param_1 + _DAT_112758914),
                      *(undefined8 *)(param_1 + _DAT_11275890c),
                      *(undefined8 *)(param_1 + _DAT_112758918),
                      *(undefined8 *)(param_1 + _DAT_112758930));
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



/* Entry: 106b41684; end: 106b416bf; -[MobileSettingsViewController verifyCodeBarPressed] */

void FUN_106b41684(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c232920();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea5b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setMobile__112587068,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2984b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_verifyActivationCode_112683b50);
  return;
}



/* Entry: 106b416c0; end: 106b41893; -[MobileSettingsViewController verifyActivationCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b416c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  *(long *)(param_1 + _DAT_11275893c) = *(long *)(param_1 + _DAT_11275893c) + 1;
  func_0x00010c2381c0();
  lVar1 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf480c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127588fc);
  func_0x00010c0faf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfc4000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfafde0(uVar3);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106b41894; end: 106b4194f;  */

void FUN_106b41894(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b41950;
  puStack_48 = &UNK_110841fb0;
  _objc_retain(param_2);
  uStack_40 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106b41950; end: 106b41b6b;  */

void FUN_106b41950(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106b41b6c;
  puStack_88 = &UNK_1108485e8;
  _objc_copyWeak(auStack_80,param_1 + 0x28);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106b41bd4;
  puStack_b0 = &UNK_110962110;
  _objc_copyWeak(auStack_a8,param_1 + 0x28);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106b41c74;
  puStack_d8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d0,param_1 + 0x28);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x106b41ca0;
  puStack_100 = &UNK_110843540;
  _objc_copyWeak(auStack_f8,param_1 + 0x28);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x106b41ce8;
  puStack_128 = &UNK_110843540;
  _objc_copyWeak(auStack_120,param_1 + 0x28);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x106b41d30;
  puStack_150 = &UNK_110843540;
  _objc_copyWeak(auStack_148,param_1 + 0x28);
  _objc_copyWeak(auStack_170,param_1 + 0x28);
  func_0x00010c0c0a40(uVar2);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 106b41b6c; end: 106b41bd3;  */

void FUN_106b41b6c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee86a0();
  _objc_release(param_2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b41bd4; end: 106b41c73;  */

void FUN_106b41bd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee86c0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b41c74; end: 106b41da3;  */

void FUN_106b41c74(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b41da4; end: 106b41de7; -[MobileSettingsViewController getConfirmationCode] */

void FUN_106b41da4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf480c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b41de8; end: 106b41edf; -[MobileSettingsViewController resetViewForVerifyFail] */

void FUN_106b41de8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bf53340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf480c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010c200e20(param_1,param_2,1);
  uVar1 = param_1;
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b41ee0; end: 106b42097; -[MobileSettingsViewController _prefillPhoneNumberAndUpdateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b41ee0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar8 = (long)_DAT_1127588fc;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
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
  func_0x00010c078c00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar7 = param_1;
  if (((ulong)puVar5 & 1) == 0) {
    func_0x00010be18c80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c26b380(uVar1);
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
    func_0x00010c078c00();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (((ulong)puVar6 & 1) != 0) goto LAB_106b42078;
    func_0x00010be18d20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar8 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar8);
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c298a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar7);
LAB_106b42078:
                    /* WARNING: Could not recover jumptable at 0x00010bfe1cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideConfirmationField__1125d60f0,1);
  return;
}



/* Entry: 106b42098; end: 106b423f7; -[MobileSettingsViewController saveSuccess] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b42098(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = param_1;
  func_0x00010be18c80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfe2ce0(param_1,param_2,1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127588fc);
  func_0x00010c26b380(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar1,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if ((int)puVar1 == 0) {
    puVar1 = param_1;
    func_0x00010be18d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c26bc20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c26bc20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bf480c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bf480c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0();
    _objc_release(puVar1);
    func_0x00010bfe1cc0(param_1,param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3fe9797979797979,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c298680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c298680();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c074c20();
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) != 0) goto LAB_106b4237c;
    func_0x00010c139900(param_1);
    puVar1 = param_1;
    func_0x00010c270680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) goto LAB_106b4237c;
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s_updateCountdownLabel__11252e978,0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215ca0(param_1,param_2,puVar1);
  }
  else {
    func_0x00010bfe1cc0(param_1,param_2,1);
    puVar1 = param_1;
    func_0x00010c298680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar1);
    if (*(long *)(param_1 + _DAT_112758940) == 2) goto LAB_106b4237c;
    puVar1 = param_1;
    func_0x00010c298a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  _objc_release(puVar1);
LAB_106b4237c:
  puVar1 = param_1;
  func_0x00010bf53340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(puVar1);
  func_0x00010bf480c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b423f8; end: 106b4271b; -[MobileSettingsViewController updateCountdownLabel:] */

void FUN_106b423f8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  
  func_0x00010c2986a0();
  func_0x00010c220d40(param_1);
  uVar1 = param_1;
  func_0x00010c2986a0();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((long)uVar1 < 1) {
    func_0x00010c215c20(param_1);
    ppuVar4 = &PTR____CFConstantStringClassReference_110daebd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daebd8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c270640(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c25ce40(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    uVar1 = param_1;
    func_0x00010bfc4000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c08fa60();
    _objc_release(uVar1);
    if (uVar7 < 6) {
      func_0x00010c220d20(param_1);
      func_0x00010c200e20(param_1);
      uVar1 = param_1;
      func_0x00010c298680(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195460();
      _objc_release(uVar1);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c298680(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar1);
      _objc_release(puVar8);
    }
    uVar1 = param_1;
    func_0x00010c270680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(uVar1);
    func_0x00010c215ca0(param_1);
  }
  else {
    func_0x00010c2986a0();
    func_0x00010c14de00(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215c20(param_1);
    _objc_release(puVar8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110daebd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daebd8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c270640(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c25ce40(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    uVar1 = param_1;
    func_0x00010bf480c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c08fa60();
    if (uVar2 < 6) {
      _objc_release(uVar7);
      _objc_release(uVar1);
    }
    else {
      uVar2 = param_1;
      func_0x00010bf480c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c075400();
      _objc_release(uVar2);
      _objc_release(uVar7);
      _objc_release(uVar1);
      if ((int)uVar3 == 0) goto LAB_106b42700;
    }
    func_0x00010c220d20(param_1);
    func_0x00010c200e20(param_1);
    func_0x00010c298680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(param_1);
  }
LAB_106b42700:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 106b4271c; end: 106b42903; -[MobileSettingsViewController showLoadingScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b4271c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c09d2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010c09d2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar3 = PTR_PTR_1126c75f0;
      _objc_alloc_init(PTR_PTR_1126c75f0);
      func_0x00010c1beea0(param_1,param_2,puVar3);
      _objc_release(puVar3);
      lVar1 = param_1;
      func_0x00010c09d2e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000106b857cc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b72a0(lVar1,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    func_0x00010bea5600(param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112758944);
    lVar1 = param_1;
    func_0x00010c09d2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar4,param_2,lVar1);
    _objc_release(lVar1);
    func_0x00010c09d2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 106b42904; end: 106b4293f; -[MobileSettingsViewController hideLoadingScreen] */

void FUN_106b42904(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c09d2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bde0810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearLoadingScreenWindow_112555ba0);
  return;
}



/* Entry: 106b42940; end: 106b429a3; -[MobileSettingsViewController _setLoadingScreenWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b42940(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bd863c8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112758944;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
  func_0x00010c225b00(*(double *)PTR__UIWindowLevelAlert_110345e80 + -4.0,
                      *(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 106b429a4; end: 106b429bb; -[MobileSettingsViewController _clearLoadingScreenWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b429a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758944);
  *(undefined8 *)(param_1 + _DAT_112758944) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b429bc; end: 106b42b17; -[MobileSettingsViewController showCountryCodePicker] */

void FUN_106b429bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010c184a40(param_1,param_2,1);
  uVar1 = param_1;
  func_0x00010bf533c0(param_1);
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
  uVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(0xc06b000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b42b18;
  puStack_50 = &UNK_110842e18;
  uStack_48 = param_1;
  func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(param_1);
  return;
}



/* Entry: 106b42b18; end: 106b42b4b;  */

void FUN_106b42b18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b42b4c; end: 106b42c87; -[MobileSettingsViewController hideCountryCodePicker] */

void FUN_106b42b4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010c184a40(param_1,param_2,0);
  uVar1 = param_1;
  func_0x00010bf533c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(0x406b000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c152980(param_1);
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
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b42c88;
  puStack_50 = &UNK_110842e18;
  uStack_48 = param_1;
  func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  return;
}



/* Entry: 106b42c88; end: 106b42cf7;  */

void FUN_106b42c88(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf533c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c086ca0();
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b42cf8; end: 106b42d3f; -[MobileSettingsViewController countryCodePickerView:didSelectCountryCode:] */

void FUN_106b42cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1fafe0(param_1,param_2,param_4);
  func_0x00010bfe1d80(param_1);
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf179a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b42d40; end: 106b42d47; -[MobileSettingsViewController countryCodePickerView:didStopOnCountryCode:] */

void FUN_106b42d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1faff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelectedCountryCode__11265c620,param_4);
  return;
}



/* Entry: 106b42d48; end: 106b42f0f; -[MobileSettingsViewController textFieldShouldBeginEditing:] */

bool FUN_106b42d48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf53340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == lVar1) {
    func_0x00010c236d00(param_1);
  }
  else {
    func_0x00010c1b6f00(param_1);
    lVar2 = param_1;
    func_0x00010bf534c0();
    if ((int)lVar2 != 0) {
      func_0x00010bfe1d80(param_1);
    }
    lVar2 = param_1;
    func_0x00010c26bc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 == lVar2) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_106b42f10;
      puStack_40 = &UNK_110842e18;
      lStack_38 = param_1;
      func_0x000100c749e0(0x3e800000,"APPSTORE",&puStack_58);
    }
    lVar2 = param_1;
    func_0x00010bf480c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 == lVar2) {
      lVar2 = param_1;
      func_0x00010c270680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
        func_0x00010c1503c0(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c215ca0(param_1);
        _objc_release(puVar3);
      }
      func_0x00010c139900(param_1);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      uStack_70 = 0x106b42ff0;
      puStack_68 = &UNK_110842e18;
      lStack_60 = param_1;
      func_0x000100c749e0(0x3e800000,"APPSTORE",&puStack_80);
    }
  }
  _objc_release(param_3);
  return param_3 != lVar1;
}



/* Entry: 106b42f10; end: 106b430cf;  */

void FUN_106b42f10(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c26bc20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinX();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = param_1;
  func_0x00010c26bc20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = uVar4;
  func_0x00010c26bc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1521c0(param_1,uVar4,uVar5,0x4040000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b430d0; end: 106b43183; -[MobileSettingsViewController textFieldDidEndEditing:] */

void FUN_106b430d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_3 == lVar1) {
    lVar2 = param_1;
    func_0x00010bf480c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c074c20();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      return;
    }
    func_0x00010c298a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    lVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b43184; end: 106b4337f; -[MobileSettingsViewController textField:shouldChangeCharactersInRange:replacementString:] */

ulong FUN_106b43184(ulong param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5,
                   long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 != uVar1) {
    uVar5 = 1;
    goto LAB_106b43350;
  }
  uVar1 = param_1;
  func_0x00010bf480c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c074c20();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_1;
    func_0x00010c298680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c074c20();
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010bfe1cc0(param_1,param_2,1);
      uVar1 = param_1;
      func_0x00010c298680(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      goto LAB_106b43284;
    }
  }
  else {
LAB_106b43284:
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c159520(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be73880(param_1,param_2,param_3,param_4,param_5,param_6,uVar1);
  _objc_release(uVar1);
  if ((((param_4 == 0) && (param_5 == uVar2)) &&
      (lVar4 = param_6, func_0x00010c08fa60(), lVar4 == 0)) ||
     (uVar1 = param_1, func_0x00010c0fb080(), (int)uVar1 != 0)) {
    func_0x00010c298a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(param_1);
  }
  else {
    uVar1 = param_1;
    func_0x00010c086c80();
    if ((int)uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010c298a20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar1);
      func_0x00010bfe1cc0(param_1,param_2,1);
    }
  }
LAB_106b43350:
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106b43380; end: 106b43443; -[MobileSettingsViewController textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b43380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf37f60(param_1,param_2,param_3);
  _objc_release(param_3);
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c2280a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227e60();
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_11275891c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0cf4e0();
    _objc_release(param_1);
  }
  return 1;
}



/* Entry: 106b43444; end: 106b436a3; -[MobileSettingsViewController textFieldDidChange:] */

void FUN_106b43444(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf480c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == lVar1) {
    lVar1 = param_1;
    func_0x00010bf480c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 6) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daf898;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf898,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c28ed80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      func_0x00010c220d20(param_1);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c298680(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(lVar1);
      _objc_release(puVar6);
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daebd8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daebd8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar4;
      func_0x00010c28ed80();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c270640(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar3;
      func_0x00010c25ce40(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(ppuVar3);
      _objc_release(ppuVar4);
      func_0x00010c220d20(param_1);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3fe9797979797979,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70)
      ;
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c298680(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(lVar1);
      _objc_release(puVar6);
      func_0x00010c2986a0(param_1);
    }
    lVar1 = param_1;
    func_0x00010c298680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(lVar1);
    func_0x00010c200e20(param_1);
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b436a4; end: 106b4371f; -[MobileSettingsViewController phoneNumberUnchanged] */

uint FUN_106b436a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = param_1;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf37f60(param_1,param_2,uVar2);
  if ((int)uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010be348a0(param_1);
    uVar4 = (uint)param_1 ^ 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 106b43720; end: 106b43877; -[MobileSettingsViewController _phoneNumberTextField:shouldChangeCharactersInRange:replacementString:countryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106b43720(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25da60(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar5 = (long)_DAT_112758920;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c25db20(uVar2,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c130d20(puVar1,param_2,param_4,param_5,uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c082c20(uVar3,param_2,puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  if ((int)uVar3 == 0) {
    func_0x00010c0db420(uVar4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfb58a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c212f20(param_3,param_2,uVar4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  return 0;
}


