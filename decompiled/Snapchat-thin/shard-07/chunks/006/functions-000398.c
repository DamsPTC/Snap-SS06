/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10573c8d8; end: 10573ca7f; -[SCContactsOSPermissionOnCameraServiceProvider _createContactsOSPermissionOnCameraRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10573c8d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126bdaa0;
  _objc_alloc(PTR_PTR_1126bdaa0);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112728ac0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar8;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112728ac8;
    _objc_loadWeakRetained(lVar9);
  }
  lVar3 = lVar9;
  func_0x00010bf10e60(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112728ac4;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010c15fac0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_10573ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf49f80();
  _objc_retainAutoreleasedReturnValue();
  FUN_10573ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ede0(puVar1,param_2,lVar2,lVar3,lVar4,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10573ca80; end: 10573caa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10573ca80(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112728acc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10573caa4; end: 10573caf3; -[SCContactsOSPermissionOnCameraServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10573caa4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112728acc);
  _objc_destroyWeak(param_1 + _DAT_112728ac8);
  _objc_destroyWeak(param_1 + _DAT_112728ac4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112728ac0);
  return;
}



/* Entry: 10573caf4; end: 10573cbd7; -[SCChallengeOrchestrationServiceProvider provide] */

void FUN_10573caf4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bdaa8;
  _objc_alloc(PTR_PTR_1126bdaa8);
  func_0x00010bffd620();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10573cbd8; end: 10573cc17;  */

void FUN_10573cbd8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bddc860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10573cc18; end: 10573cd4f; -[SCChallengeOrchestrationServiceProvider _challengeOrchestrationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10573cc18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bdab0;
  _objc_alloc(PTR_PTR_1126bdab0);
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112728adc;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010bf1cd40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0060e0(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10573cd50; end: 10573cd8f;  */

void FUN_10573cd50(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde9ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10573cd90; end: 10573cf37; -[SCChallengeOrchestrationServiceProvider _cosService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10573cd90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112728ad8;
    _objc_loadWeakRetained(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010c0f98e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  puVar4 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar4,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar4,param_2,30000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112728ad4;
    _objc_loadWeakRetained(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010bfcfa00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  puVar6 = PTR_PTR_1126bdab8;
  _objc_alloc(PTR_PTR_1126bdab8);
  func_0x00010c058f80();
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10573cf38; end: 10573cf87; -[SCChallengeOrchestrationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10573cf38(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112728adc);
  _objc_destroyWeak(param_1 + _DAT_112728ad8);
  _objc_destroyWeak(param_1 + _DAT_112728ad4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112728ad0);
  return;
}



/* Entry: 10573cf88; end: 10573d02b; -[SCChallengeOrchestrationServiceImpl initWithCosService:clientIdProvider:] */

undefined1 *
FUN_10573cf88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea068;
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



/* Entry: 10573d02c; end: 10573d24f; -[SCChallengeOrchestrationServiceImpl verifyChallenge:onComplete:] */

void FUN_10573d02c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bdac0;
  func_0x00010c0cb140(PTR_PTR_1126bdac0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171a40(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010af82634();
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dacc0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c17a940(param_3,param_2,puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  if (ppuVar6 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110dadcb8);
  }
  puVar4 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bef9140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010befab00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10573d250;
  puStack_60 = &UNK_1108aea70;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010c298640(uVar5,param_2,param_3,puVar8,&puStack_78);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10573d250; end: 10573d25b;  */

void FUN_10573d250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010573d258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10573d25c; end: 10573d28b; -[SCChallengeOrchestrationServiceImpl .cxx_destruct] */

void FUN_10573d25c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10573d28c; end: 10573d2ff; -[UNISCJanusChallengeOrchestrationInternalService initWithUnifiedGrpcService:] */

undefined1 * FUN_10573d28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea070;
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



/* Entry: 10573d300; end: 10573d3e3; -[UNISCJanusChallengeOrchestrationInternalService checkEnforcementWithRequest:callOptionsBuilder:handler:] */

void FUN_10573d300(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bdac8;
  _objc_opt_class(PTR_PTR_1126bdac8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dfab98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10573d3e4; end: 10573d3ef; -[UNISCJanusChallengeOrchestrationInternalService .cxx_destruct] */

void FUN_10573d3e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10573d3f0; end: 10573d463; -[UNISCJanusChallengeOrchestrationService initWithUnifiedGrpcService:] */

undefined1 * FUN_10573d3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea078;
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



/* Entry: 10573d464; end: 10573d547; -[UNISCJanusChallengeOrchestrationService verifyChallengeWithRequest:callOptionsBuilder:handler:] */

void FUN_10573d464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bdad0;
  _objc_opt_class(PTR_PTR_1126bdad0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dfabb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10573d548; end: 10573d62b; -[UNISCJanusChallengeOrchestrationService requestChallengeWithRequest:callOptionsBuilder:handler:] */

void FUN_10573d548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bdad8;
  _objc_opt_class(PTR_PTR_1126bdad8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dfabd8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10573d62c; end: 10573d637; -[UNISCJanusChallengeOrchestrationService .cxx_destruct] */

void FUN_10573d62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10573d638; end: 10573d6b3;  */

undefined * FUN_10573d638(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfd80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dfabf8,
                        &UNK_10ddbcc08,&UNK_10ddbcc5c,6,FUN_10573d6b4,0);
    do {
      if (puRam00000001136bfd80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfd80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfd80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfd80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfd80;
}



/* Entry: 10573d6b4; end: 10573d6cb;  */

uint FUN_10573d6b4(uint param_1)

{
  return (uint)(param_1 < 0xc) & 0xc0fU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10573d6cc; end: 10573d747; +[SCJanusCheckEnforcementRequestHeader descriptor] */

undefined * FUN_10573d6cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfd88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a60300,
                        &PTR____CFConstantStringClassReference_110dfac18,
                        &PTR_s_snapchat_janus_api_1130f8b70,&PTR_DAT_1130f8c08,8,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bfd88 = puVar1;
  }
  return puRam00000001136bfd88;
}



/* Entry: 10573d748; end: 10573d7d3; +[SCJanusCheckEnforcementRequest descriptor] */

undefined * FUN_10573d748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfd90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a60350,
                        &PTR____CFConstantStringClassReference_110dfac38,
                        &PTR_s_snapchat_janus_api_1130f8b70,&PTR_DAT_1130f8d08,8,0x48,0x1c);
    func_0x00010c229040();
    puRam00000001136bfd90 = puVar1;
  }
  return puRam00000001136bfd90;
}



/* Entry: 10573d7d4; end: 10573d85f; +[SCJanusCheckEnforcementResponse descriptor] */

undefined * FUN_10573d7d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfd98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a603a0,
                        &PTR____CFConstantStringClassReference_110dfac58,
                        &PTR_s_snapchat_janus_api_1130f8b70,&PTR_s_statusCode_1130f8b88,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bfd98 = puVar1;
  }
  return puRam00000001136bfd98;
}



/* Entry: 10573d860; end: 10573d8c7; +[SCJanusChangeEmailTransaction descriptor] */

void FUN_10573d860(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfda0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a60440,
                        &PTR____CFConstantStringClassReference_110dfac78,
                        &PTR_s_snapchat_janus_api_1130f8e08,&PTR_DAT_1130f8e20,1,0x10,0x1c);
    puRam00000001136bfda0 = puVar1;
  }
  return;
}



/* Entry: 10573d8c8; end: 10573d92f; +[SCJanusResendConfirmationEmailTransaction descriptor] */

void FUN_10573d8c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfda8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a60490,
                        &PTR____CFConstantStringClassReference_110dfac98,
                        &PTR_s_snapchat_janus_api_1130f8e08,0,0,4,0x1c);
    puRam00000001136bfda8 = puVar1;
  }
  return;
}



/* Entry: 10573d930; end: 10573d997; +[SCJanusSendCodePreLoginAccountRecoveryTransaction descriptor] */

void FUN_10573d930(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfdb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a604e0,
                        &PTR____CFConstantStringClassReference_110dfacb8,
                        &PTR_s_snapchat_janus_api_1130f8e08,&PTR_DAT_1130f8e40,5,0x28,0x1c);
    puRam00000001136bfdb0 = puVar1;
  }
  return;
}



/* Entry: 10573d998; end: 10573d9ff; +[SCJanusSignUpVerifyPhoneTransaction descriptor] */

void FUN_10573d998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfdb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a60530,
                        &PTR____CFConstantStringClassReference_110dfacd8,
                        &PTR_s_snapchat_janus_api_1130f8e08,0,0,4,0x1c);
    puRam00000001136bfdb8 = puVar1;
  }
  return;
}



/* Entry: 10573da00; end: 10573dae3; +[SCJanusSignUpSetEmailTransaction descriptor] */

void FUN_10573da00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfdc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a60580,
                        &PTR____CFConstantStringClassReference_110dfacf8,
                        &PTR_s_snapchat_janus_api_1130f8e08,0,0,4,0x1c);
    puRam00000001136bfdc0 = puVar1;
  }
  return;
}



/* Entry: 10573dae4; end: 10573daef;  */

bool FUN_10573dae4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10573daf0; end: 10573db6b; +[SCAbuseDecisionHttpRequestInfo descriptor] */

undefined * FUN_10573daf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfdd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a60620,
                        &PTR____CFConstantStringClassReference_110dfad38,&PTR_DAT_1130f8ee0,
                        &PTR_s_ip_1130f8f98,8,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bfdd0 = puVar1;
  }
  return puRam00000001136bfdd0;
}



/* Entry: 10573db6c; end: 10573dc4f; +[SCAbuseDecisionRequestIds descriptor] */

void FUN_10573db6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfdd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a60670,
                        &PTR____CFConstantStringClassReference_110dfad58,&PTR_DAT_1130f8ee0,
                        &PTR_DAT_1130f8ef8,5,0x30,0x1c);
    puRam00000001136bfdd8 = puVar1;
  }
  return;
}



/* Entry: 10573dc50; end: 10573dc67;  */

uint FUN_10573dc50(uint param_1)

{
  return (uint)(param_1 < 0xc) & 0xc07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10573dc68; end: 10573dccf; +[SCJanusRequestChallengeRequest descriptor] */

void FUN_10573dc68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfde8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a60710,
                        &PTR____CFConstantStringClassReference_110dfad98,
                        &PTR_s_snapchat_janus_api_1130f90a0,&PTR_DAT_1130f90b8,2,0x18,0x1c);
    puRam00000001136bfde8 = puVar1;
  }
  return;
}



/* Entry: 10573dcd0; end: 10573dd5b; +[SCJanusRequestChallengeResponse descriptor] */

undefined * FUN_10573dcd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfdf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a60760,
                        &PTR____CFConstantStringClassReference_110dfadb8,
                        &PTR_s_snapchat_janus_api_1130f90a0,&PTR_s_statusCode_1130f90f8,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136bfdf0 = puVar1;
  }
  return puRam00000001136bfdf0;
}



/* Entry: 10573dd5c; end: 10573de3f; -[SCPermissionSettingsReportingServiceProvider provide] */

void FUN_10573dd5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bdae0;
  _objc_alloc(PTR_PTR_1126bdae0);
  func_0x00010c035580();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10573de40; end: 10573de7f;  */

void FUN_10573de40(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10573de80; end: 10573e233; -[SCPermissionSettingsReportingServiceProvider _createPermissionSettingsReporter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10573de80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10573e240;
  puStack_90 = &UNK_1108aeaf0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bdae8;
  _objc_alloc();
  lVar4 = param_1 + _DAT_112728af0;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112728af4;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112728af8;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf10e60();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112728afc;
  lVar11 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf49f80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar13 = lVar22;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112728b00;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf70a00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112728b04;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112728b08;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112728b0c;
  _objc_loadWeakRetained();
  lVar21 = param_1;
  func_0x00010c291120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05dfc0();
  _objc_release(lVar21);
  _objc_release(param_1);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(puVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar22);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10573e234; end: 10573e23f;  */

void FUN_10573e234(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSDate_1126ae770,PTR_s_date_1125b6d20);
  return;
}



/* Entry: 10573e240; end: 10573e2bf;  */

void FUN_10573e240(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10573e2c0; end: 10573e373; -[SCPermissionSettingsReportingServiceProvider _createPermissionSettingsReportingLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10573e2c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bdaf0;
  _objc_alloc(PTR_PTR_1126bdaf0);
  param_1 = param_1 + _DAT_112728b10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018080(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10573e374; end: 10573e43f; -[SCPermissionSettingsReportingServiceProvider _networkService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10573e374(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bdaf8;
  _objc_alloc(PTR_PTR_1126bdaf8);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112728b18;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010c273160(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112728b14;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048a00(puVar1,param_2,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10573e440; end: 10573e4e3; -[SCPermissionSettingsReportingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10573e440(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112728b00);
  _objc_destroyWeak(param_1 + _DAT_112728b14);
  _objc_destroyWeak(param_1 + _DAT_112728af8);
  _objc_destroyWeak(param_1 + _DAT_112728b08);
  _objc_destroyWeak(param_1 + _DAT_112728b0c);
  _objc_destroyWeak(param_1 + _DAT_112728af0);
  _objc_destroyWeak(param_1 + _DAT_112728b18);
  _objc_destroyWeak(param_1 + _DAT_112728b04);
  _objc_destroyWeak(param_1 + _DAT_112728b10);
  _objc_destroyWeak(param_1 + _DAT_112728afc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112728af4);
  return;
}



/* Entry: 10573e4e4; end: 10573e80f; -[SCPermissionSettingsReporterImpl initWithUserSession:networkService:audioSession:captureAuthorizationChecker:contactPermissionManager:contactPermissionInfoProvider:locationPermissionsManager:spectaclesManager:userDefaults:userPreferences:reportTimestampGenerator:logger:userActivityInfoProvider:] */

undefined8 *
FUN_10573e4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_68 = PTR_PTR_1126ea080;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    uVar2 = param_13;
    _objc_retainBlock();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
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



/* Entry: 10573e810; end: 10573e9f3; -[SCPermissionSettingsReporterImpl reportPermissionSettingsWithSource:completionQueue:completionHandler:] */

void FUN_10573e810(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    func_0x00010be539c0(param_1);
    lVar1 = param_1;
    func_0x00010be41120();
    if ((int)lVar1 == 0) {
      _objc_initWeak(auStack_70,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_80,auStack_70);
      uStack_78 = param_3;
      _objc_retain(param_4);
      _objc_retain(param_5);
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa8180(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_70);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10573e9f4;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_5);
      lStack_48 = param_5;
      func_0x00010007380c(param_4,&puStack_68);
      func_0x00010be539c0(param_1);
      func_0x00010be539a0(param_1);
      _objc_release(lStack_48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10573e9f4; end: 10573ea03;  */

void FUN_10573e9f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010573ea00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 10573ea04; end: 10573ea4b;  */

void FUN_10573ea04(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10573ea4c; end: 10573eaff; -[SCPermissionSettingsReporterImpl processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_10573ea4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_x5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(in_x5);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10573eb00;
  puStack_40 = &UNK_110842508;
  uStack_38 = in_x5;
  _objc_retain(in_x5);
  func_0x00010c133780(param_1,param_2,1,uVar1,&puStack_58);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(in_x5);
  return 0;
}



/* Entry: 10573eb00; end: 10573eb1b;  */

void FUN_10573eb00(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010573eb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 ^ 1,0);
    return;
  }
  return;
}



/* Entry: 10573eb1c; end: 10573ebbf; -[SCPermissionSettingsReporterImpl _isInCooldown] */

bool FUN_10573eb1c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f9cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_2 + 0x48);
    func_0x00010c0dff20(lVar2,param_3,&PTR____CFConstantStringClassReference_110dfadd8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      return false;
    }
  }
  func_0x00010c26f3a0(lVar2);
  _objc_release(lVar2);
  return ABS(param_1) < 86400.0;
}



/* Entry: 10573ebc0; end: 10573ed6b; -[SCPermissionSettingsReporterImpl _handleLocationAuthorizationFetchResult:source:completionQueue:completionHandler:] */

void FUN_10573ebc0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c083160();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c083180();
    _objc_release(uVar2);
    func_0x00010bdf1380(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_58);
    uStack_68 = param_4;
    uStack_60 = param_3;
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010bf11120(uVar2);
    _objc_release(uVar2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10573ed6c; end: 10573edbf;  */

void FUN_10573ed6c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdf1380(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10573edc0; end: 10573f023; -[SCPermissionSettingsReporterImpl _createPermissionsRequestWithVideoCaptureAuthorizationFetchResult:locationAuthorized:source:completionQueue:completionHandler:] */

void FUN_10573edc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_PTR_1126bdb00;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfd45e0();
  func_0x00010c181200(puVar1,param_2,uVar2);
  _objc_release(uVar3);
  func_0x00010c1cde80(puVar1,param_2,0);
  func_0x00010c1bf7a0(puVar1,param_2,param_4);
  puVar4 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  func_0x00010c176d20(puVar1,param_2,puVar4 == (undefined *)0x3);
  func_0x00010c172aa0(puVar1,param_2,1);
  lVar5 = *(long *)(param_1 + 0x18);
  func_0x00010c1238e0(lVar5);
  func_0x00010c1c7960(puVar1,param_2,lVar5 == 0x67726e74);
  func_0x00010c176220(puVar1,param_2,param_3);
  puVar4 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
  func_0x00010c09f4c0(PTR__OBJC_CLASS___CLLocationManager_1126bc328);
  func_0x00010c1bf980(puVar1,param_2,puVar4);
  lVar6 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010bf1e6e0();
  func_0x00010c172ac0(puVar1,param_2,lVar5 == 5);
  _objc_release(lVar6);
  puVar4 = PTR_PTR_1126af6d8;
  func_0x00010c0dcca0(PTR_PTR_1126af6d8);
  func_0x00010c1ae360(puVar1,param_2,(uint)puVar4 ^ 1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfcdc40();
  func_0x00010c21e0e0(puVar1,param_2,uVar2);
  _objc_release(uVar3);
  func_0x00010c1eb540(puVar1,param_2,param_5);
  puVar4 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  uVar7 = 0;
  if (puVar4 < (undefined *)0x5) {
    uVar7 = *(undefined4 *)(&UNK_10ddbcd14 + (long)puVar4 * 4);
  }
  func_0x00010c1db440(puVar1,param_2,uVar7);
  puVar4 = PTR_PTR_1126af6d8;
  func_0x00010c0dc620(PTR_PTR_1126af6d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aee80(puVar1,param_2,puVar4);
  lVar5 = param_1;
  func_0x00010bde7240(param_1);
  func_0x00010c181460(puVar1,param_2,lVar5);
  func_0x00010be539c0(param_1,param_2,2,param_5);
  func_0x00010be8ffa0(param_1,param_2,puVar1,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10573f024; end: 10573f203; -[SCPermissionSettingsReporterImpl _reportPermissionRequest:source:completionQueue:completionHandler:] */

void FUN_10573f024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10573f204;
  puStack_90 = &UNK_110846540;
  _objc_copyWeak(auStack_88,auStack_78);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x10573f23c;
  puStack_c0 = &UNK_110846540;
  uStack_80 = param_4;
  _objc_copyWeak(auStack_b8,auStack_78);
  uStack_b0 = param_4;
  _objc_copyWeak(auStack_e8,auStack_78);
  uStack_e0 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c133760(uVar2);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10573f204; end: 10573f273;  */

void FUN_10573f204(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be539c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10573f274; end: 10573f2bb;  */

void FUN_10573f274(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10573f2bc; end: 10573f3e3; -[SCPermissionSettingsReporterImpl _requestCompletedWithOutcome:source:completionQueue:completionHandler:] */

void FUN_10573f2bc(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x58);
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1daba0(uVar1);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10573f3e4;
  puStack_68 = &UNK_11084a9b8;
  uStack_58 = (undefined1)param_3;
  uStack_60 = param_6;
  _objc_retain(param_6);
  func_0x00010007380c(param_5,&puStack_80);
  func_0x00010be539c0(param_1);
  func_0x00010be539a0(param_1);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10573f3e4; end: 10573f3f7;  */

void FUN_10573f3e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010573f3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10573f3f8; end: 10573f4a3; -[SCPermissionSettingsReporterImpl _logFlowStep:source:] */

void FUN_10573f3f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c088240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c088240(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10573f4a4; end: 10573f54f; -[SCPermissionSettingsReporterImpl _logFlowResult:source:] */

void FUN_10573f4a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c088240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c088240(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10573f550; end: 10573f5ab; -[SCPermissionSettingsReporterImpl _contactPermissionAuthorizationStatus] */

undefined4 FUN_10573f550(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf49c00();
  _objc_release(lVar2);
  if (lVar3 - 1U < 4) {
    uVar1 = *(undefined4 *)(&UNK_10ddbcd30 + (lVar3 - 1U) * 4);
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10573f5ac; end: 10573f66b; -[SCPermissionSettingsReporterImpl .cxx_destruct] */

void FUN_10573f5ac(long param_1)

{
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



/* Entry: 10573f66c; end: 10573f6cf; -[SCPreferences permissionSettingsReportTimestamp] */

void FUN_10573f66c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110dfae18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10573f6d0; end: 10573f74b; -[SCPreferences setPermissionSettingsReportTimestamp:] */

void FUN_10573f6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110dfae18);
  return;
}



/* Entry: 10573f74c; end: 10573f7f3; -[SCPermissionSettingsReportingLoggerImpl initWithGraphene:] */

undefined1 * FUN_10573f74c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea088;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10573f7f4; end: 10573f8bf; -[SCPermissionSettingsReportingLoggerImpl logPermissionSettingsReportFlowStep:source:isDailyActiveUser:] */

void FUN_10573f7f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10573f8c0; end: 10573f8f7;  */

void FUN_10573f8c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10573f8f8; end: 10573f9c3; -[SCPermissionSettingsReportingLoggerImpl logPermissionSettingsReportFlowResult:source:isDailyActiveUser:] */

void FUN_10573f8f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10573f9c4; end: 10573f9fb;  */

void FUN_10573f9c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10573f9fc; end: 10573faa7; -[SCPermissionSettingsReportingLoggerImpl _logReportFlowStep:source:isDailyActiveUser:] */

void FUN_10573f9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bdb08;
  func_0x00010c133d60(PTR_PTR_1126bdb08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010573f6dc(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  func_0x00010be54300(param_1,param_2,puVar2,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10573faa8; end: 10573fb53; -[SCPermissionSettingsReportingLoggerImpl _logReportFlowResult:source:isDailyActiveUser:] */

void FUN_10573faa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bdb08;
  func_0x00010c133ac0(PTR_PTR_1126bdb08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010573f704(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dce878,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  func_0x00010be54300(param_1,param_2,puVar2,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10573fb54; end: 10573fc23; -[SCPermissionSettingsReportingLoggerImpl _logGrapheneMetric:source:isDailyActiveUser:] */

void FUN_10573fb54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010573f730(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  uVar3 = uVar2;
  func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110dfaf78,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10573fc24; end: 10573fc53; -[SCPermissionSettingsReportingLoggerImpl .cxx_destruct] */

void FUN_10573fc24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10573fc54; end: 10573fdcf; -[SCPermissionSettingsGrpcNetworkService initWithSnapTokenProvider:unifiedGRPCClientFactory:] */

undefined1 *
FUN_10573fc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ea090;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126bdb10;
    _objc_alloc();
    func_0x00010c058f80();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10573fdd0; end: 10573ff93; -[SCPermissionSettingsGrpcNetworkService reportPermissionRequest:requestBuiltCompletionHander:requestSubmittedCompletionHander:networkCompletionHandler:] */

void FUN_10573fdd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bd360;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010c15f460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  if (ppuVar4 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar3);
  }
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_6);
  uVar5 = param_3;
  func_0x00010c2886a0(uVar7);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(puVar3 + 0x20);
  if (lVar6 != 0) {
    _objc_retain(uVar5);
    func_0x00010c261740(param_2);
    (**(code **)(lVar6 + 0x10))(lVar6,param_2,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 10573ff94; end: 10573fffb;  */

void FUN_10573ff94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010c261740(param_2);
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10573fffc; end: 10574002b; -[SCPermissionSettingsGrpcNetworkService .cxx_destruct] */

void FUN_10573fffc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10574002c; end: 10574009f; -[UNISCIDPermissionSettingsMesh initWithUnifiedGrpcService:] */

undefined1 * FUN_10574002c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea098;
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



/* Entry: 1057400a0; end: 105740183; -[UNISCIDPermissionSettingsMesh updatePermissionSettingsWithRequest:callOptionsBuilder:handler:] */

void FUN_1057400a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bdb18;
  _objc_opt_class(PTR_PTR_1126bdb18);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dfaff8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105740184; end: 10574018f; -[UNISCIDPermissionSettingsMesh .cxx_destruct] */

void FUN_105740184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105740190; end: 1057401bb; +[SCGraphenePermissionSettingsReportMetric reportStep] */

void FUN_105740190(void)

{
  _objc_alloc(PTR_PTR_1126bdb08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057401bc; end: 1057401e7; +[SCGraphenePermissionSettingsReportMetric reportResult] */

void FUN_1057401bc(void)

{
  _objc_alloc(PTR_PTR_1126bdb08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057401e8; end: 105740287; -[SCGraphenePermissionSettingsReportMetric description] */

void FUN_1057401e8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dfb018;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dfb018,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ea0a0;
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



/* Entry: 105740288; end: 1057403d3; -[SCGrapheneRegistry permissionSettingsReportGraphene] */

void FUN_105740288(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105740310;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfe00 != -1) {
    func_0x00010002a2fc(0x1136bfe00,&puStack_48);
  }
  uVar1 = uRam00000001136bfdf8;
  _objc_retain(uRam00000001136bfdf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057403d4; end: 1057403df; -[SCUserActivityInfoServices .cxx_destruct] */

void FUN_1057403d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057403e0; end: 10574047f; -[SCNotificationsPermissionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057403e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112728b6c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3bbc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126ea0b0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105740480; end: 1057404ff; -[SCNotificationsPermissionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105740480(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112728b6c);
  _objc_destroyWeak(param_1 + _DAT_112728b74);
  _objc_destroyWeak(param_1 + _DAT_112728b78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112728b70,0);
  return;
}



/* Entry: 105740500; end: 105740537; -[SCNotificationsPermissionRequestWorkflow _beginRequestNotificationsPermission] */

void FUN_105740500(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105740538; end: 105740543; -[SCNotificationsPermissionRequestWorkflow .cxx_destruct] */

void FUN_105740538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105740544; end: 105740757; -[SCAdBrowserController initWithWebBrowser:browserClientId:browserInteractiveIndex:presenterBrowsingDelegate:adBrowserControllerDelegate:timerProvider:adConfigProvider:adCrashLogging:blizzardLogger:adBrowsingConfig:webBrowsingConfigProvider:] */

undefined8 *
FUN_105740544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126ea0c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c173d60(puVar1);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[3];
    puVar1[3] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 1,param_7);
    _objc_retain(param_11);
    uVar2 = puVar1[4];
    puVar1[4] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    func_0x00010c1e1440(puVar1);
  }
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



/* Entry: 105740758; end: 105740793; -[SCAdBrowserController onAdTopSnapOpened] */

void FUN_105740758(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c10faa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121000(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105740794; end: 1057407c3; -[SCAdBrowserController onAdAttachmentOpened] */

void FUN_105740794(undefined8 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x50) = 1;
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x40));
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 1057407c4; end: 1057407f7; -[SCAdBrowserController onAdAttachmentDismissed] */

void FUN_1057407c4(double param_1,long param_2)

{
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x40));
  *(double *)(param_2 + 0x80) =
       *(double *)(param_2 + 0x80) + (param_1 - *(double *)(param_2 + 0x78));
  return;
}



/* Entry: 1057407f8; end: 1057407ff; -[SCAdBrowserController background:] */

void FUN_1057407f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x51) = param_3;
  return;
}



/* Entry: 105740800; end: 105740807; -[SCAdBrowserController foreground] */

void FUN_105740800(long param_1)

{
  *(undefined1 *)(param_1 + 0x51) = 0;
  return;
}



/* Entry: 105740808; end: 105740817; -[SCAdBrowserController onLeaveAd] */

void FUN_105740808(long param_1)

{
  if ((*(byte *)(param_1 + 0x51) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed0350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tryDeactivateController_112591a78);
  return;
}



/* Entry: 105740818; end: 10574081b; -[SCAdBrowserController deactivateController] */

void FUN_105740818(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tryDeactivateController_112591a78);
  return;
}



/* Entry: 10574081c; end: 1057409af; -[SCAdBrowserController reactivateController:] */

void FUN_10574081c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  _objc_retain(param_3);
  func_0x00010c077480();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bef2c20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b3e90;
    func_0x00010befdee0(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar2);
    _objc_release(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  if (*(char *)(param_1 + 0x53) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bef2c20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b3e90;
    func_0x00010befdee0(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar2);
    _objc_release(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c1e1440(param_1);
  _objc_release(param_3);
  if (*(char *)(param_1 + 0x52) == '\x01') {
    *(undefined1 *)(param_1 + 0x52) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x60),PTR_s_invalidate_1125f8150);
    return;
  }
  return;
}



/* Entry: 1057409b0; end: 1057409f3; -[SCAdBrowserController setControllerWithEventDelegate:] */

void FUN_1057409b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x70,param_3);
  func_0x00010c1977a0(*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


