/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a186cc; end: 105a1879b; -[SCStoriesMetricServicesEntryPoint _createPostingLoggerWithPerformer:grapheneMetricsEmitter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a186cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c12c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_11272d804;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038200(puVar1,param_2,lVar3,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a1879c; end: 105a18817; -[SCStoriesMetricServicesEntryPoint _createTopicsLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a1879c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c12c8;
  _objc_alloc(PTR_PTR_1126c12c8);
  param_1 = param_1 + _DAT_11272d7f4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a18818; end: 105a189d7; -[SCStoriesMetricServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a18818(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272d818,0);
  _objc_storeStrong(param_1 + _DAT_11272d814,0);
  _objc_destroyWeak(param_1 + _DAT_11272d800);
  _objc_destroyWeak(param_1 + _DAT_11272d7f8);
  _objc_destroyWeak(param_1 + _DAT_11272d810);
  _objc_destroyWeak(param_1 + _DAT_11272d7fc);
  _objc_destroyWeak(param_1 + _DAT_11272d80c);
  _objc_destroyWeak(param_1 + _DAT_11272d808);
  _objc_destroyWeak(param_1 + _DAT_11272d7f0);
  _objc_destroyWeak(param_1 + _DAT_11272d804);
  _objc_destroyWeak(param_1 + _DAT_11272d7f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d7ec);
  return;
}



/* Entry: 105a189d8; end: 105a18ee7; -[SCStoriesNetworkingServicesEntryPoint _createMixerNetworkRequesterWithEndpointManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a189d8(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lVar25 = (long)_DAT_11272d81c;
  _objc_retain(param_3);
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar1 = lVar25;
  func_0x00010bf0dd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = param_1 + _DAT_11272d820;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  _objc_release(lVar25);
  lVar25 = param_1 + _DAT_11272d824;
  _objc_loadWeakRetained();
  lVar3 = lVar25;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar26 = (long)_DAT_11272d828;
  lVar25 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar4 = lVar25;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar5 = lVar25;
  func_0x00010bfcc7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar26 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar6 = lVar26;
  func_0x00010bfcc7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  lVar25 = param_1 + _DAT_11272d82c;
  _objc_loadWeakRetained();
  lVar7 = lVar25;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = param_1 + _DAT_11272d830;
  _objc_loadWeakRetained();
  lVar8 = lVar25;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = param_1 + _DAT_11272d834;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar26);
  _objc_release(lVar25);
  lVar25 = param_1 + _DAT_11272d838;
  _objc_loadWeakRetained();
  lVar11 = lVar25;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = param_1 + _DAT_11272d83c;
  _objc_loadWeakRetained();
  lVar12 = lVar25;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = param_1 + _DAT_11272d840;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bfa37e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  _objc_release(lVar25);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105a18ee8;
  puStack_78 = &UNK_110867208;
  puVar14 = PTR_PTR_1126ae720;
  lStack_70 = lVar13;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c12d8;
  _objc_alloc();
  lVar16 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11272d844;
  _objc_loadWeakRetained();
  lVar17 = lVar25;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11272d848;
  _objc_loadWeakRetained();
  lVar18 = lVar26;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272d84c;
  _objc_loadWeakRetained();
  lVar19 = lVar9;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11272d850;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11272d854;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272d858;
  _objc_loadWeakRetained();
  lVar24 = param_1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0455e0(puVar15,param_2,lVar2,lVar8,lVar1,param_3,lVar4,lVar5,lVar6,lVar7,lVar10,
                      lVar16,lVar11,lVar17,lVar12,lVar18,lVar19,puVar14,lVar21,lVar23,lVar24);
  _objc_release(param_3);
  _objc_release(lVar24);
  _objc_release(param_1);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(lVar26);
  _objc_release(lVar17);
  _objc_release(lVar25);
  _objc_release(lVar16);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 105a18ee8; end: 105a18eef;  */

void FUN_105a18ee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf56190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_createFeedCardRequestSender_1125b3208);
  return;
}



/* Entry: 105a18ef0; end: 105a190e7; -[SCStoriesNetworkingServicesEntryPoint _createFSNNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a18ef0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + _DAT_11272d824;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272d820;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272d830;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272d838;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272d82c;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126c12e0;
  _objc_alloc(PTR_PTR_1126c12e0);
  param_1 = param_1 + _DAT_11272d858;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e4c0(puVar8,param_2,lVar2,lVar4,lVar5,lVar3,lVar7,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105a190e8; end: 105a1926f; -[SCStoriesNetworkingServicesEntryPoint _createSTMSNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a190e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11272d85c;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar3 = lVar7;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar1 = param_1 + _DAT_11272d824;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272d828;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272d838;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11272d858;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126bd390;
  _objc_alloc(PTR_PTR_1126bd390);
  func_0x00010c03f480();
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105a19270; end: 105a19323; -[SCStoriesNetworkingServicesEntryPoint _createMixerEndpointManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a19270(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_11272d82c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c12e8;
  _objc_alloc(PTR_PTR_1126c12e8);
  param_1 = param_1 + _DAT_11272d848;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffec00(puVar3,param_2,lVar2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a19324; end: 105a19343; -[SCStoriesNetworkingServicesEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a19324(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272d850);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a19344; end: 105a19357; -[SCStoriesNetworkingServicesEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a19344(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272d850,param_3);
  return;
}



/* Entry: 105a19358; end: 105a19453; -[SCStoriesNetworkingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a19358(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d858);
  _objc_destroyWeak(param_1 + _DAT_11272d854);
  _objc_destroyWeak(param_1 + _DAT_11272d850);
  _objc_destroyWeak(param_1 + _DAT_11272d840);
  _objc_destroyWeak(param_1 + _DAT_11272d84c);
  _objc_destroyWeak(param_1 + _DAT_11272d848);
  _objc_destroyWeak(param_1 + _DAT_11272d83c);
  _objc_destroyWeak(param_1 + _DAT_11272d844);
  _objc_destroyWeak(param_1 + _DAT_11272d85c);
  _objc_destroyWeak(param_1 + _DAT_11272d82c);
  _objc_storeStrong(param_1 + _DAT_11272d860,0);
  _objc_destroyWeak(param_1 + _DAT_11272d838);
  _objc_destroyWeak(param_1 + _DAT_11272d834);
  _objc_destroyWeak(param_1 + _DAT_11272d81c);
  _objc_destroyWeak(param_1 + _DAT_11272d830);
  _objc_destroyWeak(param_1 + _DAT_11272d828);
  _objc_destroyWeak(param_1 + _DAT_11272d820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d824);
  return;
}



/* Entry: 105a19454; end: 105a195a7; -[SCStoriesFSNNetworkRequester initWithUserSession:sessionRequestManager:snapTokenProvider:networkConnectivityMonitor:STMSGatewayHostBaseURL:locationProvider:] */

undefined1 *
FUN_105a19454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eb530;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a195a8; end: 105a197af; -[SCStoriesFSNNetworkRequester deleteStoryWithServerId:postingStoryType:additionalHttpHeaders:successQueue:successBlock:failureQueue:failureBlock:] */

void FUN_105a195a8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_90,auStack_80);
  uStack_88 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_9);
  func_0x00010bfa48e0(uVar1);
  _objc_release(param_9);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105a197b0; end: 105a1981b;  */

void FUN_105a197b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec5f80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a1981c; end: 105a19833;  */

void FUN_105a1981c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105a19830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_2);
  return;
}



/* Entry: 105a19834; end: 105a19a03; -[SCStoriesFSNNetworkRequester deleteStoryWithServerId:successQueue:successBlock:failureQueue:failureBlock:] */

void FUN_105a19834(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_7);
  func_0x00010bfa48e0(uVar1);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a19a04; end: 105a19a73;  */

void FUN_105a19a04(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec5f80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a19a74; end: 105a19a8b;  */

void FUN_105a19a74(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105a19a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_2);
  return;
}



/* Entry: 105a19a8c; end: 105a19c07; -[SCStoriesFSNNetworkRequester _createSTMSDeleteStoryRequestWithStoryType:serverId:] */

void FUN_105a19a8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c12f0;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126c0f00;
  _objc_alloc_init(PTR_PTR_1126c0f00);
  puVar3 = PTR_PTR_1126c12f8;
  _objc_alloc_init(PTR_PTR_1126c12f8);
  func_0x00010c204680(puVar1);
  _objc_release(param_4);
  puVar4 = puVar1;
  func_0x00010c20ddc0(puVar1);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar2);
  _objc_release(puVar4);
  func_0x00010c1d64a0(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010057694c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd40(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c1ebe80(puVar3);
  func_0x00010c204680(puVar3);
  func_0x00010c18b880(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a19c08; end: 105a19c43; -[SCStoriesFSNNetworkRequester _createAdditionalHeadersWithCustomAdditionalHttpHeaders:] */

void FUN_105a19c08(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105a19c44; end: 105a19d87; -[SCStoriesFSNNetworkRequester _submitDeleteStoryRequestWithStoryType:token:serverId:customAdditionalHTTPHeaders:successQueue:successBlock:failureQueue:failureBlock:] */

void FUN_105a19c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdf2b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdea860(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar3 = lVar1;
  func_0x00010059c104(lVar1,param_4,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e172d8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c25f660(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a19d88; end: 105a19de7; -[SCStoriesFSNNetworkRequester .cxx_destruct] */

void FUN_105a19d88(long param_1)

{
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



/* Entry: 105a19de8; end: 105a19e83; -[SCStoriesMixerEndpointManager initWithCircumstanceEngine:storiesConfigProvider:] */

undefined1 *
FUN_105a19de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb538;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a19e84; end: 105a1a047; -[SCStoriesMixerEndpointManager endpointBaseURLStringWithSource:] */

void FUN_105a19e84(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  puVar4 = param_1;
  if ((param_3 < 0xc) && ((1L << (param_3 & 0x3f) & 0xc24U) != 0)) {
    func_0x000108f55398();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f54ef0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = puVar4;
  func_0x00010c08fa60();
  if (puVar1 != (undefined *)0x0) {
    _objc_retain(puVar4);
    puVar1 = puVar4;
    goto LAB_105a1a028;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c1300;
  func_0x00010c125aa0(PTR_PTR_1126c1300);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067e40(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  if (param_3 < 0xc) {
    puVar1 = PTR_PTR_1126c1308;
    if ((1L << (param_3 & 0x3f) & 0x1d9U) == 0) {
      if ((1L << (param_3 & 0x3f) & 0xe24U) == 0) {
        param_1 = param_1 + 8;
        _objc_loadWeakRetained();
        puVar1 = param_1;
        func_0x000108f41f4c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (((uint)uVar3 >> 1 & 1) != 0) {
          func_0x00010c24bda0();
          _objc_retainAutoreleasedReturnValue();
          goto joined_r0x000105a19fe0;
        }
        param_1 = param_1 + 8;
        _objc_loadWeakRetained();
        puVar1 = param_1;
        func_0x000108f41fc8();
        _objc_retainAutoreleasedReturnValue();
      }
LAB_105a1a000:
      _objc_release(param_1);
    }
    else {
      if ((uVar3 & 1) == 0) {
        param_1 = param_1 + 8;
        _objc_loadWeakRetained();
        puVar1 = param_1;
        func_0x000108f41ed0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105a1a000;
      }
      func_0x00010bf719e0();
      _objc_retainAutoreleasedReturnValue();
    }
joined_r0x000105a19fe0:
    if (puVar1 != (undefined *)0x0) goto LAB_105a1a028;
  }
  puVar1 = PTR_PTR_1126c1308;
  func_0x00010bf69480(PTR_PTR_1126c1308);
  _objc_retainAutoreleasedReturnValue();
LAB_105a1a028:
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a1a048; end: 105a1a11b; -[SCStoriesMixerEndpointManager preferredSnapTokenAccessType:] */

undefined8 FUN_105a1a048(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  if ((param_3 < 0xc) && ((1L << (param_3 & 0x3f) & 0xc24U) != 0)) {
    func_0x000108f55398();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f54ef0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = uVar2;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    if ((param_3 < 0xc) && ((1L << (param_3 & 0x3f) & 0xc24U) != 0)) {
      func_0x00010bf95de0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010bf4bb00();
      _objc_release(param_1);
      if ((uVar1 & 1) != 0) goto LAB_105a1a094;
    }
    uVar3 = 6;
  }
  else {
LAB_105a1a094:
    uVar3 = 1;
  }
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 105a1a11c; end: 105a1a147; -[SCStoriesMixerEndpointManager batchStoryLookupPath:] */

undefined ** FUN_105a1a11c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e172f8;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e16018;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e17318;
  if (param_3 != 3) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 105a1a148; end: 105a1a163; -[SCStoriesMixerEndpointManager storyLookupPath:] */

undefined ** FUN_105a1a148(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17358;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e17338;
  }
  return ppuVar1;
}



/* Entry: 105a1a164; end: 105a1a18b; -[SCStoriesMixerEndpointManager batchStoriesPath:] */

undefined ** FUN_105a1a164(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xb) {
    return (undefined **)(&PTR_PTR_1108cdf28)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e17378;
}



/* Entry: 105a1a18c; end: 105a1a1b3; -[SCStoriesMixerEndpointManager storiesPath:] */

undefined ** FUN_105a1a18c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xb) {
    return (undefined **)(&PTR_PTR_1108cdf80)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e17458;
}



/* Entry: 105a1a1b4; end: 105a1a2df; -[SCStoriesMixerEndpointManager contentGatewayBaseURLString] */

void FUN_105a1a1b4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  puVar1 = param_1;
  func_0x000108f54ef0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c1300;
    func_0x00010c125aa0(PTR_PTR_1126c1300);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067e40(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained();
      puVar5 = param_1;
      func_0x000108f42044();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      puVar2 = puVar5;
      func_0x00010c08fa60();
      if (puVar2 == (undefined *)0x0) {
        puVar2 = PTR_PTR_1126c1308;
        func_0x00010bf69760(PTR_PTR_1126c1308);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar5);
        puVar2 = puVar5;
      }
      _objc_release(puVar5);
    }
    else {
      puVar2 = PTR_PTR_1126c1308;
      func_0x00010bfbe5c0(PTR_PTR_1126c1308);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a1a2e0; end: 105a1a30b; -[SCStoriesMixerEndpointManager .cxx_destruct] */

void FUN_105a1a2e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a1a30c; end: 105a1a45f; -[SCStoriesActiveStoryNetworkRequester initWithRequestMetadataService:requestModifier:userSession:grapheneMetricsEmitter:networkConnectivityMonitor:locationProvider:] */

undefined1 *
FUN_105a1a30c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eb540;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a1a460; end: 105a1a4f7; -[SCStoriesActiveStoryNetworkRequester fetchActiveStoryWithRequestSource:requestOrigin:userIds:completionQueue:completion:] */

void FUN_105a1a460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bdee320(param_1,param_2,param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9fea0(param_1,param_2,uVar1,param_3,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a1a4f8; end: 105a1a4ff; -[SCStoriesActiveStoryNetworkRequester _logNetworkMetricsWithPath:requestSource:success:requestSize:responseSize:] */

void FUN_105a1a4f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logStoriesNetworkRequestWithEndp_112609d78);
  return;
}



/* Entry: 105a1a500; end: 105a1a6db; -[SCStoriesActiveStoryNetworkRequester _sendRequest:requestSource:completionQueue:completion:] */

void FUN_105a1a500(undefined **param_1,long param_2,long param_3,long param_4,undefined **param_5,
                  undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    _objc_initWeak(auStack_68,param_1);
    unaff_x24 = param_1[4];
    ppuVar9 = &PTR____CFConstantStringClassReference_110df7a58;
    if (param_4 != 1) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110df7a38;
    }
    param_1 = &PTR____CFConstantStringClassReference_110df7a78;
    if (param_4 != 2) {
      param_1 = ppuVar9;
    }
    _objc_retain(param_1);
    unaff_x25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_60 = param_1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105a1a6dc;
    puStack_90 = &UNK_1108cdfd8;
    unaff_x26 = &puStack_a8;
    _objc_copyWeak(auStack_78,auStack_68);
    lStack_70 = param_4;
    _objc_retain(param_5);
    ppuStack_88 = param_5;
    _objc_retain(param_6);
    ppuVar9 = &puStack_a8;
    param_2 = param_3;
    uStack_80 = param_6;
    FUN_105a1c1ac(unaff_x24,param_3,unaff_x25,param_5,ppuVar9);
    _objc_release(unaff_x25);
    _objc_release(param_1);
    _objc_release(uStack_80);
    _objc_release(ppuStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 6);
  _objc_destroyWeak(auStack_68);
  lVar5 = param_3;
  __Unwind_Resume();
  puVar6 = PTR_PTR_1126c1310;
  pcStack_b8 = FUN_105a1a6dc;
  ppuStack_100 = unaff_x26;
  puStack_f8 = unaff_x25;
  puStack_f0 = unaff_x24;
  lStack_e8 = param_4;
  ppuStack_e0 = param_1;
  uStack_d8 = param_6;
  ppuStack_d0 = param_5;
  lStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  _objc_retain(param_2);
  _objc_alloc();
  uStack_108 = 0;
  func_0x00010c008360();
  _objc_release(ppuVar9);
  uVar4 = uStack_108;
  _objc_retain(uStack_108);
  lVar7 = lVar5 + 0x30;
  _objc_loadWeakRetained(lVar7);
  ppuVar9 = &PTR____CFConstantStringClassReference_110df7a58;
  if (*(long *)(lVar5 + 0x38) != 1) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110df7a38;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110df7a78;
  if (*(long *)(lVar5 + 0x38) != 2) {
    ppuVar1 = ppuVar9;
  }
  _objc_retain(ppuVar1);
  lVar8 = param_2;
  func_0x00010bf1e9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c08fa60(lVar8);
  func_0x00010c15ebe0(puVar6);
  func_0x00010be56480(lVar7);
  _objc_release(ppuVar1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_105a1a89c;
  puStack_128 = &UNK_11084a9e8;
  uStack_120 = uVar4;
  uVar2 = *(undefined8 *)(lVar5 + 0x20);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  _objc_retain(uVar3);
  puStack_118 = puVar6;
  uStack_110 = uVar3;
  _objc_retain(puVar6);
  _objc_retain(uVar4);
  func_0x00010007380c(uVar2,&puStack_140);
  _objc_release(puStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_120);
  _objc_release(puVar6);
  _objc_release(uVar4);
  return;
}



/* Entry: 105a1a6dc; end: 105a1a89b;  */

void FUN_105a1a6dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = PTR_PTR_1126c1310;
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_alloc();
  uStack_58 = 0;
  func_0x00010c008360();
  _objc_release(param_5);
  uVar4 = uStack_58;
  _objc_retain(uStack_58);
  lVar6 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar6);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df7a58;
  if (*(long *)(param_1 + 0x38) != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df7a38;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110df7a78;
  if (*(long *)(param_1 + 0x38) != 2) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  uVar7 = param_2;
  func_0x00010bf1e9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c08fa60(uVar7);
  func_0x00010c15ebe0(puVar5);
  func_0x00010be56480(lVar6);
  _objc_release(ppuVar2);
  _objc_release(uVar7);
  _objc_release(lVar6);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105a1a89c;
  puStack_78 = &UNK_11084a9e8;
  uStack_70 = uVar4;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  puStack_68 = puVar5;
  uStack_60 = uVar3;
  _objc_retain(puVar5);
  _objc_retain(uVar4);
  func_0x00010007380c(uVar7,&puStack_90);
  _objc_release(puStack_68);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(puVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 105a1a89c; end: 105a1a8c3;  */

void FUN_105a1a89c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a1a8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105a1a8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a1a8c4; end: 105a1aaab; -[SCStoriesActiveStoryNetworkRequester _createGetActiveStoryStatusRequestWithUserIds:requestOrigin:] */

void FUN_105a1a8c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c1318;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108ce028);
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6340(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0f00;
  _objc_alloc_init(PTR_PTR_1126c0f00);
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar3);
  _objc_release(puVar4);
  func_0x00010c1d64a0(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010057694c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd40(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c1ebe80(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  uVar6 = uVar5;
  FUN_105a1c014(uVar5,1,puVar1,&PTR____CFConstantStringClassReference_110e17558,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105a1aaac; end: 105a1abff;  */

void FUN_105a1aaac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c1320;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c20ddc0();
  uVar2 = param_2;
  func_0x000100576e9c(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c20d1a0(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c1328;
  _objc_alloc_init(PTR_PTR_1126c1328);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf64e40(0xc0f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c209b40(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1962e0(puVar3);
  _objc_release(puVar4);
  func_0x00010c1bda80(puVar3);
  func_0x00010c1b0620(puVar3);
  func_0x00010c21f980(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a1ac00; end: 105a1ac5f; -[SCStoriesActiveStoryNetworkRequester .cxx_destruct] */

void FUN_105a1ac00(long param_1)

{
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



/* Entry: 105a1ac60; end: 105a1ad83; -[SCStoriesDeleteStoryDraftingSnapsNetworkRequester initWithRequestMetadataService:requestModifier:userSession:networkConnectivityMonitor:locationProvider:] */

undefined1 *
FUN_105a1ac60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eb548;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a1ad84; end: 105a1ae13; -[SCStoriesDeleteStoryDraftingSnapsNetworkRequester deleteStoryDraftingSnapsWithIds:storyOwner:completionQueue:completion:] */

void FUN_105a1ad84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bdece20(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9fe60(param_1,param_2,uVar1,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a1ae14; end: 105a1af87; -[SCStoriesDeleteStoryDraftingSnapsNetworkRequester _sendRequest:completionQueue:completion:] */

void FUN_105a1ae14(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105a1aee4;
    puStack_48 = &UNK_1108b0af8;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_5);
    uStack_38 = param_5;
    FUN_105a1c1ac(uVar1,param_3,PTR____NSArray0__struct_11034ab48,param_4,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a1af88; end: 105a1afa3;  */

void FUN_105a1af88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a1af98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105a1afa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,1);
  return;
}



/* Entry: 105a1afa4; end: 105a1b16b; -[SCStoriesDeleteStoryDraftingSnapsNetworkRequester _createDeleteStoryDraftingSnapsRequestWithIds:storyOwner:] */

void FUN_105a1afa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c1330;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c204700(puVar1);
  _objc_release(uVar2);
  func_0x00010c20d5c0(puVar1);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126c0f00;
  _objc_alloc_init(PTR_PTR_1126c0f00);
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar3);
  _objc_release(puVar4);
  func_0x00010c1d64a0(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010057694c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd40(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  func_0x00010c1ebe80(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  uVar2 = uVar5;
  FUN_105a1c014(uVar5,1,puVar1,&PTR____CFConstantStringClassReference_110e17598,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a1b16c; end: 105a1b1bf; -[SCStoriesDeleteStoryDraftingSnapsNetworkRequester .cxx_destruct] */

void FUN_105a1b16c(long param_1)

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



/* Entry: 105a1b1c0; end: 105a1b2e3; -[SCStoriesFriendStoryPrivacySettingNetworkRequester initWithRequestMetadataService:requestModifier:userSession:networkConnectivityMonitor:locationProvider:] */

undefined1 *
FUN_105a1b1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eb550;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a1b2e4; end: 105a1b46f; -[SCStoriesFriendStoryPrivacySettingNetworkRequester setStoryPrivacy:toBlockUserIds:completionQueue:completion:] */

void FUN_105a1b2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x00010c0c0f00(param_3);
  uVar1 = param_1;
  func_0x00010bdf28e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9fe60(param_1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a1b470; end: 105a1b4bb;  */

void FUN_105a1b470(long param_1)

{
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105a1b4bc; end: 105a1b67f; -[SCStoriesFriendStoryPrivacySettingNetworkRequester _sendRequest:completionQueue:completion:] */

void FUN_105a1b4bc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105a1b58c;
    puStack_48 = &UNK_1108b0af8;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_5);
    uStack_38 = param_5;
    FUN_105a1c1ac(uVar1,param_3,PTR____NSArray0__struct_11034ab48,param_4,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a1b680; end: 105a1b69f;  */

void FUN_105a1b680(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a1b694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105a1b69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,1);
  return;
}



/* Entry: 105a1b6a0; end: 105a1b883; -[SCStoriesFriendStoryPrivacySettingNetworkRequester _createRequestWithStoryPrivacy:toBlockUserIds:] */

void FUN_105a1b6a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c1340;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  uVar2 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108ce068);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171d80(puVar1);
  _objc_release(puVar3);
  func_0x00010c20d740(puVar1);
  puVar3 = PTR_PTR_1126c0f00;
  _objc_alloc_init(PTR_PTR_1126c0f00);
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar3);
  _objc_release(puVar4);
  func_0x00010c1d64a0(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010057694c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd40(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c1ebe80(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  uVar6 = uVar5;
  FUN_105a1c014(uVar5,1,puVar1,&PTR____CFConstantStringClassReference_110e175b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105a1b884; end: 105a1b88b;  */

void FUN_105a1b884(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000100576d08(param_2,auStack_28,auStack_30);
  puVar1 = PTR_PTR_1126b3e70;
  func_0x000107c610fc(PTR_PTR_1126b3e70);
  func_0x000107c55138();
  func_0x000107c5616c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a1b88c; end: 105a1b8df; -[SCStoriesFriendStoryPrivacySettingNetworkRequester .cxx_destruct] */

void FUN_105a1b88c(long param_1)

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



/* Entry: 105a1b8e0; end: 105a1ba03; -[SCStoriesRequestedRankingSignalsNetworkRequester initWithRequestMetadataService:requestModifier:userSession:networkConnectivityMonitor:locationProvider:] */

undefined1 *
FUN_105a1b8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eb558;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a1ba04; end: 105a1bb7b; -[SCStoriesRequestedRankingSignalsNetworkRequester boostStories:startTime:endTime:completionQueue:completion:] */

void FUN_105a1ba04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar1 = PTR_PTR_1126c1348;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c209a40();
  func_0x00010c196220(puVar1);
  puVar2 = PTR_PTR_1126c1350;
  _objc_opt_new();
  func_0x00010c1f6e00();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105a1bb7c;
  puStack_80 = &UNK_1108ce088;
  puStack_78 = puVar2;
  _objc_retain(puVar2);
  uVar3 = param_3;
  func_0x000100504554(param_3,&puStack_98);
  _objc_release(param_3);
  uVar4 = param_1;
  func_0x00010bdf2860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9fe60(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puStack_78);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a1bb7c; end: 105a1bc53;  */

void FUN_105a1bb7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c1358;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d1a0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c25b720();
  _objc_release(param_2);
  func_0x00010c20ddc0(puVar1);
  func_0x00010c21f180(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a1bc54; end: 105a1bd23; -[SCStoriesRequestedRankingSignalsNetworkRequester _sendRequest:completionQueue:completion:] */

void FUN_105a1bc54(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105a1bd24;
    puStack_48 = &UNK_1108b0af8;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_5);
    uStack_38 = param_5;
    FUN_105a1c1ac(uVar1,param_3,PTR____NSArray0__struct_11034ab48,param_4,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a1bd24; end: 105a1be43;  */

void FUN_105a1bd24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(in_x5);
  puVar4 = PTR_PTR_1126c1360;
  _objc_retain(in_x4);
  _objc_alloc();
  uStack_48 = 0;
  func_0x00010c008360();
  _objc_release(in_x4);
  uVar3 = uStack_48;
  _objc_retain(uStack_48);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105a1be44;
  puStack_70 = &UNK_1108465d0;
  uStack_60 = uVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = in_x5;
  _objc_retain(uVar2);
  puStack_58 = puVar4;
  uStack_50 = uVar2;
  _objc_retain(puVar4);
  _objc_retain(uVar3);
  _objc_retain(in_x5);
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(puStack_58);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(in_x5);
  return;
}



/* Entry: 105a1be44; end: 105a1beaf;  */

void FUN_105a1be44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar1);
    if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a1beac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
      return;
    }
  }
  else {
    _objc_retain(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a1beb0; end: 105a1bfbf; -[SCStoriesRequestedRankingSignalsNetworkRequester _createRequestWithSignals:] */

void FUN_105a1beb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c1368;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c0d3c80(param_3);
  _objc_release(param_3);
  func_0x00010c21c7a0(puVar1);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100564a1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  uVar2 = uVar3;
  FUN_105a1c014(uVar3,1,puVar1,&PTR____CFConstantStringClassReference_110e175d8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a1bfc0; end: 105a1c013; -[SCStoriesRequestedRankingSignalsNetworkRequester .cxx_destruct] */

void FUN_105a1bfc0(long param_1)

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



/* Entry: 105a1c014; end: 105a1c16f;  */

void FUN_105a1c014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  func_0x00010bef7f60(puVar3);
  _objc_release(param_5);
  uVar4 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = param_1;
  func_0x00010bf225e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105a1c170; end: 105a1c1ab;  */

void FUN_105a1c170(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a1c1ac; end: 105a1c2df;  */

void FUN_105a1c1ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b5730;
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    puVar2 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b560(puVar1);
    _objc_release(param_3);
    _objc_release(puVar2);
    uVar3 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c25f600(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a1c2e0; end: 105a1c7e3; -[SCStoriesSTMSNetworkRequester initWithRequestMetadataService:requestModifier:userSession:grapheneMetricsEmitter:networkConnectivityMonitor:locationProvider:] */

undefined8 *
FUN_105a1c2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_80 = PTR_PTR_1126eb560;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105a1c7e4; end: 105a1c933;  */

void FUN_105a1c7e4(void)

{
  _objc_alloc(PTR_PTR_1126c1370);
  func_0x00010c03f480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a1c934; end: 105a1c9d3; -[SCStoriesSTMSNetworkRequester fetchActiveStoryWithRequestSource:requestOrigin:userIds:completionQueue:completion:] */

void FUN_105a1c934(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4a40();
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a1c9d4; end: 105a1ca7b; -[SCStoriesSTMSNetworkRequester setStoryPrivacy:toBlockUserIds:completionQueue:completion:] */

void FUN_105a1c9d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d780();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a1ca7c; end: 105a1cb1b; -[SCStoriesSTMSNetworkRequester boostStories:startTime:endTime:completionQueue:completion:] */

void FUN_105a1ca7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f920(param_1,param_2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a1cb1c; end: 105a1cbcb; -[SCStoriesSTMSNetworkRequester fetchStoryDraftingSnapsWithQuery:draftingStatus:storyOwner:completionQueue:completion:] */

void FUN_105a1cb1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaa920();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a1cbcc; end: 105a1cc73; -[SCStoriesSTMSNetworkRequester deleteStoryDraftingSnapsWithIds:storyOwner:completionQueue:completion:] */

void FUN_105a1cbcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6caa0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a1cc74; end: 105a1cd1b; -[SCStoriesSTMSNetworkRequester updateStoryDraftingSnapsWithGoLiveTimestamps:storyOwner:completionQueue:completion:] */

void FUN_105a1cc74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a5a0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a1cd1c; end: 105a1cd7b; -[SCStoriesSTMSNetworkRequester .cxx_destruct] */

void FUN_105a1cd1c(long param_1)

{
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



/* Entry: 105a1cd7c; end: 105a1ce9f; -[SCStoriesStoryDraftingSnapsNetworkRequester initWithRequestMetadataService:requestModifier:userSession:networkConnectivityMonitor:locationProvider:] */

undefined1 *
FUN_105a1cd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eb568;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a1cea0; end: 105a1cf37; -[SCStoriesStoryDraftingSnapsNetworkRequester fetchStoryDraftingSnapsWithQuery:draftingStatus:storyOwner:completionQueue:completion:] */

void FUN_105a1cea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bdee340(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9fe60(param_1,param_2,uVar1,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a1cf38; end: 105a1d0fb; -[SCStoriesStoryDraftingSnapsNetworkRequester _sendRequest:completionQueue:completion:] */

void FUN_105a1cf38(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105a1d008;
    puStack_48 = &UNK_1108b0af8;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_5);
    uStack_38 = param_5;
    FUN_105a1c1ac(uVar1,param_3,PTR____NSArray0__struct_11034ab48,param_4,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a1d0fc; end: 105a1d123;  */

void FUN_105a1d0fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a1d114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105a1d120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a1d124; end: 105a1d2e3; -[SCStoriesStoryDraftingSnapsNetworkRequester _createGetStoryDraftingSnapsRequestWithQuery:draftingStatus:storyOwner:] */

void FUN_105a1d124(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c13a8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1e6360();
  _objc_release(param_3);
  func_0x00010c20dbe0(puVar1);
  func_0x00010c20d5c0(puVar1);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126c0f00;
  _objc_alloc_init(PTR_PTR_1126c0f00);
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar2);
  _objc_release(puVar3);
  func_0x00010c1d64a0(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010057694c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd40(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c1ebe80(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  uVar5 = uVar4;
  FUN_105a1c014(uVar4,1,puVar1,&PTR____CFConstantStringClassReference_110e17618,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105a1d2e4; end: 105a1d337; -[SCStoriesStoryDraftingSnapsNetworkRequester .cxx_destruct] */

void FUN_105a1d2e4(long param_1)

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



/* Entry: 105a1d338; end: 105a1d45b; -[SCStoriesUpdateStoryDraftingSnapsNetworkRequester initWithRequestMetadataService:requestModifier:userSession:networkConnectivityMonitor:locationProvider:] */

undefined1 *
FUN_105a1d338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eb570;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a1d45c; end: 105a1d4eb; -[SCStoriesUpdateStoryDraftingSnapsNetworkRequester updateStoryDraftingSnapsWithGoLiveTimestamps:storyOwner:completionQueue:completion:] */

void FUN_105a1d45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bdf53e0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9fe60(param_1,param_2,uVar1,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a1d4ec; end: 105a1d5bb; -[SCStoriesUpdateStoryDraftingSnapsNetworkRequester _sendRequest:completionQueue:completion:] */

void FUN_105a1d4ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105a1d5bc;
    puStack_48 = &UNK_1108b0af8;
    _objc_retain(param_4);
    uStack_40 = param_4;
    _objc_retain(param_5);
    uStack_38 = param_5;
    FUN_105a1c1ac(uVar1,param_3,PTR____NSArray0__struct_11034ab48,param_4,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a1d5bc; end: 105a1d6df;  */

void FUN_105a1d5bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(in_x5);
  puVar4 = PTR_PTR_1126c13b0;
  _objc_retain(in_x4);
  _objc_alloc();
  uStack_48 = 0;
  func_0x00010c008360();
  _objc_release(in_x4);
  uVar3 = uStack_48;
  _objc_retain(uStack_48);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105a1d6e0;
  puStack_70 = &UNK_1108465d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = in_x5;
  _objc_retain(uVar2);
  uStack_60 = uVar3;
  puStack_58 = puVar4;
  uStack_50 = uVar2;
  _objc_retain(puVar4);
  _objc_retain(uVar3);
  _objc_retain(in_x5);
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_50);
  _objc_release(uStack_68);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(in_x5);
  return;
}



/* Entry: 105a1d6e0; end: 105a1d71f;  */

void FUN_105a1d6e0(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a1d71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x38);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000105a1d70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,0);
  return;
}



/* Entry: 105a1d720; end: 105a1d967; -[SCStoriesUpdateStoryDraftingSnapsNetworkRequester _createUpdateStoryDraftingSnapsRequestWithGoLiveTimestamps:storyOwner:] */

void FUN_105a1d720(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c13b8;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c20d5c0();
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010c28a580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf002e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105a1d968;
  puStack_50 = &UNK_1108ce1f8;
  uStack_48 = param_3;
  _objc_retain(param_3);
  uVar5 = uVar3;
  func_0x000100504554(uVar3,&puStack_68);
  func_0x00010c16a300(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0f00;
  _objc_alloc_init(PTR_PTR_1126c0f00);
  puVar4 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar2);
  _objc_release(puVar4);
  func_0x00010c1d64a0(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010057694c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd40(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  func_0x00010c1ebe80(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  uVar3 = uVar5;
  FUN_105a1c014(uVar5,1,puVar1,&PTR____CFConstantStringClassReference_110e17638,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105a1d968; end: 105a1d9ff;  */

void FUN_105a1d968(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126c13c0;
  _objc_retain(param_2);
  _objc_alloc_init(puVar2);
  func_0x00010c204680();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c26f260(puVar1);
  func_0x00010c1a3d60(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a1da00; end: 105a1db13; -[SCStoriesUpdateStoryDraftingSnapsNetworkRequester .cxx_destruct] */

void FUN_105a1da00(long param_1)

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



/* Entry: 105a1db14; end: 105a1dd47; -[SCStoriesPreferencesServicesEntryPoint _storySettingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a1db14(long param_1,undefined8 param_2)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR_PTR_1126c13d0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272d91c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c25aaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11272d920;
  lVar4 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar8 = lVar17;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272d924;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bfb8f40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11272d928;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11272d92c;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11272d930;
  lVar15 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar18 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04df20(puVar1,param_2,lVar3,lVar5,lVar7,lVar8,lVar10,lVar12,lVar14,lVar16,lVar18);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a1dd48; end: 105a1ddc3; -[SCStoriesPreferencesServicesEntryPoint _storiesOnboardingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a1dd48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c13d8;
  _objc_alloc(PTR_PTR_1126c13d8);
  param_1 = param_1 + _DAT_11272d930;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ca20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a1ddc4; end: 105a1de3f; -[SCStoriesPreferencesServicesEntryPoint _storyCustomTTLSettingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a1ddc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c13e0;
  _objc_alloc(PTR_PTR_1126c13e0);
  param_1 = param_1 + _DAT_11272d928;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a1de40; end: 105a1dec3; -[SCStoriesPreferencesServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a1de40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272d918,0);
  _objc_destroyWeak(param_1 + _DAT_11272d928);
  _objc_destroyWeak(param_1 + _DAT_11272d924);
  _objc_destroyWeak(param_1 + _DAT_11272d92c);
  _objc_destroyWeak(param_1 + _DAT_11272d920);
  _objc_destroyWeak(param_1 + _DAT_11272d91c);
  _objc_destroyWeak(param_1 + _DAT_11272d930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d934);
  return;
}



/* Entry: 105a1dec4; end: 105a1dfdb; -[SCStoryCustomTTLSettingManager initWithCircumstanceEngine:] */

undefined1 * FUN_105a1dec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb578;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    uVar3 = param_3;
    func_0x000108f42234();
    *(char *)((long)puVar1 + 0xc) = (char)uVar3;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar2;
    _objc_release(uVar3);
    if (*(char *)((long)puVar1 + 0xc) == '\x01') {
      puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
      func_0x00010c24d8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
      *(undefined **)((long)puVar1 + 0x60) = puVar2;
      _objc_release(uVar3);
      func_0x00010be4cfa0(puVar1);
    }
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a1dfdc; end: 105a1e043; -[SCStoryCustomTTLSettingManager customTTLForType:] */

undefined8 FUN_105a1dfdc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 unaff_x21;
  
  _os_unfair_lock_lock(param_1 + 8);
  func_0x00010be92e20(param_1);
  if (param_3 < 3) {
    unaff_x21 = *(undefined8 *)(param_1 + param_3 * 8 + 0x10);
  }
  _os_unfair_lock_unlock(param_1 + 8);
  return unaff_x21;
}



/* Entry: 105a1e044; end: 105a1e0df; -[SCStoryCustomTTLSettingManager setCustomTTL:forType:] */

void FUN_105a1e044(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 8);
  if (param_4 < 3) {
    *(undefined8 *)(param_1 + param_4 * 8 + 0x10) = param_3;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    func_0x00010c28b100(param_1,param_2,param_4);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 105a1e0e0; end: 105a1e16f; -[SCStoryCustomTTLSettingManager customTTLForCustomStoryPublicationId:] */

undefined8 FUN_105a1e0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  func_0x00010be92e20(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105a1e170; end: 105a1e23f; -[SCStoryCustomTTLSettingManager setCustomTTL:forCustomStoryPublicationId:] */

void FUN_105a1e170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar1,param_4);
  _objc_release(puVar1);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    func_0x00010c28b140(param_1,param_2,param_4);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar1;
    _objc_release(uVar2);
  }
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a1e240; end: 105a1e2cf; -[SCStoryCustomTTLSettingManager customTTLForBusinessStory:] */

undefined8 FUN_105a1e240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  func_0x00010be92e20(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105a1e2d0; end: 105a1e3ab; -[SCStoryCustomTTLSettingManager setCustomTTL:forBusinessStory:] */

void FUN_105a1e2d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,puVar2,param_4);
    _objc_release(puVar2);
    if (*(char *)(param_1 + 0xc) == '\x01') {
      func_0x00010c28b120(param_1,param_2,param_4);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      *(undefined **)(param_1 + 0x68) = puVar2;
      _objc_release(uVar3);
    }
    _os_unfair_lock_unlock(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a1e3ac; end: 105a1e3e7; -[SCStoryCustomTTLSettingManager updateTimestampFor:] */

void FUN_105a1e3ac(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  if (param_4 < 3) {
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + param_4 * 8 + 0x28) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9a070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__saveTTLAndTimeForType__1125841b8,param_4);
  return;
}


